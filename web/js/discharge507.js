//jsVersion  : V11.03.00
function ChkDestInd() {
  // Check Destination for transfer source
  i=document.pat96pdf.dschdest.selectedIndex
  ind=document.pat96pdf.dschdest.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind!="1") {
    document.pat96pdf.dschstat.focus()
    document.pat96pdf.trnsfsrc.value="";
    alert("Transfer source not required for selected Discharge Destination")
    document.pat96pdf.dschstat.focus()
  }
}

function ChkStatInd() {
  // Check status for transfer source
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind!="1") {
    document.pat96pdf.dschdest.focus()
    alert("Transfer source not required for selected Discharge Status")
    document.pat96pdf.dschdest.focus()
  }
}

function DischargeDest() {
  // Set focus to transfer source if indicator set on Destination
  i=document.pat96pdf.dschdest.selectedIndex;
  ind=document.pat96pdf.dschdest.options[i].value.substring(4,5);
//  document.pat96pdf.trnsfsrc.selectedIndex=0;
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus();
  } 
}

function CheckIndiStat(){
  // Check indicator for transfer source
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus()
  }
  // Check indicator for deceased
  i2=document.pat96pdf.dschstat.selectedIndex
  ind2=document.pat96pdf.dschstat.options[i2].value.substring(3,4)
  if (ind2=="D") {
    document.pat96pdf.dschdind.value="1"
  }
  else {
    document.pat96pdf.dschautp.checked=0 }
}

function DischargeStat() {
  // Set focus to transfer source if indicator set on Status
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus()
  }
}

function Autopsy() {
  //set deceased indicator (hidden field) otherwise autospy must no be checked
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind=="D") {
    document.pat96pdf.dschdind.value="1"
  }
  else {
    document.pat96pdf.dschautp.checked=0 }
}

function ChkDindi() {
  // check deceased indicator on status
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind!="D") {
    document.pat96pdf.dschdia1.focus()
    alert("Autopsy not required for selected Discharge Status")
    document.pat96pdf.dschdia1.focus()
    document.pat96pdf.dschautp.checked=0
  }
}
function defTime(timeField,timeString) {
  timeField.value="          ";
  checkTime(timeField,timeString);
}
function CancelTrans() {
  document.cancel.submit();
}
function FilterDischargeStatus() {
 if(document.pat96pdf.mh_visit.value == "1") {
   filterCatCodeList(pat96pdf.dschstat,"10","G","1");  // MH Visit
 } else {
   filterCatCodeList(pat96pdf.dschstat,"10","M","1");  // Non MH Visit
 }
}
function FilterDischargeDestination() {
 if(document.pat96pdf.mh_visit.value == "1") {
   filterCatCodeList(pat96pdf.dschdest,"11","G","1");  // MH Visit
 } else {
   filterCatCodeList(pat96pdf.dschdest,"11","M","1");  // Non MH Visit
 }
}

