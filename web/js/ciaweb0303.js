//jsVersion  : V11.03.00
//-----------------------------------------------------------------------------
// Casemix Enquiry - Episode Details
//
// Modifications :
//
// V9.03.00  02.03.2004  Sylvek Litewka  CAR 46508
//           Created include. Contains javascript functions common to
//           CIAWEB03, report number 3 templates - "Episode Details".
//
//-----------------------------------------------------------------------------

// Redirect to Episode Coding Details screen
function ShowCodingDetails() {
  var extract = document.PatientLinks.extracid.value;
  var ExtractKey = document.SelectExtract.cextrkey.value;
  var Epsdenum = document.SelectExtract.epsdenum.value;
  var linkurl="ciaweb03.pbl?reportno=3&template=4&extracid=" + extract +
              "&cextrkey=" + ExtractKey + "&epsdenum=" + Epsdenum;
  var Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,180,Left,600,250);
}

// Redirect to Episode MBS Coding Details screen
function ShowMBSDetails() {
  var extract = document.PatientLinks.extracid.value;
  var ExtractKey = document.SelectExtract.cextrkey.value;
  var Epsdenum = document.SelectExtract.epsdenum.value;
  var linkurl="ciaweb03.pbl?reportno=3&template=5&extracid=" + extract +
              "&cextrkey=" + ExtractKey + "&epsdenum=" + Epsdenum;
  var Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,180,Left,600,250);
}

// Redirect to Episode Theatre Details screen
function ShowTheatreDetails() {
  var extract = document.PatientLinks.extracid.value;
  var ExtractKey = document.SelectExtract.cextrkey.value;
  var Epsdenum = document.SelectExtract.epsdenum.value;
  var linkurl="ciaweb03.pbl?reportno=3&template=6&extracid=" + extract +
              "&cextrkey=" + ExtractKey + "&epsdenum=" + Epsdenum;
  var Left=(document.body.clientWidth-600)/2
  DFrameLink(linkurl,180,Left,600,250);
}

// Redirect to Episode Income/Cost Details screen
function ShowIncomeCostDetails() {
  var extract = document.PatientLinks.extracid.value;
  var ExtractKey = document.SelectExtract.cextrkey.value;
  var Epsdenum = document.SelectExtract.epsdenum.value;
  var linkurl="ciaweb03.pbl?reportno=3&template=7&extracid=" + extract +
              "&cextrkey=" + ExtractKey + "&epsdenum=" + Epsdenum;
  var Left=(document.body.clientWidth-750)/2
  DFrameLink(linkurl,180,Left,750,300);
}
