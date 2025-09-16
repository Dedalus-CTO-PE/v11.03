//jsVersion  : V11.03.01
// Program   : watweb01.js
//
// Written   : 17.06.2000 Pat Dirito  
//
// Function  : Standard Functions Used in watweb01 templates 
//
//========================================================================
//
function PatLinkTo(Server,ServerOpt,ServerTmp,SubmitTo,FWidth,FHeight) {
   PatientLinks.action=Server
   PatientLinks.reportno.value=ServerOpt
   PatientLinks.template.value=ServerTmp
      NewWindow=window.open("","NewWindow","width=780,height=500,top=10,left=10,location=no,toolbar=no,scrollbars=no");
      PatientLinks.target="NewWindow"
      PatientLinks.submit()
}

//========================================================================
//  Report 6
//========================================================================
function UpdateItem(ExtractKey) {
WATEX001=ExtractKey.replace(/ /g,"+")
LinkUrl="watweb01.pbl?reportno=6&template=3&watex001="+WATEX001

Left=(document.body.clientWidth-880)/2;
DFrameLink(LinkUrl,20,Left,880,680)
}
function EditList06(extrctid) {
parent.location.href="watweb01.pbl?reportno=08&template=001&watep001="+extrctid
DFrameExit()
}
function DownLoad06(extrctid) {
  document.UpdateForm.updttype.value="L"
  document.UpdateForm.watex001.value=extrctid
  document.UpdateForm.target=parent.location
  document.UpdateForm.submit()
//  DFrameExit()
}
function PrintLett06(extrctid) {
  linkurl="rshweb02.pbl?reportno=1&template=1&reportid=ibawat54&extrctid="
           +extrctid
  Left=(document.body.clientWidth-530)/2
  DFrameLink(linkurl,0,Left,530,300)
}
function PrintLettSMS06(extrctid) {
  linkurl="rshweb02.pbl?reportno=1&template=2&reportid=ibawat54&extrctid="
           +extrctid
  Left=(document.body.clientWidth-530)/2
  DFrameLink(linkurl,0,Left,530,300)
}

function PrintWaitingListExtractEnquiry(extractId)
{
  linkurl="rshweb02.pbl?reportno=1&template=1&reportid=ibawat56&extrctid="
           +extractId
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkurl,0,Left,530,300)

}

function GenSumm06(extrctid) {
  ans=confirm("Note if any fields have been modified you must first Update!");
  if (!ans) {
    return; }
  linkurl="rshweb02.pbl?reportno=1&template=2&reportid=ibawat53&extrctid="
           +extrctid
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,300)
}
function Analyze06(extrctid) {
 linkurl="watweb01.pbl?reportno=06&template=005&watex001="+extrctid
  Left=(document.body.clientWidth-460)/2
  DFrameLink(linkurl,0,Left,500,320)
}
function Extract06(extrctid) {
location.href="watweb01.pbl?reportno=06&template=003&watex001="+extrctid
}
//                                    Added by HPS-ODC(13.08.2001)Starts
function DateVal(forms) {
  for (var i=0; i < forms.length; i++) {
    if(forms.elements[i].type=="text" && (forms.elements[i].value=="Start" || forms.elements[i].value=="Finish")) {
      alert("Invalid Date");
      forms.elements[i].select();
      return false;
     }
   }
  return true;
}
//                                    Added by HPS-ODC(13.08.2001)Ends        
//========================================================================
//  Report 8
//========================================================================
function ShowDetail08(linkurl) {
  Left=(document.body.clientWidth-280)/2
  DFrameLink(linkurl,0,Left,290,190)
}
function WatExtract08(extrctid) {
  linkurl="watweb01.pbl?reportno=06&template=003&watex001="+extrctid
  Left=(document.body.clientWidth-880)/2
  DFrameLink(linkurl,0,Left,880,680)
}
function GenExtract08(extrctid) {
  linkurl="rshweb02.pbl?reportno=1&template=2&reportid=ibawat53&extrctid="+extrctid
  Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,0,Left,600,350)
}
//========================================================================
//  To Check Dates
//========================================================================
/*
function ChkDateTime(strtDate,endDate) {
  var strtDay  = strtDate.value.substring(0,2);
  var strtMon  = strtDate.value.substring(3,6);
  var strtYear = strtDate.value.substring(7,11);
 // var strtHH   = strtTime.value.substring(0,2);
 // var strtMM   = strtTime.value.substring(3,5);
 // var strtSS   = strtTime.value.substring(6,8);

  var endDay   = endDate.value.substring(0,2);
  var endMon   = endDate.value.substring(3,6);
  var endYear  = endDate.value.substring(7,11);
 // var endHH    = endTime.value.substring(0,2);
 // var endMM    = endTime.value.substring(3,5);
 // var endSS    = endTime.value.substring(6,8);
  
  strtMon = GetMonthNumber(strtMon);
  endMon  = GetMonthNumber(endMon);
  
  var strtDateTime = strtYear + strtMon + strtDay
  var endDateTime  = endYear + endMon + endDay
  if (endDateTime < strtDateTime) return false;
  return true;
}
*/
//=============================================================================
//       Function to Change Month name to respective Number
//=============================================================================
function GetMonthNumber(monName) {
  switch (monName) {
    case "Jan" : return "01";
    case "Feb" : return "02";
    case "Mar" : return "03";
    case "Apr" : return "04";
    case "May" : return "05";
    case "Jun" : return "06";
    case "Jul" : return "07";
    case "Aug" : return "08";
    case "Sep" : return "09";
    case "Oct" : return "10";
    case "Nov" : return "11";
    case "Dec" : return "12";
  }
}
//=============================================================================
//       Function to check if transfer source is required  
//=============================================================================
function DisplayTrnSrc() {
  i=document.UpdateForm.wattr010.selectedIndex;
  ind=document.UpdateForm.wattr010.options[i].value.substr(5,1)
  if (ind!="X"&&ind!="T"&&ind!="N"&&ind!="S"&&ind!="K"&&ind!="P") {
    TranSrc.innerHTML=transferblank.innerHTML;
    TranSrcHeading.innerHTML="";
    document.UpdateForm.trnsfsrc.value="";
  } else {
    TranSrcHeading.innerHTML=transferhd.innerHTML;
    TranSrc.innerHTML=transfersrc.innerHTML;
  }
}
//
//=============================================================================
//       Function to check if Insurance Declaration(Cat CL)required when remove
//       entry from waiting list
//=============================================================================
function DisplayInsDec() {
  i=document.UpdateForm.wattr010.selectedIndex;
  ind=document.UpdateForm.wattr010.options[i].value.substr(5,1)
  if (ind!="X"&&ind!="W"&&ind!="S"&&ind!="Y"&&ind!="K"&&ind!="P") {
    InsurDec.innerHTML=InsuranceBlank.innerHTML;
    InsurDecHeading.innerHTML="";
    document.UpdateForm.InsDec.value="";
    if(document.getElementById('ActVisHeading')) {
      ActVisda.innerHTML=ActVisBlank.innerHTML;
      ActVisHeading.innerHTML="";
      document.UpdateForm.ActVis.value="";
    }
  } else {
    InsurDecHeading.innerHTML=InsDechd.innerHTML;
    InsurDec.innerHTML=InsuranceDec.innerHTML;
    if(document.getElementById('ActVisHeading')) {
      ActVisHeading.innerHTML=ActVishd.innerHTML;
      ActVisda.innerHTML=ActVisNo.innerHTML;
      document.UpdateForm.wattr057.value =
      trim(document.UpdateForm.wattr057.value);
    }
  }
}
//=============================================================================
//       Function to check if Schduled Admission Date required when remove
//       entry from waiting list
//=============================================================================
function DisplaySchAdm() {
  i=document.UpdateForm.wattr010.selectedIndex;
  ind=document.UpdateForm.wattr010.options[i].value.substr(5,1)
  if (ind!="S"&&ind!="X"&&ind!="K"&&ind!="P") {
    SchAdmDt.innerHTML=SchAdmDtBlank.innerHTML;
    SchAdmDtHeading.innerHTML="";
    document.UpdateForm.SchAdm.value="";
  } else {
    SchAdmDtHeading.innerHTML=SchAdmhd.innerHTML;
    SchAdmDt.innerHTML=SchAdmDate.innerHTML;
  }
}

function eraseField(element)
{
  if(element)
     element.value = "";
}
function validateDateRange(fromElement,toElement)
{
   if(fromElement && toElement)
   {
     if(fromElement.value != "Start" && toElement.value != "Finish")
     {
       if(SetDateYYYYMMDD(fromElement.value) > SetDateYYYYMMDD(toElement.value))
       {
         alert("Invalid Range");
         fromElement.value = "";
         fromElement.focus();
       }
     }
   }
}

function checkSelectRange(fromElement,toElement)
{

  if(fromElement && toElement)
  {
    if(fromElement.selectedIndex != 0 && toElement.selectedIndex != 0)
      if(fromElement.selectedIndex > toElement.selectedIndex)
       {
         alert("Invalid Range");
         toElement.selectedIndex = fromElement.selectedIndex = 0;
         return false;
       }
  }

  return true;
}

