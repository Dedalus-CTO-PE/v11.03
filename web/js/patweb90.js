//jsVersion  : V11.03.06
//========================================================================
// Patient Search Functions
//------------------------------------------------------------
function patientLink(linkNumber,urNumber,admissionNo) {
    document.linkForm.admissno.value=admissionNo
    document.linkForm.urnumber.value=urNumber
    if ( linkNumber=="1" ) ;{
      document.linkForm.action="patweb98.pbl"
      document.linkForm.reportno.value="1"
      document.linkForm.template.value="1"
      document.linkForm.target="newWindow"
      newWindow=open("","newWindow",
      "width=640,height=250,scrollbars=yes,status=no,toolbar=no,menubar=no")
      document.linkForm.submit()
    }
}
function newRegistration() {
  document.Registration.srchsnam.value=document.search.srchsnam.value;
  document.Registration.srchgnam.value=document.search.srchgnam.value;
  document.Registration.srchpage.value=document.search.srchpage.value;
  document.Registration.srchpdob.value=document.search.srchpdob.value;
  for (var i =0 ; i < document.search.srchpsex.length; i++) {
    if (document.search.srchpsex[i].checked=="1" ) { 
      document.Registration.srchpsex.value=document.search.srchpsex[i].value;
    }
  } 
  document.Registration.submit();
}
//
function TemporaryRegistration() {
  document.NewRegistration.srchsnam.value=document.search.srchsnam.value;
  document.NewRegistration.srchgnam.value=document.search.srchgnam.value;
  document.NewRegistration.srchpage.value=document.search.srchpage.value;
  document.NewRegistration.srchpdob.value=document.search.srchpdob.value;
  document.NewRegistration.temporar.value="1";
  for (var i =0 ; i < document.search.srchpsex.length; i++) {
    if (document.search.srchpsex[i].checked=="1" ) {
      document.NewRegistration.srchpsex.value=document.search.srchpsex[i].value;
    }
  }
  document.NewRegistration.submit();
}
//
function partialRegistration() {
  document.partRegistration.srchsnam.value=document.search.srchsnam.value;
  document.partRegistration.srchgnam.value=document.search.srchgnam.value;
  document.partRegistration.srchpage.value=document.search.srchpage.value;
  document.partRegistration.srchpdob.value=document.search.srchpdob.value;
  for (var i =0 ; i < document.search.srchpsex.length; i++) {
    if (document.search.srchpsex[i].checked=="1" ) {
     document.partRegistration.srchpsex.value=document.search.srchpsex[i].value;
    }
  }
  document.partRegistration.submit();
}
//
function quickRegistration() {
  document.QuickReg.submit();
}
//
function CheckMedicareScan(t){
  if(document.search.srchmedi==undefined) {
    return;
  }
  if(t.value.substr(0,6)=="610072"){        // Cherry keyboard
     document.search.srchmedi.value=t.value.substr(7,9)
  } else if(t.value.substr(0,1)==";"){      // ASP Quick Stripe
     document.search.srchmedi.value=t.value.substr(8,17)
  }

}
function setMedicare(MedicareNo) {
 if (document.search.srchtype.value =="5") {
   if (!isWhitespace(MedicareNo.value)) {
   MedicareNo.value=MedicareNo.value.replace(/ /g,"");
   CheckMedicareScan(MedicareNo);
   for (var i =0 ; i < document.search.srchtype.length; i++) {
     if (document.search.srchtype.options[i].value=="5") {
         document.search.srchtype.selectedIndex=i } };
    document.search.urnumber.disabled=1;
    document.search.urnumber.value=""
    document.search.srchsnam.disabled=1;
    document.search.srchsnam.value="";
    document.search.srchgnam.disabled=1;
    document.search.srchgnam.value="";
    document.search.srchpsex[0].disabled=1;
    document.search.srchpsex[1].disabled=1;
    document.search.srchpsex[2].disabled=1;
    document.search.srchpdob.disabled=1;
    document.search.srchpdob.value="";
    document.search.srchpage.disabled=1;
    document.search.srchpage.value="";
    document.search.srcharan.disabled=1; 
  }
 }
}
//
function setMedicareKids(MedicareNo) {

if(!isWhitespace(MedicareNo.value)) {
   for (var i =0 ; i < document.search.srchtype.length; i++) {
     if (document.search.srchtype.options[i].value=="5") {
         document.search.srchtype.selectedIndex=i } };
    document.search.urnumber.disabled=1;
    document.search.urnumber.value=""
    document.search.srchsnam.disabled=1;
    document.search.srchsnam.value="";
    document.search.srchgnam.disabled=1;
    document.search.srchgnam.value="";
    document.search.srchpsex[0].disabled=1;
    document.search.srchpsex[1].disabled=1;
    document.search.srchpsex[2].disabled=1;
    document.search.srchpdob.disabled=1;
    document.search.srchpdob.value="";
    document.search.srchpage.disabled=1;
    document.search.srchpage.value="";
    document.search.srcharan.disabled=1;
   }
  else {
//   for (var i =0 ; i < document.search.srchtype.length; i++) {
//     if (document.search.srchtype.options[i].value=="1") {
//         document.search.srchtype.selectedIndex=i } };
    document.search.urnumber.disabled=0;
    document.search.srchsnam.disabled=0;
    document.search.srchgnam.disabled=0;
    document.search.srchpsex[0].disabled=0;
    document.search.srchpsex[1].disabled=0;
    document.search.srchpsex[2].disabled=0;
    document.search.srchpdob.disabled=0;
    document.search.srchpage.disabled=0;
    document.search.srcharan.disabled=0; 
    //setDefault();
}
}
//
function setBirth(birthdate) {
 if((!isWhitespace(birthdate.value)) && 
   (isWhitespace(document.search.srchsnam.value))) {
   for (var i =0 ; i < document.search.srchtype.length; i++) {
     if (document.search.srchtype.options[i].value=="3") {
         document.search.srchtype.selectedIndex=i } };
     document.search.action="patweb90.pbl";
     document.search.reportno.value="01";
     document.search.urnumber.value="";
     document.search.srchsnam.disabled=1;
     document.search.srchgnam.disabled=1;
     document.search.srchpsex[0].disabled=1;
     document.search.srchpsex[1].disabled=1;
     document.search.srchpsex[2].disabled=1;
     document.search.srchpdob.disabled=0;
     document.search.srchpage.disabled=1;
     document.search.srcharan.disabled=1; }
}
function setUniqueID(){
if(!isWhitespace(document.search.uniqueid.value)) {
  justifyRight(document.search.uniqueid)
  document.search.action=setUniqueID.arguments[0];
  document.search.reportno.value=setUniqueID.arguments[1];
  document.search.template.value=setUniqueID.arguments[2];
 }
}
function CheckMrtScan() {
 if(document.search.ptcnualt!=undefined){
   if(document.search.ptcnualt.value=="1"){
     return;
   }
 }
 if (typeof document.addEventListener != 'undefined') {
   document.removeEventListener('keydown', AddMrtScanEvent);
   document.addEventListener('keydown', AddMrtScanEvent);
 }
 else if (typeof document.attachEvent != 'undefined') {
  document.search.urnumber.detachEvent('keydown',AddMrtScanEvent);
  document.search.urnumber.attachEvent('keydown',AddMrtScanEvent);
 }
 else {
  document.search.urnumber.onkeydown="";
  document.search.urnumber.onkeydown=AddMrtScanEvent;
 }
}
function AddMrtScanEvent() {
 TruncateMrtLf(document.search.urnumber);
}
function setUR() {
 CheckMrtScan();
 if(!isWhitespace(document.search.urnumber.value)) {
   for (var i =0 ; i < document.search.srchtype.length; i++) {
     if (document.search.srchtype.options[i].value=="4") {
         document.search.srchtype.selectedIndex=i } };
    UpCase(document.search.urnumber)
    if(document.search.ptcnualt!=undefined){
      if(document.search.ptcnualt.value=="1"){
        FormatURScanMrtLf(document.search.urnumber);
      }
    }
    FormatURScan(document.search.urnumber);
    justifyRight(document.search.urnumber)
    switch (setUR.arguments.length) {
      case 3: {
        document.search.action=setUR.arguments[0];
        document.search.reportno.value=setUR.arguments[1];
        document.search.template.value=setUR.arguments[2];
        break;
      }
      default: {
        if(document.search.ptcnualt==undefined){
          document.search.action="patweb98.pbl";
          document.search.reportno.value="01";
          document.search.template.value="001";
          break;}
        if(document.search.ptcnualt.value!="1"){
          document.search.action="patweb98.pbl";
          document.search.reportno.value="01";
          document.search.template.value="001";
          break;}
          document.search.alternid.value=document.search.urnumber.value;
          document.search.alternid.maxLength=20;
          justifyRight(document.search.alternid);
          checkAlternateID(document.search.alternid.value,
                           document.search.aisearch,document.search.urnumber);
          if(document.search.aisearch.value<"2"){
            document.search.urnumber.maxLength=8;
            justifyRight(document.search.urnumber);
            document.search.action="patweb98.pbl";
            document.search.reportno.value="01";
            document.search.template.value="001";
            break;}
          else {
            document.search.urnumber.value=document.search.alternid.value;
            document.search.action="patweb90.pbl";
            document.search.reportno.value="01";
            break;}
      }
    }
    document.search.srchsnam.disabled=1;
    document.search.srchsnam.value="";
    document.search.srchgnam.disabled=1;
    document.search.srchgnam.value="";
    document.search.srchpsex[0].disabled=1;
    document.search.srchpsex[1].disabled=1;
    document.search.srchpsex[2].disabled=1;
    document.search.srchpdob.disabled=1;
    document.search.srchpdob.value="";
    document.search.srchpage.disabled=1;
    document.search.srchpage.value="";
    document.search.srcharan.disabled=1;
    document.search.srcharan.value="";
    if(!document.search.srchmedi==undefined) {
      document.search.srchmedi.disabled=1;                   
      document.search.srchmedi.value="";
    }                    
    document.search.srchtype.selectedIndex=3;
 } else {
    UpCase(document.search.srchsnam)
    UpCase(document.search.srchgnam)
//    document.search.action="patweb90.pbl";
//    document.search.reportno.value="01";
    document.search.srchsnam.disabled=0;
    document.search.srchgnam.disabled=0;
    document.search.srchpsex[0].disabled=0;
    document.search.srchpsex[1].disabled=0;
    document.search.srchpsex[2].disabled=0;
    document.search.srchpdob.disabled=0;
    document.search.srchpage.disabled=0;
    document.search.srcharan.disabled=0;
    document.search.srchtype.disabled=0;
 }
}
function setAdm() {
  p = document.search;
  if(!isWhitespace(document.search.admissno.value)) {
    for (var i =0 ; i < document.search.srchtype.length; i++) {
      if (document.search.srchtype.options[i].value=="4") {
          document.search.srchtype.selectedIndex=i } };
    justifyRight(p.admissno)

    var sPad = "        ";
    // Right justify Admission  Number in the 8 character variable
    var AdmNo = trim(p.admissno.value);
    var AdmNo = sPad.substr(0,(8 - AdmNo.length)) + AdmNo;

    // Check if cancelled outpatient visit
    var serverURL = "../cgi-bin/comweb81.pbl?reportno=59" +
                    "&valdcode=" + AdmNo.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status == 0) {
      ReturnValue = returnValue.return_value.split("|")
      if (ReturnValue.length > 1) {
        urno = trim(ReturnValue[7]);
        alert('Cancelled Outpatient Visit for UR ' + urno);
        p.urnumber.value = '';
        return false;
      }
    }

    if(p.ptcnaltv!=undefined) {
      ans=validateCode(12,p.admissno,p.dummy,p.dummy,p.dummy,p.dummy,p.urnumber,
                       p.altvisnm,p.dummy,p.dummy,p.dummy);
    } else {
      ans=validateCode(12,p.admissno,p.dummy,p.dummy,p.dummy,p.dummy,p.urnumber,
                       p.dummy,p.dummy,p.dummy,p.dummy);
    }
    if(!ans) { return false }

    if(document.search.ptcnaltv!=undefined){
      if(document.search.ptcnaltv.value=="1"){
        p.admissno.value=p.altvisnm.value
        document.search.admissno.maxLength="8"
      }
    }
    
    UpCase(document.search.admissno);
    justifyRight(document.search.admissno);

    if (p.urnumber.value == '0') {
      document.search.action="emrweb02.pbl";
      document.search.reportno.value="01";
      document.search.template.value="017";
    } else {
      document.search.action="patweb98.pbl";
      document.search.reportno.value="01";
      document.search.template.value="001";
      CheckSwitchOutpatientReferral();
    }

    document.search.srchsnam.disabled=1;
    document.search.srchsnam.value="";
    document.search.srchgnam.disabled=1;
    document.search.srchgnam.value="";
    document.search.srchpsex[0].disabled=1;
    document.search.srchpsex[1].disabled=1;
    document.search.srchpsex[2].disabled=1;
    document.search.srchpdob.disabled=1;
    document.search.srchpdob.value="";
    document.search.srchpage.disabled=1;
    document.search.srchpage.value="";
    document.search.srcharan.disabled=1;
    document.search.srcharan.value="";
    document.search.srchtype.selectedIndex=5;
    return true;
  } else {
    UpCase(document.search.srchsnam)
    UpCase(document.search.srchgnam)
    document.search.srchsnam.disabled=0;
    document.search.srchgnam.disabled=0;
    document.search.srchpsex[0].disabled=0;
    document.search.srchpsex[1].disabled=0;
    document.search.srchpsex[2].disabled=0;
    document.search.srchpdob.disabled=0;
    document.search.srchpage.disabled=0;
    document.search.srcharan.disabled=0;
    document.search.srchtype.disabled=0;
    return true;
  }
}

function CheckSwitchOutpatientReferral() {
  p = document.search;

//outpatient vsist
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=62" +
                  "&valdcode=" + p.admissno.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length != 1) {
     if (p.ptcnvsro.value == '1') {
        p.action="outweb02.pbl";
        p.reportno.value="03";
        p.template.value="020";
      }
      else {
        if (p.ptcnvsro.value == '2') {
          p.action="outweb02.pbl";
          p.reportno.value="03";
          p.template.value="001";
        }
      }
      return true;
    }
  }

  var serverURL = "../cgi-bin/comweb81.pbl?reportno=53" +
                  "&valdcode=" + p.admissno.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    if (ReturnValue.length == 1) {
      return true; 
    }
     
    var ptvitype = ReturnValue[11];
    // Referral Visit
    if (ptvitype == '10') {
      if (p.ptcnvsrr.value == '1') {
        p.action="allweb02.pbl";
        p.reportno.value="02";
        p.template.value="014";
      }
      else {
        if (p.ptcnvsrr.value == '2') {
          p.action="allweb02.pbl";
          p.reportno.value="02";
          p.template.value="002";
        }
      }
    }
  }
  return true;
}
//-----------------------------------------------------------------
// Function To Check Alternate ID
//-----------------------------------------------------------------
function checkAlternateID(altid,numofids,urnumber) {
  if (isWhitespace(altid)) return;;
  ReturnFunction="" ;
  for (var i=1; i < checkAlternateID.arguments.length; i++) {
   if (typeof(checkAlternateID.arguments[i]) == 'function') {
     ReturnFunction=checkAlternateID.arguments[i] } }
  var serverURL = "../cgi-bin/patweb90.pbl?reportno=2&remoteno=1" +
                  "&alternid="+altid.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    numofids.value=trim(ReturnValue[0])
    urnumber.value=trim(ReturnValue[1])
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
function checkType() {
  if(document.search.srchtype.value==3) {
    document.search.action="patweb90.pbl";
    document.search.reportno.value="01";
    document.search.urnumber.value="";
    document.search.srchsnam.disabled=1;
    document.search.srchgnam.disabled=1;
    document.search.srchpsex[0].disabled=1;
    document.search.srchpsex[1].disabled=1;
    document.search.srchpsex[2].disabled=1;
    document.search.srchpdob.disabled=0;
    document.search.srchpage.disabled=1;
    document.search.srcharan.disabled=1;
    document.search.srchpdob.focus();
  } 
  else if(document.search.srchtype.value==4) {
         document.search.action="patweb98.pbl";
         document.search.reportno.value="01";
         document.search.srchsnam.disabled=1;
         document.search.srchsnam.value="";
         document.search.srchgnam.disabled=1;
         document.search.srchgnam.value="";
         document.search.srchpsex[0].disabled=1;
         document.search.srchpsex[1].disabled=1;
         document.search.srchpsex[2].disabled=1;
         document.search.srchpdob.disabled=1;
         document.search.srchpdob.value="";
         document.search.srchpage.disabled=1;
         document.search.srchpage.value="";
         document.search.srcharan.disabled=1;
         document.search.srcharan.value="";
         document.search.urnumber.disabled=0;
         document.search.urnumber.focus();
         } 
        else if(document.search.srchtype.value==5) {
          document.search.action="patweb90.pbl";
          document.search.reportno.value="01";
          document.search.urnumber.value="";    
          document.search.urnumber.disabled=1
          document.search.srchsnam.disabled=1;
          document.search.srchgnam.disabled=1;
          document.search.srchpsex[0].disabled=1;
          document.search.srchpsex[1].disabled=1;
          document.search.srchpsex[2].disabled=1;
          document.search.srchpage.disabled=1;
          document.search.srchpdob.disabled=1;
          document.search.srcharan.disabled=1;
          if(!document.search.srchmedi==undefined) {
            document.search.srchmedi.disabled=0;
            document.search.srchmedi.focus();
           }
          }
        else if(document.search.srchtype.value==7) {
          document.search.admissno.focus();
        }
  else {
        document.search.action="patweb90.pbl";
        document.search.reportno.value="01";
        document.search.urnumber.value="";
        document.search.srchsnam.disabled=0;
        document.search.srchgnam.disabled=0;
        document.search.srchpsex[0].disabled=0;
        document.search.srchpsex[1].disabled=0;
        document.search.srchpsex[2].disabled=0;
        document.search.srchpage.disabled=0;
        document.search.srchpdob.disabled=0;
        document.search.srcharan.disabled=0;
        document.search.srchsnam.focus();
        }
}

function showPatient(linkURL) {
  remote=open(linkURL,"PatientDetails",
  "width=640,height=300,scrollbars=no,status=no,toolbar=no,menubar=no");
}

function NHISearch() {
  if(document.search.urnumber.value!="") {
  document.search.urnumber.value=document.search.urnumber.value.replace(/ /,"");
      location.href="nhiweb99.pbl?reportno=1&template=002&urnumber=" +
                    document.search.urnumber.value;
  } else {
    alert("NHI search by U/R Number only");
  }
}
function Ckfeild(name)
{
name.value=name.value.split(/\s/);
var result=name.value.match(/[^a-zA-Z]/);
if (result !=null) {
alert("  Please Re-Enter Correctly!   ");
                   }
}
function checkInteger(theField, s) {
 var Vflag = "0"
 if ( (theField.value.match(/\./g)) || (theField.value.match(/\+/g)) ) {
     alert( s + " Must be an Integer")
     theField.focus()
     return false }
//
 if (isFinite(theField.value)) {
   if(isFinite(theField.max)) {
      if (parseInt(theField.value,10)>parseInt(theField.max,10)) {
         alert( theField.title + " Must be Less Than or = " + theField.max)
         Vflag = "1"
         theField.focus()} }
   if(isFinite(theField.min)) {
      if (parseInt(theField.value,10)<parseInt(theField.min,10)) {
         alert( theField.title + " Must be Greater Than or = " + theField.min)
         Vflag = "1"
         theField.focus()} }
 } else {
   alert( s + " Must be Numeric")
   Vflag = "1" }
//
 if (Vflag == "1") {
   theField.focus()
   theField.select()
   return false; }
return true;
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
function validateSearchAndSubmit(){
  if(document.search.srchtype.value==4){
    if(isWhitespace(document.search.urnumber.value)){
       alert('U/R Number cannot be blank');
       return;
    }
  }
  document.search.submit();
}
