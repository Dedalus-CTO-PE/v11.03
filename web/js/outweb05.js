//jsVersion  : V11.03.00
//========================================================================
//------------------------------------------------------------
// Function : Ward List Search Frame
//------------------------------------------------------------
function WardListSearchFrame(ReturnCode,ReturnName) {
  PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = "../cgi-bin/patweb95.pbl?reportno=2&template=5";
  SearchFrameShow();
}
//========================================================================
//  Report 1
//  value of Height parameter changes from 235 to 250 in DFrameLink
//  and also in DFrameSubmit        by Jaideep 26/04/2001
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,450)
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.otcty001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,450)
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,400)
}
function LeavDate02(clinicid,effctdate) {
  parent.location.href="outweb05.pbl?reportno=03&template=001" +
                       "&otcli001=" + clinicid + 
                       "&otcli006=" + effctdate
  DFrameExit()
}
function Schedule02(clinicid,effctdate) {
  parent.location.href="outweb05.pbl?reportno=04&template=001" + 
                       "&otcli001=" + clinicid + 
                       "&otcli006=" + effctdate
  DFrameExit()
}
function EditClinic02() {
  SelectCode.reportno.value=2
  SelectCode.template.value=3
  SelectCode.otcli001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,260)
}
//========================================================================
//  Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,260)
}
function AddLeave03() {
  SelectCode.template.value=2
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,260)
}
function ViewClinic03() {
  LinkForm.reportno.value=2
  LinkForm.template.value=3
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(LinkForm,0,Left,700,400)
}
function AddLeave031() {
  SelectCode.template.value=2
  Left=(document.body.clientWidth-400)/2
 linkurl="outweb05.pbl?reportno=3&template=002&otcli001="+SelectCode.otcli001.value +"&otcli006="+SelectCode.otcli006.value
//alert(linkurl);
  DFrameLink(linkurl,0,Left,400,260)
}
//========================================================================
//  Report 4
//========================================================================

function DispLedgerCost() {
  var DisLedg=document.getElementById("otcnlcst").value;
  if(DisLedg==1) {
        document.getElementById('LedgerHeading').innerHTML
          = document.getElementById('LedgerHd').innerHTML;
        document.getElementById('LedgerField').innerHTML
          = document.getElementById('LedgerFreeFormat').innerHTML;
        document.getElementById('CostHeading').innerHTML
          = document.getElementById('CostHd').innerHTML;
        document.getElementById('CostField').innerHTML
          = document.getElementById('CostFreeFormat').innerHTML;

  } else {
    if(DisLedg==2) {
        document.getElementById('LedgerHeading').innerHTML
          = document.getElementById('LedgerHd').innerHTML;
        document.getElementById('LedgerField').innerHTML
          = document.getElementById('LedgerFreeFormat').innerHTML;
        document.getElementById('CostHeading').innerHTML
          = document.getElementById('CostHd').innerHTML;
        document.getElementById('CostField').innerHTML
          = document.getElementById('CostMandFld').innerHTML;

    } else {
      if(DisLedg==3) {

        document.getElementById('LedgerHeading').innerHTML
          = "";
        document.getElementById('LedgerField').innerHTML
          = LedgerBlank.innerHTML;
        document.getElementById('CostHeading').innerHTML
          = "";
        document.getElementById('CostField').innerHTML
          = CostBlank.innerHTML;

      } else {

        document.getElementById('LedgerHeading').innerHTML
          = document.getElementById('LedgerHd').innerHTML;
        document.getElementById('LedgerField').innerHTML
          = document.getElementById('LedgerFld').innerHTML;
        document.getElementById('CostHeading').innerHTML
          = document.getElementById('CostHd').innerHTML;
        document.getElementById('CostField').innerHTML
          = document.getElementById('CostFld').innerHTML;
      }
    }
  }
}

function Addschdl04(clinicid,effctdat) {
location.href="outweb05.pbl?reportno=04&template=002&otcli001="+clinicid+"&otcli006="+effctdat
self.close();
}
function ViewClinic04(clinicid,effctdat) {
  SelectCode.reportno.value=2
  SelectCode.template.value=3
  SelectCode.otcli001.value=clinicid
  SelectCode.otcli006.value=effctdat
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,0,Left,700,400)
}
function ScheduleList04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="1"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.submit()
}
function ScheduleListA04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="10"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.submit()
}
function SuspendList04(clinicid,effctdat,clinicday,starttime) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="7"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.srchclid.value=clinicid
  document.LinkForm.srchdowk.value=clinicday
  document.LinkForm.srchstim.value=starttime
  document.LinkForm.submit()
}
function SuspendListA04(clinicid,effctdat,clinicday,starttime) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="14"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.srchclid.value=clinicid
  document.LinkForm.srchdowk.value=clinicday
  document.LinkForm.srchstim.value=starttime
  document.LinkForm.submit()
}
function Schedule04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="3"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.submit()
}
function ScheduleA04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="11"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.submit()
}
function LabelLet04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="4"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.submit()
}
function Template04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="4"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function TemplateA04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="8"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function OpenSess04() {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="6"
  document.LinkForm.template.value="1"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function DeltSess04() {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="6"
  document.LinkForm.template.value="2"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function OpenSessA04() {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="6"
  document.LinkForm.template.value="4"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function DeltSessA04() {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="6"
  document.LinkForm.template.value="5"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
//
// REV01 STARTS
function CopyClnt04(clinicid,effctdat) {
   document.LinkForm.reportno.value="4"
   document.LinkForm.template.value="5"
   document.LinkForm.otcli001.value=clinicid
   document.LinkForm.otcli006.value=effctdat
   Left=(document.body.clientWidth-650)/2
   DFrameSubmit(document.LinkForm,0,Left,650,370)
}
function SuspClnt04(clinicid,effctdat) {
   document.LinkForm.reportno.value="4"
   document.LinkForm.template.value="6"
   document.LinkForm.otcli001.value=clinicid
   document.LinkForm.otcli006.value=effctdat
   Left=(document.body.clientWidth-360)/2 
   DFrameSubmit(document.LinkForm,0,Left,360,290)
}
//
function OpenList04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="9"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.viewtype.value=2
  document.LinkForm.submit()
}
function OpenListA04(clinicid,effctdat) {
  document.LinkForm.target="content"
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="13"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.viewtype.value=2
  document.LinkForm.submit()
}
function HospitalUsingAutoOpenClinics() {
  ClinicHosp=document.getElementById("otmas033");
  OTCNAUTC=document.getElementById("otcnautc");
  commonSystemParameter(ClinicHosp,"OTCNAUTC",OTCNAUTC)
  OTCNAUTW=document.getElementById("otcnautw");
  commonSystemParameter(ClinicHosp,"OTCNAUTW",OTCNAUTW)

  if(OTCNAUTC.value=="1" && 
     document.getElementById("d_otmas086").checked==true) {
    return;
  }
  UsingAutoOpenClinics();
}
function UsingAutoOpenClinics() {
  if(document.getElementById("otcnautc").value!="1") {
    document.getElementById("AutoOpenL").innerHTML="";
    document.getElementById("AutoOpenF").innerHTML=
    document.getElementById("ClearAutoOpenF").innerHTML;
    document.getElementById("AutoOpenFreqL").innerHTML="";
    document.getElementById("AutoOpenFreqF").innerHTML="";
    document.getElementById("AutoOpenWeekL").innerHTML="";
    document.getElementById("AutoOpenWeekF").innerHTML="";
    return;
  }
  document.getElementById("AutoOpenL").innerHTML=
  document.getElementById("ShowAutoOpenL").innerHTML;
  document.getElementById("AutoOpenF").innerHTML=
  document.getElementById("ShowAutoOpenF").innerHTML;
  document.getElementById("AutoOpenFreqL").innerHTML=
  document.getElementById("ShowAutoOpenFreqL").innerHTML;
  document.getElementById("AutoOpenFreqF").innerHTML=
  document.getElementById("ShowAutoOpenFreqF").innerHTML;
  document.getElementById("AutoOpenWeekL").innerHTML=
  document.getElementById("ShowAutoOpenWeekL").innerHTML;
  document.getElementById("AutoOpenWeekF").innerHTML=
  document.getElementById("ShowAutoOpenWeekF").innerHTML;
 
  if(document.getElementById("otmas086")) {
    if(document.getElementById("otmas086").value=="1") {
       document.getElementById("d_otmas086").checked=true;
    } 
  }
 
  if(document.getElementById("otmas087")) {
    var freq=document.getElementById("otmas087");
    var freq_value=document.getElementById("d_otmas087").value;
    for (var i=0; i < freq.length; i++) {
      if (freq.options[i].value==freq_value){
         freq.selectedIndex=i;
      }
    }
  }

  if(document.getElementById("otmas088")) {
    if(document.getElementById("otmas088").value.substr(0,1)=="1") {
      document.getElementById("1_otmas088").checked=true;
    }
    if(document.getElementById("otmas088").value.substr(1,1)=="1") {
      document.getElementById("2_otmas088").checked=true;
    }
    if(document.getElementById("otmas088").value.substr(2,1)=="1") {
      document.getElementById("3_otmas088").checked=true;
    }
    if(document.getElementById("otmas088").value.substr(3,1)=="1") {
      document.getElementById("4_otmas088").checked=true;
    }
    if(document.getElementById("otmas088").value.substr(4,1)=="1") {
      document.getElementById("5_otmas088").checked=true;
    }
  }
  
  EnableAutoOpenClinicsFields();
}
function EnableAutoOpenClinicsFields() {
  if(document.getElementById("d_otmas086").checked==true) {
     document.getElementById("otmas087").disabled=false;
     document.getElementById("otmas087").className="SelectBig Mandatory"
     document.getElementById("otmas089").readOnly=false;
     document.getElementById("otmas089").className="Integer Mandatory";
  } else {
     document.getElementById("otmas087").selectedIndex=0;
     document.getElementById("otmas087").className="SelectBig"
     document.getElementById("otmas087").disabled=true;
     document.getElementById("otmas089").value="0";
     document.getElementById("otmas089").readOnly=true;
     document.getElementById("otmas089").className="Integer Readonly";
  }
  if(document.getElementById("otmas087").value=="1" &&
     document.getElementById("d_otmas086").checked==true) {
    document.getElementById("1_otmas088").disabled=false;
    document.getElementById("2_otmas088").disabled=false;
    document.getElementById("3_otmas088").disabled=false;
    document.getElementById("4_otmas088").disabled=false;
    document.getElementById("5_otmas088").disabled=false;
  } else {
    document.getElementById("1_otmas088").disabled=true;
    document.getElementById("1_otmas088").checked=false;
    document.getElementById("2_otmas088").disabled=true;
    document.getElementById("2_otmas088").checked=false;
    document.getElementById("3_otmas088").disabled=true;
    document.getElementById("3_otmas088").checked=false;
    document.getElementById("4_otmas088").disabled=true;
    document.getElementById("4_otmas088").checked=false;
    document.getElementById("5_otmas088").disabled=true;
    document.getElementById("5_otmas088").checked=false;
  }
  if(isWhitespace(document.getElementById("otmas087").value) &&
     document.getElementById("d_otmas086").checked==true) {
    if(trim(document.getElementById("otmas089").value)=="0" ||
      isWhitespace(document.getElementById("otmas089").value) ) {
      document.getElementById("otmas089").value=
      trim(document.getElementById("otcnautw").value);
    }
  }
}
function SetAutoOpenClinics() {
  if(document.getElementById("otcnautc").value!="1") {
     document.getElementById("otmas086").value="";
     document.getElementById("otmas087").value="";
     document.getElementById("otmas088").value="";
     document.getElementById("otmas089").value="";
     return true;
  }
  if(document.getElementById("d_otmas086").checked==true) {
     document.getElementById("otmas086").value="1";
  } else {
     document.getElementById("otmas086").value="0";
  }
  document.getElementById("otmas087").disabled=false;
  week1="0";
  week2="0";
  week3="0";
  week4="0";
  week5="0";
  if(document.getElementById("1_otmas088").checked==true) {
    week1="1"
  }
  if(document.getElementById("2_otmas088").checked==true) {
    week2="1"
  }
  if(document.getElementById("3_otmas088").checked==true) {
    week3="1"
  }
  if(document.getElementById("4_otmas088").checked==true) {
    week4="1"
  }
  if(document.getElementById("5_otmas088").checked==true) {
    week5="1"
  }
  document.getElementById("otmas088").value=week1 + week2 + week3 +
                                            week4 + week5

  if(isWhitespace(document.getElementById("otmas087").value)) {
    return true;
  }

  if(document.getElementById("otmas087").value=="1" &&
     document.getElementById("1_otmas088").checked==false &&
     document.getElementById("2_otmas088").checked==false &&
     document.getElementById("3_otmas088").checked==false &&
     document.getElementById("4_otmas088").checked==false &&
     document.getElementById("5_otmas088").checked==false) {
     alert("Week of month is a required field");
     return false;
  }

  if(parseInt(document.getElementById("otmas089").value,10) < 1 ) {
     alert("Weeks in advance must be greater than zero");
     return false;
  }
  return true;
}

//Displays additional HCP fields is checkbox selected
function displayAddHCP(addHCPDisplayed) {

   //Displays fields if selected
   if(addHCPDisplayed) {
      document.getElementById("addhcphead01label").innerHTML =
         document.getElementById("addHCPSlotslabel01").innerHTML;
      document.getElementById("addhcphead01").innerHTML =
         document.getElementById("addHCPSlots01").innerHTML;
      document.getElementById("addhcphead02label").innerHTML =
         document.getElementById("addHCPSlotslabel02").innerHTML;
      document.getElementById("addhcphead02").innerHTML =
         document.getElementById("addHCPSlots02").innerHTML;
      document.getElementById("addhcphead03label").innerHTML =
         document.getElementById("addHCPSlotslabel03").innerHTML;
      document.getElementById("addhcphead03").innerHTML =
         document.getElementById("addHCPSlots03").innerHTML;
      document.getElementById("addhcphead04label").innerHTML =
         document.getElementById("addHCPSlotslabel04").innerHTML;
      document.getElementById("addhcphead04").innerHTML =
         document.getElementById("addHCPSlots04").innerHTML;

   //Hides fields if not selected
   } else {
      document.getElementById("addhcphead01label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead01").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead02label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead02").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead03label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead03").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead04label").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
      document.getElementById("addhcphead04").innerHTML =
         document.getElementById("addHCPSlotsBlank").innerHTML;
   }
}

//Checks if additional HCP present and displays fields
function loadAddHCP(HCPCode,HCPCodeVar) {

  //Checks if there is an additional HCP
  if(!isWhitespace(HCPCode)) {

    addHCPDisp = document.getElementById("addHCPprov").checked;

    //If present checks if already displaued 
    if(!addHCPDisp) {

      //If not, displays it
      document.getElementById("addHCPprov").checked = true;
      displayAddHCP(true);
    }
    
    //Populates the HCP fields.
    HCPCodeField = document.getElementById("d_"+HCPCodeVar)
    HCPNameField = document.getElementById("name_"+HCPCodeVar);
    HCPCodeField.value=HCPCode;
    validateCode(3,HCPCodeField,HCPNameField);
  }

}

//Displays the additional HCPs on the static template
function displayStaticHCPFields(provider,HCP) {
   
   //Checks if there is a code
   if(!isWhitespace(provider)) {

     //Gets the section of the page to display HCP
     HCPLabel = document.getElementById("addhcphead0"+HCP+"label")

     //Sets the title & Dr Code
     HCPLabel.innerHTML = "Additional HCP "+HCP;
     UpdateForm.provCode.value = provider;

     //Loads the name of the Dr from the code and displays in input boxes
     validateCode(3,UpdateForm.provCode,UpdateForm.provName); 
     drName = "<input type=text title='Additional HCP "+HCP+"' value="+provider;
     drName = drName + "class='Readonly' size=6 disabled>";
     drName = drName + " <input type=text title='Addition HCP "+HCP+"'";
     drName = drName + "value = '"+UpdateForm.provName.value+"' size='20'";
     drName = drName + "class=ReadOnly readonly>";
     document.getElementById("addhcpname0"+HCP).innerHTML = drName;
     UpdateForm.provName.value;

     //Clears the inputs
     UpdateForm.provCode.value = "";
     UpdateForm.provName.value = "";

     //increases the code for the next HCP slot
     HCP=HCP+1;
     
     //Checks to see if this is the first Additional HCP displayed
     if(HCP == 2) {

        //Displays the disabled check box
        document.getElementById("addHCPprov").checked = true;
     }
   }

   return HCP;
}

//Displays the default Doctor if there is one
function displayStaticDefaultDrFields(defaultDoctor) {

   if (!isWhitespace(defaultDoctor)) {
     document.getElementById("defaultDrLabel").innerHTML = "Default Doctor";
     document.getElementById("defaultDrName").innerHTML =
       document.getElementById("defaultDrHidden").innerHTML; 
   }

}

//
// REV01 ENDS
//
//========================================================================
//  Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-370)/2
  DFrameLink(linkurl,0,Left,370,220)
}
function ShowTemplate05(schedule,opendate) {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="1"
  document.LinkForm.othed005.value=schedule
  document.LinkForm.othed006.value=opendate
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function CloseTemplate05() {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="5"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function OpenTemplate05() {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="4"
  document.LinkForm.target="content"; 
  document.LinkForm.submit()
}
function CloseTemplateA05() {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="9"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function OpenTemplateA05() {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="8"
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function AddHeader05() {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="6"
  Left=(document.body.clientWidth-950)/2
  DFrameSubmit(LinkForm,0,Left,950,630)
}
function UpdateHeader05(schedule,opendate) {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="7"
  document.LinkForm.othed005.value=schedule
  document.LinkForm.othed006.value=opendate
  Left=(document.body.clientWidth-950)/2
  DFrameSubmit(LinkForm,0,Left,950,630)
}
function SessionStatus05() {
 linkurl="outweb05.pbl?reportno=5&template=013" +
         "&otcli001=" + document.LinkForm.otcli001.value.replace(/ /g,"+") +
         "&otcli006=" + document.LinkForm.otcli006.value.replace(/ /g,"+") +
         "&otmas001=" + document.LinkForm.otmas001.value.replace(/ /g,"+") +
         "&otmas002=" + document.LinkForm.otmas002.value.replace(/ /g,"+") +
         "&othed005=" + document.LinkForm.othed005.value.replace(/ /g,"+") +
         "&othed006=" + document.LinkForm.othed006.value.replace(/ /g,"+") 
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,280)
}
function PostHeaderUpd05() {
  if(UpdateForm.othed021.value.substr(0,3) != UpdateForm.savclind.value) {
    alert("Warning:Changing of Clinic Indicator will not Update the Billing");
  }
  if(UpdateForm.d_othed022.checked==true) {
    document.UpdateForm.othed022.value="1";
  } else {
    document.UpdateForm.othed022.value="0";
  }
  if(UpdateForm.d_othed024.checked==true) {
    document.UpdateForm.othed024.value="1";
  } else {
    document.UpdateForm.othed024.value="0";
  }
  if(UpdateForm.d_othed025.checked==true) {
    document.UpdateForm.othed025.value="Y";
  } else {
    document.UpdateForm.othed025.value="N";
  }
  if(UpdateForm.d_othed027!=undefined) {
    if(UpdateForm.d_othed027.checked==true) {
      document.UpdateForm.othed027.value="1";
    } else {
      document.UpdateForm.othed027.value="0";
    }
  }
  if(UpdateForm.d_othed028!=undefined) {
    if(UpdateForm.d_othed028.checked==true) {
      document.UpdateForm.othed028.value="1";
    } else {
      document.UpdateForm.othed028.value="0";
    }
  }
  if(UpdateForm.d_othed030.checked==true) {
    document.UpdateForm.othed030.value="1";
  } else {
    document.UpdateForm.othed030.value="0";
  }
  if(UpdateForm.d_othed031.checked==true) {
    document.UpdateForm.othed031.value="1";
  } else {
    document.UpdateForm.othed031.value="0";
  }
  if(UpdateForm.d_othed036!=undefined) {
    if(UpdateForm.d_othed036.checked==true) {
      document.UpdateForm.othed036.value="1";
    } else {
      document.UpdateForm.othed036.value="0";
    }
  }
  if(UpdateForm.d_othed037!=undefined) {
    if(UpdateForm.d_othed037.checked==true) {
      document.UpdateForm.othed037.value="1";
    } else {
      document.UpdateForm.othed037.value="0";
    }
  }
  if(UpdateForm.d_othed038!=undefined) {
    if(UpdateForm.d_othed038.checked==true) {
      document.UpdateForm.othed038.value="1";
    } else {
      document.UpdateForm.othed038.value="0";
    }
  }
  if(UpdateForm.d_othed039!=undefined) {
    if(UpdateForm.d_othed039.checked==true) {
      document.UpdateForm.othed039.value="1";
    } else {
      document.UpdateForm.othed039.value="0";
    }
  }
//
  if(UpdateForm.othed042!=undefined) {
    if(!isWhitespace(UpdateForm.othed042.value)) {
      if(SetDateYYYYMMDD(UpdateForm.opendate.value) >
         SetDateYYYYMMDD(UpdateForm.othed042.value)) {
         alert("Tier 2 Effective date can't be before Date Clinic Opened");
         return;
      }
      if(!isWhitespace(UpdateForm.othed007.value)) {
        if(SetDateYYYYMMDD(UpdateForm.othed042.value) >
           SetDateYYYYMMDD(UpdateForm.othed007.value)) {
           alert("Tier 2 Effective date can't be after Date Clinic Closed");
           return;
        }
      }
    }
  }
//
  document.UpdateForm.updttype.value="T";
  SubmitHidden(UpdateForm);
}
function DeleteHeader05() {
  document.UpdateForm.updttype.value="R";
  ans=confirm("Are you sure you want to Delete ?")
  if(ans) {
    SubmitHidden(UpdateForm);
  }
}
function AddSlot05(clinicid,effctdat) {
  SelectCode.reportno.value=5
  SelectCode.template.value=2
  SelectCode.otcli001.value=clinicid
  SelectCode.otcli006.value=effctdat
  Left=(document.body.clientWidth-370)/2
  DFrameSubmit(SelectCode,0,Left,370,230)
}
function AddMultipleSlot05(clinicid,effctdat) {
  SelectCode.reportno.value=5
  SelectCode.template.value=15
  SelectCode.otcli001.value=clinicid
  SelectCode.otcli006.value=effctdat
  Left=(document.body.clientWidth-370)/2
  DFrameSubmit(SelectCode,0,Left,370,230)
}
function ScheduleA05(clinicid,effctdat) {
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="11"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function Schedule05(clinicid,effctdat) {
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="3"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function ScheduleList05(clinicid,effctdat) {
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="1"
  document.LinkForm.target="content";
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function ScheduleListA05(clinicid,effctdat) {
  document.LinkForm.reportno.value="4"
  document.LinkForm.template.value="10"
  document.LinkForm.target="content";
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function TemplateList05(clinicid,effctdat) {
  document.LinkForm.reportno.value="5"
  document.LinkForm.template.value="4"
  document.LinkForm.otcli001.value=clinicid
  document.LinkForm.otcli006.value=effctdat
  document.LinkForm.target="content";
  document.LinkForm.submit()
}
function checkEffective05() {
  if(isWhitespace(document.UpdateForm.d_othed041.value)) {
    return;
  }
  if(isWhitespace(document.UpdateForm.othed041.value)) {
    return;
  }
  if(document.UpdateForm.d_othed041.value!=
     document.UpdateForm.othed041.value.substr(0,3)) {
    document.UpdateForm.othed042.className="Mandatory Date";
  } else {
    document.UpdateForm.othed042.className="Date";
  }
}
function HospitalUsingAutoOpenClinicsH() {
  ClinicHosp=document.getElementById("othed018");
  OTCNAUTC=document.getElementById("otcnautc");
  commonSystemParameter(ClinicHosp,"OTCNAUTC",OTCNAUTC)
//OTCNAUTW=document.getElementById("otcnautw");
//commonSystemParameter(ClinicHosp,"OTCNAUTW",OTCNAUTW)

  if(OTCNAUTC.value=="1" &&
     document.getElementById("d_othed045").checked==true) {
    return;
  }
  UsingAutoOpenClinicsH();
}
function UsingAutoOpenClinicsH() {
  if(document.getElementById("otcnautc").value!="1") {
    document.getElementById("AutoOpenL").innerHTML="";
    document.getElementById("AutoOpenF").innerHTML=
    document.getElementById("ClearAutoOpenF").innerHTML;
    document.getElementById("AutoOpenFreqL").innerHTML="";
    document.getElementById("AutoOpenFreqF").innerHTML="";
    document.getElementById("AutoOpenWeekL").innerHTML="";
    document.getElementById("AutoOpenWeekF").innerHTML="";
    return;
  }
  document.getElementById("AutoOpenL").innerHTML=
  document.getElementById("ShowAutoOpenL").innerHTML;
  document.getElementById("AutoOpenF").innerHTML=
  document.getElementById("ShowAutoOpenF").innerHTML;
  document.getElementById("AutoOpenFreqL").innerHTML=
  document.getElementById("ShowAutoOpenFreqL").innerHTML;
  document.getElementById("AutoOpenFreqF").innerHTML=
  document.getElementById("ShowAutoOpenFreqF").innerHTML;
  document.getElementById("AutoOpenWeekL").innerHTML=
  document.getElementById("ShowAutoOpenWeekL").innerHTML;
  document.getElementById("AutoOpenWeekF").innerHTML=
  document.getElementById("ShowAutoOpenWeekF").innerHTML;

  if(document.getElementById("othed045")) {
    if(document.getElementById("othed045").value=="1") {
       document.getElementById("d_othed045").checked=true;
    }
  }

  if(document.getElementById("othed046")) {
    var freq=document.getElementById("othed046");
    var freq_value=document.getElementById("d_othed046").value;
    for (var i=0; i < freq.length; i++) {
      if (freq.options[i].value==freq_value){
         freq.selectedIndex=i;
      }
    }
  }

  if(document.getElementById("othed047")) {
    if(document.getElementById("othed047").value.substr(0,1)=="1") {
      document.getElementById("1_othed047").checked=true;
    }
    if(document.getElementById("othed047").value.substr(1,1)=="1") {
      document.getElementById("2_othed047").checked=true;
    }
    if(document.getElementById("othed047").value.substr(2,1)=="1") {
      document.getElementById("3_othed047").checked=true;
    }
    if(document.getElementById("othed047").value.substr(3,1)=="1") {
      document.getElementById("4_othed047").checked=true;
    }
    if(document.getElementById("othed047").value.substr(4,1)=="1") {
      document.getElementById("5_othed047").checked=true;
    }
  }

  EnableAutoOpenClinicsFieldsH();
}
function EnableAutoOpenClinicsFieldsH() {
  if(document.getElementById("d_othed045").checked==true) {
     document.getElementById("othed046").disabled=false;
     document.getElementById("othed046").className="SelectBig Mandatory"
     document.getElementById("othed048").readOnly=false;
     document.getElementById("othed048").className="Integer Mandatory";
  } else {
     document.getElementById("othed046").selectedIndex=0;
     document.getElementById("othed046").className="SelectBig"
     document.getElementById("othed046").disabled=true;
     document.getElementById("othed048").value="0";
     document.getElementById("othed048").readOnly=true;
     document.getElementById("othed048").className="Integer Readonly";
  }
  if(document.getElementById("othed046").value=="1" &&
     document.getElementById("d_othed045").checked==true) {
    document.getElementById("1_othed047").disabled=false;
    document.getElementById("2_othed047").disabled=false;
    document.getElementById("3_othed047").disabled=false;
    document.getElementById("4_othed047").disabled=false;
    document.getElementById("5_othed047").disabled=false;
  } else {
    document.getElementById("1_othed047").disabled=true;
    document.getElementById("1_othed047").checked=false;
    document.getElementById("2_othed047").disabled=true;
    document.getElementById("2_othed047").checked=false;
    document.getElementById("3_othed047").disabled=true;
    document.getElementById("3_othed047").checked=false;
    document.getElementById("4_othed047").disabled=true;
    document.getElementById("4_othed047").checked=false;
    document.getElementById("5_othed047").disabled=true;
    document.getElementById("5_othed047").checked=false;
  }
  if(isWhitespace(document.getElementById("othed046").value) &&
     document.getElementById("d_othed045").checked==true) {
    if(trim(document.getElementById("othed048").value)=="0" ||
      isWhitespace(document.getElementById("othed048").value) ) {
      document.getElementById("othed048").value=
      trim(document.getElementById("otcnautw").value);
    }
  }
}
function SetAutoOpenClinicsH() {
  if(document.getElementById("otcnautc").value!="1") {
     document.getElementById("othed045").value="";
     document.getElementById("othed046").value="";
     document.getElementById("othed047").value="";
     document.getElementById("othed048").value="";
     return true;
  }
  if(document.getElementById("d_othed045").checked==true) {
     document.getElementById("othed045").value="1";
  } else {
     document.getElementById("othed045").value="0";
  }
  document.getElementById("othed046").disabled=false;
  week1="0";
  week2="0";
  week3="0";
  week4="0";
  week5="0";
  if(document.getElementById("1_othed047").checked==true) {
    week1="1"
  }
  if(document.getElementById("2_othed047").checked==true) {
    week2="1"
  }
  if(document.getElementById("3_othed047").checked==true) {
    week3="1"
  }
  if(document.getElementById("4_othed047").checked==true) {
    week4="1"
  }
  if(document.getElementById("5_othed047").checked==true) {
    week5="1"
  }
  document.getElementById("othed047").value=week1 + week2 + week3 +
                                            week4 + week5

  if(isWhitespace(document.getElementById("othed046").value)) {
    return true;
  }

  if(document.getElementById("othed046").value=="1" &&
     document.getElementById("1_othed047").checked==false &&
     document.getElementById("2_othed047").checked==false &&
     document.getElementById("3_othed047").checked==false &&
     document.getElementById("4_othed047").checked==false &&
     document.getElementById("5_othed047").checked==false) {
     alert("Week of month is a required field");
     return false;
  }

  if(parseInt(document.getElementById("othed048").value,10) < 1 ) {
     alert("Weeks in advance must be greater than zero");
     return false;
  }
  return true;
}
//========================================================================
//  Report 6
//========================================================================
function Schedule06(clinicid,effctdat) {
  document.OpenSession.method="get"
  document.OpenSession.reportno.value="5"
  document.OpenSession.template.value="1"
  document.OpenSession.otcli001.value=clinicid
  document.OpenSession.otcli006.value=effctdat
  document.OpenSession.submit()
}
function ScheduleA06(clinicid,effctdat) {
  document.OpenSession.reportno.value="5"
  document.OpenSession.template.value="11"
  document.OpenSession.otcli001.value=clinicid
  document.OpenSession.otcli006.value=effctdat
  document.OpenSession.submit()
}
function setFormactn06(type) {
  document.OpenSession.updttype.value=type;
  if (type=="A") { 
    OpenSession.OpenButton.disabled=true;
    setTimeout('OpenSession.OpenButton.disabled=false',40000);
      DFrameMessage("Session Creation in Progress....",300,120);
      document.OpenSession.submit(); }
  if (type=="D") {
    ans=confirm("Note only dates which do not have a booking will be deleted! ")
    if (ans) { 
      DFrameMessage("Session Deletion in Progress....",300,120);
      document.OpenSession.submit() }
  }
}
function DeleteCol06(SetColumn) {
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date.." + SetColumn
    if (Item.name.match(MatchStr)){
      if (Item.id=="checked") {
         if (Item.checked==true) { Item.checked=false } } } }
}
function UpdateCol06(SetColumn) {
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date.." + SetColumn
    if (Item.name.match(MatchStr)){
      if (Item.id=="") {
        if (Item.checked==false) { Item.checked=true }
                            else { Item.checked=false } } } }
}
function DeleteClear06() {
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date...."
    if (Item.id=="checked") {
      if (Item.name.match(MatchStr)){ Item.checked=false } } }
}
function UpdateClear06() {
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date...."
    if (Item.id=="") {
      if (Item.name.match(MatchStr)){ Item.checked=false } } }
}

function setFirstWeek06(interval) {
  var tepmDate = 0; 
  var firstWeek = "date010";
  var dispYear = document.OpenSession.showyear.value;
  var lastSesYear = document.OpenSession.lstsesdt.value.substr(0,4);
  var lastSesMnth = (document.OpenSession.lstsesdt.value.substr(4,2) - 1);
  var lastSesDay  = document.OpenSession.lstsesdt.value.substr(6,2);
  sessionDate = new Date();
  sessionDate.setFullYear(lastSesYear);
  sessionDate.setMonth(lastSesMnth);
  sessionDate.setDate(lastSesDay);

  if (lastSesYear >= dispYear)    // The last open session is not in the 
    return (firstWeek + "1");     // previous year, return week 1 as default

  // Increament date by the specified interval until the first date in 
  // the year displayed on the screen is reached.
  while (sessionDate.getFullYear() != dispYear) {
    tempDate = sessionDate.getTime();
    tempDate += interval;
    sessionDate.setTime(tempDate);
  }

  var weekNum = (Math.floor((sessionDate.getDate() - 1) / 7) + 1);
  return (firstWeek + weekNum);
}

function Update4Weeks06() {
  for (var i=document.OpenSession.length-1; i >= 0; i--) {
    var FirstWeek=0
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date...."
    if (Item.name.match(MatchStr)){
      if(Item.checked==true) {
        FirstWeek=Item.name
        i=0 } } }
   if (FirstWeek==0) { 
     if (document.OpenSession.lstopses.checked) {
       var interval = 2419200000;      // 28 days in miliseconds
       FirstWeek = setFirstWeek06(interval);
     }
     else
       FirstWeek="date0101" 
   }
   StartFlag=0
   WeekCount=0
   for (var i=0; i < document.OpenSession.length; i++) {
     var Item = document.OpenSession.elements[i];
     if (Item.name.match(FirstWeek)){
       StartFlag=1
       Item.checked=true }
     else {
       Check4WeekItem(Item)   }
    }
}
function Check4WeekItem(Item) {
 if (StartFlag==1) {
    var MatchStr = "date...."
    if (Item.name.match(MatchStr)){
       if(Item.type=="checkbox") {
         WeekCount++;
         if (WeekCount==4) {
            if (Item.id=="") {
               Item.checked=true }
           WeekCount=0
         }
       }
    }
  }
}

function Update2Weeks06() {
for (var i=document.OpenSession.length-1; i >= 0; i--) {
  var FirstWeek=0
  var Item = document.OpenSession.elements[i];
  var MatchStr = "date...."
  if (Item.name.match(MatchStr)){
    if(Item.checked==true) {
      FirstWeek=Item.name
      i=0 }
  }
 }
 if (FirstWeek==0) { 
   if (document.OpenSession.lstopses.checked) {
     var interval = 1209600000;        // 14 days in miliseconds
     FirstWeek = setFirstWeek06(interval);
   }
   else
     FirstWeek="date0101" 
 }
 StartFlag=0
 WeekCount=0
 for (var i=0; i < document.OpenSession.length; i++) {
   var Item = document.OpenSession.elements[i];
   if (Item.name.match(FirstWeek)){
     StartFlag=1
     Item.checked=true }
   else {
     Check2WeekItem(Item)   }
  }
}
function Check2WeekItem(Item) {
 if (StartFlag==1) {
    var MatchStr = "date...."
    if (Item.name.match(MatchStr)){
       if(Item.type=="checkbox") {
         WeekCount++;
         if (WeekCount==2) {
            if (Item.id=="") {
              Item.checked=true
            }
           WeekCount=0
         }
       }
    }
  }
}
function UpdateRow06(SetRow) {
SetRow=""+SetRow
if (SetRow.length!=2) {
  SetRow="0"+SetRow.substring(0)
}
for (var i=0; i < document.OpenSession.length; i++) {
  var Item = document.OpenSession.elements[i];
  var MatchStr = "date" + SetRow
  if (Item.name.match(MatchStr)){
    if (Item.id=="") {
       if (Item.checked==false) { Item.checked=true }
                           else { Item.checked=false } } }
  }
}
function DeleteRow06(SetRow) {
SetRow=""+SetRow
if (SetRow.length!=2) {
  SetRow="0"+SetRow.substring(0)
}
for (var i=0; i < document.OpenSession.length; i++) {
  var Item = document.OpenSession.elements[i];
  var MatchStr = "date" + SetRow
  if (Item.name.match(MatchStr)){
    if (Item.id=="checked") {
       if (Item.checked==true) { Item.checked=false } } }
  }
}
function showPrevYear06() {
  var otcli001_value = document.OpenSession.otcli001.value.replace(/ /g,"+");
  var otcli006_value = document.OpenSession.otcli006.value.replace(/ /g,"+");
  var otmas001_value = document.OpenSession.otmas001.value.replace(/ /g,"+");
  var otmas002_value = document.OpenSession.otmas002.value.replace(/ /g,"+");
  var prev_year = document.OpenSession.showyear.value - 1;

  var linkurl = "outweb05.pbl?reportno=06&template=003&otcli001=" +
                 otcli001_value + "&otcli006=" + otcli006_value +
                "&otmas001=" + otmas001_value + "&otmas002=" +
                 otmas002_value + "&showyear=" + prev_year +
                "&othed001=" + 
                 document.OpenSession.othed001.value.replace(/ /g,"+") +
                "&othed002=" + 
                 document.OpenSession.othed002.value.replace(/ /g,"+") +
                "&othed003=" + 
                 document.OpenSession.othed003.value.replace(/ /g,"+") +
                "&othed004=" + 
                 document.OpenSession.othed004.value.replace(/ /g,"+") +
                "&othed005=" + 
                 document.OpenSession.othed005.value.replace(/ /g,"+") +
                "&othed006=" + 
                 document.OpenSession.othed006.value.replace(/ /g,"+");

  DFrameLink(linkurl,100,0,600,350)
}
function GoPrevYear06() {
  var linkhed = "&othed001=" +
                 document.OpenSession.othed001.value.replace(/ /g,"+") +
                "&othed002=" +
                 document.OpenSession.othed002.value.replace(/ /g,"+") +
                "&othed003=" +
                 document.OpenSession.othed003.value.replace(/ /g,"+") +
                "&othed004=" +
                 document.OpenSession.othed004.value.replace(/ /g,"+") +
                "&othed005=" +
                 document.OpenSession.othed005.value.replace(/ /g,"+") +
                "&othed006=" +
                 document.OpenSession.othed006.value.replace(/ /g,"+");
location.href=document.OpenSession.prevyear.value + linkhed
}
function GoNextYear06() {
  var linkhed = "&othed001=" +
                 document.OpenSession.othed001.value.replace(/ /g,"+") +
                "&othed002=" +
                 document.OpenSession.othed002.value.replace(/ /g,"+") +
                "&othed003=" +
                 document.OpenSession.othed003.value.replace(/ /g,"+") +
                "&othed004=" +
                 document.OpenSession.othed004.value.replace(/ /g,"+") +
                "&othed005=" +
                 document.OpenSession.othed005.value.replace(/ /g,"+") +
                "&othed006=" +
                 document.OpenSession.othed006.value.replace(/ /g,"+");
location.href=document.OpenSession.nextyear.value + linkhed
}
function clickOpenSession() {
  if(document.OpenSession.d_otheaopn.value=="1") {
    if(!confirm("Warning: This Clinic is set up as an Auto Open Clinic.\n" +
                "Manually opening sessions may interfere with the " +
                "automatic opening process.\n" +
                "Click OK to continue or CANCEL to return.")) {
      return;
    }
  }
  openSessions06();
}
function clickDeleteSession() {
  if(document.OpenSession.d_otheaopn.value=="1") {
    if(!confirm("Warning: This Clinic is set up as an Auto Open Clinic.\n" +
                "Manually deleting sessions may interfere with the " +
                "automatic opening process.\n" +
                "Click OK to continue or CANCEL to return.")) {
      return;
    }
  }
  setFormactn06('D');
}

//========================================================================
//  Report 7
//========================================================================
function ShowDetail07(linkurl) {
  Left=(document.body.clientWidth-400)/2;
  DFrameLink(linkurl,0,Left,400,230);
}
function ShowDetail10(linkurl) {
  Left=(document.body.clientWidth-400)/2;
  DFrameLink(linkurl,90,Left,400,150);
}
function AddMap07(clinicid,effctdat) {
  SelectCode.otwmp001.value=clinicid
  SelectCode.otcli001.value=clinicid
  SelectCode.otcli006.value=effctdat
  SelectCode.template.value=2
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,230)
}
function ViewClinic07(clinicid,effctdat) {
  LinkForm.otwmp001.value=clinicid
  LinkForm.otcli001.value=clinicid
  LinkForm.otcli006.value=effctdat
  LinkForm.reportno.value=2
  LinkForm.template.value=3
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(LinkForm,0,Left,700,400)
}
function Schedule07(clinicid,effctdate) {
parent.location.href="outweb05.pbl?reportno=07&template=001&otcli001="+clinicid+"&otcli006="+effctdate
DFrameExit()
}
function checkSubmit(type) {
  document.UpdateForm.updttype.value=type;
  if (type=="U") {
    if(UpdateForm.otmas006!=undefined) {
      if(UpdateForm.otmas006.value.substr(0,3) != UpdateForm.savclind.value) {
      alert("Warning:Changing of Clinic Indicator will not Update the Billing");
      }
    }
    if(!ChkDateTime(UpdateForm.otmas052,UpdateForm.otmas053)) {
       alert("Clinic Closing Date Can't be Prior to Opening Date");
       return false; }

    if (validateMandatory(UpdateForm)) {
    /* For STV site- Before posting enable Hospital id field -- Prasad  */
       document.UpdateForm.otmas033.disabled=false;
       
       // Checks to see if the Additional HCP provider checkbox 
       // is present and has been checked
       if (document.getElementById("addHCPprov") != undefined) {

         if (document.getElementById("addHCPprov").checked == false) {
            document.UpdateForm.otmas090.value = "";
            document.UpdateForm.otmas091.value = "";
            document.UpdateForm.otmas092.value = "";
            document.UpdateForm.otmas093.value = "";
         } else {
            document.UpdateForm.otmas090.value =
               document.UpdateForm.d_otmas090.value;
            document.UpdateForm.otmas091.value = 
               document.UpdateForm.d_otmas091.value;
            document.UpdateForm.otmas092.value =
               document.UpdateForm.d_otmas092.value;
            document.UpdateForm.otmas093.value = 
               document.UpdateForm.d_otmas093.value;
         }
       }

       document.UpdateForm.submit(); } }
  else {
    if (type=="D") {
       ans=confirm("Are you sure you want to Delete ?")
       if (ans) { 
         document.UpdateForm.submit() } }
    else { 
      document.UpdateForm.submit(); } }
}
function ChkDateTime(strtDate,endDate) {
  var strtDay  = strtDate.value.substring(0,2);
  var strtMon  = strtDate.value.substring(3,6);
  var strtYear = strtDate.value.substring(7,11);

  var endDay   = endDate.value.substring(0,2);
  var endMon   = endDate.value.substring(3,6);
  var endYear  = endDate.value.substring(7,11);

  strtMon = GetMonthNumber(strtMon);
  endMon  = GetMonthNumber(endMon);

  var strtDateTime = strtYear + strtMon + strtDay
  var endDateTime  = endYear + endMon + endDay
  if (endDateTime < strtDateTime) return false;
  return true;
}
//========================================================================
//  Report 9
//========================================================================
function EditLookup09() {
  Message="Enter a Diagnosis";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.reportno.value=9
  SelectCode.template.value=3
  SelectCode.clintype.value=SelectCode.clintype.value
  SelectCode.otcdc003.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,200)
}
function GoToLookup09() {
  SelectCode.clintype.value=SelectCode.clintype.value
  SelectCode.otcdc003.value=SelectCode.startkey.value
  SelectCode.submit();
}
function Diagnoses(ctype) {
  parent.location.href="outweb05.pbl?reportno=09&template=001&clintype="+ctype
  DFrameExit()
}
function CheckAllied(theform) {
  if(theform.otmas069.checked==true) {
     theform.otmas068.className="Mandatory"
  } else {
     theform.otmas068.className=""
  }
}
function CheckAlliedSelect(theform) {
  if(theform.otmas069.value=="1" || theform.otmas069.value=="2") {
     theform.otmas068.className="Mandatory"
  } else {
     theform.otmas068.className=""
  }
}
function CheckAlliedHed(theform) {
  if(theform.d_othed024.checked==true) {
     theform.othed023.className="Mandatory"
  } else {
     theform.othed023.className=""
  }
}
function CheckProvNo(UseMed,ProvNo) {
  if(UseMed.value=="1") {                   // Using med claims is yes
    if(ProvNo.value.length != "8" &&
       !isWhitespace(ProvNo.value)) {       // Provider number must be 8 chars
        alert("Provider number must be 8 characters");
        ProvNo.focus();
    }
  }
}
function SetMRTLocation(theForm) {
 p=theForm;
 p.otmas057.options.length=0;
 p.otmas057.options[p.otmas057.options.length]= new Option(" "," ");
 if (p.ibcnmhos.value==1) {
     MrtMultiLocations(p.otmas057,p.d_otmas057.value,p.otmas033.value)
 } else {
     MrtLocations(p.otmas057,p.d_otmas057.value)
 }
}
function SetMRTLocationHeader(theForm) {
 p=theForm;
 p.othed019.options.length=0;
 p.othed019.options[p.othed019.options.length]= new Option(" "," ");
 if (p.ibcnmhos.value==1) {
     MrtMultiLocations(p.othed019,p.d_othed019.value,p.othed018.value)
 } else {
     MrtLocations(p.othed019,p.d_othed019.value)
 }
}
function loadLetterOptions() {
  for (var i=0; i < document.UpdateForm.otmas026.length; i++) {
    var option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas027.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas028.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas029.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas030.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas031.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas049.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas050.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas058.add(option);
    option=document.createElement('option');
    option.text=document.UpdateForm.otmas026[i].text;
    option.value=document.UpdateForm.otmas026[i].value;
    document.UpdateForm.otmas067.add(option);
  }

 for (var i=0; i < document.UpdateForm.otmas027.length; i++) {
  if (document.UpdateForm.otmas027.options[i].value==
      document.UpdateForm.d_otmas027.value){
      document.UpdateForm.otmas027.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas028.length; i++) {
  if (document.UpdateForm.otmas028.options[i].value==
      document.UpdateForm.d_otmas028.value){
      document.UpdateForm.otmas028.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas029.length; i++) {
  if (document.UpdateForm.otmas029.options[i].value==
      document.UpdateForm.d_otmas029.value){
      document.UpdateForm.otmas029.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas030.length; i++) {
  if (document.UpdateForm.otmas030.options[i].value==
      document.UpdateForm.d_otmas030.value){
      document.UpdateForm.otmas030.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas031.length; i++) {
  if (document.UpdateForm.otmas031.options[i].value==
      document.UpdateForm.d_otmas031.value){
      document.UpdateForm.otmas031.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas027.length; i++) {
  if (document.UpdateForm.otmas027.options[i].value==
      document.UpdateForm.d_otmas027.value){
      document.UpdateForm.otmas027.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas049.length; i++) {
  if (document.UpdateForm.otmas049.options[i].value==
      document.UpdateForm.d_otmas049.value){
      document.UpdateForm.otmas049.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas050.length; i++) {
  if (document.UpdateForm.otmas050.options[i].value==
      document.UpdateForm.d_otmas050.value){
      document.UpdateForm.otmas050.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas058.length; i++) {
  if (document.UpdateForm.otmas058.options[i].value==
      document.UpdateForm.d_otmas058.value){
      document.UpdateForm.otmas058.selectedIndex=i;
  }
 }

 for (var i=0; i < document.UpdateForm.otmas067.length; i++) {
  if (document.UpdateForm.otmas067.options[i].value==
      document.UpdateForm.d_otmas067.value){
      document.UpdateForm.otmas067.selectedIndex=i;
  }
 }


}
function openSessions06() {
 if(document.OpenSession.d_otcliact.value=="1") {
   if(!confirm("Warning. This clinic is Inacitve.\n" +
               "Press OK to Continue, Cancel to Abort")) {
     return;
   }
 }
  setFormactn06('A')
}
function Procedures(ctype) {
  parent.location.href="outweb05.pbl?reportno=11&template=001&clintype="+ctype
  DFrameExit()
}
function EditLookup11() {
  Message="Enter a Procedure";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.reportno.value=11
  SelectCode.template.value=3
  SelectCode.clintype.value=SelectCode.clintype.value
  SelectCode.otcpc003.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,200)
}
function GoToLookup11() {
  SelectCode.clintype.value=SelectCode.clintype.value
  SelectCode.otcpc003.value=SelectCode.startkey.value
  SelectCode.submit();
}
function Problems(ctype) {
  parent.location.href="outweb05.pbl?reportno=12&template=001&clintype="+ctype
  DFrameExit()
}
function EditLookup12() {
  Message="Enter a Problem";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.reportno.value=12
  SelectCode.template.value=3
  SelectCode.clintype.value=SelectCode.clintype.value
  SelectCode.otcpb003.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,200)
}
function GoToLookup12() {
  SelectCode.clintype.value=SelectCode.clintype.value
  SelectCode.otcpb003.value=SelectCode.startkey.value
  SelectCode.submit();
}
//========================================================================
//  Report 13
//========================================================================
function VisitTypes13(ctype) {
  location.href="outweb05.pbl?reportno=13&template=001&otcvt001="+
                ctype.replace(/ /g,"+")
}
function CloseButton13(ctype) {
  location.href="outweb05.pbl?reportno=1&template=003&otcty001="+
                ctype.replace(/ /g,"+")
}
function SelectAll13() {
  for(var i=0; i < document.UpdateForm.length; i++) {
      var Item = document.UpdateForm.elements[i];
      if (Item.name.match("lvistarr")){
        Item.checked=true;
      }
  }
  setFormactn('M');
}
function DeleteAll13() {
  for(var i=0; i < document.UpdateForm.length; i++) {
      var Item = document.UpdateForm.elements[i];
      if (Item.name.match("lvistarr")){
        Item.checked=false;
      }
  }
  setFormactn('M');
}
