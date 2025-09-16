/*  01 : CTAS : 28-JUL-2015 : Regional Customisations
	* implements logic for custom ED tracking screen (emrweb0201900.html)
	* Notes:  
		* form is not submitted - each field is updated in the database 
			on field onchange event by calling RemoteEmrUpdate 	
		* differs to ctas_emrtracking_spr.js in that field values are updated
			when onchange event fires instead of as a batch when the Update
			button is clicked
*/

// set field visibility, read/write status
var defFocus;	// field to receive default focus after formatting
function setAccess ()
{
	tindex = 0;
	
	// Initialise the Reason Index for restore
	UpdateForm.u008.value=UpdateForm.reasonDD.selectedIndex;
	
	// make all fields read-only if ED event has been discharged complete
	if (HiddenFields.DischargeComplete.value == "3") {
		setField ("Off",UpdateForm.emvis040,-1);
		alert("Patient is Discharged please use Supervisor screen.");
		DisableCliScr(UpdateForm);
		return;
	}
	
	// Specialty Paged 1: 
	// allow selection only if no specialty already entered
	if  ((!isWhitespace(UpdateForm.emvis169.value))
		|| ((!isWhitespace(UpdateForm.emvis077.value)) 
			&& (!isWhitespace(UpdateForm.emvis087.value)))) {
		UpdateForm.specialty.style.visibility = "hidden";
		setField ("Off",UpdateForm.specialty,-1);
	} else {
		UpdateForm.specialty.style.visibility = "visible";
		setField ("On",UpdateForm.specialty,++tindex);
	}
	
	// make specialty fields read-only if populated
	if   ((isWhitespace(UpdateForm.emvis169.value))
		|| ((!isWhitespace(UpdateForm.emvis077.value)) 
			&& (!isWhitespace(UpdateForm.emvis087.value))))
	{
		setField ("Off",UpdateForm.emvis077,-1);
		setField ("Off",UpdateForm.emvis087,-1);
		setImage ("Off",UpdateForm.image02,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis077,++tindex);
		setField ("On",UpdateForm.emvis087,++tindex);
		setImage ("On",UpdateForm.image02,-1);
	}
	
	// Set Specialty Paged 2:
	// allow selection only if no specialty already entered
	if  ((!isWhitespace(UpdateForm.emvis170.value))
		|| ( isWhitespace(UpdateForm.emvis169.value))
		|| ((!isWhitespace(UpdateForm.emvis078.value)) 
			&& (!isWhitespace(UpdateForm.emvis088.value))))  {
		UpdateForm.specialty2.style.visibility = "hidden";
		setField ("Off",UpdateForm.specialty2,-1);
	}
	else
	{
		UpdateForm.specialty2.style.visibility = "visible";
		setField ("On",UpdateForm.specialty2,++tindex);
	}
	
	// make specialty fields read-only if populated
	if  ((isWhitespace(UpdateForm.emvis170.value))
	|| ((!isWhitespace(UpdateForm.emvis078.value)) 
		&& (!isWhitespace(UpdateForm.emvis088.value))))
	{
		setField ("Off",UpdateForm.emvis078,-1);
		setField ("Off",UpdateForm.emvis088,-1);
		setImage ("Off",UpdateForm.image04,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis078,++tindex);
		setField ("On",UpdateForm.emvis088,++tindex);
		setImage ("On",UpdateForm.image04,-1);		
	}
	
	// Set Specialty Paged 3
	// allow selection only if no specialty already entered
	if  ((!isWhitespace(UpdateForm.emvis171.value))
		|| ( isWhitespace(UpdateForm.emvis170.value))
		|| ((!isWhitespace(UpdateForm.emvis079.value)) 
			&& (!isWhitespace(UpdateForm.emvis089.value))))
	{
	UpdateForm.specialty3.style.visibility = "hidden";
		setField ("Off",UpdateForm.specialty3,-1);
	}
	else
	{
		UpdateForm.specialty3.style.visibility = "visible";
		setField ("On",UpdateForm.specialty3,++tindex);
	}    
	
	// make specialty fields read-only if populated
	if  ((isWhitespace(UpdateForm.emvis171.value)) 
	|| ((!isWhitespace(UpdateForm.emvis079.value)) 
		&& (!isWhitespace(UpdateForm.emvis089.value))))
	{
		setField ("Off",UpdateForm.emvis079,-1);
		setField ("Off",UpdateForm.emvis089,-1);
		setImage ("Off",UpdateForm.image06,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis079,++tindex);
		setField ("On",UpdateForm.emvis089,++tindex);
		setImage ("On",UpdateForm.image06,-1);
	}
	
	// Set Bed Requested
	// make fields read-only if populated
	if  ((!isWhitespace(UpdateForm.emvis116.value))
	|| (!isWhitespace(UpdateForm.emvis085.value)))
	{
		setField ("Off",UpdateForm.emvis116,-1);
		setImage ("Off",UpdateForm.image07,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis116,++tindex);
		setImage ("On",UpdateForm.image07,-1);     
	}
	
	// Set Ward Accept Patient
	// make fields read-only if populated
	if   ((isWhitespace(UpdateForm.emvis116.value))
	|| ((!isWhitespace(UpdateForm.emvis075.value)) 
		&& (!isWhitespace(UpdateForm.emvis085.value))))  
	{
		setField ("Off",UpdateForm.emvis075,-1);
		setField ("Off",UpdateForm.emvis085,-1);
		setImage ("Off",UpdateForm.image08,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis075,++tindex);
		setField ("On",UpdateForm.emvis085,++tindex);
		setImage ("On",UpdateForm.image08,-1);  		
	}
	
	// Set Start Formal Observation
	// make fields read-only if populated
	if ((!isWhitespace(UpdateForm.emvis071.value)) 
		&& (!isWhitespace(UpdateForm.emvis081.value)))
	{
		setField ("Off",UpdateForm.emvis071,-1);
		setField ("Off",UpdateForm.emvis081,-1);
		setImage ("Off",UpdateForm.image09,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis071,++tindex);
		setField ("On",UpdateForm.emvis081,++tindex);
		setImage ("On",UpdateForm.image09,-1);
	}

	// make Disposition Date fields read-only if populated
	if ((!isWhitespace(UpdateForm.emvis080.value)) 
		&& (!isWhitespace(UpdateForm.emvis090.value)))
	{
		setField ("Off",UpdateForm.emvis080,-1);
		setField ("Off",UpdateForm.emvis090,-1);
		setImage ("Off",UpdateForm.image10,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis080,++tindex);
		setField ("On",UpdateForm.emvis090,++tindex);
		setImage ("On",UpdateForm.image10,-1);
	}
	
	// make reason and comments fields read-only if event discharged
	if (HiddenFields.DischargeComplete.value == "3")
	{
		selectReadOnly(UpdateForm.reasonDD,trim(UpdateForm.emvis065.value)); 
		setField ("Off",UpdateForm.emvis040,-1);
	}
	else
	{
		setField ("On",UpdateForm.emvis040,++tindex);
	}	
	
	defFocus.focus();
}

// Remove all but the Selected option of the dropdown
function selectReadOnly(theSelect,theValue) 
{
  for (var i = 0; i < theSelect.length; i++) 
  {
    thisValue = theSelect.options[i].value.substr(0,3);
    if (trim(thisValue) != trim(theValue))
    {
      theSelect.remove(i);
      i--; 
    }
  }  
}

function setField (cAction,aField,nTabIndex)
{
  if (cAction.toUpperCase() == "OFF")
  {
    aField.className = "readOnly";
    aField.readOnly  = true;
    aField.tabIndex  = -1;
  }
  else
  {
    aField.className = "Text";
    aField.readOnly  = false;
    aField.tabIndex  = nTabIndex;
	if (nTabIndex == 1)
		defFocus = aField;
//    if (bFocus) {
//      aField.focus();
//      bFocus = false;
//    }
  }
}

function setImage (cAction,aImage,nTabIndex)
{
  if (cAction.toUpperCase() == "OFF") {
    aImage.style.visibility = "hidden";
    aImage.disabled         = true;
    aImage.tabIndex         = -1;
  } else {
    aImage.style.visibility = "visible";
    aImage.disabled         = false;
    aImage.tabIndex         = nTabIndex;
//    if (bFocus) {
//      aImage.focus();
//      bFocus = false;
//    }
  }
}

// Created from validateCatCode1 to:
// - use passed fields
// - change the focus
function validateSpecialtyPaged(ReturnCatg,ReturnCode,ReturnName,ReturnD,ReturnT,fFocus) {
  user=document.PatientLinks.webuseid.value;
  if (isWhitespace(ReturnCode.value)) { return;;}
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=6&valdcode=" +
                    ReturnCatg.replace(/ /g,"+") +
                    ReturnCode.value.replace(/ /g,"+") +
                    "&webuseid=" + user +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&updateky=" + UpdateForm.updateky.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (ReturnValue[0] == "DEL") {
     ReturnCode.focus();
     ReturnCode.value="";
     ReturnName.value="";
     ReturnD.value="";
     ReturnT.value="";
     return;
    }
    fFocus.focus();
    ReturnName.value=ReturnValue[0];
    ReturnD.value=ReturnValue[1];
    ReturnT.value=ReturnValue[2];
  } else {
     ReturnCode.focus();
     ReturnCode.value="";
     ReturnName.value="";
     ReturnD.value="";
     ReturnT.value="";
  }
}

function bedRequested_onblur (dDate,tTime,fFocus)
{
  if ((UpdateForm.emvis116.className != "readOnly")
    && (!isWhitespace(UpdateForm.emvis116.value))) {
    validateWard(UpdateForm.emvis116,
                 UpdateForm.warddesc,
                 UpdateForm.emvis074,
                 UpdateForm.emvis084);
  }
  if (!isWhitespace(UpdateForm.emvis116.value)) {
    setStopWatch (dDate,tTime,fFocus);
    setAccess();
  }
}

function DTRules () {
  // Specialty Accept Patient after Specialty Paged
  if (!xDT(UpdateForm.emvis073,UpdateForm.emvis083,UpdateForm.emvis077,UpdateForm.emvis087)){return false};
  // Specialty Paged 2 after Specialty Paged
  if (!xDT(UpdateForm.emvis073,UpdateForm.emvis083,UpdateForm.emvis072,UpdateForm.emvis082)){return false};
  // Specialty Accept Patient 2 after Specialty Paged 2
  if (!xDT(UpdateForm.emvis072,UpdateForm.emvis082,UpdateForm.emvis078,UpdateForm.emvis088)){return false};
  // Specialty Paged 3 after Specialty Paged 2
  if (!xDT(UpdateForm.emvis072,UpdateForm.emvis082,UpdateForm.emvis076,UpdateForm.emvis086)){return false};
  // Specialty Accept Patient 3 after Specialty Paged 3
  if (!xDT(UpdateForm.emvis076,UpdateForm.emvis086,UpdateForm.emvis079,UpdateForm.emvis089)){return false};
  // Bed Requested after First Doctor Seen 
  if (!xDT(UpdateForm.emvis030,UpdateForm.emvis031,UpdateForm.emvis074,UpdateForm.emvis084)){return false};
  // Ward Accept Patient after Bed Requested
  if (!xDT(UpdateForm.emvis074,UpdateForm.emvis084,UpdateForm.emvis075,UpdateForm.emvis085)){return false};
  // Start Formal Obstvtn after First Doctor Seen
  if (!xDT(UpdateForm.emvis030,UpdateForm.emvis031,UpdateForm.emvis071,UpdateForm.emvis081)){return false};
  return true;
}

function xDT (dDate1,tTime1,dDate2,tTime2) {
  var dDate1p=0;
  var dDate2p=0;
  
  if (!isWhitespace(dDate1.value)) {
    dDate1p=Date.parse(dDate1.value);
  }
  if (!isWhitespace(dDate2.value)) {
    if (!checkDate(dDate2,dDate2.title)) {
      // Alert should be from checkDate
      dDate2.value="";
      dDate2.focus();
      return false;
    }
    dDate2p=Date.parse(dDate2.value);
    if (!CheckPast(SetDateYYYYMMDD(dDate2.value))) {
      alert(dDate2.title+" ("+dDate2.value+") cannot be in the future");
      dDate2.value="";
      dDate2.focus();
      return false;
    }
  }
  if ((!isWhitespace(dDate1.value))
     && (!isWhitespace(dDate2.value))) {
    if (dDate2p < dDate1p) {
      alert(dDate2.title+" ("+dDate2.value+") cannot be before "+dDate1.title+" ("+dDate1.value+")");
      dDate2.value="";
      dDate2.focus();
      return false;
    }
  }
  if (!isWhitespace(tTime2.value)) {
    checkTime(tTime2,tTime2.title);
  }
//  CheckFutureTime(UpdateForm,dDate2.value,tTime2);
  if ((!isWhitespace(tTime1.value))
   && (!isWhitespace(tTime2.value))
   && (tTime2.value <= tTime1.value)
   && (dDate2p == dDate1p)) {
    alert(tTime2.title+" ("+tTime2.value+") cannot be before "+tTime1.title+" ("+tTime1.value+")");
    tTime2.value="";
    tTime2.focus();
    return false;
  }
  return true;
}

function setDT (dDate,tTime,fFocus)
{
  // For a Date/Time manually entered check that it is not a future Date/Time.
  if  ((!isWhitespace(dDate.value))
    && (!isWhitespace(tTime.value))) {
    if (!checkDate(dDate,dDate.title)) {
      dDate.value = "";
      dDate.focus();
      return;
    }

    setDateTime(UpdateForm.currdate,"Current PC Date",UpdateForm.currtime,"Current PC Time");
    if (!ChkDateTime(dDate,tTime,UpdateForm.currdate,UpdateForm.currtime)) {
      alert(dDate.title+"/Time ("+dDate.value+" "+tTime.value+") cannot be in the Future.");
      tTime.value="";
      dDate.focus();
      return;
    }
  }
  // Only update if the Date/Time Rules are correct
  // Note that data may return true if only one of date / time entered as
  // incomplete rather than wrong.
  if (DTRules()) {
    // Only write the Date/Time as a valid pair
    if ((!isWhitespace(dDate.value)) && (!isWhitespace(tTime.value))) {
      RemoteEmrUpdate(UpdateForm.admissno,dDate);
      RemoteEmrUpdate(UpdateForm.admissno,tTime);
    }
  }
}

function setStopWatch (dDate,tTime,fFocus) {
  // Get the Date/time
  setDateTime(dDate,dDate.Title,tTime,tTime.Title);

  // Check that Focus field is available
  if ((fFocus.name == "emvis116") && (!isWhitespace(UpdateForm.emvis116.value)))
  {fFocus = UpdateForm.emvis075;}
  if ((fFocus.name == "emvis075") && (!isWhitespace(UpdateForm.emvis075.value)))
  {fFocus = UpdateForm.emvis040;}
  
  // Write the Date/Time and change focus
  setDT(dDate,tTime,fFocus);
}

function setDateTime(dateField,dateString,timeField,timeString) {
  var monthname = new Array(12);
  monthname[0]="Jan";
  monthname[1]="Feb";
  monthname[2]="Mar";
  monthname[3]="Apr";
  monthname[4]="May";
  monthname[5]="Jun";
  monthname[6]="Jul";
  monthname[7]="Aug";
  monthname[8]="Sep";
  monthname[9]="Oct";
  monthname[10]="Nov";
  monthname[11]="Dec";
  var n=new Date();
  var day=n.getDate();
  var mon=n.getMonth();
  mon=mon + 1
  var ccyy=n.getFullYear();
  if (day<10)  day ="0" + day
  var dateValue=day + " " + monthname[mon-1] + " " + ccyy
  dateField.value=dateValue;
  timeField.value="          ";
  checkDate(dateField,dateString);
  checkTime(timeField,timeString);
}

function setSpecialty(cSelect,cSpecialty,cDescription,dDate,tTime,fFocus)
{
  setStopWatch (dDate,tTime,fFocus);
  cSpecialty.value   = cSelect.options[cSelect.selectedIndex].value.substr(0,3);
  cDescription.value = cSelect.options[cSelect.selectedIndex].text;
  RemoteEmrUpdate(UpdateForm.admissno,cSpecialty);
  setAccess();
  fFocus.focus();
}

function updateReason(cSelect,cReason,fFocus) {
  cReason.value = cSelect.options[cSelect.selectedIndex].value.substr(0,3);
  if ((isWhitespace(cReason.value))
		&&(isWhitespace(trim(UpdateForm.c065.value)))) {
    return;
  }
  if (isWhitespace(cReason.value)) {
    // As dates cannot be cleared, clear nothing....
    alert("Cannot Clear Reason.");
    cReason.value =trim(UpdateForm.c065.value);
    cSelect.selectedIndex=trim(UpdateForm.u008.value);
    cSelect.focus();
  }
  RemoteEmrUpdate(UpdateForm.admissno,cReason);
  updateField(cReason,UpdateForm.c065,fFocus);
  UpdateForm.c065.value = cReason.value;
  UpdateForm.u008.value = cSelect.selectedIndex;
  fFocus.focus();
}

//------------------------------------------------------------
// Override version of Standard.js/InitialiseForms as it does 
// not locate the first available field for this form.
//------------------------------------------------------------
function InitialiseForms() {
//  self.onbeforeunload=BeforePageUnload;
  FirstField=true
  for (var f = 0 ; f < document.forms.length; f++) {
    addFormHandler(document.forms[f])
    for (var e = 0; e < document.forms[f].elements.length; e++) {
      addHandler(document.forms[f].elements[e])
      var el=document.forms[f].elements[e] ;
      if (el.type == "text") { el.value=el.value.replace(/\s*$/,""); }
      if (el.className.match(/Integer/)) {el.value=el.value.replace(/\s/g,""); }
      if (el.className.match(/Number/)) {el.value=el.value.replace(/\s/g,""); }
      if (el.type == "textarea") { el.value=el.value.replace(/\s*$/,""); }
      if (el.type != "hidden" && !el.readOnly && !el.disabled) {
        if (FirstField) {
          FirstField=false
//          el.focus()
         } }
    }
  }
  // Focus on the only field that is initially available
  UpdateForm.emvis040.focus();
}

function sendMessage(){
	var updkey = UpdateForm.updateky.value;
	var userid = PatientLinks.webuseid.value;
	
  //alert("sending msg " + PatientVIS.replace(/ /g, "+") );
  //var serverURL = "../cgi-bin/emrweb02.pbl?reportno=11&admissno=" + PatientVIS.replace(/ /g, "+") ;
  var serverURL = "../cgi-bin/emrweb02.pbl?reportno=11&admissno=" + PatientVIS.replace(/ /g, "+") +
                    "&updateky=" + updkey.replace(/ /g, "+") +
                    "&webuseid=" + userid.replace(/ /g, "+") ;
  //alert(serverURL);
  var returnValue = RSExecute(serverURL);
  //alert("returnValue " + returnValue);  
}

function saveFieldValue(aField) {
	RemoteEmrUpdate(UpdateForm.admissno,aField);
}

// Generic Update of field that checks if you really want to clear the value.
function updateField (cField,cSave,fFocus) {
  if ((isWhitespace(cField.value)) && (isWhitespace(cSave.value))) {
    return;
  }    
  if (isWhitespace(cField.value)) {
    ans = confirm("Clear "+cField.title+" text ?");
    if (ans!=true) {
      cField.value=trim(cSave.value);
      cField.focus();
    } else {
      cField.value="";
      RemoteEmrUpdate(UpdateForm.admissno,cField);
      cSave.value="";
      fFocus.focus();
    }
  } else {
    RemoteEmrUpdate(UpdateForm.admissno,cField);
    cSave.value=cField.value;  
    fFocus.focus();
  }
}

//------------------------------------------------------------------------
// Calculate the Date difference in Milliseconds
// Date 2 is assumed to be the more recent
//------------------------------------------------------------------------
function dateDifference(date1,date2) {
  var DateA = new Date(date1);
  var DateB = new Date(date2);

  // Convert both dates to milliseconds
  var DateA_ms = DateA.getTime();
  var DateB_ms = DateB.getTime();

  // Calculate the difference
  var difference_ms = DateB_ms - DateA_ms;
  return difference_ms;
}

//------------------------------------------------------------------------
// Calculate the time difference in Milliseconds
// Time 2 is assumed to be the more recent
//------------------------------------------------------------------------
function timeDifference(time1,time2) {
  var TimeA = new Date();
  var TimeB = new Date();

  TimeA.setHours  (time1.substr(0,2));
  TimeA.setMinutes(time1.substr(3,2));
  TimeA.setSeconds(time1.substr(6,2));
  var TimeA_ms = TimeA.getTime();

  TimeB.setHours  (time2.substr(0,2));
  TimeB.setMinutes(time2.substr(3,2));
  TimeB.setSeconds(time2.substr(6,2));
  var TimeB_ms = TimeB.getTime();

  // Calculate difference
  var difference_ms = TimeB_ms - TimeA_ms;
  return difference_ms;
}

//------------------------------------------------------------------------
// Calculate the date/time difference in Milliseconds
// Date 2 and Time 2 is assumed to be the more recent
//------------------------------------------------------------------------
function dateTimeDifference(date1,time1,date2,time2) {
  var difference_ms = dateDifference(date1,date2) + timeDifference(time1,time2);
  return difference_ms;
}

//------------------------------------------------------------------------
// Check that the Arrival Date/Time is:
// - Equal to the Triage Date/Time: then Warn Users
// - Greater than 3 hours Before the Triage Date/Time: Error for Re-entry
// - Is not before the Triage Date/Time: Error for Re-entry 
// Only pass the Focus field if you want the error to force correction,
//      which is not advised on blur/change as the inter-dependancy causes
//      a loop, only force it at an Update/Add check.  Could clear it but
//      then is that valid.
//------------------------------------------------------------------------
function checkArrivalDT(arrival_date,arrival_time,triage_date,triage_time,focus_field) {
  // Exit if the date/time incomplete, the mandatory check will frce entry.
  if (arrival_date.value=="" || arrival_time.value=="") {
    return true;
  }
  var difference_ms = dateTimeDifference(arrival_date.value,
                                             arrival_time.value,
                                             triage_date.value,
                                             triage_time.value);

	// Same Date/Time, warn user to check okay.
  if (difference_ms == 0)  {
    alert("Arrival and Triage Date/Time are the same.\nPlease Check.");
    return true;
  }

  // // 3 hours = 10800000 miliseconds
  if (difference_ms > 10800000) {
    alert("Arrival Date/Time ("+arrival_date.value+", "+arrival_time.value
                          +")\nmore than 3 hours before\nTriage Date/Time ("
                          +triage_date.value +", "+triage_time.value+")\n\nPlease Re-enter");
    if (focus_field!=undefined) {
      arrival_time.value="";
      focus_field.focus();
      focus_field.select();
    }
    return false;
  }

  // Triage Time before Arrival Time
  if (difference_ms < 0) {
    alert("Arrival Date/Time ("+arrival_date.value+", "+arrival_time.value+")\ncannot be after\nTriage Date/Time ("
                          +triage_date.value +", "+triage_time.value+")\n\nPlease Re-enter");
    if (focus_field!=undefined) {
      arrival_time.value="";
      focus_field.focus();
      focus_field.select();
    }
    return false;
  }
  return true;
}
