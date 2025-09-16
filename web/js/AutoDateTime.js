//jsVersion  : V11.03.00
//
//------------------------------------------------------------------------
// Usage: Add the following to your page to enable the popup;
//------------------------------------------------------------------------
function DatePopUp(textInput,minDatePar,maxDatePar){
  var cDate = new Date();
  var autoEventType="onclick"
  if (navigator.userAgent.match(/ipad/i)) {
    var autoEventType="ontouchstart"
  }
  if (textInput.type == 'select-one') {
    clientTextbox = textInput; }
  else {
    if (textInput.length == undefined) {
      clientTextbox = textInput; }
    else {
      x=window.event.srcElement.parentElement.children.length-2
      clientTextbox = window.event.srcElement.parentElement.children[x] }
  }
  calContainer=document.getElementById("PopUpDiv")
//
// Set allowable date range to users specification,
// otherwise +/- 120 years from current date.
//
// Check that the user-supplied dates are valid by assigning
// them to date objects then checking to see if they are NaN
//
  if (minDatePar !=""){
    MinDate = new Date(minDatePar);
    if (isNaN(MinDate)) minDatePar = cDate.getDate() + " " + monthArray[cDate.getMonth()] + " " + (cDate.getFullYear() -120);
  }
  else {
    minDatePar = cDate.getDate() + " " + monthArray[cDate.getMonth()] + " " + (cDate.getFullYear() -120);  
  }
  if (maxDatePar !=""){
    MaxDate = new Date(maxDatePar);
    if (isNaN(MaxDate)) maxDatePar = cDate.getDate() + " " + monthArray[cDate.getMonth()] + " " + (cDate.getFullYear() +120);
  }
  else {
     maxDatePar = cDate.getDate() + " " + monthArray[cDate.getMonth()]	 + " " + (cDate.getFullYear() +120);	  
  }
  MinDate = new Date(minDatePar);
  MaxDate = new Date(maxDatePar);
  if (MinDate.getTime() > MaxDate.getTime()){
    MinDate = new Date(maxDatePar);
    MaxDate = new Date(minDatePar);
  }
  
  // Prepare the popup element for use
  popupCalContainer = calContainer;

  var curleft = 0;
  var curtop = 0;
  var obj=clientTextbox;
  if (obj.offsetParent) {
    curleft = obj.offsetLeft
    curtop = obj.offsetTop
    while (obj = obj.offsetParent) {
      curleft += obj.offsetLeft
      curtop += obj.offsetTop
    }
  }
  popupCalContainer.style.position = "absolute";
  popupCalContainer.style.top = (curtop+clientTextbox.offsetHeight) + "px";
  popupCalContainer.style.left = curleft + "px";

  startDate = textInput.value;
  if (startDate != ''){ 
    cDate = new Date(startDate); 
    if (isNaN(cDate)==true){
      // The string in the textbox was not a recognizable
      // date so default to current month in the popup
      cDate = new Date();
    }
  }
  curDay = cDate.getDate();
  curMth = cDate.getMonth();
  curYer = cDate.getFullYear();

  sHTML = '<table cellspacing=0 cellpadding=0 '+
          ' class=calendar border=0 bgcolor=Silver><tr><td>'+
          '<table class=calendar bgcolor=Silver><tr><td class=calSelect>' +
          '<SELECT id=selMonth name=selMonth class=selMonth' +
          ' language="javaScript" onClick="RefreshCalendar();"></SELECT>' +
          '<SELECT id=selYear name=selYear class=selYear' +
          ' language="javaScript" onClick="RefreshCalendar();"></SELECT></td>' +
          '<td align=right><span class=calClose onClick="javaScript:HideCal();">Close</span></td>' +
          '</tr><tr><td colspan=2>' +
          '<table class=calendar id=monthView border=1 bgcolor=Silver width=100% bordercolorlight=Gray bordercolordark=White>';
  dayNames = 'MoTuWeThFrSaSu';
  dayHead='';
  for(dn=0;dn<14;dn+=2){
    dayHead += '<td class=calDay>' + dayNames.substring(dn,dn+2) + '</td>';
  }
  sHTML += '<tr>' + dayHead + '</tr>';
  cellNo=0;
  for(wk=0;wk<6;wk++){
    sHTML += '<tr>';
    for(dn=1;dn<8;dn++){
      cellNo++;
      sHTML += '<td id=cd' + cellNo + '>' + cellNo + '</td>';
    }
    sHTML += '</tr>'
  }
  sHTML += '</table>'
  sHTML += '</td></tr></table></td></tr></table>';
  
  calContainer.innerHTML = sHTML;
  var selYear=document.getElementById("selYear");
  var selMonth=document.getElementById("selMonth");
  
  for (mth=0;mth<12;mth++) {
    cDate.setDate(1);
    cDate.setMonth(mth);
    cDate.setFullYear(2000);
    optM = document.createElement("OPTION");
    //optM.value = mth +1;
    optM.value = mth;
    optM.text = monthArray[mth];
    selMonth.add(optM);
  }
  selMonth.selectedIndex = curMth;
  yr1 =MinDate.getFullYear();
  yr2 =MaxDate.getFullYear();
  for (yr=yr1;yr<=yr2;yr++) {
    optM = document.createElement("OPTION");
    optM.value = yr;
    optM.text = yr;
    selYear.add(optM);
  }
  // Set the default year selection to the current year if it is
  // included in the list, otherwise the middle date in the range:
  yr1 = selYear.options.length /2;
  for (var yr=0;yr<=selYear.options.length;yr++){
    if (selYear.options[yr].value == curYer) {
      yr1 = yr;
      break;
    }
  }
  selYear.selectedIndex = yr1;
  popupCalContainer.style.display='';
  RefreshCalendar();
}

function HideCal(){
  popupCalContainer.style.display='none';
}

function RefreshCalendar(){
  var cDate = new Date();
  var cEndDate = new Date();

  yer=document.getElementById("selYear");
  mth=document.getElementById("selMonth");
  
  cDate.setDate("01");
  //cDate.setMonth(mth-1);
  cDate.setMonth(mth.options[mth.selectedIndex].value);
  cDate.setFullYear(yer.options[yer.selectedIndex].value);
  cEndDate = cDate;
  dow = cDate.getDay();
  if (dow < 1) dow =7;

  //hide buttons for days prior to start of the month
  for (bidx=1;bidx<dow;bidx++) {
    eTD = document.getElementById("cd" + bidx);
    eTD.innerText ="";
  }

  //set button values for the days in the month
  mthday =1;
  cEndDate.setMonth(cDate.getMonth() +1);
  cEndDate.setDate(cEndDate.getDate() -1);
  endday = cEndDate.getDate();   // last day of the month

  for (bidx=dow;bidx<(endday+dow);bidx++) {
    eTD = document.getElementById("cd" + bidx);

    //check if day is inside our range of selectable dates
    cEndDate = cDate;
    cEndDate.setDate(mthday);
      if (cEndDate >= MinDate && cEndDate <= MaxDate){
      //day is within the requested date range so enable selection
      if (navigator.userAgent.match(/ipad/i)) {
        eTD.ontouchstart = ReturnDate
      } else {
        eTD.onclick = ReturnDate
      }
      eTD.className = "CalendarCellOn"
      eTD.innerHTML = mthday;
    } else {
      //this day is outside the requested range so show as grey & non-selectable
      eTD.className ="CalendarCellOff"
      eTD.innerHTML = mthday;
    }
    mthday++;
  }
  //hide cells for the remaining days after the end of the month
  for (bidx=(endday+dow);bidx<43;bidx++) {
    eTD = document.getElementById("cd" + bidx);
    eTD.innerText ="";
  }
}
function ReturnDate() {
  DayNo=parseInt(window.event.srcElement.innerText,10)
  Mth = monthArray[document.getElementById("selMonth").value];
  if (clientTextbox.type=="text") {
    clientTextbox.value = DayNo + " " + Mth.substring(0,3) + " " + document.getElementById("selYear").value; }
  else {
    clientTextbox.options[0].text=DayNo + " " + Mth.substring(0,3) + " " + document.getElementById("selYear").value;
    el=document.getElementById("selYear");
    yrr=el.options[el.selectedIndex].value;
    el=document.getElementById("selMonth");
    mth=parseInt(el.options[el.selectedIndex].value)+1;
    mth="00"+mth;
    mth=mth.substr(mth.length-2);
    day="00"+DayNo;
    day=day.substr(day.length-2);
    clientTextbox.options[0].value=yrr.toString()+mth.toString()+day.toString();
    clientTextbox.selectedIndex=0 
    if (clientTextbox.name == "SelectDate" ) {
      clientTextbox.form.submit();
      return;
      } 
    }
  HideCal();
  
}
//------------------------------------------------------------------------
// Usage: Add the following to your page to enable the popup;
//------------------------------------------------------------------------
function TimePopUp(textInput,e){
  var autoEventType="onclick"
  if (navigator.userAgent.match(/ipad/i)) {
    var autoEventType="ontouchstart"
  }
  clockContainer=document.getElementById("PopUpDiv")
  popupClockContainer = clockContainer;
  if (textInput.length == undefined) {
    clientTextbox = textInput; }
  else {
    x=window.event.srcElement.parentElement.children.length-2
    clientTextbox = window.event.srcElement.parentElement.children[x] }

  var curleft = 0;
  var curtop = 0;
  var obj=clientTextbox;
  if (obj.offsetParent) {
    curleft = obj.offsetLeft
    curtop = obj.offsetTop
    while (obj = obj.offsetParent) {
      curleft += obj.offsetLeft
      curtop += obj.offsetTop
    }
  }
  popupClockContainer.style.position = "absolute";
  popupClockContainer.style.top = (curtop+clientTextbox.offsetHeight) + "px";
  popupClockContainer.style.left = curleft + "px";


  sHTML = '<table cellspacing=0 cellpadding=0 '+
          ' class=calendar border=1 bgcolor=Silver><tr><td>'+
          '<table class=calendar bgcolor=Silver><tr>'+
          '<td align=center style="font-weight:bold">Time</td>' +
          '<td align=right><span class=calClose '+autoEventType+'="HideClock();">Close</span></td></tr>' +
          '<tr><td nowrap >' +
          '<SELECT id=selHour name=selHour></SELECT>' +
          ':<SELECT id=selMin  name=selMin></SELECT>'+
          '<td align=right><span class=calOk '+autoEventType+'="UpdateTime();">Ok</span></td></tr>' +
          '</td></tr></table></td></tr></table>';
  
//  CurrentTime=RSExecute("RemoteServices.php?action=CurrentTime") // Get Server Time
  ReturnValue=RSExecute("../cgi-bin/patweb80.pbl?reportno=1") // Get Server Date & Time
  CurrentTime=ReturnValue.return_value.split("|")[1];
  
  CurrentHour=parseInt(CurrentTime.substr(0,2),10)
  CurrentMin=parseInt(CurrentTime.substr(3,2),10)
  CurrentMin=Math.round(CurrentMin/5)*5;
  clockContainer.innerHTML = sHTML;
  Zero="0"
  for (hour=0;hour<24;hour++) {
    optM = document.createElement("OPTION");
    theHour=hour 
    if (hour<10) { theHour=Zero+hour }
    optM.value = theHour;
    optM.text = theHour;
    document.getElementById("selHour").add(optM);
    if (CurrentHour==hour) optM.selected = true;
  }
  for (min=0;min<60;min+=5) {
    optM = document.createElement("OPTION");
    theMin=min 
    if (min<10) { theMin=Zero+min }
    optM.value = theMin;
    optM.text = theMin;
    document.getElementById("selMin").add(optM);
    if (CurrentMin==min) optM.selected = true
  }

  popupClockContainer.style.display='';

}
function UpdateTime() {
  clientTextbox.value = selHour.value + ":" + selMin.value;
  HideClock();
}

function HideClock(){
  popupClockContainer.style.display='none';
}
