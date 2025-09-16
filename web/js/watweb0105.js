//jsVersion  : V11.03.00
//
// Set Status Via Remote Script
//
function setStatus(ReturnCode,SetSelect){
  var serverURL   = "../cgi-bin/watweb01.pbl?reportno=9" +
                    "&watsu003=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    var status=returnValue.return_value;
    for (var i =0 ; i < SetSelect.length; i++) {
      if (SetSelect.options[i].value.substring(0,1) == status ) {
         SetSelect.selectedIndex=i 
         return(0); } 
      else {
         SetSelect.selectedIndex="0" }
    };
  }
  else { ReturnCode.select();  }
}
function RefreshSubmit(SubmitForm) {
   var fromdate = new Date(SubmitForm.watsu001.value);
   var enddate = new Date(SubmitForm.watsu002.value);
   var gap=enddate.getTime()-fromdate.getTime();
   gap = gap/(1000*60*60*24);
   if (gap < 0){
      alert("The From Date Should be less than To Date");
      SubmitForm.watsu001.value=""; }
   else {
    if (validateMandatory(SubmitForm)) {
      SubmitForm.submit(); } }
}
