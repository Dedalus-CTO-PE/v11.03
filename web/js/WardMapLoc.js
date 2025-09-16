//jsVersion  : V11.03.00
//------------------------------------------------------------
//  Ward Map Location - Standard Layouts
//  layoutType=0 - Vertial Bed Allocation
//  layoutType=1 - Horizontal Bed Allocation
//------------------------------------------------------------
function hsvToRgb(h, s, v) {  
 var r, g, b;   
 var i = Math.floor(h * 6);  
 var f = h * 6 - i;  
 var p = v * (1 - s);  
 var q = v * (1 - f * s);  
 var t = v * (1 - (1 - f) * s);   
 switch (i % 6) {    
  case 0: r = v, g = t, b = p; break;    
  case 1: r = q, g = v, b = p; break;    
  case 2: r = p, g = v, b = t; break;    
  case 3: r = p, g = q, b = v; break;    
  case 4: r = t, g = p, b = v; break;    
  case 5: r = v, g = p, b = q; break;  
 }   
 return [ Math.round(r * 255), Math.round(g * 255), Math.round(b * 255) ];
}
var chart_sat=.25;
var chart_val=1;
var preset_sat=.5;
var preset_val=1;
function setUpColors() {
  var maxColors = 24;
  var i = 360 / (maxColors - 1); // distribute the colors evenly on the hue range
  for (var x=0; x<maxColors; x++) {
     var chart_hue = (i*x)/100;
     var preset_hue = (i*(maxColors-x))/100;
     chartColor[x]='rgb(' + hsvToRgb(chart_hue,chart_sat,chart_val) + ')';
     presetColor[x]='rgb(' + hsvToRgb(preset_hue,preset_sat,preset_val) + ')';
  }
  document.getElementById("presetCode00").style.backgroundColor=presetColor[0];
  document.getElementById("presetCode01").style.backgroundColor=presetColor[1];
  document.getElementById("presetCode02").style.backgroundColor=presetColor[2];
  document.getElementById("presetCode03").style.backgroundColor=presetColor[3];
  document.getElementById("presetCode04").style.backgroundColor=presetColor[4];
  document.getElementById("presetCode05").style.backgroundColor=presetColor[5];
  document.getElementById("presetCode06").style.backgroundColor=presetColor[6];
  document.getElementById("presetCode07").style.backgroundColor=presetColor[7];
}
function SetLocations() {
  setUpColors();
  switch (layoutType) {
  case 1:
    addStandardBedLocations("Horizontal");
    addWaitingAreaHorizontal();
    break;
  default:
    addStandardBedLocations("Vertical");
    addWaitingAreaVertical();
    break;
  }
}
