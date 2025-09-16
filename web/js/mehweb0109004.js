//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0109004.js
//
// Written   : 13.01.2006 J.Tan 
//
// Function  : Functions Used in mehweb0109004
//
// Version   :
//
//========================================================================
function InitRef() {
  if(document.getElementById("mhcnrdhb").value=="1") {
     ResDHB.innerHTML=DHBCode.innerHTML;
  } else {
     ResDHB.innerHTML=""; 
  }

  if (isWhitespace(UpdateForm.mhhls007.value)) {
    return;}
  var i=document.UpdateForm.mhhls007.selectedIndex;
  var ind=document.UpdateForm.mhhls007.options[i].value.substring(9,10)
  if (ind=="A") {
    ExtOrg.innerHTML=OrgnACode.innerHTML;
  }
  if (ind=="B") {
     ExtOrg.innerHTML=OrgnBCode.innerHTML;}
  if (ind=="P") {
     ExtOrg.innerHTML=OrgnPCode.innerHTML;}
  if (ind=="G") {
     ExtOrg.innerHTML=HCPCode.innerHTML;}
  if (ind!="A"&&ind!="B"&&ind!="P"&&ind!="G"){
      ExtOrg.innerHTML=""; }

  if(document.UpdateForm.nodriver.value==1) {
      UtdDate.innerHTML=CantDriv.innerHTML;
  } else {
      UtdDate.innerHTML="";
  }

  if (document.UpdateForm.prisoner.value==1) {
      SenDate.innerHTML=Sentence.innerHTML;
  } else {
      SenDate.innerHTML="";
  }
}

function DispRef() {
  if (isWhitespace(UpdateForm.mhhls007.value)) {
    return;
  } else {
    var i=document.UpdateForm.mhhls007.selectedIndex;
    var ind=document.UpdateForm.mhhls007.options[i].value.substring(9,10)
    if (ind=="A") {
      ExtOrg.innerHTML=OrgnACode.innerHTML;
      document.UpdateForm.mhhls016.value=" ";
      document.UpdateForm.mhhls016.focus();
    } else {
      if (ind=="B") {
        ExtOrg.innerHTML=OrgnBCode.innerHTML;
        document.UpdateForm.mhhls016.value=" ";
        document.UpdateForm.mhhls016.focus();
      } else {
        if (ind=="P") {
        ExtOrg.innerHTML=OrgnPCode.innerHTML;
        document.UpdateForm.mhhls016.value=" ";
        document.UpdateForm.mhhls016.focus();
        } else {
          if (ind=="G") {
            ExtOrg.innerHTML=HCPCode.innerHTML;
            GetRef();
          } else {
            ExtOrg.innerHTML="";
            GetRef();
          }
        }
      }
    }
  }
}

function DispUdate() {
  if(document.UpdateForm.refnodrv.checked == true) {
    UtdDate.innerHTML=CantDriv.innerHTML;
  } else {
    UtdDate.innerHTML="";
  }
}

function DispSdate() {
  if(document.UpdateForm.refpris1.checked == true) {
    SenDate.innerHTML=Sentence.innerHTML;
  } else {
    SenDate.innerHTML="";
  }
}

function GetRef() {
  var i=document.UpdateForm.mhhls007.selectedIndex;
  var ind=document.UpdateForm.mhhls007.options[i].value.substring(9,10)
  if (ind=="G" || ind=="N" || ind=="E" || ind=="R" || ind=="A" || 
      ind=="B" || ind=="P") {
    var serverURL="../cgi-bin/mehweb01.pbl?reportno=11" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&srefcode=" + UpdateForm.mhhls007.value.replace(/ /g,"+")

    if (ind=="G") {
      if (trim(UpdateForm.mhhls017.value)=="") {
        UpdateForm.mhhls017.value=UpdateForm.defgpcod.value;
        UpdateForm.doctnam1.value=UpdateForm.defgpnam.value;
      }
      serverURL = serverURL +
                  "&valdcode=" + UpdateForm.mhhls017.value.replace(/ /g,"+")
    }

    if (ind=="A" || ind=="B" || ind=="P") {
      serverURL = serverURL +
                  "&valdcode=" + UpdateForm.mhhls016.value.replace(/ /g,"+")
    }

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
//    document.UpdateForm.mhhls008.value=trim(ReturnValue[0]);
//    document.UpdateForm.mhhls009.value=trim(ReturnValue[1]);
//    document.UpdateForm.mhhls010.value=trim(ReturnValue[2]);
//    document.UpdateForm.mhhls011.value=trim(ReturnValue[3]);
//    document.UpdateForm.mhhls012.value=trim(ReturnValue[4]);
//    document.UpdateForm.mhhls013.value=trim(ReturnValue[5]);
//    document.UpdateForm.mhhls014.value=trim(ReturnValue[6]);
    }
  }
}

function validateTime(dateField,timeField) {

  if (!checkDate(dateField,dateField.title)) {
    return false;
  }
  if (!checkTime(timeField,timeField.title)) {
    return false;
  }

  SetCurrentDateTimeNoFocus(UpdateForm.currdate,UpdateForm.currtime);
  if (!isWhitespace(dateField.value) &
      !isWhitespace(timeField.value) &
      !isWhitespace(document.UpdateForm.currdate.value) &
      !isWhitespace(document.UpdateForm.currtime.value)) {


    if (dateField.value ==
        document.UpdateForm.currdate.value) {

      if (timeField.value >
          document.UpdateForm.currtime.value) {
        alert(timeField.title + " cannot be in the future");
        timeField.value="";
        timeField.select();
        timeField.focus();
        return false;
      }
    }
  }
  return true;
}
