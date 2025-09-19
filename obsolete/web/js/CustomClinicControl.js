//jsVersion  : V10.15.01
//------------------------------------------------------------
// WA Health Clinic Control
// JavaScript.
//
// VERSION $Id: CustomClinicControl.js 4158 2018-11-07 02:54:26Z  $
//         $URL: http://lxfm700sub/svn/webpas/trunk/web/js/CustomClinicControl.js $
//
// VERSION HISTORY (Add a line for each change. Most recent first)
// V01.00.02  J.Zacharewicz 2019-10-14  Add MidWest sites
// V01.00.02  J.Zacharewicz 2019-07-18  Add Armadale Hospital
// V01.00.01  J.Zacharewicz 2019-06-21  Add Fremantle Hospital
// V01.00.00  C.Patterson   2018-11-07  Initial Version
//------------------------------------------------------------
//------------------------------------------------------------
// Global Parameters for Javascript Control
//------------------------------------------------------------
// The clinic control attributes are only visible for these sites
var autoOpenSites = new RegExp("BL1|OS1|RP1|QE1|FH1|AK1|" +
                               "CB1|EX1|CA1|UR1|" + /* Gascoyne */
                               "CS1|MK1|MT1|SS1|YG1|" + /* Murchison */
                               "GH1|DO1|KI1|ML1|MW1|NH1|TS1" /* Midwest */ );

//----------------------------------------------------------------------
// Retrieve and display the clinic control attributes
//
function getClinicControl(theForm) {
  var xhr = new XMLHttpRequest();

  styleAutoOpen(theForm);
  
  // Asynchronous request for clinic control attributes
  xhr.open("GET", "../php/ClinicControl.php?action=get" +
                   "&siteCode=" + theForm.otmas033.value +
                   "&clinicCode=" + theForm.otcli001.value +
                   "&clinicDay=" + theForm.otmas001.value +
                   "&clinicStart=" + theForm.otmas002.value.substr(0,5)
            );

  // Callback function to update the clinic control fields 
  // on the page when the response is available
  xhr.onreadystatechange = function () {
    if (xhr.readyState === 4 && xhr.status === 200) {
      var cc = eval('(' + xhr.responseText + ')')
      //var cc = JSON.parse(xhr.responseText);
      if (cc.ok) {
        document.getElementById("weeklyClinicDay").checked = cc.result.isWeekly;
        document.getElementById("autoClinicDay").checked = cc.result.autoOpen;
        document.getElementById("autoClinicDay").disabled = !cc.result.isWeekly;
        document.getElementById("clinicDayFrequency").disabled = cc.result.isWeekly;
        document.getElementById("clinicDayFrequency").value = cc.result.frequency;
      }
    }
  };  

  xhr.send();
}

//----------------------------------------------------------------------
// Enable, disable and default attributes based on the weekly checkbox
//
function toggleWeekly() {
  var weekly = document.getElementById("weeklyClinicDay");
  var auto = document.getElementById("autoClinicDay");
  var frequency = document.getElementById("clinicDayFrequency");

  frequency.disabled = weekly.checked
  auto.disabled = !weekly.checked
  
  if (weekly.checked) {
    frequency.value='weekly'
  } else {
    auto.checked = false
    frequency.value = (frequency.value === 'weekly') ? 'non-weekly' : frequency.value
    frequency.focus()
    frequency.select()
  }
}

//----------------------------------------------------------------------
// Save the clinic control attributes
//
function setClinicControl(theForm) {
  var xhr = new XMLHttpRequest();
  var action = document.getElementById("weeklyClinicDay").checked ? 'setWeekly' : 'setNonWeekly';
  var frequency = document.getElementById("clinicDayFrequency").value ;

  if (action === 'setWeekly') {
    if (document.getElementById("autoClinicDay").checked) {
      action = 'setWeeklyAuto'
    } else {
      action = 'setWeeklyManual'
    }
  }
  
  // Asynchronous request to set clinic control attributes
  xhr.open("GET", "../php/ClinicControl.php?action=" + action +
                   "&siteCode=" + theForm.otmas033.value +
                   "&clinicCode=" + theForm.otcli001.value +
                   "&clinicDay=" + theForm.otmas001.value +
                   "&clinicStart=" + theForm.otmas002.value.substr(0,5) +
                   "&frequency=" + encodeURIComponent(frequency)                   
            );
  xhr.send();
}

//----------------------------------------------------------------------
// The auto-open clinic control attributes should only be visible for 
// auto-open sites.
function styleAutoOpen(theForm) {

  if (theForm.otmas033.value.match(autoOpenSites) != null) {
    document.getElementById("autoClinicSpan").style.display = "inline"
  } else {
    document.getElementById("autoClinicSpan").style.display = "none"
  }
}

