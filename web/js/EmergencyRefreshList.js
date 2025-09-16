//jsVersion  : V11.03.00
//-----------------------------------------------------------------------------
var startDate = new Date();
var startTime = startDate.getTime();

var refreshTimeout = null;
var initTblTimeout = null;
var ajaxRefreshTimeout = null;

var clickedOnPatient = false;

function InitPage(DataRequestURL) {
  StartProgressBar()
  GetPatientRows(DataRequestURL);
  InitList();
}

function StartProgressBar() {
  startDate = new Date();
  startTime = startDate.getTime();
  pb=document.getElementById("ProgressBar")
  pb.innerHTML='Loading Page ....';
  pb.style.backgroundImage='url(../images/ProgressBar.gif)';
}

function GetPatientRows(DataRequestURL) {
  var theURL = DataRequestURL;
  var h = document.getElementsByTagName("head")[0];
  var s = document.createElement("script");

  xmlHttp = createHttpObject();
  theURL = theURL + '&httprand=' + Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText != "" && 
      xmlHttp.status == 200) {
    s.type="text/javascript";
    s.id="scAddTableRows";
    s.text=xmlHttp.responseText;
    h.appendChild(s);
  } else {
    alert("Web Service Not Available. Please Try Again.");
  }
}

function RemPatientRows() {
  var h = document.getElementsByTagName("head")[0];
  var s = document.getElementById("scAddTableRows");

  if (s != undefined) {
    h.removeChild(s);
  }
}

function SetReturnPathCookie() {
  document.cookie = "ReturnPath=" + escape(location.href) + ";"
}

function AJAXRefresh(DataRequestURL) {
  StartProgressBar();
  if (ajaxRefreshTimeout != null) {
    window.clearTimeout(ajaxRefreshTimeout);
  }
  ajaxRefreshTimeout = window.setTimeout(function() {
                         RemPatientRows();GetPatientRows(DataRequestURL);
                         InitList();}, 100);
}

function InitList() {
  // Stub function to be implemented on the template; 
  // Template-specific logic; i.e. Set list heading, add list columns, etc

}

function SelectPatient(urnumber,admissno) {
  // Stub function to be implemented on the template; 
  // Specify patient select redirect URL

}
