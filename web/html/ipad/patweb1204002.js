//jsVersion  : V11.03.00
//
//------------------------------------------------------------
//  Update Unallocated Expected Patient Ward/Bed
//  Version  : V10.03.02
//  V10.03.02 06.08.2013 B.G.Ackland CAR 289383
//                       New AJAXPostString2 to fix post encoding
//  V10.03.01 24.07.2013 B.G.Ackland CAR 288223
//                       Fix Parent Page Refresh for new Framework
//------------------------------------------------------------
var emptyBedList = new Object();
function setButtons() {
 showList();
 var statuscheck=false;
 if(document.AddForm.admistat.value == "1") {
    document.getElementById('PreAdmission').style.display="";
    if(document.AddForm.ibcnmhos.value=="1") {
      document.AddForm.ptmis068.className="Mandatory"
    }
    statuscheck=true;
 }
 if(document.AddForm.thetflag.value == "1" &&
    (document.AddForm.bookstat.value == "0" || 
     document.AddForm.bookstat.value == "1")) {
     if(document.AddForm.ptcnbbap.value == "1") {
       document.getElementById('TheatreBooking').style.display="";
       statuscheck=true;
       if(document.AddForm.ibcnmhos.value=="1") {
         document.AddForm.bokrx002.className="Mandatory"
       }
     } else if(document.AddForm.bookstat.value == "0") {
       document.getElementById('PreAdmission').style.display="";
       statuscheck=true;
       if(document.AddForm.ibcnmhos.value=="1") {
         document.AddForm.ptmis068.className="Mandatory"
       }
     }
 }
 if(document.AddForm.admistat.value == "2" &&
     document.AddForm.bookstat.value == "3" &&
     document.AddForm.ptcnbbap.value == "1") {
       document.getElementById('TheatreBooking').style.display="";
       statuscheck=true;
       if(document.AddForm.ibcnmhos.value=="1") {
         document.AddForm.bokrx002.className="Mandatory"
       }
 }
 if(statuscheck==false) {
    alertify.alert("Invalid Admission/Booking status for Ward/Bed allocation update");
    parent.document.location.reload()
    return;
 }

  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { submitUpdate() }
  }
}
function submitUpdate() {
  var bool = validateMandatory(AddForm);
  if(bool) {
    theURL=document.AddForm.action;
    var postStr=AJAXPostString2(document.AddForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
        parent.document.location.reload()
        return;
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
  return bool
}
function SelectBed(ward,bed) {
  tb=document.getElementById('TheatreBooking')
  pa=document.getElementById('PreAdmission')
  if (pa.style.display!='none') {
    wardEl=AddForm.ptmis068
    bedEl=AddForm.ptmis076
    if (tb.style.display!='none') {
      if (wardEl.selectedIndex>0) {
        wardEl=AddForm.bokrx002;
        bedEl=AddForm.bokrx038;
      }
    }
  }
  else {
    if (tb.style.display!='none') {
       wardEl=AddForm.bokrx002;
       bedEl=AddForm.bokrx038;
    }
  }
  for (i=0;i<wardEl.options.length;i++) {
    if (wardEl.options[i].value.substr(0,3)==ward) {
      wardEl.selectedIndex=i;
    }
  }
  selectOptions2('31',wardEl,bedEl);
  for (i=0;i<bedEl.options.length;i++) {
    if (bedEl.options[i].value.substr(0,3)==bed) {
      bedEl.selectedIndex=i;
    }
  }
}
//-----------------------------------------------------------------------------
// display empty bed list
//-----------------------------------------------------------------------------
function filterList() {
  wardFilter=document.SearchForm.wardcode.options[document.SearchForm.wardcode.selectedIndex].value.substr(0,3)
  getEmptyBeds(wardFilter)
  if (emptyBedList.length>0) {
    bedTypeFilter=document.SearchForm.filtbtyp.options[document.SearchForm.filtbtyp.selectedIndex].value.substr(0,3)
    sexFilter=document.SearchForm.filtrsex.options[document.SearchForm.filtrsex.selectedIndex].value
    OS="<ul class=sectionList>";
    for(var i =0; i < emptyBedList.length; i++) {
      statusname="&nbsp;";
      expectedPatient="&nbsp;";
      bedsex="";
      if (emptyBedList[i].bedsex=='M') {
        bedsex=" (Male)";
      }
      if (emptyBedList[i].bedsex=='F') {
        bedsex=" (Female)";
      }
      if (emptyBedList[i].expect==1) {
        expectedPatient="Expect Admission:"+
                    FormatDateTime(emptyBedList[i].exptdate);
      }
      if (!isWhitespace(emptyBedList[i].exdiscdate)) {
        statusname="Expect Discharge: "+
                  FormatDate(emptyBedList[i].exdiscdate)+"  " +emptyBedList[i].exdisctime;
      }
      else {
        if (emptyBedList[i].bedstatus==1) {
          statusname="Closed";
        }
        else {
          if (emptyBedList[i].onleave==1) {
            statusname="Patient On Leave";
          }
        }
      }
      if ((sexFilter==''||sexFilter==emptyBedList[i].bedsex)&&
          (wardFilter==''||wardFilter==emptyBedList[i].wardcode)&&
          (bedTypeFilter==''||bedTypeFilter==emptyBedList[i].bedtypec)) {
        if (expectedPatient=="&nbsp;") {
          expectedPatient=statusname;
          statusname="&nbsp;";
        }
        OS += "<li class=sectionItem onclick=\"SelectBed(" +
              "'"+emptyBedList[i].wardcode+"','" +
  	      emptyBedList[i].bedcode+"');\" />"+
  	      emptyBedList[i].wardname + " - " + emptyBedList[i].bedname + bedsex +
  	      "<br><span class=subscriptCenter style='line-height:20px'>" + 
  	      expectedPatient + "</span>"+
  	      "<span class=subscriptLeft style='line-height:20px'>" + 
  	      statusname + "</span>"+
  	      "<span class=subscriptRight style='line-height:20px'>" + 
  	      emptyBedList[i].bedtype + "</span>"+
              "</li>"
      }
    }
    ListLocation = document.getElementById("SearchResults");
    ListLocation.innerHTML = OS+"</ul>";
  }
  else {
    ListLocation = document.getElementById("SearchResults");
    OS="<ul class=sectionList>"+
       "<li class=sectionItem>No Aviable Beds Found</li></ul>"
    ListLocation.innerHTML = OS;
  }
}
function getEmptyBeds(wardcode) {
  var url   = "patweb95.pbl?reportno=1&template=6&norecord=99&wardcode="+wardcode
  var xmlHttp = createHttpObject();
  xml.open('GET',url,false);
  xml.send();
  if (xml.status == 200) {
    emptyBedList = eval("("+xml.responseText+")"); //convert text to javascript object
    emptyBedList.sort(function(a,b) { 
                aStr=a.wardname+'   '+a.bedcode;
                bStr=b.wardname+'   '+b.bedcode;
                if (aStr < bStr ) { x = -1 }
                if (aStr == bStr ) { x = 0  }
                if (aStr > bStr ) { x = 1  }
                   return x ; } ); 
    return ;
  }
}
function showList() {
  document.SearchForm.wardcode.selectedIndex=0;
  filterList();
}
