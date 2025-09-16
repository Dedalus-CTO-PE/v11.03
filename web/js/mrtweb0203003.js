//jsVersion  : V11.03.01
//========================================================================
//   Report 3  template:003 
//========================================================================
var ItemNo=100;  // Need this to be 100 as else the cgi var has to be 8 chars
function CheckPrefix(indicator,nxtfield) {
  indicator.value=indicator.value.toUpperCase()
  ind=indicator.value;
  pripre = document.UpdateForm.pripre.value;   
  seqpre = document.UpdateForm.seqpre.value;   
  compre = document.UpdateForm.compre.value; 
  asspre = document.UpdateForm.asspre.value; 
  lofpre = document.UpdateForm.lofpre.value; 
  dispre = document.UpdateForm.dispre.value; 
  oprpre = document.UpdateForm.oprpre.value; 
  morpre = document.UpdateForm.morpre.value; 
  Xprefix = "X";
  if (ind !=""){
    if ((ind == pripre)||(ind == seqpre)||(ind == compre)||
        (ind == asspre)||(ind == lofpre)||(ind == oprpre)||
        (ind == morpre)||(ind == Xprefix)) {
      setfo=UpdateForm.diopc001.value.search('[A-Z]')
      if (setfo == "0") {
        if (ind == "") {
          alert("You must enter in a valid prefix.")
          indicator.focus();
          return; }
//                                           was if (ind == "O") {
        if (ind == oprpre) {
          alert("Must use a Disease prefix!")
          indicator.focus();
          return; }
      }
      findslash=UpdateForm.diopc001.value.search('[/]')
      if (findslash == "5") {  // Have a  Morphology Code
        if (ind != morpre) {
          alert("Error Disease code must have a '" + morpre +
                "' prefix! Please change.");
          indicator.focus();
          return;
        }
      }
      if ((ind == morpre) && (findslash != "5")) {
        alert("Error Disease code cannot have a '" + morpre +
              "' prefix! Please change.");
        indicator.focus();
        return;
      }
//
// Validate the Prefix against the Disease Code
//
      var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=1" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + UpdateForm.diopc001.value.replace(/ /g,"+") +
                  "&dsprefix=" + indicator.value.replace(/ /g,"+") +
                  "&discodno=" + UpdateForm.unqcount.value.replace(/ /g,"+") 
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|")
      } else {
        indicator.select();  
      }
//      nxtfield.focus();
    } else {
      alert("Incorrect Prefix Indicator, must be either " + pripre + "," +
            seqpre + "," + compre + "," + asspre + "," + lofpre + "," +
            oprpre + "," + morpre + " or " + Xprefix);
      indicator.value="";
      indicator.focus(); 
    }
  }
}

//
// This function uses remote scripting to validate the Diagnosis Date against
// the Discharge Date. This function is executed when the procedure date is
// changed.(Update Form)
//
function VerifyDiagDateUpd(ReturnCode)
{
  if (isWhitespace(ReturnCode.value))
     return;;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=8" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value
  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0)
      ReturnValue=returnValue.return_value.split("|")
  else
  {
      ReturnCode.value="";
      ReturnCode.select();
  }
}

function AccidentDate() {
  if(document.UpdateForm.usngecod.value=="1") {
    var additreq=document.UpdateForm.addition.value;
    if ((additreq=="2")||(additreq=="6")||(additreq=="7")||(additreq=="8")||
        (additreq=="P")||(additreq=="A")) {
      AccidentLabel.innerHTML=accidentlabel.innerHTML;
    } else {
      AccidentLabel.innerHTML="";
    }
    if(document.getElementById("ptcnhdps")) {
      if(document.getElementById("ptcnhdps").value=="1") {  // NZ
        if(additreq=="P" || additreq=="A") {                // Activity or Place
           if(document.getElementById("ptecd004")) {        // Not mandatory
              document.getElementById("ptecd004").className="Date";
           }
        }
      }
    }
  }
}
function OnsetType() {
  if(document.UpdateForm.ptcnhdps.value>"0") {
      OnsetLabel.innerHTML=onsetlabel.innerHTML;
  } else {
      OnsetLabel.innerHTML="";
  }
}
function CheckOnset(onset) {
  document.UpdateForm.diopc003.readOnly=false;
  document.UpdateForm.diopc003.className="Mandatory";
  if(onset.value != "1" && onset.value != "2" && onset.value != "9") {
    if(document.UpdateForm.ptcnhdps.value=="4") {
    alert("Invalid onset type must be either a\n" +
          " 1 - Condition present at admission or \n" +
          " 2 - Condition arises during admission or \n" +
          " 9 - Unknown/uncertain");
    }
    if(document.UpdateForm.ptcnhdps.value=="5") {
    alert("Invalid onset type must be either a\n" +
          " 1 - Condition arises during admission or \n" +
          " 2 - Condition present at admission or \n" +
          " 9 - Unknown/uncertain");
    }
    if(document.UpdateForm.ptcnhdps.value=="1"|| 
       document.UpdateForm.ptcnhdps.value=="2"|| 
       document.UpdateForm.ptcnhdps.value=="3"||
       document.UpdateForm.ptcnhdps.value=="6"||
       document.UpdateForm.ptcnhdps.value=="7"||
       document.UpdateForm.ptcnhdps.value=="8"&&
      (onset.value!=1 || onset.value!=2 )) {
      alert("Invalid onset type must be either a\n" +
          " 1 - Condition arises during admission or \n" +
          " 2 - Condition present at admission ")}
    if(document.UpdateForm.ptcnhdps.value=="9") {
    alert("Invalid onset type must be either a\n" +
          " 1 - Condition arises during admission or \n" +
          " 2 - Condition present at admission or \n" +
          " 9 - Not Reported");
    }
    onset.value="";
    onset.focus;
  }
}
function DefaultOnset() {
  if(document.UpdateForm.ptcnhdps.value>"0") {
    document.UpdateForm.diopc003.readOnly=false;
    document.UpdateForm.diopc003.className="Mandatory";
    if(document.UpdateForm.dsprefix.value==document.UpdateForm.compre.value) {
      document.UpdateForm.diopc003.value="1";
    } else {
      document.UpdateForm.diopc003.value="2";
    }
  }
  if(document.UpdateForm.ptcnhdps.value=="4") {
    document.UpdateForm.diopc003.readOnly=false;
    document.UpdateForm.diopc003.className="Mandatory";
    if(document.UpdateForm.dsprefix.value==document.UpdateForm.compre.value) {
      document.UpdateForm.diopc003.value="2";
    } else {
      document.UpdateForm.diopc003.value="1";
    }
  }
}
