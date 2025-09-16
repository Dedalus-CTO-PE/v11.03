//jsVersion  : V11.03.00
//======================================================================
// Theatre Department White Board / Map Configuration
// 
// Author        : B.G.Ackland 08.08.2014
//
// Modifications :
//
//======================================================================
var ClassCode;
var AddLocation=false;
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
  if (menuItem=="5") {
    SetCookie("MapEditOption","0");
    ReDrawMap();
    AddLocation=true;
    ShowAddLocation();
    return;
  }
  if (menuItem=="6") {
    SetCookie("MapEditOption","0");
    ReDrawMap();
    statusStyle();
    return;
  }
  if (menuItem=="7") {
    SetCookie("MapEditOption","0");
    ReDrawMap();
    ShowConditionalSettings();
    return;
  }
  if (menuItem=="8") {
    SetCookie("MapEditOption","0");
    var el=document.getElementById("MenuViewType");
    MapViewType=el.options[el.selectedIndex].value;
    if (MapViewType=='unknown') MapViewType='0';
    location.href="oprweb03.pbl?reportno=3&template=41&viewtype=2&pageview="+MapViewType+
        "&frstdate=20140801&lastdate=20141130";
    return;
  }
  if (menuItem=="9") {
    SetCookie("MapEditOption","0");
    ShowViews();
    return;
  }
  ShowPatients=true;
}
function ShowViews() {
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
}
function ReloadPage() {
  location.reload();
}
function ShowAddLocation() {
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  var fv;
  var sl=true;
  var ap=false;
  fv=document.getElementById("locationFields");
  fv.style.display="none";
  fv=document.getElementById("showLocation");
  fv.checked=sl;
  fv=document.getElementById("positionAuto");
  fv=document.getElementById("shortName");
  fv=document.getElementById("longName");
  fv=document.getElementById("patientsWide");
  fv=document.getElementById("patientsHigh");
  fv=document.getElementById("cellClass");
  fv.value=ClassCode;
  fv=document.getElementById("cellTop");
  fv.value=200;
  fv=document.getElementById("cellLeft");
  fv.value=200;

  var PageSet=document.getElementById("LocationSettings");
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='400px';
  PageSet.style.height='600px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
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
  var e = e ? e : window.event;
  whichEl = e.srcElement;
  while (whichEl.id.indexOf("Location") == -1) {
    whichEl = whichEl.parentElement;
    if (whichEl == null) { return; } 
  }
  if (whichEl.id!='ImageLocation') {
    if (whichEl.style.pixelTop) {
      whichEl.style.pixelLeft = whichEl.offsetLeft;
      whichEl.style.pixelTop = whichEl.offsetTop;
    } else {  
      whichEl.style.left = whichEl.offsetLeft+'px';
      whichEl.style.top = whichEl.offsetTop+'px';
    }
    currentX = (e.clientX + document.body.scrollLeft);
    currentY = (e.clientY + document.body.scrollTop);
    if (e.stopPropagation) {
      e.stopPropagation();
      e.preventDefault();
    } else {
      e.cancelBubble = true;
      e.returnValue = false;
    }
  }
}
function dropLoc(e) {        
  var e = e ? e : window.event;
  if (whichEl == null) { return };
  whichEl = null;    
  if (e.stopPropagation) {
    e.stopPropagation();
    e.preventDefault();
  } else {
    e.cancelBubble = true;
    e.returnValue = false;
  }
}    
function clickLocEdit(e) {
  var e = e ? e : window.event;
  clickLocation = e.srcElement;
  while (clickLocation.id.indexOf("Location") == -1) {
    clickLocation = clickLocation.parentElement;
    if (clickLocation == null) { return } 
  }
  if (clickLocation.id!='ImageLocation') {
    ShowLocationSettings(clickLocation);
  }
}
function clickLocStyle(e) {
  e = e ? e : window.event;
  clickLocation = e.srcElement;
  while ( clickLocation.className.indexOf("styleLoc-") == -1) {
    clickLocation = clickLocation.parentElement;
    if (clickLocation == null) { return } 
  }
  if (clickLocation.id!='ImageLocation') {
    locationStyle(clickLocation); 
  }
}
function locationStyle(el) {
  var sl=parseInt(document.getElementById("seclevel").value,10);
  if (sl<50) {
    alert("Security level inadequate to alter style sheet classes.");
    ReloadPage();
  }
  ClassCode=clickLocation.className.replace(/.*LocationStyle /,"");
  ClassCode=ClassCode.replace(/traffic.*/,"");
  ClassCode=ClassCode.replace(/.*statsHeading /,"");
  ClassCode=ClassCode.replace(/.*freeTextBody /,"");
  ClassCode=ClassCode.replace(/ /g,"");
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
  fv=document.getElementById("patientStatusField");
  fv.style.display="none";
  fv=document.getElementById("cellLinkField");
  fv.style.display="none";
  fv=document.getElementById("cellDisplayField");
  fv.style.display="none";
  SetSample();
}
function statusStyle() {
  var sl=parseInt(document.getElementById("seclevel").value,10);
  if (sl<50) {
    alert("Security level inadequate to alter style sheet classes.");
    ReloadPage();
  }
  ClassCode="patientStatus00";
  var fv;
  fv=document.getElementById("cellClass");
  fv.value=ClassCode;
  fv=document.getElementById("patientStatusField");
  fv.style.display="";
  fv=document.getElementById("cellLinkField");
  fv.style.display="";
  fv=document.getElementById("cellDisplayField");
  fv.style.display="";
  fv.style.display="";
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
  if (locStyle!=undefined) {
    selectList=document.getElementById("cellDisplay");
    setSelect(selectList,locStyle.style.display);
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
  }
  SetStatus();
  SetSample();
}
function SetStatus() {
  var el;
  var ps;
  el=document.getElementById("patientStatus");
  ClassCode="patientStatus"+el.options[el.selectedIndex].value;
  var HiddenStatus="";
  for (var i=0;i<HiddenStatusCodes.length;i++) {
    if (+el.options[el.selectedIndex].value==HiddenStatusCodes[i]) {
      HiddenStatus="none";
    }
  }
  selectList=document.getElementById("cellDisplay");
  setSelect(selectList,HiddenStatus);

  var openPage=sClickTemplate;
  for (var i=0;i<LinkStatusCodes.length;i++) {
    if (+el.options[el.selectedIndex].value==LinkStatusCodes[i].substr(0,2)) {
      openPage=LinkStatusCodes[i].substr(3);
    }
  }
  selectList=document.getElementById("openPage");
  setSelect(selectList,openPage);

  var locStyle=getStyle(ClassCode);
  if (locStyle!=undefined) {
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
  }
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
  var LocationIndex;
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][1]==LocationCode) {
      LocationIndex=i;
      var el=document.getElementById("Location-"+i);
      ClassCode=el.className.replace(/.*LocationStyle /,"");
    }
  }
  var fv;
  fv=document.getElementById("shortName");
  fv.value=el.getAttribute("shortName");
  fv=document.getElementById("longName");
  fv.value=el.getAttribute("longName");
  fv=document.getElementById("containerWidth");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerWidth")) fv.selectedIndex=i;
  }
  fv=document.getElementById("containerHeight");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerHeight")) fv.selectedIndex=i;
  }
  fv=document.getElementById("patientsWide");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsWide")) fv.selectedIndex=i;
  }
  fv=document.getElementById("patientsHigh");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsHigh")) fv.selectedIndex=i;
  }
  fv=document.getElementById("maxPatients");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("maxPatients")) fv.selectedIndex=i;
  }
  fv=document.getElementById("countColumn");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==obj.locations[LocationIndex][18]) fv.selectedIndex=i;
  }
  fv=document.getElementById("tableLayout");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==obj.locations[LocationIndex][19]) fv.selectedIndex=i;
  }
  fv=document.getElementById("containerType");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerType")) fv.selectedIndex=i;
  }

  fv=document.getElementById("containerAction");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerAction")) fv.selectedIndex=i;
  }

  fv=document.getElementById("cellClass");
  fv.value=ClassCode;

  fv=document.getElementById("cellTop");
  fv.value=el.style.top.replace(/px/,"");
  if (isWhitespace(fv.value)) fv.value='0';

  fv=document.getElementById("cellLeft");
  fv.value=el.style.left.replace(/px/,"");
  if (isWhitespace(fv.value)) fv.value='0';

  SetContainerType();
}
function ShowLocationSettings(el) {
  var selectedCode=el.getAttribute("locationCode");
  if (isWhitespace(selectedCode)) {alert('No Location Selected'); return;}
  ClassCode=clickLocation.className.replace(/.*LocationStyle /,"");
  var sl=parseInt(document.getElementById("seclevel").value,10);
  if (sl<50) {
    alert("Security level inadequate to alter style sheet classes.");
    ReloadPage();
  }
  document.ondblclick  = nullReturn;
  document.onclick     = nullReturn;
  document.onmousedown = nullReturn;
  document.onmousemove = nullReturn;
  document.onmouseup   = nullReturn;
  document.onkeydown   = OnKeyDown;
  var fv;
  var sl=true;
  var ap=false;
  var LocaitonIndex;
  fv=document.getElementById("locationCode");
  for (var i=0;i<obj.locations.length;i++) {
    fv.options[fv.options.length] = new Option(obj.locations[i][0],obj.locations[i][1]);
    if (obj.locations[i][1]==selectedCode) { 
      LocationIndex=i;
      fv.selectedIndex=i;
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
  fv=document.getElementById("containerWidth");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerWidth")) fv.selectedIndex=i;
  }
  fv=document.getElementById("containerHeight");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerHeight")) fv.selectedIndex=i;
  }
  fv=document.getElementById("patientsWide");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsWide")) fv.selectedIndex=i;
  }
  fv=document.getElementById("patientsHigh");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("patientsHigh")) fv.selectedIndex=i;
  }
  fv=document.getElementById("maxPatients");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("maxPatients")) fv.selectedIndex=i;
  }
  fv=document.getElementById("countColumn");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==obj.locations[LocationIndex][18]) fv.selectedIndex=i;
  }
  fv=document.getElementById("tableLayout");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==obj.locations[LocationIndex][19]) fv.selectedIndex=i;
  }

  fv=document.getElementById("containerType");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerType")) fv.selectedIndex=i;
  }
  fv=document.getElementById("containerAction");
  for (var i=0;i<fv.options.length;i++) {
    if (fv.options[i].value==el.getAttribute("containerAction")) fv.selectedIndex=i;
  }
  fv=document.getElementById("cellClass");
  fv.value=ClassCode;
  fv=document.getElementById("cellTop");
  fv.value=el.style.top.replace(/px/,"");
  fv=document.getElementById("cellLeft");
  fv.value=el.style.left.replace(/px/,"");
  SetContainerType();

  var PageSet=document.getElementById("LocationSettings");
  PageSet.style.position='absolute';
  PageSet.style.top='30px';
  PageSet.style.left='5px';
  PageSet.style.width='600px';
  PageSet.style.height='700px';
  PageSet.style.backgroundColor='white';
  PageSet.style.border='solid 3px #ccc';
  PageSet.style.display="inline-block";
  PageSet.style.zIndex=90000;
  PageSet.style.display='';
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
  sl=document.getElementById("nameFormat");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==PatientNameFormat)  sl.selectedIndex=i;
  }
  sl=document.getElementById("nameType");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==PatientNameType)  sl.selectedIndex=i;
  }
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
  sl=document.getElementById("sClickTemplate");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==sClickTemplate) sl.selectedIndex=i;
  }
  sl=document.getElementById("dClickTemplate");
  for (var i = 0;i < sl.options.length; i++) {
    if (sl.options[i].value==dClickTemplate) sl.selectedIndex=i;
  }
  document.getElementById("defaultTop").value=defaultTop;
  document.getElementById("defaultLeft").value=defaultLeft;
  document.getElementById("defaultSpace").value=defaultSpace;
  document.getElementById("maxColumns").value=maxColumns;
  if (ReadOnlyView) { document.getElementById("readOnlyView").checked=true; }
}
function SaveBasic() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("nameType");
  scriptString+="PatientNameType="+el.options[el.selectedIndex].value+";";

  el=document.getElementById("nameFormat");
  scriptString+="PatientNameFormat="+el.options[el.selectedIndex].value+";";

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

  el=document.getElementById("sClickTemplate");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="sClickTemplate='"+inputValue+"';";

  el=document.getElementById("dClickTemplate");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="dClickTemplate='"+inputValue+"';";

  el=document.getElementById("patientLineCnt");
  inputValue=el.options[el.selectedIndex].value;
  var ContainerLines=inputValue;
  el=document.getElementById("patientContainer");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="PatientContainer="+inputValue+";";
  scriptString+="PatientContainerLines="+ContainerLines+";";

  el=document.getElementById("patientWidth");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="PatientCellWidth="+inputValue+";";

  el=document.getElementById("patientLine");
  inputValue=el.options[el.selectedIndex].value;
  scriptString+="PatientCellHeight="+inputValue*ContainerLines+";";
  scriptString+="PatientLineHeight="+inputValue+";";
  if (document.getElementById("readOnlyView").checked) {
    scriptString+="ReadOnlyView=true;";}

  el=document.getElementById("hospitalViewContext");
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
  var el;
  el=document.getElementById("patientStatusField");
  if (el.style.display!="none") {
    el=document.getElementById("patientStatus");
    var ps=el.options[el.selectedIndex].value;
    ClassCode="patientCellStatus"+ps;
    UpdateStyle(pk,ClassCode,"");
    ClassCode+=' td:last-child'
    UpdateStyle(pk,ClassCode,"");
    UpdateJavascript(pk,ClassCode,"");
    ClassCode="patientStatus"+ps;
  }
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  UpdateStyle(pk,ClassCode,"");
  location.reload();
}
function DeleteLocation() {
  if (confirm("This will delete the location from all views.  Click Ok to continue.")) {
    ClassCode=ClassCode.replace(/traffic.*/,"");
    ClassCode=ClassCode.replace(/.*statsHeading /,"");
    ClassCode=ClassCode.replace(/.*freeTextBody /,"");
    ClassCode=ClassCode.replace(/ /g,"");
    el=document.getElementById("hospitalContext");
    var pk=el.value;
    UpdateJavascript(pk,ClassCode,"");
    UpdateStyle(pk,ClassCode,"");
    for (var i=0;i<ViewCodes.length;i++) {
      UpdateJavascript(pk+ViewCodes[i],ClassCode,"");
      UpdateStyle(pk+ViewCodes[i],ClassCode,"");
    }
    location.reload();
  }
}
function ClearLocation() {
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  el=document.getElementById("locationFields");
  if (el.style.display=="none") {
    location.reload();
    return;
  }
  el=document.getElementById("locationCode");
  lc=el.options[el.selectedIndex].value;
  ClassCode="styleLoc-"+lc;
  UpdateJavascript(pk,ClassCode,"");
  location.reload();
}
function ClearBasic() {
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"BASIC","");
  location.reload();
}
function ClearNext() {
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Next","");
  location.reload();
}
function ClearNotices() {
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Notices","");
  location.reload();
}
function ClearStatistics() {
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  UpdateJavascript(pk,"styleLoc-Statistics","");
  location.reload();
}
function SaveLocation() {
  var scriptString="";
  var el;
  var lc;
  el=document.getElementById("locationFields");
  if (el.style.display=="none") {
    obj.locations.sort(LocationCodeSort);
    var NewLoc=parseInt(obj.locations[obj.locations.length-1][1].replace(/LOC-/,""),10)+1
    lc="LOC-"+("00000"+NewLoc).slice(-5);
    obj.locations.sort(LocationNameSort);
  } else {
    el=document.getElementById("locationCode");
    lc=el.options[el.selectedIndex].value;
  }
  ClassCode="styleLoc-"+lc;
  for (var i=0;i<obj.locations.length;i++) {
    if (obj.locations[i][1]==lc) {
      locationObject=obj.locations[i];
    }
  }
  el=document.getElementById("longName");
  var ln=el.value;
  el=document.getElementById("shortName");
  var sn=el.value;
  el=document.getElementById("cellTop");
  var ct=el.value;
  el=document.getElementById("cellLeft");
  var cl=el.value;
  el=document.getElementById("positionAuto");
  if (el.checked) { ct=0;cl=0;}
  var sl="true";
  el=document.getElementById("showLocation");
  if (!el.checked) { sl="false";}
  var ap="true";
  el=document.getElementById("positionAuto");
  if (!el.checked) { ap="false";}
  el=document.getElementById("containerType");
  var cType=el.options[el.selectedIndex].value;
  el=document.getElementById("containerAction");
  var cAction=el.options[el.selectedIndex].value;
  el=document.getElementById("containerWidth");
  var cWidth=el.options[el.selectedIndex].value;
  el=document.getElementById("containerHeight");
  var cHeight=el.options[el.selectedIndex].value;
  el=document.getElementById("patientsWide");
  var pw=el.options[el.selectedIndex].value;
  el=document.getElementById("patientsHigh");
  var ph=el.options[el.selectedIndex].value;
  el=document.getElementById("maxPatients");
  var mp=el.options[el.selectedIndex].value;
  el=document.getElementById("countColumn");
  var cc=el.options[el.selectedIndex].value;
  el=document.getElementById("tableLayout");
  var tl=el.options[el.selectedIndex].value;
  if (lc!='LOC-00000') {
   if (AddLocation) {
    scriptString='obj.AddLocation("'+ln+'","'+
                                 lc+'",'+
                                 cl+','+
                                 ct+','+
                                 '0,'+
                                 '0,'+
                                 '0,'+
                                 '0,"'+
                                 cType+'","'+
                                 mp+'","'+
                                 sn+'",'+
                                 pw+','+
                                 ph+',"'+
                                 'false'+'","'+
                                 ap+'","'+
                                 cWidth+'","'+
                                 cHeight+'","'+
                                 cAction+'","'+
                                 cc+'","'+
                                 tl+'");'
    el=document.getElementById("hospitalContext");
    var pk=el.value;
    UpdateJavascript(pk,ClassCode,scriptString);
   }
  }
  scriptString='UpdLocation("'+ln+'","'+
                               lc+'",'+
                               cl+','+
                               ct+','+
                               '0,'+
                               '0,'+
                               '0,'+
                               '0,"'+
                               cType+'","'+
                               mp+'","'+
                               sn+'",'+
                               pw+','+
                               ph+',"'+
                               sl+'","'+
                               ap+'","'+
                               cWidth+'","'+
                               cHeight+'","'+
                               cAction+'","'+
                               cc+'","'+
                               tl+'");'
  el=document.getElementById("hospitalViewContext");
  pk=el.value;
  UpdateJavascript(pk,ClassCode,scriptString);
  location.reload();
}
function SetContainerType() {
  var el=document.getElementById("containerType");
  var tc=el.options[el.selectedIndex].value;
  el=document.getElementById("statisticsColumnField");
  el.style.display="none";
  el=document.getElementById("statisticsTableField");
  el.style.display="none";
  switch (tc) {
  case "4":
    el=document.getElementById("statisticsColumnField");
    el.style.display="";
    el=document.getElementById("statisticsTableField");
    el.style.display="";
    el=document.getElementById("setPatientsWidth");
    el.style.display="none";
    el=document.getElementById("setPatientsHeight");
    el.style.display="none";
    el=document.getElementById("setContainerWidth");
    el.style.display="";
    el=document.getElementById("setContainerHeight");
    el.style.display="";
    break;
  case "0":
    el=document.getElementById("setPatientsWidth");
    el.style.display="";
    el=document.getElementById("setPatientsHeight");
    el.style.display="";
    el=document.getElementById("setContainerWidth");
    el.style.display="none";
    el=document.getElementById("setContainerHeight");
    el.style.display="none";
    break;
  default :
    el=document.getElementById("setPatientsWidth");
    el.style.display="none";
    el=document.getElementById("setPatientsHeight");
    el.style.display="none";
    el=document.getElementById("setContainerWidth");
    el.style.display="";
    el=document.getElementById("setContainerHeight");
    el.style.display="";
    break;
  }
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
  if (!isWhitespace(bg)){classString+="background-color:"+bg+";"; }
  if (!isWhitespace(bc)){classString+="border:solid "+bw+" "+bc+";"; }
  el=document.getElementById("hospitalViewContext");
  var pk=el.value;
  el=document.getElementById("patientStatusField");
  if (el.style.display!="none") {
    el=document.getElementById("patientStatus");
    var ps=el.options[el.selectedIndex].value;
    el=document.getElementById("cellDisplay");
    var cd=el.options[el.selectedIndex].value;
    el=document.getElementById("openPage");
    var op=el.options[el.selectedIndex].value;
    if (cd=="none") { 
      ClassCode="patientCellStatus"+ps;
      classString="display:none;"; 
      scriptString="HiddenStatusCodes[HiddenStatusCodes.length]='"+ps+"';";
      UpdateJavascript(pk,ClassCode,scriptString);
    } else {
      scriptString="LinkStatusCodes[LinkStatusCodes.length]='"+ps+"|"+op+"';";
      ClassCode="patientCellStatus"+ps;
      UpdateJavascript(pk,ClassCode,scriptString);
      UpdateStyle(pk,ClassCode,"");
      ClassCode="patientStatus"+ps;
    }
  }
  UpdateStyle(pk,ClassCode,classString);
  classString="";
  ClassCode+=' td:last-child'
  if (!isWhitespace(bi)){
    classString="background-image:url(\"../images/"+bi+"\");";
    classString+="background-repeat:no-repeat;";
    classString+="background-position:top right;";
  }
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
function SaveView() {
  var scriptString="";
  var el;
  var inputValue;
  el=document.getElementById("hospitalContext");
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
  el=document.getElementById("hospitalContext");
  var pk=el.value;
  UpdateJavascript(pk,"VIEWS1","");
  UpdateJavascript(pk,"VIEWS2","");
  location.reload();
}
function ShowConditionalSettings() {
  var PageSet=document.getElementById("ConditionalSetting");
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
  var el;
  el=document.getElementById("codedChk1");
  if (codedFld1==1) el.checked=true;
  el=document.getElementById("codedChk2");
  if (codedFld2==1) el.checked=true;
  el=document.getElementById("codedChk3");
  if (codedFld3==1) el.checked=true;
  el=document.getElementById("codedChk4");
  if (codedFld4==1) el.checked=true;
  el=document.getElementById("codedChk5");
  if (codedFld5==1) el.checked=true;
  el=document.getElementById("codedChk6");
  if (codedFld6==1) el.checked=true;
  el=document.getElementById("codedChk7");
  if (codedFld7==1) el.checked=true;
  el=document.getElementById("codedChk8");
  if (codedFld8==1) el.checked=true;

  el=document.getElementById("buttonChk0");
  if (btnFld0==1) el.checked=true;
  el=document.getElementById("buttonLab0");
  el.value=btnLab0;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk1");
  if (btnFld1==1) el.checked=true;
  el=document.getElementById("buttonLab1");
  el.value=btnLab1;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk2");
  if (btnFld2==1) el.checked=true;
  el=document.getElementById("buttonLab2");
  el.value=btnLab2;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk3");
  if (btnFld3==1) el.checked=true;
  el=document.getElementById("buttonLab3");
  el.value=btnLab3;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk4");
  if (btnFld4==1) el.checked=true;
  el=document.getElementById("buttonLab4");
  el.value=btnLab4;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk5");
  if (btnFld5==1) el.checked=true;
  el=document.getElementById("buttonLab5");
  el.value=btnLab5;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk6");
  if (btnFld6==1) el.checked=true;
  el=document.getElementById("buttonLab6");
  el.value=btnLab6;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk7");
  if (btnFld7==1) el.checked=true;
  el=document.getElementById("buttonLab7");
  el.value=btnLab7;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk8");
  if (btnFld8==1) el.checked=true;
  el=document.getElementById("buttonLab8");
  el.value=btnLab8;
  if (sl<90) el.disabled=true;

  el=document.getElementById("buttonChk9");
  if (btnFld9==1) el.checked=true;
  el=document.getElementById("buttonLab9");
  el.value=btnLab9;
  if (sl<90) el.disabled=true;

  el=document.getElementById("freeTextChk1");
  if (freeTxtFld1==1) el.checked=true;
  el=document.getElementById("freeTextLab1");
  el.value=freeTxtLab1;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen1");
  el.value=freeTxtLen1;

  el=document.getElementById("freeTextChk2");
  if (freeTxtFld2==1) el.checked=true;
  el=document.getElementById("freeTextLab2");
  el.value=freeTxtLab2;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen2");
  el.value=freeTxtLen2;

  el=document.getElementById("freeTextChk3");
  if (freeTxtFld3==1) el.checked=true;
  el=document.getElementById("freeTextLab3");
  el.value=freeTxtLab3;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen3");
  el.value=freeTxtLen3;

  el=document.getElementById("freeTextChk4");
  if (freeTxtFld4==1) el.checked=true;
  el=document.getElementById("freeTextLab4");
  el.value=freeTxtLab4;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen4");
  el.value=freeTxtLen4;

  el=document.getElementById("freeTextChk5");
  if (freeTxtFld5==1) el.checked=true;
  el=document.getElementById("freeTextLab5");
  el.value=freeTxtLab5;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen5");
  el.value=freeTxtLen5;

  el=document.getElementById("freeTextChk6");
  if (freeTxtFld6==1) el.checked=true;
  el=document.getElementById("freeTextLab6");
  el.value=freeTxtLab6;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen6");
  el.value=freeTxtLen6;

  el=document.getElementById("freeTextChk7");
  if (freeTxtFld7==1) el.checked=true;
  el=document.getElementById("freeTextLab7");
  el.value=freeTxtLab7;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen7");
  el.value=freeTxtLen7;

  el=document.getElementById("freeTextChk8");
  if (freeTxtFld8==1) el.checked=true;
  el=document.getElementById("freeTextLab8");
  el.value=freeTxtLab8;
  if (sl<90) el.disabled=true;
  el=document.getElementById("freeTextLen8");
  el.value=freeTxtLen8;

}
function SaveConditional() {
  var scriptString="";
  var el;
  var inputValue;

  var pk="oprweb0104025";
  el=document.getElementById("codedChk1");
  if (el.checked) scriptString+="codedFld1=1;codedTitle1='"+
                  document.getElementById("codedLab1").value+"';";
  el=document.getElementById("codedChk2");
  if (el.checked) scriptString+="codedFld2=1;codedTitle2='"+
                  document.getElementById("codedLab2").value+"';";
  el=document.getElementById("codedChk3");
  if (el.checked) scriptString+="codedFld3=1;codedTitle3='"+
                  document.getElementById("codedLab3").value+"';";
  el=document.getElementById("codedChk4");
  if (el.checked) scriptString+="codedFld4=1;codedTitle4='"+
                  document.getElementById("codedLab4").value+"';";
  el=document.getElementById("codedChk5");
  if (el.checked) scriptString+="codedFld5=1;codedTitle5='"+
                  document.getElementById("codedLab5").value+"';";
  el=document.getElementById("codedChk6");
  if (el.checked) scriptString+="codedFld6=1;codedTitle6='"+
                  document.getElementById("codedLab6").value+"';";
  el=document.getElementById("codedChk7");
  if (el.checked) scriptString+="codedFld7=1;codedTitle7='"+
                  document.getElementById("codedLab7").value+"';";
  el=document.getElementById("codedChk8");
  if (el.checked) scriptString+="codedFld8=1;codedTitle8='"+
                  document.getElementById("codedLab8").value+"';";
  UpdateJavascript(pk,"codedFieldSettings",scriptString);

  scriptString="";
  el=document.getElementById("buttonChk0");
  if (el.checked) scriptString+="btnFld0=1;";
  el=document.getElementById("buttonChk1");
  if (el.checked) scriptString+="btnFld1=1;";
  el=document.getElementById("buttonChk2");
  if (el.checked) scriptString+="btnFld2=1;";
  el=document.getElementById("buttonChk3");
  if (el.checked) scriptString+="btnFld3=1;";
  el=document.getElementById("buttonChk4");
  if (el.checked) scriptString+="btnFld4=1;";
  el=document.getElementById("buttonChk5");
  if (el.checked) scriptString+="btnFld5=1;";
  el=document.getElementById("buttonChk6");
  if (el.checked) scriptString+="btnFld6=1;";
  el=document.getElementById("buttonChk7");
  if (el.checked) scriptString+="btnFld7=1;";
  el=document.getElementById("buttonChk8");
  if (el.checked) scriptString+="btnFld8=1;";
  el=document.getElementById("buttonChk9");
  if (el.checked) scriptString+="btnFld9=1;";
  UpdateJavascript(pk,"buttonFieldSettings",scriptString);

  el=document.getElementById("freeTextChk1");
  if (el.checked) scriptString+="freeTxtFld1=1;";
  el=document.getElementById("freeTextLen1");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen1='"+el.value+"';";

  el=document.getElementById("freeTextChk2");
  if (el.checked) scriptString+="freeTxtFld2=1;";
  el=document.getElementById("freeTextLen2");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen2='"+el.value+"';";

  el=document.getElementById("freeTextChk3");
  if (el.checked) scriptString+="freeTxtFld3=1;";
  el=document.getElementById("freeTextLen3");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen3='"+el.value+"';";

  el=document.getElementById("freeTextChk4");
  if (el.checked) scriptString+="freeTxtFld4=1;";
  el=document.getElementById("freeTextLen4");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen4='"+el.value+"';";

  el=document.getElementById("freeTextChk5");
  if (el.checked) scriptString+="freeTxtFld5=1;";
  el=document.getElementById("freeTextLen5");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen5='"+el.value+"';";

  el=document.getElementById("freeTextChk6");
  if (el.checked) scriptString+="freeTxtFld6=1;";
  el=document.getElementById("freeTextLen6");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen6='"+el.value+"';";

  el=document.getElementById("freeTextChk7");
  if (el.checked) scriptString+="freeTxtFld7=1;";
  el=document.getElementById("freeTextLen7");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen7='"+el.value+"';";

  el=document.getElementById("freeTextChk8");
  if (el.checked) scriptString+="freeTxtFld8=1;";
  el=document.getElementById("freeTextLen8");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLen8='"+el.value+"';";
  UpdateJavascript(pk,"freeTextFieldSettings",scriptString);

  scriptString="";
  el=document.getElementById("buttonLab0");
  if (!isWhitespace(el.value)) scriptString+="btnLab0='"+el.value+"';";
  el=document.getElementById("buttonLab1");
  if (!isWhitespace(el.value)) scriptString+="btnLab1='"+el.value+"';";
  el=document.getElementById("buttonLab2");
  if (!isWhitespace(el.value)) scriptString+="btnLab2='"+el.value+"';";
  el=document.getElementById("buttonLab3");
  if (!isWhitespace(el.value)) scriptString+="btnLab3='"+el.value+"';";
  el=document.getElementById("buttonLab4");
  if (!isWhitespace(el.value)) scriptString+="btnLab4='"+el.value+"';";
  el=document.getElementById("buttonLab5");
  if (!isWhitespace(el.value)) scriptString+="btnLab5='"+el.value+"';";
  el=document.getElementById("buttonLab6");
  if (!isWhitespace(el.value)) scriptString+="btnLab6='"+el.value+"';";
  el=document.getElementById("buttonLab7");
  if (!isWhitespace(el.value)) scriptString+="btnLab7='"+el.value+"';";
  el=document.getElementById("buttonLab8");
  if (!isWhitespace(el.value)) scriptString+="btnLab8='"+el.value+"';";
  el=document.getElementById("buttonLab9");
  if (!isWhitespace(el.value)) scriptString+="btnLab9='"+el.value+"';";
  UpdateJavascript(pk,"buttonLabelSettings",scriptString);

  scriptString="";
  el=document.getElementById("freeTextLab1");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab1='"+el.value+"';";
  el=document.getElementById("freeTextLab2");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab2='"+el.value+"';";
  el=document.getElementById("freeTextLab3");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab3='"+el.value+"';";
  el=document.getElementById("freeTextLab4");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab4='"+el.value+"';";
  el=document.getElementById("freeTextLab5");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab5='"+el.value+"';";
  el=document.getElementById("freeTextLab6");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab6='"+el.value+"';";
  el=document.getElementById("freeTextLab7");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab7='"+el.value+"';";
  el=document.getElementById("freeTextLab8");
  if (!isWhitespace(el.value)) scriptString+="freeTxtLab8='"+el.value+"';";
  UpdateJavascript(pk,"freeTextLabelSettings",scriptString);
  location.reload();
}
function ClearConditional() {
  el=document.getElementById("hospitalContext");
  var pk=el.value;
  UpdateJavascript(pk,"codedFieldSettings","");
  UpdateJavascript(pk,"buttonFieldSettings","");
  UpdateJavascript(pk,"freeTextFieldSettings","");
  UpdateJavascript(pk,"freeTextLabelSettings","");
  location.reload();
}
