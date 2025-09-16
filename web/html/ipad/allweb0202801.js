//jsVersion  : V11.03.00
//
//------------------------------------------------------------
// Change Status
// V10.03.01 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
//------------------------------------------------------------
function UpdateReferral(){
   linkurl="allweb02.pbl?reportno=2&template=803" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&deptcode=" + HiddenFields.refrdept.value.replace(/ /g,"+")
   title="Update Referral"
   openDocument(CGIPath+linkurl,title);
}
function displayStatusOptions(){
  var referralStatusCode = document.getElementById('rfstcode');
  var viewlink = document.getElementById('viewlink');
  if(typeof referralStatusCode != 'undefined') {
    if(referralStatusCode.value == "1" ) {
       viewlink.options[viewlink.options.length] = new Option("Waiting","6");
    }
  }
}
function PopulateFields() {
  el=document.getElementById("clinicalResults")
  theURL="cliweb10.pbl?reportno=6&template=10"+
         "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") 
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    el.innerHTML=xmlHttp.responseText;
  }
}
function ViewLink(OptionLink) {
  switch (OptionLink.value) {
    case "0": { Inactivate(); break; }
    case "1": { Reactivate(); break; }
    case "2": { Close(); break; }
    case "3": { Cancel(); break; }
    case "4": { Reject(); break; }
    case "5": { Reinstate(); break; }
    case "6": { Waiting(); break; }
  }
  OptionLink.selectedIndex=0;
}
function Inactivate() {
   linkurl="allweb02.pbl?reportno=2&template=805" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   title="Make Referral Inactive"
   openDocument(CGIPath+linkurl,title);
}
function Reactivate() {
   linkurl="allweb02.pbl?reportno=2&template=806" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   title="Re-Activate Referral"
   openDocument(CGIPath+linkurl,title);
}
function Close() {
   linkurl="allweb02.pbl?reportno=2&template=804" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
           "&deptcode=" + HiddenFields.refrdept.value.replace(/ /g,"+")
   title="Close Referral"
   openDocument(CGIPath+linkurl,title);
}
function Cancel() {
   linkurl="allweb02.pbl?reportno=2&template=807" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   title="Cancel Referral"
   openDocument(CGIPath+linkurl,title);
}
function Reject() {
   linkurl="allweb02.pbl?reportno=2&template=810" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   title="Reject Referral"
   openDocument(CGIPath+linkurl,title);
}
function Reinstate() {
   linkurl="allweb02.pbl?reportno=2&template=811" +
           "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+")
   title="Reinstate Referral"
   openDocument(CGIPath+linkurl,title);
}
function Waiting() {
   linkurl = "allweb02.pbl?reportno=2&updatety=K" +
             "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
             "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+");
   RSExecute(linkurl);
   location.reload(true);
}
