//jsVersion  : V11.03.01
//========================================================================
// Program   : TheatreScreensHoverInfo.js
//
// Written   : 16.05.2018 Peter Vela
//
// Function  : Variables for Theatre Hover Icons
//=======================================================================
function showPopUpTheatreSess(string,popupWidth,popupLeft,popupTop,e)
{
  if(!e)
    e = event.srcElement || event.target;

  var popAlert = document.createElement("div");
  popAlert.setAttribute("id","PopAlert");
  var span = document.createElement("span");
  var parent = e.parentNode;

  e.src = "../images/HelpIconHL.gif";

  span.innerText = string;

  popAlert.appendChild(span);
  parent.appendChild(popAlert);

  popAlert.style.position = "absolute";
  popAlert.style.background = "#ffffcc";
  popAlert.style.color = "black";
  popAlert.style.border = "outset 1px grey";
  popAlert.style.padding = "5px 5px 5px 5px";
  popAlert.style.marginLeft ="2px";
  popAlert.style.marginTop = "0px";
  popAlert.style.top = popupTop + "px";
  popAlert.style.width = popupWidth + "px";
  popAlert.style.left = popupLeft + "px";

  var popAlertID = document.getElementById("PopAlert");
  var parentID = document.getElementById("PageBodySection");
  var popAlertBottom = popAlertID.getBoundingClientRect().bottom;
  var parentBottom = parentID.getBoundingClientRect().bottom;
  var i = popupTop;

  while (popAlertBottom > parentBottom) {
    i -= 5;
    popAlert.style.top = i + "px";
    popAlertBottom = popAlertID.getBoundingClientRect().bottom;
    parentBottom = parentID.getBoundingClientRect().bottom;
  }

  e.onmouseout = function()
  {
//       if(parent.all[parent.all.length-1].nodeName != "IMG")
//       {
         parent.removeChild(popAlert);
         e.src = "../images/HelpIcon.gif";
//       }
  }
}

function showPopUp(string,e)
{
  if(!e)
    e = event.srcElement || event.target;

  var popAlert = document.createElement("div");
  var span = document.createElement("span");
  var parent = e.parentNode;

  e.src = "../images/HelpIconHL.gif";

  span.innerText = string;

  popAlert.appendChild(span);
  parent.appendChild(popAlert);

  popAlert.style.position = "absolute";
  popAlert.style.background = "#ffffcc";
  popAlert.style.color = "black";
  popAlert.style.border = "outset 1px grey";
  popAlert.style.padding = "5px 5px 5px 5px";
  popAlert.style.marginLeft ="2px";
  popAlert.style.marginTop = "15px";
  popAlert.style.width = "200px";

  e.onmouseout = function()
  {
//       if(parent.all[parent.all.length-1].nodeName != "IMG")
//       {
         parent.removeChild(popAlert);
         e.src = "../images/HelpIcon.gif";
//       }
  }
}
