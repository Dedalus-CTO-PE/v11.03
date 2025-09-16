//jsVersion  : V11.03.00
//======================================================================
// Emergency Map Configuration
//======================================================================
var ClassCode;
function EditMap() {
  var menuItem=GetCookieData("MapEditOption");
  if (menuItem=='unknown') menuItem=0;
  DisplayOption(menuItem);
}
function DisplayOption(menuItem) {
  SetCookie("MapEditOption",menuItem);
  refreshPage=false;
  ShowPatients=false;
  if (menuItem=="0") {
    ShowPatients=true;
    refreshPage=true;
    DrawMap();
    return;
  }
  if (menuItem=="1") {
    SetCookie("MapEditOption","0");
    ReDrawMap();
    ShowBasicSettings();
    return;
  }
  if (menuItem=="2") {
    ReDrawMap();
    LocationPositionEdit();
    return;
  }
  if (menuItem=="3") {
    ReDrawMap();
    LocationStyleEdit();
    return;
  }
  if (menuItem=="4") {
    SetCookie("MapEditOption","0");
    location.reload();
    return;
  }
  ShowPatients=true;
  refreshPage=true;
}
function ReloadPage() {
  location.reload();
}
//------------------------------------------------------------
// Set events for position editting/drag and drop
//------------------------------------------------------------
function LocationPositionEdit() {
    document.ondblclick  = nullReturn;
    document.onclick     = clickLocEdit;
    document.onmousedown = grabLoc;
    document.onmousemove = moveEl;
    document.onmouseup   = dropLoc;
    document.onkeydown   = OnKeyDown;
    activeEl             = document.getElementById('ImageLocation');
}
//------------------------------------------------------------
// Set events for locaiton style edits
//------------------------------------------------------------
function LocationStyleEdit() {
    document.ondblclick  = nullReturn;
    document.onclick     = clickLocStyle;
    document.onmousedown = grabLoc;
    document.onmousemove = nullReturn;
    document.onmouseup   = dropLoc;
    document.onkeydown   = OnKeyDown;
    activeEl             = document.getElementById('ImageLocation');
}
function nullReturn(e) {
  return;
}
//============================================================
// Grab when MouseDown Event
//============================================================
function grabLoc(e) {        
  e = e || window.event;

  whichEl = e.srcElement;
  while ( whichEl.id.indexOf("Location") == -1 &&
          whichEl.id.indexOf("NextEmergency") == -1 &&
          whichEl.id.indexOf("EmergencyCount") == -1 &&
          whichEl.id.indexOf("TriageCount") == -1 &&
          whichEl.id.indexOf("WaitTimeCount") == -1 &&
          whichEl.id.indexOf("DoctorCount") == -1 &&
          whichEl.id.indexOf("NurseCount") == -1 &&
          whichEl.id.indexOf("ResultCount") == -1 &&
          whichEl.id.indexOf("SystemComments") == -1 
         ) {
    whichEl = whichEl.parentElement;
    if (whichEl == null) { return; } 
  }
  whichEl.style.left = whichEl.offsetLeft + "px";
  whichEl.style.top = whichEl.offsetTop + "px";
  currentX = (e.clientX + document.body.scrollLeft);
  currentY = (e.clientY + document.body.scrollTop);

  //stopEvent(e);
}
function dropLoc(e) {        
  e = e || window.event;

  if (whichEl == null) { return };
  whichEl = null;    
}    
function clickLocEdit(e) {
  e = e || window.event;

  clickLocation = e.srcElement;

  while ( clickLocation.id.indexOf("Location") == -1 &&
          clickLocation.id.indexOf("NextEmergency") == -1 &&
          clickLocation.id.indexOf("EmergencyCount") == -1 &&
          clickLocation.id.indexOf("TriageCount") == -1 &&
          clickLocation.id.indexOf("WaitTimeCount") == -1 &&
          clickLocation.id.indexOf("DoctorCount") == -1 &&
          clickLocation.id.indexOf("NurseCount") == -1 &&
          clickLocation.id.indexOf("ResultCount") == -1 &&
          clickLocation.id.indexOf("SystemComments") == -1 
         ) {
    clickLocation = clickLocation.parentElement;
    if (clickLocation == null) { return } 
  }
  if (clickLocation.id=="NextEmergency")  { ShowNextSettings(clickLocation); return; }
  if (clickLocation.id=="SystemComments") { ShowNoticesSettings(clickLocation); return; }
  if (clickLocation.id=="EmergencyCount") { ShowStatisticsSettings(clickLocation); return; }
  if (clickLocation.id=="TriageCount")    { ShowTriageStatsSettings(clickLocation); return; }
  if (clickLocation.id=="WaitTimeCount")  { ShowWaitTimeStatsSettings(clickLocation); return; }
  if (clickLocation.id=="DoctorCount")    { ShowDoctorStatsSettings(clickLocation); return; }
  if (clickLocation.id=="NurseCount")     { ShowNurseStatsSettings(clickLocation); return; }
  if (clickLocation.id=="ResultCount")    { ShowResultStatsSettings(clickLocation); return; }
  ShowLocationSettings(clickLocation);
}
function clickLocStyle(e) {
  e = e || window.event;

  clickLocation = e.srcElement;
  while ( clickLocation.className.indexOf("styleLoc-") == -1) {
    clickLocation = clickLocation.parentElement;
    if (clickLocation == null) { return } 
  }
  locationStyle(clickLocation); 
}
function locationStyle(el) {
  ClassCode=clickLocation.className.replace(/.*LocationStyle /,"");
  if (!ClassCode.match("styleLoc-")) return
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  var fv;
  fv=document.getElementById("cellClass");
  fv.value=ClassCode;
  var cellSample=document.getElementById("cellSample");
  cellSample.style.color='';
  cellSample.style.background='';
  cellSample.style.backgroundColor='';
  cellSample.style.border='';
  cellSample.className=el;
  var PageSet=document.getElementById("LocationStyle");
  PageSet.style.position='absolute';
  PageSet.style.top='50px';
  PageSet.style.left='50px';
  PageSet.style.width='400px';
  PageSet.style.height='400px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  selectList=document.getElementById("cellColor");
  SelectColors(selectList) 
  var selectList;
  var locStyle=getStyle(ClassCode);
  if (locStyle==undefined) locStyle=clickLocation;
  selectList=document.getElementById("borderColor");
  setSelect(selectList,locStyle.style.borderColor);
  selectList=document.getElementById("borderWidth");
  setSelect(selectList,locStyle.style.borderWidth);
  selectList=document.getElementById("textColor");
  setSelect(selectList,locStyle.style.color);
  selectList=document.getElementById("cellColor");
  setSelectLC(selectList,HexToName(locStyle.style.backgroundColor));
  selectList=document.getElementById("FontWeight");
  setSelect(selectList,locStyle.style.fontWeight);
  selectList=document.getElementById("Marker");
  matchSelect(selectList,locStyle.style.backgroundImage);
  SetSample();
}
function setSelect(el,elValue) {
  if (isWhitespace(elValue)) return;
  for (var i=0;i<el.options.length;i++) {
    if (el.options[i].value==elValue) el.selectedIndex=i;
  }
}
function setSelectLC(el,elValue) {
  if (isWhitespace(elValue)) return;
  for (var i=0;i<el.options.length;i++) {
    if (el.options[i].value.toLowerCase()==elValue.toLowerCase()) el.selectedIndex=i;
  }
}
function matchSelect(el,elValue) {
  if (isWhitespace(elValue)) return;
  for (var i=0;i<el.options.length;i++) {
    if (elValue.match(el.options[i].value)) el.selectedIndex=i;
  }
}
function setLocation(selectLocation) {
  var LocationCode=selectLocation.options[selectLocation.selectedIndex].value;
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][1]==LocationCode) {
      var el=document.getElementById("Location-"+i);
      ClassCode=el.className.replace(/.*LocationStyle /,"");
      var LocationType=obj.locations[i][8];
    }
  }
  var fv;
  fv=document.getElementById("shortName");
  fv.value=el.getAttribute("shortName");
  fv=document.getElementById("longName");
  fv.value=el.getAttribute("longName");
  fv=document.getElementById("patientsWide");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsWide")) fv.selectedIndex=i;
  }
  fv=document.getElementById("patientsHigh");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsHigh")) fv.selectedIndex=i;
  }
  fv=document.getElementById("cellClass");
  fv.value=ClassCode;
  fv=document.getElementById("cellTop");
  fv.value=el.style.top.replace(/px/,"");
  fv=document.getElementById("cellLeft");
  fv.value=el.style.left.replace(/px/,"");
  var nextStream=document.getElementById("NextStream");
  nextStream.style.display='none';
  if (LocationType=='N') {
    nextStream.style.display='';
    fv=document.getElementById("trContainerWidth");
    fv.style.display='';
    fv=document.getElementById("trContainerLineHeight");
    fv.style.display='';
    fv=document.getElementById("trPatientsWide");
    fv.style.display='none';
    fv=document.getElementById("trPatientsHigh");
    fv.style.display='none';
  } else {
    fv=document.getElementById("trContainerWidth");
    fv.style.display='none';
    fv=document.getElementById("trContainerLineHeight");
    fv.style.display='none';
    fv=document.getElementById("trPatientsWide");
    fv.style.display='';
    fv=document.getElementById("trPatientsHigh");
    fv.style.display='';
  }
}
function ShowLocationSettings(el) {
  var selectedCode=el.getAttribute("locationCode");
  if (isWhitespace(selectedCode)) return;
  ClassCode=clickLocation.className.replace(/.*LocationStyle /,"");
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  var fv;
  var sl=true;
  var ap=false;
  var LocationType=''
  fv=document.getElementById("locationCode");
  for (var i=0;i<obj.locations.length;i++) {
    fv.options[fv.options.length] = new Option(obj.locations[i][0],obj.locations[i][1]);
    if (obj.locations[i][1]==selectedCode) { 
      fv.selectedIndex=i;
      LocationType=obj.locations[i][8];
      if (obj.locations[i][13]=="false") sl=false;
      if (obj.locations[i][14]=="true") ap=true;
    }
  }
  
  fv=document.getElementById("showLocation");
  fv.checked=sl;
  fv=document.getElementById("positionAuto");
  fv.checked=ap;
  fv=document.getElementById("shortName");
  fv.value=el.getAttribute("shortName");
  fv=document.getElementById("longName");
  fv.value=el.getAttribute("longName");

  fv=document.getElementById("patientsWide");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsWide")) fv.selectedIndex=i;
  }
  fv=document.getElementById("patientsHigh");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsHigh")) fv.selectedIndex=i;
  }

  fv=document.getElementById("cellClass");
  fv.value=ClassCode;
  fv=document.getElementById("cellTop");
  fv.value=el.style.top.replace(/px/,"");
  fv=document.getElementById("cellLeft");
  fv.value=el.style.left.replace(/px/,"");

  var PageSet=document.getElementById("LocationSettings");
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='400px';
  PageSet.style.height='350px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  var nextStream=document.getElementById("NextStream");
  nextStream.style.display='none';
  if (LocationType=='N') {
    nextStream.style.display='';
    fv=document.getElementById("streamCode");
    for (var i=0;i<fv.options.length;i++) {
      if (fv.options[i].value.substr(0,3)==el.getAttribute("streamCode")) fv.selectedIndex=i;
    }
    fv=document.getElementById("trContainerWidth");
    fv.style.display='';
    fv=document.getElementById("trContainerLineHeight");
    fv.style.display='';
    fv=document.getElementById("trPatientsWide");
    fv.style.display='none';
    fv=document.getElementById("trPatientsHigh");
    fv.style.display='none';
    fv=document.getElementById("containerWidth");
    for (var i=0;i<fv.options.length;i++) {
      if (fv.options[i].value==el.getAttribute("patientsWide")) fv.selectedIndex=i;
    }
    fv=document.getElementById("containerLineHeight");
    for (var i=0;i<fv.options.length;i++) {
      if (fv.options[i].value==el.getAttribute("patientsHigh")) fv.selectedIndex=i;
    }
  } else {
    fv=document.getElementById("trContainerWidth");
    fv.style.display='none';
    fv=document.getElementById("trContainerLineHeight");
    fv.style.display='none';
    fv=document.getElementById("trPatientsWide");
    fv.style.display='';
    fv=document.getElementById("trPatientsHigh");
    fv.style.display='';
  }
}
function HexToName(colorValue) {
    var colors = {"aliceblue":"#f0f8ff","antiquewhite":"#faebd7",
    "aqua":"#00ffff","aquamarine":"#7fffd4","azure":"#f0ffff",
    "beige":"#f5f5dc","bisque":"#ffe4c4","black":"#000000",
    "blanchedalmond":"#ffebcd","blue":"#0000ff","blueviolet":"#8a2be2",
    "brown":"#a52a2a","burlywood":"#deb887",
    "cadetblue":"#5f9ea0","chartreuse":"#7fff00","chocolate":"#d2691e",
    "coral":"#ff7f50","cornflowerblue":"#6495ed","cornsilk":"#fff8dc",
    "crimson":"#dc143c","cyan":"#00ffff",
    "darkblue":"#00008b","darkcyan":"#008b8b","darkgoldenrod":"#b8860b",
    "darkgray":"#a9a9a9","darkgreen":"#006400","darkkhaki":"#bdb76b",
    "darkmagenta":"#8b008b","darkolivegreen":"#556b2f",
    "darkorange":"#ff8c00","darkorchid":"#9932cc","darkred":"#8b0000",
    "darksalmon":"#e9967a","darkseagreen":"#8fbc8f","darkslateblue":"#483d8b",
    "darkslategray":"#2f4f4f","darkturquoise":"#00ced1",
    "darkviolet":"#9400d3","deeppink":"#ff1493","deepskyblue":"#00bfff",
    "dimgray":"#696969","dodgerblue":"#1e90ff",
    "firebrick":"#b22222","floralwhite":"#fffaf0","forestgreen":"#228b22","fuchsia":"#ff00ff",
    "gainsboro":"#dcdcdc","ghostwhite":"#f8f8ff","gold":"#ffd700","goldenrod":"#daa520",
    "gray":"#808080","green":"#008000","greenyellow":"#adff2f",
    "honeydew":"#f0fff0","hotpink":"#ff69b4",
    "indianred ":"#cd5c5c","indigo":"#4b0082","ivory":"#fffff0","khaki":"#f0e68c",
    "lavender":"#e6e6fa","lavenderblush":"#fff0f5","lawngreen":"#7cfc00",
    "lemonchiffon":"#fffacd","lightblue":"#add8e6","lightcoral":"#f08080",
    "lightcyan":"#e0ffff","lightgoldenrodyellow":"#fafad2",
    "lightgrey":"#d3d3d3","lightgreen":"#90ee90","lightpink":"#ffb6c1",
    "lightsalmon":"#ffa07a","lightseagreen":"#20b2aa","lightskyblue":"#87cefa",
    "lightslategray":"#778899","lightsteelblue":"#b0c4de",
    "lightyellow":"#ffffe0","lime":"#00ff00","limegreen":"#32cd32","linen":"#faf0e6",
    "magenta":"#ff00ff","maroon":"#800000","mediumaquamarine":"#66cdaa",
    "mediumblue":"#0000cd","mediumorchid":"#ba55d3","mediumpurple":"#9370d8",
    "mediumseagreen":"#3cb371","mediumslateblue":"#7b68ee",
    "mediumspringgreen":"#00fa9a","mediumturquoise":"#48d1cc","mediumvioletred":"#c71585",
    "midnightblue":"#191970","mintcream":"#f5fffa","mistyrose":"#ffe4e1","moccasin":"#ffe4b5",
    "navajowhite":"#ffdead","navy":"#000080",
    "oldlace":"#fdf5e6","olive":"#808000","olivedrab":"#6b8e23","orange":"#ffa500",
    "orangered":"#ff4500","orchid":"#da70d6",
    "palegoldenrod":"#eee8aa","palegreen":"#98fb98","paleturquoise":"#afeeee",
    "palevioletred":"#d87093","papayawhip":"#ffefd5","peachpuff":"#ffdab9",
    "peru":"#cd853f","pink":"#ffc0cb","plum":"#dda0dd","powderblue":"#b0e0e6","purple":"#800080",
    "red":"#ff0000","rosybrown":"#bc8f8f","royalblue":"#4169e1", "saddlebrown":"#8b4513",
    "salmon":"#fa8072","sandybrown":"#f4a460","seagreen":"#2e8b57", 
    "seashell":"#fff5ee","sienna":"#a0522d","silver":"#c0c0c0","skyblue":"#87ceeb",
    "slateblue":"#6a5acd","slategray":"#708090","snow":"#fffafa","springgreen":"#00ff7f","steelblue":"#4682b4",
    "tan":"#d2b48c","teal":"#008080","thistle":"#d8bfd8","tomato":"#ff6347","turquoise":"#40e0d0",
    "violet":"#ee82ee",
    "wheat":"#f5deb3","white":"#ffffff","whitesmoke":"#f5f5f5",
    "yellow":"#ffff00","yellowgreen":"#9acd32"};
    for (var keyName in colors) {
       if (keyName == colorValue) return keyName
    }
    colorValue=colorToHex(colorValue);
    for (var keyName in colors) {
       if (colors[keyName] == colorValue) return keyName
    }
    return false;
}
function colorToHex(color) {
    if (isWhitespace(color)) return color;
    if (color.substr(0, 1) === '#') {
        return color;
    }
    var digits = /(.*?)rgb\((\d+), (\d+), (\d+)\)/.exec(color);
    var red = parseInt(digits[2]);
    var green = parseInt(digits[3]);
    var blue = parseInt(digits[4]);
    var rgb = blue | (green << 8) | (red << 16);
    return digits[1] + '#' + rgb.toString(16);
}
function ShowBasicSettings() {
  var PageSet=document.getElementById("PageSettingsBasic");
  var sl;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='700px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("patientContainer");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==PatientContainer)  sl.selectedIndex=i;
  }
  sl=document.getElementById("patientWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==PatientCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("patientLine");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==PatientLineHeight) sl.selectedIndex=i;
  }
  sl=document.getElementById("patientLineCnt");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==(PatientCellHeight/PatientLineHeight)) sl.selectedIndex=i;
  }
  document.getElementById("defaultTop").value=defaultTop;
  document.getElementById("defaultLeft").value=defaultLeft;
  document.getElementById("defaultSpace").value=defaultSpace;
  document.getElementById("maxColumns").value=maxColumns;
  document.getElementById("triageTemplate").value=triageTemplate;
  document.getElementById("sClickTemplate").value=sClickTemplate;
  document.getElementById("dClickTemplate").value=dClickTemplate;
  //document.getElementById("triageTime01").value=immediate;
  //document.getElementById("triageTime02").value=emergency;
  //document.getElementById("triageTime03").value=urgent;
  //document.getElementById("triageTime04").value=semi;
  //document.getElementById("triageTime05").value=non;
  if (ReadOnlyView) { document.getElementById("readOnlyView").checked=true; }
  if (showNext) { document.getElementById("showNext").checked=true; }
  if (showNotices) { document.getElementById("showNotices").checked=true; }
  if (showStatistics) { document.getElementById("showStatistics").checked=true; }
  if (showTriageStatistics) { document.getElementById("showTriageStatistics").checked=true; }
  if (showWaitTimeStatistics) { document.getElementById("showWaitTimeStatistics").checked=true; }
  if (showDoctorStatistics) { document.getElementById("showDoctorStatistics").checked=true; }
  if (showNurseStatistics) { document.getElementById("showNurseStatistics").checked=true; }
  if (showResultStatistics) { document.getElementById("showResultStatistics").checked=true; }
}
function SaveBasic() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("defaultTop");
  inputValue=el.value;
  scriptString+="defaultTop="+inputValue+";";

  el=document.getElementById("defaultLeft");
  inputValue=el.value;
  scriptString+="defaultLeft="+inputValue+";";

  el=document.getElementById("defaultSpace");
  inputValue=el.value;
  scriptString+="defaultSpace="+inputValue+";";

  el=document.getElementById("maxColumns");
  inputValue=el.value;
  scriptString+="maxColumns="+inputValue+";";

  el=document.getElementById("triageTemplate");
  inputValue=el.value;
  scriptString+="triageTemplate='"+inputValue+"';";

  el=document.getElementById("sClickTemplate");
  inputValue=el.value;
  scriptString+="sClickTemplate='"+inputValue+"';";

  el=document.getElementById("dClickTemplate");
  inputValue=el.value;
  scriptString+="dClickTemplate='"+inputValue+"';";

  el=document.getElementById("patientLineCnt");
  inputValue=el.options[el.selectedIndex].value;
  var ContainerLines=inputValue;
  el=document.getElementById("patientContainer");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="PatientContainer="+inputValue+";";
  switch (inputValue) {
    case "1": ContainerLines=3;break;
    case "2": ContainerLines=3;break;
    case "3": ContainerLines=2;break;
  }
  scriptString+="PatientContainerLines="+ContainerLines+";";

  el=document.getElementById("patientWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="PatientCellWidth="+inputValue+";";

  el=document.getElementById("patientLine");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="PatientCellHeight="+inputValue*ContainerLines+";";
  scriptString+="PatientLineHeight="+inputValue+";";
/*
  el=document.getElementById("triageTime01");
  inputValue=el.value;
  if (isNaN(inputValue)){ alert("Invalid Time Parameter"); return; }
  scriptString+="immediate="+inputValue+";";

  el=document.getElementById("triageTime02");
  inputValue=el.value;
  if (isNaN(inputValue)){ alert("Invalid Time Parameter"); return; }
  scriptString+="emergency="+inputValue+";";

  el=document.getElementById("triageTime03");
  inputValue=el.value;
  if (isNaN(inputValue)){ alert("Invalid Time Parameter"); return; }
  scriptString+="urgent="+inputValue+";";

  el=document.getElementById("triageTime04");
  inputValue=el.value;
  if (isNaN(inputValue)){ alert("Invalid Time Parameter"); return; }
  scriptString+="semi="+inputValue+";";

  el=document.getElementById("triageTime05");
  inputValue=el.value;
  if (isNaN(inputValue)){ alert("Invalid Time Parameter"); return; }
  scriptString+="non="+inputValue+";";
*/
  if (document.getElementById("readOnlyView").checked) {
    scriptString+="ReadOnlyView=true;";}
  if (!document.getElementById("showNext").checked) {
    scriptString+="showNext=false;";}
  if (!document.getElementById("showNotices").checked) {
    scriptString+="showNotices=false;";}
  if (!document.getElementById("showStatistics").checked) {
    scriptString+="showStatistics=false;";}
  if (document.getElementById("showTriageStatistics").checked) {
    scriptString+="showTriageStatistics=true;";}
  if (document.getElementById("showWaitTimeStatistics").checked) {
    scriptString+="showWaitTimeStatistics=true;";}
  if (document.getElementById("showDoctorStatistics").checked) {
    scriptString+="showDoctorStatistics=true;";}
  if (document.getElementById("showNurseStatistics").checked) {
    scriptString+="showNurseStatistics=true;";}
  if (document.getElementById("showResultStatistics").checked) {
    scriptString+="showResultStatistics=true;";}

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"BASIC",scriptString);
}
function UpdateJavascript(pageKey,fieldName,fieldString) {
  var theURL="Javascript.php?reportno=2"+
             "&pagekey="+pageKey+
             "&classkey="+fieldName+
             "&classval="+fieldString
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText!="UPDATED") {
      alert(xmlHttp.responseText);
      return;
    } 
  } else {
    alert("ERROR : Can't Save Parameters");
    return;
  }
  location.reload();
}
function ClearStyle() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateStyle(pk,ClassCode,"");
  location.reload();
}
function ClearLocation() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,ClassCode,"");
  location.reload();
}
function ClearBasic() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"BASIC","");
  location.reload();
}
function ClearNext() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Next","");
  location.reload();
}
function ClearNotices() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Notices","");
  location.reload();
}
function ClearStatistics() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Statistics","");
  location.reload();
}
function SaveLocation() {
  var scriptString="";
  var el;
  el=document.getElementById("locationCode");
  var lc=el.options[el.selectedIndex].value;
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][1]==lc) {
      locationObject=obj.locations[i];
    }
  }
  el=document.getElementById("longName");
  var ln=el.value;
  el=document.getElementById("shortName");
  var sn=el.value;
  el=document.getElementById("streamCode");
  var fc=el.options[el.selectedIndex].value.substr(0,3);
  var fn=el.options[el.selectedIndex].text;
  el=document.getElementById("cellTop");
  var ct=el.value;
  if (isWhitespace(ct)) ct=100;
  el=document.getElementById("cellLeft");
  var cl=el.value;
  if (isWhitespace(cl)) cl=100;
  el=document.getElementById("positionAuto");
  if (el.checked) { ct=0;cl=0;}
  var sl="true";
  el=document.getElementById("showLocation");
  if (!el.checked) { sl="false";}
  var ap="true";
  el=document.getElementById("positionAuto");
  if (!el.checked) { ap="false";}
  el=document.getElementById("patientsWide");
  var pw=el.options[el.selectedIndex].value;
  el=document.getElementById("patientsHigh");
  var ph=el.options[el.selectedIndex].value;
  if (locationObject[8]=='N') {
    el=document.getElementById("containerWidth");
    var pw=el.options[el.selectedIndex].value;
    el=document.getElementById("containerLineHeight");
    var ph=el.options[el.selectedIndex].value;
  }

  scriptString='UpdLocation("'+ln+'","'+
                               lc+'",'+
                               cl+','+
                               ct+','+
                               '0,'+
                               '0,'+
                               '0,'+
                               '0,"'+
                               '","'+
                               '","'+
                               sn+'",'+
                               pw+','+
                               ph+',"'+
                               sl+'","'+
                               ap+'","'+
                               fc+'","'+         // Stream Code
                               fn+'","'+         // Stream Name
                               '");'             // Index of Next Patient for Stream
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,ClassCode,scriptString);
  location.reload();
}
function SaveStyle() {
  var classString="";
  var el;
  el=document.getElementById("borderColor");
  var bc=el.options[el.selectedIndex].value;

  el=document.getElementById("borderWidth");
  var bw=el.options[el.selectedIndex].value;

  el=document.getElementById("textColor");
  var fg=el.options[el.selectedIndex].value;

  el=document.getElementById("cellColor");
  var bg=el.options[el.selectedIndex].value;

  el=document.getElementById("Marker");
  var bi=el.options[el.selectedIndex].value;

  el=document.getElementById("FontWeight");
  var fw=el.options[el.selectedIndex].value;

  el=document.getElementById("cellSample");
  el.style.color='';
  el.style.background='';
  el.style.backgroundColor='';
  el.style.border='';
  if (!isWhitespace(fw)){classString+="font-weight:"+fw+";"; }
  if (!isWhitespace(fg)){classString+="color:"+fg+";"; }
  if (!isWhitespace(bi)){
    classString+="background-image:url(\"../images/"+bi+"\");";
    classString+="background-repeat:no-repeat;";
    classString+="background-position:top right;";
  }
  if (!isWhitespace(bg)){classString+="background-color:"+bg+";"; }
  if (!isWhitespace(bc)){classString+="border:solid "+bw+" "+bc+";"; }
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateStyle(pk,ClassCode,classString);
  location.reload();
}
function UpdateStyle(pagekey,fieldName,fieldString) {
  var theURL="StyleSheet.php?reportno=2"+
             "&pagekey="+pagekey+
             "&classkey="+fieldName+
             "&classval="+fieldString
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status == 200) {
    if (xmlHttp.responseText!="UPDATED") {
      alert(xmlHttp.responseText);
    }
  } else {
    alert("ERROR : Can't Save Style");
  }
}
function SetSample() {
  var el=document.getElementById("borderColor");
  var bc=el.options[el.selectedIndex].value;
  el=document.getElementById("borderWidth");
  var bw=el.options[el.selectedIndex].value;
  el=document.getElementById("textColor");
  var fg=el.options[el.selectedIndex].value;
  el=document.getElementById("cellColor");
  var bg=el.options[el.selectedIndex].value;
  el=document.getElementById("Marker");
  var bi=el.options[el.selectedIndex].value;
  el=document.getElementById("FontWeight");
  var fw=el.options[el.selectedIndex].value;
  el=document.getElementById("cellSample");
  el.style.color='';
  el.style.background='';
  el.style.backgroundColor='';
  el.style.border='';
  if (!isWhitespace(fw)){el.style.fontWeight=fw; }
  if (!isWhitespace(fg)){el.style.color=fg; }
  if (!isWhitespace(bi)){el.style.background='  url("../images/'+bi+'") no-repeat right top'; }
  if (!isWhitespace(bg)){el.style.backgroundColor=bg; }
  if (!isWhitespace(bc)){el.style.border='solid '+bw+' '+bc; }
}
function SelectColors(selectElement) {
  selectElement.options[selectElement.options.length] = new Option("default","");
  addColorOption(selectElement,"AliceBlue");
  addColorOption(selectElement,"AntiqueWhite");
  addColorOption(selectElement,"Aqua");
  addColorOption(selectElement,"Aquamarine");
  addColorOption(selectElement,"Azure");
  addColorOption(selectElement,"Beige");
  addColorOption(selectElement,"Bisque");
  addColorOption(selectElement,"Black");
  addColorOption(selectElement,"BlanchedAlmond");
  addColorOption(selectElement,"Blue");
  addColorOption(selectElement,"BlueViolet");
  addColorOption(selectElement,"Brown");
  addColorOption(selectElement,"BurlyWood");
  addColorOption(selectElement,"CadetBlue");
  addColorOption(selectElement,"Chartreuse");
  addColorOption(selectElement,"Chocolate");
  addColorOption(selectElement,"Coral");
  addColorOption(selectElement,"CornflowerBlue");
  addColorOption(selectElement,"Cornsilk");
  addColorOption(selectElement,"Crimson");
  addColorOption(selectElement,"Cyan");
  addColorOption(selectElement,"DarkBlue");
  addColorOption(selectElement,"DarkCyan");
  addColorOption(selectElement,"DarkGoldenRod");
  addColorOption(selectElement,"DarkGray");
  addColorOption(selectElement,"DarkGreen");
  addColorOption(selectElement,"DarkKhaki");
  addColorOption(selectElement,"DarkMagenta");
  addColorOption(selectElement,"DarkOliveGreen");
  addColorOption(selectElement,"DarkOrange");
  addColorOption(selectElement,"DarkOrchid");
  addColorOption(selectElement,"DarkRed");
  addColorOption(selectElement,"DarkSalmon");
  addColorOption(selectElement,"DarkSeaGreen");
  addColorOption(selectElement,"DarkSlateBlue");
  addColorOption(selectElement,"DarkSlateGray");
  addColorOption(selectElement,"DarkTurquoise");
  addColorOption(selectElement,"DarkViolet");
  addColorOption(selectElement,"DeepPink");
  addColorOption(selectElement,"DeepSkyBlue");
  addColorOption(selectElement,"DimGray");
  addColorOption(selectElement,"DodgerBlue");
  addColorOption(selectElement,"FireBrick");
  addColorOption(selectElement,"FloralWhite");
  addColorOption(selectElement,"ForestGreen");
  addColorOption(selectElement,"Fuchsia");
  addColorOption(selectElement,"Gainsboro");
  addColorOption(selectElement,"GhostWhite");
  addColorOption(selectElement,"Gold");
  addColorOption(selectElement,"GoldenRod");
  addColorOption(selectElement,"Gray");
  addColorOption(selectElement,"Green");
  addColorOption(selectElement,"GreenYellow");
  addColorOption(selectElement,"HoneyDew");
  addColorOption(selectElement,"HotPink");
  addColorOption(selectElement,"IndianRed");
  addColorOption(selectElement,"Indigo");
  addColorOption(selectElement,"Ivory");
  addColorOption(selectElement,"Khaki");
  addColorOption(selectElement,"Lavender");
  addColorOption(selectElement,"LavenderBlush");
  addColorOption(selectElement,"LawnGreen");
  addColorOption(selectElement,"LemonChiffon");
  addColorOption(selectElement,"LightBlue");
  addColorOption(selectElement,"LightCoral");
  addColorOption(selectElement,"LightCyan");
  addColorOption(selectElement,"LightGoldenRodYellow");
  addColorOption(selectElement,"LightGray");
  addColorOption(selectElement,"LightGreen");
  addColorOption(selectElement,"LightPink");
  addColorOption(selectElement,"LightSalmon");
  addColorOption(selectElement,"LightSeaGreen");
  addColorOption(selectElement,"LightSkyBlue");
  addColorOption(selectElement,"LightSlateGray");
  addColorOption(selectElement,"LightSteelBlue");
  addColorOption(selectElement,"LightYellow");
  addColorOption(selectElement,"Lime");
  addColorOption(selectElement,"LimeGreen");
  addColorOption(selectElement,"Linen");
  addColorOption(selectElement,"Magenta");
  addColorOption(selectElement,"Maroon");
  addColorOption(selectElement,"MediumAquaMarine");
  addColorOption(selectElement,"MediumBlue");
  addColorOption(selectElement,"MediumOrchid");
  addColorOption(selectElement,"MediumPurple");
  addColorOption(selectElement,"MediumSeaGreen");
  addColorOption(selectElement,"MediumSlateBlue");
  addColorOption(selectElement,"MediumSpringGreen");
  addColorOption(selectElement,"MediumTurquoise");
  addColorOption(selectElement,"MediumVioletRed");
  addColorOption(selectElement,"MidnightBlue");
  addColorOption(selectElement,"MintCream");
  addColorOption(selectElement,"MistyRose");
  addColorOption(selectElement,"Moccasin");
  addColorOption(selectElement,"NavajoWhite");
  addColorOption(selectElement,"Navy");
  addColorOption(selectElement,"OldLace");
  addColorOption(selectElement,"Olive");
  addColorOption(selectElement,"OliveDrab");
  addColorOption(selectElement,"Orange");
  addColorOption(selectElement,"OrangeRed");
  addColorOption(selectElement,"Orchid");
  addColorOption(selectElement,"PaleGoldenRod");
  addColorOption(selectElement,"PaleGreen");
  addColorOption(selectElement,"PaleTurquoise");
  addColorOption(selectElement,"PaleVioletRed");
  addColorOption(selectElement,"PapayaWhip");
  addColorOption(selectElement,"PeachPuff");
  addColorOption(selectElement,"Peru");
  addColorOption(selectElement,"Pink");
  addColorOption(selectElement,"Plum");
  addColorOption(selectElement,"PowderBlue");
  addColorOption(selectElement,"Purple");
  addColorOption(selectElement,"Red");
  addColorOption(selectElement,"RosyBrown");
  addColorOption(selectElement,"RoyalBlue");
  addColorOption(selectElement,"SaddleBrown");
  addColorOption(selectElement,"Salmon");
  addColorOption(selectElement,"SandyBrown");
  addColorOption(selectElement,"SeaGreen");
  addColorOption(selectElement,"SeaShell");
  addColorOption(selectElement,"Sienna");
  addColorOption(selectElement,"Silver");
  addColorOption(selectElement,"SkyBlue");
  addColorOption(selectElement,"SlateBlue");
  addColorOption(selectElement,"SlateGray");
  addColorOption(selectElement,"Snow");
  addColorOption(selectElement,"SpringGreen");
  addColorOption(selectElement,"SteelBlue");
  addColorOption(selectElement,"Tan");
  addColorOption(selectElement,"Teal");
  addColorOption(selectElement,"Thistle");
  addColorOption(selectElement,"Tomato");
  addColorOption(selectElement,"Turquoise");
  addColorOption(selectElement,"Violet");
  addColorOption(selectElement,"Wheat");
  addColorOption(selectElement,"White");
  addColorOption(selectElement,"WhiteSmoke");
  addColorOption(selectElement,"Yellow");
  addColorOption(selectElement,"YellowGreen");
  addColorOption(selectElement,"Transparent");
}
function  addColorOption(selectElement,colorName) {
  selectElement.options[selectElement.options.length] = new Option(colorName,colorName);
  selectElement.options[selectElement.options.length-1].style.backgroundColor = colorName;
}
function ShowNextSettings(el) {
  var PageSet=document.getElementById("NextSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='300px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("nextWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==NextCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("nextLine");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==NextCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("nextTop").value=el.style.top.replace(/px/,"");
  document.getElementById("nextLeft").value=el.style.left.replace(/px/,"");
}
function SaveNext() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("nextTop");
  inputValue=el.value;
  scriptString+="NextCellTop="+inputValue+";";

  el=document.getElementById("nextLeft");
  inputValue=el.value;
  scriptString+="NextCellLeft="+inputValue+";";

  el=document.getElementById("nextWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="NextCellWidth="+inputValue+";";

  el=document.getElementById("nextLine");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="NextCellHeight="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Next",scriptString);
}
function ShowStatisticsSettings(el) {
  var PageSet=document.getElementById("StatisticsSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("statisticsWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==StatisticsCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("statisticsHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==StatisticsCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("statisticsTop").value=el.style.top.replace(/px/,"");
  document.getElementById("statisticsLeft").value=el.style.left.replace(/px/,"");
  if (StatisticsShow01) { document.getElementById("StatisticsShow01").checked=true; }
  if (StatisticsShow02) { document.getElementById("StatisticsShow02").checked=true; }
  if (StatisticsShow03) { document.getElementById("StatisticsShow03").checked=true; }
  if (StatisticsShow04) { document.getElementById("StatisticsShow04").checked=true; }
  if (StatisticsShow05) { document.getElementById("StatisticsShow05").checked=true; }
  if (StatisticsShow06) { document.getElementById("StatisticsShow06").checked=true; }
  if (StatisticsShow07) { document.getElementById("StatisticsShow07").checked=true; }
  if (StatisticsShow08) { document.getElementById("StatisticsShow08").checked=true; }
  if (StatisticsShow09) { document.getElementById("StatisticsShow09").checked=true; }
}
function SaveStatistics() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("statisticsTop");
  inputValue=el.value;
  scriptString+="StatisticsCellTop="+inputValue+";";

  el=document.getElementById("statisticsLeft");
  inputValue=el.value;
  scriptString+="StatisticsCellLeft="+inputValue+";";

  el=document.getElementById("statisticsWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="StatisticsCellWidth="+inputValue+";";

  el=document.getElementById("statisticsHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="StatisticsCellHeight="+inputValue+";";

  if (!document.getElementById("StatisticsShow01").checked) { 
    scriptString+="StatisticsShow01=false;";}
  if (!document.getElementById("StatisticsShow02").checked) { 
    scriptString+="StatisticsShow02=false;";}
  if (!document.getElementById("StatisticsShow03").checked) { 
    scriptString+="StatisticsShow03=false;";}
  if (!document.getElementById("StatisticsShow04").checked) { 
    scriptString+="StatisticsShow04=false;";}
  if (!document.getElementById("StatisticsShow05").checked) { 
    scriptString+="StatisticsShow05=false;";}
  if (!document.getElementById("StatisticsShow06").checked) { 
    scriptString+="StatisticsShow06=false;";}
  if (!document.getElementById("StatisticsShow07").checked) { 
    scriptString+="StatisticsShow07=false;";}
  if (!document.getElementById("StatisticsShow08").checked) { 
    scriptString+="StatisticsShow08=false;";}
  if (!document.getElementById("StatisticsShow09").checked) { 
    scriptString+="StatisticsShow09=false;";}
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Statistics",scriptString);
}
function SaveNotices() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("noticesTop");
  inputValue=el.value;
  scriptString+="NoticesCellTop="+inputValue+";";

  el=document.getElementById("noticesLeft");
  inputValue=el.value;
  scriptString+="NoticesCellLeft="+inputValue+";";

  el=document.getElementById("noticesWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="NoticesCellWidth="+inputValue+";";

  el=document.getElementById("noticesHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="NoticesCellHeight="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Notices",scriptString);
}
function ShowNoticesSettings(el) {
  var PageSet=document.getElementById("NoticesSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("noticesWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==NoticesCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("noticesHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==NoticesCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("noticesTop").value=el.style.top.replace(/px/,"");
  document.getElementById("noticesLeft").value=el.style.left.replace(/px/,"");
}
function SelectMapViewType(el) {
  var ViewType=el.options[el.selectedIndex].value;
  if (ViewType=='EDIT') {
    var PageSet=document.getElementById("ViewSettings");
    var textField;
    document.ondblclick  = nullReturn;
    document.onclick     = nullReturn;
    document.onmousedown = nullReturn;
    document.onmousemove = nullReturn;
    document.onmouseup   = nullReturn;
    document.onkeydown   = OnKeyDown;
    PageSet.style.position='absolute';
    PageSet.style.top='30px';
    PageSet.style.left='5px';
    PageSet.style.width='480px';
    PageSet.style.height='700px';
    PageSet.style.backgroundColor='white';
    PageSet.style.border='solid 3px #ccc';
    PageSet.style.display="inline-block";
    PageSet.style.zIndex=90000;
    PageSet.style.display='';
    for (var i=0;i<20;i++) {
      textField=document.getElementById("viewName"+(i+1));
      textField.value=ViewNames[i];
    }
    return;
  }
  top.SetCookie("EmergencyMapViewType",ViewType);
  top.location.reload();
}
function SaveView() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("siteContext");
  var pk=el.value;
  for (var i=0;i<10;i++) {
    el=document.getElementById("viewName"+(i+1));
    scriptString+="ViewNames["+i+"]=\""+el.value+"\";";
  }
  UpdateJavascript(pk,"VIEWS1",scriptString);
  scriptString='';
  for (var i=10;i<20;i++) {
    el=document.getElementById("viewName"+(i+1));
    scriptString+="ViewNames["+i+"]=\""+el.value+"\";";
  }
  UpdateJavascript(pk,"VIEWS2",scriptString);
}
function ClearView() {
  var el;
  el=document.getElementById("siteContext");
  var pk=el.value;
  UpdateJavascript(pk,"VIEWS1","");
  UpdateJavascript(pk,"VIEWS2","");
  location.reload();
}
function ShowTriageStatsSettings(el) {
  var PageSet=document.getElementById("TriageStatsSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("triageStatsWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==TriageCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("triageStatsHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==TriageCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("triageStatsTop").value=el.style.top.replace(/px/,"");
  document.getElementById("triageStatsLeft").value=el.style.left.replace(/px/,"");
}
function SaveTriageStats() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("triageStatsTop");
  inputValue=el.value;
  scriptString+="TriageCellTop="+inputValue+";";

  el=document.getElementById("triageStatsLeft");
  inputValue=el.value;
  scriptString+="TriageCellLeft="+inputValue+";";

  el=document.getElementById("triageStatsWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="TriageCellWidth="+inputValue+";";

  el=document.getElementById("triageStatsHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="TriageCellHeight="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-TriageStats",scriptString);
}
function ClearTriageStats() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-TriageStats","");
  location.reload();
}
function ShowDoctorStatsSettings(el) {
  var PageSet=document.getElementById("DoctorStatsSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("doctorStatsWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==DoctorCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("doctorStatsHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==DoctorCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("doctorStatsTop").value=el.style.top.replace(/px/,"");
  document.getElementById("doctorStatsLeft").value=el.style.left.replace(/px/,"");
}
function SaveDoctorStats() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("doctorStatsTop");
  inputValue=el.value;
  scriptString+="DoctorCellTop="+inputValue+";";

  el=document.getElementById("doctorStatsLeft");
  inputValue=el.value;
  scriptString+="DoctorCellLeft="+inputValue+";";

  el=document.getElementById("doctorStatsWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="DoctorCellWidth="+inputValue+";";

  el=document.getElementById("doctorStatsHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="DoctorCellHeight="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-DoctorStats",scriptString);
}
function ClearDoctorStats() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-DoctorStats","");
  location.reload();
}
function ShowNurseStatsSettings(el) {
  var PageSet=document.getElementById("NurseStatsSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("nurseStatsWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==NurseCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("nurseStatsHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==NurseCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("nurseStatsTop").value=el.style.top.replace(/px/,"");
  document.getElementById("nurseStatsLeft").value=el.style.left.replace(/px/,"");
}
function SaveNurseStats() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("nurseStatsTop");
  inputValue=el.value;
  scriptString+="NurseCellTop="+inputValue+";";

  el=document.getElementById("nurseStatsLeft");
  inputValue=el.value;
  scriptString+="NurseCellLeft="+inputValue+";";

  el=document.getElementById("nurseStatsWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="NurseCellWidth="+inputValue+";";

  el=document.getElementById("nurseStatsHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="NurseCellHeight="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-NurseStats",scriptString);
}
function ClearNurseStats() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-NurseStats","");
  location.reload();
}
function ShowWaitTimeStatsSettings(el) {
  var PageSet=document.getElementById("WaitTimeStatsSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("waitTimeStatsWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==WaitTimeCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("waitTimeStatsHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==WaitTimeCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("waitTimeStatsTop").value=el.style.top.replace(/px/,"");
  document.getElementById("waitTimeStatsLeft").value=el.style.left.replace(/px/,"");
}
function SaveWaitTimeStats() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("waitTimeStatsTop");
  inputValue=el.value;
  scriptString+="WaitTimeCellTop="+inputValue+";";

  el=document.getElementById("waitTimeStatsLeft");
  inputValue=el.value;
  scriptString+="WaitTimeCellLeft="+inputValue+";";

  el=document.getElementById("waitTimeStatsWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="WaitTimeCellWidth="+inputValue+";";

  el=document.getElementById("waitTimeStatsHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="WaitTimeCellHeight="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-WaitTimeStats",scriptString);
}
function ClearWaitTimeStats() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-WaitTimeStats","");
  location.reload();
}
function ShowResultStatsSettings(el) {
  var PageSet=document.getElementById("ResultStatsSettings");
  var sl;
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='480px';
  PageSet.style.height='500px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
  sl=document.getElementById("resultNorecord");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==ResultNorecord)  sl.selectedIndex=i;
  }
  sl=document.getElementById("resultAgehours");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==ResultAgehours)  sl.selectedIndex=i;
  }
  sl=document.getElementById("resultMarked");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==ResultMarked)  sl.selectedIndex=i;
  }
  sl=document.getElementById("resultStatsWidth");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==ResultCellWidth)  sl.selectedIndex=i;
  }
  sl=document.getElementById("resultStatsHeight");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==ResultCellHeight) sl.selectedIndex=i;
  }
  document.getElementById("resultStatsTop").value=el.style.top.replace(/px/,"");
  document.getElementById("resultStatsLeft").value=el.style.left.replace(/px/,"");
}
function SaveResultStats() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("resultStatsTop");
  inputValue=el.value;
  scriptString+="ResultCellTop="+inputValue+";";

  el=document.getElementById("resultStatsLeft");
  inputValue=el.value;
  scriptString+="ResultCellLeft="+inputValue+";";

  el=document.getElementById("resultStatsWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="ResultCellWidth="+inputValue+";";

  el=document.getElementById("resultStatsHeight");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="ResultCellHeight="+inputValue+";";

  el=document.getElementById("resultNorecord");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="ResultNorecord="+inputValue+";";

  el=document.getElementById("resultAgehours");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="ResultAgehours="+inputValue+";";

  el=document.getElementById("resultMarked");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="ResultMarked="+inputValue+";";

  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-ResultStats",scriptString);
}
function ClearResultStats() {
  el=document.getElementById("siteViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-ResultStats","");
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

