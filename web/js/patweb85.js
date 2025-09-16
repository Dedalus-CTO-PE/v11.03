//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb85.js
//========================================================================
//   Report 1
//========================================================================
//
function SetOrigHosp(p) {
  if((p.ibcnmhos.value=="1") && (p.superlev.value=="1")) {
    OrigHospTitle.innerHTML=ShowOrigHospTitle.innerHTML;
    OrigHosp.innerHTML=ShowOrigHosp.innerHTML;
  } else {
    OrigHospTitle.innerHTML="";
    OrigHosp.innerHTML=ShowNoOrigHosp.innerHTML;;
  }
}
//========================================================================
//   Report 2
//========================================================================
function SetFiltHhos(p) {
  if (!isWhitespace(p.filthhos.value)) {
       p.dflthhos.value = p.filthhos.value; }
}
function SetFiltHosp(p) {
  if (!isWhitespace(p.filthosp.value)) {
       p.dflthosp.value = p.filthosp.value; }
}
function ResetLocn(p) {
  p.dfltlocn.value = "All";
  p.filtlocn.value = "All";
}
function SetFiltLocn(p) {
    if (!isWhitespace(p.filthosp.value)) {
         p.dflthosp.value = p.filthosp.value; }
    if (!isWhitespace(p.filtlocn.value)) {
         p.dfltlocn.value = p.filtlocn.value; }
   
  p.filtlocn.options.length=1;
  p.filtlocn.options[p.filtlocn.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiLocations(p.filtlocn,p.dfltlocn.value,p.dflthosp.value)
  } else {
     MrtLocations(p.filtlocn,p.dfltlocn.value)
  }      
  p.filtlocn.remove(1);     // remove extra blank option
}

function SetFiltHLoc(p) {
    if (!isWhitespace(p.filthhos.value)) {
         p.dflthhos.value = p.filthhos.value; }
    if (!isWhitespace(p.filthloc.value)) {
         p.dflthloc.value = p.filthloc.value; }
   
  p.filthloc.options.length=1;
  p.filtlocn.options[p.filthloc.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiHomeLocns(p.filthloc,p.dflthloc.value,p.dflthhos.value)
  } else {
     MrtHomeLocns(p.filthloc,p.dflthloc.value)
  }      
  p.filthloc.remove(1);     // remove extra blank option
}
function ResetFiltHLoc(p) {
  p.filthloc.value = p.dflthloc.value;
}
//
//========================================================================
//   Report 4
//========================================================================
var ItemCnt=0;
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
function LoadExtract(List) {
  UrList=List.split(",");
  p=document.AddForm
  for (urcnt=ItemCnt;urcnt<=UrList.length-1;urcnt++) {
    var setur=new Object();
    setur.value=UrList[urcnt];
    if (setur.value!="") {
      LenUR=setur.value.length
      if (LenUR < 9) {
        Count= 8 - LenUR ;
        Blanks="";
        for (i=0; i < Count;i++) { Blanks+=" ";}
        setur.value=Blanks + setur.value;
      }
      LoadValidate(13,setur,p.d1)
    }
    if (p.d1.value!="") {
      LoadOutputTable(setur);
    }
    if (ItemCnt>=50) {
      alert("Page Limit 50 UR's Reached!");
      break; 
    }
  }
}
function LoadValidate(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < LoadValidate.arguments.length; i++) {
    if (typeof(LoadValidate.arguments[i]) == 'function') {
      ReturnFunction=LoadValidate.arguments[i] }
    else {
      LoadValidate.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < LoadValidate.arguments.length; i++) {
       if (typeof(LoadValidate.arguments[i]) != 'function') {
         j++
         LoadValidate.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    return false;
  }
}
function LoadOutputTable(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;;
  var MrKeyRecord="";
  var PatientName="";
  var CurrentHosp="";
  var CurrentLoct="";
  var LastMovDate="";
  var Description="";
  var Flag=0;
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                    "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                    "&docmtype=" + AddForm.medrr001.value.replace(/ /g,"+") +
                    "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") +
                    "&homehosp=" + AddForm.medrr012.value.replace(/ /g,"+") +
                    "&location=" + AddForm.homelocn.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
//
//  Check for an already entered U/R
//
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
      enterur=ReturnValue[0].substring(0,8);
      checkey=document.AddForm.elements[i].value.substring(0,8);
      if (enterur == checkey) {
        alert("Warning: U/R already entered!");
        document.AddForm.URNumber.value="";
        document.AddForm.URNumber.focus();
        break; } } }
    AddOutputArray(ReturnValue[0],ReturnValue[1],ReturnValue[2],
                   ReturnValue[3],ReturnValue[4],ReturnValue[5],
                   ReturnValue[6],ReturnValue[7],ReturnValue[9],
                   ReturnValue[10])
    OutputDivision()
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
  }
  else {
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
  }
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
function CheckMaxLength(barcode) {
  document.AddForm.RecordKey.maxLength=22;
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
                    "&docmtype=" + AddForm.medrr001.value.replace(/ /g,"+") +
                    "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") +
                    "&homehosp=" + AddForm.medrr012.value.replace(/ /g,"+") +
                    "&location=" + AddForm.homelocn.value.replace(/ /g,"+") 
    if(document.AddForm.fullflag=="1"){
    var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") }

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
//
//  Check for an already entered U/R
//
    for (var i=0; i < document.AddForm.length; i++) {
      if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
        enterur=ReturnValue[0].substring(0,8);
        checkey=document.AddForm.elements[i].value.substring(0,8);
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
       if(AddForm.medrr012.value.substr(0,3) !=
          ReturnValue[0].replace(/\+/g," ").substr(8,3)) {
          vol_error=true;
       }
       if(AddForm.medrr013.value.substr(0,4) !=
          ReturnValue[0].replace(/\+/g," ").substr(11,4)) {
          vol_error=true;
       }
       if(AddForm.medrr001.value.substr(0,3) !=
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
                   ReturnValue[10]);
    OutputDivision();
    ReturnCode.value="";
    ReturnCode.focus();
    if (!isWhitespace(document.AddForm.mrtme011.value)) {
      document.AddForm.mrtme011.value=""; 
    }
  } else {
    ReturnCode.focus();
    ReturnCode.value="";
    if (!isWhitespace(document.AddForm.mrtme011.value)) {
      document.AddForm.mrtme011.value=""; 
    }
    ReturnCode.select();  
  }
}

function AddOutputArray(MKey,Name,Locn,Date,Desc,Vols,Indi,Epos) {
  var dropList="";
  //Vols=Vols.substr(1,100);
  VolList=Vols.split(",");

  // Get Highest Volume Number
  var savol=0;
  for (i=VolList.length-2;i>=0;i--) {
    if (parseInt(VolList[i]) > savol) {
      savol=VolList[i];    // Set Highest Volume No.
    }
  }

  if(document.AddForm.fullflag!=undefined){
    j=MKey.replace(/\+/g," ").substr(18,2);
    savol=j;
  }

  for (i=VolList.length-2;i>=0;i--) {
    a=savol
    b=VolList[i] ;
    justifyRight(a);
    justifyRight(b);
    if (trim(a) == trim(b)) {
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
  "<option value='99'>All</option>" +
      dropList + "</select></td>" +
      "<td>" + Epos + "</td>" +
      "<td>" + Name + "</td>" +
      "<td>" + Locn + "</td>" +
      "<td>" + Date + "</td>" +
      "<td>" + Desc + "&nbsp;</td>" +
      "<input type=hidden name=mrkeyarr value='" +
      MKey + "'></tr>"
  ItemCnt++; 
}

function OutputDivision() {
    OutputString="<table width=100% align=center cellspacing=0 border=0>" +
              "<tr><td class=HeadingCell>Delete U/R</td>" +
              "    <td class=HeadingCell align=center>Volume</td>" +
              "    <td class=HeadingCell>Episode To</td>" +
              "    <td class=HeadingCell>Patient Name</td>" +
              "    <td class=HeadingCell>Current Location</td>" +
              "    <td class=HeadingCell>Last Movement</td>" +
              "    <td class=HeadingCell>Description</td>" +
              "    <td class=HeadingCell>           </td></tr>"
    for (i=OutputArray.length-1;i>=0;i--) { 
      OutputString+=OutputArray[i];   
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
      OldArray[i]=OldArray[i].replace(repStr,newStr)
      OutputArray[j]=OldArray[i].replace(repStr1,newStr1); 
      j++
    }
  }
  OutputDivision();
}
function AddMovRecord() {
  document.AddForm.ReqButton.disabled=true;
  alert("Processing Request press OK to continue. Note this request may take" +
        " some time");
  document.AddForm.updatety.value="A";
  setTimeout('document.AddForm.ReqButton.disabled=false',5000);
  if (validateMandatory(AddForm)) {
    document.AddForm.target="PopUpFrame"
    document.AddForm.submit(); }
}
function SetVolNum(volume,position,ur) {

  if (volume=="99") {
    
    OldArray=OutputArray
    OutputArray = new Array();  // Create Array to Store Rows of Table
    j=0;
    
        
    for (i=0;i<OldArray.length;i++) {
      if (i==position) {
        repStr=new RegExp(" selected>")
        newStr=">"
        OutputArray[j]=OldArray[i].replace(repStr,newStr)
        repStr=new RegExp("value='" + volume + "'>")
        newStr="value='" + volume + "' selected>"
        OutputArray[j]=OutputArray[j].replace(repStr,newStr)
        j++
      }
      if (i!=position) {
        OutputArray[j]=OldArray[i]
        j++
      }
    }
    return; 
  }
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ur.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.medrr001.value.replace(/ /g,"+") +
                  "&volumeno=" + volume.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.medrr012.value.replace(/ /g,"+") +
                  "&location=" + AddForm.homelocn.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    var dropList="";
    //Vols=ReturnValue[5].substr(1,100);
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
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[7].substr(1,8) + "</td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
 
    OutputDivision(); 
  }
}
function ExtRequest() {
  AddForm.redirect.value="mrtweb03.pbl?reportno=5&template=1&mrtre001=" +
                          AddForm.mrtre001.value;
  AddForm.redirect.value.replace(/ /g,"+");
  AddMovRecord()
}
function ViewExtract() {
  location.href="mrtweb03.pbl?reportno=5&template=1&mrtre001=" +
                          AddForm.mrtre001.value;
}
//
// Following is done this way as it gives urlist a chance to fully populate
// and you can not call a function within setTimeout that has parameters!
//
function WaitExtLoad() {
  LoadExtract(AddForm.urlist.value);
}
function SetUrEvent() {
  if (event.keyCode == 13) {  // Carriage Return
    document.AddForm.URNumber.value=
    document.AddForm.URNumber.value.toUpperCase();
    FormatURScan(document.AddForm.URNumber);
    validateRecordID();
  } else if (event.keyCode == 9) {  // Tab
    document.AddForm.URNumber.value=
    document.AddForm.URNumber.value.toUpperCase();
    FormatURScan(document.AddForm.URNumber);
    validateRecordID();
    setTimeout('document.AddForm.URNumber.focus()',100);
  }
}
function SetMedEvent() {
  if (event.keyCode == 13) {  // Carriage Return
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="1";}
    CheckIBAPrefix(document.AddForm.RecordKey);
    CheckKeyFormat(document.AddForm.RecordKey);    // change Key17 to Key20
    OutputTable(document.AddForm.RecordKey);
    CheckMaxLength(document.AddForm.RecordKey);
  } else if (event.keyCode == 9) {  // Tab
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="1";}
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

function SetHospital(p) {
  if(p.ibcnmhos.value=="1") {
    HospitalTitle.innerHTML=ShowHospitalTitle.innerHTML;
    Hospital.innerHTML=ShowHospital.innerHTML;
  } else {
    HospitalTitle.innerHTML="";
    Hospital.innerHTML=ShowNoHospital.innerHTML;
  }
}
function selectHosp(p) {
  if(p.ibcnmhos.value=="1") {
    for (var i =0 ; i < p.medrr010.length; i++) {
      if (p.medrr010.options[i].value == p.desthosp.value)
          p.medrr010.selectedIndex = i ;
    }
  }
}
function SetDestination(p) {
  if (!isWhitespace(p.medrr010.value)) {
       p.desthosp.value = p.medrr010.value; }
  if (!isWhitespace(p.medrr006.value)) {
       p.destlocn.value = p.medrr006.value; }

  p.medrr006.options.length=0;
  p.medrr006.options[p.medrr006.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiLocations(p.medrr006,p.destlocn.value,p.desthosp.value)
  } else {
     MrtLocations(p.medrr006,p.destlocn.value)
     if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(p.medrr006);
      }
  }
}


function SetHomeHosp(p) {
  if(p.ibcnmhos.value=="1") {
    HomeHospTitle.innerHTML=ShowHomeHospTitle.innerHTML;
    HomeHosp.innerHTML=ShowHomeHosp.innerHTML;
  } else {
    HomeHospTitle.innerHTML="";
    HomeHosp.innerHTML=ShowNoHomeHosp.innerHTML;;
  }
}
/******************************************************************************
 * Sort by Description ignore "All"
 *****************************************************************************/
function sortMrtLocation(selElem) {
    var tmpAry = new Array();
    var allOptionFound = false;
    var startNumber = 0;

    for (var i=0;i<selElem.options.length;i++) {

        if(selElem.options[i].text == "All") {
              allOptionFound = true;
              continue;
        }

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

    if(allOptionFound == true) {
      startNumber = 1;
      selElem.options[0] = new Option("All"," ");
    }

    for (var i=startNumber;i<tmpAry.length;i++) {
        if(typeof tmpAry[i] != 'undefined' ) {
          var op = new Option(tmpAry[i][1], tmpAry[i][2]);
          selElem.options[i] = op;
        }
    }

    return;
}
/******************************************************************************
 * Sort Mrt Location/ Destination
 *****************************************************************************/
function sortLocation(formElement) {
 if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(formElement);
 }
}

function selectHHosp(p) {
  if(p.ibcnmhos.value=="1") {
    for (var i =0 ; i < p.medrr012.length; i++) {
      if (p.medrr012.options[i].value == p.homehosp.value)
          p.medrr012.selectedIndex = i ;
    }
  }
}
function SetHomeLocn(p) {
  if (!isWhitespace(p.medrr012.value)) {
       p.homehosp.value = p.medrr012.value; }
  if (!isWhitespace(p.medrr013.value)) {
       p.homelocn.value = p.medrr013.value; }

  p.medrr013.options.length=0;
  p.medrr013.options[p.medrr013.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiHomeLocns(p.medrr013,p.homelocn.value,p.homehosp.value)
  } else {
     MrtHomeLocns(p.medrr013,p.homelocn.value)
  }
}
function ResetHomeLocn(p) {
  p.homelocn.value = p.medrr013.value;
}
//========================================================================
//  Report 9 
//========================================================================
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
function SearchPatient() {
  if (validateMandatory(AddForm)) {
    PatientSearchFrame(AddForm.d1,AddForm.URNumber,AddForm.d2,SendFormWait);
  }
}
function SendFormWait() {
//  setInterval('OutputTable(AddForm.URNumber)',600);
  OutputTable(AddForm.URNumber);
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

