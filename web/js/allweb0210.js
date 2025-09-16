//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0210.js
//
// Function  : Standard Functions Used in allweb0210 templates
//
//========================================================================
//
function AddAssess(type) {
  if(type.value=="B") {
    PatientLinkTo('allweb02.pbl',10,2,1,850,700);
  } else if(type.value=="F") {
    PatientLinkTo('allweb02.pbl',10,4,1,750,600);
  } else if(type.value=="P") {
    PatientLinkTo('allweb02.pbl',10,6,1,500,300);
  } else if(type.value=="A") {
    PatientLinkTo('patweb78.pbl',13,1,1,560,450);
  } else if(type.value=="C") {
    PatientLinkTo('patweb78.pbl',14,1,1,540,500);
  }
}
function AddAssessCareType(type) {
  switch (type.value) {
    case  "1" : PatientLinkTo('allweb02.pbl',10,4,1,750,600);  break;
    case  "2" : PatientLinkTo('allweb02.pbl',10,2,850,700);    break;
    case  "3" : PatientLinkTo('allweb02.pbl',10,17,1,550,480);  break;
//  case  "3" : PatientLinkTo('allweb02.pbl',10,6,1,500,300);  break;
    case  "4" : PatientLinkTo('allweb02.pbl',10,6,1,500,300);  break;
    case  "5" : PatientLinkTo('allweb06.pbl',4,2,1,850,600);   break;
    case  "6" : PatientLinkTo('allweb02.pbl',10,4,1,850,700);  break;
  }
}
function AddAssessVINAH(type) {
  if (type.value=="B") {
    linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=002" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+");
    Left=(document.body.clientWidth-850)/2;
    DFrameLink(linkurl,50,Left,850,700);
  }
  if (type.value=="F") {
    linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=004" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+");
    Left=(document.body.clientWidth-850)/2;
    DFrameLink(linkurl,50,Left,500,300);
  }
  if (type.value=="P") {
    linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=006" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+");
    Left=(document.body.clientWidth-850)/2;
    DFrameLink(linkurl,50,Left,850,700);
  }
}
function AssessLink(vis,date,time,type) {
  if(type=="B") {
    linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=003" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + vis.replace(/ /g,"+") +
            "&albia001=" + vis.replace(/ /g,"+") +
            "&albia002=" + date.replace(/ /g,"+") +
            "&albia003=" + time.replace(/ /g,"+");
    Left=(document.body.clientWidth-850)/2;
    DFrameLink(linkurl,50,Left,850,700);
  }
  if(type=="F") {
    linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=005" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + vis.replace(/ /g,"+") +
            "&ptfim001=" + vis.replace(/ /g,"+") +
            "&ptfim002=" + date.replace(/ /g,"+") +
            "&ptfim003=" + time.replace(/ /g,"+");
    Left=(document.body.clientWidth-750)/2;
    DFrameLink(linkurl,50,Left,750,600);
  }
  if(type=="P") {
    linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=018" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmrug001=" + vis.replace(/ /g,"+") +
                  "&pmrug002=" + date.replace(/ /g,"+") +
                  "&pmrug003=" + time.replace(/ /g,"+") +
                  "&alsas001=" + vis.replace(/ /g,"+") +
                  "&alsas002=" + date.replace(/ /g,"+") +
                  "&alsas003=" + time.replace(/ /g,"+");
//                "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-550)/2;
                DFrameLink(linkurl,50,Left,550,480);
  }
//if(type=="P") {
//  linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=007" +
//          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
//          "&admissno=" + vis.replace(/ /g,"+") +
//          "&alsas001=" + vis.replace(/ /g,"+") +
//          "&alsas002=" + date.replace(/ /g,"+") +
//          "&alsas003=" + time.replace(/ /g,"+");
//  Left=(document.body.clientWidth-500)/2;
//  DFrameLink(linkurl,50,Left,500,300);
//}
  if(type=="H") {
    linkurl="../cgi-bin/allweb06.pbl?reportno=4&template=003" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + vis.replace(/ /g,"+") +
            "&mhhon001=" + vis.replace(/ /g,"+") +
            "&mhhon002=" + date.replace(/ /g,"+");
    Left=(document.body.clientWidth-850)/2;
    DFrameLink(linkurl,50,Left,850,700);
  }
  if(type=="A") {
    linkurl="../cgi-bin/patweb78.pbl?reportno=13&template=002" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + vis.replace(/ /g,"+") +
            "&ptatr001=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&ptatr002=" + vis.replace(/ /g,"+") +
            "&ptatr003=" + date.replace(/ /g,"+") +
            "&ptatr004=" + time.replace(/ /g,"+");
    Left=(document.body.clientWidth-560)/2;
    DFrameLink(linkurl,50,Left,560,450);
  }
  if(type=="C") {
    linkurl="../cgi-bin/patweb78.pbl?reportno=14&template=002" +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + vis.replace(/ /g,"+") +
            "&ptatr001=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&ptatr002=" + vis.replace(/ /g,"+") +
            "&ptatr003=" + date.replace(/ /g,"+") +
            "&ptatr004=" + time.replace(/ /g,"+");
    Left=(document.body.clientWidth-540)/2;
    DFrameLink(linkurl,50,Left,540,500);
  }

}
function Totals(theForm,field) {
  if(field!=undefined) {
    if(!checkInteger(field,field.title)) { return };
  }
  var total1 = 0 ;
  var total2 = 0 ;
  var total3 = 0 ;
  var total4 = 0 ;

  for(var e = 0; e < theForm.elements.length; e++) {
    var el=theForm.elements[e] ;
    if(!isWhitespace(el.value) && !isNaN(el.value)) {
      if(el.id.match(/col1/)) {
        total1+=(parseInt(el.value,10));
      }
      if(el.id.match(/col2/)) {
        total2+=(parseInt(el.value,10));
      }
      if(el.id.match(/col3/)) {
        total3+=(parseInt(el.value,10));
      }
      if(el.id.match(/col4/)) {
        total4+=(parseInt(el.value,10));
      }
    }
  }
  theForm.total1.value=total1
  theForm.total2.value=total2
  theForm.total3.value=total3
  theForm.total4.value=total4
}
function AssessmentTypeAdd() {
  if(AddForm.assmtype.value=="1") {
    PageDetails.innerHTML=TotalOnlyBarthel.innerHTML;
  } else {
    PageDetails.innerHTML=DetailedBarthel.innerHTML;
  }
}
function AssessmentTypeLoad() {
  if(!isWhitespace(UpdateForm.d_albia069.value)) {
    UpdateForm.assmtype.value="Total Only";
    PageDetails.innerHTML=TotalOnlyBarthel.innerHTML;
    UpdateForm.albia069.value=trim(UpdateForm.d_albia069.value);
  } else {
    UpdateForm.assmtype.value="Detailed";
    PageDetails.innerHTML=DetailedBarthel.innerHTML;
    Totals(UpdateForm);
  }
}
//------------------------------------------------------------------------------
// WA Health Functions
//------------------------------------------------------------------------------
function AddAssessCareTypeWAH(type) {

  if(typeof d_dastat!="undefined"){
    if(d_dastat.value=="1"){
       alert("Assessments cannot be added for a preadmission."+
             "\nPlease admit the patient before proceeding.");
       return;
    }
  }
  switch (type.value) {
    case  "1" : PatientLinkTo('allweb02.pbl',10,11,1,750,600); break;
    case  "2" : PatientLinkTo('allweb02.pbl',10,13,1,750,450); break;
    case  "3" : PatientLinkTo('allweb02.pbl',10,17,1,550,480);  break;
    case  "4" : PatientLinkTo('allweb02.pbl',10,6,1,500,250);  break;
    case  "5" : PatientLinkTo('allweb02.pbl',10,19,1,550,300); break;
    case  "6" : PatientLinkTo('allweb02.pbl',10,15,1,700,350);  break;
    case  "7" : PatientLinkTo('allweb02.pbl',10,4,1,750,600); break;
  }
}
//------------------------------------------------------------------------------
function AssessLinkWAH(vis,date,time,type,superlev) {
  switch (type) {
    case  "1" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=012" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&ptfim001=" + vis.replace(/ /g,"+") +
                  "&ptfim002=" + date.replace(/ /g,"+") +
                  "&ptfim003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-750)/2;
                DFrameLink(linkurl,50,Left,750,650);
                break;
    case  "2" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=014" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmmms001=" + vis.replace(/ /g,"+") +
                  "&pmmms002=" + date.replace(/ /g,"+") +
                  "&pmmms003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-750)/2;
                DFrameLink(linkurl,50,Left,750,500);
                break;
    case  "3" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=018" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmrug001=" + vis.replace(/ /g,"+") +
                  "&pmrug002=" + date.replace(/ /g,"+") +
                  "&pmrug003=" + time.replace(/ /g,"+") +
                  "&alsas001=" + vis.replace(/ /g,"+") +
                  "&alsas002=" + date.replace(/ /g,"+") +
                  "&alsas003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-550)/2;
                DFrameLink(linkurl,50,Left,550,480);
                break;
    case  "4" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=007" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&alsas001=" + vis.replace(/ /g,"+") +
                  "&alsas002=" + date.replace(/ /g,"+") +
                  "&alsas003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-500)/2;
                DFrameLink(linkurl,50,Left,500,300);
                break;
    case  "5" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=020" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmrug001=" + vis.replace(/ /g,"+") +
                  "&pmrug002=" + date.replace(/ /g,"+") +
                  "&pmrug003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-550)/2;
                DFrameLink(linkurl,50,Left,550,350);
                break;
    case  "6" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=016" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&mhhon001=" + vis.replace(/ /g,"+") +
                  "&mhhon002=" + date.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-700)/2;
                DFrameLink(linkurl,50,Left,700,380);
                break;
    case  "7" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=005" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&ptfim001=" + vis.replace(/ /g,"+") +
                  "&ptfim002=" + date.replace(/ /g,"+") +
                  "&ptfim003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-750)/2;
                DFrameLink(linkurl,50,Left,750,600);
                break;
  }
}
// QLD links
//------------------------------------------------------------------------------
function AssessLinkQLD(vis,date,time,type,superlev) {
  switch (type) {
    case  "1" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=005" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&ptfim001=" + vis.replace(/ /g,"+") +
                  "&ptfim002=" + date.replace(/ /g,"+") +
                  "&ptfim003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-750)/2;
                DFrameLink(linkurl,50,Left,750,650);
                break;
    case  "2" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=003" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmmms001=" + vis.replace(/ /g,"+") +
                  "&pmmms002=" + date.replace(/ /g,"+") +
                  "&pmmms003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-750)/2;
                DFrameLink(linkurl,50,Left,750,500);
                break;
    case  "3" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=007" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmrug001=" + vis.replace(/ /g,"+") +
                  "&pmrug002=" + date.replace(/ /g,"+") +
                  "&pmrug003=" + time.replace(/ /g,"+") +
                  "&alsas001=" + vis.replace(/ /g,"+") +
                  "&alsas002=" + date.replace(/ /g,"+") +
                  "&alsas003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-550)/2;
                DFrameLink(linkurl,50,Left,550,480);
                break;
    case  "4" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=007" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&alsas001=" + vis.replace(/ /g,"+") +
                  "&alsas002=" + date.replace(/ /g,"+") +
                  "&alsas003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-500)/2;
                DFrameLink(linkurl,50,Left,500,300);
                break;
    case  "5" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=020" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&pmrug001=" + vis.replace(/ /g,"+") +
                  "&pmrug002=" + date.replace(/ /g,"+") +
                  "&pmrug003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-550)/2;
                DFrameLink(linkurl,50,Left,550,350);
                break;
    case  "6" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=005" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&mhhon001=" + vis.replace(/ /g,"+") +
                  "&mhhon002=" + date.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-700)/2;
                DFrameLink(linkurl,50,Left,700,380);
                break;
    case  "7" : linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=005" +
                  "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + vis.replace(/ /g,"+") +
                  "&ptfim001=" + vis.replace(/ /g,"+") +
                  "&ptfim002=" + date.replace(/ /g,"+") +
                  "&ptfim003=" + time.replace(/ /g,"+") +
                  "&superlev=" + superlev.replace(/ /g,"+");
                Left=(document.body.clientWidth-750)/2;
                DFrameLink(linkurl,50,Left,750,600);
                break;
  }
}

//------------------------------------------------------------------------------
function calcMMSEScore(theForm) {
  theForm.totalScore.value =
     (theForm.pmmms004.value -0) + (theForm.pmmms005.value -0) +
     (theForm.pmmms006.value -0) + (theForm.pmmms007.value -0) +
     (theForm.pmmms008.value -0) + (theForm.pmmms009.value -0) +
     (theForm.pmmms010.value -0) + (theForm.pmmms011.value -0) +
     (theForm.pmmms012.value -0) + (theForm.pmmms013.value -0) +
     (theForm.pmmms014.value -0) + (theForm.pmmms015.value -0);
}
//------------------------------------------------------------------------------
function IsTimestampBetweenRange(sDate,sTime,eDate,eTime,nDate,nTime,hidingError,dontConvertArgs) {

  var sTimestamp; // start timestamp
  var eTimestamp; // end timestamp
  var nTimestamp  // new timestamp for comparison

  // Check all function arguments to ensure that a value is being passed
  // and not an input object. If input object, then extract out the value
  for(i=0; i<6; i++){
      if(typeof arguments[i] == "object"){
         if(typeof arguments[i].value=="string"){
            arguments[i] = arguments[i].value;
         }
         else{
            arguments[i] = "";
         }
      }
      else if(typeof arguments[i] == "DispHTMLInputElement"){
         if(typeof arguments[i].value=="string"){
            arguments[i] = arguments[i].value;
         }
         else{
            arguments[i] = "";
         }
      }
      else if(typeof arguments[i].value == "DispHTMLInputCollection"){
         if(typeof arguments[i].value=="string"){
            arguments[i] = arguments[i].value;
         }
         else{
            arguments[i] = "";
         }
      }
      else if(typeof arguments[i].value == "string"){
         arguments[i] = arguments[i].value;
      }
      else if(typeof arguments[i].value != "undefined"){
         arguments[i] = arguments[i].value;
      }
      else{
         arguments[i] = "";
      }
  }
  
  if(dontConvertArgs){
     // Used by allweb0210017 & allweb0210018 to check whether new phase date range
     // is within the bounds of the PREVIOUS phase start date & NEXT phase end date
     sTimestamp = sDate+sTime;  // raw format, no need to call SetDateYYYYMMDD()
     eTimestamp = eDate+eTime;  // raw format, no need to call SetDateYYYYMMDD()
     nTimestamp = SetDateYYYYMMDD(nDate)+nTime; // Always coming through as formatted date
  }
  else{ 
     sTimestamp = SetDateYYYYMMDD(sDate)+sTime; // need to convert to raw format
     eTimestamp = SetDateYYYYMMDD(eDate)+eTime; // need to convert to raw format
     nTimestamp = SetDateYYYYMMDD(nDate)+nTime; // Always coming through as formatted date
  }

  if((nTimestamp<sTimestamp)&&(!isWhitespace(sDate))&&(!isWhitespace(nDate))){
     if(!hidingError){ // custom error being used so don't display this
        alert("Assessment Date/Time must be on or after Admission Date");
     }
     if(nTimestamp.substr(0,8)<sTimestamp.substr(0,8)){
        nDate.value="";
        return false;
     }
     else if(nTimestamp.substr(0,8)==sTimestamp.substr(0,8)){
        nTime.value="";
        return false;
     }
  }

  if((nTimestamp>eTimestamp)&&(!isWhitespace(eDate))&&(!isWhitespace(nDate))){
     if(!hidingError){ // custom error being used so don't display this
        alert("Assessment Date/Time must be on or before Discharge Date");
     }
     if(nTimestamp.substr(0,8)>eTimestamp.substr(0,8)){
        nDate.value="";
        return false;
     }
     else if(nTimestamp.substr(0,8)==eTimestamp.substr(0,8)){
        nTime.value="";
        return false;
     }
  }
  return true;
}
//------------------------------------------------------------------------------
function chkDischarge(theForm) {
  if((isWhitespace(theForm.discdate.value)) || (theForm.discdate.value=="")) {
      return false; 
  }

  if(theForm.over24hr!=undefined){ 
     if(theForm.over24hr.value!=0){
     
        return !confirm('Admission for Assessment Only should not exceed 24 hours. \n' +
                        'Please review the "Admission for Assessment Only" value.\n' +
                        'Click on Cancel to return to the Assessment.');
     }
  }
  return false;
}
//------------------------------------------------------------------------------
function ShowPhaseDetails() {
  linkurl="../cgi-bin/allweb02.pbl?reportno=10&template=024" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&superlev=" + PatientLinks.superlev.value.replace(/ /g,"+");
  location.href=linkurl
}
//------------------------------------------------------------------------------
function CompareDateToNow(date1,time1){
  ts = date1.value + " " + time1.value; //dd mmm yyyy hh:mm:ss
                                        //01234567890123456789
  assTs = new Date(ts.substr(7,4), parseInt(GetMonthNumber(ts.substr(3,3)),10)-1,
                   ts.substr(0,2), ts.substr(12,2), ts.substr(15,2), ts.substr(18,2),0);
  if(assTs > new Date()){
     alert(date1.title + " cannot be in the future");
     return false;
  }
  return true;
}
//------------------------------------------------------------------------------
function AnSnapInit(form){
// Mandatories
// Enabled/Disabled fields
}
//------------------------------------------------------------------------------
function AnSnapSubmit(form){
// Check Date Range
// Check date < now
// Check Mandatories

}
//------------------------------------------------------------------------------

