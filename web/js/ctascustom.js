/*  01 : CTAS : 05-MAY-2015 : Regional Customisations
	02 : DXC : 23-06-2017 : Task 0840598
	* Change info in getInfoHelp
	03 : DXC : 11-JUL-2017 : Task 0837701
	* Created new function to change referral source to GP
	04 : DXC : 15-NOV-17 : Task 0847796
	* Change size of pop up window in addNoteCustom function
	05 : TAS : 25 Jun 2019 Add Validateprecom001 function														 
	06 : TAS : 25 Nov 20119 Edited Validateprecom1 function												   
*/
// Check for more than 6 lines entered in Triage Notes 05:TAS 
// 06:TAS Blur handler and form update added to ensure char sanitation 																	   
function Validateprecom001() {
	onblurHandler();
	var formatedtext=formateText(UpdateForm.prcom001,'50')
 	if ((formatedtext.split(/[\r\n]/).length>6) ||
	   (UpdateForm.prcom001.value.length > 300)) {
  	alert ("Triage Note - Max 6 Lines."
	      +"\nPlease remove extra lines to continue.");
	document.UpdateForm.prcom001.focus();
	return;
	}
	UpdateForm.prcom001.value=UpdateForm.prcom001.value.replace("\\","");
	}
// sort select by value as integer
function sortSelect(selElem) {
    var tmpAry = new Array();
    for (var i=0;i<selElem.options.length;i++) {
        tmpAry[i] = new Array();	
        tmpAry[i][0] = selElem.options[i].text;
        tmpAry[i][1] = selElem.options[i].value;			
    }

	tmpAry.sort(function(a,b) {
		return parseInt(a[0]) - parseInt(b[0]);
	});
	
    while (selElem.options.length > 0) {
        selElem.options[0] = null;
    }
    for (var i=0;i<tmpAry.length;i++) {
        var op = new Option(tmpAry[i][0], tmpAry[i][1]);
        selElem.options[i] = op;
    }
    return;
}

// get inputs by class name for older browsers and compatibility view
function getInputsByClassName(node, classname) {
	var a = [];
	var elems = document.getElementsByTagName("INPUT");
	for (var i=0; i<elems.length; i++) {
		if (elems[i].className.indexOf(classname) > -1) {
			a.push(elems[i]);
		}
	}
	return a;
}

// validate phone number fields
function CheckPhoneFields() {
	var rgxstr;
	rgxstr = /^(\d){0,15}$/;
	var patt = new RegExp(rgxstr);
	
	var isvalid = true;
	//var phoneNos = document.getElementsByClassName("Phone");
	var phoneNos = getInputsByClassName(document, "Phone");
	//alert(navigator.appName + " : " + navigator.appVersion);
	
	var phonedesc = "";
	var i = 0;
	while (isvalid && i < phoneNos.length) {
		phoneNos[i].value = phoneNos[i].value.replace(/ /g,'');
		isvalid = patt.test(phoneNos[i].value);
		if (!isvalid) { phonedesc = phoneNos[i].title; }
		i++;
	}
	if (!isvalid) {
		alert("Invalid telephone or fax number: " + phonedesc);
	}
	return isvalid;
}

// check radio button field
function CheckField(fieldname) {
	document.getElementById(fieldname).checked = true;
}

// set codelist selected value to the value entered in codefield text input
function getDesc(codefield, codelist) {
	var val = trim(codefield.value);
	codelist.selectedIndex = 0;
	var found = false;
	var i = 0;
	while (i < codelist.length && !found) {
		if (val == trim(trim(codelist.options[i].value).substr(0,3))) {
			codelist.selectedIndex = i;
			found = true;
		}
		i++;
	}
	if (codelist.selectedIndex == 0) { codefield.value = ""; }
}

// set codefield text input value to the value of the selected option in codelist
function getCode(codelist, codefield) {
	codefield.value = trim(codelist.value.substr(0,3));
}

// 01 : CTAS : return number of chars used in a fixed length text field
function NumCharsUsed(textfield, maxLength, displayelem) {
	var numChars = textfield.value.length;
	if (numChars > maxLength) {
		textfield.value = textfield.value.substring(0, maxLength-1);
		numChars = maxLength;
	}
	displayelem.innerHTML = "<i>("+ numChars.toString() + " of " 
		+ maxLength.toString() + " chars)</i>";
}

// if referral source is GP from PMI (cat code S indicator 7 == G)
//	set referring HCP to patient's GP
function GetPatientGP(refsource, refhcp, hcp) {
	
	// set referral source to GP
	refsource.selectedIndex = 0;
	var i = 0;
	var found = false;
	while (i < refsource.length & !found) {
		if (refsource.options[i].value.substr(9,1) == "G") {
			refsource.selectedIndex = i;
			found = true;
		}
		i++;
	}

	// set referring HCP to patient's GP
	refhcp.value = hcp.replace(/ /g,"");
}
//  03 : DXC : set referral source to GP (cat code S indicator 7 == G)
function SetRefSource(refsource) {
	
	// set referral source to GP
	refsource.selectedIndex = 0;
	var i = 0;
	var found = false;
	while (i < refsource.length & !found) {
		if (refsource.options[i].value.substr(9,1) == "G") {
			refsource.selectedIndex = i;
			found = true;
		}
		i++;
	}

}
// get value from query string by name
function getParameterByName(name) {
    name = name.replace(/[\[]/, "\\[").replace(/[\]]/, "\\]");
    var regex = new RegExp("[\\?&]" + name + "=([^&#]*)"),
        results = regex.exec(location.search);
    return results === null ? "" : decodeURIComponent(results[1].replace(/\+/g, " "));
}

// get cookie value by name
function getCookie(cname) {
    var name = cname + "=";
    var ca = document.cookie.split(';');
    for(var i=0; i<ca.length; i++) {
        var c = ca[i];
        while (c.charAt(0)==' ') c = c.substring(1);
        if (c.indexOf(name) == 0) 
			return decodeURIComponent(c.substring(name.length,c.length).replace(/\+/g, " "));
    }
    return "";
}

// display custom template to add note
function addNoteCustom(templateName) {
  // Initialise to a non-existant template
  PatientLinks.reportno.value="99";
  PatientLinks.template.value="99";
  PatientLinks.action="ctasweb99.pbl";	
  switch(templateName) 
  {
    case "emrweb0201980":
      PatientLinks.reportno.value="01";
      PatientLinks.template.value="980";
      PatientLinks.action="emrweb02.pbl";
      break;
    case "emrweb0201981":
      PatientLinks.reportno.value="01";
      PatientLinks.template.value="981";
      PatientLinks.action="emrweb02.pbl";
      break;
  }
// 04 : DXC : change size of pop up
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(PatientLinks,0,Left,900,450);	
}


/* get indicator (num) value from category table list field (catlist)
	offsets in category value string:
	0-2   : code
	3-13  : indicators 1-11
	14-17 : HDP default
	18-21 : Associate No
	22-27 : HCP equivalent
	28-37 : indicators 12-21		*/
function getIndicatorValue(catlist, num) {
	if (num < 12)
		offset = num+2;
	else 
		offset = num + 16;
	
	i = catlist.selectedIndex;
	ind = catlist.options[i].value.substr(offset,1);
	return ind;
}
// 01 : CTAS : getInfoHelp
// 02 : DXC : Task 0840598
function getInfoHelp(question){
	// for type of referral (cat code RI)
	var catCodeRIMsg = "01. Advice - Referral for provision of advice only. Does not result in a written plan of care.\n" +
			 "\n02. Allied Health - Referral for allied health services, including dietetics, occupational therapy, physiotherapy, podiatry, social work, speech therapy. \n" +
			 "\n03. Assessment - Referral for an assessment - does not include referral for FSA. \n" +
			 "\n04. Cmty-referred test - Referral for community-referred investigation/test. \n" +
			 "\n05. Cross Consulting - Referral from one service to another requesting input or an opinion. \n" +
			 "\n06. FSA - Referral for a first specialist assessment by a medical/surgical specialty. Patient to be seen by a medical officer at registrar level or above, or by a nurse practitioner." + 
			 " Includes \"virtual\" referrals that result in a written plan of care. Include virtual/non-contact assessment.\n" +
			 "\n07. FSA Presenting - First known referral with a presenting problem for a patient. \n" +
			 "\n08. Hosp-referred test - Referral for hospital-referred investigation/test." +
			 "\nIncludes diagnositic tests for people who are under treatment by a DHB, either as an inpatient or an outpatient. \n" +
			 "\n09. Medication review - Referral for medication review. \n" +
			 "\n10. Pre-Assessment - Referral for an assessment prior to the provision of a procedure - eg before a WL or booked procedure. \n" + 
			 "\n11. Procedure - Referral for a diagnostic or therapeutic procedure only. \n" +
			 "\n12. Re-referral - New referral for a patient currently or recently under care. \n" +
			 "\n13. Second opinion - Referral for a second opinion.\n" +
			 "\n14. Special authority ap - Referral for the purpose of completing a specialty authority application. \n" +
			 "\n15. Treatment - Referral for treatment only. \n" +
			 "\n16. Ward follow-up - Referral for a ward follow-up following discharge from an inpatient admission.";
	
	// for wound class (cat code tp)
	var catCodetpMsg = 
		"01. Clean - An uninfected operative wound in which no inflammation is encountered and the respiratory, alimentary, genital or uninfected urinary tracts are not entered." +
		 "In addition, clean wounds are primarily closed and, if necessary, drained with closed drainage." +
		 "Operative incisional wounds that follow non-penetrating (blunt) trauma should be included in this category if they meet the criteria. \n" +
		 "\n02. Clean-contaminated - An operative wound in which the respiratory, alimentary, genital or urinary tracts are entered under controlled conditions " +
		 "and without unusual contamination. Specifically, operations involving the biliary tract, appendix, vagina and oropharynx are included in this category" +
		 ", provided no evidence of infection or major break in technique is encountered.\n" +
		 "\n03. Contaminated - Open, fresh, accidental wounds. In addition, operations with major breaks in sterile" +
		 "\n technique (eg open cardiac massage) or gross spillage from the gastrointestinal tract and incisions in which acute, non-purulent" +
		 "\n inflammation is encountered are included in this category. \n" +
		 "\n04. Dirty/Infected - Old traumatic wounds with retained devitalised tissue and those that involve existing clinical infection or perforated viscera. " +
		 "This definition suggests that the organisms causing post-operative infection were present in the operative field before the operation.";		
		 /*
		"01. Clean - An uninfected operative wound in which no inflammation is encountered and the" +
		 "\n respiratory, alimentary, genital or uninfected urinary tracts are not entered. \n" +
		 "\n02. Clean-contaminated - Operative wounds in which the respiratory, alimentary, genital or urinary tracts" +
		 "\n are entered under controlled conditions and without unusual contamination. \n" +
		 "\n03. Contaminated - Open, fresh, accidental wounds. In addition, operations with major breaks in sterile" +
		 "\n technique or gross spillage from the gastrointestinal tract and incisions in which acute, non-purulent" +
		 "\n inflammation are encountered. \n" +
		 "\n04. Dirty/Infected - Includes old traumatic wounds with retained devitalized and those that involve existing" +
		 "\n clinical infection or perforated viscera. This definition suggests that the organisms causing post-operative" +
		 "\n infection were present in the operative field before the operation.";*/
	
	// for unplanned return (cat code ot)
	var catCodeotMsg = 
	"UNPLANNED RETURN\n" + 
    "Unplanned Return is the return of a patient to the operating theatre for a further procedure, "+
	"due to an unforeseen complication occurring post operatively (for examples see below). \n" +
	"An unplanned return can occur any time after the completion of surgery, but within the same admission. " +
	"Therefore if a patient has been discharged from the hospital and then returns with a complication, " +
	"then this is classed as a new admission and new theatre event, NOT an unplanned return.\n\n" +
	"Examples of situations that ARE unplanned return: \n" +
	" - Haemorrhage \n" +
	" - Bowel obstruction post abdominal surgery  \n" +
	" - First washout of an infected surgical wound  \n" +
	" - Wound dehiscence  \n" +
	" - Severe uncontrollable pain  \n" +
	" - Neurological changes (ie post spinal fixation)  \n" +
	" - Perforated gut during an endoscopy, needing an oversew in theatre \n" +
	" - Relocation of a dislocated THR (occurring while patient is still in hospital following joint surgery) \n\n" +
    "Examples of situations that are NOT unplanned return: \n" +
	" - Rebook for a washout of an infected surgical wound \n" +
	" - Relocation of a dislocated THR (occurring post-discharge) \n" +
	" - Haemorrhage (occurring post-discharge)";

	switch(question){
		case "1":{
			alert(catCodeRIMsg);
		break;
		}
		case "2":{
			alert(catCodetpMsg);
		break;
		}
		case "3":{
			alert(catCodeotMsg);
		break;
		}
	}
}
// end of change
