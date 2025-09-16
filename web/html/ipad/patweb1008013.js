//jsVersion  : V11.03.00
//
//----------------------------------------------------------------
//  Update Bed Request
//  Version  : V10.03.00
// V10.09.01 20.12.2016 Ebon Clements  TSK 0317597
//                      Added input-resize class to hospital
// V10.08.01 14.11.2016 Ebon Clements  TSK 0322699
//                      Added assignFreeFormat()
// V10.03.03 06.08.2013 B.G.Ackland CAR 289383
//                       New AJAXPostString2 to fix post encoding
//  V10.03.02 24.07.2013 B.G.Ackland CAR 288223
//                       Fix Parent Page Refresh for new Framework
//-----------------------------------------------------------------
var emptyBedList = new Object();
function setButtons() {
 showList();
 if(document.UpdateForm.d_pmbrq007.value=="3" ||
   document.UpdateForm.d_pmbrq007.value=="4") {
   document.UpdateForm.pmbrq009.disabled=true;
   document.UpdateForm.pmbrq010.disabled=true;
 } 
 if(document.UpdateForm.d_pmbrq007.value==" " ||
   document.UpdateForm.d_pmbrq007.value=="1") {
 } 
 if(document.UpdateForm.ibcnmhos.value=="1") {
  document.getElementById('Hospital').style.display="";
   document.UpdateForm.pmbrq014.className="input-resize Mandatory";
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
  var bool = validateMandatory(UpdateForm);
  if(bool) {
    theURL=document.UpdateForm.action;
    document.UpdateForm.updttype.value='U';
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
        parent.document.location.reload();
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
function SetExpBed() {
 if(isWhitespace(document.UpdateForm.pmbrq009.value) ||
    isWhitespace(document.UpdateForm.d_pmbrq010.value)) {
   return;
 }
 selectOptions2('31',document.UpdateForm.pmbrq009,document.UpdateForm.pmbrq010);
 for (var i =0 ; i < document.UpdateForm.pmbrq010.length; i++) {
 if (document.UpdateForm.pmbrq010.options[i].value==
     document.UpdateForm.d_pmbrq010.value) {
     document.UpdateForm.pmbrq010.selectedIndex=i } };
 document.UpdateForm.d_pmbrq010.value="";
}
function SelectBed(ward,bed) {
  el=UpdateForm.pmbrq009
  for (i=0;i<el.options.length;i++) {
    if (el.options[i].value.substr(0,3)==ward) {
      el.selectedIndex=i;
    }
  }
  selectOptions2('31',UpdateForm.pmbrq009,UpdateForm.pmbrq010);
  el=UpdateForm.pmbrq010
  for (i=0;i<el.options.length;i++) {
    if (el.options[i].value.substr(0,3)==bed) {
      el.selectedIndex=i;
    }
  }
}
//-----------------------------------------------------------------------------
// display empty bed list
//-----------------------------------------------------------------------------
function filterList() {
  wardFilter=document.SearchForm.wardcode.options[document.SearchForm.wardcode.selectedIndex].value.substr(0,3)
  emptyFilter=document.SearchForm.emptonly.options[document.SearchForm.emptonly.selectedIndex].value
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
          (emptyFilter=='0'||isWhitespace(emptyBedList[i].exdiscdate))&&
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
  emptyFilter=document.SearchForm.emptonly.options[document.SearchForm.emptonly.selectedIndex].value
  var url   = "patweb95.pbl?reportno=1&template=6&norecord=99"+
              "&wardcode="+wardcode.replace(/ /g,"+")+
              "&emptonly="+emptyFilter
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    emptyBedList = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
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
function assignFreeFormat() {
  UpdateForm.pmbrq015.value = trim(UpdateForm.n_pmbrq008.value) + " ";
}
