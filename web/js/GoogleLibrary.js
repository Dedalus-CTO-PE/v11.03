//--------------------------------------------------
// Google Maps Display Routines
// V10.03.01 02.10.2013 B.G.Ackland
//                      New Functions to SetFilter() for saved cookie value
// V10.03.00 22.08.2013 B.G.Ackland
//                      New Functions
//--------------------------------------------------
var t;
var map;
var fullBounds = new google.maps.LatLngBounds();
var contentString = "Some content";
var infowindow = null;
var geocoder;
var currentLat;
var currentLon;
var latlngList;
var markerMethod=0;
var markerColorNo=0;
var markerCount=0;
var markerBreakColumnNo=0;
var markerValue="";
var defLat="-37.858964"; // Default Hospital Location for Initial Map View
var defLng="145.0335";
var markerColors= new Array("","_green","_yellow","_purple","_brown","_grey","_white","_black");
var FilterColumn = new Array();
var FilterValue = new Array();
//--------------------------------------------------
// Display Base Map
//  - Requires DIV on Page to Display Map
//  <div id=MapLocation style='width:XXX;height:YYY;'></div></td>
//--------------------------------------------------
function DisplayMap() {
  var myOptions = {
    zoom:12,
    center: new google.maps.LatLng(defLat, defLng),    
    mapTypeId: google.maps.MapTypeId.ROADMAP
  }
  map = new google.maps.Map(document.getElementById("MapLocation"), myOptions);
  infowindow = new google.maps.InfoWindow({
    content: "holding..."
    });
  setTimeout(function(){ GeoCodeList(); }, 100); 

}
//--------------------------------------------------
// Display Markers on Map
//  - Requires Table Sort Table as t with preset columns
//  - column 0 - U/R
//  - column 1 - Visit No
//  - column 2 - Patient Name
//  - column 3 - Address
//  - column 4 - Latitude
//  - column 5 - Longitude
//--------------------------------------------------
function GeoCodeList() {
  for (var i = 0; i < t.rows.length; i++) {
    if (ListFilter(t.rows[i])) {
      sHTML=t.rows[i][2]+"<br>"+t.rows[i][3];
      sPatient=t.rows[i][2].replace(/<b>/i,"").replace(/<\/b>/i,"");
      sAddress=t.rows[i][3];
      sTitle=sPatient+"\n"+sAddress
      sAlpha=getMarkerColor(i);
      if (t.rows[i][4]=="0") {
         geoCodeAddress(sAddress,sAlpha,sTitle,sHTML);   /* No Server Geo Code so do it on Client Side */
      } else {
        var myLatlng = new google.maps.LatLng(t.rows[i][4],t.rows[i][5]);
        var marker = new google.maps.Marker({ map: map,
            animation: google.maps.Animation.DROP,
            icon: "https://maps.gstatic.com/mapfiles/marker"+sAlpha+".png",
            title: sTitle,
            html: sHTML,
            position: myLatlng
        });
        google.maps.event.addListener(marker, "click", function () { 
           infowindow.setContent(this.html);
           infowindow.open(map, this);
          });
        fullBounds.extend(marker.getPosition()); 
        map.fitBounds(fullBounds); 
      }
    }
  }
}
function getMarkerColor(rowNo) {
  if (markerMethod==1) {
    if (rowNo==0) {
      markerValue=t.rows[rowNo][markerBreakColumnNo];
      markerColorNo=0;
      markerCount=-1;
    }
    if (markerValue!=t.rows[rowNo][markerBreakColumnNo]) {
      markerValue=t.rows[rowNo][markerBreakColumnNo]
      markerColorNo++;
      if (markerColorNo>7) markerColorNo=0;
      markerCount=-1;
    }
    markerCount++;
    markerColor=markerColors[markerColorNo]
    markerNo=markerCount-(26*Math.floor(markerCount/26));
    return markerColor+String.fromCharCode(65+markerNo);
  }
  markerColor=markerColors[Math.floor(rowNo/26)]
  markerNo=rowNo-(26*Math.floor(rowNo/26));
  return markerColor+String.fromCharCode(65+markerNo);
}
function geoCodeAddress(sAddress,sAlpha,sTitle,sHTML) {
  geocoder = new google.maps.Geocoder();
  geocoder.geocode( { 'address': sAddress }, function(results, status) {
    if (status == google.maps.GeocoderStatus.OK) { 
      var marker = new google.maps.Marker({ map: map,
          animation: google.maps.Animation.DROP,
          icon: "https://maps.gstatic.com/mapfiles/marker"+sAlpha+".png",
          title: sTitle,
          html: sHTML,
          position: results[0].geometry.location
      });
      google.maps.event.addListener(marker, "click", function () { 
         infowindow.setContent(this.html);
         infowindow.open(map, this);
        });
      fullBounds.extend(marker.getPosition()); 
      map.fitBounds(fullBounds); 
    } else {
      if (status === google.maps.GeocoderStatus.OVER_QUERY_LIMIT) {    
        setTimeout(function() {
          geoCodeAddress(sAddress,sAlpha);
          }, 200);
      } else {
        alert("Geocode was not successful for "+sAlpha+". "+sAddress+" the following reason: " + status);
      }
    }
  });
}
function Table() {
   this.rows = new Array();
   this.addRow = _addTableRow;
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i].replace(/\s*$/,"");
}
function SetFilter(el,ColumnNo) {
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
       FilterValue[f]=el.options[el.selectedIndex].value;
    }
  }
}
function FilterList(el,ColumnNo) {
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
       FilterValue[f]=el.options[el.selectedIndex].value;
    }
  }
  markerValue="";
  markerColorNo=0;
  ShowList();
  markerValue="";
  markerColorNo=0;
  DisplayMap();
}
function ListFilter(el) {
  for(var f = 0; f < FilterValue.length; f++) {
    if (FilterValue[f]!='') {
      if (FilterValue[f]!=el[FilterColumn[f]]) {
        return false;
      }
    }
  }
  return true;
}
function ShowFilter(FilterName,ColumnNo) {
 var FilterList = new Array();
 var FilterCount = new Array();
 FilterColumn[FilterColumn.length]=ColumnNo;
 FilterValue[FilterValue.length]='';
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (t.rows[i][ColumnNo]==FilterList[j]) {
         addItem=false;
         FilterCount[j]++
       }
     }
     if (addItem) {
       FilterList[FilterList.length]=t.rows[i][ColumnNo];
       FilterCount[FilterCount.length]=1;
     }
   }
 }
 el=document.getElementById(FilterName)
 for(var j = 0; j < FilterList.length; j++) {
   FilterList[j]=FilterList[j]+"("+FilterCount[j]+")";
 }
 FilterList.sort();
 for(var j = 0; j < FilterList.length; j++) {
   optionVal=FilterList[j].replace(/\(.\)$/,"").replace(/\(..\)$/,"").replace(/\(...\)$/,"");
   el.options[el.options.length] = new Option(FilterList[j],optionVal);
 }
}
function ShowFilter2(FilterName,cColumnNo,vColumnNo) {
 var FilterList = new Array();
 var FilterCount = new Array();
 FilterColumn[FilterColumn.length]=cColumnNo;
 FilterValue[FilterValue.length]='';
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][cColumnNo])) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (t.rows[i][cColumnNo]+"|"+t.rows[i][vColumnNo]==FilterList[j]) {
         addItem=false;
         FilterCount[j]++
       }
     }
     if (addItem) {
       FilterList[FilterList.length]=t.rows[i][cColumnNo]+"|"+t.rows[i][vColumnNo];
       FilterCount[FilterCount.length]=1;
     }
   }
 }
 el=document.getElementById(FilterName)
// for(var j = 0; j < FilterList.length; j++) {
//   FilterList[j]=FilterList[j]+"("+FilterCount[j]+")";
// }
 FilterList.sort();
 for(var j = 0; j < FilterList.length; j++) {
   optionNam=FilterList[j].split("|")[0];
   optionVal=FilterList[j].split("|")[1];
   el.options[el.options.length] = new Option(optionNam,optionVal);
 }
}
