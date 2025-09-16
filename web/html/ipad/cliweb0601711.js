//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0601711.js
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
/*******************************************************************************
 * populationMedicationOnLoad - get the medication of patients visit
 *******************************************************************************/
function populateMedicationOnLoad() {
  var url = "../cgi-bin/cliweb06.php?reportno=4&admissno="+
            admissno.value.replace(/ /g,"+");
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET",url,true);
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == "4" && xmlHttp.status == "200") {
      if(xmlHttp.responseText.replace(/ /g,"").length != 0) {
        var arr = eval("("+xmlHttp.responseText+")");
        loadMedication(arr);
      }
    }
  }
  xmlHttp.send();
}
/******************************************************************************
 * loadMedication - populates list of medication to screen
 *                  --this function relies heavily on cliweb0601711 template
 *             @param: arr - the array JSON object returned from the server
 *****************************************************************************/
function loadMedication(arr) {
  var dynamic_med_panel = document.getElementById("dynamic_med_panel");
  var frequency = document.getElementById("frequency");
  var doseform = document.getElementById("doseform");
  var freq_description = "";
  var newMedicationDetails = "";
  var doseform_description = "";
  for (var i = 0; i < arr.length; i++) {
    window.itemno += parseInt(arr[i]['cntr'],10);
    newMedicationDetails = document.createElement("li");
    newMedicationDetails.id = "med"+itemno;
    if(typeof frequency != 'undefined' ) {
      for(var j = 0; j < frequency.length ; j++) {
        if (arr[i]["frequ"].replace(/ /g,"") == frequency[j].value.substring(0,3).replace(/ /g,"")) {
          freq_description = frequency[j].innerHTML;
      }
    }
  }
  if (typeof dosform != 'undefined' ) {
    for(var j = 0; j < doseform.length ; j++) {
      if (arr[i]["dosef"].replace(/ /g,"") == doseform[j].value.substring(0,3).replace(/ /g,"")) {
        doseform_description = doseform[j].innerHTML;
      }
    }
  }
  var  medicationObject = new Object();
  for (var j = 0; j < window.idArray.length; j++) {
    medicationObject[window.idArray[j]] = arr[i][window.idArray[j]];
  }
  medicationObject.id = "med"+window.itemno;
  window.medicationCollection.push(medicationObject);
  newMedicationDetails.className = "sectionItem";
  newMedicationDetails.innerHTML ="<span class='titleSection' style='font-weight:normal;'>"+
                                  "<img class='stop' id='img"+window.itemno+
                                  "' ontouchstart=toggleImg(this,img2"+window.itemno+")"+
                                  "  src='../html/ipad/Delete.jpg' />"+
                                  arr[i]['drugs']+" ("+arr[i]['dosea']+") "+
                                  doseform_description+
                                  "<img id='img2"+window.itemno+
                                  "' ontouchstart=removeItem(this,'med"+window.itemno+"'); "+
                                  "class='hideslide' src='../html/ipad/DeleteIcon.jpg' />"+
                                  "<p style='color:#324F85;padding:0px;padding-left:34px;"+
                                  "   margin:0px;margin-top:-15px;'>"+
                                  "Dose: <span style='font-weight:bold;'>"+arr[i]['dosea']+"</span>"+
                                  " - "+arr[i]['instr']+" - "+
                                  "<span style='font-weight:bold;'>"+
                                  freq_description+
                                  "</span></p></span>";
    newMedicationDetails.ontouchstart = function() {
      if (event.stopPropagation) {
        event.stopPropagation();
      }else {
        event.cancelBubble = true;
      }
      updateMedicationDetails();
    }
    dynamic_med_panel.appendChild(newMedicationDetails);
  }
  window.itemno++;
}
