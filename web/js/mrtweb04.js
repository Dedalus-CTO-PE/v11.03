//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb04.js
//
// Written   : 12.02.2001 Pat Dirito  
//
// Function  : Standard Functions Used in mrtweb04 templates
//
//========================================================================
//  Report 1  Template 1
//========================================================================
function ChangeVol(volno) {
  ServerPage="mrtweb04.pbl?reportno=1&template=001"
  if(volno.value=="All") {
  location.href=ServerPage +
       "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
       "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") }
  else {
  location.href=ServerPage +
       "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
       "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
       "&volumeno="+volno.value.replace(/ /g,"+")
  }
}
function setMov(move) {
  document.UpdateForm[move.name].checked=1; 
  SetLoc(move);
}
function CheckMov() {
  if (UpdateForm.filreqed.checked==true) {
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/moverc/)) {
        if (document.UpdateForm.elements[i].checked==true) {
          var checkLocation = SetLoc(document.UpdateForm.elements[i]);
        }
      }
    }
  }
}
function SetLoc(code) {
  if (UpdateForm.filreqed.checked==true) {
    cgino=code.name.substring(6,8);   // Retrieve the variable no from the name
    mrtmasky="mrtmas" + cgino;        // Set the equivalent cgi's needed
    newlocat="newloc" + cgino;        // Set the equivalent cgi's needed
    newdhosp="newhos" + cgino;        // Set the equivalent cgi's needed
    moverecd="moverc" + cgino;        // Set the equivalent cgi's needed
    if (isWhitespace(UpdateForm[moverecd].value)) return;;
    if (UpdateForm[moverecd].checked==true) {
      var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=2" +
                  "&valdcode=" + UpdateForm[mrtmasky].value.replace(/ /g,"+") +
                  "&desthosp=" + UpdateForm[newdhosp].value.replace(/ /g,"+") +
                  "&location=" + UpdateForm[newlocat].value.replace(/ /g,"+") 
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        moveflag=ReturnValue[0];
        volno=UpdateForm[mrtmasky].value.substring(15,17)
        if (moveflag=="1"){
//          alert("Outstanding Filing exists for this patient.\nVolume no "
//                + volno + " is moving to an Internal Location!"); 
          alert("Outstanding Filing exists for this patient. Volume no ("
                + volno + ")."); 
        }
        if (moveflag=="2"){
//          alert("Outstanding Filing exists for this patient.\nVolume no "
//                + volno +" is moving from an Internal Location!");
          alert("Outstanding Filing exists for this patient. Volume no ("
                + volno + ")."); 
        }
        if (moveflag=="3"){
//          alert("Outstanding Filing exists for this patient.\nVolume no "
//                + volno +" is moving between Internal Locations!");
          alert("Outstanding Filing exists for this patient. Volume no ("
                + volno + ")."); 
        }
      }
    }
  }
}
function Setdoctyp() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/moverc/)) {
      document.UpdateForm.elements[i].checked=true; 
      SetLoc(document.UpdateForm.elements[i]);
      break;         // Only set the first one found which is latest volume!
    }
  }
}
function SubForm() {
  f = document.UpdateForm;
  ServerPage="patweb98.pbl?reportno=1&template=001"
  if (f.frhosplv != undefined) {
    if (f.frhosplv.value == "1") {
      ServerPage="patweb98.pbl?reportno=2&template=003"
    }
  }

  document.UpdateForm.redirect.value=ServerPage + 
  "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
  "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+");
  document.UpdateForm.updttype.value="A";
  if (validateMandatory(UpdateForm)) {
    if (UpdateForm.mrtsecno!=undefined) {
      ans=CheckMRTS();
      if (ans==false) { return; }
    }
    UpdateForm.target="PopUpFrame"
    UpdateForm.submit();
  }
}
function SetReq() {
  if (document.AddForm.requtype.value=="1") {
    RequestType.innerHTML=ReqFree.innerHTML;
  } else {
    RequestType.innerHTML=ReqSelect.innerHTML;
  }
}
function CheckMRTS() {
  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=6" +
                  "&valdmrts=" + UpdateForm.mrtsecno.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    UpdateForm.mrtsecid.value=ReturnValue[0];
    return true;
  } else {
    UpdateForm.mrtsecno.select();
    return false }
}
//========================================================================
//  Report 1  Template 2
//========================================================================
function GoPostDis() {
 p=document.UpdateForm
 document.UpdateForm.urnumber.value=document.UpdateForm.dum1.value
 if (document.UpdateForm.pce.value==1) {
   alert("Patient is Deceased") }
 if (isWhitespace(document.UpdateForm.admissno.value)) {
   ServerPage="patweb98.pbl?reportno=01&template=039" 
   alert("No Visit Details Found") }
 else {
   ServerPage="mrtweb04.pbl?reportno=1&template=001" 
   if (p.volflag.value=="1") {
     location.href=ServerPage +
           "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&volumeno="+document.UpdateForm.savvol.value +
           "&frhosplv=1" }
   else { 
     location.href=ServerPage +
           "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&frhosplv=1" }
   }
}
function valPostRecordID() {
 p=document.UpdateForm
 if(p.urnumber.value!="") {
   LenUR=p.urnumber.value.length
   if (LenUR < 9) { 
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.urnumber.value=Blanks + p.urnumber.value }
      validatePost(1,p.urnumber,p.fnam,GoPostDis,p.sex,p.dob,p.pce,p.dum1,p.admissno,p.dat,p.typ,p.dum2,p.volflag,p.savvol)
  }
}
function validatePost(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="";
  ReturnName.value="";
  for (var i=3; i < validatePost.arguments.length; i++) {
    if (typeof(validatePost.arguments[i]) == 'function') {
      ReturnFunction=validatePost.arguments[i] }
    else {
      validatePost.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3" +
                  "&valdtype=" + OptionNumber +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") 

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=ReturnValue[0]
    j=0
    for (var i=3; i < validatePost.arguments.length; i++) {
       if (typeof(validatePost.arguments[i]) != 'function') {
         j++
         validatePost.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();  }
}
//========================================================================
//  Report 5  
//========================================================================
function ClearForm() {
  document.SendForm.urnumber.value="";
  document.SendForm.updttype.value="";
  document.SendForm.urnumber.focus();
  document.SendForm.submit();
}
function SetForm() {
//  document.SendForm.urnumber.value="";
  document.SendForm.docmtype.focus();
  document.AddForm.volumeno.value=document.SendForm.volumeno.value;
}
function HistoryLink(key) {
 LinkUrl="mrtweb01.pbl?reportno=10&template=3" +
         "&mrhiskey=" + key.replace(/ /g,"+") +
         "&urnumber=" + document.PatientLinks.urnumber.value
 Left=(document.body.clientWidth-450)/2
 DFrameLink(LinkUrl,155,Left,450,120)
}
// Need this function as at times Error message was refreshing to blank screen
function ReSnFormWait() {
  setInterval('ReSnForm()',600);
}
function ReSnForm() {
  if (validateMandatory(SendForm)) {
    document.SendForm.updttype.value="L";
    document.SendForm.submit();
  }
}
function setvol(vol) {
  document.SendForm.volumeno.value=vol.value; 
  if (validateMandatory(SendForm)) {
    document.SendForm.updttype.value="L";
    document.SendForm.submit();
  }
}
function ClearVol() {
  document.SendForm.volumeno.value=""; 
}
function validateRecordIDKids() {
  p=document.SendForm
  if(p.urnumber.value!="") {
    LenUR=p.urnumber.value.length
    if (LenUR < 8) {
      Count= 7 - LenUR ;
      Blanks=" ";
      Zero=""
      for (i=0; i < Count;i++) { Zero+="0";}
      p.urnumber.value=Blanks + Zero + p.urnumber.value 
    }
    validateCodeMerge(28,p.urnumber,p.patname,p.Merged,p.Mergedur,p.mrrecord) 
  } else { return; }
  if (p.patname.value=="") {
     p.urnumber.focus();}
  if (p.patname.value!="") {
    if (p.Merged.value=="1") {
      if (p.mrrecord.value!="1") {
        alert("Warning : This U/R Number is merged with " + p.Mergedur.value);
        p.urnumber.value=p.Mergedur.value; 
        validateRecordIDKids() // Load U/R that this U/R is merged with!
        return;
      } else {
        alert("Warning : This U/R Number is merged with " + p.Mergedur.value +
              "\nU/R - " + p.urnumber.value + " still has a medical record, " + 
              "please merge all medical records for this UR!");
        p.urnumber.value="";
        return;
      } 
    }
    if (validateMandatory(SendForm)) {
      document.SendForm.updttype.value="L";
      document.SendForm.submit();
    }
  }
}
function validateRecordID() {
  p=document.SendForm
  if(p.urnumber.value!="") {
    LenUR=p.urnumber.value.length
    if (LenUR < 9) {
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.urnumber.value=Blanks + p.urnumber.value 
    }
    validateCodeMerge(28,p.urnumber,p.patname,p.Merged,p.Mergedur,p.mrrecord) 
  } else { return; }
  if (p.patname.value=="") {
     p.urnumber.focus();}
  if (p.patname.value!="") {
    if (p.Merged.value=="1") {
      if (p.mrrecord.value!="1") {
        alert("Warning : This U/R Number is merged with " + p.Mergedur.value);
        p.urnumber.value=p.Mergedur.value; 
        validateRecordID() // Load U/R that this U/R is merged with!
        return;
      } else {
        alert("Warning : This U/R Number is merged with " + p.Mergedur.value +
              "\nU/R - " + p.urnumber.value + " still has a medical record, " + 
              "please merge all medical records for this UR!");
        p.urnumber.value="";
        return;
      } 
    }
    if (validateMandatory(SendForm)) {
      document.SendForm.updttype.value="L";
      document.SendForm.submit();
    }
  }
}
function ValidateRetention(ReturnMR,ReturnHHos,ReturnHLoc) {
  var serverURL   = "../cgi-bin/patweb85.pbl?reportno=9&updatety=R" +
                    "&mrkeyarr=" + ReturnMR.value.replace(/ /g,"+") +
                    "&recvhosp=" + ReturnHHos.value.replace(/ /g,"+") +
                    "&recvlocn=" + ReturnHLoc.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    return true;
  } else {
   return false;
  }
}
function DueDate(ReturnCode){
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                    "&mrtme005=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.AddForm.mrtme007.value=returnValue.return_value
  } else {
    ReturnCode.select();  
  }
}
function DueDateMand(ReturnCode){
  if(ReturnCode.value.substr(4,1) == "0" &&
     ReturnCode.value.substr(5,1) == "1"){          // Ordinary and other
    document.AddForm.mrtme007.className="Mandatory";
  } else {
    document.AddForm.mrtme007.className="";
  }
  if(trim(ReturnCode.value.substr(7,3)) == "0") {  // Borrowing period = 0
    document.AddForm.mrtme007.value="";
    return;
  } 
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                    "&mrtme005=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.AddForm.mrtme007.value=returnValue.return_value
  } else {
    ReturnCode.select();
  }
}
function ChkHist() {
  if (isWhitespace(AddForm.mrtme003.value)) {
    alert("Destination is required !");
    return;
    }
  if (isWhitespace(AddForm.mrtme001.value)) {
    return;
    }
  if (isWhitespace(AddForm.mrtme002.value)) {
    return;
    }
  if (isWhitespace(AddForm.medrecky.value)) {
    return;
    }
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=16" +
                    "&mrkeyarr=" + AddForm.medrecky.value.replace(/ /g,"+") + 
                    "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                    "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                    "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+")

  if (AddForm.mrtme019 != undefined) {
    serverURL += "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    Locat=ReturnValue[0];  // Note must save returned variable here as
    Incomp=ReturnValue[1]; // following remote script will whipe these
    Movdte=ReturnValue[2]; 
    Lastdte=ReturnValue[3]; 
    Unfilled=ReturnValue[4]; 
    disdate=ReturnValue[5]; 
    disdest=ReturnValue[6]; 
    pdtdest=ReturnValue[7]; 
    visitno=ReturnValue[8]; 
    ReqstDate=ReturnValue[9];
    ReqstTime=ReturnValue[10];
    ReqstLoc=trim(ReturnValue[11]);
    ReqstLocD=ReturnValue[12];
    Requestor=ReturnValue[13];
    ReqstReas=trim(ReturnValue[14]);
    ReqstReasD=ReturnValue[15];

    if (Locat=="1") {
      if (document.AddForm.mrcnwnhl.value==1) {
        alert("Warning : Record Moving to a Home Location that is not its own !");
      }
    }

    if (document.AddForm.ignorcod != undefined) {
      if (document.AddForm.ignorcod.checked == true) {
         Incomp=0;  // Turn off incomplete coding warning
      }
    }
    if (Incomp=="1") {
 // Note this Error will only display if Record is moving to or from an
 // internal location. Following remote script checks for an internal movement!
      var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=2" +
                  "&valdcode=" + AddForm.medrecky.value.replace(/ /g,"+") +
                  "&desthosp=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme003.value.replace(/ /g,"+")
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        moveflag=ReturnValue[0];
        if ((moveflag >= "1") && (moveflag <= "3")) {
          if (!isWhitespace(disdate)) {
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno + "\nDisch Date= " + disdate + 
                  "\nDisch Dest= " + disdest +
                  "\nPost Disch Status= " + pdtdest); }
          else {
          // This must be a long term admission as no discharge info found!
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno);    
          }
        }
      }
    }
    if (Movdte=="1") {
//      alert("Warning : Movement date is before last movement date " + 
//            Lastdte);

      ans=confirm("Warning : Movement date is before last movement date " +
                  Lastdte + "\nAll movements after the entered date will be " +
                  "be removed!");
      if (!ans) { return false; }

    }
    if (Unfilled=="1") {
      alert("Warning : Unfilled requests exist for this record!\n" +
            "Next Request Due= " + ReqstDate + "@" + ReqstTime +
            "\nRequest Location= " + ReqstLoc + " - " + ReqstLocD +
            "\nRequestor= " + Requestor +
            "\nMovement Reason= " + ReqstReas + " - " + ReqstReasD);
    }
  }
}
function ValidateMRTS() {
  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=6" +
                  "&valdmrts=" + AddForm.mrtsecno.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    AddForm.mrtsecid.value=ReturnValue[0];
    return true;
  } else { 
    AddForm.mrtsecno.select();
    return false }
}
function SubMov() {
  if (validateMandatory(AddForm)) {

    if(!ValidateRetention(SendForm.urnumber,AddForm.mrtme019,AddForm.mrtme003)){
       document.AddForm.mrtme003.value="";
       document.AddForm.mrtme003.focus();
       return;
    }

    if (AddForm.mrtsecno!=undefined) {
      ans=ValidateMRTS();
      if (ans==false) { return; }
    }

    ans=ChkHist();
    if (ans==false) { return; }

    if (AddForm.filreqed.value=="Y") {
      var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=2" +
                  "&valdcode=" + AddForm.medrecky.value.replace(/ /g,"+") +
                  "&desthosp=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme003.value.replace(/ /g,"+") 
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        moveflag=ReturnValue[0];
        if (moveflag=="1"){
//          alert("Outstanding Filing exists for this patient.\n" +
//                "Record is moving to an Internal Location!"); 
          alert("Outstanding Filing exists for this patient."); 
        }
        if (moveflag=="2"){
//          alert("Outstanding Filing exists for this patient.\n" +
//                "Record is moving from an Internal Location!");
          alert("Outstanding Filing exists for this patient."); 
        }
        if (moveflag=="3"){
//          alert("Outstanding Filing exists for this patient.\n" +
//                "Record is moving between Internal Locations!"); 
          alert("Outstanding Filing exists for this patient."); 
        }
      }
    }
    AddForm.target="PopUpFrame"
    AddForm.submit();
  }
}
function SetHospital(p) {
  if(p.ibcnmhos.value=="1") {
    HospitalTitle.innerHTML=ShowHospitalTitle.innerHTML;
    Hospital.innerHTML=ShowHospital.innerHTML;
  } else {
    HospitalTitle.innerHTML="";
    Hospital.innerHTML=ShowNoHospital.innerHTML;
  }
}
function SetHomeHosp(p) {
  if(p.ibcnmhos.value=="1") {
    HomeHospTitle.innerHTML=ShowHomeHospTitle.innerHTML;
    HomeHosp.innerHTML=ShowHomeHosp.innerHTML;
  } else {
    HomeHospTitle.innerHTML="";
    HomeHosp.innerHTML=ShowNoHomeHosp.innerHTML;
  }
}
function selectHHosp(p) {
  if(document.SendForm.ibcnmhos.value=="1") {
    for (var i =0 ; i < p.mrtme020.length; i++) {
      if (p.mrtme020.options[i].value == p.homehosp.value)
          p.mrtme020.selectedIndex = i ;
    }
  }
}
function SetDestination(p) {
  if (!isWhitespace(p.mrtme019.value)) {
       p.desthosp.value = p.mrtme019.value; }
  if (!isWhitespace(p.mrtme003.value)) {
       p.destlocn.value = p.mrtme003.value; }

  p.mrtme003.options.length=0;
  p.mrtme003.options[p.mrtme003.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiLocations(p.mrtme003,p.destlocn.value,p.desthosp.value)
     if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(p.mrtme003);
      }
         
  } else {
     MrtLocations(p.mrtme003,p.destlocn.value)
     if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(p.mrtme003);
      }
  }
}

function sortMrtLocation(selElem) {
    var tmpAry = new Array();

    for (var i=0;i<selElem.options.length;i++) {
        tmpAry[i] = new Array();
        tmpAry[i][1] = selElem.options[i].text;
        //ignore case
        tmpAry[i][0] = selElem.options[i].text.toUpperCase();
        tmpAry[i][2] = selElem.options[i].value;
    }

    tmpAry.sort();

    while (selElem.options.length > 0) {
        selElem.options[0] = null;
    }

    for (var i=0;i<tmpAry.length;i++) {
        var op = new Option(tmpAry[i][1], tmpAry[i][2]);
        selElem.options[i] = op;
    }

    return;
}
function sortLocation(formElement) {
 if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(formElement);
 }
}
function SetHomeLocn(p) {
  if (!isWhitespace(p.mrtme020.value)) {
       p.homehosp.value = p.mrtme020.value; }
  if (!isWhitespace(p.mrtme017.value)) {
       p.homeloct.value = p.mrtme017.value; }

  p.mrtme017.options.length=0;
  p.mrtme017.options[p.mrtme017.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiHomeLocns(p.mrtme017,p.homeloct.value,p.homehosp.value)
  } else {
     MrtHomeLocns(p.mrtme017,p.homeloct.value)
  }
}

function SetUrEvent() {
  if (event.keyCode == 13) 
  {  // Carriage Return
    document.SendForm.urnumber.value =
    document.SendForm.urnumber.value.toUpperCase();

    FormatURScan(document.SendForm.urnumber);
    validateRecordID();
  } 
  else if (event.keyCode == 9) 
  {  // Tab
    if(isWhitespace(document.SendForm.urnumber.value))
    {
      document.SendForm.RecordKey.focus();
      return;
    }

    document.SendForm.urnumber.value =
    document.SendForm.urnumber.value.toUpperCase();

    FormatURScan(document.SendForm.urnumber);
    validateRecordID();
  }
}

function SearchPatient() {
  if (validateMandatory(SendForm)) {
     ClearVol();
     PatientSearchFrame(SendForm.patname,SendForm.urnumber,SendForm.d2,ReSnFormWait);
  }
}
function CheckMaxLength(barcode) {
  document.SendForm.RecordKey.maxLength=22;
}
function SetMedEvent() {
  if (event.keyCode == 13) {  // Carriage Return
    CheckIBAPrefix(document.SendForm.RecordKey);    // IBA and Alegra
    CheckKeyFormat(document.SendForm.RecordKey);    // change Key17 to Key20
    SetFormValues();
    validateRecordID();
    CheckMaxLength(document.SendForm.RecordKey);
  } else if (event.keyCode == 9) {  // Tab
    CheckIBAPrefix(document.SendForm.RecordKey);    // IBA and Alegra
    CheckKeyFormat(document.SendForm.RecordKey);    // change Key17 to Key20
    SetFormValues();
    validateRecordID();
    setTimeout('document.SendForm.RecordKey.focus()',100);
    CheckMaxLength(document.SendForm.RecordKey);
  }
}
function SetFormValues() {
  if (isWhitespace(document.SendForm.RecordKey.value)) { return ;}
  var ur=document.SendForm.RecordKey.value.substr(0,8);
  var homeh=document.SendForm.RecordKey.value.substr(8,3);
  var homel=document.SendForm.RecordKey.value.substr(11,4);
  var doct=document.SendForm.RecordKey.value.substr(15,3);
  var vol=document.SendForm.RecordKey.value.substr(18,2);

  document.SendForm.urnumber.value=ur

  p = document.SendForm;
  if (document.SendForm.ibcnmhos.value=="1") {
    if (isWhitespace(homeh)) {               // If barcode has no home hosp use
      homeh=p.mrtme020.value.substr(0,4);   // selected hospital from screen
    }
    p.mrtme020.selectedIndex=0;                  // homehosp = mrtme020
    for (var i =0 ; i < p.mrtme020.length; i++) {
       if (p.mrtme020.options[i].value.substr(0,4)==homeh.substr(0,4)){
           p.mrtme020.selectedIndex=i }
    };
    p.homehosp.value = p.mrtme020.value;
    p.mrtme017.options.length=0;
    p.mrtme017.options[p.mrtme017.options.length]=new Option(" "," ");
    MrtMultiHomeLocns(p.mrtme017,homel,homeh)

    // If our Home Location (homel) does not exist in the selection list,
    // default selection to the first option in the list.
    if ((p.mrtme017.selectedIndex == 0) && (p.mrtme017.options.length > 1)) {
      p.mrtme017.options.selectedIndex = 1;
    }
  } else {
    p.mrtme017.selectedIndex=0;                    // homeloct = mrtme017
    for (var i =0 ; i < p.mrtme017.length; i++) {
      if (p.mrtme017.options[i].value.substr(0,4)==homel.substr(0,4)){
          p.mrtme017.selectedIndex=i }
    };
  }
  p.homeloct.value = p.mrtme017.value;
 
  document.SendForm.docmtype.selectedIndex=0;
  for (var i =0 ; i < document.SendForm.docmtype.length; i++) {
  if(document.SendForm.docmtype.options[i].value.substr(0,3)==doct.substr(0,3)){
    document.SendForm.docmtype.selectedIndex=i } };

  document.SendForm.volumeno.options.length=0;
  document.SendForm.volumeno.options[document.SendForm.volumeno.options.length]=
  new Option(vol,vol);
}
function CheckIBAPrefix(barcode) {
  if(document.SendForm.mrcnibap.value!="1") { // Using IBA prefix
    return;
  }
  if(typeof(HospitalStateforHDPExtracts!=undefined)) {
    if(HospitalStateforHDPExtracts=="1") { // NZ
      CheckIBAPrefixNZ(barcode);
      return;
    }
  }
  if(barcode.value.substr(0,2)=="LF") {
    return; }                                 //  don't process new format
  if(barcode.value.substr(0,3)=="IBA") {
    barcode.value=barcode.value.substr(3);                 // Remove IBA prefix
  } else {
    ur=" " + barcode.value.substr(0,7)
    homeloc=barcode.value.substr(7,4)
    doctype=barcode.value.substr(11,3)
    var volume = new Object();
    volume.maxLength=2
    if(barcode.value.substr(17,1)=="0"){
      volume.value=barcode.value.substr(18,1)
    } else {
      volume.value=barcode.value.substr(17,2)
    }
    trim(volume.value)
    justifyRight(volume);
    barcode.value= ur + homeloc + doctype + volume.value
  }
  barcode.maxLength=17;
}
function CheckIBAPrefixNZ(barcode) {
  if(document.SendForm.mrcnibap.value!="1") { // Using IBA prefix
    return;
  }
  checkur=barcode.value.substr(2,1).search('[a-zA-Z]');  // NZ U/R ABC1234
  if(barcode.value.substr(0,2)=="LF" &&  checkur<0) {
    return; }                                 //  don't process new format
  if(barcode.value.substr(0,3)=="IBA") {
    barcode.value=barcode.value.substr(3);                 // Remove IBA prefix
  } else {
    ur=" " + barcode.value.substr(0,7)
    homeloc=barcode.value.substr(7,4)
    doctype=barcode.value.substr(11,3)
    var volume = new Object();
    volume.maxLength=2
    if(barcode.value.substr(17,1)=="0"){
      volume.value=barcode.value.substr(18,1)
    } else {
      volume.value=barcode.value.substr(17,2)
    }
    trim(volume.value)
    justifyRight(volume);
    barcode.value= ur + homeloc + doctype + volume.value
  }
  barcode.maxLength=17;
}
function CheckKeyFormat(barcode) {    // Convert MRMAKEY from 17 to 20 chars
  homehos = "   ";
  if(typeof(HospitalStateforHDPExtracts!=undefined)) {
    if(HospitalStateforHDPExtracts=="1") { // NZ
      CheckKeyFormatNZ(barcode);
      return;
    }
  }
  if(barcode.value.substr(0,2)=="LF") {
    barcode.value=barcode.value.substr(2);
  } else {
    barcode.maxLength=17;
    justifyRightKey(barcode);
    ur=barcode.value.substr(0,8)
    homeloc=barcode.value.substr(8,4)
    doctype=barcode.value.substr(12,3)
    volno=barcode.value.substr(15,2)
    barcode.value= ur + homehos + homeloc + doctype + volno
  }
  barcode.maxLength=20;
}
function CheckKeyFormatNZ(barcode) {    // Convert MRMAKEY from 17 to 20 chars
  homehos = "   ";
  checkur=barcode.value.substr(2,1).search('[a-zA-Z]');  // NZ U/R ABC1234
  if(barcode.value.substr(0,2)=="LF" && checkur<0) {
    barcode.value=barcode.value.substr(2);
  } else {
    barcode.maxLength=17;
    justifyRightKey(barcode);
    ur=barcode.value.substr(0,8)
    homeloc=barcode.value.substr(8,4)
    doctype=barcode.value.substr(12,3)
    volno=barcode.value.substr(15,2)
    barcode.value= ur + homehos + homeloc + doctype + volno
  }
  barcode.maxLength=20;
}
function justifyRightKey(theField) {
  if (theField.maxLength==undefined) { return }
  if (theField.value.length == 0) { return }
  Count=theField.maxLength - theField.value.length
  Blanks=""
  for (i=0; i < Count;i++) { Blanks+=" ";}
  theField.value=Blanks+theField.value
}
function DisplayTrackingAlert(DestHosp,Location,UR) {
  if(isWhitespace(Location.value) || isWhitespace(UR.value)) { return ; }

  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=19" +
                  "&desthosp=" + DestHosp.value.replace(/ /g,"+") +
                  "&location=" + Location.value.replace(/ /g,"+") +
                  "&urnumber=" + UR.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  var alertdisplay = document.getElementById("recordalert");
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     if(alertdisplay) {
       alertdisplay.innerHTML=trim(ReturnValue[0]);
       alertdisplay.className=trim(ReturnValue[1]);
     }
  } else {
     if(alertdisplay) {
       alertdisplay.innerHTML="";
       alertdisplay.className="";
     }

  }
}
