//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0602014HoverInfoCAB.js
//
// Written   : 17.03.2021 Peter Vela
//
// Function  : Variables for Cab Emr Billing Sheet Hover Icons
//=======================================================================

FeeTypeInfo = "Hovericon 1 Fee Type hover information. Change description in emrweb0602014HoverInfoCAB.js";
ConsultationComplexityInfo = "Hovericon 2 Consultation Complexity hover information. Change this description in emrweb0602014HoverInfoCAB.js";
GoalsOfCareDiscussionInfo = "Hovericon 3 Goals Of Care Discussion hover information. Change this description in emrweb0602014HoverInfoCAB.js";
ResuscitationInfo = "Hovericon 4 Resuscitation hover information. Change this description in emrweb0602014HoverInfoCAB.js";
FractureInfo = "Hovericon 5 Fracture hover information. Change this description in emrweb0602014HoverInfoCAB.js";
ProceduresInfo = "Hovericon 6 Procedures hover information. Change this description in emrweb0602014HoverInfoCAB.js";
AnaesthesiaInfo = "Hovericon 7 Anaesthesia hover information. Change this description in emrweb0602014HoverInfoCAB.js";
IntubationInfo = "Hovericon 8 Intubation hover information. Change this description in emrweb0602014HoverInfoCAB.js";
RestraintInfo = "Hovericon 9 Restraint hover information. Change this description in emrweb0602014HoverInfoCAB.js";
SportsPhysicianInfo = "Hovericon 10 Sports Physician hover information. Change this description in emrweb0602014HoverInfoCAB.js";
DrBillingInfo = "Hovericon 11 Dr Billing hover information. Change this description in emrweb0602014HoverInfoCAB.js";

function showPopUp(string,e)
{
  if(!e)
    e = event.srcElement || event.target;

  var popAlert = document.createElement("div");
  var span = document.createElement("span");
  var parent = e.parentNode;

  e.src = "../images/Help.gif";

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
         e.src = "../images/Help.gif";
//       }
  }
}
