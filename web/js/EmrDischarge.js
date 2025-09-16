//jsVersion  : V11.03.00
function ChkDestInd() {
  // Check Destination for discharge destination
  i=document.UpdateForm.emvis026.selectedIndex
  ind=document.UpdateForm.emvis026.options[i].value.substring(4,5)
  document.UpdateForm.emvis033.selectedIndex=0
  if (ind!="4") {
    document.UpdateForm.emvis026.focus()
    alert("Transfer source not required for selected Discharge Destination")
    document.UpdateForm.emvis026.focus()
  }
}
function ChkStatInd() {
  // Check status for transfer source
  i=document.UpdateForm.emvis026.selectedIndex
  ind=document.UpdateForm.emvis026.options[i].value.substring(4,5)
  document.UpdateForm.emvis033.selectedIndex=0
  if (ind!="4") {
    document.UpdateForm.dschdest.focus()
    alert("Transfer source not required for selected Discharge Status")
    document.UpdateForm.dschdest.focus()
  }
}
function DischargeDest() {
  // Set focus to transfer source if indicator set on Destination
  i=document.UpdateForm.dschdest.selectedIndex
  ind=document.UpdateForm.dschdest.options[i].value.substring(4,5)
  document.UpdateForm.emvis033.selectedIndex=0
  if (ind=="4") {
    document.UpdateForm.emvis033.focus()
  }
}
function CheckIndiStat(){
  // Check indicator for transfer destination
  i=document.UpdateForm.emvis026.selectedIndex
  ind=document.UpdateForm.emvis026.options[i].value.substring(4,5)
//  document.UpdateForm.emvis033.selectedIndex=0
  if (ind=="4") {
    if (document.UpdateForm.emvis033.selectedIndex=="0") {
      alert("Please enter a Transfer Destination.");
      document.UpdateForm.emvis033.focus()
      return;
    }
  }
}
function DischargeStat() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=document.UpdateForm.emvis026.options[i].value.substring(4,5)
  if(ind=="2") {
      document.UpdateForm.redirect.value="patweb89.pbl?reportno=1&" + 
                                     "template=16&urnumber=" + 
                                     document.UpdateForm.urnumber.value
      document.UpdateForm.nextpage.value="2"
      }
  else {
      document.UpdateForm.nextpage.value="1"
      document.UpdateForm.redirect.value=""
      }    
}
function ChkIndicator() {
  i=document.UpdateForm.emvis026.selectedIndex
  ind=document.UpdateForm.emvis026.options[i].value.substring(4,5)
  if (ind!="4") {
    document.UpdateForm.emvis033.selectedIndex=0
    alert("Discharge Destination not required for selected Departure Status")
    document.UpdateForm.emvis026.focus()
  }
}
