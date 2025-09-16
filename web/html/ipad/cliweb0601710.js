//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0601710.js
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
/*****************************************************************************
* global variables
*****************************************************************************/
window.itemno = 100; //keep count of medications
window.medicationCollection = new Array(); //collection of medication objects
window.idArray = ["mcode","drugs","dosef","dosea","frequ","durat","quant","instr"];
window.timeoutId = 0; //function id 
/******************************************************************************
* prepare - creates the hidden fields to submit values to the server
******************************************************************************/
function prepare(action) {
  var form = document.getElementById("NewNote");
  var reOrderCount = 101;
  for (var i = 0; i < window.medicationCollection.length; i++) {
    for (var j = 0; j < window.idArray.length; j++) {
      var hiddenField = document.createElement("input");
      hiddenField.id = hiddenField.name = window.idArray[j] + reOrderCount;
      hiddenField.value = window.medicationCollection[i][window.idArray[j]];
      hiddenField.type = "hidden";
      form.appendChild(hiddenField);
    }
    reOrderCount++;
  }
  addNote(action);
}
/******************************************************************************
 * popupMedicationPanel - displays the medication panel
 *****************************************************************************/
function popupMedicationPanel(bool,clearBool) {
  var drugCode = document.getElementById("drugcode");
  var drugName = document.getElementById("drugname");
  var doseForm = document.getElementById("doseform");
  var dosage = document.getElementById("dosage");
  var frequency = document.getElementById("frequency");
  var duration = document.getElementById("duration");
  var quantity = document.getElementById("quantity");
  var instructions = document.getElementById("instructions");
  var values =  [drugCode,drugName,doseForm,dosage,frequency,duration,quantity,instructions];
  var button = document.getElementById("dialog-done");
  if (clearBool) {
    for (var i = 0; i < values.length; i++) {
      if(values[i] != null && typeof values[i] != 'undefined') {
        if (values[i].nodeName.toUpperCase() != "select".toUpperCase()) {
          values[i].value = "";
        } else {
          values[i].selectedIndex = 0;
        }
      }
    }
    button.value = "Add";
    button.onclick = addMedication;
  }
}
/******************************************************************************
 * hide - hides the element context
 *****************************************************************************/
function hide(el) {
   el.style.display = "none";
}
/******************************************************************************
 * addMedication - dynamically adds medication to screen and stores a list 
 *                 of medication objects to be sent to the server
 *****************************************************************************/
function addMedication() {
  var drugCode = document.getElementById("drugcode");
  var drugName = document.getElementById("drugname");
  var dosage = document.getElementById("dosage");
  var frequency = document.getElementById("frequency");
  var duration="";
  var quantity="";
  var doseForm="";
  var instructions = document.getElementById("instructions");
  var values =  [drugCode,drugName,doseForm,dosage,frequency,duration,quantity,instructions];
  var dynamic_med_panel = document.getElementById("dynamic_med_panel");
  var medicationObject = new Object();
  for (var i = 0; i < window.idArray.length; i++) {
    if (values[i].tagName == "SELECT") {
      medicationObject[window.idArray[i]] = values[i].value.substring(0,3).replace(/ /g,"");
    } else {
      medicationObject[window.idArray[i]] = values[i].value;
    }
  }
  medicationObject.id = "med"+window.itemno;
  window.medicationCollection.push(medicationObject);
  var newMedicationDetails = document.createElement("li");
  newMedicationDetails.className = "sectionItem";
  newMedicationDetails.id = "med"+itemno;
  newMedicationDetails.innerHTML ="<span class='titleSection' style='font-weight:normal;'>"+
                                  "<img class='stop' id='img"+itemno+
                                  "' ontouchstart=toggleImg(this,img2"+itemno+")"+
                                  "  src='../html/ipad/Delete.jpg'/><span>"
                                  +drugName.value+ /*" ("+dosage.value+") "
                                  +doseForm.options[doseForm.selectedIndex].text+*/
                                  "<img id='img2"+itemno+"' ontouchstart=removeItem(this,'med"+itemno+"'); "+
                                  "class='hideslide' src='../html/ipad/DeleteIcon.jpg' />"+
                                  "<p style='color:#324F85;padding:0px;padding-left:34px;"+
                                  "   margin:0px;margin-top:-15px;'>"+
                                  "Dose: <span style='font-weight:bold;'>"+dosage.value+"</span>"+
                                  " - "+
                                  "<span style='font-weight:bold;'>"+
                                  frequency.options[frequency.selectedIndex].text+
                                  "</span>"+
                                  "<span style='font-weight:bold;'>"+
                                  " - "+instructions.value+
                                  "</span>"+
                                  "</p></span></span>";
  dynamic_med_panel.appendChild(newMedicationDetails);
  newMedicationDetails.ontouchstart = function() {
    if (event.stopPropagation) { //stop event from bubbling
      event.stopPropagation();
    } else {
      event.cancelBubble = true;
    }
    updateMedicationDetails();
  }
  window.itemno++; //keep count of medication objects
  popupMedicationPanel(false,true);
}
/******************************************************************************
 * updateItem - change the medication object
 *****************************************************************************/
function updateItem(item) {
  var dynamic_med_panel = document.getElementById("dynamic_med_panel");
  var sectionItem = document.getElementById(item);
  var button = document.getElementById("dialog-done");
  for (var i = 0 ; i < window.medicationCollection.length; i++) {
    if (window.medicationCollection[i].id == item ) {
      dynamic_med_panel.removeChild(sectionItem);
      window.medicationCollection.splice(i,1);
    }
  }
  addMedication();
  button.value = "Add";
  button.onclick = addMedication;
  popupMedicationPanel(false,true);
  if (event.stopPropagation) { //stop event from bubbling
    event.stopPropagation();
  } else {
    event.cancelBubble = true;
  }
}
/******************************************************************************
 * removeItem - remove medication from collection and display panel
 *****************************************************************************/
function removeItem(el,item) {
 var dynamic_med_panel = document.getElementById("dynamic_med_panel");
 var sectionItem = document.getElementById(item);
 for (var i = 0 ; i < window.medicationCollection.length; i++) {
   if (window.medicationCollection[i].id == item ) {
     confirmMsg="CLick Ok to remove "+window.medicationCollection[i].drugs+"?";
     alertify.confirm(confirmMsg, function (e) {    
       if (e) { 
         dynamic_med_panel.removeChild(sectionItem);
         window.medicationCollection.splice(i,1);
       }
     });
   }
 }
 if (event.stopPropagation) { //stop event from bubbling
    event.stopPropagation();
  } else {
    event.cancelBubble = true;
  }
}
/******************************************************************************
 * updateMedicationDetails - update the medication object
 *****************************************************************************/
function updateMedicationDetails() {
  var e = e || window.event;
  var el = e.target || e.srcElement;
  var medicationObject = null;
  var str = "";
  var drugCode = document.getElementById("drugcode");
  var drugName = document.getElementById("drugname");
  var doseForm = document.getElementById("doseform");
  var dosage = document.getElementById("dosage");
  var frequency = document.getElementById("frequency");
  var duration = document.getElementById("duration");
  var quantity = document.getElementById("quantity");
  var instructions = document.getElementById("instructions");
  var values =  [drugCode,drugName,doseForm,dosage,frequency,duration,quantity,instructions];
  var button = document.getElementById("dialog-done");
  while (el.tagName != "LI") {
     el = el.parentNode;
  }
  for (var i = 0; i < window.medicationCollection.length; i++) {
    if (window.medicationCollection[i].id == el.id ) {
      medicationObject = window.medicationCollection[i];
    }
  }
  if (medicationObject != null) {
    for (var i = 0; i < window.idArray.length; i++) {
      if (values[i].tagName == "SELECT" ){ //find select item and set the appropriate value
        for (var j = 0; j < values[i].length; j++) {
          if (values[i][j].value.substring(0,3).replace(/ /g,"") == medicationObject[window.idArray[i]]) { 
            values[i].selectedIndex = j;
          }
        }
      } else {
        values[i].value = medicationObject[window.idArray[i]];
      }
    }
  }
  button.value = "Update";
  button.onclick = function() {
    updateItem(el.id);
  }
  popupMedicationPanel(true,false);
  if (event.stopPropagation) {
      event.stopPropagation();
  } else {
      event.cancelBubble = true;
  }
}
/******************************************************************************
 * toggleImg - set the image to show or hide
 *****************************************************************************/
function toggleImg(el,el2) {
 if (el.value == 1) {
     el.className = "stop";
     el2.className = "hideslide"
     el.value = 0;
 }else {
     el.className = "delete";
     el2.className = "showslide"
     el.value = 1;
 }

 if (event.stopPropagation) {
    event.stopPropagation();
 } else {
    event.cancelBubble = true;
 }
}

//-----------------------------------------------------------------------------
// submit to web service the keyword search
//-----------------------------------------------------------------------------
function checkType(stringName,searchKeyword,div,e) {
  var delayTime = 150; //250ms
  if(!e) {
    e = event;
  }
  clearTimeout(window.timeoutId);
  if(stringName.value.length > 2) {
    if (e.keyCode == 8 || e.keyCode ==46) {
      window.timeoutId = setTimeout( function() {
          searchKeyword(stringName.value);
      },delayTime);
    } else if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <=56) ||
             (e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    } else {
      window.timeoutId = setTimeout( function() {
          searchKeyword(stringName.value);
      },delayTime);
    }
  } else if(stringName.value.length == 0) {
      ListLocation = document.getElementById(div);
      ListLocation.innerHTML = "";
  }
}
//-----------------------------------------------------------------------------
// doctor keyword search for the search panel
//-----------------------------------------------------------------------------
function drugSearch(value) {
  var obj = new Object();
  var url   = "../cgi-bin/cliweb06.php?reportno=1&search="+value;
  var urnumber = SelectNote.urnumber.value;
  var url   = "../cgi-bin/ipharmacy.php?reportno=3&urnumber="+urnumber+"&keywords="+value;
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if((xmlHttp.responseText).length < 2) {
        ListLocation = document.getElementById("searchResult");
        if(ListLocation) {
          ListLocation.innerHTML = "<ul class='sectionList'>"+
                                   "<li class='sectionItem' style='text-align:center'>"+
                                   "No Matching Medication Found</li></ul>";
        }
        return;
      }
      obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
      var OS2=" ";
      for(var i =0; i < obj.length; i++) {
        OS2 += "<li class=sectionItem onclick=\"AddSearchResult("
               +"'"+obj[i].code+"','"+obj[i].name+"');\" />"+
               "<span>" + /* ("+obj[i].code+") "+ */
               obj[i].name+ "</span></li>";
      }
      ListLocation = document.getElementById("searchResult");
      ListLocation.innerHTML = OS2;
    }
  }
}
//-----------------------------------------------------------------------------
// add the doctor to the array list
//-----------------------------------------------------------------------------
function AddSearchResult(code,name){
  var drugname = document.getElementById('drugname');
  var drugcode = document.getElementById('drugcode');
  var doseform = document.getElementById('doseform');
  drugname.value = name;
  drugcode.value = code;
  ListLocation = document.getElementById("searchResult");
  ListLocation.innerHTML = "";
  if(typeof doseform != 'undefined') {
    doseform.focus();
  }
}
function displayLookup() {
 var drugPanel = document.getElementById('drugPanel');
 var lookupPanel = document.getElementById('lookupPanel');
 drugPanel.style.display = "none";
 lookupPanel.style.display = "";
}
function displayDrugPanel() {
 popupMedicationPanel(true,true);
 var drugPanel = document.getElementById('drugPanel');
 var searchText = document.getElementById('searchText');
 var lookupPanel = document.getElementById('lookupPanel');
 drugPanel.style.display = "";
 lookupPanel.style.display = "none";
 searchText.focus();
}
