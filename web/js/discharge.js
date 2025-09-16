//jsVersion  : V11.03.00
//Modification History: 27/09/2001 Ebon Clements
//                                 Java script changes for patweb96 templates
function ChkIndicator() {
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind!="1") {
    document.pat96pdf.dschstat.focus()
    alert("Transfer source not required for selected Discharge Destination")
    document.pat96pdf.dschstat.focus()
  }
}
function DischargeSrc() {
  i=document.pat96pdf.dschdest.selectedIndex
  ind=document.pat96pdf.dschdest.options[i].value.substring(4,5)
//  document.pat96pdf.trnsfsrc.selectedIndex=0
  if (ind=="1") {
    document.pat96pdf.trnsfsrc.focus()
  }
}
function Autopsy() {
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind=="D") {
    document.pat96pdf.dschdind.value="1"
  }
  else {
    document.pat96pdf.dschautp.checked=0 }
}
function ChkDindi() {
  i=document.pat96pdf.dschstat.selectedIndex
  ind=document.pat96pdf.dschstat.options[i].value.substring(3,4)
  if (ind!="D") {
    document.pat96pdf.dschdia1.focus()
    alert("Autopsy not required for selected Discharge Status")
    document.pat96pdf.dschdia1.focus()
    document.pat96pdf.dschautp.checked=0
  }
}
