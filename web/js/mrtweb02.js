//jsVersion  : V11.03.07
//========================================================================
// Program   : mrtweb02.js
//
// Written   : 15.12.2000 Pat Dirito
//
// Function  : Standard Functions Used in mrtweb02  
//========================================================================
//
//========================================================================
//   Report 1  template:001 
//========================================================================
// Note if you need to turn on the following parameter please set it in the
// template! As done in ../private/mrtweb0201001.html
//
var OperationDateTime=false; // obsolete parameter to turn Operation Date + Time display
//
var additreq;
var PageLoadFlag=true;
var ItemNo=100;  // Need this to be 100 as the cgi var has to be 8 chars
var ProcNo=100;  // Need this to be 100 as the cgi var has to be 8 chars
var flag="0";
var savdate="";
var savtime="";
var savendt="";
var namecod;       
var frstdate;       
var pcount=0;      // Disease Code prefix counter
var discount=0;    // Disease Code counter
var oprcount=0;    // Procedure Code counter
var dateflag=0;    // Operation Date Counter 
var Codes;         // coding has been input flag
var codcount=0;    // start of coding section counter
var Editflag;      // Edit is taking place flag
var setpos=0;      // Current position of code insertion
var dateman="";
var timeman="";

function TemplateSelect(extrckey) {
  codtempl=extrckey.value.replace(/ /g,"+");
  urnumber=document.UpdateForm.urnumber.value.replace(/ /g,"+");
  admissno=document.UpdateForm.admissno.value.replace(/ /g,"+");
  episodno=document.UpdateForm.epscd001.value.replace(/ /g,"+");
  LinkUrl="mrtweb01.pbl?reportno=12&template=4&mrttd001="+codtempl +
          "&urnumber="+urnumber + "&admissno="+admissno + 
          "&epscd001="+episodno

  if(VariableNameExists("PathUncodedDischargeList")) {
     SetCookie("UncodedDischargeList",PathUncodedDischargeList);
  }
  DFrameLink(LinkUrl,20,25,850,380)
}

function DisNeonate() {
  var ind = document.forms['UpdateForm'].neonindc.value;    
  var tval = document.getElementById('NeonateField');
  if (ind == "1")                                                       
    tval.innerHTML = document.getElementById('showneonatefield').innerHTML; 
  else                                                                        
    tval.innerHTML="";                                             
}

function DisWeight() {
  var ind = document.forms['UpdateForm'].wghtindc.value;
  var tlab = document.getElementById('WeightLabel');
  var tval = document.getElementById('WeightField');
  if (ind == "1") {
    tlab.innerHTML = document.getElementById('showweightlabel').innerHTML;
    tval.innerHTML = document.getElementById('showweightfield').innerHTML;
  } else {
    tlab.innerHTML = "";
    tval.innerHTML = "";
  }
}

function CheckPrefix(indicator,nxtfield) {
  indicator.value = indicator.value.toUpperCase()
  var ind = indicator.value;
  var pripre = document.UpdateForm.pripre.value;   
  var seqpre = document.UpdateForm.seqpre.value;   
  var compre = document.UpdateForm.compre.value; 
  var asspre = document.UpdateForm.asspre.value; 
  var lofpre = document.UpdateForm.lofpre.value; 
  var dispre = document.UpdateForm.dispre.value; 
  var oprpre = document.UpdateForm.oprpre.value; 
  var morpre = document.UpdateForm.morpre.value; 

  if (ind != ""){
    if (document.UpdateForm.diffhosp.value == "1") {
      if ((ind == pripre)||(ind == seqpre)||(ind == compre)||
          (ind == asspre)||(ind == lofpre)||(ind == oprpre)||
          (ind == morpre)||(ind == "X")||(ind == "I")||
          (ind == "N")) {
        nxtfield.focus();
      } else {
        alert("Incorrect Prefix Indicator, must be either " + pripre + "," +
              seqpre + "," + compre + "," + asspre + "," + lofpre + "," + 
              oprpre + "," + morpre + ",N,I or X");
        indicator.value="";    
        indicator.focus(); }
    } else {
      if ((ind == pripre)||(ind == seqpre)||(ind == compre)||
          (ind == asspre)||(ind == lofpre)||(ind == oprpre)||
          (ind == morpre)||(ind == "X")) {
        nxtfield.focus();
      } else {
        alert("Incorrect Prefix Indicator, must be either " + pripre + "," +
              seqpre + "," + compre + "," + asspre + "," + lofpre + "," + 
              oprpre + "," + morpre + " or X");
        indicator.value="";    
        indicator.focus(); }
    }
  }
}

function Icd10DisNext(DischDte) {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
      if (isWhitespace(document.UpdateForm.elements[i].value)) {
        ThisCode=document.UpdateForm.elements[i];
        break; }}}

  if (isWhitespace(document.UpdateForm.elements[i-1].value)) {
    alert('Prefix is Required'); 
    document.UpdateForm.elements[i-1].focus() }
  else {
    Icd10DisSrchMedRec(ThisCode,DischDte); } // Custom Medical Record search
}
function Icd10ProNext(DischDte) {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
      if (isWhitespace(document.UpdateForm.elements[i].value)) {
        ThisCode=document.UpdateForm.elements[i];
        break; }}}
  ThisCode=document.UpdateForm.elements[i];

    if (document.UpdateForm.allwnpre==undefined) {
      document.UpdateForm.elements[i-1].value = document.UpdateForm.oprpre.value;
    } else {
      if (document.UpdateForm.elements[i-1].value!="N" &&
          document.UpdateForm.elements[i-1].value!="I" &&
          document.UpdateForm.elements[i-1].value!="X") {
        document.UpdateForm.elements[i-1].value = document.UpdateForm.oprpre.value;
      }
    }

//  document.UpdateForm.elements[i-1].value = "O"; // Prefix set to O-Operation Code
  Icd10ProSrchMedRec(ThisCode,DischDte);  // Custom Medical Record search 
}

//
// Validate Entered Procedure/Diagnosis Code
//
function CheckKey(ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock,ReturnDTMan,ReturnDcod,ReturnDnam) {

  var codpos=0;

  if (isWhitespace(ReturnCode.value)) {
    ReturnName.value="";
  }

  if (ReturnCode.defaultValue==ReturnCode.value) {return;}

  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(ReturnCode.name)) {
      codpos=i;
      break;
    }
  }

  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mride/)) { 
      if (isWhitespace(document.UpdateForm.elements[i].value)) {
        setpos=i; // If editing already entered codes need to set position.
        break;
      }
    }
  }

  pripre = document.UpdateForm.pripre.value;   
  compre = document.UpdateForm.compre.value;   
  morpre = document.UpdateForm.morpre.value;   
  var hospbith=document.UpdateForm.hspbirth.value.substr(14,1);
  stateflg = document.UpdateForm.stateflg.value;   

  if (((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnName.value)))) {
    return;
  }
  retcode=ReturnCode.value;
  retname=ReturnName.value;

  ReturnCode.value=ReturnCode.value.toUpperCase()
  ReturnCode.value=ReturnCode.value.replace(/ /g,"") 
  setfo=ReturnCode.value.search('[A-Z]')  
  if (setfo == "0") {
    Codes=true;
    if (ReturnPrefix.value == "") {
      alert("You must enter in a valid prefix.") 
      ReturnPrefix.focus(); 
      return; 
    }
    if (ReturnPrefix.value == document.UpdateForm.oprpre.value ) 
    {    // Disease Codes cannot have O Prefix
      alert("Must use a Disease prefix!") 
      ReturnPrefix.focus(); 
      return; 
    }
    pcount++                    // Increment Disease Prefix counter
    if (pcount=="1") {
      namecod=ReturnPrefix;     // Set prefix object
      if (ReturnPrefix.value != pripre) {
        if (stateflg=="3") {
          if (hospbith!="Y"||ReturnPrefix.value!=compre) {
            alert("Error 1st Disease code does not have a '" + pripre +
                  "' prefix! Please change.");
            document.UpdateForm[namecod.name].focus();
            return;
          }
        } else {
          alert("Warning 1st Disease code does not have a '" + pripre + 
                "' prefix!") } }
    }
    Codelen=ReturnCode.value.length;
    findot=ReturnCode.value.search('[.]')  
    findslash=ReturnCode.value.search('[/]')  
    if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
      if (ReturnPrefix.value == morpre) {
      // Check whether a "/" has been entered for this Procedure code 
      // If code not in format M0000/0
        if (findslash != "5") { 
          a=ReturnCode.value.substr(0,5);    
          b=ReturnCode.value.substr(5,5);
          ReturnCode.value= a + "/" + b;     // Add slash to string
        }
      } else {
        alert("Error Disease code must have a '" + morpre +
              "' prefix! Please change.");
        ReturnPrefix.focus(); 
        return;
      }
    }
    else {
      // Check whether a "." has been entered if not format with a "." 
      // If code not in format A00.0 or Code is > 3 characters 
      if ((findot != "3") && (Codelen != "3")) { 
        a=ReturnCode.value.substr(0,3);    // Then must be in format A000 
        b=ReturnCode.value.substr(3,3);
        ReturnCode.value= a + "." + b;     // Add full stop to string
      }
      if (ReturnPrefix.value == morpre) {
        alert("This code cannot have a  '" + morpre +
              "' prefix! Please change.");
        ReturnPrefix.focus(); 
        return;
      }
    }
    ValidateType="1";
    ReturnFunction1=AddAccs; }
  else {
    // Check whether a "-" has been entered for this Procedure code 
    findash=ReturnCode.value.search('[-]')  
    // If code not in format 00000-00
    if (findash != "5") { 
      a=ReturnCode.value.substr(0,5);    
      b=ReturnCode.value.substr(5,5);
      ReturnCode.value= a + "-" + b;     // Add dash to string
    }
    ValidateType="2";
    ReturnFunction1=AddOps;

    if (document.UpdateForm.allwnpre==undefined) {
      ReturnPrefix.value = document.UpdateForm.oprpre.value; 
    } else {  
      if (ReturnPrefix.value!="N" &&
          ReturnPrefix.value!="I" &&
          ReturnPrefix.value!="X") {
        ReturnPrefix.value = document.UpdateForm.oprpre.value;
      }
    }

  }   
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;

  sexasscd=0;
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) {
      if (document.UpdateForm.elements[i].value.match(/E25.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/E25.8/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/E29.1/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/E34.5/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/F64.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.1/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.2/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.3/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q56.4/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q99.0/)) {
        sexasscd=1;
        break}
      if (document.UpdateForm.elements[i].value.match(/Q99.1/)) {
        sexasscd=1;
        break}
    }
  }

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdtype=" + ValidateType + 
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                  "&dsprefix=" + ReturnPrefix.value + 
                  "&discodno=" + ReturnCode.name.substr(5,3) +
                  "&sexasscd=" + sexasscd;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnCode.defaultValue=ReturnCode.value;
      ReturnFunction=AddItem;
      ReturnValue=returnValue.return_value.split("|")
      ReturnName.value=trim(ReturnValue[0]);
      var codename=document.getElementById(ReturnName.name.replace(/mride/,"codename"));
      codename.innerText=trim(ReturnValue[0]);

      if (ValidateType=="1") { 
        additreq=ReturnValue[1]; 
        discount++;  // Increment the Disease Code Counter
        document.UpdateForm.countcod.value=discount + oprcount;
        if (!isWhitespace(ReturnValue[2])) {  // Diagnosis Warning Message?
          alert(ReturnValue[2]) }             // Diagnosis Warning Message Found!
      } else {    // Procedure Code 
        oprcount++;  // Increment the Operation Code Counter
        document.UpdateForm.countcod.value=discount + oprcount;
        if (!isWhitespace(ReturnValue[9])) {  // Procedure Code Warning?
          alert(ReturnValue[9]) }             // Procedure Warning Message Found!
        if (flag==1) {              //  if flag set then used saved variables
          ReturnDate.value=savdate;
          ReturnTime.value=savtime;
          ReturnEnd.value=savendt }
        else {
          ReturnDate.value=ReturnValue[1]
          ReturnTime.value=ReturnValue[2]
          ReturnEnd.value=ReturnValue[3] 
          if (isWhitespace(ReturnDate.value)) {  //Check if date is Empty cannot
            ReturnDate.value="";                 //be space filled  
            ReturnTime.value="";
            ReturnEnd.value=""; }
        }
        ReturnBlock.value=ReturnValue[5] 
        ReturnDTMan.value=ReturnValue[6] 
        ReturnDcod.value=ReturnValue[7] 
        ReturnDnam.value=ReturnValue[8] 
      }

      if (typeof(ReturnFunction) == 'function') {
        if (codpos < codcount) {
          FindBlank() // Re-entering an already entered code, so set focus.
          if (ValidateType=="2") { 
            // Set date & start/end times also
            SetOpDateTimes(ReturnCode.name.substr(5,3));
  //          document.UpdateForm.elements[codpos+3].value=ReturnBlock.value;
            CheckMandClinician(ReturnCode.name.substr(5,3));
          }
        } else {
          if (((!isWhitespace(retcode))&&(!isWhitespace(retname)))) {
            return; } 
            if(document.getElementById("mricd400")){ 
              alert("Can't enter more than a combined total of 300" +
                    " diagnosis/procedure codes on the add screen. " +
                    "Please add remaining codes on the update screen.");
            } else {
              ReturnFunction1();
              ReturnFunction();
            }
        }
      }
    }
    else {
      ReturnCode.select(); 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnCode.defaultValue=ReturnCode.value;
          ReturnFunction=AddItem;
          ReturnValue=returnValue.return_value.split("|")
          ReturnName.value=trim(ReturnValue[0]);
          var codename=document.getElementById(ReturnName.name.replace(/mride/,"codename"));
          codename.innerText=trim(ReturnValue[0]);

          if (ValidateType=="1") { 
            additreq=ReturnValue[1]; 
            discount++;  // Increment the Disease Code Counter
            document.UpdateForm.countcod.value=discount + oprcount;
            if (!isWhitespace(ReturnValue[2])) {  // Diagnosis Warning Message?
              alert(ReturnValue[2]) }             // Diagnosis Warning Message Found!
          } else {    // Procedure Code 
            oprcount++;  // Increment the Operation Code Counter
            document.UpdateForm.countcod.value=discount + oprcount;
            if (!isWhitespace(ReturnValue[9])) {  // Procedure Code Warning?
              alert(ReturnValue[9]) }             // Procedure Warning Message Found!
            if (flag==1) {              //  if flag set then used saved variables
              ReturnDate.value=savdate;
              ReturnTime.value=savtime;
              ReturnEnd.value=savendt }
            else {
              ReturnDate.value=ReturnValue[1]
              ReturnTime.value=ReturnValue[2]
              ReturnEnd.value=ReturnValue[3] 
              if (isWhitespace(ReturnDate.value)) {  //Check if date is Empty cannot
                ReturnDate.value="";                 //be space filled  
                ReturnTime.value="";
                ReturnEnd.value=""; }
            }
            ReturnBlock.value=ReturnValue[5] 
            ReturnDTMan.value=ReturnValue[6] 
            ReturnDcod.value=ReturnValue[7] 
            ReturnDnam.value=ReturnValue[8] 
          }

          if (typeof(ReturnFunction) == 'function') {
            if (codpos < codcount) {
              FindBlank() // Re-entering an already entered code, so set focus.
              if (ValidateType=="2") { 
                // Set date & start/end times also
                SetOpDateTimes(ReturnCode.name.substr(5,3));
      //          document.UpdateForm.elements[codpos+3].value=ReturnBlock.value;
                CheckMandClinician(ReturnCode.name.substr(5,3));
              }
            } else {
              if (((!isWhitespace(retcode))&&(!isWhitespace(retname)))) {
                return; } 
                if(document.getElementById("mricd400")){ 
                  alert("Can't enter more than a combined total of 300" +
                        " diagnosis/procedure codes on the add screen. " +
                        "Please add remaining codes on the update screen.");
                } else {
                  ReturnFunction1();
                  ReturnFunction();
                }
            }
          }
        }
        else {
          ReturnCode.select(); 
        }
      }
    );
  }
}

function SetOpDateTimes(FieldPosId) {
  if (FieldPosId == undefined)
    return;

  var oDateFld = document.getElementsByName("oprdt" + FieldPosId)[0];
  var oTimeStart = document.getElementsByName("oprst" + FieldPosId)[0];
  var oTimeEnd = document.getElementsByName("opred" + FieldPosId)[0];
  var oPCode = document.getElementsByName("mricd" + FieldPosId)[0];

  if (oDateFld == undefined || oTimeStart  == undefined ||
      oTimeEnd == undefined)
    return;

  if(oPCode != undefined) {                               // Op Code found
    if(trim(oPCode.defaultValue) == trim(oPCode.value)){  // Op Code not changed
      return;  // Exit to retain original date/time
    }
  }

  oDateFld.value = oprdate;
  oTimeStart.value = oprtime;
  oTimeEnd.value = oprendt;
}

function FindBlank() {
  for (var i=codcount; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mripr/)) {
      if (document.UpdateForm.elements[i].value=="") {
         document.UpdateForm.elements[i].focus();
         break; } } }
}
function AddItem() {
  ItemNo++
  var CodeLineHTML;
  CodeLineHTML = "<div class='CodeLine' id='CodeLine" +ItemNo+"'>"+
                          "<input type=hidden name=odate" + ItemNo +
                          " id=odate" + ItemNo + ">" +
                          "<input type=hidden name=otime" + ItemNo +
                          " id=otime" + ItemNo + ">" +
                          "<input type=hidden name=oetim" + ItemNo +
                          " id=oetim" + ItemNo + ">" +
                          "<input type=hidden name=blkno" + ItemNo +
                          " id=blkno" + ItemNo + ">" +
                          "<input type=hidden name=dtman" + ItemNo +
                          " id=dtman" + ItemNo + ">" +
                          "<input type=hidden name=hcpcd" + ItemNo +
                          " id=hcpcd" + ItemNo + ">" +
                          "<input type=hidden name=hcpnm" + ItemNo +
                          " id=hcpnm" + ItemNo + ">" +
                          "<input type=text size=1 maxlength=1" +
                          " name=mripr" + ItemNo + " id=mripr" + ItemNo +
                          " onkeyup='CheckPrefix(mripr" +
                          ItemNo + ",mricd" + ItemNo + ");'>" +
                          "<input type=text size=10" +
                          " name=mricd" + ItemNo + " id=mricd" + ItemNo +
                          " onblur='CheckKey(mricd" + ItemNo +
                          ",mride" + ItemNo + ",mripr" + ItemNo +
                          ",odate" + ItemNo + ",otime" + ItemNo +
                          ",oetim" + ItemNo + ",blkno" + ItemNo +
                          ",dtman" + ItemNo + ",hcpcd" + ItemNo +
                          ",hcpnm" + ItemNo + ");'>" 
//
// Entering Diagnosis/Procedure Descriptions
//
  if ((document.UpdateForm.morbdesc!=undefined)&&
      (document.UpdateForm.morbdesc.value=="1")) {
    CodeLineHTML +="<input type=text size=80 maxlength=200 " +
                   "name=mride" + ItemNo + " id=mride" + ItemNo + 
                   " onBlur='TextBlurHandler(this);'>"
    CodeLineHTML +="<span class=CodeDescription id=codename" + ItemNo +
                   " style='display:none'>&nbsp;</span></div>"
//--RecordCoding.innerHTML += CodeLineHTML; removed for cross browser -------//
  } else {
    CodeLineHTML +="<input type=text size=80 maxlength=200 " + 
                   "name=mride" + ItemNo + " id=mride" + ItemNo + " readonly>"
    CodeLineHTML +="<span class=CodeDescription id=codename" + ItemNo +
                   " style='display:none'>&nbsp;</span></div>"
//--RecordCoding.innerHTML += CodeLineHTML; removed for cross browser -------//
  }

//Cross Browser - Start
//NOTE:Cross browser changes to retain the values in the dynamic html on 
//browsers eg. firefox/chrome
//Every time an append occurs, a new element has to be created, the append 
//string assigned to the innerHTML of the new element, and an append child to 
//the div. This will retain all values in the dynamic html being appended to.
  var node = document.createElement("RCElement");
  node.innerHTML=CodeLineHTML;
  document.getElementById("RecordCoding").appendChild(node);
//Cross Browser - End

  if (ItemNo==101) {
    if (document.UpdateForm.defprefx!=undefined){
       document.UpdateForm.mripr101.value = document.UpdateForm.defprefx.value;
    } else {
       document.UpdateForm.mripr101.value = document.UpdateForm.pripre.value;}
    document.UpdateForm.mripr101.title="Prefix";
    document.UpdateForm.mricd101.title="Diagnosis/Procedure Code";
    document.UpdateForm.mripr101.className="Mandatory";
    document.UpdateForm.mricd101.className="Mandatory";
  }
  document.UpdateForm.mripr101.focus();  // Set for focus initially before loop
  for (var i=codcount; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mripr/)) {
      if (document.UpdateForm.elements[i].value=="") {
         document.UpdateForm.elements[i].focus();
         codcount=i;     // Start of Current Coding Section counter
         break; } } } 
}
 
function AddOps() {
  ProcNo++
  dateflag++; 
  if (dateflag=="1") { frstdate=ItemNo; }   // Set to first Operation Date 

  oprdate=document.getElementById('odate' + ItemNo).value;
  oprtime=document.getElementById('otime' + ItemNo).value;
  oprendt=document.getElementById('oetim' + ItemNo).value;
  blockno=document.getElementById('blkno' + ItemNo).value;
  dttmman=document.getElementById('dtman' + ItemNo).value;
  oprdcod=document.getElementById('hcpcd' + ItemNo).value;
  oprdnam=document.getElementById('hcpnm' + ItemNo).value;
  dateman= "' '";                         // default values (oprtdate = 0 or 1)
  timeman= "' '";
  if (document.UpdateForm.oprtdate.value==3) {
     if (ProcNo==101) {
        dateman= "'Date Mandatory'";
        if (document.UpdateForm.oprttime.value==0) {
          timeman= "'Mandatory'"; }
     } else {
        dateman= "'Date'";
     }
  } else {
    dateman= "'Date'";
  }

  if (document.UpdateForm.oprtdate.value==2) {
        dateman= "'Date Mandatory'";
     if (document.UpdateForm.oprttime.value==0) {
        timeman= "'Mandatory'"; }
  } else {
    if(document.UpdateForm.oprtdate.value!=3) {
      dateman= "'Date'";
    }
  }
//                           ICD10 Code Mandatory Date/Time ( 1=not Mandatory )
  if (dttmman!=1) {
//     if (document.UpdateForm.oprtdate.value!=3) {
//        if (dateman!='Date Mandatory') {
//            dateman= "'Date Mandatory'";
//            timeman= "'Time Mandatory'";
//        }
//     }
  } else {
    dateman= "'Date'";
    timeman= "' '";
  }
// VAED 2016 Stat Changes
  if (dttmman!=1) {
    if ((document.getElementById("stateflg").value=='3') &&
                 (document.getElementById("dischdte").value>'20160630')){
      if (document.getElementById('admnclss') != null &&
          document.UpdateForm.admistat != undefined &&
          ProcNo == 101 && document.UpdateForm.admistat.value == '3') {
        if (document.getElementById('admnclss').value.substr(28,1)=='C' ||
          document.getElementById('admnclss').value.substr(28,1)=='O') {
          dateman= "'Date Mandatory'";
          timeman= "'Mandatory'";
        }
      }
    }
  }
//                                            Block No. field
//-var CodeLine = document.getElementById("CodeLine"+ItemNo); -------//
   var CLHTML="";
//-CodeLine.innerHTML +="<input type=hidden" + ----------------------//
               CLHTML +="<input type=hidden" +
                            " name=count" + ItemNo + " id=count" + ItemNo +
                            " value=" + ItemNo + ">" +
                            "<input type=text size=4" +
                            " name=oprbl" + ItemNo + " id=oprbl" + ItemNo +
                            " value='" + blockno + "' readonly>" 

//                                            Clinician field
   if (typeof document.UpdateForm.mrcnclin != "undefined") {
      ccs = "' '";
      if (document.UpdateForm.mrcnclin.value !=0 ) {
         if ((document.UpdateForm.oprtdate.value==3) && (ProcNo!=101)) {
              document.UpdateForm.mrcnclin.value=1;
         }
         if (document.UpdateForm.mrcnclin.value == 2) { 
             ccs = "'Mandatory'";
         }
         AddClinician()
      }
   }
//                                            Date / Time fields
   if (document.UpdateForm.oprtdate.value!=1) {
      AddDateTime(); 
      VerifyDateSrch(document.getElementById('odate' + ItemNo)); 
   }

//-CodeLine.innerHTML +="<img src=../images/ClearIcon.gif class='Icon'" + --//
               CLHTML +="<img src=../images/ClearIcon.gif class='Icon'" +
                          " onClick=ClrOps(" + ItemNo + ");valOprDtTm(oprdt" +
                   ItemNo + ",oprst" + ItemNo + ",opred" + ItemNo + ");>"

  // Add a hidden field so we can do validation later (on submit of codes)
  CodeVal = document.getElementById("mricd" + ItemNo).value;
//CodeLine.innerHTML += "<input type=hidden"  ------------------------------//
              CLHTML += "<input type=hidden"
                        " name=prcod" + ItemNo + " id=prcod" + ItemNo +
                        " value='" + CodeVal + "'>";

  //Cross Browser changes to retain dynamic html values
  var node = document.createElement("RCElement");
  node.innerHTML=CLHTML;
  document.getElementById("CodeLine"+ItemNo).appendChild(node);
  
}

function valOprDtTm(date,sttime,edtime) {
  if (document.UpdateForm.oprtdate.value!=1) {
    valOpDT(date,sttime,edtime);
  }
}

function valOpDT(date,sttime,edtime) {}

function AddClinician() {
//-var CodeLine = document.getElementById("CodeLine"+ItemNo); --------------//
   var CLHTML="";
//-CodeLine.innerHTML += "<input type=text size=10" + ----------------------//
  CLHTML += "<input type=text size=10" +
            " name=oprcl" + ItemNo + " id=oprcl" + ItemNo +
            " maxlength=8 class=" + ccs + " title='Clinician'" +
            " value='" + oprdcod + "'" +
            " onblur='ValidateHCPDateHospital(18,3,UpdateForm.oprcl" + ItemNo +
            ",UpdateForm.oprnm" + ItemNo +
            ",UpdateForm.oprdt" + ItemNo +
            ",UpdateForm.wbsehosp);'>" +
            "<input type=text" +
            " name=oprnm" + ItemNo + " id=oprnm" + ItemNo +
            " value='" + oprdnam + "'" +
            " size=30 maxlength=25 readonly class=Readonly>" +
            "<img src='../images/SearchIcon.gif' class=Icon" +
            " onclick=HCPSearchFrame(UpdateForm.oprcl" + ItemNo + 
            ",UpdateForm.oprnm" + ItemNo + ",8)>&nbsp;"

  //Cross Browser changes to retain dynamic html values
   var node = document.createElement("RCElement");
   node.innerHTML=CLHTML;
   document.getElementById("CodeLine"+ItemNo).appendChild(node);

   if (typeof document.UpdateForm.mrcnclin != "undefined" &&
       typeof document.UpdateForm.mrcndfpr != "undefined" &&
       typeof document.UpdateForm.dfprlst1 != "undefined" &&
       typeof document.UpdateForm.dfprlst2 != "undefined" &&
       typeof document.UpdateForm.dfprdsc1 != "undefined" &&
       typeof document.UpdateForm.dfprdsc2 != "undefined" &&
       ProcNo == "101" &&
       document.UpdateForm.mrcnclin.value != 0 &&
       document.getElementById("dischdte").value > '20190701') {
     if (document.UpdateForm.mrcndfpr.value == "1") {
       document.getElementById("oprcl"+ItemNo).value = 
       document.UpdateForm.dfprlst1.value
       document.getElementById("oprnm"+ItemNo).value =
       document.UpdateForm.dfprdsc1.value
     }
     if (document.UpdateForm.mrcndfpr.value == "2") {
       document.getElementById("oprcl"+ItemNo).value =
       document.UpdateForm.dfprlst2.value
       document.getElementById("oprnm"+ItemNo).value =
       document.UpdateForm.dfprdsc2.value
     }
   }

}

function CheckMandClinician(Ix) {
  if (typeof document.UpdateForm.mrcnclin == "undefined") return;
  if (oprcount > 1) return; //only first procedure has mandatory clinician 
  if (document.UpdateForm.mrcnclin.value != 2) return;

  if (document.getElementById('dtmn' + ItemNo).value!= 0) return;
  // if we are still here, make the oprclxxxx class mandatory; 
  var name = "oprcl" + Ix;
  if (typeof document.UpdateForm.elements[name] != "undefined")
  {
    document.UpdateForm.elements[name].className = "Mandatory"; 
  } 
}

function AddDateTime() {
//var CodeLine = document.getElementById("CodeLine"+ItemNo); ---------------//
  var CLHTML="";
  odate = document.getElementById('odate' + ItemNo).value;
  otime = trim(document.getElementById('otime' + ItemNo).value);
  oetim = trim(document.getElementById('oetim' + ItemNo).value);
 
  if (typeof document.UpdateForm.mrcnclin != "undefined"
      && document.UpdateForm.mrcnclin.value !=0) {

//--CodeLine.innerHTML += "<input type=text size=12" + ---------------------//
                CLHTML += "<input type=text size=12" +
                            " name=oprdt" + ItemNo + " id=oprdt" + ItemNo +
                            " value='" + odate + "' class=" +
                            dateman +
                            " title='Operation Date'" +
                            " onblur=checkDate(this,'Operation-date');" +
                            "setDates(oprdt" + ItemNo + ",oprst" + ItemNo +
                            ",opred" +ItemNo + ",count" + ItemNo + ".value);" +
                            "VerifyDate(oprdt" + ItemNo + ");" +
                            "ValidateHCPDateHospital(18,3,oprcl" + ItemNo +
                            ",oprnm" + ItemNo + ",this,wbsehosp);>" +
                            "<img notab src=../images/DateTimeStamp.gif " +
                            "class='Icon' alt='Current' " +
                            "date='UpdateForm.oprdt" + ItemNo + "'" +
                            " time='UpdateForm.oprst" + ItemNo + "'>" +
                            "<img notab src=../images/DateLookup.gif " +
                            "class='Icon' alt='Show Calendar' " +
                            "date='UpdateForm.oprdt" + ItemNo + "'>"

  } else {

//--CodeLine.innerHTML += "<input type=text size=12" + ---------------------//
                CLHTML += "<input type=text size=12" +
                            " name=oprdt" + ItemNo + " id=oprdt" + ItemNo +
                            " value='" + odate + "' class=" +
                            dateman +
                            " title='Operation Date'" +
                            " onblur=checkDate(this,'Operation-date');" +
                            "setDates(oprdt" + ItemNo + ",oprst" + ItemNo +
                            ",opred" +ItemNo + ",count" + ItemNo + ".value);" +
                            "VerifyDate(oprdt" + ItemNo + ");>" +
                            "<img notab src=../images/DateTimeStamp.gif " +
                            "class='Icon' alt='Current' " +
                            "date='UpdateForm.oprdt" + ItemNo + "'" +
                            " time='UpdateForm.oprst" + ItemNo + "'>" +
                            "<img notab src=../images/DateLookup.gif " +
                            "class='Icon' alt='Show Calendar' " +
                            "date='UpdateForm.oprdt" + ItemNo + "'>"

  }

  if (document.UpdateForm.oprttime.value!=2) {
    if (isWhitespace(oprtime)) {
      oprtime = "";
      oprendt = "";
    }

//--CodeLine.innerHTML += "<input type=text size=6" + ----------------------//
                CLHTML += "<input type=text size=6" +
                          " name=oprst" + ItemNo + " id=oprst" + ItemNo +
                          " value='" + otime + "' class=" + timeman +
                          " title='Operation Start Time'" +
                          " onblur='checkTime(this,\"Operation Start Time\");" +
                          "setDates(oprdt" + ItemNo + ",oprst" +
                          ItemNo + ",opred" + ItemNo + ",count" + ItemNo +
                          ".value);'>" +
                          "<img notab src=../images/TimeLookup.gif " +
                          "class='Icon' alt='Time Select' " + 
                          "time='UpdateForm.oprst" + ItemNo + "'>" +
                          "<input type=text size=6" +
                          " name=opred" + ItemNo + " id=opred" + ItemNo +
                          " value='" + oetim + "' class=" + timeman +
                          " title='Operation End Time'" +
                          " onblur='checkTime(this,\"Operation End Time\");" +
                          "setDates(oprdt" + ItemNo + ",oprst" +
                          ItemNo + ",opred" + ItemNo + ",count" + ItemNo +
                          ".value);'>" +
                          "<img notab src=../images/TimeLookup.gif " +
                          "class='Icon' alt='Time Select' " + 
                          "time='UpdateForm.opred" + ItemNo + "'>";
  } else {
//--CodeLine.innerHTML += "<input type=hidden name=oprst" + ----------------//
                CLHTML += "<input type=hidden name=oprst" +
                          ItemNo + " id=oprst" + ItemNo + " />" +
                          "<input type=hidden name=opred" +
                          ItemNo + " id=opred" + ItemNo + " /> ";
  }

  //Cross Browser changes to retain dynamic html value
  var node = document.createElement("RCElement");
  node.innerHTML=CLHTML;
  document.getElementById("CodeLine"+ItemNo).appendChild(node);

}

function AddAccs() {
//var CodeLine = document.getElementById("CodeLine"+ItemNo);-----------------//
  var CLHTML = "";
  var accdate_mandatory = true;
  if(document.getElementById("ptcnhdps")) {
    if(document.getElementById("ptcnhdps").value=="1") {  // NZ
      if(additreq=="P" || additreq=="A") {                // Activity or Place
         accdate_mandatory = false                        // Not mandatory
      }
    }
  }
  if (document.UpdateForm.usngecod.value=="1") {
    if ((additreq=="2")||(additreq=="6")||(additreq=="7")||(additreq=="8")||
        (additreq=="P")||(additreq=="A")) {
//----CodeLine.innerHTML += "<input type=text size=12" +  -------------------//
                  CLHTML += "<input type=text size=12" +
                            " name=accdt" + ItemNo + " id=accdt" + ItemNo;
                  if(accdate_mandatory) {
                    CLHTML += " class='Date Mandatory'";
                  } else {
                    CLHTML += " class='Date'";
                  }
                  CLHTML += " title='Accident Date'" +
                            " onblur=checkDate(this,'Accident-date');" +
                            "VerifyDiagDate(accdt" + ItemNo + ");>" +
                            "<img notab src=../images/DateLookup.gif " +
                            "class='Icon' alt='Show Calendar' " + 
                            "date='UpdateForm.accdt" + ItemNo + "'>" +
                            "<img src=../images/ClearIcon.gif class='Icon'" +
                            " onClick=ClrAccs(mricd" + ItemNo + ",mride" +
                            ItemNo + ",accdt" + ItemNo + 
                            ",codename" + ItemNo + ");>";

     //Cross Browser changes to retain dynamic html values
      var node = document.createElement("RCElement");
      node.innerHTML=CLHTML;
      document.getElementById("CodeLine"+ItemNo).appendChild(node);

      return;
    }
  }

//CodeLine.innerHTML += "<img src=../images/ClearIcon.gif class='Icon'" + ---//
              CLHTML += "<img src=../images/ClearIcon.gif class='Icon'" +
                        " onClick=ClrAccs(mricd" + ItemNo + ",mride" +
                        ItemNo + ",codename" + ItemNo + ");>"
  // Add a hidden field so we can do validation later (on submit of codes)
  CodeVal = document.getElementById("mricd" + ItemNo).value;
//CodeLine.innerHTML += "<input type=hidden" + ------------------------------//
              CLHTML += "<input type=hidden" +
                        " name=dscod" + ItemNo + " id=dscod" + ItemNo +
                        " value='" + CodeVal + "'>";

  //Cross Browser changes to retain dynamic html value
  var node = document.createElement("RCElement");
  node.innerHTML=CLHTML;
  document.getElementById("CodeLine"+ItemNo).appendChild(node);

}

function ClrOps(Ix)
{
  var i, ename;
  var f = document.forms['UpdateForm'].elements;
  for (i=0; i < f.length; i++)
  {
    if (f[i].name.substr(5,3) == Ix)
    {
       ename = f[i].name.substr(0,5);
       if (ename == "mripr")
         oprcount--;
       else
         f[i].value = "";
       if (ename == "mricd") f[i].focus();
       if (ename == "oprcl") f[i].className = "";
    }
  }
  var sname="codename" + Ix;
  if(document.getElementById(sname)){
    document.getElementById(sname).innerHTML="";
  }
  document.UpdateForm.countcod.value = discount + oprcount;
}

function ClrAccs() {
  for(var i = 0; i < arguments.length; i++) {
    if(arguments[i].tagName=="SPAN" && arguments[i].id.substr(0,8)=="codename"){
     arguments[i].innerHTML="";
    } else {
      arguments[i].value="" 
    }
  }
  arguments[0].focus(); // Set focus back to Disease/Procedure Code input field
  discount--;
  document.UpdateForm.countcod.value=discount + oprcount;
}

function setDates(oprdate,startime,endtime,count) {
  if (document.UpdateForm.nodtcopy!=undefined) {   // don't copy Oper date/time
      savdate=" ";
      savtime=" ";
      return;
  }
  count=count-100;
  flag=1;                 // Flag to set that new dates & times have been set
  savdate=oprdate.value;  // save variable for date
  savtime=startime.value; // save variable for start time
  savendt=endtime.value;  // save variable for end time
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/oprdt/)) {
      dtcount=document.UpdateForm.elements[i].name.substr(6,8);
      subs=document.UpdateForm.elements[i].name.substr(5,8);
      dtcount=dtcount-0;   // Convert String to a number
      if (dtcount > count) {
        document.UpdateForm.elements[i].value=oprdate.value;
 
        if (document.UpdateForm.notmcler!=undefined)
        {
          if (!isWhitespace(startime.value)) {
            document.UpdateForm.elements[i+1].value=startime.value;
          }

          if (!isWhitespace(endtime.value)) {
            document.UpdateForm.elements[i+2].value=endtime.value;
          }

        }
        else {
          fldname="oprst" + subs;
          obj=document.getElementById(fldname);
          if (obj!=undefined) {
            obj.value = startime.value;
          }
          fldname="opred" + subs;
          obj=document.getElementById(fldname);
          if (obj!=undefined) {
            obj.value = endtime.value;
          }
//          document.UpdateForm.elements[i+1].value=startime.value;
//          document.UpdateForm.elements[i+2].value=endtime.value;
        }

      } 
    } 
  }
}
function CheckEps(ReturnCode) {
  if (PageLoadFlag) { PageLoadFlag=false; return; }
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=3" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      epsflag=ReturnValue[0]
      if (epsflag == "1") {
        ServerPage="mrtweb02.pbl?reportno=03&template=001"
        location.href=ServerPage +
           "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&epscd001="+ReturnCode.value }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|")
          epsflag=ReturnValue[0]
          if (epsflag == "1") {
            ServerPage="mrtweb02.pbl?reportno=03&template=001"
            location.href=ServerPage +
               "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
               "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
               "&epscd001="+ReturnCode.value }
        }
      }
    );
  }
}
// 
// This function uses remote scripting to validate the Procedure Date against
// the Discharge Date. This function is executed when the procedure date is 
// changed.
//
function VerifyDate(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=4" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
    } else {
      ReturnCode.value=""; 
      ReturnCode.select();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|")
        } else {
          ReturnCode.value=""; 
          ReturnCode.select();
        }
      }
    );
  }
}
//
// This function uses remote scripting to validate the Diagnosis Date against
// the Discharge Date. This function is executed when the diagnosis date is
// changed.
//
function VerifyDiagDate(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=8" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
    } else {
      ReturnCode.value="";
      ReturnCode.select();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|")
        } else {
          ReturnCode.value="";
          ReturnCode.select();
        }
      }
    );
  }
}
// 
// This function uses remote scripting to validate the Procedure Date against
// the Discharge Date. This function is excuted on the ruturn of a Procedure
// Date after a Procedure Search 
//
function VerifyDateSrch(ReturnCode) {
    if (isWhitespace(ReturnCode.value)) return;;
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=4" +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
    } else {
      for (var i=0; i < document.UpdateForm.length; i++) {
        if (document.UpdateForm.elements[i].name.match(/oprdt/)) {
          dtcount=document.UpdateForm.elements[i].name.substr(5,8);
          dtcount=dtcount-0;   // Convert String to a number
          if (dtcount==frstdate) {
//            alert(document.UpdateForm.elements[i].name)
              document.UpdateForm.elements[i].select(); } } } }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|")
        } else {
          for (var i=0; i < document.UpdateForm.length; i++) {
            if (document.UpdateForm.elements[i].name.match(/oprdt/)) {
              dtcount=document.UpdateForm.elements[i].name.substr(5,8);
              dtcount=dtcount-0;   // Convert String to a number
              if (dtcount==frstdate) {
    //            alert(document.UpdateForm.elements[i].name)
                  document.UpdateForm.elements[i].select(); } } } }
      }
    );
  }
}
function Associated() {
  linkurl="mrtweb02.pbl?reportno=1&template=2" +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&epscd001=" + document.UpdateForm.epscd001.value.replace(/ /g,"+") 
  Left=(document.body.clientWidth-460)/2
  DFrameLink(linkurl,0,Left,460,400)
}
function Codding() {
  if (!ValidateAss(UpdateForm)) { return; }
  if (!chkFormComplete(UpdateForm)) {return; }
  SubmitCodding()
}
function CoddingKids() {
  if (!ValidateAssKids(UpdateForm)) { return; }
  if (!chkFormComplete(UpdateForm)) {return; }
  SubmitCodding()
}

// Function chkFormComplete() checks whether the Code/Description fields have
// been specified. This is to ensure that the description is always supplied 
// with the code when 'Allow change of description in Morbidity' flag is set.
function chkFormComplete(proForm) {
  if (proForm.morbdesc.value != "1")     // 'Allow change of desc' flag not set
    return true;                         // Exit.
 
  // Find all 'Code' fields in the form
  for (var i=0; i < proForm.length; i++) {
    if (proForm.elements[i].name.match(/mricd/)) {
      var codeSufix = proForm.elements[i].name.substr(5,3);

      // For 'Code' field found, find a corresponding 'Description' field
      for (var j=i; j < proForm.length; j++) {
        if (proForm.elements[j].name.match(/mride/)) {
          var descSufix = proForm.elements[j].name.substr(5,3);
          if (codeSufix == descSufix) {     // 'Description' field found
            var code = proForm.elements[i].value;
            var desc = proForm.elements[j].value;

            if (!isWhitespace(code) && isWhitespace(desc)) {
              alert("Description must be entered.");
              proForm.elements[j].focus();
              return false;
            }
          }
        }
      }
    }
  }
  return true;
}

function SetSexAsscFlag() {
  sexasscd=0;
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mricd/)) {
      if (document.UpdateForm.elements[i].value.match(/E25.0/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/E25.8/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/E29.1/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/E34.5/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/F64.0/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q56.0/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q56.1/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q56.2/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q56.3/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q56.4/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q99.0/)) {
        sexasscd=1;
        break;
      }
      if (document.UpdateForm.elements[i].value.match(/Q99.1/)) {
        sexasscd=1;
        break;
      }
    }
  }
}

function ValidateDisCodes() {
  SetSexAsscFlag();

  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/dscod/)) {
      // Retrieve the variable no from the name
      cgino=document.UpdateForm.elements[i].name.substring(5,8);
      disprefx="mricd" + cgino;        // Set the equivalent cgi's needed
      prefix=document.UpdateForm[disprefx].value;
      discode=document.UpdateForm.elements[i].value;

      if (isWhitespace(prefix))
        return true;  // bail if disease code value is blank
  
      //
      // Validate Disease Code Remote Scripting
      //
      var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=1" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + discode.replace(/ /g,"+") +
                  "&dsprefix=" + prefix.replace(/ /g,"+") +
                  "&discodno=" + cgino +
                  "&sexasscd=" + sexasscd;

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        if ( (ReturnValue.length > 1) && (ReturnValue[1] == "W") ) {
          ans=confirm("Warning: " + trim(discode) +
            " requires an external cause code." +
            "\n\nSelect OK to proceed, or Cancel to return.");

          if (ans == false) {
            return false;
          }
        }
        dummy=1;  // Only checking 1 code..
      }
      else {
        return false; 
      }
    }
  }

  return true;
}

function ValidateProCodes() {
  SetSexAsscFlag();

  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/prcod/)) {
    // Retrieve the variable no from the name
      code=document.UpdateForm.elements[i].value;

      if(!isWhitespace(code)) {
//
//      Validate Procedure Code Remote Scripting
//
        var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=2" +
                    "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&valdcode=" + code.replace(/ /g,"+") +
                    "&sexasscd=" + sexasscd;

        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0) {
          dummy=1 }   // Only checking 1 code..
        else {
        return false; }
      }
    }
  }
  return true;
}

function SubmitCodding() {
  pripre = document.UpdateForm.pripre.value;   
  compre = document.UpdateForm.compre.value;   
  stateflg = document.UpdateForm.stateflg.value;   
  var hospbith=document.UpdateForm.hspbirth.value.substr(14,1);

  if (Codes) {   // if true Diagnosis/Procedure codes have been entered
    if (document.UpdateForm[namecod.name].value != pripre) {
      if (stateflg=="3") {
        if (hospbith!="Y"||document.UpdateForm[namecod.name].value!=compre) {
          alert("Error 1st Disease code does not have a '" + pripre +
                    "' prefix! Please change.");
          document.UpdateForm[namecod.name].focus();        
        return false; 
        }
      } else {
        ans=confirm("Warning 1st Disease code does not have a '" + pripre + 
                    "' prefix!\n" +
                    "Would you like to change it now? or press Cancel " +
                    "to continue."); 
        if (ans) {
          document.UpdateForm[namecod.name].focus();        
          return false; } } } 
  }    

  // Validate Disease Codes on screen!!
  if (!ValidateDisCodes()) {
    return false;  // invalid codes; bail
  }

  // Validate Procedure Codes on screen!!
  if (!ValidateProCodes()) {
    return; // Return is = to false
  }

  //
  //  Note the following if statements that check against codes are also in 
  //  mrtweb0203.js on function Compall().. Thus if you make changes here
  //  make sure the same is done in mrtweb0203.js!!!
  //
  if (isWhitespace(document.UpdateForm.hrsicu03.value)) {
    WarnMech=false;
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
        if (document.UpdateForm.elements[i].value.match(/13882-00/)) {
          WarnMech=true; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-01/)) {
          WarnMech=true; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-02/)) {
          WarnMech=true; break; }
      }
    }
    if (WarnMech) {
        Continue=confirm('Warning: ' +
                         'A procedure code of either 13882-00,\n'+
                         '13882-01 or 13882-02 has been entered,' +
                         ' without an Hrs on Mech value.\n\n' +
                         'Click Ok if you want to Override Warning.\n')
        if (!Continue) { return false ;; }
    }
  }
  if (!isWhitespace(document.UpdateForm.hrsicu03.value)&&(document.UpdateForm.hrsicu03.value!="0")) {
    WarnMech=true;
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
        if (document.UpdateForm.elements[i].value.match(/13882-00/)) {
          WarnMech=false; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-01/)) {
          WarnMech=false; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-02/)) {
          WarnMech=false; break; }
      }
    }
    if (WarnMech) {
      if (document.UpdateForm.mechwarn.value=="1") {
         alert('Fatal Error: Hrs on Mech found! a code of  either ' +
                          '13882-00,\n'+
                          '13882-01 or 13882-02 must be entered.');
         return;
      } else {
        Continue=confirm('Warning: ' +
                         'Hrs on Mech found! a code of either ' +
                         '13882-00,\n'+
                         '13882-01 or 13882-02 must be entered.\n\n' +
                         'Click Ok if you want to Override Warning.\n')
        if (!Continue) { return false ;; }
      }
    }
  }
  // Now do Admission Warnings if within Age Range!
  if (document.UpdateForm.wghtindc.value=="1") { // Age Range Parameter 
    if (!isWhitespace(document.UpdateForm.hrsicu04.value)) {
      weight=parseInt(document.UpdateForm.hrsicu04.value,10); //Convert to an Int!
      if ((weight >= "1000") && (weight <= "2499")) {
        WarnWght=true;
        for (var i=0; i < document.UpdateForm.length; i++) {
          if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
            if (document.UpdateForm.elements[i].value.match(/P07.1/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P07.3/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P05/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P96.4/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P01.8/)) {
              WarnWght=false; break; }
          }
        }
        if (WarnWght) {
          Continue=confirm('Warning: ' +
                       'Admission Weight b/w 1000-2499g, No Matching Disease\n'+
                       'Code. Please add a code of either P07.1*, P07.3*,' +
                       ' P05*, P96.4 or P01.8\n\n' +
                       'Click Ok if you want to Override Warning.\n')
          if (!Continue) { return false ;; }
        }
      }
      // Only do the following warning if Adm Source HDP="Y"-birth in hosp
      var hospbith=document.UpdateForm.hspbirth.value.substr(14,1);
      if (hospbith=="Y") {
        if (weight > "6000") {
          WarnWght=true;
          for (var i=0; i < document.UpdateForm.length; i++) {
            if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
              if (document.UpdateForm.elements[i].value.match(/P08.0/)) {
                WarnWght=false; break; }
              if (document.UpdateForm.elements[i].value.match(/P08.1/)) {
                WarnWght=false; break; }
            }
          }
          if (WarnWght) {
            Continue=confirm('Warning: ' +
                         'Admission Weight > 6000g, No Matching Disease\n'+
                         'Code. Please add a code of either P08.0, P08.1\n\n' +
                         'Click Ok if you want to Override Warning.\n')
            if (!Continue) { return false ;; }
          }
        }
      }
    }
  }

//
//  CPAP(NIV) hrs error checking. Only for Victoria
//  usngcpap=1 : Patient is under 10 days of age at time of Admission
// 
  if (stateflg=="3") {  // State flag 3=Vic       
    if (document.UpdateForm.usngcpap.value=="1") {  // Is flag set?
      if (!isWhitespace(document.UpdateForm.hrsicu10.value)) {
        WarnCpap=false;
        for (var i=0; i < document.UpdateForm.length; i++) {
          if (document.UpdateForm.elements[i].name.match(/mricd/)) { 
            if (document.UpdateForm.elements[i].value.match(/Z38/)) {
              WarnCpap=true; break; }
          }
        }
        if (WarnCpap) {
            Continue=confirm('Warning: Healthy Newborn with NIV Duration.\n' + 
                'NIV hrs exist and a Z38 code has been entered!');
            if (!Continue) { return false ;; }
        }
      }        
    }
  }
//
//   Submit Form
//
  document.UpdateForm.updttype.value="U";
  if (validateMandatory(UpdateForm)) {
    UpdateForm.target="PopUpFrame"
    if(VariableNameExists("PathUncodedDischargeList")) {
      if(PathUncodedDischargeList!=='unknown') {
        SetCookie("UncodedDischargeList",PathUncodedDischargeList);
      }
    }
    UpdateForm.submit();
  }
  return true;
}
function CopyCodesCheck() {
  if(document.getElementById("d_mrcnpcld")) {
    if(document.getElementById("d_mrcnpcld").value=="1") {
      Copyall();
      return;
    }
  }
  CopySelectVisit();
}
function Copyall() {
  if(!checkNumber(UpdateForm.epscd001)) {
    return;
  }
  if(!checkString(UpdateForm.epscd001,UpdateForm.epscd001.title)) {
    return;
  }
  if(!checkNumber(UpdateForm.epscd001)) {
    return;
  }
  if(!checkString(UpdateForm.epscd001,UpdateForm.epscd001.title)) {
    return;
  }
  ans=confirm("This will copy codes from the patients last Discharge."); 
  if (!ans) {
    return; } 
  document.UpdateForm.updttype.value="C";
  UpdateForm.target="PopUpFrame"
  UpdateForm.submit();
}
function CopySelectVisit() {
  if(!checkNumber(UpdateForm.epscd001)) {
    return;
  }
  if(!checkString(UpdateForm.epscd001,UpdateForm.epscd001.title)) {
    return;
  }
  LinkUrl="patweb98.pbl?reportno=1&template=74" +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
  DFrameLink(LinkUrl,50,100,800,500)
}
function SetFocus() { 
  document.UpdateForm.hrsicu06.focus();
}
function SetFocusSTV() {
  document.UpdateForm.mricd101.focus();
}
function SetFocusPriv() { 
  document.UpdateForm.hrsicu09.focus();
}
//
//  Delete locked record for Codding Screen
//
function BreakLock() {
  p=document.UpdateForm;
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                  "&urnumber=" + p.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + p.admissno.value.replace(/ /g,"+") +
                  "&valdtype=4";

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      var dummy="1";  // Dummy var does nothing
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          var dummy="1";  // Dummy var does nothing
        }
      }
    );
  }
}
//
//  Delete locked record for Coding Screen
//
function CancelButton() {
  if(VariableNameExists("PathUncodedDischargeList")) {
    if(PathUncodedDischargeList!=='unknown'){
      location.href=PathUncodedDischargeList;
      return;
    }
  }

  location.href='patweb98.pbl?reportno=02&template=001';
}
function checkTime() {
theField=this
labelString=this.title
if (checkTime.arguments.length > 0 ) {
  theField=checkTime.arguments[0]
  labelString=checkTime.arguments[1]
}
 if(theField.value=="") { return true; }
 var ErrorFound=false
 var hour=0
 var min=0
 var sec=0
 timevalue=theField.value
 timelength=timevalue.length
 if (timevalue.match(/\./)) {
    var x=timevalue.split(".")
    hour=x[0]
    min=x[1]
    if (x[2]==undefined) { sec="0" }
                    else { sec=x[2] }}
 else {
   if (timevalue.match(/\:/)) {
      var x=timevalue.split(":")
      hour=x[0]
      min=x[1]
      if (x[2]==undefined) { sec="0" }
                      else { sec=x[2] }}
   else {
     if (timelength<3) {
       hour=timevalue; min="0"; sec="0" }
     else {
       switch (timelength) {
       case 3: {
         hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
         break; }
       case 4: {
         hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
         break; }
       case 6: {
         hour=timevalue.substr(0,2);
         min=timevalue.substr(2,2);
         sec=timevalue.substr(4,2);
         break; }
       default: {
         ErrorFound=true ;
         break; }
       }
     }
   }
 }
 if (isNaN(hour)){ ErrorFound=true }
 if (isNaN(min)) { ErrorFound=true }
 if (isNaN(sec)) { ErrorFound=true }
 if (isWhitespace(hour)){ ErrorFound=true }
 if (isWhitespace(min)) { ErrorFound=true }
 if (isWhitespace(sec)) { ErrorFound=true }
 hour=parseInt(hour,10)
 min=parseInt(min,10)
 sec=parseInt(sec,10)
 if (!ErrorFound) {
   if (min<0 || min>59) { ErrorFound = true }
     if (hour<0 || hour>23) { ErrorFound = true }
       if (sec<0 || sec>59) { ErrorFound = true }
 }
//
 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min + ":" + sec
   return true; }
}
function DisCareType() {  
  if (document.UpdateForm.mrcnepsc.value=="1") {
      document.getElementById('CareTypeLab').innerHTML =
          document.getElementById('showCareType').innerHTML;
      document.getElementById('CareTypeDes').innerHTML =
          document.getElementById('showCareTypeDes').innerHTML;
  } else {
      document.getElementById('CareTypeLab').innerHTML = "";
      document.getElementById('CareTypeDes').innerHTML = "";
  }
}
function DisCodeIncomplete() {
  if (document.UpdateForm.medcd001.checked==true) {
      document.getElementById('CodeIncompl').innerHTML = "";
  } else {
      document.getElementById('CodeIncompl').innerHTML =
          document.getElementById('showCodeInco').innerHTML;
  }
}
//========================================================================
//   Report 1  template:002 
//========================================================================
function DisWeightAss() {
  ind=document.AddForm.wghtindc.value;
  if (ind=="1") {
    WeightLabel.innerHTML="Admission Weight";
    WeightField.innerHTML=weightdisplay.innerHTML;
    AddForm.hrsicu04.value=AddForm.hrsicu04.value.replace(/ /g,"")
  } else {
    WeightLabel.innerHTML="";
    WeightField.innerHTML="";
  }
}
function DisGestation(theform) {
  ind=theform.admntype.value.substr(6,1);
  if (ind=="B") {
    GestationLabel.innerHTML=gestationhd.innerHTML;
    GestationField.innerHTML=gestationdisplay.innerHTML;
  } else {
    GestationLabel.innerHTML="";
    GestationField.innerHTML="";
  }
}
function DisCareplDat() {
  stateind=document.AddForm.ptcnhdps.value;
  publcind=document.AddForm.ptcnhosp.value;
  caretind=trim(document.AddForm.caretype.value.substr(14,2));
  if ((stateind=="3") && (publcind=="1")) {
    if (caretind=="2" || caretind=="6"|| caretind=="P"|| caretind=="8"|| caretind=="9"|| caretind=="R1"|| caretind=="R2" || caretind=="MC") {
      CareplLabel.innerHTML="Care Plan Documented Date";
      CareplField.innerHTML=carepldisplay.innerHTML;
    }
  } else {
    CareplLabel.innerHTML="";
    CareplField.innerHTML="";
  }
}
function DisAutopsy() {
  ind=document.AddForm.deceased.value;
  ind2=document.AddForm.tickauto.value;
  if (ind=="Yes") {
    AutopsyLabel.innerHTML="Autopsy";
    AutopsyField.innerHTML=Autopsydisplay.innerHTML;
    if(ind2=="Yes") {
      document.AddForm.d_ptmas031.checked=true;
    }
  } else {
    AutopsyLabel.innerHTML="";
    AutopsyField.innerHTML="";
  }
}
function ICU() {
  icu=document.UpdateForm.usingicu.value;
  icubed=document.UpdateForm.icubedtp.value;
  ccubed=document.UpdateForm.ccubedtp.value;
  if (icu=="1") {   // Doing check for ICU Bed Type
    if (icubed=="1") {  // Is there an ICU Bed Type
      document.UpdateForm.hrsicu01.className="JustifyLeft Integer";
      document.UpdateForm.hrsicu01.readOnly= false;
    } else{
      document.UpdateForm.hrsicu01.className="ReadOnly";
      document.UpdateForm.hrsicu01.readOnly= true;
    }
    if (ccubed=="1") {  // Is there an CCU Bed Type
      document.UpdateForm.hrsicu02.className="JustifyLeft Integer";
      document.UpdateForm.hrsicu02.readOnly= false;
    } else{
      document.UpdateForm.hrsicu02.className="ReadOnly";
      document.UpdateForm.hrsicu02.readOnly= true;
    }
    if (((icubed=="0") && (ccubed=="1"))||((icubed=="1") && (ccubed=="0"))||
       ((icubed=="1") && (ccubed=="1"))) {
      document.UpdateForm.hrsicu03.className="JustifyLeft Integer";
      document.UpdateForm.hrsicu03.readOnly= false;

      if (document.UpdateForm.hrsicu15 != undefined) {
        document.UpdateForm.hrsicu15.className="JustifyLeft Integer";
        document.UpdateForm.hrsicu15.readOnly= false;
      }
    } else {
      document.UpdateForm.hrsicu03.className="ReadOnly";
      document.UpdateForm.hrsicu03.readOnly= true;

      if (document.UpdateForm.hrsicu15 != undefined) {
        document.UpdateForm.hrsicu15.className="ReadOnly";
        document.UpdateForm.hrsicu15.readOnly= true;
      }
    }
  } 
}
function ICUKids() {
  icu=document.UpdateForm.usingicu.value;
  icubed=document.UpdateForm.icubedtp.value;
  ncubed=document.UpdateForm.ncubedtp.value;
  if (icu=="1") {   // Doing check for ICU Bed Type
    if (icubed=="1") {  // Is there an ICU Bed Type
      document.UpdateForm.hrsicu01.className="JustifyLeft Integer";
      document.UpdateForm.hrsicu01.readOnly= false;
    } else{
      document.UpdateForm.hrsicu01.className="ReadOnly";
      document.UpdateForm.hrsicu01.readOnly= true;
    }
    if (ncubed=="1") {  // Is there an NICU Bed Type
      document.UpdateForm.hrsicu07.className="JustifyLeft Integer";
      document.UpdateForm.hrsicu07.readOnly= false;
    } else{
      document.UpdateForm.hrsicu07.className="ReadOnly";
      document.UpdateForm.hrsicu07.readOnly= true;
    }
    if (((icubed=="0") && (ncubed=="1"))||((icubed=="1") && (ncubed=="0"))||
       ((icubed=="1") && (ncubed=="1"))) {
      document.UpdateForm.hrsicu03.className="JustifyLeft Integer";
      document.UpdateForm.hrsicu03.readOnly= false;
    } else {
       document.UpdateForm.hrsicu03.className="ReadOnly";
       document.UpdateForm.hrsicu03.readOnly= true;
    }
  } 
}
function SetICU() {
  icu=document.AddForm.usingicu.value;
  icubed=document.AddForm.icubedtp.value;
  ccubed=document.AddForm.ccubedtp.value;
  var scnbed = "";
  if (document.AddForm.scnbedtp!=undefined) {
    scnbed=document.AddForm.scnbedtp.value;
  }
  if (icu=="1") {   // Doing check for ICU Bed Type
    if (icubed=="1") {  // Is there an ICU Bed Type
      document.AddForm.hrsicu01.className="JustifyLeft Integer";
      document.AddForm.hrsicu01.readOnly= false;
    } else{
      document.AddForm.hrsicu01.className="ReadOnly";
      document.AddForm.hrsicu01.readOnly= true;
      document.AddForm.hrsicu02.focus();
    }
    if (ccubed=="1") {  // Is there an CCU Bed Type
      document.AddForm.hrsicu02.className="JustifyLeft Integer";
      document.AddForm.hrsicu02.readOnly= false;
    } else{
      document.AddForm.hrsicu02.className="ReadOnly";
      document.AddForm.hrsicu02.readOnly= true;
      document.AddForm.hrsicu03.focus();
    }
    if (document.AddForm.hrsicu07!=undefined) {
      if (scnbed=="1") {  // Is there a SCN Bed Type
        document.AddForm.hrsicu07.className="JustifyLeft Integer";
        document.AddForm.hrsicu07.readOnly= false;
      } else {
        document.AddForm.hrsicu07.className="ReadOnly";
        document.AddForm.hrsicu07.readOnly= true;
      }
    }
    if (((icubed=="0") && (ccubed=="1"))||((icubed=="1") && (ccubed=="0"))||
       ((icubed=="1") && (ccubed=="1"))) {
      document.AddForm.hrsicu03.className="JustifyLeft Integer";
      document.AddForm.hrsicu03.readOnly= false;

      if (document.AddForm.hrsicu15 != undefined) {
        document.AddForm.hrsicu15.className="Integer";
        document.AddForm.hrsicu15.readOnly= false;
      }
    } else {
      document.AddForm.hrsicu03.className="ReadOnly";
      document.AddForm.hrsicu03.readOnly=true;

      if (document.AddForm.hrsicu15 != undefined) {
       document.AddForm.hrsicu15.className="ReadOnly";
       document.AddForm.hrsicu15.readOnly=true;
      }

      if (document.AddForm.hrsicu05!=undefined) {
        document.AddForm.hrsicu05.focus();
      } else {
        document.AddForm.hrsicu06.focus();
      }
    }
  } 
}
function SetICUPrivate() {
  icu=document.AddForm.usingicu.value;
  icubed=document.AddForm.icubedtp.value;
  ccubed=document.AddForm.ccubedtp.value;
  if (icu=="1") {   // Doing check for ICU Bed Type
    if (icubed=="1") {  // Is there an ICU Bed Type
      document.AddForm.hrsicu01.className="JustifyLeft Integer";
      document.AddForm.hrsicu01.readOnly= false;
    } else{
      document.AddForm.hrsicu01.className="ReadOnly";
      document.AddForm.hrsicu01.readOnly= true;
      document.AddForm.hrsicu08.focus();
    }
    if (ccubed=="1") {  // Is there an CCU Bed Type
      document.AddForm.hrsicu02.className="JustifyLeft Integer";
      document.AddForm.hrsicu02.readOnly= false;
    } else{
      document.AddForm.hrsicu02.className="ReadOnly";
      document.AddForm.hrsicu02.readOnly= true;
    }
    if (((icubed=="0") && (ccubed=="1"))||((icubed=="1") && (ccubed=="0"))||
       ((icubed=="1") && (ccubed=="1"))) {
      document.AddForm.hrsicu03.className="JustifyLeft Integer";
      document.AddForm.hrsicu03.readOnly= false;

      if (document.AddForm.hrsicu15 != undefined) {
        document.AddForm.hrsicu15.className="JustifyLeft Integer";
        document.AddForm.hrsicu15.readOnly= false;
      }
    } else {
      document.AddForm.hrsicu03.className="ReadOnly";
      document.AddForm.hrsicu03.readOnly= true;

      if (document.AddForm.hrsicu15 != undefined) {
        document.AddForm.hrsicu15.className="ReadOnly";
        document.AddForm.hrsicu15.readOnly= true;
      }
    }
  } 
}
function SetICUkids() {
  icu=document.AddForm.usingicu.value;
  icubed=document.AddForm.icubedtp.value;
  ncubed=document.AddForm.ncubedtp.value;
  if (icu=="1") {   // Doing check for ICU Bed Type
    if (icubed=="1") {  // Is there an ICU Bed Type
      document.AddForm.hrsicu01.className="JustifyLeft Integer";
      document.AddForm.hrsicu01.readOnly= false;
    } else{
      document.AddForm.hrsicu01.className="ReadOnly";
      document.AddForm.hrsicu01.readOnly= true;
      document.AddForm.hrsicu07.focus();
    }
    if (ncubed=="1") {  // Is there an NICU Bed Type
      document.AddForm.hrsicu07.className="JustifyLeft Integer";
      document.AddForm.hrsicu07.readOnly= false;
    } else{
      document.AddForm.hrsicu07.className="ReadOnly";
      document.AddForm.hrsicu07.readOnly= true;
    }
    if (((icubed=="0") && (ncubed=="1"))||((icubed=="1") && (ncubed=="0"))||
       ((icubed=="1") && (ncubed=="1"))) {
      document.AddForm.hrsicu03.className="JustifyLeft Integer";
      document.AddForm.hrsicu03.readOnly= false;
    } else {
       document.AddForm.hrsicu03.className="ReadOnly";
       document.AddForm.hrsicu03.readOnly= true;
       document.AddForm.hrsicu06.focus();
    }
  } 
}
//
// If either ICU hrs or CCU hrs are not readonly then NIV set!
// If both ICU & CCU hrs are readonly then will check if under 10 days
//
function Cpap(theform) {
  icu=theform.usingicu.value; // Doing ICU validating 
  icubed=theform.icubedtp.value;
  ccubed=theform.ccubedtp.value;
  stateflg=theform.stateflg.value;
  usngcpap=theform.usngcpap.value;

  if (stateflg!="3") return;  // Only for Victoria       

  if (icu=="1") {   // Doing ICU Checks
    if ((icubed=="1") || (ccubed=="1")) {  // Is there an ICU or CCU Bed Type
      theform.hrsicu10.className="JustifyLeft Integer";
      theform.hrsicu10.readOnly= false;
      return;  
    }
    // Will only do this check if above criteria not set
    if (usngcpap=="1") {  // Is flag set ? if so then patient is under 10 days
      theform.hrsicu10.className="JustifyLeft Integer";
      theform.hrsicu10.readOnly= false;
    } else{
      theform.hrsicu10.className="ReadOnly";
      theform.hrsicu10.readOnly= true;
    }
  }
}
//
// If either ICU hrs or NICU hrs are not readonly then NIV set!
// If both ICU & NICU hrs are readonly then will check if under 10 days
//
function CpapKids(theform) {
  icu=theform.usingicu.value; // Doing ICU validating 
  icubed=theform.icubedtp.value;
  ncubed=theform.ncubedtp.value;
  stateflg=theform.stateflg.value;
  usngcpap=theform.usngcpap.value;

  if (stateflg!="3") return;  // Only for Victoria       

  if (icu=="1") {   // Doing ICU Checks
    if ((icubed=="1") || (ncubed=="1")) {  // Is there an ICU or NCU Bed Type
      theform.hrsicu10.className="JustifyLeft Integer";
      theform.hrsicu10.readOnly= false;
      return;  
    }
    // Will only do this check if above criteria not set
    if (usngcpap=="1") {  // Is flag set ? if so then patient is under 10 days
      theform.hrsicu10.className="JustifyLeft Integer";
      theform.hrsicu10.readOnly= false;
    } else{
      theform.hrsicu10.className="ReadOnly";
      theform.hrsicu10.readOnly= true;
    }
  }
}
function ValidateAss(theform) {
  los=theform.losofsty.value - 0; // Convert LOS to Numeric
  icu=theform.hrsicu01.value - 0; // Convert ICU hrsto Numeric
  ccu=theform.hrsicu02.value - 0; // Convert CCU to Numeric
  mv=theform.hrsicu03.value - 0; // Convert MV to Numeric
  niv=theform.hrsicu10.value - 0; // Convert NIV to Numeric 
  icutot=icu + ccu;   // Value in Hrs
  mechtot=mv + niv;   // Value in Hrs
  if (icu<0){
    alert("ICU Hours cannot be negative.");
    return false;
  }
  if (ccu<0){
    alert("CCU Hours cannot be negative.");
    return false;
  }
  if (mv<0){ 
    alert("Mechanical Ventilation Hours cannot be negative.");
    return false;
  } 
  if (niv<0){
    alert("Non Invasive Ventilation Hours cannot be negative.");
    return false;
  }
  if (icutot > los) {
    Continue=confirm("Hours of ICU and CCU cannot be greater than total stay" +
          " in hospital.\n\n Ok to proceed?");
    if (!Continue) { return false ;; }
  } 
  if (mechtot > los) {
    Continue=confirm("Hours of Mechanical Ventilation and Non Invasive Ventilation\n" +
          "cannot be greater than total stay in hospital.\n\n Ok to proceed?");
    if (!Continue) { return false ;; }
  } 
  if (mechtot > icutot) {
    Continue=confirm("Hours of Mechanical Ventilation and Non Invasive Ventilation\n" +
          "cannot be greater than total stay in ICU and CCU.\n\n Ok to proceed?");
    if (!Continue) { return false ;; }
  } 
  return true;
}
function ValidateAssKids(theform) {
  los=theform.losofsty.value - 0; // Convert LOS to Numeric
  icu=theform.hrsicu01.value - 0; // Convert ICU hrsto Numeric
  nicu=theform.hrsicu07.value - 0; // Convert NICU to Numeric
  mv=theform.hrsicu03.value - 0; // Convert MV to Numeric
  niv=theform.hrsicu10.value - 0; // Convert NIV to Numeric 
  icutot=icu + nicu;   // Value in hrs
  mechtot=mv + niv;    // Value in hrs 
  if (icutot > los) {
    alert("Hours of ICU and NICU cannot be greater than total stay" +
          " in hospital.");
    return false;
  } 
  if (mechtot > los) {
    Continue=confirm("Hours of Mechanical Ventilation and Non Invasive Ventilation\n" +
          "cannot be greater than total stay in hospital.\n\n Ok to proceed?");
    if (!Continue) { return false ;; }
  } 
  if (mechtot > icutot) {
    Continue=confirm("Hours of Mechanical Ventilation and Non Invasive Ventilation\n" +
          "cannot be greater than total stay in ICU and CCU.\n\n Ok to proceed?");
    if (!Continue) { return false ;; }
  } 
  return true;
}
function SendDataKids() {
  if (!ValidateAssKids(AddForm)) { return; }
  if (parent.document.UpdateForm!=undefined) {
    parent.document.UpdateForm.hrsicu01.value=document.AddForm.hrsicu01.value;
    parent.document.UpdateForm.hrsicu03.value=document.AddForm.hrsicu03.value;
    parent.document.UpdateForm.hrsicu07.value=document.AddForm.hrsicu07.value;
    parent.document.UpdateForm.hrsicu10.value=document.AddForm.hrsicu10.value;
    i=document.AddForm.hrsicu06.selectedIndex;
    parent.document.UpdateForm.hrsicu06.selectedIndex=i;
    ind=document.AddForm.wghtindc.value;
    if (ind=="1") {
      parent.document.UpdateForm.hrsicu04.value=document.AddForm.hrsicu04.value;
    }
  }
  SubmitHiddenNew(AddForm);
//  setTimeout('DFrameExit()',1000); 
}
function SubmitAss() {
  if (!ValidateAss(AddForm)) { return; }
  SubmitFormNew();
}
function SubmitAssPrivate() {
  if (!ValidateAss(AddForm)) { return; }
    if(document.AddForm.d_ptmas031!=undefined) {
      if(document.AddForm.d_ptmas031.checked==true) {
        document.AddForm.ptmas031.value="1";
      } else {
        document.AddForm.ptmas031.value="0";
      }
    }
    SubmitFormNew();
}
function SubmitAssWahealth() {
  if (!ValidateAss(AddForm)) { return; }
    if(document.AddForm.d_ptmas031!=undefined) {
      if(document.AddForm.d_ptmas031.checked==true) {
        document.AddForm.ptmas031.value="1";
      } else {
        document.AddForm.ptmas031.value="0";
      }
    }
    if(document.AddForm.hrsicu04!=undefined) {
      if(document.AddForm.hrsicu04.value>9000) {
        alert("Warning: Patient < 28 days and Admission weight > 9000g");
      }
    }
    SubmitForm();
}
function SubmitAssKids() {
  if (!ValidateAssKids(AddForm)) { return; }
  SubmitFormNew();
}
function SendData() {
  if (!ValidateAss(AddForm)) { return; }
  if (parent.document.UpdateForm!=undefined) {
    parent.document.UpdateForm.hrsicu01.value=document.AddForm.hrsicu01.value;
    parent.document.UpdateForm.hrsicu02.value=document.AddForm.hrsicu02.value;
    parent.document.UpdateForm.hrsicu03.value=document.AddForm.hrsicu03.value;
    parent.document.UpdateForm.hrsicu10.value=document.AddForm.hrsicu10.value;
    i=document.AddForm.hrsicu06.selectedIndex;
    parent.document.UpdateForm.hrsicu06.selectedIndex=i;
    ind=document.AddForm.wghtindc.value;
    if (ind=="1") {
      parent.document.UpdateForm.hrsicu04.value=document.AddForm.hrsicu04.value;
    }
  }
  SubmitHiddenNew(AddForm);
}
function SendDataPrivate() {
  if (!ValidateAss(AddForm)) { return; }
  if (parent.document.UpdateForm!=undefined) {
    parent.document.UpdateForm.hrsicu01.value=document.AddForm.hrsicu01.value;
    parent.document.UpdateForm.hrsicu02.value=document.AddForm.hrsicu02.value;
    parent.document.UpdateForm.hrsicu03.value=document.AddForm.hrsicu03.value;
    parent.document.UpdateForm.hrsicu10.value=document.AddForm.hrsicu10.value;
    i=document.AddForm.hrsicu08.selectedIndex;
    parent.document.UpdateForm.hrsicu08.selectedIndex=i;
    i=document.AddForm.hrsicu09.selectedIndex;
    parent.document.UpdateForm.hrsicu09.selectedIndex=i;
    ind=document.AddForm.wghtindc.value;
    if (ind=="1") {
      parent.document.UpdateForm.hrsicu04.value=document.AddForm.hrsicu04.value;
    }
  }
  if(document.AddForm.d_ptmas031!=undefined) {
    if(document.AddForm.d_ptmas031.checked==true) {
      document.AddForm.ptmas031.value="1";
    } else {
      document.AddForm.ptmas031.value="0";
    }
  }
  SubmitHidden(AddForm);
}
//
function SendDataWahealth() {
  if (!ValidateAss(AddForm)) { return; }
  if (parent.document.UpdateForm!=undefined) {
    parent.document.UpdateForm.hrsicu01.value=document.AddForm.hrsicu01.value;
    parent.document.UpdateForm.hrsicu02.value=document.AddForm.hrsicu02.value;
    parent.document.UpdateForm.hrsicu03.value=document.AddForm.hrsicu03.value;
    parent.document.UpdateForm.hrsicu07.value=document.AddForm.hrsicu07.value;
    parent.document.UpdateForm.hrsicu08.value=document.AddForm.hrsicu08.value;
    parent.document.UpdateForm.hrsicu09.value=document.AddForm.hrsicu09.value;
    parent.document.UpdateForm.hrsicu10.value=document.AddForm.hrsicu10.value;
    ind=document.AddForm.wghtindc.value;
    if (ind=="1") {
      parent.document.UpdateForm.hrsicu04.value=document.AddForm.hrsicu04.value;
    }
  if(document.AddForm.d_ptmas031!=undefined) {
    if(document.AddForm.d_ptmas031.checked==true) {
      document.AddForm.ptmas031.value="1";
    } else {
      document.AddForm.ptmas031.value="0";
    }
  }
  if ((!isWhitespace(document.AddForm.hrsicu01.value)) ||
      (!isWhitespace(document.AddForm.hrsicu02.value)) ||
      (!isWhitespace(document.AddForm.hrsicu03.value)) ||
      (!isWhitespace(document.AddForm.hrsicu07.value)) ||
      (!isWhitespace(document.AddForm.hrsicu08.value)) ||
      (!isWhitespace(document.AddForm.hrsicu09.value)) ||
      (!isWhitespace(document.AddForm.hrsicu10.value)) ||
      (!isWhitespace(document.AddForm.hrsicu12.value))) {
           parent.document.UpdateForm.assobutt.className="RedButton"; }
       else { 
           parent.document.UpdateForm.assobutt.className=""; }
  }
  SubmitHidden(AddForm);
}
//
//
// Note the following function will set exprtenc to "E" which will set 
// the Export Encoder to be executed in the server
//
function Export() {
  document.UpdateForm.mripr101.className=""; // Don't check for this field
  document.UpdateForm.mricd101.className=""; // Don't check for this field
  document.UpdateForm.updttype.value="E";
  if (validateMandatory(UpdateForm)) {
    setPDSCookie();
    UpdateForm.target="PopUpFrame"
    if(VariableNameExists("PathUncodedDischargeList")) { 
     SetCookie("UncodedDischargeList",PathUncodedDischargeList);
    }
    UpdateForm.submit();
  }
}
function Encoder() {
  document.MoveForm.reportno.value="7";
  document.MoveForm.updttype.value="I";
  document.MoveForm.encoderf.value="1";
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.MoveForm.redirect.value=trim(document.MoveForm.redirect.value) +
                                       "&runautog=1";
    }
  }
  if(VariableNameExists("PathUncodedDischargeList")) {
     SetCookie("UncodedDischargeList",PathUncodedDischargeList);
    }
  SubmitHidden(MoveForm) 
}
function CheckExclsMech(mech,niv) {
  if (stateflg!="1") return;  // Only for NZ 
  if ((!isWhitespace(niv.value)) && 
      (!isWhitespace(mech.value))) {
     ans=confirm("Hrs Mech and Hrs NIV must be mutually exclusive!\n" +
           "Value already found for NIV Hrs. Ok to proceed?");  
     if(ans){
     return;}
     mech.value="";
  }
}
function CheckExclsNiv(mech,niv) {
  if (stateflg!="1") return;  // Only for NZ 
  if ((!isWhitespace(niv.value)) && 
      (!isWhitespace(mech.value))) {
     ans=confirm("Hrs Mech and Hrs NIV must be mutually exclusive!\n" +
           "Value already found for Mech Hrs. Ok to proceed?");  
     if(ans){
     return;}
     niv.value="";
  }
}
function ExtraMVOption(urnumber,admissno) {
 parent.location.href="patweb78.pbl?reportno=05&template=001&urnumber="+urnumber+"&admissno="+admissno
 DFrameExit()
}

function DisExtraMV() {
  ind=document.AddForm.ptcnmvhc.value;
  if (ind=="1") {
    ExtraMVField.innerHTML=document.getElementById('ExtraMVdisplay').innerHTML;
    if ( document.AddForm.mvrecord.value=="1" ) {
      document.getElementById('mvbutton').className="RedButton";
    } else {
      document.getElementById('mvbutton').className="";
    }
  } else {
    ExtraMVField.innerHTML="";
  }
}
function AMHCCOption() {
  ind=document.AddForm.amhevent.value;
  if (ind=="1") {
  linkurl="mrtweb02.pbl?reportno=1&template=6" +
          "&urnumber=" + document.AddForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.AddForm.admissno.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,0,Left,900,400)
  } else {
    alert("Option is not available for Non-Mental Health events");
    return;
  }
}
//========================================================================
//   Report 5 
//========================================================================
function clearFrame() {
  document.UpdateForm.oldurnum.value="";
  document.UpdateForm.newurnum.value="";
  document.UpdateForm.oldpname.value="";
  document.UpdateForm.newpname.value="";
  document.UpdateForm.oldbdate.value="";
  document.UpdateForm.newbdate.value="";
  document.UpdateForm.oldptage.value="";
  document.UpdateForm.newptage.value="";
  document.UpdateForm.oldptsex.value="";
  document.UpdateForm.newptsex.value="";
  document.UpdateForm.submit();
  }
function SubForm() {
 var urLiteral="U/R";
 if (UpdateForm.ptcnhdps != undefined) {
    if (UpdateForm.ptcnhdps.value=="1") {
       urLiteral="NHI";
    } else {
       urLiteral="U/R"; }
 } 
 if (UpdateForm.oldurnum.value=="") {
    alert ("Old " + urLiteral + " Number is blank.")
    return }
 if (UpdateForm.newurnum.value=="") {
    alert ("New " + urLiteral + " Number is blank.")
    return }
 document.UpdateForm.updttype.value="U";
 document.UpdateForm.redirect.value="patweb98.pbl?reportno=1&template=1"+
         "&urnumber=" + document.UpdateForm.newurnum.value.replace(/ /g,"+")
 document.UpdateForm.submit(); 
 }
function SubFormSTV() {
 if (UpdateForm.oldurnum.value=="") {
   alert ("Old U/R Number is blank.")
   return}
 if (UpdateForm.newurnum.value=="") {
   alert ("New U/R Number is blank.")
   return}
 document.UpdateForm.updttype.value="U";
 document.UpdateForm.redirect.value="mrtweb01.pbl?reportno=9&template=4"+
         "&urnumber=" + document.UpdateForm.newurnum.value.replace(/ /g,"+")
 document.UpdateForm.submit(); 
 }
function ValidatePat() {
 var urLiteral="U/R";
 if (UpdateForm.ptcnhdps != undefined) {
    if (UpdateForm.ptcnhdps.value=="1") {
       urLiteral="NHI";
    } else {
       urLiteral="U/R"; }
 }
 if (UpdateForm.oldurnum.value==UpdateForm.newurnum.value) {
    alert ("Both " + urLiteral + " Numbers are the same.")
    return }
 if (UpdateForm.oldpname.value!=UpdateForm.newpname.value) {

   ans=confirm("Warning Both Names are NOT the same.\n\n Ok to Proceed ?")
   if (!ans) { return } }

 if (UpdateForm.oldbdate.value!=UpdateForm.newbdate.value) {
   ans=confirm("Warning Both Date of Birth are NOT the same. \n\n Ok to Proceed ?")
   if (!ans) { return } }

 if (UpdateForm.oldptsex.value!=UpdateForm.newptsex.value) {
   ans=confirm("Warning Both Sexes are NOT the same. \n\n Ok to Proceed ?")
   if (!ans) { return } }

  document.UpdateForm.submit();
 }
function UpdateUR1() {
 p=document.UpdateForm
 document.UpdateForm.oldurnum.value = document.UpdateForm.dum1.value 
 if (p.pce1.value==1)
  { alert("Patient is Deceased") }
  }
function UpdateUR2() {
 p=document.UpdateForm
 document.UpdateForm.newurnum.value = document.UpdateForm.dum2.value 
 if (p.pce2.value==1)
  { alert("Patient is Deceased") }
  }
function LoadRecord1(Oldur) {
  document.UpdateForm.oldurnum.value=Oldur;
  validateRecordID1();
}
function LoadRecord2(Newur) {
  document.UpdateForm.newurnum.value=Newur
  validateRecordID2();
}
function SetLoad() {
  if(!isWhitespace(document.UpdateForm.oldur.value)) {
    document.UpdateForm.oldurnum.value=document.UpdateForm.oldur.value;
    validateRecordID1();
  }
  if(!isWhitespace(document.UpdateForm.newur.value)) {
    document.UpdateForm.newurnum.value=document.UpdateForm.newur.value
    validateRecordID2();
  }
  document.UpdateForm.oldurnum.focus();
}
function validateRecordID1() {
 p=document.UpdateForm
 var urLiteral="U/R";
 if (p.ptcnhdps != undefined) {
    if (p.ptcnhdps.value=="1") {
       urLiteral="NHI";
    } else {
       urLiteral="U/R"; }
 }
 if(p.oldurnum.value!="") {
   FormatURScanMrtLf(p.oldurnum);
   LenUR=p.oldurnum.value.length
   if (LenUR < 9) { 
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.oldurnum.value=Blanks + p.oldurnum.value }
   validateCode(28,p.oldurnum,p.oldpname,UpdateUR1,p.oldptsex,p.oldbdate,
                p.pce1,p.dum1,p.admissn1,p.da1,p.typ1,p.oldptage)
   validateCode(13,p.oldurnum,p.dummy,p.dummy,p.dummy,p.dummy,
                p.dum1,p.dummy,p.dummy,p.dummy,p.dummy,p.dummy,p.dummy,
                p.dummy,p.dummy,p.dummy,p.dummy,p.merged)
   }
   if (p.merged.value!="1") {
     alert("Warning " + urLiteral + " has not been merged yet!"); }
   else {
     alert("This " + urLiteral + " has been merged with " +
            urLiteral + " - " + p.dum1.value); }
}
function validateRecordID2() {
 p=document.UpdateForm
 if(p.newurnum.value!="") {
   FormatURScanMrtLf(p.newurnum);
   LenUR=p.newurnum.value.length
   if (LenUR < 9) { 
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.newurnum.value=Blanks + p.newurnum.value }
   validateCode(13,p.newurnum,p.newpname,UpdateUR2,p.newptsex,p.newbdate,p.pce2,p.dum2,p.admissn2,p.da2,p.typ2,p.newptage) }
}

function cancelBack(e)
{
  e = (e)? e : window.event;
  var key = (window.event)? e.keyCode: e.which;

  // Stop event propagation on keystrokes: Backspace or (Alt + left)
  if (key == 8 || (e.altKey && (key == 37)))
  {

    if (key == 8){
      if (document.getElementById("oldurnum")!=null) {
        if (document.activeElement.name=="oldurnum") {
          return;
        }
      }

      if (document.getElementById("newurnum")!=null) {
        if (document.activeElement.name=="newurnum") {
          return;
        }
      }

      var inputs = document.getElementsByTagName("input");
      for (var i = 0; i < inputs.length; i++) {
        if(inputs[i].id.indexOf("newvl") == 0) {
          if (document.activeElement.id==inputs[i].id) {
            return;
          }
        }
      }

    }

    if (e.preventDefault)
    {
      e.preventDefault();
      e.stopPropagation();
    }
    else
    {
      e.cancelBubble = true;
      e.returnValue = false;
    }
  }
}
function stopPropBack()
{
  if (typeof document.addEventListener != 'undefined') {
    document.addEventListener('keydown', cancelBack, false);
  }
  else if (typeof document.attachEvent != 'undefined') {
    document.attachEvent('onkeydown', cancelBack);
  }
  else {
    if (document.onkeydown != null) {
      var oldOnKeyDown = document.onkeydown;
      document.onkeydown = function (e) {
        oldOnKeyDown(e);
        cancelBack(e);
      };
    }
    else {
      document.onkeydown = cancelBack;
    }
  }
}
function WebInterface() {
  var urlnode;
  var msgnode;
  var inputnode;
  var outputnode;
  var sessionnode;
  var usernode;
  var wcFrame;

  var selectNodes = function (node, path) { return node.selectNodes(path) }
  var getText = function (node) { return node ? node.text : '' }
  var selectSingleNode = function (node, path) { return node.selectSingleNode(path) }
  // IE11 reports appName of Netscape so checking for not having Trident in the appVersion to not allow IE into this code
  if ((navigator.userAgent.indexOf("Trident/7.0") == -1) && ((navigator.appName == 'Netscape') || (navigator.appName == 'Opera'))) {
      getText = function (node) { return node ? node.textContent : '' };
      xpathEvaluator = new XPathEvaluator();
      selectSingleNode = function (node, path) {
          var result = xpathEvaluator.evaluate(path, node, null, XPathResult.FIRST_ORDERED_NODE_TYPE, null);
          return result ? result.singleNodeValue : null;
      }
      selectNodes = function (node, path) {
          var result = xpathEvaluator.evaluate(path, node, null, XPathResult.ORDERED_NODE_ITERATOR_TYPE, null);
          var a = new Array;
          if (result != null) {
              var elt = result.iterateNext();
              while (elt) {
                  a.push(elt);
                  elt = result.iterateNext();
              }
          }
          return a;
      }
  }
  //Initialize the HTTP request object.
  if (window.XMLHttpRequest) {
      //Browsers implementing XMLHttpRequest can just instantiate it here.
      xrequest = new XMLHttpRequest();
  } else {
      //Older browsers not implementing XMLHttpRequest are stuck here (IE 6.0).
      var xmlvers = ["MSXML2.XmlHttp.5.0", "MSXML2.XmlHttp.4.0", "MSXML2.XmlHttp.3.0", "MSXML2.XmlHttp", "Microsoft.XmlHttp"];
      for (var i = 0; i < xmlvers.length; i++) {
          try {
              xrequest = new ActiveXObject(xmlvers[i]);
              break;
          }
          catch (err) { }
      }
  }
  ipkOnload();
}

function ipkOnload() {
  urlnode = document.getElementById("3MURL");
  msgnode = document.getElementById("3MMessage");
  inputnode = document.getElementById("3MInput");
  outputnode = document.getElementById("3MOutput");
  sessionnode = document.getElementById("3MSession");
  usernode = document.getElementById("3MUser");
  wcFrame = document.getElementById("wcFrame");

  urlnode.value = trim(urlnode.value);
  // A unique session name is required.
  sessionnode.value = trim(sessionnode.value) + "_" + Math.floor(Math.random() * 999);

  // A unique username is strongly encouraged.
  SendUniqueUser=true;                        // Send unique user id
  if(VariableNameExists('CodefinderUniqueUser')) {
     if(CodefinderUniqueUser==false) {
       SendUniqueUser=false;                   // Not sending unique user id
     }
  }

  if(SendUniqueUser == true) {
    usernode.value = trim(usernode.value) + "_" + 
                   Math.floor(Math.random() * 999);
  } else {
    usernode.value = trim(usernode.value) + "_000";
  }
}

function HandleError(sStr) {
  msgnode.value = sStr;
  msgnode.style.color = "red";
  alert(msgnode.value);
}

function btnWritePacket(sInPacket) {
  p=document.getElementById('wcFrame');
  outputnode.value = "";
  try {
    if(p.contentWindow.WcWritePacket(sInPacket, ReadPacket)) {
      msgnode.value = "Input packet written to application";
      msgnode.style.color = "black";
      window.focus;
    }
  } catch(err) {
    HandleError(err.message);
  }
}

function ReadPacket() {
  p=document.getElementById('wcFrame');
  try {
    outputnode.value = p.contentWindow.WcReadPacket();
  } catch(err) {
    HandleError(err.message);
  }
  msgnode.value = "Output packet read from application";
  msgnode.style.color = "black";
  window.focus();
  btnReleaseInstance();
}
  
function btnBatchPacket (sInPacket) {
  p=document.getElementById('wcFrame');
  outputnode.value = "";
  try {
    outputnode.value = p.contentWindow.WcBatchPacket(sInPacket);
    if(outputnode.value) {
      msgnode.value = "Packet has been batched";
      msgnode.style.color = "black";
      window.focus;
    }
  } catch(err) {
    HandleError(err.message);
  }
}

function CRSClosed() {
  btnReleaseInstance();
}

function CRSInitialized() {
  p=document.getElementById('wcFrame');
  p.contentWindow.WcAddErrorHandler(HandleError);
      msgnode.value = "Initialized 3M CRS instance";
      msgnode.style.color = "black";
      window.focus();
  btnWritePacket(inputnode.value);
}

var retry_cnt=0;
function initializeCRS() {
  p=document.getElementById('wcFrame');

  if (retry_cnt >= 10) {
    alert("Web Codefinder window failed to initialize.\n\n" +
          "Please ensure that the 3M Web Codefinder product has been " +
          "correctly installed and your web server configured accordingly.");
    return;
  }

  // make sure IFrame finishes loading before calling WcInitInstance2()
  if (p.contentWindow.WcInitInstance2 == undefined) {
    retry_cnt++;
    setTimeout(initializeCRS, 500);  // sleep for a bit
    return;
  }

  try {
    if (p.contentWindow.WcInitInstance2(usernode.value, sessionnode.value, urlnode.value, CRSClosed, CRSInitialized)) {
    }
  } catch(err) {
    HandleError(err.message);
  }
}

function btnInitInstance() {
  var urlloc=urlnode.value + '/interface/wcintf.html';
  if (urlloc !=
    document.getElementById('wcFrame').contentWindow.document.location.href) {
    document.getElementById('wcFrame').src = urlloc;
  }
  initializeCRS();
}

function btnReleaseInstance() {
  try {
    document.getElementById('wcFrame').contentWindow.WcReleaseInstance();
    EncInputFileCleanup();
  } catch (err) {
    HandleError(err.message);
  }
  msgnode.value = "Released 3M CRS instance";
  msgnode.style.color = "black";
  window.focus();
}

function EncInputFileCleanup(RetFuncTrue) {
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=10&valdtype=1" +
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      if (returnValue.return_value == '0') {
        if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
          RetFuncTrue();
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (RetFuncTrue == undefined) return;

        if (returnValue.status==0) {
          if (returnValue.return_value == '0') {
            if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
              RetFuncTrue();
            }
          }
        }
      }
    );
  }
}

function EncInputFileExists(RetFuncTrue) {
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=10&valdtype=2" +
    "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
    "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      if (returnValue.return_value == '1') {
        if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
          RetFuncTrue();
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          if (returnValue.return_value == '1') {
            if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
              RetFuncTrue();
            }
          }
        }
      }
    );
  }
}
///////////////////
function TurboExport() {
  document.UpdateForm.mripr101.className=""; // Don't check for this field
  document.UpdateForm.mricd101.className=""; // Don't check for this field
  document.UpdateForm.updttype.value="M";
  if (validateMandatory(UpdateForm)) {
    UpdateForm.target="PopUpFrame"
    UpdateForm.submit();
  }
}
function TurboLoad() {
  document.MoveForm.reportno.value="7";
  document.MoveForm.updttype.value="N";
  document.MoveForm.encoderf.value="1";
  SubmitHidden(MoveForm)
}

function ChkHoldInv() {
 if(document.UpdateForm.invchold.value=="1"){
   InvOnHold.innerHTML=DispOnHold.innerHTML;
   InvReasonHold1.innerHTML=DispHoldDes1.innerHTML;
   InvReasonHold2.innerHTML=DispHoldDes2.innerHTML;
 } else {
   InvOnHold.innerHTML="";
   InvReasonHold1.innerHTML="";
   InvReasonHold2.innerHTML="";
 }
}
function OnHold() {
  linkurl="patweb75.pbl?reportno=16&template=002" +
          "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&hinvcode=" + document.UpdateForm.hinvcode.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,100,Left,700,300)
}
function showBabyFields(theForm) {
  if(theForm.ptmis012.value.substr(18,2)!="70") {
    return;
  }
//
  document.getElementById("WeightLabel").innerHTML="";
  document.getElementById("WeightField").innerHTML="";
//
  document.getElementById("babylabel1").innerHTML=
  document.getElementById("showbabylabel1").innerHTML
  document.getElementById("babyfield1").innerHTML=
  document.getElementById("showbabyfield1").innerHTML
//
  document.getElementById("babylabel2").innerHTML=
  document.getElementById("showbabylabel2").innerHTML
  document.getElementById("babyfield2").innerHTML=
  document.getElementById("showbabyfield2").innerHTML
//
  document.getElementById("babylabel3").innerHTML=
  document.getElementById("showbabylabel3").innerHTML
  document.getElementById("babyfield3").innerHTML=
  document.getElementById("showbabyfield3").innerHTML
//
  if(theForm.ptmis012.value.substr(32,1)=="M") {
    theForm.ptmis036.className="Mandatory";
    theForm.ptmis042.className="SelectBig Mandatory";
    theForm.ptmis051.className="Number Mandatory";
  }
  if(theForm.ptmis036!=undefined && theForm.d_ptmis036!=undefined) {
    for(var i=0;i<theForm.ptmis036.length;i++) {
      if(theForm.ptmis036.options[i].value==
          theForm.d_ptmis036.value) {
          theForm.ptmis036.selectedIndex=i;
      }
    }
  }
}
function setPDSCookie() {
  if(document.UpdateForm.admissno==undefined ) {
    return;
  }
  if(document.UpdateForm.d_ptecd008==undefined) {
    return;
  }
  if(document.UpdateForm.ptecd008==undefined) {
    return;
  }
  SetCookie("PDSDefault",document.UpdateForm.admissno.value,"30")
}
function getPSDCookie() {
  if(document.UpdateForm.admissno==undefined) {
    return;
  }
  if(document.UpdateForm.d_ptecd008==undefined) {
    return;
  }
  if(document.UpdateForm.ptecd008==undefined) {
    return;
  }
  if(GetCookieData('PDSDefault')=="unknown") {
    return;
  }
  PDS=GetCookieData('PDSDefault');
  ExpireCookiePath("PDSDefault");
  if(isWhitespace(document.UpdateForm.d_ptecd008.value)) {
    return;
  }
  if(trim(PDS) != trim(document.UpdateForm.admissno.value)) {
    return;
  }
  for (var i =0 ; i < document.UpdateForm.ptecd008.length; i++) {
  if (document.UpdateForm.ptecd008.options[i].value.substr(0,3)==
      document.UpdateForm.d_ptecd008.value.substr(0,3)) {
      document.UpdateForm.ptecd008.selectedIndex=i } };
}
//========================================================================
// Operation : Check a each form input field
//             Mandatory Fields Defined with class=Mandatory
//             title=string describing the field
//             excluding coding array fields with name trailing last 3
//             characters within the range of 101 to 199
// Example   :
// <select name=pattitle tabindex=1 class=Mandatory title="Patient Title">
//
//========================================================================
//
//
function validateMandatoryNoRecordCoding(theForm) {
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    if (el.title.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    if (el.title.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    if (el.className.match(/Mandatory/)) {
      var fldName = el.name
      var fldNox = fldName.substr(5,3)
      var fldNo = parseInt(fldNox,10)
      if (Number.isInteger(fldNo)) {
        if (fldNo < 101 || fldNo > 199) {
          if (!checkString(el,el.title)) {
            return false
          }
        }
      }
      else {
        if (!checkString(el,el.title)) {
          return false
        }
      }
    }
  }
  return true;
}
