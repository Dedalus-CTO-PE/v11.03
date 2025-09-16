//jsVersion  : V11.03.00
//========================================================================
// Program   : oprweb0617001.js   
//
// Written   : 06.06.2008 
//
// Function  : Standard Functions Used in oprweb0617001.html
//
// Amendments History:
//
// V10.00.02 08/06/2010  Peter Vela     CAR 225842
//                       Fixed admissno assignment in showMBSMISCDO() 
// V10.00.01 24/06/2010  Peter Vela     CAR 216356
//                       Changed provmmbs to prvmmbs to fix U*R in OPRWEB06
// V9.12.01  11/11/2009  Jill Parkinson CAR 207822
//                       Added AddMBSItemDO
// V9.09.00  06/06/2008  J.Tan    CAR 164485
//                       Created
//========================================================================
function validateNurse(code,name) {
  var hcpnurse = chkHcpOTNurse();
  if  (hcpnurse==true){
      validateCode('18',code,name);
  }
  else {
      validateCode('17',code,name,document.UpdateForm.gnm);
      SetNurseName(name);
  }
}
function SetNurseName(name) {
  name.value=UpdateForm.gnm.value.replace(/\s*$/g,"") + " " +
             name.value.replace(/\s*$/g,"")
}
function UpdateLink(uniqueky,admissno,rectype,trannumb) {
    linkurl="oprweb06.pbl?reportno=3&template=5" +
            "&uniqueky=" + uniqueky.replace(/ /g,"+") +
            "&admissno=" + admissno.replace(/ /g,"+") +
            "&irectype=" + rectype.replace(/ /g,"+") +
            "&trannumb=" + trannumb.replace(/ /g,"+") +
            "&oncology=" + UpdateForm.oncology.value.replace(/ /g,"+")
    DFrameLink(linkurl,30,50,600,240);
 }

function chkTime(field){
  if(isWhitespace(field.value))
    return;
  endTime=UpdateForm.opsrg006.value.replace(/:/g,"");
  if(isWhitespace(endTime)){
     alert("Surgery End Time must be entered first");
     field.value=""
     return;
  }
  if(field.value.replace(/:/g,"")<=endTime){
    if(!confirm(""+field.title+" must be after Surgery End Time." +
                "\n Do you want to override")) {
      field.value="";
    }
  }
}

function AddMBSItem() {
    UpdateForm.target="PopUpFrame"
    if (UpdateDayProc()) {
        setTimeout('showMBSMISC()',100);
    }
    UpdateForm.target="";
}

function showMBSMISC() {
  Left=(document.body.clientWidth-850)/2
  linkurl="oprweb06.pbl?reportno=02&template=003&admissno="+
          document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&teamnumb=1&oncology=1"
  DFrameLink(linkurl,100,Left,850,450);
}
function AddMBSItemDO() {
    UpdateForm.target="PopUpFrame"
    if (UpdateDayProc()) {
        setTimeout('showMBSMISCDO()',100);
    }
    UpdateForm.target="";
}
function showMBSMISCDO() {
  Left=(document.body.clientWidth-850)/2
  if(document.UpdateForm.bkunladm.value!=""){
    linkurl="oprweb06.pbl?reportno=02&template=003&bkunq001="+
            document.UpdateForm.admissno.value.replace(/ /g,"+") +
            "&admissno="+
            document.UpdateForm.bkunladm.value.replace(/ /g,"+") +
            "&teamnumb=1&oncology=1"
  } else {
    linkurl="oprweb06.pbl?reportno=02&template=003&admissno="+
            document.UpdateForm.admissno.value.replace(/ /g,"+") +
            "&teamnumb=1&oncology=1"
  }
  DFrameLink(linkurl,100,Left,850,450);
}

function AddExpItem() {
  UpdateForm.target="PopUpFrame"
  if (UpdateDayProc()) {
    setTimeout('showExpItem()',100);
  }
  UpdateForm.target="";
}

// Update Day Procedure Details
function UpdateDayProc() {
   document.UpdateForm.updatety.value="U";
   return(formSubmit());

}

// Validate Surgery End Time
function chkSurgEnd() {
  if(!isWhitespace(UpdateForm.opsrg006.value)) {
    if(isWhitespace(UpdateForm.opsrg005.value)) {
      alert("Surgery Start Time must be entered first.");
      UpdateForm.opsrg006.value="";
      UpdateForm.opsrg005.focus(); 
      return;
    }
  }
}

// Refresh Page
function RefreshPage() {
   document.UpdateForm.method="get"
   document.UpdateForm.updatety.value="";
   document.UpdateForm.submit();
}

// Form Submit
function formSubmit() {
   if(validateMandatory(UpdateForm)) {
      if (isWhitespace(UpdateForm.redirect.value)) {
        UpdateForm.redirect.value="patweb98.pbl?reportno=01&template=001"+
            "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+")+
            "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+"); 
      }
      document.UpdateForm.submit();
      return true;
    }
    else
      return false;
}
// Set Team no.
function set(){
 PatientLinks.teamnumb.value=UpdateForm.teamnumb.value;
}
function displayRegime() {
   RegimeHead1.innerHTML=regimehd1.innerHTML;
   RegimeCode1.innerHTML=regimecod1.innerHTML;
   RegimeHead2.innerHTML=regimehd2.innerHTML;
   RegimeCode2.innerHTML=regimecod2.innerHTML;
   RegimeHead3.innerHTML=regimehd3.innerHTML;
   RegimeCode3.innerHTML=regimecod3.innerHTML;
}

function BillProvCMBS(){
   if(document.UpdateForm.d_showprov.checked==true) {
     document.UpdateForm.showprov.value="1";
   } else {
     document.UpdateForm.showprov.value="0";
   }

   document.UpdateForm.redirect.value="oprweb06.pbl?reportno=17&template=001&"+
           "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
           "&showprov=" + document.UpdateForm.showprov.value

    document.UpdateForm.updatety.value="B";
    document.UpdateForm.nextpage.value=1;
    document.UpdateForm.submit();
}

function UpdateItems() {
    document.UpdateForm.updatety.value="P";
    document.UpdateForm.nextpage.value=1;
   document.UpdateForm.redirect.value="oprweb06.pbl?reportno=17&template=001&"+
           "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");
    document.UpdateForm.submit();
}

function CancelItems() {
    document.UpdateForm.showprov.value=document.UpdateForm.prvmmbs.value;
    document.UpdateForm.updatety.value="";
    document.UpdateForm.submit();
}
//C-0825792 - Check parameter to Use pmshcpaf/oprnuraf for OT Nurse
function chkHcpOTNurse(){
  if (document.getElementById('opcnurse')) {
      if (document.getElementById('opcnurse').value == "1") {
        return true;
      }
      else {
        return false;
      }
  }
  else {
      return false;
  }
}
//C-0825792 - Search Nurse from pmshcpaf/oprnuraf for OT Nurse
function SearchOTNurse(NurseId,ReturnNurseName) {
  var hcpnurse = chkHcpOTNurse();
  if (hcpnurse==true){
     HCPSearchFrame(NurseId,ReturnNurseName,20);
  }
  else {
     NurseSearchFrame(NurseId,ReturnNurseName);
  }
}

