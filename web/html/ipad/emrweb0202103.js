//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0202103.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.07.03 01.02.2016 Peter Vela        0808111
//           Added validation for double quotes in Validateprecom001()
// V10.07.02 16.11.2015 B.G.Ackland       323852 
//           Chenged validation on mandatory presenting compliant
// V10.07.01 09.11.2015 Ebon Clements  CAR 320017
//           Changed triage to redirect to summary page - setFormactn()
// V10.06.01 31.08.2015 Ebon Clements  CAR 318526
//           Changed searchPresent() to filter by search characters
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//======================================================================== 
// Program   : emrweb02
//
// Written   : 12.03.2012 B.G.Ackland 
//
// Function  : Standard Functions Used in emrweb0202103.html 
//
// Version   : 
//
// V10.03.01 10.03.2012 B.G.Ackland   
//           iPad Version Copied from emrweb0202003.js
//========================================================================
function init() {
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { TriageComplete() }
  }
}
function searchPresent(stringName,e) {
  var delayTime = 100; //250ms
  if(!e) {
    e = event;
  }
  clearTimeout(window.timeoutId);
  if(stringName.value.length >= 0)
  {
    if (e.keyCode == 8 || e.keyCode ==46) {
      window.timeoutId = setTimeout( function() { getPresent(stringName.value); },delayTime);
    } else if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <=56) ||
	     (e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    }else {
      window.timeoutId = setTimeout( function() { getPresent(stringName.value); },delayTime);
    }
  } 
} 
function getPresent(searchValue) {
  if(searchValue.length == 0) {
    selectOptions3("15",UpdateForm.emrviscat,UpdateForm.emvis060);
  } else {
    getPresentCom(searchValue,UpdateForm.emvis060,UpdateForm.emrviscat) 
  }
  return;
//  searchExp= new RegExp("^"+searchValue.replace(/ /,".*"),"i");
//  el=UpdateForm.emvis060
//  for (i=0;i<el.options.length;i++) {
//    if (searchExp.test(el.options[i].text)) {
//      el.selectedIndex=i;
//      checkInjury(el);
//      break;
//    }
//  }
}
function TriageComplete() {
 var actionBtn = parent.document.getElementById('actionButton');
 actionBtn.disabled=true; 
 if (setFormactn()) { 
   actionBtn.disabled=false; 
 } 
}
//
// Show Additional Injury Data Entry Fields
//
function checkInjury(el) {
 var inj = document.getElementById('InjuryData');
 inj.style.display='none';
 if (el.options[el.selectedIndex].value.substr(13,1)=='I') inj.style.display='';
}
function Validateprecom001() {
  UpdateForm.prcom001.value=UpdateForm.prcom001.value.replace(/\"/g,"'");
  var formatedtext=formateText(UpdateForm.prcom001,'50')
  if ((formatedtext.split(/[\r\n]/).length>6) || 
     (UpdateForm.prcom001.value.length > 300)) {
     alertify.alert("Presenting Complaint comments - Max 6 lines."
          + "<br>Please remove extra lines to continue.");
     document.UpdateForm.prcom001.focus();
     return; 
  }
}

function validateNurse() {
  validateCode('17',document.UpdateForm.emvis127,
                    document.UpdateForm.dummy1,
                    document.UpdateForm.gnm,
                    SetNurseName);
}
function validateCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnCode.value=ReturnCode.value.replace(/\+/g," ")
  for (var i=3; i < validateCode.arguments.length; i++) {
    if (typeof(validateCode.arguments[i]) == 'function') {
      ReturnFunction=validateCode.arguments[i] }
    else {
      validateCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < validateCode.arguments.length; i++) {
       if (typeof(validateCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
     }
}
function SetNurseName() {
UpdateForm.dummy1.value=UpdateForm.gnm.value.replace(/\s*$/g,"")+
                              " " +
                            UpdateForm.dummy1.value.replace(/\s*$/g,"")
}
function PatientReturn() {
  if (isWhitespace(UpdateForm.emvis118.value)) { return;;}
  validateCode(8,
               UpdateForm.emvis118,
               UpdateForm.gname,
               UpdateForm.selsex,
               UpdateForm.emexp005,
               UpdateForm.deceased,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.gname,
               UpdateForm.sname);                                              
  if (UpdateForm.deceased.value=="1") {
    alertify.alert("Patient Deceased")
    UpdateForm.emvis111.value="";
    UpdateForm.gname.value="";
    UpdateForm.selsex.value="";
    UpdateForm.emvis118.value="";
    UpdateForm.emexp005.value="";
    return; }
//
   checkExpectedPat(UpdateForm.emvis118.value)
//
   if(!CheckEmrVisit(UpdateForm.emvis118.value)) {
       UpdateForm.emvis111.value="";
       UpdateForm.gname.value="";
       UpdateForm.sname.value="";
       UpdateForm.selsex.value="";
       UpdateForm.emvis112.value="";
       UpdateForm.emexp004.selectedIndex=0;
       UpdateForm.emvis118.value="";
       UpdateForm.emvis118.focus();
       UpdateForm.emexp005.value="";
       return;
   }
//
  UpdateForm.emvis111.value=UpdateForm.gname.value.replace(/,/g,"")
  UpdateForm.emvis112.value=UpdateForm.sname.value.replace(/,/g,"")
  if(isWhitespace(UpdateForm.emvis111.value)){
    UpdateForm.emvis118.focus();
    UpdateForm.emvis118.value=" ";
  }
  UpdateSex();
}
function UpdateSex(){
for (var i =0 ; i < document.UpdateForm.emexp004.length; i++) {
if(UpdateForm.emexp004.options[i].value==UpdateForm.selsex.value.substr(0,1)) {
       document.UpdateForm.emexp004.selectedIndex=i } };
}
function CheckCode(code,selectlist)  {
 var found=0
 strvar=code.value+"   "         // format as three characters space filled
 code.value=strvar.substr(0,3)
 for (var i =0 ; i < selectlist.length; i++) {
   if (selectlist.options[i].value.substr(0,3)==code.value) {
     found=1; selectlist.selectedIndex=i } }
 if (found==0) { alertify.alert("Invalid Code Entered");code.focus() }
}
function UpdateCode(code,selectlist) {
  code.value=selectlist.value.substr(0,3)
  UpdateForm.comptext.focus()
}
function checkUR() {
  if (document.UpdateForm.emvis118.value=="") {
     document.UpdateForm.formactn.value="N1"
  } else {
     document.UpdateForm.formactn.value="N3"
     document.UpdateForm.urnumber.value=document.UpdateForm.emvis118.value
    }
}
function setFormactn() {
  if (UpdateForm.emvis003.selectedIndex<1) {
    alertify.alert("Triage Category has not been selected !");
    return true; }
  el=document.UpdateForm.emvis060;
  var pc=el.options[el.selectedIndex].value;
  if (isWhitespace(pc)) {
    alertify.alert("Presenting Complaint Required")
    return true;}
  if (UpdateForm.emvis006.selectedIndex<1) {
    el=document.UpdateForm.emvis006
    for (i=0;i<el.length;i++) {
      if (el.options[i].value="WR ") el.selectedIndex=i;
    }
  }
  if (validateMandatory(UpdateForm)) {
    checkUR()
    document.UpdateForm.updttype.value="ARRIV"
    document.UpdateForm.redirect.value="AJAXPOST"
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/AJAXPOST/i)) {
        var theURL=CGIPath+"patweb98.pbl?reportno=1&template=187"+
                 xmlHttp.responseText.substr(8,36).replace(/ /g,"+");
        parent.openMedicalRecord(theURL);
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
    return false;
  }
}
function refreshTop() {
    if (parent.menu.document.readyState=="complete") {
      parent.menu.location.reload(); }
}
function getPresentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.replace(/ /g,"+") +
                    "&valdcatc=" + CatCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
}
function validateLocation(SearchField,SearchName) {
  if (isWhitespace(SearchField.value)) {
      return;;
  }
  SearchField.value=SearchField.value.toUpperCase()
  var serverURL   = "emrweb08.pbl?reportno=2" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    SearchName.value=trim(ReturnValue[1])
    SearchField.value=trim(ReturnValue[0])
  }
  else {
     document.UpdateForm.emvis006.focus();
     document.UpdateForm.emvis006.value="";
     document.UpdateForm.name_emvis006.value="";
  }
   
}
//-----------------------------------------------------------------
// Function to check for any visits for this ur on todays date
//-----------------------------------------------------------------
function CheckEmrVisit(urnum) {
  if (isWhitespace(urnum)) {
     return true;
  }
  var serverURL = "emrweb08.pbl?reportno=17" +
                  "&valdurno=" + urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(!isWhitespace(ReturnValue[0])) {
      confirmMsg="Patient has already presented on.<br/>" +
                 "Date  - " + ReturnValue[1] + "<br/>" +
                 "U/R   - " + ReturnValue[0].replace(/ /g,"") + "<br/>" +
                 "Visit - " + ReturnValue[2].replace(/ /g,"") + "<br/>" +
                 "Select OK to continue with triage.<br/>" +
                 "Select Cancel to abort triage.";
      alertify.confirm(confirmMsg, function (e) {    
        if (!e) {
         return false;
        }
      });
    }
  }
  return true;
}
//-----------------------------------------------------------------
// Function to check for expected patients with the same name or ur
//-----------------------------------------------------------------
function checkExpectedPat(urnum) {
  if (isWhitespace(urnum)) return false;;
  var serverURL = "emrweb08.pbl?reportno=16" +
                  "&valdcode="+urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(!isWhitespace(ReturnValue[0])) {
      confirmMsg="Possible Expected Patient.<br/>" +
                 "U/R - " + ReturnValue[1].replace(/ /g,"") + "<br/>" +
                 "Surname - " + ReturnValue[2] + "<br/>" +
                 "Given Name - " + ReturnValue[3] + "<br/>" +
                 "Select OK to register U/R " + urnum.replace(/ /g,"")  +
                 " using the Expected Patient details <br/>" +
                 "Select Cancel to continue with this Patient.";
      alertify.confirm(confirmMsg, function (e) {    
        if (e) {
         top.content.UpdateForm.emexp001.value=ReturnValue[0]
         return true;
        }
      });
    }
  }
  return false;
}
function UpCase(el) {
  el.value=el.value.toUpperCase();
}
/******************************************************************************
 * Program : PatientSearch.js
 * Written : B.G Ackland
 * Function: Standard Patient Search throughout mobile clinical
 *****************************************************************************/
//
// Ajax based Patient Search
//
var theURL, theField,theFieldValue, theStatus, thePosition,theCode,dSearchResult,searchText,timeoutCtr;
function PatientFormSearch(el) {  
  if (!UpdateForm.PastHospitalVisit.checked) return
  theURL = "patweb90.pbl?reportno=1&template=902"
  var surname=UpdateForm.emvis111.value
  var given=UpdateForm.emvis112.value
  if (surname.length<3&&given.length<1) return;
  var sex=UpdateForm.emexp004.options[UpdateForm.emexp004.selectedIndex].value
  var dob=UpdateForm.emexp005.value
  timeoutCtr    = new Date().getTime();
  theURL = theURL + '&srchsnam='+surname.toUpperCase();
  if (given.length>0) theURL = theURL + '&srchgnam='+given.toUpperCase();
  if (sex=="M") theURL = theURL + '&srchpsex=M'
  if (sex=="F") theURL = theURL + '&srchpsex=F'
  if (!isWhitespace(dob)) { 
    theURL = theURL + '&srchpdob='+dob.replace(/ /g,"+");
  }
  theURL = theURL + '&srchtype=1'
  theURL = theURL + '&norecord=10';
  keycode       = event.keyCode;
  setTimeout("AJAXSearch()", 100);
}
//
// Submit AJAX Search
//
function AJAXSearch() {
  if (new Date().getTime() - timeoutCtr < 0) return false;
  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand='+Math.random();
  var SearchString = theURL;
  xmlHttp.open("GET", theURL, true);
  xmlHttp.onreadystatechange=function() {
       if (xmlHttp.readyState==4) {
         AJAXResults(); }
     }
  xmlHttp.setRequestHeader("Content-type","text/html");
  xmlHttp.setRequestHeader("Cache-Control", "no-cache");
  if (theURL==SearchString) {
    xmlHttp.send();
  }
  return false;
  theField.focus()
}
//
// Display Search Results
//
function AJAXResults() {
  dSearchResults=document.getElementById("SearchResults")
  dSearchTable=document.getElementById("RawData")
  if (xmlHttp.responseText=="") {
    dSearchResult.innerHTML="";
    dSearchTable.innerHTML="";
  }
  else {
    dSearchTable.innerHTML   = xmlHttp.responseText; 
    SearchResults();
 }
}
function SearchResults() {
    var rowCount=0;
    PatientRecords = new Table("","");
    ListString=""
    var ttable=document.getElementById("RawData");
    var trows=ttable.getElementsByTagName("tr");
    for (i=1;i<trows.length;i++) {
     if (trows[i].innerHTML.match(/\<table/i)) {
      var tcells=trows[i].getElementsByTagName("td")
        purn="";pvis="";pnam="";padd="";pdob="";psex="";
        for (j=0;j<tcells.length;j++) {
        switch (j) {
          case 0 :
           pimg=tcells[j].innerHTML.replace(/\n/,"").replace(/\<br\>.*/i,"")
           pimg=pimg.replace(/.*\>\<img .*PatientFolder/i,"<span class=PatientFolder").replace(/.gif.*/i,"></span>");
           break;
          case 1 :
           purn=tcells[j].innerHTML
           purn=purn.replace(/.*urnumber=/i,"")
           purn=purn.replace(/\&.*/i,"").replace(/\+/g," ")
           pvis=tcells[j].innerHTML.replace(/.*admissno=/i,"")
           pvis=pvis.replace(/\".*/i,"").replace(/\+/g," ")
           break;
          case 2 :
           padd=tcells[j].innerHTML.replace(/\n/,"").replace(/.*<br\>(.*)\<br\>(.*)/i,"$1, $2")
           pnam=tcells[j].innerHTML.replace(/\n/,"").replace(/\<br\>.*/i,"").replace(/onclick.*/,">")
           pnam=pnam.replace(/\<b\>/i,"").replace(/\<\/b\>/i,"")
           pnam=pnam.replace(/class=.Icon./i,"class=AlertIcon")
           break;
          case 4 :
           psex=tcells[j].innerHTML.replace(/.*\<br\>/i,"")
           psex1=psex.substr(0,1);
           pdob=tcells[j].innerHTML.replace(/\<br\>.*/i,"")
           pdob=pdob.replace(/\(/," ").replace(/\)/,"");
           break;
         }
        }
        PatientRecords.addRow(purn,pvis,pnam,padd,pdob,psex)
        ListString+="<li class=sectionItem "+
        "onclick=\"UpdateForm.emvis118.value='"+purn+"';PatientReturn();\">"+
        "<span class='listText'>"+pimg+pnam+"</span>" + // ("+page+","+psex1+","+purn+")</span>"+
        "<span class='subscriptCenter'>"+pdob+","+psex1+","+purn+"</span>"+
        "<span class='subscriptCenter'>"+padd+"</span>"+
        "</li>"
        rowCount=rowCount+1
     }
    }
  MaxRowNo=rowCount;
  if (rowCount>0) {
    CurrentDiv=document.getElementById("SearchResults")
    CurrentDiv.innerHTML=ListString;
  }
  else {
    ListString="<li class=sectionItem>"+
               "<p style='font-weight:bold;text-align:center;'>"+
               "No Matching Patients Found</p></li>"
    CurrentDiv=document.getElementById("SearchResults")
    CurrentDiv.innerHTML=ListString;
  }
}
