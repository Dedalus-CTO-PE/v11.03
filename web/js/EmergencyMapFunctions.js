//jsVersion  : V11.03.00
//============================================================
// Emergency Map Functions Drag & Drop etc
//============================================================
globalLinkType = null;
globalLinkUrl = null;
originalLocId = null;
whichEl = null;
DropEl = null;
var ReturnValue = new Object();
//============================================================
// OnKeyDown Event
//============================================================
function OnKeyDown(e) {
  // get the event (cross browser method)
  e = e || window.event;
  if (e.keyCode == 13) {
    return false;}
}
//------------------------------------------------------------
// Click on a Patient to Display Page in Content Frame
//------------------------------------------------------------
function clickEl(e) {
  e = e || window.event;

  ClickEl = e.srcElement || e.target;
  if (top.content.location.search.substring(1,23)=="reportno=2&template=3") {
    if (IsDirtyTriage(top.content.UpdateForm)==true) {
      alert("Please complete all Triage details !");
      return;
    }
  }
  // 
  if (top.content.location.search.substring(1,24)=="reportno=2&template=020") {
    if (IsDirtyTriage(top.content.UpdateForm)==true) {
      alert("Please complete all Registration/Triage details !");
      return;
    }
  }
  //
  while (ClickEl.id.indexOf("Patient") == -1) {
    ClickEl = ClickEl.parentElement;
    if (ClickEl == null) { return }
  }
  PatientNoArray = ClickEl.id.split("-");
  PatientNo = PatientNoArray[1];
  whichEl = null;
  ShowPatientDetails(PatientNo);

  stopEvent(e);
}
//------------------------------------------------------------
// Double Click on a Patient to Display Page in EmergencyFrame
//------------------------------------------------------------
function dblclickEl(e) {
  e = e || window.event;

  dblClickEl = e.srcElement || e.target;
  if (top.content.location.search.substring(1,23)=="reportno=2&template=3") {
    if (IsDirtyTriage(top.content.UpdateForm)==true) { return; }
  }
  while (dblClickEl.id.indexOf("Patient") == -1) {
    dblClickEl = dblClickEl.parentElement;
    if (dblClickEl == null) { return }
  }
  dblPatientNoArray = dblClickEl.id.split("-");
  dblPatientNo = dblPatientNoArray[1];
  whichEl = null;
  setTimeout('EmergencyTopPage()',200);
}
//============================================================
// Grab when MouseDown Event
//============================================================
function grabEl(e) 
{
  // get the event (cross browser method)
  e = e || window.event;

  if (top.content.IsDirty != null) 
  {
    if (top.content.IsDirty(top.content.document.UpdateForm)) 
    {
      if (confirm("Information has changed. Perform Update Now.")) 
      {
        top.content.SubmitForm();
      }
      return; 
    } 
  }
  whichEl = e.srcElement || e.target;
  while (whichEl.id.indexOf("Patient") == -1) 
  {
    whichEl = whichEl.parentElement;
    if (whichEl == null) { return; } 
  }
  if (whichEl.id != activeEl.id)
  {
    if (typeof activeEl.style.zIndex == "number") {
      whichEl.style.zIndex = activeEl.style.zIndex + 100;
    }
    else {
      if (isWhitespace(activeEl.style.zIndex)) {
        whichEl.style.zIndex = "100";
      }
      else {
        whichEl.style.zIndex = parseInt(activeEl.style.zIndex,10) + 100 + "";
      }
    }
    activeEl = whichEl;
  }
  originalLocId = null;
  for (var i = 0; i < obj.locations.length; i++) 
  {
    if ((whichEl.offsetTop  >= obj.locations[i][3] &&
         whichEl.offsetTop  <= obj.locations[i][5] )&&
        (whichEl.offsetLeft >= obj.locations[i][2] &&
         whichEl.offsetLeft <= obj.locations[i][4])) 
    {
      originalLocId = i ;
      break;
    }
  }
  originalLeft = whichEl.offsetLeft;
  originalTop  = whichEl.offsetTop ;
  whichEl.style.left = whichEl.offsetLeft + "px";
  whichEl.style.top = whichEl.offsetTop + "px";
  currentX = (e.clientX + document.body.scrollLeft);
  currentY = (e.clientY + document.body.scrollTop);
}
function moveEl(e) { 
  e = e || window.event;

  window.scroll(0,0)
  if (whichEl == null) { return };
  newX = (e.clientX + document.body.scrollLeft);
  newY = (e.clientY + document.body.scrollTop);
  distanceX = (newX - currentX);
  distanceY = (newY - currentY);
  currentX = newX;
  currentY = newY;
  whichEl.style.left = whichEl.offsetLeft + distanceX + "px";
  whichEl.style.top = whichEl.offsetTop + distanceY + "px";

  stopEvent(e);
}
function dropEl(e) {
  e = e || window.event;

  DropFail=true
  if (whichEl == null) { return };
  if (originalLocId == null) { return };
  for(var i = 0; i < obj.locations.length; i++) {
   if ((whichEl.offsetTop  > obj.locations[i][3] &&
        whichEl.offsetTop  < obj.locations[i][5] )&&
       (whichEl.offsetLeft > obj.locations[i][2] &&
        whichEl.offsetLeft < obj.locations[i][4])) {
     if  ( i != originalLocId ) {
       NewLocation=obj.locations[i][1];
       NewLocationName=obj.locations[i][0];
       LocationOk=true
       if (obj.locations[i][8] == undefined) {
          LocationOk=CheckPatientLocation(NewLocation) }
       if (LocationOk) {
         whichEl.style.top = obj.locations[i][7] + "px";
         whichEl.style.left = obj.locations[i][6] + "px";
         PatientNoArray = whichEl.id.split("-");
         PatientNo = PatientNoArray[1];
         obj.patients[PatientNo][3]=NewLocation
         updateLocation(obj.patients[PatientNo][1],NewLocation,"0"); 
         DropFail=false
         break; }
       else {
         whichEl.style.top = originalTop + "px";
         whichEl.style.left = originalLeft + "px";
         break;}
       }}}
  if (DropFail) {
    whichEl.style.top = originalTop + "px";
    whichEl.style.left = originalLeft + "px";
  }
  DropEl = whichEl;
  whichEl = null;    

  stopEvent(e);
}    
function CheckPatientLocation(Location) {
  for(var j = 0; j < obj.patients.length; j++) {
    if ( Location==obj.patients[j][3] ) { 
      SwapPatient=j;
      PatientDivisions = document.getElementsByTagName("DIV");
      for (i=0; i<PatientDivisions.length; i++) {
         PatientDiv=PatientDivisions[i].id.split("-")
         if (PatientDiv[0]=="Patient" && PatientDiv[1]==SwapPatient) {
            SwapEl=PatientDivisions[i] }}
      SwapFlag=confirm('Swap Patient Locations ? ')
      if (SwapFlag == false ) { return SwapFlag } 
      if (SwapFlag) { 
        SwapEl.style.top = obj.locations[originalLocId][7] + "px";
        SwapEl.style.left = obj.locations[originalLocId][6] + "px";
        PatientNoArray = SwapEl.id.split("-");
        PatientNo = PatientNoArray[1];
        obj.patients[PatientNo][3]=obj.locations[originalLocId][1]
        updateLocation(obj.patients[PatientNo][1],
                       obj.locations[originalLocId][1],"1")
      return SwapFlag }}}

// removed alert box
//  MoveFlag=confirm("New Location " + NewLocationName) 
// set to allways be YES now !!! 
  MoveFlag=1 
  return MoveFlag 
}
function otherLocation(admissno,locacode,username,password) {
  UpdateLocation.action='emrweb01.pbl'
  UpdateLocation.reportno.value='3'
  UpdateLocation.template.value='1'
  UpdateLocation.nextpage.value='1'
  UpdateLocation.admissno.value=admissno
  UpdateLocation.updateky.value=obj.patients[PatientNo][15]
  OtherLocation.style.display="";
}
//------------------------------------------------------------
// Set a flag for controlling fireing of javascript             
//------------------------------------------------------------
function waitTimeOut(sglClick) {
  defPatientLink.waiting.value=sglClick;
}
//----------------------------------------------------------------------
// Function : Refresh Page
//----------------------------------------------------------------------
function PageRefresh() {
  if (document.getElementById('EmergencyScreen').style.display=="none") {
    location.reload();
  }
}
function EmergencyTopPage() {
  var url = "../cgi-bin/emrweb02.pbl?" +
            "reportno=1&template=100" +
            "&urnumber=" + obj.patients[dblPatientNo][0].replace(/ /g,"+") +
            "&admissno=" + obj.patients[dblPatientNo][1].replace(/ /g,"+");
  if (EmergencyFullScreens) {
    EmergencyFrameLink(url,1,1,1008,744);
  } else {
    EmergencyFrameLink(url,1,1,1008,520);
  }
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a URL
//----------------------------------------------------------------------
function EmergencyFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight){ 
  var EmergencyScreen = document.getElementById('EmergencyScreen');
  var EmergencyFrame = document.getElementById('EmergencyFrame');

  if (!EmergencyScreen || !EmergencyFrame) { return false; }

  EmergencyScreen.style.top     = FrameTop + "px";
  EmergencyScreen.style.left    = FrameLeft + "px";

  if (FrameWidth == null) {
    EmergencyScreen.style.width = "100%";
  } else {
    EmergencyScreen.style.width = FrameWidth;
  }
  EmergencyScreen.style.height  = FrameHeight;
  EmergencyScreen.style.display = "";

  globalLinkType = 1;
  globalLinkUrl  = LinkToUrl;

  EmergencyFrame.src = LinkToUrl;
}
//------------------------------------------------------------
// IsDirty used to lock the triage screen                   
//------------------------------------------------------------
function IsDirtyTriage(eForm) {
  for (var i=0; i < eForm.length; i++) {
    var eElem = eForm.elements[i];
    if ("text" == eElem.type || "textarea" == eElem.tagName) {
      if (eElem.value.replace(/ /g,"") != eElem.defaultValue.replace(/ /g,"")) {
        return true;
      }
    }
    else if ("checkbox" == eElem.type || "radio" == eElem.type) {
      if (eElem.checked != eElem.defaultChecked) return true;
    }
  }
  return false;
}
//------------------------------------------------------------
// Update Location - To Be Changed to use Remote scripting
//------------------------------------------------------------
function updateLocation(admissno,locacode,swapemr) {
  var serverURL   = "../cgi-bin/emrweb02.pbl?reportno=3" +
                    "&admissno=" + admissno +
                    "&locacode=" + locacode +
                    "&regsflag=" + swapemr +
                    "&updttype=0"
  var returnValue = RSExecute(serverURL);
  location.reload();
}
//--------------------------------------------------------------
// Prevent the event from bubbling and stop mouse text selection
//--------------------------------------------------------------
function stopEvent(e) {
  e = e || window.event;

  if (e.preventDefault) {
    e.preventDefault();
    e.stopPropagation();
  }
  else {
    e.returnValue = false;
    e.cancelBubble = true;
  }

  return false;
}

//------------------------------------------------------------
// Setup Drag & Drop Events Required
//------------------------------------------------------------
document.ondblclick  = dblclickEl;
document.onclick     = clickEl;
document.onmousedown = grabEl;
document.onmousemove = moveEl;
document.onmouseup   = dropEl;
document.onkeydown   = OnKeyDown;

activeEl             = document.getElementById('ImageLocation');
