//jsVersion  : V11.03.01
//
/******************************************************************************
 * Program : ipad.js
 * Written : B.G Ackland
 * Function: Standard ipad javascript functional used in mobile clinical
 *
 * Version :
 *
 * V11.03.01 07/02/2023  Don Nguyen     TSK 0912141
 *           Fixed js error in checkDocExist() when MedChart Alergies secondary
 *           flag is not returned from the AJAX (XHR) request.
 * V11.01.01 26/04/2021  Don Nguyen     TSK 0905367
 *           Added functions to initialize TinyMCE editor (version 5)
 * V10.08.01 22.11.2016 B.G.Ackland
 *           Spelling Error
 * V10.07.01 02.02.2016 B.G.Ackland     CAR 322098
 *           Change to ontouchstart to work around Safari bug (Remove and add Event Handler)
 * V10.06.02 01.10.2015 B.G.Ackland     CAR 322098
 *           Change username to lower or uppper case based on new setting for setUserNameCase0
.*           Can be set to "lower" oe "upper"
 * V10.06.01 31.08.2015 Ebon Clements   CAR 318526
 *           Added selectOption3
 * V10.04.02 13.06.2014 B.G.Ackland CAR 288095
 *           MedChart integration change format comment date for dates without times
 * V10.04.01 13.06.2014 B.G.Ackland CAR 288095
 *           MedChart integration change format comment date for dates without
 * V10.03.23 21.04.2013 B.G.Ackland CAR 288095
 *           MedChart integration allergies flag
 * V10.03.22 18.12.2013 B.G.Ackland CAR 290773
 *           Recognise Diagnostic Services for Healthscope & SA Pathology HAEM/BIO
 *           Show date times in future as "Due in X xxxxxx"
 * V10.03.21 05.12.2013 B.G.Ackland CAR 288095
 *           MedChart integration
 * V10.03.20 26.09.2013 B.G.Ackland   
 *           Incorporate alertify.js
 * V10.03.19 06.08.2013 B.G.Ackland   CAR 289383
 *           Standardize AJAXPostString2 into ipad.js and remove from ipadform.js
 *           Fix encodeURI problem with AJAX Posting
 * V10.03.18 20.07.2013 B.G.Ackland   CAR 288225
 *           Fix browser CSS include for Desktop Browsers (Win/Mac)
 * V10.03.17 20.07.2013 B.G.Ackland   CAR 288225
 *           Fix Scrolling on Mac Safari
 * V10.03.16 08.07.2013 B.G.Ackland   CAR 
 *           Fix Extra Stylesheet Load to determine path from BaseURI and not iPADPath
 * V10.03.15 27.06.2013 B.G.Ackland   CAR 286325
 *           Remove medicalViewStyle Custom Cabrini Configuration
 *           Change Date Formating to Ignore blank date fields (Avoid Javascript Error)
 *           Added baseURI change for Forms System
 *           Added Health Issue/Problem Flag
 *           Remove Patient Image Functions No Longer Required.
 * V10.03.14 05.06.2013 Saroeun Soeur CAR 286325
 *           medicalViewStyle loadStyleSheet based on param
 * V10.03.13 15.04.2013 B.G.Ackland   CAR 284098
 *           Reset Action Button to Close on openDocument
 * V10.03.12 30.01.2013 Saroeun Soeur CAR 279968
 *           added RemovePatDiv 
 * V10.03.11 16.01.2013 B.G.Ackland CAR 279467 
 *           smsMessageEnabled Parameter for ipad-settings.js
 * V10.03.10 12.12.2012 B.G.Ackland
 *           Fix Refresh on Return from Update Page
 * V10.03.09 20.11.2012 B.G.Ackland
 *           Strip Code to Menu Based Includes FunctionsTabs and FunctionsActions
 * V10.03.08 07.09.2012 B.G.Ackland
 *           Fix baseURI, Link to PDF Viewer
 * V10.03.07 13/06/2012 Saroeun Soeur CAR 266667 
 *           timeout when not active
 * V10.01.06 15/05/2012 Saroeun Soeur CAR 265236
 *           removed parameters into ipad-settings.js
 *           added loadJsParam()
 * V10.01.05 15/05/2012 Saroeun Soeur CAR 265236
 * V10.01.04 02/04/2012 Saroeun Soeur 
 *           default to results screen when results exist
 * V10.01.03 26/04/2012 Saroeun Soeur CAR 263815
 *           changed for new templates 
 * V10.01.02 03/04/2012 Saroeun Soeur 
 *           fixed default selection on dropdown alert ShowPatientAlerts()
 * V10.01.01 03/04/2012 Saroeun Soeur
 *           Changed LinkAlt to include alert counter
 * V10.00.08 17/06/2011 Saroeun Soeur
 *           added noImagePlaceHolder - display unknown patient image 
 * V10.00.07 23/03/2011 Saroeun Soeur
 *           added doesNoteTypeExist() to prevent multiple discharge notes on
 *           same admissno
 * V10.00.06 08/03/2011 Saroeun Soeur
 *           fixed patient Image on ResultView
 * V10.00.05 04/03/2011 Saroeun Soeur
 *           LinkRes(LinkUrl,DSS,Panel,title)
 *           to display in full screen              
 * V10.00.04 23/02/2011 Saroeun Soeur
 *           added ClinicalResultsTitle function
 * V10.00.03 19/02/2011 Saroeun Soeur
 *           added getQueryString
 * V10.00.02 17/01/2011 Saroeun Soeur 
 *           added patient photo functionality
 * V10.00.01 12/01/2011 Saroeun Soeur
 *           added deleted alert view
 * V10.00.00 01/06/2010 B.G Ackland 
 *           created ipad.js
 *
 *****************************************************************************/
var notesWarningFlag;
var filterColumns = new Array();
var filterValues = new Array();
var filterIds = new Array();
var filterBlock;
var SortSequence;
var whitespace = " \t\n\r";
var mask8='++++++++';
var iFlagMed;
var setUserNameCase="";

resetTimeout();
loadJsParam();

window.onload = function(){ // on page load
  if(typeof window.document.ontouchstart != 'undefined') {
   document.body.addEventListener('touchstart', function(e){ TouchResetTimeout(); }, false)
  }
}

function TouchResetTimeout() {
  resetTimeout();
  document.body.removeEventListener('touchstart');
  document.body.addEventListener('touchstart', function(e){ TouchResetTimeout(); }, false)
}
function resetTimeout() {
 if(parent.top.clearLoginTimeout) {
  parent.top.clearLoginTimeout();
  parent.top.setLoginTimeout();
 }
}

setTimeout(function(){ 
  setFrameSizes();
  loadStyleSheet();
  top.scrollTo(0,0); 
}, 400); 

function loadJsParam() {
    var fileref=document.createElement('script');
    fileref.setAttribute("type","text/javascript");
    if (typeof fileref != "undefined") {
      el=document.getElementsByTagName("head")
      var baseURI=window.location.pathname.replace(/\/html\/.*/,"")
      baseURI=baseURI.replace(/\/images\/.*/,"")
      baseURI=baseURI.replace(/\/cgi-bin\/.*/,"")
      baseURI=baseURI.replace(/\/php\/.*/,"")
      baseURI=baseURI.replace(/\/forms\/.*/,"")
      fileref.setAttribute("src", baseURI+'/html/ipad/ipad-settings.js');
      el[el.length-1].appendChild(fileref);
    }
}
function setServerDateTime() {
   clientOffsetTime=top.getCookie("clientOffsetTime");
   if (isWhitespace(clientOffsetTime)||clientOffsetTime=='unknown')
   {
     var serverURL   = CGIPath+"patweb80.pbl?reportno=1"
     var returnValue = RSExecute(serverURL);
     if (returnValue.status==0) {
       ReturnValue=returnValue.return_value.split("|");
       serverDate=trim(ReturnValue[0]);
       serverTime=trim(ReturnValue[1]);
       serverDateTime=new Date(serverDate+' '+serverTime);
       clientDateTime=new Date();
       clientOffsetTime = serverDateTime.getTime() - clientDateTime.getTime();
       top.setCookie("clientOffsetTime",clientOffsetTime,"10")
     }
   }
   serverDateTime=new Date();
   serverDateTime.setTime(serverDateTime.getTime() + parseInt(trim(clientOffsetTime),10));
}
function loadStyleSheet() {
  if((navigator.userAgent.match(/iPhone/i)) ||
     (navigator.userAgent.match(/iPod/i)) ||
      (navigator.userAgent.match(/iPad/i))) {
    return;
  }
  var baseURI=window.location.pathname.replace(/\/html\/.*/,"")
  baseURI=baseURI.replace(/\/images\/.*/,"")
  baseURI=baseURI.replace(/\/cgi-bin\/.*/,"")
  baseURI=baseURI.replace(/\/php\/.*/,"")
  baseURI=baseURI.replace(/\/forms\/.*/,"")
  if (navigator.userAgent.match(/MSIE/i) ) {
    loadjscssfile(baseURI+"/html/ipad/msie.css", "css");
  } else {
    loadjscssfile(baseURI+"/html/ipad/browser.css", "css");
  }
}
function setContentHeight() {
  var iframe=top.document.getElementById('iphone-frame')
  var parentFrame = parent.document.getElementById('content');
  if(parentFrame) {
    parentFrame.style.height=parseInt(iframe.style.height.replace(/px/,""),10)-41+"px";
  }
  var parentFrame = parent.document.getElementById('docFrame');
  if(parentFrame) {
    parentFrame.style.height=parseInt(iframe.style.height.replace(/px/,""),10)-41+"px";
  }
  var parentFrame = parent.document.getElementById('patFrame');
  if(parentFrame) {
    parentFrame.style.height=parseInt(iframe.style.height.replace(/px/,""),10)-41+"px";
  }
}
function setFrameSizes() {
 if(navigator.userAgent.match(/Windows/i)|| navigator.userAgent.match(/Macintosh/i) ) {
   setContentHeight()
   return;
 }
 var parentFrame = parent.document.getElementById('content');
 if(parentFrame) { parentFrame.height = "auto"; }
 var parentParentFrame = parent.parent.document.getElementById('iphone-frame');
 if(parentParentFrame) { parentParentFrame.height = "auto"; }
 var parentParentDocFrame = parent.parent.document.getElementById('docFrame');
 if(parentParentDocFrame) { parentParentDocFrame.height = "auto"; }
 h=document.body.scrollHeight;
 if (document.body.scrollHeight<1024) { h=1024; }
 if(parentFrame) { parentFrame.height = h+"px"; }
 if(parentParentFrame) { parentParentFrame.height = parseInt(50 + h,10)+"px"; }
 if(parentParentDocFrame) { parentParentDocFrame.height = parseInt(50 + h,10)+"px"; }
}
//
// Zoom Control
//
function allowZoom() {
  if((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i)) || (navigator.userAgent.match(/iPad/i))) {
  window.top.document.getElementById("viewport").setAttribute('content',
                     'user-scalable=yes, initial-scale = 1.0, minimum-scale = 0.25, maximum-scale = 10.0');
 }
}
function disableZoom() {
  if((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i)) || (navigator.userAgent.match(/iPad/i))) {
  window.top.document.getElementById("viewport").setAttribute('content',
  'user-scalable=no, initial-scale = 1.0 , minimum-scale = 1.0, maximum-scale = 1.0');
 }
}
//------------------------------------------------------------
// iPhone List (Derived from Original Table Sort JS)
//------------------------------------------------------------
function Table(PatientID) {
   this.PatientID = PatientID;
   this.rows      = new Array();
   this.addRow    = _addTableRow;
   this.AddPatient= _addTableRow;
}

function NumericSort(a,b) {
  return a[SortOrderBy] - b[SortOrderBy];
}

function StringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = -1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = 1  }
  return x ;
}

function RevNumericSort(a,b) {
  return b[SortOrderBy] - a[SortOrderBy];
}

function RevStringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = 1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = -1  }
  return x ;
}

function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++) 
     row[row.length] = arguments[i];
}
function FD(ccyymmdd) {
  if (isWhitespace(ccyymmdd)) { return "" }
  yrr=ccyymmdd.substring(0,4);
  mth=mth3Name(ccyymmdd.substring(4,6));
  day=ccyymmdd.substring(6,8);
  ret = day+ " "+ mth+ " "+ yrr;
  return ret
}

function FormatCommentAge(datetime) {
 if (isWhitespace(datetime)) { return "" }
 yyyy = datetime.substr(0,4);
 mm = datetime.substr(4,2);
 dd = datetime.substr(6,2);
 hh = datetime.substr(8,2);
 mi = datetime.substr(11,2);
 var NoTime=false;
 if (isWhitespace(hh)) { hh="00";NoTime=true; }
 if (isWhitespace(mi)) mi="01"
 var thisDate= new Date(yyyy,parseInt(mm,10)-1,dd,hh,mi);
 var today= new Date();
 if (isWhitespace(clientOffsetTime)) { setServerDateTime(); }
 today.setTime(today.getTime() + parseInt(trim(clientOffsetTime),10));
 var one_min=1000*60
 var one_hour=1000*60*60
 var one_day=1000*60*60*24
 var one_week=1000*60*60*24*7
 var one_month=1000*60*60*24*30
 var one_year=1000*60*60*24*365
 mid=Math.ceil((today.getTime()-thisDate.getTime())/(one_min))
 hrd=Math.ceil((today.getTime()-thisDate.getTime())/(one_hour))
 dyd=Math.ceil((today.getTime()-thisDate.getTime())/(one_day))
 wkd=Math.ceil((today.getTime()-thisDate.getTime())/(one_week))
 mtd=Math.ceil((today.getTime()-thisDate.getTime())/(one_month))
 ytd=Math.ceil((today.getTime()-thisDate.getTime())/(one_year))
 if (ytd>2) return ytd+' years ago';
 if (mtd>2) return mtd+' months ago';
 if (wkd>2) return wkd+' weeks ago';
 if (dyd>2) return dyd+' days ago';
 if (NoTime&&hrd>2) return 'Today';
 if (hrd>2) return hrd+' hours ago';
 if (-ytd>2) return 'Due in '+(-ytd)+' years';
 if (-mtd>2) return 'Due in '+(-mtd)+' months';
 if (-wkd>2) return 'Due in '+(-wkd)+' weeks';
 if (-dyd>2) return 'Due in '+(-dyd)+' days';
 if (NoTime&&hrd<2) return 'Today';
 if (-hrd>2) return 'Due in '+(-hrd)+' hours';
 if (mid<0) return  'Due in '+(-mid)+' minutes';
 return mid+' minutes ago';
}
function FormatDateTime(datetime) {
   if (isWhitespace(datetime)) { return "" }
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mth3Name(mm);
   if (isWhitespace(time)) {
      return(dd + " " + mth3 + " " + yyyy); }
   else {
     return(dd + " " + mth3 + " " + yyyy + " at " + time); }
}

function FormatGridDateTime(datetime) {
   if (isWhitespace(datetime)) { return "" }
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mth3Name(mm);
   if (isWhitespace(time)) {
      return(dd + " " + mth3 ); }
   else {
     return(dd + " " + mth3 + "<br>"+ time); }
}

function FormatDate(datetime) {
   if (isWhitespace(datetime)) { return "" }
   yyyy = datetime.substr(0,4)
   mm = datetime.substr(4,2)
   dd = datetime.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
}

function mth3Name(mm) {
   mth3="";
   switch(mm) {
     case "01": mth3="Jan"; break;
     case "02": mth3="Feb"; break;
     case "03": mth3="Mar"; break;
     case "04": mth3="Apr"; break;
     case "05": mth3="May"; break;
     case "06": mth3="Jun"; break;
     case "07": mth3="Jul"; break;
     case "08": mth3="Aug"; break;
     case "09": mth3="Sep"; break;
     case "10": mth3="Oct"; break;
     case "11": mth3="Nov"; break;
     case "12": mth3="Dec"; break;
   }
  return mth3;
}

function Mth3Num(mmm) {
   switch(mmm) {
     case "Jan": mth3="01"; break;
     case "Feb": mth3="02"; break;
     case "Mar": mth3="03"; break;
     case "Apr": mth3="04"; break;
     case "May": mth3="05"; break;
     case "Jun": mth3="06"; break;
     case "Jul": mth3="07"; break;
     case "Aug": mth3="08"; break;
     case "Sep": mth3="09"; break;
     case "Oct": mth3="10"; break;
     case "Nov": mth3="11"; break;
     case "Dec": mth3="12"; break;
   }
  return mth3;
}


function isWhitespace (s) {
 var i;
 if (isEmpty(s)) return true;
 for (i = 0; i < s.length; i++) {
   var c = s.charAt(i);
   if (whitespace.indexOf(c) == -1) return false;
 }
    return true; // All characters are whitespace.
}

function isEmpty(s) {
 return ((s == null) || (s.length == 0))
}

function showImage(image) {
  image.style.display="";       // image exists so display
}

function setCookie(c_name,value,expiredays) {
 var exdate=new Date();
 exdate.setDate(exdate.getDate()+parseInt(expiredays));
 document.cookie=c_name+ "=" +escape(value)+ ((expiredays==null) ? "" : ";expires="+exdate.toGMTString());
}

function getCookie(c_name) {
if (document.cookie.length>0) {
  c_start=document.cookie.indexOf(c_name + "=");
  if (c_start!=-1) {
    c_start=c_start + c_name.length+1;
    c_end=document.cookie.indexOf(";",c_start);
    if (c_end==-1) c_end=document.cookie.length;
    return unescape(document.cookie.substring(c_start,c_end));
    }
  }
return "";
}
//------------------------------------------------------------
// Sections Function to be reviewed for possible deletion
//------------------------------------------------------------
function restoreSections(el) {
  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  var sRow = document.getElementById(PageSectionID+'row');
  var sSection = document.getElementById(PageSectionID);
  var sForm = document.getElementById('sectionForm');
  var sFormTitle   = document.getElementById('sectionFormTitle');
  var sFormContent = document.getElementById('sectionFormContent');
  var sFormFrame   = document.getElementById('sectionFormFrame');
  sFormFrame.src=IPADPath+"LoadingPage.html";
  sFormFrame.style.backgroundColor="white";
  sRow.style.display="block";
  sSection.style.display="block";
  sForm.style.display="none";
  sFormTitle.style.display="none";
  sFormContent.style.display= "none";
}

function closeSection() {
  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  var sSectionContent  = document.getElementById('sectionContent');
  var sFormContent     = document.getElementById('sectionFormContent');
  sFormContent.style.display     = "none";
  sSectionContent.style.display= "";
  var sFormFrame       = document.getElementById('sectionFormFrame');
  sFormFrame.src=IPADPath+"LoadingPage.html";
}

function openSection(linkurl,linktitle) {
  var sSectionContent   = document.getElementById('sectionContent');
  var sFormContent      = document.getElementById('sectionFormContent');
  var sFormFrame        = document.getElementById('sectionFormFrame');
  sFormFrame.src=IPADPath+"LoadingPage.html";
  var sFormTitle        = document.getElementById("sectionTitle");
  sSectionContent.style.display= "none";
  sFormContent.style.display= "block";
  sFormFrame.src = CGIPath+linkurl;
  setTimeout(function(){ 
    top.scrollTo(0,0); 
  }, 100); 
}

/******************************************************************************
 * openDocument - opens a full screen frame, that allows zooming
 ****************************************************************************/
function openMedicalRecord(linkurl) {
  dFrame=top.document.getElementById("mainScreen");
  dFrame.style.display='none';
  setTimeout(function() { ShowRecord(linkurl); },100);
}
function ShowRecord(linkurl) {
  dFrame=top.document.getElementById("patFrame")
  dScreen=top.document.getElementById("patScreen")
  dScreen.style.position = "absolute";
  dScreen.style.top = "0px";
  dScreen.style.left = "0px";
  dScreen.style.width = "100%";
//  dFrame.src=IPADPath+"LoadingPage.html"; Done on Exit of Record
  dScreen.style.display = "";
  title = top.document.getElementById('patScreenTitle');
  title.innerText = "Medical Record View";
  var actionBtnAlt = top.document.getElementById('actionButtonAlt');
  actionBtnAlt.style.display='none';
  dFrame.src=linkurl;
}

function openDocument(linkurl,linktitle) {
  allowZoom();
  var actionBtn = top.document.getElementById('actionButton');
  actionBtn.innerText = "Done";
  actionBtn.className = "SpanButton RightAlign"
  actionBtn.style.display='';
  actionBtn.onclick = function() { parent.CloseDocument(); };
  dFrame=top.document.getElementById("mainScreen");
  dFrame.style.display='none';
  dFrame=top.document.getElementById("docFrame")
  dScreen=top.document.getElementById("docScreen")
  dScreen.style.position = "absolute";
  dScreen.style.top = "0px";
  dScreen.style.left = "0px";
  dScreen.style.width = "100%";
  dFrame.src=IPADPath+"LoadingPage.html";
  dScreen.style.display = "";
  title = top.document.getElementById('docScreenTitle');
  title.innerText = linktitle;
  var actionBtnAlt = top.document.getElementById('actionButtonAlt');
  actionBtnAlt.style.display='none';
  dFrame.src=linkurl;
}

/******************************************************************************
 * openDocumentNonZoomable - opens a full creen frame, no zooming allowed
 *****************************************************************************/
function openDocumentNonZoomable(linkurl,linktitle) {
  var actionBtn = top.document.getElementById('actionButton');
  actionBtn.innerText = "Done";
  actionBtn.className = "SpanButton RightAlign"
  actionBtn.style.display='';
  actionBtn.onclick = function() { parent.CloseDocument(); };
  dFrame=top.document.getElementById("mainScreen");
  dFrame.style.display='none';
  dFrame=top.document.getElementById("docFrame")
  dScreen=top.document.getElementById("docScreen")
  dScreen.style.position = "absolute";
  dScreen.style.top = "0px";
  dScreen.style.left = "0px";
  dScreen.style.width = "100%";
  dFrame.src=IPADPath+"LoadingPage.html";
  dScreen.style.display = "";
  title = top.document.getElementById('docScreenTitle');
  title.innerText = linktitle;
  var actionBtnAlt = top.document.getElementById('actionButtonAlt');
  actionBtnAlt.style.display='none';
  dFrame.src = linkurl;
}

//
/******************************************************************************
 *
 ****************************************************************************/
function openFormSection(section,linkurl,linktitle) {
  setTimeout(function(){ top.scrollTo(0,0); }, 100); 
  var content= document.getElementById(section);
  toggleSection(content);
  el=content.parentNode.getElementsByTagName("div")

  for (i=0;i<el.length;i++) {
    if (el[i].id.match(/section.*row/)) {
      el[i].style.display="none";
    }
    if (el[i].id==PageSectionID) {     //  Clinical Results Section
      el[i].style.display="none";
    }
  }

  var sForm = document.getElementById('sectionForm');
  var sFormContent = document.getElementById('sectionFormContent');
  var sFormTitle   = document.getElementById('sectionFormTitle');
  var sFormFrame   = document.getElementById('sectionFormFrame');
  sFormTitle.innerHTML=linktitle;
  sFormTitle.style.display="block";
  sFormContent.style.display= "block";
  sFormFrame.src=linkurl;
  sForm.style.display="block";
}
/******************************************************************************
 *	DoctorViewFrame
 *****************************************************************************/
function DoctorViewFrame(DoctorCode) {
  if(DoctorCode.replace(/ /g,"").length  == 0 ) { return; }
  var LinkToUrl="patweb99.pbl?reportno=1&template=11&doctcode="+DoctorCode.replace(/ g/,"+");
  parent.openSection(LinkToUrl,"Doctor Details");
}

function PatientResultLink(LinkUrl,DSS,Panel,urnumber,rowNo) {
  var elFrame=window.top.document.getElementById("iphone-frame")
  if(elFrame.contentDocument.getElementById("PatientTabMenu")!= null) {
     PatientURN=PatientRecords.rows[rowNo][10]
     State=PatientRecords.rows[rowNo][7]
     TestName=PatientRecords.rows[rowNo][3]
     theURL = CGIPath+ "patweb98.pbl?reportno=1&template=187" +
                       "&urnumber="+PatientURN.replace(/ /g,"+") +
                       "&srchtype=4";
     openMedicalRecord(theURL)
     linkurl= getResultLink(LinkUrl,DSS,Panel,State);
     theURL = CGIPath+linkurl + '&httprand='+Math.random();
     StatusName=' Result';
     if (State.match(/Scheduled/i)) {
       StatusName=' Order';
     }    
     openDocument(theURL,TestName+StatusName);
     return;
  }
  alertify.alert("Invalid Menu Configuration");
}

function GetResult(rowNo) {
alertify.alert('GetResult');
 CurrentRowNo=rowNo;
 PatientURN=PatientRecords.rows[rowNo][10];
 var xmlHttp = createHttpObject();
 theURL = CGIPath+ "patweb98.pbl?reportno=1&template=183" +
          "&urnumber="+PatientURN.replace(/ /g,"+") +
          "&srchtype=4";
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();

 setTimeout(function() { 
   ResultScreen(); 
  }, 100); 
 return xmlHttp.responseText;
}

function ResultScreen() {
alertify.alert('ResultScreen');
 PatientALT = document.getElementById("PatientALT").innerText;
 setTimeout(AddAlertIcons(),100);
 LinkUrl=PatientRecords.rows[CurrentRowNo][0];
 DSS=PatientRecords.rows[CurrentRowNo][8];
 Panel=PatientRecords.rows[CurrentRowNo][9];
 State=PatientRecords.rows[CurrentRowNo][7];
 wtitle=ClinicalResultsTitle();
 title="Clinical Results";
 wscript="";
 wurl = getResultLink(LinkUrl,DSS,Panel,State);
 openDocumentNonZoomable(CGIPath+wurl,title);
 setTimeout(function() { 
   wscript="ResultsInitTable1()";
   wurl="cliweb03.pbl?reportno=1&template=708&viewtype=1&reslnkyr=ally&norecord=50";
   ShowScreen(wtitle,wscript,wurl);
  }, 100); 
}
//------------------------------------------------------------
// Result Table Links
//------------------------------------------------------------
function getResultLink(LinkUrl,DSS,Panel,State) {
  var resultky=LinkUrl.replace(/.*resultky=/,"&resultky=");
  var linkurl=resultDefaultView+resultky;
  DSS=trim(DSS);
  for (var i=0;i<resultDSSCode.length;i++) {
    if (resultDSSCode[i]==DSS) {
      linkurl=resultDSSView[i]+resultky;
    }
  }
  Panel=trim(Panel);
  for (var i=0;i<resultPanelCode.length;i++) {
    if (resultPanelCode[i]==Panel) {
      linkurl=resultPanelView[i]+resultky;
    }
  }
  if (State.match(/Scheduled/i)) {
    var linkurl=resultDefaultView+resultky;
  }
  return linkurl;
}
function listFilter(el) {
  for(var f = 0; f < filterValues.length; f++) {
    if (filterValues[f]!='') {
      if (filterValues[f]!=el[filterColumns[f]]) {
        return false;
      }
    }
  }
  return true;
}
function sortList() {
  if (SortSequence==0) {
    SortSequence=1
    t.rows.sort(StringSort);
  }
  else {
    SortSequence=0
    t.rows.sort(RevStringSort);
  }
  NoteShowTable();
  setFilters();
}
function filterList(el,filterId,filterNo) {
  filterValues[filterNo]=el.options[el.selectedIndex].value;
  NoteShowTable();
  setFilters();
}
function setFilters() {
  for(var f = 0; f < filterValues.length; f++) {
    if (filterValues[f]!='') {
      el=document.getElementById(filterIds[f]);
      for (g = 1; g < el.length ; g++) {
        if (el.options[g].value==filterValues[f]) el.selectedIndex=g;
      }
    }
  }
}
function clearFilters() {
  filterValues = [];
  filterColumns = [];
  filterIds = [];
}
function makeFilter(t,filterId,titleFilter,ColumnNo) {
 var FilterList = new Array();
 filterColumns[filterColumns.length]=ColumnNo;
 filterValues[filterValues.length]='';
 filterIds[filterIds.length]=filterId;
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (t.rows[i][ColumnNo]==FilterList[j]) addItem=false;
     }
     if (addItem) FilterList[FilterList.length]=t.rows[i][ColumnNo];
   }
 }
 FilterList.sort();
 RS='<select title=Filter id='+filterId+' onchange=filterList(this,"'+filterId+'","'+(filterValues.length-1)+'") class=stdButton>';
 RS+="<option value=''>"+titleFilter+"</option>";
 for(var j = 0; j < FilterList.length; j++) {
   RS+="<option value=\""+FilterList[j]+"\">"+FilterList[j]+"</option>";
 }
 RS+="</select>"
 return RS;
}
function CheckVisitStatus() {
   if (document.getElementById("VisitStatus") != null&&notesWarningFlag==0) {
     vStatus=document.getElementById("VisitStatus").innerHTML
     vType=document.getElementById("VisitType").innerHTML
     if (vStatus.replace(/ /g,"")=="Active"&&vType=="REFERRAL") return;
     if (vStatus.replace(/ /g,"")=="1"&&vType=="EMERGENCY") return;
     if (vStatus.replace(/ /g,"")=="Current"&&vType=="INPATIENT") return;
     alertify.alert("WARNING: This visit is not current. Notes added will not appear on previously printed document.");
     notesWarningFlag=1
   }
}
//------------------------------------------------------------
// Filter Notes List
//------------------------------------------------------------
function SelectForm() {
  el=CurrentDiv.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
    if (el[i].id=="patweb9801105") { break; }
    if (el[i].className=="WidgetTable") { WidgetTable=el[i] }
  }

  for (var i = 0; i < NewNote.clnote.length; i++) {
    if (NewNote.clnote.options[i].selected == true) {
       NewNote.clnot001.value = NewNote.clnote.options[i].value.substr(0,3);
    }
  }

  LinkURL=NewNote.action +"?"

  for (i=0;i<NewNote.length;i++) {
    if (NewNote[i].type=='hidden') {
      LinkURL+=NewNote[i].name+"="+NewNote[i].value.replace(/ /g,"+")+"&" 
    }
    
    if (NewNote[i].type=='select-one') {
      LinkURL+=NewNote[i].name+"="+
             NewNote[i].options[NewNote[i].selectedIndex].value.replace(/ /g,"+")+"&" 
     }
  }

  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", LinkURL, false);
  xmlHttp.send();
  WidgetTable.innerHTML=xmlHttp.responseText;
  var sel=NewNote.SELECTED.value;
  for (var i = 0; i < NewNote.clnote.length; i++) {
      if (NewNote.clnote.options[i].value.substr(0,3) == sel) {
          NewNote.clnote.selectedIndex=i;
      }
   }
}
//------------------------------------------------------------
// trim - following function to remove the spaces from 
//        the starting and ending of the given string. 
//------------------------------------------------------------
function trim(str) {
  var strln = str.length
  if (strln>0) {
    for (var i=0;i<=strln;i++) {
      if (str.substring(0,1)==' ') str=str.substring(1,str.length);
      if (str.substring(str.length-1,str.length)==' ') str=str.substring(0,str.length-1);
    }
  }
  return str;
}
//------------------------------------------------------------
// findPos - following function returns the position of a object
//------------------------------------------------------------
function findPos(obj) {
  var curleft = curtop = 0;
  if (obj.offsetParent) {
    do { curleft += obj.offsetLeft;
         curtop += obj.offsetTop;
       } while (obj = obj.offsetParent);
  }
  return [curleft,curtop];
}
function expandMe(area){
  while (area.scrollHeight > area.offsetHeight)
    area.rows=area.rows+1;
}
function MarkResult() {
  var xmlHttp = createHttpObject();
  var theURL   = "cliweb10.pbl"
  parameters  ="reportno="+encodeURIComponent(document.MarkSeen.reportno.value)
  parameters+="&template="+encodeURIComponent(document.MarkSeen.template.value)
  parameters+="&markalll="+encodeURIComponent(document.MarkSeen.markalll.value)
  parameters+="&auditkey="+encodeURIComponent(document.MarkSeen.auditkey.value)
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(parameters);
  resultText=xmlHttp.responseText
  if (resultText.match(/Invalid/i)) {
    alertify.alert(resultText.replace(/.*alert\(\"/i,"").replace(/\".*/,""));
  }
  parent.ShowPatientResults();
}
function LinkPatient(rowNo) {
  var elFrame=window.top.document.getElementById("iphone-frame")
  if(elFrame.contentDocument.getElementById("PatientTabMenu")!= null) {
     PatientURN=PatientRecords.rows[rowNo][0]
     PatientVIS=PatientRecords.rows[rowNo][1]
     theURL = CGIPath+ "patweb98.pbl?reportno=1&template=187" +
                       "&urnumber="+PatientURN.replace(/ /g,"+") +
                       "&admissno="+PatientVIS.replace(/ /g,"+");
     openMedicalRecord(theURL)
     return;
 }
 alertify.alert("Invalid Menu Configuration.");
}
function checkDocExist() {
  var xmlHttp = createHttpObject();

  theURL = CGIPath+ "patweb98.php?reportno=2" +
                   "&urnumber="+PatientURN.replace(/ /g,"+")+
                   "&admissno="+PatientVIS.replace(/ /g,"+");

  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();

  var alertArray = eval("("+xmlHttp.responseText+")");

  var el = CurrentDiv.getElementsByTagName("SPAN")
  for (i=0;i<el.length;i++) {
   if(el[i].id=="FlagBil") {
     FlagBil = el[i];
     if(parseInt(alertArray[0].billing,10) > 0) {
        FlagBil.className = 'showAlertBil';
        observationExist = true;
     }else {
        observationExist = false;
        FlagBil.className = '';
     }
   }
   if(el[i].id=="FlagNot") {
     FlagNot = el[i];
     if(parseInt(alertArray[0].notes,10) > 0) {
        FlagNot.className = 'showAlertNote';
        notesExist = true;
     }else {
        notesExist = false;
        FlagNot.className = '';
     }
   }
   if(el[i].id=="FlagDia") {
     FlagDia = el[i];
     if(parseInt(alertArray[0].diagnosis,10) > 0) {
        FlagDia.className = 'showAlertDia';
        observationExist = true;
     }else {
        observationExist = false;
        FlagDia.className = '';
     }
   }
   if(el[i].id=="FlagObs") {
     FlagObs = el[i];
     if(parseInt(alertArray[0].observation,10) > 0) {
        FlagObs.className = 'showAlertObs';
        observationExist = true;
     }else {
        observationExist = false;
        FlagObs.className = '';
     }
   }
   if(el[i].id=="FlagMed"&&UseMedChartAllergies!="N") {
     iFlagMed = el[i];
     setTimeout(function () { 
       theURL = CGIPath + "MedchartServices.php?reportno=9"+ 
                "&urnumber="+PatientURN.replace(/ /g,"+") +
                "&admissno="+PatientVIS.replace(/ /g,"+") +
                "&httprand="+Math.random();
       var xmlHttp = createHttpObject();
       xmlHttp.open("GET", theURL, false);
       xmlHttp.send();
       var flags=xmlHttp.responseText.split("|");
       if (flags.length > 0) {
         if(parseInt(flags[0],10) > 0) {
            iFlagMed.className = 'showAlertMed';
         } else {
           iFlagMed.className = '';
         }
         if (flags.length > 1) {
           if (flags[1].toUpperCase()!="NO KNOWN ALLERGIES") {
             if (flags[1].toUpperCase()!="ALLERGY STATUS UNKNOWN") {
                var af=document.getElementById("FlagAlt");
                if (isWhitespace(af.className)) af.className="showAlert";
             }
           }
         }
       }
     },10);
   }
   if(el[i].id=="FlagHis") {
     FlagHis = el[i];
     if(parseInt(alertArray[0].history,10) > 0) {
        FlagHis.className = 'showAlertHis';
        historyExist = true;
     }else {
        historyExist = false;
        FlagHis.className = '';
     }
   }

   if (el[i].id=="FlagDoc") {
     FlagDoc = el[i];
     if( parseInt(alertArray[0].clinicalDoc,10) > 0) {
       FlagDoc.className = 'showAlertClinDoc';
       clinicDocExist = true;
     }else {
       FlagDoc.className = '';
       clinicDocExist = false;
     }
   }

   if (el[i].id=="FlagThe") {
    FlagThe = el[i];
    if( parseInt(alertArray[0].theatre,10) > 0) {
       FlagThe.className = 'showAlertThe';
       theatreExist = true;
    }else {
       theatreExist = false;
       FlagThe.className = '';
    }
   }
   
   if (el[i].id=="FlagVis") {
     FlagVis = el[i];
     if(parseInt(alertArray[0].visits,10) > 0) {
       FlagVis.className = 'showAlertVisits';
       visitExist = true;
     }else {
       FlagVis.className = '';
       visitExist = false;
     }
   }
   if (el[i].id=="FlagPrb") {
     FlagPrb = el[i];
     if(parseInt(alertArray[0].problems,10) > 0) {
       FlagPrb.className = 'showAlertVisits';
       problemsExist = true;
     }else {
       FlagPrb.className = '';
       problemsExist = false;
     }
   }
  }
}
function ShowScreen(wtitle,wscript,wurl) {
  el=document.getElementById('ShowLoadingPage');
  if(el != null) { el.style.display=""; }
  setTimeout(function () { ShowScreen2(wtitle,wscript,wurl) },10);
}
function ShowScreen2(wtitle,wscript,wurl) {

  resetTimeout();
  if (PatientURN.replace(/ /g,"+")=="+++++++0") {
    alertify.alert("WARNING: Patient Does Not Have a U/R Allocated. Previous History Not Available.");
    if (wurl.match(/cliweb03/)) return                              /* No Results */;
    if (wurl.match(/patweb98.pbl?reportno=1&template=84/)) return;  /* No Alerts */
  }
  el=document.getElementsByTagName("DIV")
  for (i=0;i<el.length;i++) {
    switch (el[i].id) {
     case "sectionTitle" : el[i].innerHTML=wtitle;break;
     case "sectionContent" : var sSectionContent=el[i];break;
     case "sectionFormContent" : var sFormContent=el[i];break;
     case "PatientURN" : 
       PatientURN=el[i].innerText;
       if(navigator.userAgent.match(/MSIE/i) ) {
          PatientURN=mask8.substr(0,8-el[i].innerText.length)+el[i].innerText;
       }
       break;
     case "PatientVIS" : 
       PatientVIS=el[i].innerText;
       if(navigator.userAgent.match(/MSIE/i) ) {
         PatientVIS=mask8.substr(0,8-el[i].innerText.length)+el[i].innerText;
       }
       break;
     case "PatientAge" : PatientAge=el[i].innerText;break;
     case "PatientDOB" : PatientDOB=el[i].innerText;break;
     case "PatientSex" : PatientSex=el[i].innerText;break;
     case "PatientGName" : PatientGName=el[i].innerText;break;
     case "PatientSName" : PatientSName=el[i].innerText;break;
    }
  }
 theURL = CGIPath + wurl + 
          "&urnumber="+PatientURN.replace(/ /g,"+") +
          "&admissno="+PatientVIS.replace(/ /g,"+") +
          '&httprand='+Math.random();
 if (isWhitespace(wscript)) {
   var sFormFrame   = document.getElementById('sectionFormFrame');
   refreshURL=theURL;
   refreshScript="";
   refreshLocation=sFormFrame;
   sFormFrame.src=IPADPath+"LoadingPage.html";
   if(sFormContent) {
     sFormContent.style.display   = "";
   }
   sFormFrame.src=theURL;
   if(sSectionContent) {
     sSectionContent.style.display= "none";
   }
 } else {
   var h = document.getElementsByTagName("head")[0];
   var s = document.createElement("script");
   if(sFormContent) {
     sFormContent.style.display     = "none";
   }
   if(sSectionContent) {
     sSectionContent.style.display= "";
   }
   var xmlHttp = createHttpObject();
   xmlHttp.open("GET", theURL, false);
   xmlHttp.send();
   if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
     s.type="text/javascript";
     h.appendChild(s);
     s.text=xmlHttp.responseText;
     ListLocation = sSectionContent;
     eval(wscript); 
     refreshURL=theURL;
     refreshScript=wscript;
     refreshLocation=ListLocation;
   }
   else {
     sSectionContent.innerHTML="<ul><li>Web Service Not Available. Please Try Again. <br> Contact System Administrators if the problem continues.</li></ul>";
   }
 }
 setTimeout(function(){ setFrameSizes();top.scrollTo(0,0); }, 100); 
 el=document.getElementById('ShowLoadingPage');
 if(el != null) { el.style.display="none"; }
}
function refreshScreen() {
  if (refreshScript=="") {
    theURL = refreshURL + '&refreshr='+Math.random();
    refreshLocation.src=theURL;
  } else {
    var h = document.getElementsByTagName("head")[0];
    var s = document.createElement("script");
    var xmlHttp = createHttpObject();
    theURL = refreshURL + '&refreshr='+Math.random();
    xmlHttp.open("GET", theURL, false);
    xmlHttp.send();
    if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
      s.type="text/javascript";
      h.appendChild(s);
      s.text=xmlHttp.responseText;
      ListLocation=refreshLocation
      eval(refreshScript);
    }
  }
  return true;
}
//======================================================================
// Standard Date Select View Functions
//  SelectView(ViewType)   0=by day 1 =by week 2=by month
//======================================================================
function SelectView(ViewType) {
  document.SelectPeriod.viewtype.value=ViewType
  if (document.SelectPeriod.lastdate!=undefined) 
    document.SelectPeriod.lastdate.options.length=0;
  if (document.SelectPeriod.vyearmth!=undefined) 
    document.SelectPeriod.vyearmth.options.length=0;
  document.SelectPeriod.submit();
}
function SelectNextPeriod() {
 if (document.SelectPeriod.viewtype.value==0) {
   SelectNextDay() }
 if (document.SelectPeriod.viewtype.value==1) {
   SelectNextWeek() }
 if (document.SelectPeriod.viewtype.value==2) {
   SelectNextMonth() }
}
function SelectLastPeriod() {
 if (document.SelectPeriod.viewtype.value==0) {
   SelectLastDay() }
 if (document.SelectPeriod.viewtype.value==1) {
   SelectLastWeek() }
 if (document.SelectPeriod.viewtype.value==2) {
   SelectLastMonth() }
}
function SelectLastDay() {
  document.SelectPeriod.lastdate.selectedIndex--;
  document.SelectPeriod.submit();
}
function SelectNextDay() {
  document.SelectPeriod.lastdate.selectedIndex++;
  document.SelectPeriod.submit();
}
function SelectLastWeek() {
  document.SelectPeriod.lastdate.selectedIndex--;
  document.SelectPeriod.submit();
}
function SelectNextWeek() {
  document.SelectPeriod.lastdate.selectedIndex++;
  document.SelectPeriod.submit();
}
function SelectLastWeek5() {
  document.SelectPeriod.lastdate.selectedIndex--;
  document.SelectPeriod.submit();
}
function SelectNextWeek5() {
  document.SelectPeriod.lastdate.selectedIndex++;
  document.SelectPeriod.submit();
}
function SelectLastMonth() {
  document.SelectPeriod.vyearmth.selectedIndex--;
  document.SelectPeriod.submit();
}
function SelectNextMonth() {
  document.SelectPeriod.vyearmth.selectedIndex++;
  document.SelectPeriod.submit();
}
/******************************************************************************
 * Set the select menu options from remote script and sets a cookie so no more
 * calls is required.
 *
 * url - the remote script location
 * cookieName - name of the cookie
 ******************************************************************************/
function SetMenuOptions(url,cookieName) {
 var xmlHttp = createHttpObject();
 theURL = CGIPath + url; 
 xmlHttp.open("GET", theURL, false);
 xmlHttp.send();
 if (xmlHttp.responseText != "") {
   top.setCookie(cookieName,xmlHttp.responseText);
 }
}
//------------------------------------------------------------
// Get Select List Options
//------------------------------------------------------------
function selectOptions2(OptionNumber,ReturnCode,ReturnSelect) {
  var serverURL   = CGIPath+"comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); 
       } 
     } 
  } else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
// Get Select List Options - same as selectOption but sends returnfm=1
//------------------------------------------------------------
function selectOptions3(OptionNumber,ReturnCode,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&returnfm=1"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}
//------------------------------------------------------------
//  RSExecute: execute host procedure using Ajax
//------------------------------------------------------------
function RSExecute(url) {
  xmlHttp = createHttpObject();
  // Note: this is a Synchronous Ajax call. and Firefox does NOT
  //  triggeer the onreadystatechange event on synchronour calls
  //  so the return analysis code is now inline after the send();
  //xmlHttp.onreadystatechange=RSExecuteStateChange;
  RSExecuteResult              = new Object();
  RSExecuteResult.status       = -1;
  RSExecuteResult.return_value = '';
  RSExecuteResult.message      = '';
  url = url + '&httprand='+Math.random();
  xmlHttp.open("GET",url,false);
  xmlHttp.send(null);
  RSExecuteStateChange();
  return RSExecuteResult;
}
//------------------------------------------------------------
//  createHttpObject: set up object for Ajax_RSExecute calls       
//------------------------------------------------------------
function createHttpObject() {
  var xmlHttp;
  try {
    xmlHttp = new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  }
  catch (e) {
    // Internet Explorer in newer or older form
    try {
      xmlHttp = new ActiveXObject("Msxml2.XMLHTTP");
    }
    catch (e) {
      try {
        xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
      }
      catch (e) {
        alertify.alert("Your browser does not support AJAX!");
        return false;
      }
    }
  }
  return xmlHttp;
}
//------------------------------------------------------------
//  RSExecuteStateChange - get data back from Ajax_RSExecute call       
//------------------------------------------------------------
function RSExecuteStateChange() {
  var data = '';
  var start_index = 0;
  var data_start_index = 0;
  var end_index = 0;
  var start_key = '<RETURN_VALUE';
  var end_key = '</RETURN_VALUE>';
  var metatag = '';
  if (xmlHttp.readyState==4) {
    if (xmlHttp.status == 200) {
      RSExecuteResult.message      = '';
      RSExecuteResult.return_value = '';
      RSExecuteResult.status       =  0;
      data = xmlHttp.responseText;
      if ((start_index = data.indexOf(start_key)) != -1) {
        data_start_index = data.indexOf('>',start_index) + 1;
        end_index = data.indexOf(end_key,data_start_index);
        if (end_index == -1)
          end_index = data.length;
        metatag = data.substring(start_index,data_start_index);
        if (metatag.indexOf('TYPE=SIMPLE') != -1) {
          RSExecuteResult.return_value=
            unescape(data.substring(data_start_index,end_index));
        }
        else if (metatag.indexOf('TYPE=ERROR') != -1) {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          alertify.alert('Error Message<br>' + RSExecuteResult.message)
          RSExecuteResult.status  = -1;
        }
        else if (metatag.indexOf('TYPE=WARNING') != -1) {
          RSExecuteResult.message     = unescape(data.substring(data_start_index,end_index));
          alertify.confirm("Warning Message<br>"+ RSExecuteResult.message, function (e) {    
            if (e) {        
                RSExecuteResult.status=RSExecuteResult.status;
            } else {        
                RSExecuteResult.status=-1;
            }});
        }
      }
    } else {
      RSExecuteResult.status       = -1;
    }
  }
}
//-------------------------------------------------------------
// function : getQueryString(string) - get any param in a query string
//            by param string name.
//
// example:
// url = http://www.myhospital.com?ur=1231&pname=soeur&add=123
//
// var value = getQueryString("pname"); will return soeur
// var value = getQueryString("add");  will return 123
//-------------------------------------------------------------
function getQueryString(string) {
 var queryString = window.location.search.substring(1);
 var queryParam = queryString.split("&");
 for (i=0;i<queryParam.length;i++)
 {
   var temp = queryParam[i].split("=");
   if (temp[0] == string)
     return temp[1];
 }
 return "";
}
function generateRandomColor() {
  var color = '#'+('00000'+(Math.random()*0xFFFFFF<<0).toString(16)).substr(-6);
}
//----------------------------------------------------------------------------
// Check if note type already exist
//-----------------------------------------------------------------------------
function doesNoteTypeExist(noteType,msg) {
  var url = CGIPath+"cliweb06.php?reportno=5&admissno="+PatientVIS.replace(/ /g,"+")+
            "&notetype="+noteType;
  var num = 0;
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET",url,false);
  xmlHttp.onreadystatechange = function () {
    if (xmlHttp.readyState == "4" && xmlHttp.status == "200") {
       num = parseInt(xmlHttp.responseText.replace(/ /g,""),10);
       if ( num > 0) {
        alertify.alert( msg.replace(/(\s*$)/g,"") + " notes already exist for this admission number" );
       }
     }
  }
  xmlHttp.send(null);
  return num;
}
function loadjscssfile(filename, filetype) {
 if (filetype == "js"){ //if filename is a external JavaScript file

  var fileref=document.createElement('script');
  fileref.setAttribute("type","text/javascript");
  fileref.setAttribute("src", filename);

 } else if (filetype == "css"){ //if filename is an external CSS file

  var fileref=document.createElement("link");
  fileref.setAttribute("rel", "stylesheet");
  fileref.setAttribute("type", "text/css");
  fileref.setAttribute("href", filename);

 }

 if (typeof fileref != "undefined") {
  document.getElementsByTagName("head")[0].appendChild(fileref);
 } 

}
function sendMessage(mobileno) {
   if (smsMessageEnabled) {
     url="smsweb03.php?mobileno="+mobileno
     openDocumentNonZoomable(CGIPath+url,"SMS Message Centre");
   } else {
     alertify.alert("SMS Messaging Not Currently Available");
   }
}

function openResultChart(num,resultkey){
    var PatientURN = document.getElementById('urnumber');
    var PatientVIS = document.getElementById('admissno');

    url="cliweb10.pbl?reportno=03&template=711"+
           '&urnumber='+PatientURN.value.replace(/ /g,"+") +
           '&admissno='+PatientVIS.value.replace(/ /g,"+")+
           '&chart='+num+"&resultky="+resultkey.replace(/ /g,"+");

    title = 'Result Chart';

    openDocument(CGIPath+url,title);
}
function resetButtons() {
 var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButton";
    actionBtn.innerText = "Done";
    actionBtn.onclick = function() {
       parent.CloseDocument();
    }
  }
}

function RemovePatDiv(){}
//
// Format .NET Date Return in JSON from MedChart
//
function netDate(el,format) {
  if (isWhitespace(el)) return "";
  var d = new Date(parseInt(el.replace(/\/+Date\(([\d+-]+)\)\/+/, '$1')));
  var ThisHrs=d.getHours();
  var ThisMin=d.getMinutes();
  var ThisDay=d.getDate();
  var ThisMth=parseInt(d.getMonth(),10) +1;
  var ThisYrs=d.getFullYear();
  if (ThisHrs < 10) ThisHrs="0" + ThisHrs
  if (ThisMin < 10) ThisMin="0" + ThisMin
  if (ThisDay < 10) ThisDay="0" + ThisDay
  if (ThisMth < 10) ThisMth="0" + ThisMth
  ThisHrs = ThisHrs.toString();
  ThisMin = ThisMin.toString();
  ThisMth = ThisMth.toString();
  ThisDay = ThisDay.toString();
  var monthname = new Array(12)
  monthname[0]="Jan"
  monthname[1]="Feb"
  monthname[2]="Mar"
  monthname[3]="Apr"
  monthname[4]="May"
  monthname[5]="Jun"
  monthname[6]="Jul"
  monthname[7]="Aug"
  monthname[8]="Sep"
  monthname[9]="Oct"
  monthname[10]="Nov"
  monthname[11]="Dec"
  var MonthName=monthname[d.getMonth()];
  if (format=="displaydate") return ThisDay+" "+MonthName+" "+ThisYrs
  if (format=="date") return ThisYrs+ThisMth+ThisDay
  if (format=="datetime") return ThisYrs+ThisMth+ThisDay+ThisHrs+ThisMin
}
//========================================================================
// Format POST String for AJAX Form Post
//========================================================================
function AJAXPostString2(el) {
  parameters="";
  for (i=0;i<el.length;i++) {
    switch (el[i].type) {
     case 'radio': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       }
       break; }
     case 'checkbox': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       }
       break; }
     case 'hidden': {
       parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       break; }
     case 'select-one': {
       if (el[i].selectedIndex!=-1) {
         parameters+=el[i].name+"="+encodeURIComponent(el[i].options[el[i].selectedIndex].value)+"&";
       }
       break; }
     case 'text': {
       parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       break; }
     case 'textarea': {
       parameters+=el[i].name+"="+encodeURIComponent(getTextarea(el[i]))+"&";
       break; }
    }
  }
  parameters+='1=1';
  return parameters;
}
function getTextarea(el) {
  textareaValue=""
  lines=el.value.split("\n")
  for (var j=0;j<lines.length;j++) {
    if (lines[j].length>el.cols) {
      textareaValue+=breakLine(lines[j],el.cols);
    }
    else {
      textareaValue+=lines[j]+"\n";
    }
  }
  return textareaValue;
}
function breakLine(textValue,colLength) {
  returnValue="";
  while (textValue.length>colLength) {
    if (textValue.lastIndexOf(" ",colLength)>0) {
      returnValue+=textValue.substr(0,textValue.lastIndexOf(" ",colLength)) +"\n";
      textValue=textValue.substr(textValue.lastIndexOf(" ",colLength)+1);
    }
    else {
      returnValue+=textValue.substr(0,colLength) +"\n";
      textValue=textValue.substr(colLength+1);
    }
  }
  returnValue+=textValue
  return returnValue;
}
/**
 * alertify
 * An unobtrusive customizable JavaScript notification system
 *
 * @author Fabien Doiron <fabien.doiron@gmail.com>
 * @copyright Fabien Doiron 2013
 * @license MIT <http://opensource.org/licenses/mit-license.php>
 * @link http://fabien-d.github.com/alertify.js/
 * @module alertify
 * @version 0.3.10
 */
(function (global, undefined) {
	"use strict";

	var document = global.document,
	    Alertify;

	Alertify = function () {

		var _alertify = {},
		    dialogs   = {},
		    isopen    = false,
		    keys      = { ENTER: 13, ESC: 27, SPACE: 32 },
		    queue     = [],
		    $, btnCancel, btnOK, btnReset, btnFocus, elCallee, elCover, elDialog, elLog, form, input, getTransitionEvent;

		/**
		 * Markup pieces
		 * @type {Object}
		 */
		dialogs = {
			buttons : {
				holder : "<nav class=\"alertify-buttons\">{{buttons}}</nav>",
				submit : "<button type=\"submit\" class=\"alertify-button alertify-button-ok\" id=\"alertify-ok\">{{ok}}</button>",
				ok     : "<button class=\"alertify-button alertify-button-ok\" id=\"alertify-ok\">{{ok}}</button>",
				cancel : "<button class=\"alertify-button alertify-button-cancel\" id=\"alertify-cancel\">{{cancel}}</button>"
			},
			input   : "<div class=\"alertify-text-wrapper\"><input type=\"text\" class=\"alertify-text\" id=\"alertify-text\"></div>",
			message : "<p class=\"alertify-message\">{{message}}</p>",
			log     : "<article class=\"alertify-log{{class}}\">{{message}}</article>"
		};

		/**
		 * Return the proper transitionend event
		 * @return {String}    Transition type string
		 */
		getTransitionEvent = function () {
			var t,
			    type,
			    supported   = false,
			    el          = document.createElement("fakeelement"),
			    transitions = {
				    "WebkitTransition" : "webkitTransitionEnd",
				    "MozTransition"    : "transitionend",
				    "OTransition"      : "otransitionend",
				    "transition"       : "transitionend"
			    };

			for (t in transitions) {
				if (el.style[t] !== undefined) {
					type      = transitions[t];
					supported = true;
					break;
				}
			}

			return {
				type      : type,
				supported : supported
			};
		};

		/**
		 * Shorthand for document.getElementById()
		 *
		 * @param  {String} id    A specific element ID
		 * @return {Object}       HTML element
		 */
		$ = function (id) {
			return document.getElementById(id);
		};

		/**
		 * Alertify private object
		 * @type {Object}
		 */
		_alertify = {

			/**
			 * Labels object
			 * @type {Object}
			 */
			labels : {
				ok     : "OK",
				cancel : "Cancel"
			},

			/**
			 * Delay number
			 * @type {Number}
			 */
			delay : 5000,

			/**
			 * Whether buttons are reversed (default is secondary/primary)
			 * @type {Boolean}
			 */
			buttonReverse : true,

			/**
			 * Which button should be focused by default
			 * @type {String}	"ok" (default), "cancel", or "none"
			 */
			buttonFocus : "ok",

			/**
			 * Set the transition event on load
			 * @type {[type]}
			 */
			transition : undefined,

			/**
			 * Set the proper button click events
			 *
			 * @param {Function} fn    [Optional] Callback function
			 *
			 * @return {undefined}
			 */
			addListeners : function (fn) {
				var hasOK     = (typeof btnOK !== "undefined"),
				    hasCancel = (typeof btnCancel !== "undefined"),
				    hasInput  = (typeof input !== "undefined"),
				    val       = "",
				    self      = this,
				    ok, cancel, common, key, reset;

				// ok event handler
				ok = function (event) {
					if (typeof event.preventDefault !== "undefined") event.preventDefault();
					common(event);
					if (typeof input !== "undefined") val = input.value;
					if (typeof fn === "function") {
						if (typeof input !== "undefined") {
							fn(true, val);
						}
						else fn(true);
					}
					return false;
				};

				// cancel event handler
				cancel = function (event) {
					if (typeof event.preventDefault !== "undefined") event.preventDefault();
					common(event);
					if (typeof fn === "function") fn(false);
					return false;
				};

				// common event handler (keyup, ok and cancel)
				common = function (event) {
					self.hide();
					self.unbind(document.body, "keyup", key);
					self.unbind(btnReset, "focus", reset);
					if (hasInput) self.unbind(form, "submit", ok);
					if (hasOK) self.unbind(btnOK, "click", ok);
					if (hasCancel) self.unbind(btnCancel, "click", cancel);
				};

				// keyup handler
				key = function (event) {
					var keyCode = event.keyCode;
					if (keyCode === keys.SPACE && !hasInput) ok(event);
					if (keyCode === keys.ESC && hasCancel) cancel(event);
				};

				// reset focus to first item in the dialog
				reset = function (event) {
					if (hasInput) input.focus();
					else if (!hasCancel || self.buttonReverse) btnOK.focus();
					else btnCancel.focus();
				};

				// handle reset focus link
				// this ensures that the keyboard focus does not
				// ever leave the dialog box until an action has
				// been taken
				this.bind(btnReset, "focus", reset);
				// handle OK click
				if (hasOK) this.bind(btnOK, "click", ok);
				// handle Cancel click
				if (hasCancel) this.bind(btnCancel, "click", cancel);
				// listen for keys, Cancel => ESC
				this.bind(document.body, "keyup", key);
				// bind form submit
				if (hasInput) this.bind(form, "submit", ok);
				if (!this.transition.supported) {
					this.setFocus();
				}
			},

			/**
			 * Bind events to elements
			 *
			 * @param  {Object}   el       HTML Object
			 * @param  {Event}    event    Event to attach to element
			 * @param  {Function} fn       Callback function
			 *
			 * @return {undefined}
			 */
			bind : function (el, event, fn) {
				if (typeof el.addEventListener === "function") {
					el.addEventListener(event, fn, false);
				} else if (el.attachEvent) {
					el.attachEvent("on" + event, fn);
				}
			},

			/**
			 * Use alertify as the global error handler (using window.onerror)
			 *
			 * @return {boolean} success
			 */
			handleErrors : function () {
				if (typeof global.onerror !== "undefined") {
					var self = this;
					global.onerror = function (msg, url, line) {
						self.error("[" + msg + " on line " + line + " of " + url + "]", 0);
					};
					return true;
				} else {
					return false;
				}
			},

			/**
			 * Append button HTML strings
			 *
			 * @param {String} secondary    The secondary button HTML string
			 * @param {String} primary      The primary button HTML string
			 *
			 * @return {String}             The appended button HTML strings
			 */
			appendButtons : function (secondary, primary) {
				return this.buttonReverse ? primary + secondary : secondary + primary;
			},

			/**
			 * Build the proper message box
			 *
			 * @param  {Object} item    Current object in the queue
			 *
			 * @return {String}         An HTML string of the message box
			 */
			build : function (item) {
				var html    = "",
				    type    = item.type,
				    message = item.message,
				    css     = item.cssClass || "";

				html += "<div class=\"alertify-dialog\">";

				if (_alertify.buttonFocus === "none") html += "<a href=\"#\" id=\"alertify-noneFocus\" class=\"alertify-hidden\"></a>";

				if (type === "prompt") html += "<form id=\"alertify-form\">";

				html += "<article class=\"alertify-inner\">";
				html += dialogs.message.replace("{{message}}", message);

				if (type === "prompt") html += dialogs.input;

				html += dialogs.buttons.holder;
				html += "</article>";

				if (type === "prompt") html += "</form>";

				html += "<a id=\"alertify-resetFocus\" class=\"alertify-resetFocus\" href=\"#\">Reset Focus</a>";
				html += "</div>";

				switch (type) {
				case "confirm":
					html = html.replace("{{buttons}}", this.appendButtons(dialogs.buttons.cancel, dialogs.buttons.ok));
					html = html.replace("{{ok}}", this.labels.ok).replace("{{cancel}}", this.labels.cancel);
					break;
				case "prompt":
					html = html.replace("{{buttons}}", this.appendButtons(dialogs.buttons.cancel, dialogs.buttons.submit));
					html = html.replace("{{ok}}", this.labels.ok).replace("{{cancel}}", this.labels.cancel);
					break;
				case "alert":
					html = html.replace("{{buttons}}", dialogs.buttons.ok);
					html = html.replace("{{ok}}", this.labels.ok);
					break;
				default:
					break;
				}

				elDialog.className = "alertify alertify-" + type + " " + css;
				elCover.className  = "alertify-cover";
				return html;
			},

			/**
			 * Close the log messages
			 *
			 * @param  {Object} elem    HTML Element of log message to close
			 * @param  {Number} wait    [optional] Time (in ms) to wait before automatically hiding the message, if 0 never hide
			 *
			 * @return {undefined}
			 */
			close : function (elem, wait) {
				// Unary Plus: +"2" === 2
				var timer = (wait && !isNaN(wait)) ? +wait : this.delay,
				    self  = this,
				    hideElement, transitionDone;

				// set click event on log messages
				this.bind(elem, "click", function () {
					hideElement(elem);
				});
				// Hide the dialog box after transition
				// This ensure it doens't block any element from being clicked
				transitionDone = function (event) {
					event.stopPropagation();
					// unbind event so function only gets called once
					self.unbind(this, self.transition.type, transitionDone);
					// remove log message
					elLog.removeChild(this);
					if (!elLog.hasChildNodes()) elLog.className += " alertify-logs-hidden";
				};
				// this sets the hide class to transition out
				// or removes the child if css transitions aren't supported
				hideElement = function (el) {
					// ensure element exists
					if (typeof el !== "undefined" && el.parentNode === elLog) {
						// whether CSS transition exists
						if (self.transition.supported) {
							self.bind(el, self.transition.type, transitionDone);
							el.className += " alertify-log-hide";
						} else {
							elLog.removeChild(el);
							if (!elLog.hasChildNodes()) elLog.className += " alertify-logs-hidden";
						}
					}
				};
				// never close (until click) if wait is set to 0
				if (wait === 0) return;
				// set timeout to auto close the log message
				setTimeout(function () { hideElement(elem); }, timer);
			},

			/**
			 * Create a dialog box
			 *
			 * @param  {String}   message        The message passed from the callee
			 * @param  {String}   type           Type of dialog to create
			 * @param  {Function} fn             [Optional] Callback function
			 * @param  {String}   placeholder    [Optional] Default value for prompt input field
			 * @param  {String}   cssClass       [Optional] Class(es) to append to dialog box
			 *
			 * @return {Object}
			 */
			dialog : function (message, type, fn, placeholder, cssClass) {
				// set the current active element
				// this allows the keyboard focus to be resetted
				// after the dialog box is closed
				elCallee = document.activeElement;
				// check to ensure the alertify dialog element
				// has been successfully created
				var check = function () {
					if ((elLog && elLog.scrollTop !== null) && (elCover && elCover.scrollTop !== null)) return;
					else check();
				};
				// error catching
				if (typeof message !== "string") throw new Error("message must be a string");
				if (typeof type !== "string") throw new Error("type must be a string");
				if (typeof fn !== "undefined" && typeof fn !== "function") throw new Error("fn must be a function");
				// initialize alertify if it hasn't already been done
				if (typeof this.init === "function") {
					this.init();
					check();
				}

				queue.push({ type: type, message: message, callback: fn, placeholder: placeholder, cssClass: cssClass });
				if (!isopen) this.setup();

				return this;
			},

			/**
			 * Extend the log method to create custom methods
			 *
			 * @param  {String} type    Custom method name
			 *
			 * @return {Function}
			 */
			extend : function (type) {
				if (typeof type !== "string") throw new Error("extend method must have exactly one paramter");
				return function (message, wait) {
					this.log(message, type, wait);
					return this;
				};
			},

			/**
			 * Hide the dialog and rest to defaults
			 *
			 * @return {undefined}
			 */
			hide : function () {
				var transitionDone,
				    self = this;
				// remove reference from queue
				queue.splice(0,1);
				// if items remaining in the queue
				if (queue.length > 0) this.setup(true);
				else {
					isopen = false;
					// Hide the dialog box after transition
					// This ensure it doens't block any element from being clicked
					transitionDone = function (event) {
						event.stopPropagation();
						elDialog.className += " alertify-isHidden";
						// unbind event so function only gets called once
						self.unbind(elDialog, self.transition.type, transitionDone);
					};
					// whether CSS transition exists
					if (this.transition.supported) {
						this.bind(elDialog, this.transition.type, transitionDone);
						elDialog.className = "alertify alertify-hide alertify-hidden";
					} else {
						elDialog.className = "alertify alertify-hide alertify-hidden alertify-isHidden";
					}
					elCover.className  = "alertify-cover alertify-cover-hidden";
					// set focus to the last element or body
					// after the dialog is closed
					elCallee.focus();
				}
			},

			/**
			 * Initialize Alertify
			 * Create the 2 main elements
			 *
			 * @return {undefined}
			 */
			init : function () {
				// ensure legacy browsers support html5 tags
				document.createElement("nav");
				document.createElement("article");
				document.createElement("section");
				// cover
				elCover = document.createElement("div");
				elCover.setAttribute("id", "alertify-cover");
				elCover.className = "alertify-cover alertify-cover-hidden";
				document.body.appendChild(elCover);
				// main element
				elDialog = document.createElement("section");
				elDialog.setAttribute("id", "alertify");
				elDialog.className = "alertify alertify-hidden";
				document.body.appendChild(elDialog);
				// log element
				elLog = document.createElement("section");
				elLog.setAttribute("id", "alertify-logs");
				elLog.className = "alertify-logs alertify-logs-hidden";
				document.body.appendChild(elLog);
				// set tabindex attribute on body element
				// this allows script to give it focus
				// after the dialog is closed
				document.body.setAttribute("tabindex", "0");
				// set transition type
				this.transition = getTransitionEvent();
				// clean up init method
				delete this.init;
			},

			/**
			 * Show a new log message box
			 *
			 * @param  {String} message    The message passed from the callee
			 * @param  {String} type       [Optional] Optional type of log message
			 * @param  {Number} wait       [Optional] Time (in ms) to wait before auto-hiding the log
			 *
			 * @return {Object}
			 */
			log : function (message, type, wait) {
				// check to ensure the alertify dialog element
				// has been successfully created
				var check = function () {
					if (elLog && elLog.scrollTop !== null) return;
					else check();
				};
				// initialize alertify if it hasn't already been done
				if (typeof this.init === "function") {
					this.init();
					check();
				}
				elLog.className = "alertify-logs";
				this.notify(message, type, wait);
				return this;
			},

			/**
			 * Add new log message
			 * If a type is passed, a class name "alertify-log-{type}" will get added.
			 * This allows for custom look and feel for various types of notifications.
			 *
			 * @param  {String} message    The message passed from the callee
			 * @param  {String} type       [Optional] Type of log message
			 * @param  {Number} wait       [Optional] Time (in ms) to wait before auto-hiding
			 *
			 * @return {undefined}
			 */
			notify : function (message, type, wait) {
				var log = document.createElement("article");
				log.className = "alertify-log" + ((typeof type === "string" && type !== "") ? " alertify-log-" + type : "");
				log.innerHTML = message;
				// append child
				elLog.appendChild(log);
				// triggers the CSS animation
				setTimeout(function() { log.className = log.className + " alertify-log-show"; }, 50);
				this.close(log, wait);
			},

			/**
			 * Set properties
			 *
			 * @param {Object} args     Passing parameters
			 *
			 * @return {undefined}
			 */
			set : function (args) {
				var k;
				// error catching
				if (typeof args !== "object" && args instanceof Array) throw new Error("args must be an object");
				// set parameters
				for (k in args) {
					if (args.hasOwnProperty(k)) {
						this[k] = args[k];
					}
				}
			},

			/**
			 * Common place to set focus to proper element
			 *
			 * @return {undefined}
			 */
			setFocus : function () {
				if (input) {
					input.focus();
					input.select();
				}
				else btnFocus.focus();
			},

			/**
			 * Initiate all the required pieces for the dialog box
			 *
			 * @return {undefined}
			 */
			setup : function (fromQueue) {
				var item = queue[0],
				    self = this,
				    transitionDone;

				// dialog is open
				isopen = true;
				// Set button focus after transition
				transitionDone = function (event) {
					event.stopPropagation();
					self.setFocus();
					// unbind event so function only gets called once
					self.unbind(elDialog, self.transition.type, transitionDone);
				};
				// whether CSS transition exists
				if (this.transition.supported && !fromQueue) {
					this.bind(elDialog, this.transition.type, transitionDone);
				}
				// build the proper dialog HTML
				elDialog.innerHTML = this.build(item);
				// assign all the common elements
				btnReset  = $("alertify-resetFocus");
				btnOK     = $("alertify-ok")     || undefined;
				btnCancel = $("alertify-cancel") || undefined;
				btnFocus  = (_alertify.buttonFocus === "cancel") ? btnCancel : ((_alertify.buttonFocus === "none") ? $("alertify-noneFocus") : btnOK),
				input     = $("alertify-text")   || undefined;
				form      = $("alertify-form")   || undefined;
				// add placeholder value to the input field
				if (typeof item.placeholder === "string" && item.placeholder !== "") input.value = item.placeholder;
				if (fromQueue) this.setFocus();
				this.addListeners(item.callback);
			},

			/**
			 * Unbind events to elements
			 *
			 * @param  {Object}   el       HTML Object
			 * @param  {Event}    event    Event to detach to element
			 * @param  {Function} fn       Callback function
			 *
			 * @return {undefined}
			 */
			unbind : function (el, event, fn) {
				if (typeof el.removeEventListener === "function") {
					el.removeEventListener(event, fn, false);
				} else if (el.detachEvent) {
					el.detachEvent("on" + event, fn);
				}
			}
		};

		return {
			alert   : function (message, fn, cssClass) { _alertify.dialog(message, "alert", fn, "", cssClass); return this; },
			confirm : function (message, fn, cssClass) { _alertify.dialog(message, "confirm", fn, "", cssClass); return this; },
			extend  : _alertify.extend,
			init    : _alertify.init,
			log     : function (message, type, wait) { _alertify.log(message, type, wait); return this; },
			prompt  : function (message, fn, placeholder, cssClass) { _alertify.dialog(message, "prompt", fn, placeholder, cssClass); return this; },
			success : function (message, wait) { _alertify.log(message, "success", wait); return this; },
			error   : function (message, wait) { _alertify.log(message, "error", wait); return this; },
			set     : function (args) { _alertify.set(args); },
			labels  : _alertify.labels,
			debug   : _alertify.handleErrors
		};
	};

	// AMD and window support
	if (typeof define === "function") {
		define([], function () { return new Alertify(); });
	} else if (typeof global.alertify === "undefined") {
		global.alertify = new Alertify();
	}

}(this));

//-----------------------------------------------------------------------------
// Dynamically load the TinyMCE 5 script resource and initialise the editor
// via the function parameter (passed in).
//
// Requires the TinyMCE 'API Key'
//
// 'API Key' should be defined in 'ipad-settings.js' as per below:
//
// Example:
//
//   var TINY_MCE_API_KEY = "ab85typ16g0mvjnw087i0ez2mufm1lacggcz6y1tm45liz5z";
//-----------------------------------------------------------------------------
function LoadTinyMCEResource(TinyMCEInitFn) {
  if ((TinyMCEInitFn == undefined) || (typeof(TinyMCEInitFn) != 'function')) {
    alert("TinyMCE init function not defined on this page !");
  }

  // API Key ('TINY_MCE_API_KEY') should be defined in Custom.js
  var APIKey = VariableNameExists('TINY_MCE_API_KEY') ? TINY_MCE_API_KEY : "";

  if (!isWhitespace(APIKey)) {
    var src = "https://cdn.tiny.cloud/1/"+APIKey+"/tinymce/5/tinymce.min.js";
    var script = document.createElement("script");

    script.setAttribute("src", src);
    script.setAttribute("type", "text/javascript");

    if (document.addEventListener) {
      script.addEventListener("load", function() {
        TinyMCEInitFn();
      }, false);
    }
    else if (document.attachEvent) {
      script.attachEvent('onload', function() {
        TinyMCEInitFn();
      });
    }
    else {
      script.onload = TinyMCEInitFn;
    }

    document.body.appendChild(script);
  }
  else {
    alert("TinyMCE API Key not defined !");
  }
}

function VariableNameExists(VarName) {
  if (VarName == undefined)
    return false;

  if (typeof window[VarName] != "undefined")
    return true;

  return false;
}
