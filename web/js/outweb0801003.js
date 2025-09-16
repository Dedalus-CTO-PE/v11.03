//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : outweb0801003.js
//------------------------------------------------------------ 
function SelectFirstApp() {
 if(isWhitespace(SearchForm.firstadm.value)) {
   if(confirm("No bookings have been made. OK to Continue?")) {
       PatientLinkTo("outweb08.pbl",1,2,0,0,0);
       return;
   }
 } else {
   linkurl="outweb02.pbl?reportno=3&template=1&urnumber=" +
          SearchForm.urnumber.value.replace(/ /g,"+") + 
          "&admissno=" + SearchForm.firstadm.value.replace(/ /g,"+") +
          "&refrlvis=" + document.SearchForm.refrlvis.value.replace(/ /g,"+") +
          "&bookflag=" + document.SearchForm.bookflag.value.replace(/ /g,"+") +
          "&shwprint=1";
   location.href=linkurl;
 }
}
function checkReservation(BookingKey) {
  document.SearchForm.savebkey.value=BookingKey
  checkSlotRes(BookingKey,"1","","",ReserveMultSes)
}
//
function ReserveMultSes() {
  BookingKey=document.SearchForm.savebkey.value;
  reserveSlot(BookingKey,"3","","",DisplayPage)
}
//
function DisplayPage() {
  location.reload();
}
//
function SelectMultSes(BookingKey) {
    document.SearchForm.thisslot.value=BookingKey;
    reserveSlot(BookingKey,"","","",CreateBooking)
}
function SelectMultApp(CaseKeys) {
 CASEKEYS=CaseKeys.replace(/ /g,"+")
 location.href="outweb02.pbl?reportno=3&template=1&casekeys="+CASEKEYS
}
//
function CreateBooking() {
  linkurl="outweb08.pbl?reportno=3&template=002"+
  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
  "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
  "&multbkey=" + SearchForm.thisslot.value.replace(/ /g,"+") +
  "&casekeys=" + SearchForm.thisslot.value.replace(/ /g,"+") +
  "&refrlvis=" + SearchForm.refrlvis.value.replace(/ /g,"+") +
  "&bookflag=" + SearchForm.bookflag.value.replace(/ /g,"+") +
  "&firstadm=" + SearchForm.firstadm.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,0,Left,850,550)

}
//
var MaxSess=0;
//
function StoreCookie() {
  storesearch="";
  if(!isWhitespace(SearchForm.searched1.value)) {
    storesearch+="&multsrch=" + SearchForm.searched1.value 
  }
  if(!isWhitespace(SearchForm.searched2.value)) {
    storesearch+="&multsrch=" + SearchForm.searched2.value 
  }
  if(!isWhitespace(SearchForm.searched3.value)) {
    storesearch+="&multsrch=" + SearchForm.searched3.value 
  }
  if(!isWhitespace(SearchForm.searched4.value)) {
    storesearch+="&multsrch=" + SearchForm.searched4.value 
  }
  if(!isWhitespace(SearchForm.searched5.value)) {
    storesearch+="&multsrch=" + SearchForm.searched5.value 
  }
  if(!isWhitespace(SearchForm.searched6.value)) {
    storesearch+="&multsrch=" + SearchForm.searched6.value 
  }
  document.cookie = "MultipleHCP" + "=" + escape(storesearch) + ";"
}
//-----------------------------------------------------------------
// Function To Reserve slot booking using remote scripting
// and display a warning if there is a possibleslot start time conflict
//-----------------------------------------------------------------
function checkSlotRes(casekeys,reserve1,reserve2,reserve3) {
  ReturnFunction="" ;
  for (var i=1; i < checkSlotRes.arguments.length; i++) {
   if (typeof(checkSlotRes.arguments[i]) == 'function') {
     ReturnFunction=checkSlotRes.arguments[i] } }
  var serverURL = "../cgi-bin/outweb08.pbl?reportno=7&updttype=1" +
                  "&casekeys="+casekeys.replace(/ /g,"+") +
                  "&reserve1="+reserve1.replace(/ /g,"+") +
                  "&reserve2="+reserve2.replace(/ /g,"+") +
                  "&reserve3="+reserve3.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
//-----------------------------------------------------------------
// Function To Reserve slot booking using remote scripting
// and display a warning if there is a possibleslot start time conflict
//-----------------------------------------------------------------
function reserveSlot(casekeys,reserve1,reserve2,reserve3) {
  ReturnFunction="" ;
  for (var i=1; i < reserveSlot.arguments.length; i++) {
   if (typeof(reserveSlot.arguments[i]) == 'function') {
     ReturnFunction=reserveSlot.arguments[i] } }
  var serverURL = "../cgi-bin/outweb08.pbl?reportno=7&updttype=2" +
                  "&casekeys="+casekeys.replace(/ /g,"+") +
                  "&reserve1="+reserve1.replace(/ /g,"+") +
                  "&reserve2="+reserve2.replace(/ /g,"+") +
                  "&reserve3="+reserve3.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
}
//
function SingleApp() {
  GetFirstBook();
  if(SessCount==0) {
    alert("Please select at least one appointment");
    return;
  }
  linkurl="outweb08.pbl?reportno=3&template=003" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&refrlvis=" + document.SearchForm.refrlvis.value.replace(/ /g,"+") +
          "&bookflag=" + document.SearchForm.bookflag.value.replace(/ /g,"+") +
          "&casekeys=" + document.SearchForm.deftcask.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,0,Left,850,750)
}
function GetFirstBook() {
  for (var e = 0; e < SearchForm.elements.length; e++) {
    var el=SearchForm.elements[e] ;
    if(el.name.match(/seribkey/) && el.value!="") {
     document.SearchForm.deftcask.value=el.value
     SessCount=1;
     return;
    }
  }
}
