//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9801208.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.07.01 15.10.2015 B.G.Ackland CAR
//                      Change onkeyup to oninput for IOS bluetooth keyboard support
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
var serviceArray = new Array();
var doctorArray = new Array();
var quickListId;
//-----------------------------------------------------------------------------
// onload function to initial page startup
//-----------------------------------------------------------------------------
function LoadPage() {
  quickListId=top.getCookie("quickListID");
//  showOptions(0);
  loadQuickLists();
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { submitPrescriptions() }
  }
}

//-----------------------------------------------------------------------------
// load list of services from database request
//-----------------------------------------------------------------------------
function loadQuickLists() {
  var obj = new Object();
  var url   = "../cgi-bin/medchart.php?reportno=3";
  var quickLists = UpdateForm.quicklst;
  xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if((xmlHttp.responseText).length < 2) {
        alertify.alert("Web Serivce: loading quick list failure!");
        return;
      }
      obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
      for(var i =0; i < obj.length; i++) {
         quickLists.options[quickLists.options.length]= new Option(obj[i].name,obj[i].code); 
         if (quickListId==obj[i].code) quickLists.selectedIndex=i;
      }
      showList();
    }
  }
}
//-----------------------------------------------------------------------------
//  changeType - check if the search type has been changed
//-----------------------------------------------------------------------------
function changeType(value) {
  var searchType = document.getElementById('searchType');
  switch(searchType.selectedIndex) {
    case 0:
      ShowPatientTests(value);
      break;
    case 1:
     	ShowPatientQuickList(value);
      break;
    case 2:
      var key = document.getElementById('searchText');
      if (key.value.replace(/ /g,"").length != 0) {
	       serviceSearch(key.value,value);
      }
      break;
    default:
      break;
  }
}
//-----------------------------------------------------------------------------
// submit list of services to server
//-----------------------------------------------------------------------------
function submitServiceRequest() {
  var bool = validateMandatory(UpdateForm);
  if(bool) {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
  return bool
}
//-----------------------------------------------------------------------------
// patients list with unique test result for current year and previous
//-----------------------------------------------------------------------------
function showList(value) {
  var obj = new Object();
  el=document.getElementById('quickLists');
  var url = "../cgi-bin/medchart.php?reportno=4&quicklst=" +
            el.options[el.selectedIndex].value;
  top.setCookie("quickListID",el.options[el.selectedIndex].value,30);
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
  if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
    if((xmlHttp.responseText).length < 2) {
      ListLocation = document.getElementById("SearchResults");
      if(ListLocation) {
        ListLocation.innerHTML = "<ul class='sectionList'>"+
                                 "<li class='sectionItem' style='text-align:center'>"+
		                              	"No Items Found</li></ul>";
      }
      return;
    }
    obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
    OS="<ul class=sectionList>";
    for(var i =0; i < obj.length; i++) {
      OS += "<li class=sectionItem onclick=\"QuickListMedication("+
            "'"+obj[i].code+"');\" />"+
            "<span class=medicationName>" + obj[i].name +"</span><br>" + obj[i].dose + "</li>"
    }
    ListLocation = document.getElementById("SearchResults");
    ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
//-----------------------------------------------------------------------------
// display quick list
//-----------------------------------------------------------------------------
function ShowPatientQuickList(type) {
  var obj = new Object();

  var url   = "../cgi-bin/cliweb03.php?reportno=1&numrow=25";

  if(typeof type != 'undefined') {
    if(type != "") {
      url   = "../cgi-bin/cliweb03.php?reportno=4&numrow=25&typflter="+type.replace(/ /g,"");
    }
  }
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
	     if((xmlHttp.responseText).length < 2) {
	       ListLocation = document.getElementById("SearchResults");
	       if(ListLocation) {
	         ListLocation.innerHTML = "<ul class='sectionList'>"+
				                              	"<li class='sectionItem' style='text-align:center'>"+
                              					"No Items Found</li></ul>";
	       }
	       return;
	     }
    	 obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
	     OS="<ul class=sectionList>";
	     for (var i =0; i < obj.length; i++) {
	       OS += "<li class=sectionItem onclick=\"AddTest('"+null+"'," +
	             "'"+obj[i].type+"','" +
      	       obj[i].code+"','" +
	             obj[i].labcode+"','" +
      	       obj[i].description+"');\" />"+
	             "<span class='showResultIcon"+obj[i].type.substr(0,2)+
      	       "' style='float:left;margin-right:5px;' ></span>"+
      	       obj[i].description +
	             "<span style='font-size:10px;position: absolute;right:15px;margin-top: 17px;'>" + 
      	       obj[i].labname + "</span></li>"
	      }
     	 ListLocation = document.getElementById("SearchResults");
     	 ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
//-----------------------------------------------------------------------------
// setup the search panel
//-----------------------------------------------------------------------------
function ShowSearch() {
  OS = '<ul class=sectionList>';
  OS += "<li class=sectionItem "+
       	" style='text-align:center;background: -webkit-gradient(linear, left top, "+
       	" left bottom, color-stop(0.3, #17959F), to(#014D51));"+
       	" -webkit-border-radius:8px;' >"+
       	"<div style='-webkit-border-image: url(../html/ipad/search-border.png)"+
       	"  0 17 0 17 stretch stretch;border-width: 0px 14px;'>"+
       	"<input id='searchText' type='search' "+
       	"  class='searchInput' placeHolder='Search' "+
       	"  size='30' value='' oninput='checkType(this,serviceSearch,\"searchItems\");' /> "+
       	"</div></li>";
  OS += "</ul><ul class='sectionList' id='searchItems'></ul>";
  ListLocation = document.getElementById("SearchResults");
  ListLocation.innerHTML = OS;
}
//-----------------------------------------------------------------------------
// change panels 
//-----------------------------------------------------------------------------
function showOptions(value) {
  var serviceFilter = document.getElementById('serviceFilter');
  var code = (serviceFilter[serviceFilter.selectedIndex].value);
  switch(parseInt(value,10)) {
    case 0:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowPatientTests(code);
      break;
    case 1:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowPatientQuickList(code);
      break;
    case 2:
      ShowSearch();
      break;
    default:
      break;
  }
}
//-----------------------------------------------------------------------------
// keyword search for the search panel
//-----------------------------------------------------------------------------
function serviceSearch(value,type) {
	var obj = new Object();
	var url;
	if(typeof type != 'undefined' && type.length > 0 ) {
	  url   = "../cgi-bin/cliweb03.php?reportno=5&numrow=25&keyword="+value
		  +"&typflter="+type.replace(/ /g,"");
	}else {
	  url   = "../cgi-bin/cliweb03.php?reportno=2&numrow=25&keyword="+value;
	}
 var xmlHttp = createHttpObject();
	xmlHttp.open('GET',url,true);
	xmlHttp.send();
	xmlHttp.onreadystatechange = function() {
	  if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
	    if((xmlHttp.responseText).length < 2) {
	      ListLocation = document.getElementById("searchItems");
	      if (ListLocation) {
	        ListLocation.innerHTML = "<ul class='sectionList'>"+
                             				 "<li class='sectionItem' style='text-align:center'>"+
                             				 "No Items Found</li></ul>";
	      }
	     return;
	    }
	    obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
	    var OS2=" ";
	    for(var i =0; i < obj.length; i++) {
	      OS2 += "<li class=sectionItem onclick=\"AddTest('"+null+"'," +
		            "'"+obj[i].type+"','"+ obj[i].code+"','" + obj[i].labcode+"','" +
          		  obj[i].description+"');\" />"+
		             "<span class='showResultIcon"+obj[i].type.substr(0,2)+
          		   "' style='float:left;margin-right:5px;' ></span>"+
          		  obj[i].description +
          		  "<span style='font-size:10px;position: absolute;right:15px;margin-top: 17px;'>" + 
          		  obj[i].labname + "</span></li>"
	     }
	     ListLocation = document.getElementById("searchItems");
	     ListLocation.innerHTML = OS2;
	   }
	 }
}
//-----------------------------------------------------------------------------
// doctor keyword search for the search panel
//-----------------------------------------------------------------------------
function doctorSearch(value) {
 	var obj = new Object();
 	var url   = "../cgi-bin/AutoSuggest.php?reportno=1&rowcount=10&keywords="+ value;
  var xmlHttp = createHttpObject();
	 xmlHttp.open('GET',url,true);
	 xmlHttp.send();
	 xmlHttp.onreadystatechange = function() {
	   if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
	     if ((xmlHttp.responseText).length < 2) {
	       ListLocation = document.getElementById("searchDoctor");
	       if (ListLocation) {
		        ListLocation.innerHTML = "<ul class='sectionList'>"+
					         "<li class='sectionItem' style='text-align:center'>"+
        					 "No Matching Doctors Found</li></ul>";
	       }
	       return;
	     }
	     obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
	     var OS2=" ";
	     for(var i =0; i < obj.length; i++) {
	       OS2 += "<li class=sectionItem onclick=\"AddDoctor("+
		             "'"+obj[i].code+"','"+obj[i].value+"');\" />"+
       		      obj[i].value +
		              "<br /><span class=subText>"+obj[i].subtext+
       		      "</span></li>";
	     }
	     ListLocation = document.getElementById("searchDoctor");
	     ListLocation.innerHTML = OS2;
	   }
	 }
}
//-----------------------------------------------------------------------------
	// add the doctor to the array list
//-----------------------------------------------------------------------------
function AddDoctor(drCode,drName){
  var doctors = document.getElementById('doctors');
  var found = false;
  for (var i = 0; i < doctorArray.length; i++) {
    if (drCode.replace(/ /g,"") == doctorArray[i].replace(/ /g,"")) {
      found = true;
      alertify.alert("Copy to "+drName.replace(/\s$/ig,"")+" already exist");
      break;
    }
  }
  if (!found) {
    doctorArray.push(drCode);
    doctors.innerHTML += "<div onclick='removeItem(this,\""+
                         drCode+"\",\""+drName+"\",doctorArray,\"doctors\");'"+
                 			     " style='padding-bottom:15px;'>"+ drName +
                 			     "<input type=\"hidden\" name=\"copiesto\" "+
                 			     " value=\""+drCode+"^"+drName+"\" />"+
                  			    "</div>";
  }
}
//-----------------------------------------------------------------------------
// submit to web service the keyword search
//-----------------------------------------------------------------------------
function checkType(stringName,searchKeyword,div,e) {
  var delayTime = 150; //250ms
  if(!e) { e = event; }
  var filter = document.getElementById('serviceFilter');
  var value = "";
  if(typeof filter != 'undefined') {
     value = filter[filter.selectedIndex].value;
  }
  clearTimeout(window.timeoutId);
  if(stringName.value.length > 2) {
    if (e.keyCode == 8 || e.keyCode ==46) {
      window.timeoutId = setTimeout( function() {
     	if(value.length > 0) {
	       searchKeyword(stringName.value,value);
     	}else {
     	  searchKeyword(stringName.value);
     	}
      },delayTime);
    } else if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <=56) ||
	     (e.keyCode >= 112 && e.keyCode <= 123)) {
      //ignore
      return;
    }else {
      window.timeoutId = setTimeout( function() {
	if(value.length > 0){
	  searchKeyword(stringName.value,value);
	}else {
	  searchKeyword(stringName.value);
	}
      },delayTime);
    }
  } else if(stringName.value.length == 0) {
      ListLocation = document.getElementById(div);
      ListLocation.innerHTML = "";
  }
}
//-----------------------------------------------------------------------------
// add the service to the array list
//-----------------------------------------------------------------------------
function AddTest(url,resultType,resultCode,labCode,resultDesc) {
  var services = document.getElementById('services');
  var found = false;
  for (var i = 0; i < serviceArray.length; i++) {
    if (resultCode.replace(/ /g,"") == serviceArray[i].replace(/ /g,"")) {
      found = true;
      alertify.alert("Service request has already been made for ("+resultType.replace(/ /g,"")+
	           " "+resultDesc+")");
      break;
    }
  }
  if (!found) {
    serviceArray.push(resultCode);
    services.innerHTML += "<div onclick='removeItem(this,\""+
           resultCode+"\",\""+resultDesc+"\",serviceArray,\"services\");'"+
     	     " style='padding-bottom:15px;'>"+
	          "<span class='showResultIcon"+resultType.substr(0,2)+
     	     "' style='float:left;margin-right:5px;' ></span>"+
	          resultType+" - "+resultDesc+
     	     "<input type=\"hidden\" name=\"servicec\" "+
	          " value=\""+resultType.substr(0,5)+resultCode.substr(0,10)+
           (resultDesc+'                                        ').substr(0,40)+labCode+"\" />"+
           "</div>";
  }
}
//-----------------------------------------------------------------------------
// remove the services from the array list
//-----------------------------------------------------------------------------
function removeItem(obj,itemName,itemDesc,collectionArray,div) {
  var collection = document.getElementById(div);
  for (var i = 0; i < collectionArray.length; i++) {
    if (itemName == collectionArray[i]) {
       confirmMsg="Are you sure you want to remove "+itemDesc;
       alertify.confirm(confirmMsg, function (e) {    
         if (e) {
           collectionArray.splice(i,1);
           collection.removeChild(obj);
         }
       });
       break;
    }
  }
}
function displayDoctorSearchPanel() {
  var doctorPanel = document.getElementById('doctorList');
  var servicePanel = document.getElementById('serviceList');
  var searchText = document.getElementById('searchText');
  doctorPanel.style.display = '';
  servicePanel.style.display='none';
  searchText.focus();
}
function displayServiceSearchPanel() {
  var doctorPanel = document.getElementById('doctorList');
  var servicePanel = document.getElementById('serviceList');
  doctorPanel.style.display = 'none';
  servicePanel.style.display='';
}
