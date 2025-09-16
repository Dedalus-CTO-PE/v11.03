//jsVersion  : V11.03.00
//========================================================================
// Program   : nhiweb96.js
//
// Written   : 14/04/2003
//
// Function  : Standard Functions Used in nhiweb96 templates
//
// Version   : 
//
//V10.14.01 14/05/2019  Sunny       Task 0871171
//                      Changed wording of HCU ID and NMPI No to be NHI No
// V9.03.01 06.06.2003  Ebon Clements    39898
//                      Added new function Ckfield
//========================================================================
//
//
function UpCase(str){
  str.value=str.value.toUpperCase();
}
//
function NextPage(ContinuePointer) {
    document.search.nzsrh001.value=2
    document.search.nzsrh002.value=ContinuePointer
    document.search.submit()
}
//
function DateLookup(Date) {

 window.dateField = Date;

 LookupDate=open("/lookups/DateLookup.html", "DateLookupWindow",

  "width=190,height=210,top=100,left=190,scrollbars=no," +  
  "status=no,toolbar=no,menubar=no") ;
}
//
function PatientSelected(NationalNo,LocalNo,LocalStatus) {
  if (LocalStatus=="0") {
    alert("Patient Exists on Local System");
    alert(LocalNo);
    document.PatientLink.reportno.value=1
    document.PatientLink.template.valuee=2
    document.PatientLink.urnumber.value=NationalNo
    document.PatientLink.submit()
  }

  if (LocalStatus=="1") {
    alert("Patient Does NOT Exist on Local System");
    alert("NHI No " + NationalNo + "   Local UR " + LocalNo)
  }
}
function Ckfeild(name)
{
name.value=name.value.split(/\s/);
var result=name.value.match(/[^a-zA-Z]/);
if (result !=null) {
alert("  Please Re-Enter Correctly!   ");
                   }
}
