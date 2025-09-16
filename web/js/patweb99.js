//jsVersion  : V11.03.07
//========================================================================
// Program   : patweb99.js
//
// Written   : 14.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in patweb99  
//
//========================================================================
//
//------------------------------------------------------------
// Check Date Range Values
//------------------------------------------------------------
function CheckDateRange(FromInput,ToInput) {
  if(isWhitespace(ToInput.value)) {
    return true;
  }
  if(FromInput.value==ToInput.value) {
    alert("Start and End dates can not be equal.");
    return false;
  }
  if (SetDateYYYYMMDD(FromInput.value) > SetDateYYYYMMDD(ToInput.value)) {
    alert("Invalid Range Entered " + FromInput.title + " " + ToInput.title);
    return false }
  else {
    return true }
}
//
function SetEndDate(status,datefield,currdate) {
  if(status.value=="1") { 
    datefield.className="Mandatory"
    datefield.value=currdate.value
  } else {
    datefield.className=""
    datefield.value=""
  }
}
//========================================================================
//   Report 2
//========================================================================
function showDoctor02(linkurl) {
  location.href=linkurl
}
//========================================================================
//   Report 3
//========================================================================
function DoctorsTab03() {
document.LinkForm.reportno.value="2" 
document.LinkForm.template.value="4"
document.LinkForm.submit()
} 
function LeaveDate03(leavdte) {
location.href="patweb99.pbl?reportno=09&template=004&opdlv001="+leavdte
self.close();
}
function SetFields03001_1() {
  suburb = AddForm.doctc010;
  state = AddForm.doctc039;
  postcode = AddForm.doctc011;
}
function SetFields03001_2() {
  suburb = AddForm.doctc016;
  state = AddForm.doctc040;
  postcode = AddForm.doctc017;
}
function SetFields03002_1() {
  suburb = UpdateForm.doctc010;
  state = UpdateForm.doctc039;
  postcode = UpdateForm.doctc011;
}
function SetFields03002_2() {
  suburb = UpdateForm.doctc016;
  state = UpdateForm.doctc040;
  postcode = UpdateForm.doctc017;
}
function ClearFields03(suburb,state,postcode) {
  suburb.value="";
  state.value="";
  postcode.value="";
}
function SetHosSpec03() {
  if(document.UpdateForm.ibcnmhos.value=="1") {
    HospitalButton.style.display="";
    if (document.UpdateForm.showrhos.value=="1") {
      document.UpdateForm.HospButton.className="RedButton";
    }
  }
}
function MaintainHosSpec03() {
  linkurl="patweb99.pbl?reportno=06&template=014" +
          "&pmhcp001=" + UpdateForm.doctcode.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,50,Left,500,250)
}
function LinkedHospitals03() {
  linkurl="patweb99.pbl?reportno=16&template=001" +
          "&pmhcp001=" + UpdateForm.doctcode.value +
          "&retnflag=" + UpdateForm.retnflag.value
         location.href=linkurl;
}
function LinkedArrangements03() {
  linkurl="patweb99.pbl?reportno=19&template=001" +
          "&pmhcp001=" + UpdateForm.doctcode.value +
          "&retnflag=" + UpdateForm.retnflag.value
         location.href=linkurl;
}
//========================================================================
//   Report 5
//========================================================================
function EditLookup05() {
    SelectCode.template.value=3
    SelectCode.pmhcg001.value=SelectCode.startkey.value
    NewSK="  ";
    if(SelectCode.startke1.value!="") {
      LenSK=SelectCode.startke1.value.length
      switch(LenSK) {
        case 1: NewSK=" " + SelectCode.startke1.value;break;
        case 2: NewSK=SelectCode.startke1.value;break;
      }
    }
    SelectCode.startke1.value=NewSK
    SelectCode.pmhcg002.value=SelectCode.startke1.value
    Left=(document.body.clientWidth-750)/2
    DFrameSubmit(SelectCode,0,Left,750,500)
}
function SetStartKey05() {
  var NewSK="    0";
  if(SelectCode.startke1.value!="") {
    LenSK=SelectCode.startke1.value.length
    switch(LenSK) {
      case 1: NewSK=" " + SelectCode.startke1.value;break;
      case 2: NewSK=SelectCode.startke1.value;break;
    }
  }
  SelectCode.startke1.value=NewSK
  document.SelectCode.submit()
}

function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,0,Left,750,500)
}
function SetFields05002() {
  state = AddForm.pmhcg009;
  suburb = AddForm.pmhcg008;
  postcode = AddForm.pmhcg012;
}
function SetFields05003() {
  state = UpdateForm.pmhcg009;
  suburb = UpdateForm.pmhcg008;
  postcode = UpdateForm.pmhcg012;
}
function updateParent05(desc,prac) {
  parent.ReturnCode.value=prac
  parent.ReturnName.value=desc
  parent.PopUpScreen.style.display="none"
}
function updateParent0505(desc,prac,count) {
  parent.ReturnName.value=desc
  parent.ReturnCode.value=prac
  parent.ReturnCount.value=count
  parent.PopUpScreen.style.display="none"
}
//========================================================================
//   Report 6
//========================================================================
function ShowDetail06(linkurl) {
  if (linkurl.search(/menuflag=1/g) > 0) {
    i = linkurl.search(/pmhcp001/g);
    hcpcode=linkurl.substr(i+9,10);
    HCPEnquiryViewFrame(hcpcode);   // Show doctor enquiry
    return;
  }

  if(document.SelectCode !=undefined) {
    if(SelectCode.usrsvrsl !=undefined) {
      if(SelectCode.usrsvrsl.value < 50) {
        var nodoctor=GetCookieData('HCPMaintenanceNoDoctor');
        if(nodoctor=="2") {
          i = linkurl.search(/linkdoct/g);  // find linkdoctor cgi and value
          if(i > 0) {
            doctcode=linkurl.substring(i+9,i+15);
            if(!isWhitespace(doctcode)) {
              DoctorViewFrame(doctcode);   // Show doctor enquiry
              return;
            }
          }
        }
      }
    }
  }
  location.href=linkurl
}
function EditHCP06() {
  if(document.SelectCode !=undefined) {
    if(SelectCode.usrsvrsl !=undefined) {
      if(SelectCode.usrsvrsl.value < 50) {
        var nodoctor=GetCookieData('HCPMaintenanceNoDoctor');
        if(nodoctor=="2") {
            doctcode="      ";
            var serverURL = "../cgi-bin/patweb80.pbl?reportno=18&returnfm=5" +
                "&valdcode=" + SelectCode.startkey.value.replace(/ /g,"+");
            var returnValue = RSExecute(serverURL);
            if (returnValue.status==0) {
              ReturnValues=returnValue.return_value.split("|")
              doctcode=ReturnValues[0];
            }
            if(!isWhitespace(doctcode)) {
              DoctorViewFrame(doctcode);   // Show doctor enquiry
              return;
            }
        }
      }
    }
  }
  var linkurl="patweb99.pbl?reportno=06&template=003&pmhcp001=" +
      SelectCode.startkey.value.replace(/ /g,"+");
  location.href=linkurl
}
function SetFields06002() {
  state = AddForm.pmhcp023;
  suburb = AddForm.pmhcp022;
  postcode = AddForm.pmhcp026;
}
function SetFields06003() {
  state = UpdateForm.pmhcp023;
  suburb = UpdateForm.pmhcp022;
  postcode = UpdateForm.pmhcp026;
}
function AddCaseTeam(hcp) {
  linkurl="allweb01.pbl?reportno=13&template=004" +
          "&teamhcpc=" + hcp
  Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,50,Left,750,450)
}
function AddPhotoID(doc) {
  linkurl="patweb99.pbl?reportno=14&template=001" +
          "&pmhcp001=" + doc
  Left=(document.body.clientWidth-430)/2
  DFrameLink(linkurl,50,Left,430,100)
}
function SetHosSpec06() {
  if(document.UpdateForm.ibcnmhos.value=="1") {
    HospitalButton.style.display="";
    if (document.UpdateForm.showrhos.value=="1") {
      document.UpdateForm.HospButton.className="RedButton";
    }
  }
}
function MaintainHosSpec06() {
  linkurl="patweb99.pbl?reportno=06&template=014" +
          "&pmhcp001=" + UpdateForm.pmhcp001.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,50,Left,500,250)
}
function LinkedHospitals06() {
  linkurl="patweb99.pbl?reportno=16&template=001" +
          "&pmhcp001=" + UpdateForm.pmhcp001.value +
          "&retnflag=" + UpdateForm.retnflag.value
  location.href=linkurl;
}
function LinkedArrangements06() {
  linkurl="patweb99.pbl?reportno=19&template=001" +
          "&pmhcp001=" + UpdateForm.pmhcp001.value +
          "&retnflag=" + UpdateForm.retnflag.value
  location.href=linkurl;
}
// Set the state suburb and postcode values for Surgery Details
 function setSurgeryFields(theForm) {
  state = theForm.pmhcp023;
  suburb = theForm.pmhcp022;
  postcode = theForm.pmhcp026;
 }
 // Set the state suburb and postcode values for Personal Details
 function setPersonalFields(theForm) {
  state = theForm.pmhcp045;
  suburb = theForm.pmhcp046;
  postcode = theForm.pmhcp049;
 }
// Validate the Post Code and set the state and postcode values for Surgery
// details
 function valSurgeryPostCode(theForm) {
  if (isWhitespace(theForm.pmhcp022.value)) {
      return; } 
  var oldburb = trim("%PATWEB99.06.011.3");
  var newburb = trim(theForm.pmhcp022.value.toUpperCase() );

  if (oldburb == newburb) return true;
  if (theForm.pmhcp026.value == '8888') return true;

  //set expected globals
  state    = theForm.pmhcp023;
  postcode = theForm.pmhcp026;
  suburb   = theForm.pmhcp022;
  LookupPostCode(theForm.pmhcp022.value);
 }
// Validate the Post Code and set the state and postcode values for Personal
// Details
 function valPersonalPostCode(theForm) {
  if (isWhitespace(theForm.pmhcp045.value)) {
      return; } 
  var oldpburb = trim("%PATWEB99.06.029.3");
  var newpburb = trim(theForm.pmhcp045.value.toUpperCase() );

  if (oldpburb == newpburb) return true;
  if (theForm.pmhcp049.value == '8888') return true;

  //set expected globals
  state    = theForm.pmhcp046;
  postcode = theForm.pmhcp049;
  suburb   = theForm.pmhcp045;
  LookupPostCode(theForm.pmhcp045.value);
 }
// Doctor Code is mandatory if HCP Type has "Attending"
 function mandatoryDoctorCode(theForm) {
  if ((theForm.pmhcp057.value == 0) ||
      (theForm.pmhcp057.value == 2) ||
      (theForm.pmhcp057.value == 4) ||
      (theForm.pmhcp057.value == 6) ||
      (theForm.pmhcp057.value == 8) ||
      (theForm.pmhcp057.value == 10) ||
      (theForm.pmhcp057.value == 11) ||
      (theForm.pmhcp057.value == 13)) {
       theForm.pmhcp112.className="Mandatory"; }
  else { 
       theForm.pmhcp112.className="";
       valHCPTypeNurse();
  }
  if (document.AddForm.ptcnghcp.value=="1") {
    theForm.pmhcp112.className="Readonly";
    theForm.pmhcp112.readOnly=true;
  }
 }
function valHCPTypeNurse(){
  if  ((document.getElementById('pmhcp057')) && 
       (document.getElementById('pmhcp001'))){   
       if (((document.getElementById('pmhcp057').value == 14) ||
            (document.getElementById('pmhcp057').value == 15)) &&
           (document.getElementById('pmhcp001').value.length > 6)){
           if  (document.getElementById('pmhcp001').className=="Mandatory"){
                alert('Error - Maximum HCP Code length for a Nurse is 6 characters - please re-enter a valid code');
                document.getElementById('pmhcp001').focus();
           }
           else {
                alert('Error - Maximum HCP Code length for a Nurse is 6 characters - please select a valid type');
                document.getElementById('pmhcp057').focus();
           }
           return;
       }
  }
}
// Supervisor Level is mandatory if HCP Type has "Attending" 
 function mandatorySupervisorLevel(theForm) {
  if ((theForm.pmhcp057.value == 1) ||
      (theForm.pmhcp057.value == 3) || 
      (theForm.pmhcp057.value == 5) || 
      (theForm.pmhcp057.value == 7) || 
      (theForm.pmhcp057.value == 9) || 
      (theForm.pmhcp057.value == 12)) {
       theForm.pmhcp056.className=""; } 
  else { theForm.pmhcp056.className="Mandatory"; }
 }
 function chkDoctMandatory(theForm) {
// Set security level to zero if no doctor update
  var nodoctor=GetCookieData('HCPMaintenanceNoDoctor');
  if(nodoctor=="1" || nodoctor=="2" ||
     nodoctor=="3" || nodoctor=="4" || nodoctor=="5") {
    theForm.usrsvrsl.value="0"; 
  }
// Only users with suitable Server Level access can update Doctor Codes
  if (theForm.usrsvrsl.value > 49) {
     theForm.pmhcp112.tabIndex="5";
     theForm.pmhcp057.disabled=false; 
     theForm.pmhcp112.readOnly=false;
     if ((theForm.pmhcp057.value == 1) ||
         (theForm.pmhcp057.value == 3) ||
         (theForm.pmhcp057.value == 5) ||
         (theForm.pmhcp057.value == 7) ||
         (theForm.pmhcp057.value == 9) ||
         (theForm.pmhcp057.value == 12)|| 
         (theForm.pmhcp057.value == 14)|| 
         (theForm.pmhcp057.value == 15)) {
          theForm.pmhcp112.className=""; 
          valHCPTypeNurse(); }
     else {
        theForm.pmhcp112.className="Mandatory"; } }
  else {
     theForm.pmhcp057.tabIndex="-1";
     theForm.pmhcp057.className="ReadOnly";
     theForm.pmhcp112.tabIndex="-1";
     theForm.pmhcp112.className="ReadOnly";
     theForm.pmhcp112.readOnly=true; }
 }
 function validHCPType(theForm) {
// Only users with suitable Server Level access can update Doctor Codes
  if (theForm.usrsvrsl.value > 49) {
     theForm.pmhcp057.tabIndex="4";
     theForm.pmhcp112.tabIndex="5";
     theForm.pmhcp057.className="Mandatory";
     theForm.pmhcp057.readOnly=false;
     theForm.pmhcp112.readOnly=false;
     if ((theForm.pmhcp057.value == 1) ||
         (theForm.pmhcp057.value == 3) ||
         (theForm.pmhcp057.value == 5) ||
         (theForm.pmhcp057.value == 7) ||
         (theForm.pmhcp057.value == 9) ||
         (theForm.pmhcp057.value == 12)|| 
         (theForm.pmhcp057.value == 14)|| 
         (theForm.pmhcp057.value == 15)) {
          theForm.pmhcp112.className=""; 
          valHCPTypeNurse(); }
     else { theForm.pmhcp112.className="Mandatory"; } }
  else {
     theForm.pmhcp112.tabIndex="-1";
     if ((theForm.pmhcp057.value == 3) ||
         (theForm.pmhcp057.value == 7)) {
          theForm.pmhcp112.className="ReadOnly";
          theForm.pmhcp112.readOnly=true; }
     else {
// Doctor Code is mandatory if HCP Type has "Attending" or "Referring" so
// display error
        if  (theForm.pmhcp057.className=="ReadOnly") {
        alert("You must be a Supervisor to change the HCP Type.");
        for (var i =0 ; i < theForm.pmhcp057.length; i++) {
            if (theForm.pmhcp057.options[i].value==theForm.d_pmhcp057.value) {
                theForm.pmhcp057.selectedIndex=i } };
        theForm.pmhcp057.focus(); } } }
 }
//
function NoDoctor06(nodoctor) {
  if(nodoctor=="2") {
    SetCookie('HCPMaintenanceNoDoctor','2');
    return;
  }
  if(nodoctor=="1") {
    SetCookie('HCPMaintenanceNoDoctor','1');
    return;
  }
  if(nodoctor=="0") {;
    SetCookie('HCPMaintenanceNoDoctor','0');
    return;
  }
  if(nodoctor=="3") {
    SetCookie('HCPMaintenanceNoDoctor','3');
    return;
  }
  if(nodoctor=="4") {
    SetCookie('HCPMaintenanceNoDoctor','4');
    return;
  }
  if(nodoctor=="5") {
    SetCookie('HCPMaintenanceNoDoctor','5');
    return;
  }

}
function CheckHCPType06() {

  var nodoctor=GetCookieData('HCPMaintenanceNoDoctor');
  if (nodoctor!="1" && nodoctor!="2" && nodoctor!="3" &&
      nodoctor!="4" && nodoctor!="5") {
    return;
  }
  if (document.getElementById('pmhcp057')==undefined) {
     return;
  }
//nodoctor=1/2 - will display all HCP types that do not contain "Attending"
  if (nodoctor=="1" || nodoctor=="2") {
     for (var i=0; i < document.getElementById('pmhcp057').length; i++) {
          var hcptype=document.getElementById('pmhcp057').options[i].value;
          if (hcptype=="0" || hcptype=="2" || hcptype=="4" ||
              hcptype=="6" || hcptype=="8" || hcptype=="10" ||
              hcptype=="11" || hcptype=="13"){
              document.getElementById('pmhcp057').remove(i);  
              i--;
          }
     }
  }
//nodoctor=3 will display an HCP Type of "Attending" only
//           pmshcpaf.pmhchcst=0
  if (nodoctor=="3"){
     for (var i=0; i < document.getElementById('pmhcp057').length; i++) {
          var hcptype=document.getElementById('pmhcp057').options[i].value;
          if (hcptype!="0") {
              document.getElementById('pmhcp057').remove(i);
              i--;
          }
      }
      return;
  }
//nodoctor=4 will display all HCP Types that contain "Attending"
//           pmshcpaf.pmhchcst=0/2/4/6/11/13/8/10
  if (nodoctor=="4"){
     for (var i=0; i < document.getElementById('pmhcp057').length; i++) {
          var hcptype=document.getElementById('pmhcp057').options[i].value;
          if (hcptype=="1" || hcptype=="3" || hcptype=="5" ||
              hcptype=="7" || hcptype=="9" || hcptype=="12" ||
              hcptype=="14" || hcptype=="15" ){
              document.getElementById('pmhcp057').remove(i);
              i--;
          }
      }
      return;
  }
//nodoctor=5 will display all HCP Types that contain "Nurse"
//           pmshcpaf.pmhchcst=14/15
  if (nodoctor=="5"){
     for (var i=0; i < document.getElementById('pmhcp057').length; i++) {
          var hcptype=document.getElementById('pmhcp057').options[i].value;
          if (hcptype!="14" && hcptype!="15" ){
              document.getElementById('pmhcp057').remove(i);
              i--;
          }
      }
      return;
  }
//
 var doctorname=document.getElementById('DisplayDoctorName');
 if(doctorname!=null) {
    doctorname.style.display = "none";
 }
 var doctorcode=document.getElementById('DisplayDoctorCode');
 if(doctorcode!=null) {
    doctorcode.style.display = "none";
 }
}

function AutoGenHCP() {
  if (document.AddForm.ptcnghcp.value=="1") {
     HCPHeading.innerHTML="";
     HCPCode.innerHTML=""; }
  else {
     HCPHeading.innerHTML=hcphead.innerHTML;
     HCPCode.innerHTML=hcpcod.innerHTML;
     document.AddForm.pmhcp001.focus(); }
}
function LinkedSpecialties06() {
  linkurl="patweb99.pbl?reportno=20&template=001" +
          "&pmhcp001=" + 
          document.getElementById("pmhcp001").value.replace(/ /g,"+") +
          "&retnflag=" + 
          document.getElementById("retnflag").value.replace(/ /g,"+");
  location.href=linkurl;
}
function LinkedUnits06() {
  linkurl="patweb99.pbl?reportno=12&template=004" +
          "&startkey=" +
          document.getElementById("pmhcp112").value.replace(/ /g,"+") +
          "&hcplevel=1" +
          "&retnflag=" +
          document.getElementById("retnflag").value.replace(/ /g,"+") +
          "&pmhcp001=" +
          document.getElementById("pmhcp001").value.replace(/ /g,"+");
  location.href=linkurl;
}
//========================================================================
//   Report 7
//========================================================================
function ShowDetail07(linkurl) {
  Left=(document.body.clientWidth-680)/2
  DFrameLink(linkurl,0,Left,680,400)
}
function ViewPractice07(linkurl) {
  SelectCode.reportno.value=5
  SelectCode.template.value=3
  Left=(document.body.clientWidth-680)/2
  DFrameSubmit(SelectCode,0,Left,680,400)
}
//========================================================================
//   Report 8
//========================================================================
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,0,Left,800,520)
}
function ViewHCP08(linkurl) {
    location.href=linkurl;
}
function ReadPrac(OptionNumber,OptionType,ReturnCode,ReturnName,ReturnPcnt) {
  ReturnName.value="";
  ReturnPcnt.value="";
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL  = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
               "&valdtype=" + OptionType +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    ReturnPcnt.value=ReturnValue[1]; }
 else {
    ReturnCode.value="";
    ReturnCode.select();
    return false; }
}
//========================================================================
//   Report 9
//========================================================================
function ShowLeave09(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,250)
}
function AddLeave09(doctor,lookyear) {
  SelectCode.template.value=5
  SelectCode.opdlv001.value=doctor
  SelectCode.linkyear.value=lookyear
  Left=(document.body.clientWidth-380)/2
  DFrameSubmit(SelectCode,0,Left,380,255)
}
function Doctor09(doctor) {
location.href="patweb99.pbl?reportno=03&template=002&doctcode="+doctor
}
function ShowDetail09(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,200)
}
function AddDetail09(lookyear) {
  SelectCode.template.value=2
  SelectCode.linkyear.value=lookyear
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,900,500)
}
//========================================================================
//   Report 10
//========================================================================
function SaveBudg10(doctor) {
currDate= new Date();
currDate=currDate.getYear();
location.href="patweb99.pbl?reportno=10&template=001&doctcode=" + doctor.value
              + "&statyear=" + currDate + "&statdtyp=" + "A"
self.close();
}
function SelectSubmit() {
  document.UpdateForm.submit();
}
function DoctorsTab10(doctor) {
location.href="patweb99.pbl?reportno=3&template=002&doctcode=" + doctor.value
             + "&doctstat=" + "C"

}
//========================================================================
//   Report 13
//========================================================================
function ShowDetail13(linkurl) {
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,0,Left,800,520)
}
function ViewHCP13(linkurl) {
    location.href=linkurl;
}
function SetHCPReturn() {
  linkurl="patweb99.pbl?reportno=6&template=001";
  if(SelectCode.retnflag.value=="2") {
    linkurl="patweb99.pbl?reportno=2&template=004";
  }
  if(SelectCode.retnflag.value=="1") {
    linkurl="patweb99.pbl?reportno=6&template=013";
  }
  location.href=linkurl;
}
function ViewComments03() {
  linkurl="patweb99.pbl?reportno=13&template=004" + 
          "&pmhcp001=" + UpdateForm.doctcode.value 
         location.href=linkurl;
}
function ViewComments06() {
  linkurl="patweb99.pbl?reportno=13&template=001" + 
          "&pmhcp001=" + UpdateForm.pmhcp001.value +
          "&retnflag=" + UpdateForm.retnflag.value
  location.href=linkurl;
}
function Doctor13(doctor) {
location.href="patweb99.pbl?reportno=03&template=002&doctcode="+doctor
}
function InsuranceDesc(theForm) {
  validateCode(36,theForm.pmhcp076,theForm.desc_pmhcp076)
}
//========================================================================
//   Report 15
//========================================================================
function EditLookup15() {
  Message="Enter a Team";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.pmtem001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,300)
}
function GoToLookup15() {
  SelectCode.pmtem001.value=SelectCode.startkey.value
  SelectCode.submit();
}
//========================================================================
//   Report 16
//========================================================================
function ViewDocHCP16(doctor) {
  if(SelectCode.retnflag.value=="2") {
    linkurl="patweb99.pbl?reportno=03&template=002&doctcode="+doctor
    location.href=linkurl;
  } else {
    linkurl="patweb99.pbl?reportno=06&template=003&pmhcp001="+doctor
    location.href=linkurl;
  }
}
function ShowDetail16(linkurl) {
  Left=(document.body.clientWidth-800)/2
  DFrameLink(linkurl,0,Left,800,520)
}
function LinkedUnits16(hospcode) {
  linkurl="patweb99.pbl?reportno=17&template=001" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + hospcode.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  location.href=linkurl;
}
function LinkedRoles16(hospcode) {
  linkurl="patweb99.pbl?reportno=18&template=001" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + hospcode.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  location.href=linkurl;
}
//========================================================================
//   Report 17
//========================================================================
function ShowDetail17(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
function LinkedHospitals17() {
  linkurl="patweb99.pbl?reportno=16&template=001" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  location.href=linkurl;
}
function AddUnit17() {
  linkurl="patweb99.pbl?reportno=17&template=002" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + SelectCode.hospcode.value.replace(/ /g,"+") +
          "&pmtmd003=" + SelectCode.pmtmd003.value.replace(/ /g,"+") +
          "&pmtmd004=" + SelectCode.pmtmd004.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
//function LinkedTeams17() {
//  linkurl="patweb99.pbl?reportno=17&template=004" +
//          "&pmhcp001=" + UpdateForm.pmtmd001.value.replace(/ /g,"+") +
//          "&hospcode=" + UpdateForm.pmtmd002.value.replace(/ /g,"+") +
//          "&pmtmd003=" + UpdateForm.pmtmd003.value.replace(/ /g,"+") +
//          "&pmtmd004=" + UpdateForm.pmtmd004.value.replace(/ /g,"+") +
//          "&retnflag=" + UpdateForm.retnflag.value.replace(/ /g,"+")
//  parent.location.href=linkurl;
//}
function LinkedTeams17(pmtmd003) {
  linkurl="patweb99.pbl?reportno=17&template=004" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + SelectCode.hospcode.value.replace(/ /g,"+") +
          "&pmtmd003=" + pmtmd003.replace(/ /g,"+") +
          "&pmtmd004=" + SelectCode.pmtmd004.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+") 
  location.href=linkurl; 
}
function AllUnits17() {
  linkurl="patweb99.pbl?reportno=17&template=001" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + SelectCode.hospcode.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  location.href=linkurl;
}
function ViewUnit17() {
  SelectCode.reportno.value=17
  SelectCode.template.value=3
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,0,Left,600,300)
}
function AddTeam17() {
  linkurl="patweb99.pbl?reportno=17&template=005" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + SelectCode.hospcode.value.replace(/ /g,"+") +
          "&pmtmd003=" + SelectCode.pmtmd003.value.replace(/ /g,"+") +
          "&pmtmd004=" + SelectCode.pmtmd004.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
//========================================================================
//   Report 18
//========================================================================
function ShowDetail18(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
} 
function LinkedHospitals18() {
  linkurl="patweb99.pbl?reportno=16&template=001" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  location.href=linkurl;
}
function AddRole18() {
  linkurl="patweb99.pbl?reportno=18&template=002" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&hospcode=" + SelectCode.hospcode.value.replace(/ /g,"+") +
          "&pmrld003=" + SelectCode.pmrld003.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
//========================================================================
//   Report 19
//========================================================================
function ShowDetail19(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
function ViewDocHCP19(doctor) {
  if(SelectCode.retnflag.value=="2") {
    linkurl="patweb99.pbl?reportno=03&template=002&doctcode="+doctor
    location.href=linkurl;
  } else {
    linkurl="patweb99.pbl?reportno=06&template=003&pmhcp001="+doctor
    location.href=linkurl;
  }
}
function AddArra19() {
  linkurl="patweb99.pbl?reportno=19&template=002" +
          "&pmhcp001=" + SelectCode.pmhcp001.value.replace(/ /g,"+") +
          "&pmdra002=" + SelectCode.pmdra002.value.replace(/ /g,"+") +
          "&retnflag=" + SelectCode.retnflag.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
//========================================================================
//   Report 20
//========================================================================
function AddSpec20() {
  linkurl="patweb99.pbl?reportno=20&template=002" +
          "&pmhcp001=" + 
          document.getElementById("pmhcp001").value.replace(/ /g,"+") +
          "&pmspe002=" + 
          document.getElementById("pmspe002").value.replace(/ /g,"+") +
          "&retnflag=" + 
          document.getElementById("retnflag").value.replace(/ /g,"+");
  Left=(document.body.clientWidth-600)/2;
  DFrameLink(linkurl,0,Left,600,300);
}
function ViewDocHCP20(doctor) {
  if(document.getElementById("retnflag").value=="2") {
    linkurl="patweb99.pbl?reportno=03&template=002&doctcode=" +
             doctor.replace(/ /g,"+");
  } else {
    linkurl="patweb99.pbl?reportno=06&template=003&pmhcp001=" +
             doctor.replace(/ /g,"+");
  }
  location.href=linkurl;
}
function ShowDetail20(linkurl) {
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,300)
}
//------------------------------------------------------------
//Clear readonly input fields for Doctor Input
//------------------------------------------------------------
function clrDoc(code,name) {
  if (code!=null)
  {
    if(code.readOnly==true)
    {
      alert( code.title + " is a readonly field." );
      return;
    }
    if(code.disabled==true)
    {
      alert( code.title + " is a disabled field." );
      return;
    }
  }
  code.value="";
  name.value="";
}
//------------------------------------------------------------
// Set Redirects for patweb9906003             
//------------------------------------------------------------
function SETRedirect() {
     var template=GetCookieData('HCPMaintenance');
     if (template=="unknown") {
       template="001";
       linkurl="patweb99.pbl?reportno=06&template=" + template +
             "&startkey=" + UpdateForm.pmhcp001.value.replace(/ /g,"+");
       return;
     }
     linkurl=template;
}
//------------------------------------------------------------
// Set Redirects for patweb9906002
//------------------------------------------------------------
function SETRedirectAdd() {
     var template=GetCookieData('HCPMaintenance');
     if (template=="unknown") {
       template="001";
       linkurl="patweb99.pbl?reportno=06&template=" + template 
       return;
     }
     linkurl=template;
}
function SETRedirectDelete() {
     var template=GetCookieData('HCPMaintenance');
     if (template=="unknown") {
       template="patweb99.pbl?reportno=06&template=001"
     }
     document.UpdateForm.redirect.value=template;
}
function subUpdate() {
  if (validateMandatory(UpdateForm)) {
     SETRedirect();
     document.UpdateForm.redirect.value=linkurl;
     document.UpdateForm.nextpage.value="1";
     document.UpdateForm.updttype.value="U";
     tempDisable(document.UpdateForm.updatebutton);
     document.UpdateForm.submit();
  }
}

function ValidateWWCCNo(InputField){
  if(!InputField||(InputField==undefined)||(InputField.value.length==0)){
     return true;
  }
  // we want to match a value that is 7 digits + 1 alpha
  if(!InputField.value.match(/^\d{7}[a-zA-Z]$|\d{8}(-\d{2})$|\d{7}[a-zA-Z](-\d{2})$/)){
     var fldName = InputField.title.length > 0?"'" + InputField.title + "' ":"";
     alert("Invalid "+fldName+"value."+"\nMust be 7 digits followed by an alpha character\n" +
           "or 8 digits followed by a hyphen and two digits.");
     InputField.select();
     return false;
  }
  return true;
}

function WWCCNo2Msg() {
  var wccAlertMsg = "Invalid 'WWCC Number' value.\n\n" +
  "ACT: Must be 3 digits - eg: 123.\n\n" +
  "NSW: Expected length of 8 with E or V suffix - eg: 1234567E\n" +
  "This may or may not have a prefix of WWC\n\n" +
  "NT: Must be 3 digits - eg: 123.\n\n" +
  "QLD: Expected length 6 with /1 - eg: 123456/1\n\n" +
  "SA: Expected length 6 with or without SRN - eg:\n" +
  "SRN 123-123 or 123456\n\n" +
  "TAS: Must be 9 digits - eg: 123456789\n\n" +
  "VIC: Expected length of 8 with A or E suffix -\n" +
  "eg: 1234567A\n\n" +
  "WA: Up to 7 digits maximum - eg: 12345 or 1234567"
  alert(wccAlertMsg);
}

function ValidateWWCCNo2(InputField,HDFState){
  if(!InputField||(InputField==undefined)||(InputField.value.length==0)){
     return true;
  }
  var HDFVal = HDFState.value;
  var wwccNum = InputField.value;
  switch (HDFVal) {
    //ACT
    case '9': {
      if (!wwccNum.match(/^\d{3}$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }     
      return true;    
    }
    //NSW
    case '2': {
      if (!wwccNum.match(/^(WWC)?\d{7}[EV]+$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true;
    }
    //NT
    case '8': {
      if (!wwccNum.match(/^\d{3}$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true;
    }
    //QLD
    case '4': {
      if (!wwccNum.match(/^\d{6}\/1$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true; 
    }
    //SA
    case '5': {
      if (!wwccNum.match(/^SRN \d{3}-\d{3}$|^\d{6}$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true;
    }
    //TAS
    case '7': {
      if (!wwccNum.match(/^\d{9}$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true;
    }
    //VIC
    case '3': {
      if (!wwccNum.match(/^\d{7}[AE]+$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true;
    }
    //WA
    case '6': {
      if (!wwccNum.match(/^\d{1,7}$/)) {
        WWCCNo2Msg();
        InputField.select();
        return false;
      }
      return true;
    }
  }
}

function ValidateWWCCStatus(theForm){
  WWCCStatus = theForm.pmhcp118;
  if (HCPWWCCStatusMand == '1') {
    theForm.pmhcp118.className="Mandatory"; // WWCC Status
  }

  var xind1=theForm.pmhcp118.value.substr(3,1);

  theForm.pmhcp117.className=" "; // WWCC Expiry Date
  if (xind1 == 'M') {
    theForm.pmhcp117.className="Mandatory"; // WWCC Expiry Date
  }
}

function validateProviderNo(InputField){
  if((!InputField) || (InputField==undefined) || (InputField.value.length==0)){
     return true;
  }
  // Provider Number is a value that is 6 digits + 1 alpha or 1 digit + 1 alpha
  if(!InputField.value.match(/^[0-9]{6}[0-9A-HJ-NP-RT-Y][ABFHJKLTWXY]$/)){
     alert("Provider Number is an invalid number");
     InputField.select();
     return false;
  }
  return true;
}

function validateNationalRegNum(inputField) {
  if (!inputField || inputField.value.length === 0) {
    return true;
  }
  
  regNum = inputField.value;
  error = "National Registration Number is an invalid number;";

  if (regNum.includes(" ")) {
    alert(error + " contains a space.");
    return false;

  } else if (regNum.length !== 13) { 
    alert(error + " must be 13 characters.");
    return false;

  } else if (!regNum.match(/^[A-Za-z]{3}/)) {
    alert(error + " leading three characters must be alphabetic.");
    return false;
    
  } else if (!regNum.match(/\d{10}$/)) { 
    alert(error + " last ten characters must be numeric.");
    return false;
    
  } 
  return true;
}

function ValidateRegToDate(theForm){
 RegStatus = theForm.pmhcp082;

 theForm.pmhcp084.className=" ";

 if(theForm.pmhcp082.value.substr(3,1) == 'M'){
    theForm.pmhcp084.className="Mandatory";
 }
}

//Makes Display = None if country isn't Australia.
function checkCountryHideTab(stateValue) {

  var tagHidden = false;

  //Checks if the country isn't Australia
  if ((stateValue == "0") || (stateValue == "1")){
 
    tagHidden = true;
    
    //goes through the arguments and sets the display to none
    for (x=1;x<arguments.length;x++) {
      arguments[x].display = "none";
    }
  }

  return tagHidden;

}

//Sets the state field when an Address is added to HCP
function SetStateField(stateValue) {

  if((stateValue != "0") || (stateValue != "1")) {

    var state = document.getElementById("pmhcg009").value.toUpperCase().trim();
    var stateAbbr = document.getElementById("pmhcg013").value;

    if ((state == "SA") || (state == "SOUTH AUSTRALIA")) {
      document.getElementById("pmhcg013").value = "SA";
    } else if ((state == "QLD")|| (state == "QUEENSLAND")){
      document.getElementById("pmhcg013").value = "QLD"; 
    } else if ((state == "VIC")|| (state == "VICTORIA")){
      document.getElementById("pmhcg013").value = "VIC"; 
    } else if ((state == "NSW")|| (state == "NEW SOUTH WALES")){
      document.getElementById("pmhcg013").value = "NSW"; 
    } else if ((state == "TAS")|| (state == "TASMANIA")){
      document.getElementById("pmhcg013").value = "TAS"; 
    } else if ((state == "WA")|| (state == "WESTERN AUSTRALIA")){
      document.getElementById("pmhcg013").value = "WA"; 
    } else if ((state == "NT")|| (state == "NORTHERN TERRITORY")){
      document.getElementById("pmhcg013").value = "NT"; 
    } else if ((state == "ACT")|| (state == "AUSTRALIAN CAPITAL TERRITORY")){
      document.getElementById("pmhcg013").value = "ACT"; 
    } else {
      document.getElementById("pmhcg013").value = "OTH";
    }
  }
}
