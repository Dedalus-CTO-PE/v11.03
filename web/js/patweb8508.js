//jsVersion  : V11.03.03
//========================================================================
// Program   : patweb8508.js
//
// Function  : Standard Functions Used in patweb8508 templates 
//
//========================================================================
var ItemCnt=0;
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
//
function SetHospitals() {
  p=document.AddForm;
  if(p.ibcnmhos.value=="1") {
    document.getElementById('RecvHospitalTitle').innerHTML=
    document.getElementById('ShowReceiveHospTitle').innerHTML
    document.getElementById('RecvHospital').innerHTML=
    document.getElementById('ShowReceiveHosp').innerHTML
    document.getElementById('HomeHospTitle').innerHTML=
    document.getElementById('ShowHomeHospTitle').innerHTML
    document.getElementById('HomeHosp').innerHTML=
    document.getElementById('ShowHomeHosp').innerHTML
  } else {
    document.getElementById('RecvHospital').innerHTML=
    document.getElementById('ShowNoReceiveHospital').innerHTML
    document.getElementById('HomeHosp').innerHTML=
    document.getElementById('ShowNoHospital').innerHTML
  }
  SetReceiveLoc();
  SetHomeLocn();
}
function SetReceiveLoc() {
  p=document.AddForm;
  p.recvlocn.options.length=0;
  p.recvlocn.options[p.recvlocn.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
    MrtMultiLocations(p.recvlocn,p.d_recvlocn.value,p.recvhosp.value);
  } else {
    MrtLocations(p.recvlocn,p.d_recvlocn.value);
  }
}
function SetHomeLocn() {
  p=document.AddForm;
  p.homelocn.options.length=0;
  p.homelocn.options[p.homelocn.options.length]=new Option(" "," ");
//
                     // Get hospitals default home location and Document type
  GetHomeLoc(p.homehosp,p.d_homelocn,p.d_doctype); 
//
  if(p.ibcnmhos.value=="1") {
    MrtMultiHomeLocns(p.homelocn,p.d_homelocn.value,p.homehosp.value);
    SelectOptionsHospCatCode(p.cat_TY,p.homehosp,p.docmtype);
  } else {
    MrtHomeLocns(p.homelocn,p.d_homelocn.value);
  }
//
                                      // select Document Type
  for (var i =0 ; i < document.AddForm.docmtype.length; i++) {
   if (document.AddForm.docmtype.options[i].value.substr(0,3)==
       document.AddForm.d_doctype.value) {
       document.AddForm.docmtype.selectedIndex=i }
  };
}
function SetUrEvent() {
  if (event.keyCode == 13) {                          // Carriage Return
    if(document.AddForm.fullflag!=undefined) {
      document.AddForm.fullflag.value="0";
    }
    document.AddForm.URNumber.value=
        document.AddForm.URNumber.value.toUpperCase();
    FormatURScan(document.AddForm.URNumber);
    validateRecordID();
  } else if (event.keyCode == 9) {                    // Tab
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="0";
    }
    document.AddForm.URNumber.value=
        document.AddForm.URNumber.value.toUpperCase();
    FormatURScan(document.AddForm.URNumber);
    validateRecordID();
    setTimeout('document.AddForm.URNumber.focus()',100);
  }
}
function validateRecordID() {
  if (validateMandatory(AddForm)) {
    p=document.AddForm
    if (p.URNumber.value!="") {
      LenUR=p.URNumber.value.length
      if (LenUR < 9) {
        Count= 8 - LenUR ;
        Blanks="";
        for (i=0; i < Count;i++) { Blanks+=" ";}
        p.URNumber.value=Blanks + p.URNumber.value
      }
      validateCode(13,p.URNumber,p.d1)
    }
    if (p.d1.value!="") {
      OutputTable(AddForm.URNumber);
    }
  }
}
function OutputTable(ReturnCode) {
  if (ItemCnt>=99) {
    alert("Page Limit Reached");
    return;
  }
  if (isWhitespace(ReturnCode.value)) return;;

  var MrKeyRecord="";
  var PatientName="";
  var CurrentHosp="";
  var CurrentLoct="";
  var LastMovDate="";
  var Description="";
  var Flag=0;
//
//  Check for a Merged U/R
//
  p=document.AddForm
  if (p.URNumber.value!="") {
    var patname=new Object();
    var Merged=new Object();
    var Mergedur=new Object();
    var mrrecord=new Object();

    validateCodeMerge(28,p.URNumber,patname,Merged,Mergedur,mrrecord)

    if (patname.value!="") {
      if (Merged.value=="1") {
        if (mrrecord.value!="1") {
          alert("Warning : This U/R Number is merged with " + Mergedur.value);
          if (p.wahealth == undefined ) {
            p.URNumber.value=Mergedur.value;
            OutputTable(p.URNumber) // Load U/R that this U/R is merged with!
          } else { p.URNumber.value = "" }
          return;
        } else {
          alert("Warning : This U/R Number is merged with " + Mergedur.value +
               "\nU/R - " + p.URNumber.value + " still has a medical record, " +
                "please merge all medical records for this UR!");
          p.URNumber.value="";
          return;
        }
      }
    }
  } else {
    var patname=new Object();
    var Merged=new Object();
    var Mergedur=new Object();
    var mrrecord=new Object();
    var mrtscanur=new Object();
    mrtscanur.value=ReturnCode.value.substring(0,8);
    validateCodeMerge(28,mrtscanur,patname,Merged,Mergedur,mrrecord);
    if (patname.value!="") {
      if (Merged.value=="1") {
        alert("Warning : This U/R Number is merged with " + Mergedur.value);
        ReturnCode.value="";
        return
      }
    }
  }
//
//  Validate Medical record
//
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                    "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                    "&docmtype=" + AddForm.docmtype.value.replace(/ /g,"+") +
                    "&volumeno=" + AddForm.volumeno.value.replace(/ /g,"+") +
                    "&homehosp=" + AddForm.homehosp.value.replace(/ /g,"+") +
                    "&location=" + AddForm.homelocn.value.replace(/ /g,"+")
    if(document.AddForm.fullflag=="1"){
    var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&volumeno=" + AddForm.volumeno.value.replace(/ /g,"+") }

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
//
//  Check for an already entered U/R
//
    for (var i=0; i < document.AddForm.length; i++) {
      if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
        if(document.AddForm.wahealth!=undefined ){
          enterur=ReturnValue[0].substring(0,20);
          checkey=document.AddForm.elements[i].value.substring(0,20);
        } else {
          enterur=ReturnValue[0].substring(0,8);
          checkey=document.AddForm.elements[i].value.substring(0,8);
        }
        if (enterur == checkey) {
          alert("Warning: U/R already entered!");
          document.AddForm.URNumber.value="";
          document.AddForm.URNumber.focus();
          break;
        }
      }
    }
//
    if(document.AddForm.wahealth!=undefined &&
       document.AddForm.superlev.value!="1") {
       vol_error=false;
       if(AddForm.homehosp.value.substr(0,3) != 
          ReturnValue[0].replace(/\+/g," ").substr(8,3)) {
          vol_error=true;
       }
       if(AddForm.homelocn.value.substr(0,4) !=
          ReturnValue[0].replace(/\+/g," ").substr(11,4)) {
          vol_error=true;
       }
       if(AddForm.docmtype.value.substr(0,3) !=
          ReturnValue[0].replace(/\+/g," ").substr(15,3)) {
          vol_error=true;
       }
       if(vol_error) {
         alert("Volume Not Found, UR - " +
                ReturnValue[0].replace(/\+/g," ").substring(0,8));
         return
       }
    }
//
    AddOutputArray(ReturnValue[0],ReturnValue[1],ReturnValue[2],
                   ReturnValue[3],ReturnValue[4],ReturnValue[5],
                   ReturnValue[6],ReturnValue[7],ReturnValue[9],
                   ReturnValue[10])
    OutputDivision()
    ReturnCode.value="";
    ReturnCode.focus();
    if (!isWhitespace(document.AddForm.volumeno.value)) {
      document.AddForm.volumeno.value="";
    }
  } else {
    ReturnCode.focus();
    ReturnCode.value="";
    if (!isWhitespace(document.AddForm.volumeno.value)) {
      document.AddForm.volumeno.value="";
    }
    ReturnCode.select();
  }
}
function AddOutputArray(MKey,Name,Locn,Date,Desc,Vols,Indi,Epos) {
//
  if(!ValidateRetention(MKey,AddForm.recvhosp,AddForm.recvlocn)){
     return;
   }
  if(!ValidateTransit(MKey,AddForm.recvhosp,AddForm.recvlocn,AddForm.recdirec,AddForm.recvreas)){
     return;
   }
//
  var dropList="";
  Vols=Vols.substr(1,500);
  VolList=Vols.split(",");
//
// Get Highest Volume Number
//
  var savol=0;
  for (i=VolList.length-2;i>=0;i--) {
    if ( VolList[i] > savol) {
      savol=VolList[i];    // Set Highest Volume No.
    }
  }

  if(document.AddForm.fullflag!=undefined){
    if(document.AddForm.fullflag.value=="1") {
      j=MKey.replace(/\+/g," ").substr(18,2);
      savol=j;
    }
  }

  for (i=VolList.length-2;i>=0;i--) {
    a=savol
    b=VolList[i] ;
    justifyRight(a);
    justifyRight(b);
    if (a==b) {
      test="<option value='" + VolList[i] +
           "' selected>" + VolList[i] + "</option>"
    }
    else {
      test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
    }
    dropList=dropList + test
  }
  urnum=MKey.replace(/\+/g," ").substr(0,8);
  OutputArray[OutputArray.length] = "<tr>" +
  "<td><img src=../images/DeleteIcon.gif class=Icon " +
  " onclick=RemoveRecord('" +  OutputArray.length + "');>" +
  MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
  "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
  OutputArray.length + "','" + urnum + "');\">" +
      dropList + "</select></td>" +
      "<td>" + Name + "</td>" +
      "<td>" + Locn + "</td>" +
      "<td>" + Date + "</td>" +
      "<td>" + Desc + "&nbsp;</td>" +
      "<input type=hidden name=mrkeyarr value='" +
      MKey + "'></tr>"
   if(AddForm.recdirec.value=="1") {
     OutputArray[OutputArray.length -1] += "<input type=hidden " +
                                   "name=rdirc" + OutputArray.length + ">";
   }
  ItemCnt++;
}
function OutputDivision() {
    OutputString="<table width=100% align=center cellspacing=0 border=0>" +
              "<tr><td class=HeadingCell>Delete U/R</td>" +
              "    <td class=HeadingCell align=center>Volume</td>" +
              "    <td class=HeadingCell>Patient Name</td>" +
              "    <td class=HeadingCell>Current Location</td>" +
              "    <td class=HeadingCell>Last Movement</td>" +
              "    <td class=HeadingCell>Description</td>" +
              "    <td class=HeadingCell>           </td></tr>"
    for (i=OutputArray.length-1;i>=0;i--) {
      OutputString+=OutputArray[i]
    }
    OutputString+="</table>"
    Results.innerHTML=OutputString
}
function RemoveRecord(RecordNo){
  OldArray=OutputArray
  OutputArray = new Array();  // Create Array to Store Rows of Table
  j=0;
  for (i=0;i<OldArray.length;i++) {
    if (i!=RecordNo) {
      repStr=new RegExp("RemoveRecord.'" + i + "'.;>");
      repStr1=new RegExp("SetVolNum.this.value.'" + i + "'.");
      newStr="RemoveRecord('" + j + "');>";
      newStr1="SetVolNum(this.value,'" + j + "',";
      OldArray[i]=OldArray[i].replace(repStr,newStr);
      OutputArray[j]=OldArray[i].replace(repStr1,newStr1);
      j++
    }
  }
  OutputDivision()
  AnyReceiveDirect();
}
function SetVolNum(volume,position,ur) {
//
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ur.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.docmtype.value.replace(/ /g,"+") +
                  "&volumeno=" + volume.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.homehosp.value.replace(/ /g,"+") +
                  "&location=" + AddForm.homelocn.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    var dropList="";
//    Vols=ReturnValue[5].substr(1,100);
    Vols=ReturnValue[5];
    VolList=Vols.split(",");
    for (i=VolList.length-2;i>=0;i--) {
      a=volume
      b=VolList[i] ;
      justifyRight(a);
      justifyRight(b);
      if (a==b) {
        test="<option value='" + VolList[i] +
             "' selected>" + VolList[i] + "</option>"
      }
      else {
        test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
      }
      dropList=dropList + test
    }
    urnum=ReturnValue[0].replace(/\+/g," ").substr(0,8);
    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
    position + "','" + urnum + "');\">" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
//
   if(!ValidateTransit(ReturnValue[0],AddForm.recvhosp,AddForm.recvlocn,AddForm.recdirec,AddForm.recvreas)) {
     OutputArray[position] = "";
   }
   if(AddForm.recdirec.value=="1") {
     OutputArray[position] += "<input type=hidden " +
                              "name=rdirc" + position + ">";
   }
//
    OutputDivision()
  }
}
function CheckMaxLength(barcode) {
  document.AddForm.RecordKey.maxLength=22;
}
function SetMedEvent() {
  if (event.keyCode == 13) {  // Carriage Return
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="1";
    }
    CheckIBAPrefix(document.AddForm.RecordKey);
    CheckKeyFormat(document.AddForm.RecordKey);    // change Key17 to Key20
    OutputTable(document.AddForm.RecordKey);
    CheckMaxLength(document.AddForm.RecordKey);
  } else if (event.keyCode == 9) {  // Tab
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="1";
    }
    CheckIBAPrefix(document.AddForm.RecordKey);
    CheckKeyFormat(document.AddForm.RecordKey);    // change Key17 to Key20
    OutputTable(document.AddForm.RecordKey);
    setTimeout('document.AddForm.RecordKey.focus()',100);
    CheckMaxLength(document.AddForm.RecordKey);
  }
}
function CheckIBAPrefix(barcode) {
  if(document.AddForm.mrcnibap.value!="1") { // Using IBA prefix
    return;
  }
  if(barcode.value.substr(0,2)=="LF") {
    return; }
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
function justifyRightKey(theField) {
  if (theField.maxLength==undefined) { return }
//  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  Count=theField.maxLength - theField.value.length
  Blanks=""
  for (i=0; i < Count;i++) { Blanks+=" ";}
  theField.value=Blanks+theField.value
}
function PostReceiveRecords() {
  document.AddForm.ReqButton.disabled=true;
  document.AddForm.updatety.value="A";
  setTimeout('document.AddForm.ReqButton.disabled=false',5000);
  if (validateMandatory(AddForm)) {
    document.AddForm.target="PopUpFrame"
    document.AddForm.submit(); }
}
//------------------------------------------------------------
// Validate MR is in transit to this location
//------------------------------------------------------------
function ValidateTransit(ReturnMR,ReturnHHos,ReturnHLoc,ReturnD,ReturnDReason) {
  ReturnD.value="0";
  var serverURL   = "../cgi-bin/patweb85.pbl?reportno=9&updatety=V" +
                    "&mrkeyarr=" + ReturnMR.replace(/ /g,"+") +
                    "&recvhosp=" + ReturnHHos.value.replace(/ /g,"+") +
                    "&recvlocn=" + ReturnHLoc.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(ReturnValue[5]=="1") {                    // Receiving direct
      ReturnD.value="1";
      ReturnDReason.className="Mandatory";
    }
    return true;
  } else {
   return false;  
  }
}
function ValidateRetention(ReturnMR,ReturnHHos,ReturnHLoc) {
  var serverURL   = "../cgi-bin/patweb85.pbl?reportno=9&updatety=R" +
                    "&mrkeyarr=" + ReturnMR.replace(/ /g,"+") +
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
function ChangeReceive() {
  if(document.AddForm.template.value=="001") {
    if(document.AddForm.superlev.value=="1") {
      location.href="websec01.pbl?reportno=5&template=010&recvflag=2&mrhosflg=1"
    } else {
      location.href="websec01.pbl?reportno=5&template=010&recvflag=1&mrhosflg=1"
    }
  } else {
    if (document.AddForm.superlev.value=="1") {
      location.href="websec01.pbl?reportno=5&template=010&recvflag=2&mrhosflg=0"
    } else {
      location.href="websec01.pbl?reportno=5&template=010&recvflag=1&mrhosflg=0"
    }
  }
}
function SearchPatient() {                                                                                   
  if (validateMandatory(AddForm)) {                                                                          
    PatientSearchFrame(AddForm.d1,AddForm.URNumber,AddForm.d2,validateRecordID);                                 
  }                                                                                                          
} 
function AnyReceiveDirect() {
  var AnyReceiveDirectMR=AddForm.getElementsByTagName('INPUT');
  for(var i = 0; i < AnyReceiveDirectMR.length; i++) {
   if(AnyReceiveDirectMR[i].name.substr(0,5)=="rdirc") {
     document.AddForm.recvreas.className="Mandatory";
     return;
   }
  }
  document.AddForm.recvreas.className="";
}
function GetHomeLoc(ReturnHosp,ReturnHomeLoc,ReturnDocType)  {
  if (isWhitespace(ReturnHosp.value)) {
    return;
  }
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=69" +
        "&valdcode=" + ReturnHosp.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnHomeLoc.value=ReturnValue[2];
    ReturnDocType.value=ReturnValue[3];
  }
}

