//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0202010.js
//
// Written   : 14.08.2001 Harvinder Kumar
//
// Function  : Standard Functions Used in emrweb0202010.html
//
//========================================================================
//
//========================================================================
//function PatientSearch() {
//  PatientSearchFrame(UpdateForm.dummyadm,
//                     UpdateForm.emexp018,
//                     UpdateForm.dummyadm,PatientReturn);
//}
function PatientSearch() {
  if (parent.menu.document.readyState=="complete") {
    url="patweb90.pbl?reportno=01&template=060";
  
    // open patient search screen...
    if (top.menu.EmergencyFrameLink != undefined) {
      // from ED map with top and bottom pane
      top.menu.EmergencyFrameLink(url,0,0,1008,521);
    }
    else {
      // from standard page (off main menu selection)
      document.UpdateForm.patsname.value = document.UpdateForm.emexp002.value;
      document.UpdateForm.patgname.value = document.UpdateForm.emexp003.value;
      PatientSearchFrame(document.UpdateForm.dummyadm,
                         document.UpdateForm.emexp018,
                         document.UpdateForm.dummyadm,
                         PatientReturn,
                         document.UpdateForm.dummsrch);
    }
  }                     
}
function PatientSearchWA() {
  if (parent.menu.document.readyState=="complete") {
    SetCookie("PatientSearch2Cookie","1");
    url="patweb90.pbl?reportno=01&template=060"
    if (top.menu.EmergencyFrameLink != undefined) {
      // from ED map with top and bottom pane
      top.menu.EmergencyFrameLink(url,0,0,1008,521);
    } else {
      DFrameLink(url,0,0,1008,521);
    }
  }
}
function PatientReturn() {

  detailsArray = [UpdateForm.emexp002,UpdateForm.emexp003,
                  UpdateForm.emexp004,UpdateForm.emexp005];

  if(!CheckEmrVisit(document.UpdateForm.emexp018.value)){
     ToggleDetails(UpdateForm.emexp018,detailsArray);
     return false;
  }

  if(top.menu.EmergencyFrameLink != undefined){
    // from ED map with top and bottom pane
     validateCode(8,
                  document.UpdateForm.emexp018,
                  document.UpdateForm.gname,
                  document.UpdateForm.selsex,
                  document.UpdateForm.emexp005,
                  document.UpdateForm.deceased,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.dummy,
                  document.UpdateForm.gname,
                  document.UpdateForm.sname);

     if(document.UpdateForm.deceased.value=="1"){
        alert("Patient Deceased");
        document.UpdateForm.emexp018.value="";
        document.UpdateForm.gname.value="";
        document.UpdateForm.selsex.value="";
        document.UpdateForm.emexp005.value="";
        document.UpdateForm.emexp005.value="";
        ToggleDetails(UpdateForm.emexp018,detailsArray);
        return false;
     }
     document.UpdateForm.emexp002.value=document.UpdateForm.gname.value.replace(/,/g,"");
     document.UpdateForm.emexp003.value=document.UpdateForm.sname.value.replace(/,/g,"");
  }
  else {
    // from standard page (off main menu selection)
     if(isWhitespace(document.UpdateForm.emexp018.value)){ 
        ToggleDetails(UpdateForm.emexp018,detailsArray);
        return false;
     }

     validateCode(8,
                  document.UpdateForm.emexp018,
                  document.UpdateForm.gname,
                  document.UpdateForm.selsex,
                  document.UpdateForm.emexp005);

     FN(document.UpdateForm.gname.value);
  }
  dispsex();
  ToggleDetails(UpdateForm.emexp018,detailsArray);
  return true;
}

function PatientReturnWA() {

  setPatientFields();

  if (!CheckEmrVisit(document.UpdateForm.emexp018.value)) {

    UpdateForm.emexp002.value="";
    UpdateForm.gname.value="";
    UpdateForm.sname.value="";
    UpdateForm.selsex.value="";
    UpdateForm.emexp003.value="";
    if (isWhitespace(document.UpdateForm.emexp018.value)) {
      UpdateForm.emexp004.value="";
      UpdateForm.d_emexp004.value="";
    } else {
      UpdateForm.emexp004.selectedIndex=0;
    }
    UpdateForm.emexp018.value="";
    UpdateForm.emexp018.focus();
    UpdateForm.emexp005.value="";

    return false;
  }
//
  validateUrMerge(8,
               document.UpdateForm.emexp018,
               document.UpdateForm.gname,
               document.UpdateForm.selsex,
               document.UpdateForm.emexp005,
               document.UpdateForm.deceased,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.dummy,
               document.UpdateForm.gname,
               document.UpdateForm.sname);
  if (document.UpdateForm.deceased.value=="1") {
    alert("Patient Deceased")
    document.UpdateForm.emexp002.value="";
    document.UpdateForm.emexp003.value="";
    document.UpdateForm.emexp018.value="";
    document.UpdateForm.gname.value="";
    document.UpdateForm.selsex.value="";
    document.UpdateForm.emexp005.value="";
    document.UpdateForm.emexp005.value="";
    document.UpdateForm.emexp026.focus();
    setPatientFields();
    return false; }
  document.UpdateForm.emexp002.value=document.UpdateForm.gname.value.replace(/,/g,"")
  document.UpdateForm.emexp003.value=document.UpdateForm.sname.value.replace(/,/g,"")
  if(document.UpdateForm.ptcnhdps.value=="6"){
    dispsexWA();
  }else{
    if (UpdateForm.d_emexp004 != undefined) {
      UpdateForm.d_emexp004.value=UpdateForm.selsex.value;
    }
  }
  if (!isWhitespace(document.UpdateForm.emexp002.value)) {
    document.UpdateForm.emexp026.focus();
  }
  return true;
}
function PatientReturnWANoVisitCheck() {
  f = document.UpdateForm;

  setPatientFields();

  validateUrMerge(8,
               f.emexp018,
               f.gname,
               f.selsex,
               f.emexp005,
               f.deceased,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.dummy,
               f.gname,
               f.sname);

  if (f.deceased.value=="1") {
    alert("Patient Deceased")
    f.emexp002.value="";
    f.emexp003.value="";
    f.emexp018.value="";
    f.gname.value="";
    f.selsex.value="";
    f.emexp005.value="";
    f.emexp005.value="";
    f.emexp026.focus();
    setPatientFields();
    return false;
  }
  
  f.emexp002.value=f.gname.value.replace(/,/g,"")
  f.emexp003.value=f.sname.value.replace(/,/g,"")

  if (f.ptcnhdps.value=="6") {
    dispsexWA();
  }
  else {
    if (UpdateForm.d_emexp004 != undefined) {
      f.d_emexp004.value=UpdateForm.selsex.value;
    }
  }
  if (!isWhitespace(f.emexp002.value)) {
    f.emexp026.focus();
  }
  return true;
}
function FN(Name) {
  if ((Name==undefined) || (Name=="")) return false;

  var NameFields = Name.split(" ");
  var Title = "";
  var Surname = "";
  var FName = "";
  var count = NameFields.length;
  var i = 1;

  if (count > 1) {
    Title = NameFields[0].substr(0,1) + NameFields[0].substr(1,5).toLowerCase();
    Surname = NameFields[count-1].substr(0,25);

    while (i < (count - 1)) {
      FName += NameFields[i].substr(0,25) +  " ";
      i += 1;
    }

    document.UpdateForm.emexp002.value=trim(Surname);
    document.UpdateForm.emexp003.value=trim(FName);
  }
  return true;
}
function dispsex() {
  for (var i =0 ; i < document.UpdateForm.emexp004.length; i++) {
    if (trim(UpdateForm.emexp004.options[i].innerHTML) ==
        trim(UpdateForm.selsex.value)) {
          UpdateForm.emexp004.selectedIndex=i; }
  }
}
function dispsexWA()
{
UpdateForm.d_emexp004.value=UpdateForm.selsex.value;

  if (!isWhitespace(document.UpdateForm.emexp018.value)) {
    UpdateForm.emexp004.value=UpdateForm.selsex.value.substr(0,1);
    if (UpdateForm.selsex.value.substr(0,1)=="R") {
      UpdateForm.d_emexp004.value="Intersex"
    }
    if (UpdateForm.selsex.value.substr(0,1)=="U") {
      UpdateForm.d_emexp004.value="Unknown"
    }
    if (UpdateForm.selsex.value.substr(0,1)=="I") {
      UpdateForm.d_emexp004.value="Indeterminate"
    }
    if (UpdateForm.selsex.value.substr(0,1)=="M") {
      UpdateForm.d_emexp004.value="Male"
    }
    if (UpdateForm.selsex.value.substr(0,1)=="F") {
      UpdateForm.d_emexp004.value="Female"
    }
  } else {

    for (var i =0 ; i < document.UpdateForm.emexp004.length; i++)
    {
      if (document.UpdateForm.emexp004.options[i].value
          == document.UpdateForm.selsex.value.substr(0,1))
      {
         document.UpdateForm.emexp004.selectedIndex=i;
      }
    }
  }
}

/*
function SplitComplaint()  {
words=UpdateForm.comptext.value.split(/\s+/);
UpdateForm.emexp004.value=""
UpdateForm.emexp005.value=""
firstflag=0
for (i=0 ; i<words.length ; i++) {
  if (UpdateForm.emexp004.value.length+words[i].length < 50 && firstflag==0 ) {
    UpdateForm.emexp004.value+=words[i] + " " }
  else {
    UpdateForm.emexp005.value+=words[i] + " "
    firstflag=1 }
  }
UpdateForm.comptext.value=UpdateForm.emexp004.value+UpdateForm.emexp005.value
}
*/
function CheckCode(code,selectlist)  {
 var found=0
 strvar=code.value+"   "         // format as three characters space filled
 code.value=strvar.substr(0,3)
 for (var i =0 ; i < selectlist.length; i++) {
   if (selectlist.options[i].value.substr(0,3)==code.value) {
     found=1; selectlist.selectedIndex=i } }
 if (found==0) { alert("Invalid Code Entered");code.focus() }
}
function UpdateCode(code,selectlist) {
  code.value=selectlist.value.substr(0,3);
  document.UpdateForm.comptext.focus();
}
function setRedirect() {
  if (window.name == "content") {
     document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=009"
   }
  else {
     document.UpdateForm.redirect.value="emrweb01.pbl?reportno=1&template=001"
  }
}
function setFormactn() {
  if (validateMandatory(document.UpdateForm)) {
    document.UpdateForm.formactn.value="AE"
    document.UpdateForm.updttype.value="REGIS"
    document.UpdateForm.target="PopUpFrame";
    document.UpdateForm.submit()
    }
}
function getPresentCom(SearchField,ReturnSelect,CatCode) {
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=32" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+") +
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
function refreshTop() {
    if (parent.menu.document.readyState=="complete") {
      parent.menu.location.reload(); }
}
//-----------------------------------------------------------------
// Function to check for any visits for this ur on todays date
//-----------------------------------------------------------------
function CheckEmrVisit(urnum) {
  if (isWhitespace(urnum)) {
     return true;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=17" +
                  "&valdurno=" + urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(!isWhitespace(ReturnValue[0])) {
      if(!confirm("Patient has already presented on.\n" +
                 "Date - \t" + ReturnValue[1] + "\n" +
                 "U/R - \t" + ReturnValue[0].replace(/ /g,"") + "\n" +
                 "Visit - \t" + ReturnValue[2].replace(/ /g,"") + "\n" +
                 "Select OK to continue with triage.\n" +
                 "Select Cancel to abort triage.")) {
         return false;
      }
    }
  }
  return true;
}
function setPatientFields() {
  if (!isWhitespace(document.UpdateForm.emexp018.value))
  {
    document.UpdateForm.emexp002.className="readOnly";
    document.UpdateForm.emexp002.readOnly=true;
    document.UpdateForm.emexp003.className="readOnly";
    document.UpdateForm.emexp003.readOnly=true;
    sexfieldDIV.innerHTML=sexfieldSPAN1.innerHTML;
    document.UpdateForm.emexp005.className="readOnly";
    document.UpdateForm.emexp005.readOnly=true;
  } else {
    document.UpdateForm.emexp002.className="";
    document.UpdateForm.emexp002.readOnly=false;
    document.UpdateForm.emexp003.className="";
    document.UpdateForm.emexp003.readOnly=false;
    document.UpdateForm.emexp005.className="Past Date";
    document.UpdateForm.emexp005.readOnly=false;
    sexfieldDIV.innerHTML=sexfieldSPAN2.innerHTML;
  }
}
function initPatientType() {
  f = document.UpdateForm;
  document.getElementById('emex028e').checked = true;
  MandatoryETA();
}
function MandatoryETA() {
  f = document.UpdateForm;
  if (document.getElementById('emex028e').checked == true) {
    f.emexp022.className="Mandatory";
    f.emexp023.className="Mandatory";
  }
  else {
    f.emexp022.className="";
    f.emexp023.className="";
  }
}
function AddExpectNotes() {
  f = document.UpdateForm;
  if (isWhitespace(f.emexp001.value)) {return;}

  linkurl = "../cgi-bin/cliweb06.pbl?reportno=16&template=002" +
            "&exptuniq=" + f.emexp001.value.replace(/ /g,"+") +
            "&parlevel=1";
  Left=(document.body.clientWidth-1000)/2;
  DFrameLink(linkurl,50,Left,1000,600);
}
function ListExpectNotes() {
  f = document.UpdateForm;
  if (isWhitespace(f.emexp001.value)) {return;}

  linkurl = "../cgi-bin/cliweb06.pbl?reportno=16&template=001" +
            "&exptuniq=" + f.emexp001.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-1000)/2;
  DFrameLink(linkurl,50,Left,1000,600);
}
