//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : Support.js
//
// Function     : Utility functions for Support.html
//
// Created      : 12/09/2022  Don Nguyen
//------------------------------------------------------------
var isIE11 = (!!window.MSInputMethodContext && !!document.documentMode)
var IECompatibilityMode = false;
var sAgentString = window.navigator.userAgent;

if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
      sAgentString.indexOf("MSIE 7.0") >= 1 ||
      sAgentString.indexOf("MSIE 8.0") >= 1) &&
     sAgentString.indexOf("compatible") >= 1 )
{
  IECompatibilityMode = true;
}

var IEBrowser = (IECompatibilityMode || isIE11);

function ToggleSection(Div, SectionID, RowDataCookieID) {
  if (IEBrowser) {
    alert("This feature is not supported in IE 11. \nPlease use Edge/Chrome/Firefox.");
    return;
  }

  var section = document.getElementById(SectionID);
  var rows = opener.GetCookieData(RowDataCookieID);

  if (rows == "unknown") rows="";

  if (Div.className=="x-tool x-tool-expand") {
    Div.className="x-tool x-tool-collapse";
    section.innerHTML = "<table width=100% border=1 cellpadding=2 cellspacing=0>" + rows + "</table>";
    section.style.height='auto';
    section.style.zIndex='900';
  }
  else {
    Div.className="x-tool x-tool-expand";
    section.innerHTML = "";
    section.style.height='20px';
    section.style.zIndex='900';
  }
}
