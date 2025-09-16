//jsVersion  : V11.03.00
//========================================================================
// Program   : autologoff900.js
//
// Written   : 11.10.2011
//
// Function  : WA Health javascript functions used for role menus.
//
// Version   :
//
// V10.08.01  04/05/2016  Don Nguyen        TSK 0322481
//            Modified init() & StartTheTimer() to use addEventListener() or
//            attachEvent().
//------------------------------------------------------------
// WA Health javascript functions used for role menus.
//
// VERSION HISTORY (Add a line for each change. Most recent first)
// V10.02.00  2011-10-21  WARNING: This page will automatically close in`
//------------------------------------------------------------
var timeout_secs;
var timeout_timerID = null;
var timeout_timerRunning = false;
var timeout_changes;

var timeout_delay = 1000;
var timeout_default = 900;
var timeout_url = 'Login.html';

//function ensures that the javascript routine is started by all browsers
window.onload = function () {
  if (self.init) init();
}

//initialisation routine
function init() {
  timeout_changes = 0;
  timeout_secs = timeout_default; 
  StopTheClock();
  timeout_timerID = self.setTimeout("StartTheTimer()", timeout_delay);
  timeout_timerRunning = true;

  //events captured/detected
  if (document.addEventListener) {
    document.addEventListener('keyup', detectEvent, false);
    document.addEventListener('click', detectEvent, false);
  }
  else if (document.attachEvent) {
    document.attachEvent('onkeyup', detectEvent);
    document.attachEvent('onclick', detectEvent);
  }
  else {
    document.onkeyup = detectEvent;
    document.onclick = detectEvent;
  }
}

function setTimeoutPeriod(timeout_new) {
  if (timeout_new == parseInt(timeout_new)) {
    timeout_default = timeout_new;
    init();
  }
}

function StopTheClock() {
  if(timeout_timerRunning)
  clearTimeout(timeout_timerID);
  timeout_timerRunning = false;
}

function StartTheTimer() {
  if (timeout_secs == 0 && timeout_changes == 0)
  {
    StopTheClock();
    getTop().location.href= webRoot + "/" + timeout_url;
    getTop().close();
  }
  else
  {
    if (timeout_changes!=0) {
      timeout_changes = 0;
      timeout_secs = timeout_default;
    }

    //Update the counter on the page
    if (getTop().menu.document.getElementById('timeremaining') != undefined) {
      getTop().menu.document.getElementById('timeremaining').innerHTML = 
        timeout_secs;
    }

    //Get ready for next time
    timeout_secs = timeout_secs - 1;
    timeout_timerRunning = true;
    timeout_timerID = self.setTimeout("StartTheTimer()", timeout_delay);

    //events captured/detected in content frame
    //reset every time because the page changes with most user actions
    if (document.addEventListener) {
      getTop().content.document.addEventListener('keyup', detectEvent, false);
      getTop().content.document.addEventListener('click', detectEvent, false);
    }
    else if (document.attachEvent) {
      getTop().content.document.attachEvent('onkeyup', detectEvent);
      getTop().content.document.attachEvent('onclick', detectEvent);
    }
    else {
      getTop().content.document.onkeyup = detectEvent;
      getTop().content.document.onclick = detectEvent;
    }
  }
}

function detectEvent(e) {
  timeout_changes += 1;
}
