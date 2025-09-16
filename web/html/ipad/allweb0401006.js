//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
//
//-----------------------------------------------------------------------------
// onload function to initial page startup
//-----------------------------------------------------------------------------
function LoadPage() {
  document.AddForm.allnprnt.disabled=true;
  if(isWhitespace(document.AddForm.allon005.value)) {
    document.AddForm.allon005.value=document.AddForm.currdate.value
    document.AddForm.allon006.value=document.AddForm.currtime.value.substr(0,5)
  }
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { submitRequest() }
  }
  showEquipment();
  ValidateHCP(18,13,allon007,descript);
}
function submitRequest() {
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
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
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
//-----------------------------------------------------------------------------
function showEquipment() {
  filtr=SearchForm.filtdept.options[SearchForm.filtdept.selectedIndex].value
  theURL="allweb04.pbl?reportno=1&template=8&filtdept="+filtr +
         "&urnumber="+PatientLinks.urnumber.value;
         "&httprand="+Math.random();
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!="") {
    var h  = document.getElementsByTagName("head")[0];
    var s  = document.createElement("script");
    s.type = "text/javascript";
    s.text = xmlHttp.responseText;
    h.appendChild(s);
    EquipmentList()
  }
  else {
   SearchResults=document.getElementById("SearchResults");
   SearchResults.innerHTML = "<ul class='sectionList'>"+
                             "<li class='sectionItem' style='text-align:center'>"+
                             "No Items Found</li></ul>";
  }
}
function selectEquipment(code,name,department,consumable) {
   AddForm.deptdesc.value=department;
   AddForm.equpdesc.value=name;
   AddForm.allon004.value=code;
   AddForm.consumab.value="No";
   if (consumable=='1') {
     AddForm.consumab.value="Yes";
   }
}
function EquipmentList() {
 t = new Table();
 AddRows();
 OS= "<ul class='sectionList'>"
 for(var i = 0; i < t.rows.length; i++) {
   OS += "<li class=sectionItem onclick=\"selectEquipment("+
         "'"+t.rows[i][0]+"','" +t.rows[i][1] + "'," +
         "'"+t.rows[i][3]+"','" +t.rows[i][4] + "');\">"+
         t.rows[i][1] +"  (" + t.rows[i][0] + ")"+
         "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" +
         "Available:"+ t.rows[i][6] + "</span>"+
         "<br><span style='font-size:12px;line-height:12px;'>" +
         t.rows[i][3] + "</span>" +
         "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" +
         t.rows[i][5] + "</span></li>"
 }
 OS+='</ul>'
 SearchResults=document.getElementById("SearchResults");
 SearchResults.innerHTML=OS;
 if (t.rows.length == 0) {
   SearchResults=document.getElementById("SearchResults");
   SearchResults.innerHTML = "<ul class='sectionList'>"+
                             "<li class='sectionItem' style='text-align:center'>"+
                             "No Items Found</li></ul>";
 }
}
function PrintInfo() {
  if (document.AddForm.setnprnt.checked==true) {
    document.AddForm.allnprnt.disabled=false;
    document.AddForm.allnprnt.className="Mandatory";
  } else {
    document.AddForm.allnprnt.disabled=true;
    document.AddForm.allnprnt.selectedIndex=0;
    document.AddForm.allnprnt.className="Readonly";
  }
}
function LoanDates() {
  if(isWhitespace(document.AddForm.allon008.value)) {
    document.AddForm.allon010.className="";
    document.AddForm.allon011.className="";
  }
  if(document.AddForm.allon008.value.substr(3,1) == "1") {
    document.AddForm.allon010.className="Mandatory";
    document.AddForm.allon011.className="";
  } else if(document.AddForm.allon008.value.substr(3,1) == "2") {
    document.AddForm.allon010.className="";
    document.AddForm.allon011.className="Mandatory";
  } else {
    document.AddForm.allon010.className="";
    document.AddForm.allon011.className="";
  }

  if(document.AddForm.consumab.value == "Yes")
     document.AddForm.allon010.className="ReadOnly";

}
//*******************************************************
// check consumable items
//    disable the return date 
//*******************************************************
function checkConsumable() {
  var item = document.AddForm.consumab;
  if(item.value=="Yes") { 
    document.AddForm.allon010.disabled=true; 
    document.AddForm.allon010.className="ReadOnly";
    document.AddForm.allon010.value="";
  }
  else {
    document.AddForm.allon010.disabled=false;
    if(document.AddForm.allon010.className == "ReadOnly")
      document.AddForm.allon010.className="";
    LoanDates();
  } 
}




