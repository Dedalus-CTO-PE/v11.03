//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9301190.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

var points = new Array();
var route = new Route();
var path = new Array();
var directionDisplay;
var directionsService = new google.maps.DirectionsService();
var map;
var currentLat = 0;
var currentLong = 0;
var geocoder;
var currentLocationAddress;
var waypoint_markers = [];
var PatientRecords = null;
var currentLocationSet = false;
var roundRobbin = 0;
var visited = new Array();
var infowindowArray  = [];

function startMap(arrayAddress,placeHolderId) {
  if (navigator.geolocation){
    navigator.geolocation.getCurrentPosition( 
      function (position) {  
        currentLat = position.coords.latitude;
        currentLong = position.coords.longitude;
        geocoder = new google.maps.Geocoder();
        initialize(placeHolderId);
        codeLatLng(arrayAddress);
       },function (error){
          switch(error.code){
            case error.TIMEOUT:
              alert ('Timeout');
              break;
            case error.POSITION_UNAVAILABLE:
              alert ('Position unavailable');
              break;
            case error.PERMISSION_DENIED:
              alert ('Permission denied');
              break;
            case error.UNKNOWN_ERROR:
              alert ('Unknown error');
              break;
          }
        });
   }
} 


function setCurrentLocation(arrayLocations) {
   if(typeof currentLocationAddress != 'undefined') {
     arrayLocations.push(currentLocationAddress);
     currentLocationSet = true;
   }else {
     currentLocationSet = false;
   }
}

function getDistance(originArray) { 
  var service = new google.maps.DistanceMatrixService();

  var arrayLocations = new Array();
  
  if(startlocation == 0) {
    setCurrentLocation(arrayLocations);
  }else {

    var cookieLocation = getCookie('savedStartingLocation');

    if(cookieLocation.replace(/ /g,"").length != 0 ) {
      arrayLocations.push(getCookie('savedStartingLocation'));
      currentLocationSet = true;
    }else {
       setCurrentLocation(arrayLocations);
    }
  }
 
  for(var i = 0; i < originArray.length;i++) {
    arrayLocations.push(originArray[i]);
  }
  
  service.getDistanceMatrix( {
         origins: arrayLocations,
         destinations: arrayLocations,
         travelMode: google.maps.TravelMode.DRIVING,
         avoidHighways: false,
         avoidTolls: false
  },callback);
}

function Node() {
  this.name = "";
  this.duration = 0;
  this.distance = "";
  this.path = "";
  this.id = "";
  this.pid = 0;
  this.neighbour = new Array();
  this.patientId = "";
}

function Route() {
  this.collectionOfNodes = new Array();
}


function callback(response,status) {
    if(status == google.maps.GeocoderStatus.OK) {
      for(var i =0 ; i < response.rows.length; i++) {

        var node = new Node();
        node.distance = 0;
        node.duration = 0;
        node.path = "";
        node.id = i;
        node.pid = 0;

        if(currentLocationSet == true) {
           if(i == 0) {
             //do nothing;
           }else{
             node.patientId = t.rows[i-1][0];
           }
        }else {
           node.patientId = t.rows[i][0];
        }

        node.name = response.originAddresses[i];

        for(var j =0; j < response.rows[i].elements.length; j++) {
           var nNode = new Node();
           nNode.name = response.destinationAddresses[j];
           nNode.id = j;
           nNode.pid = i;

           nNode.path = i+"->"+j;
           nNode.distance = response.rows[i].elements[j].distance.value;
           nNode.duration = response.rows[i].elements[j].duration.value;

           if(node.name != nNode.name) {
               node.neighbour.push(nNode); 
           }        
        }
       
        route.collectionOfNodes.push(node);
      }

  //  route.collectionOfNodes.sort(sortPointsDuration);
      if(!userDefinedUsed) {
        shortestPath();
      }else {
        setUpUserDefinedPath();
      }
      displayPath();
    }else {
      alertify.alert("failed to load google maps");
    }
   }
 
   function shortestPath() {
      var isInList = false;
      var index = 0;
      var nodeSave = route.collectionOfNodes.slice();
      var node = nodeSave[0];
      var count = nodeSave.length;
      var shortest;
      var num = 0;
      visited.push(node.id);
      while( count > 0 ) {
        var index = 0;
        shortest = 9007199254740992;
        for( var i = 0; i < node.neighbour.length; i++ ) {
          var cmpShortest = node.neighbour[i].duration;
          //var cmpShortest = node.neighbour[i].distance;
          isInList = false;
          //not in list
          for(var k = 0; k < visited.length; k++) {
            if(parseInt(visited[k]) == parseInt(node.neighbour[i].id)) {
               isInList = true;
               break;
            }
          }
 
          if(!isInList) {
            if( parseInt(shortest) > parseInt(cmpShortest)) {
               shortest = cmpShortest;
               index = i; 
            }  
          }
        }
        visited.push(node.neighbour[index].id);
        node = nodeSave[node.neighbour[index].id];
        count--;
      }

      var num = 0;

      if(roundRobbin == 1) {
           num = 0;
      }else {
           num = 1;
      }

      for(var j = 0; j < visited.length-num; j++ ){
           path.push(route.collectionOfNodes[visited[j]]);
      }
   }        

   function setUpUserDefinedPath() {
     var nodeSave = route.collectionOfNodes.slice();	
     var num = 0;

     if(roundRobbin == 0) {
     	num = 0;
     }else {
        num = 1;
     }
	
     var tmpUserDefinedPath = userDefinedRoute.substring(0,userDefinedRoute.length-1).split('|');
       path.push(route.collectionOfNodes[0]);
     for(var i =0; i < tmpUserDefinedPath.length; i++) {
       path.push(route.collectionOfNodes[parseInt(tmpUserDefinedPath[i])+1]);
     }

     if(num == 1) {
       path.push(route.collectionOfNodes[0]);
     }
   }
	

   function sortPointsDuration(a,b) {
     return (parseInt(a.duration) - parseInt(b.duration));
   }

   function displayPath() {
     calcRoute(path[0],path[path.length-1]);
   }

   function codeLatLng(a) {
     var nArray = new Array();
     var lat = parseFloat(currentLat);
     var lng = parseFloat(currentLong);
     var latlng = new google.maps.LatLng(lat, lng);
     geocoder.geocode({'latLng': latlng}, function(results, status) {
      if (status == google.maps.GeocoderStatus.OK) {
        if (results[1]) {
          currentLocationAddress = results[0].formatted_address;
          getDistance(a);
        }
      } else {
        alertify.alert("Geocoder failed due to: " + status);
      }
     });
    }

    function initialize(placeHolderId) {
      directionsDisplay = new google.maps.DirectionsRenderer();
      var currentLocation = new google.maps.LatLng(currentLat, currentLong);
      var myOptions = {
        zoom:12,
        mapTypeId: google.maps.MapTypeId.ROADMAP,
        center: currentLocation
      }
      map = new google.maps.Map(document.getElementById(placeHolderId), myOptions);
      directionsDisplay.setMap(map);
    }

function calcRoute(a,b) {
  var start = a.name;
  var end = b.name;
  var waypts = [];

  for (var i = 1; i < path.length-1; i++) {
    if(i > 8)
       break;

    waypts.push({
      location: path[i].name,
       stopover:true
    });
  }

  var request = {
      origin: start,
      destination: end,
      waypoints: waypts,
      optimizeWaypoints: false,
      travelMode: google.maps.TravelMode.DRIVING
  };

    directionsService.route(request, function(response, status) {
      if (status == google.maps.DirectionsStatus.OK) {
        directionsDisplay.setDirections(response);
	var route = response.routes[0];
        var summaryPanel = document.getElementById("direction_canvas");
        summaryPanel.innerHTML = "";
        // For each route, display summary information.
        for (var i = 0; i < route.legs.length; i++) {
          var alpha = String.fromCharCode(65+i);
          var ul = document.createElement('ul');
          ul.id = "ul_"+i;
          ul.style.padding = "0px";
          ul.setAttribute("switch","off"); 
          summaryPanel.appendChild(ul);
          ul.innerHTML += "<li style='padding:5px;list-style:none;'>"+
				    "<div style='display:inline-block;float:left;width:'>"+
                                    "<img src='https://maps.gstatic.com/mapfiles/markers2/marker_green"+alpha+".png' />"+
                                    "</div><div style='text-align:left;font-size:14px;width:90%;"+
                                    "vertical-align: top;width: 80%;display: inline-block;'><b>"+
                                     route.legs[i].start_address + "<br /><br/>"+
                                    "("+route.legs[i].distance.text+")</div></li>";
          for(var j = 0; j < route.legs[i].steps.length; j++) {
            if(route.legs[i].steps[j].instructions.match(/right/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-turn-right-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/roundabout/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-roundabout-left-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/Slight left/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-turn-slight-left-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/left/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-turn-left-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/Keep left/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-fork-left-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/merge/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-merge-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/exit/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-ramp-left-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/straight/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-none-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/Head/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-none-19'></div>";
            }else if(route.legs[i].steps[j].instructions.match(/Continue/i)) {
               imgClass = "<div class='dir-ds-icon dir-tt-none-19'></div>";
            }else {
               imgClass = "";
            }
            if(route.legs[i].steps[j].instructions.match(/font-size:0.9em/i)) {
              ul.innerHTML += "<li  style='display:none;border-bottom:1px solid #efefef;padding:5px;list-style:none;'>"
                                   + imgClass+"<div style='width:80%;padding-left:19px;'><b>"+(j+1)+
                                     ".</b>"+route.legs[i].steps[j].instructions 
                                   + "</div> <div style='float:right;margin-top:-5px;background-color:#fff;width:80px;margin-right: -10px;'>"+
				     "("+route.legs[i].steps[j].distance.text+")</div></li>";
            } else {
              ul.innerHTML += "<li style='display:none;border-bottom:1px solid #efefef;padding:5px;list-style:none;'>"
                                   + imgClass+"<div style='width:80%;padding-left:19px;'><b>"+(j+1)+
                                   ".</b>"+route.legs[i].steps[j].instructions 
                                   + "</div> <div style='float:right;background-color:#fff;margin-top:-2px;width:80px;margin-right: -10px;'>"+
                                     "("+route.legs[i].steps[j].distance.text+")</div></li>";

            }
          }

          ul.innerHTML += "<li style='border-bottom:1px solid #efefef;text-align:right;padding:5px;list-style:none;display:none;'>"+
                                    "<span style='font-size:18px;'><b>Total "+
                                    route.legs[i].distance.text + "</b></span></li>";

          ul.addEventListener('click',function() {
             var maxUL = route.legs.length;
             var tmp = null; 

             for(var j = 0; j < maxUL; j++) { 
               tmp = document.getElementById('ul_'+j); 
               if(this.id == tmp.id) {
                 if(this.getAttribute("switch") == "off") {
                  for(var i =1; i < tmp.childNodes.length; i++) {
                   tmp.childNodes[i].style.display = "";
                  }
                  this.setAttribute("switch","on");
                 }else {
                   for(var i =1; i < tmp.childNodes.length; i++) {
                     tmp.childNodes[i].style.display = "none";
                   }
                  this.setAttribute("switch","off");
                 }
               }else {
                 for(var i =1; i < tmp.childNodes.length; i++) {
                   tmp.childNodes[i].style.display = "none";
                 }
               }          
             }
          });                       
        }
    }
    watch_waypoints();

    directionsDisplay.setOptions({
       suppressMarkers: true 
    });

  });
}

function watch_waypoints() {
  clear_markers();
  //var wpts = directionsDisplay.directions.routes[0].legs[0].start_location;
  var wpts = directionsDisplay.directions.routes[0].legs;
  var that = this;
  var arrPatient = PatientRecords.rows.slice();
  var patFound = 0;
  var secondMarker  = null;

  for(var i  = 0; i < wpts.length; i++ ) {
     var alpha = String.fromCharCode(65+i);
     

       that.marker = new google.maps.Marker({
          map: map,
          icon: 'https://maps.gstatic.com/mapfiles/markers2/marker_green'+alpha+'.png',
          position: wpts[i].start_location,//latlng Object
          title: i.toString(),
          draggable :false
        });
      
      if(i == 0) {
        waypoint_markers.push(that.marker);
        that.marker.metadata = {type: "point", id: patFound};
        var infowindow = new google.maps.InfoWindow({
                 content: "Starting location "
            });

        infowindowArray.push(infowindow);
        google.maps.event.addListener(that.marker, 'click', function() {
          infowindowArray[this.metadata.id].open(map,this);
        });
        patFound++;
        continue;
      }

      var count = 0;
      while(count < arrPatient.length) {
          if(path[i].patientId.replace(/ /g,"") == arrPatient[count][0].replace(/ /g,"")) { 
            waypoint_markers.push(that.marker);
            that.marker.metadata = {type: "point", id: patFound};
            var gender = arrPatient[count][3].substring([arrPatient[count][3].indexOf('(')],arrPatient[count][3].length);
            gender = gender.match(/F/g) ? "Female": "Male" ;
            var infowindow = new google.maps.InfoWindow({ 
                 content:"<span onclick='LinkPatient("+count+");'>"+ arrPatient[count][3]+
		         "</span><br />"+"<img src='"+CGIPath+"patientPhoto.php?urnumber="+arrPatient[count][0]+
                   "&amp;gender=' onerror='this.src="+CGIPath+"patientPhoto.php?urnumber="+
                   arrPatient[count][0]+"&amp;gender="+gender+"' style='padding:5px;border:1px solid #ccc;width:50px; "+
                   " height:50px;' /> "

            });

            infowindowArray.push(infowindow);

            google.maps.event.addListener(that.marker, 'click', function() {
               infowindowArray[this.metadata.id].open(map,this);
            });
            patFound++;
            break;
        }
        count++;
      }
   }
   count = 0;
   if(roundRobbin == 0 ){
      while(count < arrPatient.length) {
          if(path[i].patientId.replace(/ /g,"") == arrPatient[count][0].replace(/ /g,"")) { 
       var alpha = String.fromCharCode(65+i);
       that.marker = new google.maps.Marker({
          map: map,
          icon: 'https://maps.gstatic.com/mapfiles/markers2/marker_green'+alpha+'.png',
          position: wpts[i-1].end_location,//latlng Object
          title: i.toString(),
          draggable :false
        });
            waypoint_markers.push(that.marker);
            that.marker.metadata = {type: "point", id: patFound};
            var gender = arrPatient[count][3].substring([arrPatient[count][3].indexOf('(')],arrPatient[count][3].length);
            gender = gender.match(/F/g) ? "Female": "Male" ;
            var infowindow = new google.maps.InfoWindow({
                 content: "<span onclick='LinkPatient("+count+");'>"+arrPatient[count][3]
			+"</span><br />"+
                    "<img src='"+CGIPath+"patientPhoto.php?urnumber="+arrPatient[count][0]+
                   "&amp;gender=' onerror='this.src="+CGIPath+"patientPhoto.php?urnumber="+
                   arrPatient[count][0]+"&amp;gender="+gender+"' style='padding:5px;border:1px solid #ccc;width:50px; "+
                   " height:50px;' />"

            });

            infowindowArray.push(infowindow);

            google.maps.event.addListener(that.marker, 'click', function() {
               infowindowArray[this.metadata.id].open(map,this);
            });
            patFound++;
            break;
        }
        count++;
      }
   }
   
}

function clear_markers() {
  for(var i=0; i<waypoint_markers.length; i++){
    waypoint_markers[i].setMap(null);
  }
}
    
function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;

 wardcode = getQueryString("wardcode");
 startlocation = getQueryString("startlocation");
 roundRobbin = parseInt(getQueryString("roundrobbin"),10);
 userDefinedUsed = parseInt(getQueryString("userdefinedused"),10);
 userDefinedRoute = getQueryString("userdefinedroute");
 sortBy = getQueryString("sortby");

 theURL=CGIPath+"patweb93.php"+
        "?reportno=3" +
        "&wardcode="+wardcode;
 var xmlHttp = createHttpObject();
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();

 if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    h = document.getElementsByTagName("head")[0];
    s = document.createElement("script");
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
 }

 AddRows();
 SortPatients(sortBy);

 var arrayAddress = [];

 for(var i = 0; i < PatientRecords.rows.length; i++ ) {
   arrayAddress.push(PatientRecords.rows[i][24]);
  };

 startMap(arrayAddress,'map_canvas');
}

function SortPatients(value) {
 SortOrderBy=value;
 PatientRecords.rows.sort(StringSort);
}
