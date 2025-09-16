//jsVersion  : V11.03.00
//========================================================================
//  Report 2
//========================================================================
function validateNurse() {
  var hcpnurse = chkHcpEDNurse();   
  if  (hcpnurse==true){
       validateCode('18',document.UpdateForm.emvis127,
                         document.UpdateForm.dummy1);
     
  }
  else {
       validateCode('17',document.UpdateForm.emvis127,
                         document.UpdateForm.dummy1,
                         document.UpdateForm.gnm,
                         SetNurseName);
  }
}
function SetNurseName() {
UpdateForm.dummy1.value=UpdateForm.gnm.value.replace(/\s*$/g,"")+
                              " " +
                            UpdateForm.dummy1.value.replace(/\s*$/g,"")
}
function CheckMan() {
//  if (document.UpdateForm.emvis003[0].value=1) {
//       document.UpdateForm.emvis007.className="Mandatory"
//       SetCurrentDateTime(document.UpdateForm.emvis128,
//                          document.UpdateForm.emvis129)
//       document.UpdateForm.emvis006.className=" "
// }
}
function unCheck(){
//  if (document.UpdateForm.emvis003[1].value=2) {
//        document.UpdateForm.emvis007.className=" "
//        document.UpdateForm.emvis006.className=" "
// }
}
//function CheckLoc(){
//  if (document.UpdateForm.emvis003[1].value=2) {
//        document.UpdateForm.emvis006.className="Mandatory"
// }
//}
function PatientSearch() {
  PatientSearchFrame(UpdateForm.dummyadm,
                     UpdateForm.emvis118,
                     UpdateForm.dummyadm,PatientReturn,UpdateForm.dummsrch);
}
function PatientReturn() {

  detailsArray = [UpdateForm.emvis111,UpdateForm.emvis112,
                  UpdateForm.emexp004,UpdateForm.emexp005];

  if(isWhitespace(UpdateForm.emvis118.value)){ 
     ToggleDetails(UpdateForm.emvis118,detailsArray);
     return false;
  }
  validateUrMerge(8,
                  UpdateForm.emvis118,
                  UpdateForm.gname,
                  UpdateForm.selsex,
                  UpdateForm.emexp005,
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
                  UpdateForm.dummy,
                  UpdateForm.gname,
                  UpdateForm.sname);

  UpdateForm.emvis111.value=UpdateForm.gname.value.replace(/,/g,"");
  UpdateForm.emvis112.value=UpdateForm.sname.value.replace(/,/g,"");

  if(isWhitespace(UpdateForm.emvis111.value)){
     UpdateForm.emvis118.value="";
  }

  UpdateSex();
  ToggleDetails(UpdateForm.emvis118,detailsArray);
  return true;
}

function UpdateSex(){
 for (var i =0 ; i < document.UpdateForm.emexp004.length; i++) {
 if(trim(UpdateForm.emexp004.options[i].innerHTML)==
    trim(UpdateForm.selsex.value)) {
       document.UpdateForm.emexp004.selectedIndex=i } };
}
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
  code.value=selectlist.value.substr(0,3)
  UpdateForm.comptext.focus()
}
function setRedirect() {
  if (window.name == "content") {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=2&template=3"
   }
  else {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=2&template=3"
  }
}
function setRedirectHEA() {
   document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=4"
}
function setRedirectWA() {
  if (window.name == "content") {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=4" +
                                        "&triredir=3";
   }
  else {
     document.UpdateForm.redirect.value="emrweb02.pbl?reportno=1&template=4" +
                                        "&triredir=3";
  }
}
function setFormactn() {
  var check=false;
  for(var i = 0; i < UpdateForm.emvis003.length; i++) {
     if (UpdateForm.emvis003[i].checked==true) {
      check=true;
     }
  }

  if (check==false) {
    alert("Triage Category has not been selected !");
    return;
  }

  if(document.getElementById('S01YU')) {
     Meth=document.getElementById('S01YU');
     if(Meth.className.match(/Mandatory/)) {
       if(isWhitespace(Meth.value.substr(4,3))) {
         catYU=trim(document.getElementById('d_catYU').value);
         alert( catYU + " is a required field.\nPlease enter it now." )
         Meth.focus();
         return;
       }
     }
  }
  
  if (isWhitespace(document.UpdateForm.emvis006.value)){
   if(document.UpdateForm.emvis006.type=="select-one") {
     for (var i =0 ; i < document.UpdateForm.emvis006.length; i++) {
      if(document.UpdateForm.emvis006.options[i].value.substr(0,3)=="WR "){
        document.UpdateForm.emvis006.selectedIndex=i;
      }
     }
    } else {
      document.UpdateForm.emvis006.value="WR";
    }
  }

  if (validateMandatory(UpdateForm)) {
    if(isWhitespace(document.UpdateForm.emvis118.value)) {
      document.UpdateForm.formactn.value="N1";
    }
    else {
      document.UpdateForm.formactn.value="N3";
      document.UpdateForm.urnumber.value=document.UpdateForm.emvis118.value;
    }
//    document.UpdateForm.formactn.value="N1"

    ShowFdvWarning();

    document.UpdateForm.updttype.value="ARRIV";
    UpdateWin=window.open("","HideUpdateWindow",
    "width=10,height=10,top=1024,directories=no,location=no" +
    ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no");
    document.UpdateForm.target="HideUpdateWindow";
//    parent.menu.location.reload();
    document.UpdateForm.submit();
  }
}
function ShowFdvWarning() {
  f = document.UpdateForm;
  if (f.pmsvx122 == undefined) {return;}

  i = f.pmsvx122.selectedIndex;
  if (i == -1) {return;}

  ind1 = f.pmsvx122.options[i].value.substr(3,1);
  if (ind1=='X') {
    alert("Please complete FDV Screening form (FDV950)");
  }
}
/*
function checkTime(triageTime) {
    var Today = new Date()
    var ThisHrs=Today.getHours();
    var ThisMin=Today.getMinutes();
    var ThisSec=Today.getSeconds();

    var ThisTime=ThisHrs+":"+ThisMin+":"+ThisSec
   if (triageTime.value > ThisTime) {
                alert("Invalid Triage Time")
                return false }
    else { return true }
}
*/
function validateLocation(SearchField,SearchName) {
  if (isWhitespace(SearchField.value)) {
      return;;
  }
  if(SearchField.type!="select-one") {
    SearchField.value=SearchField.value.toUpperCase()
  }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=2" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    SearchName.value=trim(ReturnValue[1]);
    SearchField.value=ReturnValue[0].substr(0,3);
  }
  else {
     document.UpdateForm.emvis006.focus();
     document.UpdateForm.emvis006.value="";
     document.UpdateForm.name_emvis006.value="";
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
function Validateprecom001() {
    onblurHandler()
    var formatedtext=formateText(UpdateForm.prcom001,'50')
    if ((formatedtext.split(/[\r\n]/).length>6) ||
        (UpdateForm.prcom001.value.length > 300)) {
      alert("Presenting Complaint comments - Max 6 lines."
          + "\nPlease remove extra lines to continue.");
      document.UpdateForm.prcom001.focus();
      return; }
}
function initNZ() {
  getPresentCom(UpdateForm.test,UpdateForm.emvis060,UpdateForm.emrviscat);
  DisplayDiv();
  SelectNumbers(UpdateForm.obdet041,0,11,1,"");    // Pain Score (0-10)
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
//C-0825792 - Check parameter to Use pmshcpaf/oprnuraf for ED Nurse
function chkHcpEDNurse(){
  if (document.getElementById('emcnurse')) {
      if (document.getElementById('emcnurse').value == "1") {
        return true;
       }
      else {
        return false;
      }
  }
  else {
      return false;
  }
}
//C-0825792 - Search Nurse from pmshcpaf/oprnuraf for ED Nurse
function SearchEDNurse(NurseId,ReturnNurseName) {
  var hcpnurse = chkHcpEDNurse();
  if (hcpnurse==true){
     HCPSearchFrame(NurseId,ReturnNurseName,20);
  }
  else {
     NurseSearchFrame(NurseId,ReturnNurseName);
  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth fields
//-----------------------------------------------------------------
function VEMDFields() {
  if(!document.getElementById("emvis177")) {
    return;
  }
  visitdate=document.getElementById("currdate");
  state=document.getElementById("ptcnhdps");
  servicetype=document.getElementById("emvis177");
  if(visitdate.value < DOYR2019 || state.value != "3") {
    return;
  }
  document.getElementById("servicename").style.display="";
  document.getElementById("servicefield").style.display="";
  servicetype.className="SelectBig Mandatory";
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location
//-----------------------------------------------------------------
function VEMDPatientLoc() {
  servicetype=document.getElementById("emvis177");
  patlocation=document.getElementById("emvis178");
  if(servicetype.value.substr(14,1)=="2") {
    document.getElementById("locationname").style.display="";
    document.getElementById("locationfield").style.display="";
    patlocation.className="SelectBig Mandatory";
  } else {
    document.getElementById("locationname").style.display="none";
    document.getElementById("locationfield").style.display="none";
    patlocation.className="SelectBig";
    patlocation.selectedIndex=0;
  }
}
//-----------------------------------------------------------------
// Show VEMD Telehealth patient location source
//-----------------------------------------------------------------
function VEMDPatientSource() {
  patlocation=document.getElementById("emvis178");
  locsource=document.getElementById("trnsfsrc");
  locsource_name=document.getElementById("name_trnsfsrc");
  if(patlocation.value.substr(3,1)=="T") {
    document.getElementById("sourcename").style.display="";
    document.getElementById("sourcefield").style.display="";
    locsource.className="Mandatory";
  } else {
    document.getElementById("sourcename").style.display="none";
    document.getElementById("sourcefield").style.display="none";
    locsource.className="";
    locsource.value="";
    locsource_name.value="";
  }
}
//-----------------------------------------------------------------
// VEMD Telehealth mandatory fields
//-----------------------------------------------------------------
function VEMDMandatory() {
  if(document.getElementById("emvis177")) {
    servicetype=document.getElementById("emvis177");
    if(servicetype.className.match(/Mandatory/)) {
       if(!checkString(servicetype,servicetype.title)) {
          return false ;
       }
    }
  }
  if(document.getElementById("emvis178")) {
    patlocation=document.getElementById("emvis178");
    if(patlocation.className.match(/Mandatory/)) {
       if(!checkString(patlocation,patlocation.title)) {
          return false ;
       }
    }
  }
  if(document.getElementById("trnsfsrc")) {
    locsource=document.getElementById("trnsfsrc");
    if(locsource.className.match(/Mandatory/)) {
       if(!checkString(locsource,locsource.title)) {
          return false ;
       }
    }
  }
  return true;
}
