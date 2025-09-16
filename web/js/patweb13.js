//jsVersion  : V11.03.00
//==============================================================================
// Program   : patweb13.js
//
// Written   : 29/03/2012 Patrick Adair
//
// Function  : Standard Functions Used in patweb13
//
// Version
// V10.05.01  30/07/2014 Patrick Adair                                CAR 277093
//            Added Auto Classification Code Maintenance
// V10.03.00  29/03/2012 Patrick Adair                                CAR 257776
//            New - Contains generic scripts for AN-SNAP
//
//==============================================================================
//  Impairment Code Maintenance - server report no 1
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Impairment Code
//------------------------------------------------------------------------------
 function newImpairment(linkurl) {
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,100,Left,600,400)
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update Impairment Code
//------------------------------------------------------------------------------
 function ImpDetails(ImpairmentCode) {
   LinkForm.pmimp001.value=ImpairmentCode
   Left=(document.body.clientWidth-700)/2
   DFrameSubmit(LinkForm,50,Left,700,400)
 }
//------------------------------------------------------------------------------
// Function : Generate Impairment Code keywords
//------------------------------------------------------------------------------
 function GenerateICIKeyword() {
   if(confirm("Generate New Impairment Code Keyword Table")) {
      document.GenerateForm.submit(); }
 }
//------------------------------------------------------------------------------
// Function : Edit Impairment Code (from header)
//------------------------------------------------------------------------------
 function editImpairment() {
   var Message="Enter an Impairment Code";
   if (isWhitespace(SelectCode.startkey.value)) {
       alert(Message);
       return;
    }
   SelectCode.template.value=3
   SelectCode.pmimp001.value=SelectCode.startkey.value
   Left=(document.body.clientWidth-550)/2
   DFrameSubmit(SelectCode,0,Left,550,320)
 }
//------------------------------------------------------------------------------
// Function : Set Date Mandatory field and tabindex based on active/inactive 
//            check box setting
//------------------------------------------------------------------------------
 function ImpairmentCodeActive(theForm) {
   if (theForm.d_pmimp003.checked==true) {
       theForm.pmimp004.className="Mandatory";
       theForm.pmimp005.className="Readonly";
       theForm.pmimp005.readOnly=true;
       theForm.pmimp004.readOnly=false;
       theForm.pmimp004.tabIndex="3";
       theForm.pmimp005.tabIndex="-1";
   }
   else {
       theForm.pmimp005.className="Mandatory";
       theForm.pmimp004.className="Readonly";
       theForm.pmimp004.readOnly=true;
       theForm.pmimp005.readOnly=false;
       theForm.pmimp004.tabIndex="-1";
       theForm.pmimp005.tabIndex="3";
   }
 }
//
//==============================================================================
//  Classification Code Maintenance - server report no 3
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Classification Code
//------------------------------------------------------------------------------
 function newClassCode(linkurl) {
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,100,Left,600,400)
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update Classification Code
//------------------------------------------------------------------------------
 function ClassDetails(ANSNAPClassCode,ANSNAPVers) {
   LinkForm.pmsnp001.value=ANSNAPClassCode
   LinkForm.pmsnp002.value=ANSNAPVers
   Left=(document.body.clientWidth-700)/2
   DFrameSubmit(LinkForm,50,Left,700,400)
 }
//------------------------------------------------------------------------------
// Function : Generate Classification Code keywords
//------------------------------------------------------------------------------
 function GenerateSNIKeyword() {
   if(confirm("Generate New ANSNAP Class Code Keyword Table")) {
     document.GenerateForm.submit(); }
 }
//------------------------------------------------------------------------------
// Function : Set Date Mandatory field and tabindex based on active/inactive
//            check box setting
//------------------------------------------------------------------------------
 function ClassCodeActive(theForm) {
   if (theForm.d_pmsnp005.checked==true) {
       theForm.pmsnp006.className="Mandatory";
       theForm.pmsnp006.readOnly=false;
       theForm.pmsnp007.className="Readonly";
       theForm.pmsnp007.readOnly=true;
       theForm.pmsnp006.tabIndex="6";
       theForm.pmsnp007.tabIndex="-1";
   }
   else {
       theForm.pmsnp006.className="Readonly";
       theForm.pmsnp006.readOnly=true;
       theForm.pmsnp007.className="Mandatory";
       theForm.pmsnp007.readOnly=false;
       theForm.pmsnp007.tabIndex="6";
       theForm.pmsnp006.tabIndex="-1";
   }
 }
//
//==============================================================================
//  Motor Assessment Scale Maintenance - server report no 4
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Motor Assessment Scale
//------------------------------------------------------------------------------
 function newMotAss() {
   var LinkUrl="patweb13.pbl?reportno=04&template=002&urnumber=" +
          document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+");
   var Left=(document.body.clientWidth-800)/2;
   DFrameLink(LinkUrl,75,Left,800,450);
 }
//-----------------------------------------------------------------------------
// Function : Navigate to Update Motor Assessment Scale
//------------------------------------------------------------------------------
 function MotAssDetails(maVisno,maDate,maTime) {
   var LinkUrl="patweb13.pbl?reportno=04&template=003&urnumber=" +
          document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + maVisno.replace(/ /g,"+") +
          "&pmmot002=" + maDate.replace(/ /g,"+") +
          "&pmmot003=" + maTime.replace(/ /g,"+");
   var Left=(document.body.clientWidth-800)/2;
   DFrameLink(LinkUrl,75,Left,800,450);
 }
//------------------------------------------------------------------------------
// Function : Motor Assessment Scale Clinical Document Layout
//------------------------------------------------------------------------------
 function MASSDocument(theForm) {
  // Patient Header
  DocumentHTML="<title>Motor Assessment Scale</title>\n"
  DoPatientHeader(theForm);
  // Document Header
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr><td align=left class=HeadingRow>\n" +
           "<br />Motor Assessment Scale<br /><br /></td></tr>\n" +
  "</table>\n" +
  "<table align=center width=100%>\n" +
  " <tr valign=top><td width=20%><b>" +
                 document.getElementById('title001').innerText + "</b></td>\n" +
  "     <td>" + theForm.pmmot002.value +
            "&nbsp;&nbsp;<b>" + document.getElementById('title002').innerText +
            "</b>&nbsp;&nbsp;" + theForm.pmmot003.value + "</td></tr>\n" +
  "</table>\n"
  // Document Detail Heading
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr><td width=20%>&nbsp</td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title003').innerText + "</b></td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title004').innerText + "</b></td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title005').innerText + "</b></td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title006').innerText + "</b></td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title007').innerText + "</b></td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title008').innerText + "</b></td>\n" +
  "     <td width=2% align=center><b>" +
            document.getElementById('title009').innerText + "</b></td>\n" +
  "     <td>&nbsp</td></tr>\n"
  // Set Selected Radio Button for pmmot004
  DocumentHTML+=" <tr valign=top><td width=20%><b>" +
            document.getElementById('title010').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot004.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot004[i].checked) {
       chosen = document.AddForm.pmmot004[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot005
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title011').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot005.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot005[i].checked) {
       chosen = document.AddForm.pmmot005[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot006
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title012').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot006.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot006[i].checked) {
       chosen = document.AddForm.pmmot006[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot007
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title013').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot007.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot007[i].checked) {
       chosen = document.AddForm.pmmot007[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot008
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title014').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot008.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot008[i].checked) {
       chosen = document.AddForm.pmmot008[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot009
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title015').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot009.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot009[i].checked) {
       chosen = document.AddForm.pmmot009[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot010
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title016').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot010.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot010[i].checked) {
       chosen = document.AddForm.pmmot010[i].value }
  }
  SetRadioButton();
  //  Set Selected Radio Button for pmmot011
  DocumentHTML+=" <tr valign=top><td><b>" +
            document.getElementById('title017').innerText + "</b></td>\n"
  chosen = ""
  len = document.AddForm.pmmot011.length
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmot011[i].checked) {
       chosen = document.AddForm.pmmot011[i].value }
  }
  SetRadioButton();
  // Comments
  DocumentHTML+=  "</table>\n" +
  "<table align=center width=100%>\n" +
  " <tr valign=top><td width=20%><b>" +
            document.getElementById('title018').innerText + "</b></td>\n" +
  "     <td><textarea rows=5 cols=65 wrap=hard>"
            + theForm.vsamc001.value + "</textarea></td>\n" +
  "</table>\n"
  // Finalise Document
  DocumentHTML+="</body>"
  return(DocumentHTML)
 }
//------------------------------------------------------------------------------
// Function : Set selected radio button as checked on Clinical Document
//------------------------------------------------------------------------------
 function SetRadioButton() {
  if ( chosen == "0"){
     DocumentHTML+="     <td><input type=radio checked /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td></tr>\n"
  }
  if ( chosen == "1"){
     DocumentHTML+="     <td><input type=radio /></td>\n" +
     "     <td><input type=radio checked /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td></tr>\n"
  }
  if ( chosen == "2"){
     DocumentHTML+="     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio checked /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td></tr>\n"
  }
  if ( chosen == "3"){
     DocumentHTML+="     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio checked /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td></tr>\n"
  }
  if ( chosen == "4"){
     DocumentHTML+="     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio checked /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td></tr>\n"
  }
  if ( chosen == "5"){
     DocumentHTML+="     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio checked /></td>\n" +
     "     <td><input type=radio /></td></tr>\n"
  }
  if ( chosen == "6"){
     DocumentHTML+="     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio /></td>\n" +
     "     <td><input type=radio checked /></td></tr>\n"
  }
 }
//
//==============================================================================
//  Mini Mental State Examination - server report no 5
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add New Mini Mental State Examination
//------------------------------------------------------------------------------
 function newMMSExam() {
  var LinkUrl="patweb13.pbl?reportno=05&template=002&urnumber=" +
         document.PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+");
  var Left=(document.body.clientWidth-1000)/2;
  DFrameLink(LinkUrl,75,Left,1000,650);
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update New Mini Mental State Examination
//------------------------------------------------------------------------------
 function MMSExamDetails(maVisno,maDate,maTime) {
  var LinkUrl="patweb13.pbl?reportno=05&template=003&urnumber=" +
         document.PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno=" + maVisno.replace(/ /g,"+") +
         "&pmmms002=" + maDate.replace(/ /g,"+") +
         "&pmmms003=" + maTime.replace(/ /g,"+");
  var Left=(document.body.clientWidth-1000)/2;
  DFrameLink(LinkUrl,75,Left,1000,650);
 }
//------------------------------------------------------------------------------
// Function : Calculate  Mini Mental State Examination Total Score
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
// Function : Show  Mini Mental State ExaminationE Notes Page in a Content Pop up
//------------------------------------------------------------------------------
 function DispNotes(DispNotes) {
    var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame');
        PopUpFrame.location.href = "../lookups/" + DispNotes + ".html";

    var PopUpScreen = document.getElementById('PopUpScreen');
    var PatientMenu = document.getElementById('PatientMenu');
    var h;
    var left = document.body.clientWidth - 370 ;

    if (PatientMenu) {
        h = document.body.clientHeight - 25 -
            PatientMenu.offsetTop - PatientMenu.offsetHeight;
    }
    else {
        h = document.body.clientHeight - 25;
    }
    PopUpScreen.style.top     = document.body.scrollTop + 'px';
    PopUpScreen.style.left    = left + 'px';
    PopUpScreen.style.height  = h + 'px';
    PopUpScreen.style.width   = '350px';
    PopUpScreen.style.display = "";
 }
//------------------------------------------------------------------------------
// Function : Mini Mental State Examination Clinical Document Layout
//------------------------------------------------------------------------------
 function MMSEDocument(theForm) {
  // Patient Header
  DocumentHTML="<title>Mini Mental State Examination</title>\n"
  DoPatientHeader(theForm);
  // Document Header
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr><td align=left class=HeadingRow>\n" +
          "<br />Mini Mental State Examination<br /><br /></td></tr>\n" +
  "</table>\n" +
  "<table align=center width=100%>\n" +
  " <tr valign=top><td width=20%><b>" +
                 document.getElementById('title001').innerText + "</b></td>\n" +
  "     <td>" + theForm.pmmms002.value +
            "&nbsp;&nbsp;<b>" + document.getElementById('title002').innerText +
            "</b>&nbsp;&nbsp;" + theForm.pmmms003.value + "</td></tr>\n" +
  "</table>\n"
  // Main Document - Orientation
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr colspan=4 width=60%><td><b>" +
            document.getElementById('title003').innerText + "</b></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0301').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0302').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms004.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0303').innerText + "</i></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0304').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0305').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms005.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
           document.getElementById('subt0306').innerText + "<\i></td></tr>\n" +
  " <tr><td colspan=4 align=center><hr /></td></tr>\n"
  // Main Document - Registration
  DocumentHTML+=" <tr colspan=4><td><b>" +
            document.getElementById('title004').innerText + "</b></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0401').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0402').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms006.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0403').innerText + "</i></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0404').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0405').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms007.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0406').innerText + "</i></td></tr>\n" +
  " <tr><td colspan=4 align=center><hr /></td></tr>\n"
  // Main Document - Attention and Calculation
  DocumentHTML+=" <tr colspan=4><td><b>" +
            document.getElementById('title005').innerText + "</b></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0501').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0502').innerText + "</td>\n" +
  "     <td width=5% rowspan=5 align=right><b>"+
            theForm.pmmms008.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0503').innerText + "</i></td></tr>\n" +
  " <tr><td colspan=2>" +
            document.getElementById('subt0504').innerText + "</td></tr>\n" +
  " <tr><td colspan=2>" +
            document.getElementById('subt0505').innerText + "</td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0506').innerText + "</i></td></tr>\n" +
  " <tr><td colspan=4 align=center><hr /></td></tr>\n"
  // Main Document - Recall
  DocumentHTML+=" <tr colspan=4><td><b>" +
            document.getElementById('title006').innerText + "</b></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0601').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0602').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms009.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0603').innerText + "</i></td></tr>\n" +
  " <tr><td colspan=4 align=center><hr /></td></tr>\n"
  // Main Document - Language
  DocumentHTML+=" <tr colspan=4><td><b>" +
            document.getElementById('title007').innerText + "</b></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0701').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0702').innerText + "</td>\n" +
  "     <td width=5% rowspan=3 align=right><b>"+
            theForm.pmmms010.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0703').innerText + "</i></td></tr>\n" +
  " <tr><td colspan=2>" +
            document.getElementById('subt0704').innerText + "</td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0705').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0706').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms011.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0707').innerText + "</i></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0708').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0709').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms012.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0710').innerText + "</i></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0711').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0712').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms013.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0713').innerText + "</i></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0714').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0715').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms014.value + "</b></td></tr>\n" +
  " <tr><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" +
            document.getElementById('subt0716').innerText + "</i></td></tr>\n" +
  " <tr valign=top><td colspan=2>" +
            document.getElementById('subt0717').innerText + "</td>\n" +
  "     <td width=10% align=right>" +
            document.getElementById('subt0718').innerText + "</td>\n" +
  "     <td width=5% rowspan=2 align=right><b>"+
            theForm.pmmms015.value + "</b></td></tr>\n" +
  " <tr valign=top><td width=5%>&nbsp;</td>\n" +
  "     <td><i>" + document.getElementById('subt0719').innerText +
  "         </i><img src=../images/pmsmms.gif class=Icon /></td></tr>\n" +
  " <tr><td colspan=4 align=center><hr /></td></tr>\n" +
  " <tr><td colspan=3 align=right><b>" +
                 document.getElementById('title020').innerText + "</b></td>\n" +
  "     <td align=right><b>" + theForm.totalScore.value + "</b></td></tr>\n" +
  " <tr><td colspan=4 align=center><hr /></td></tr>\n" +
  "</table>\n"
  // Radio Buttons
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr valign=top><td width=30%><b>" +
                 document.getElementById('title021').innerText + "</b></td>\n"
  // Set Selected radio button
  chosen = "";
  len = document.AddForm.pmmms016.length;
  for (i = 0; i <len; i++) {
    if (document.AddForm.pmmms016[i].checked) {
       chosen = document.AddForm.pmmms016[i].value; }
  }
  if ( chosen == "0"){
     DocumentHTML+="     <td width=5%><input type=radio checked /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0211').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0212').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0213').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0214').innerText + "</td>\n"
  }
  if ( chosen == "1"){
     DocumentHTML+="     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0211').innerText + "</td>\n" +
     "     <td width=5%><input type=radio checked /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0212').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0213').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0214').innerText + "</td>\n"
  }
  if ( chosen == "2"){
     DocumentHTML+="     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0211').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0212').innerText + "</td>\n" +
     "     <td width=5%><input type=radio checked /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0213').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0214').innerText + "</td>\n"
  }
  if ( chosen == "3"){
     DocumentHTML+="     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0211').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0212').innerText + "</td>\n" +
     "     <td width=5%><input type=radio /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0213').innerText + "</td>\n" +
     "     <td width=5%><input type=radio checked /></td>\n" +
     "     <td width=5%>" +
                document.getElementById('text0214').innerText + "</td>\n"
  }
  DocumentHTML+="     <td>&nbsp;</td></tr>\n" +
  " <tr><td colspan=10 align=center><hr /></td></tr>\n" +
  "</table>\n"
  // Add Notes to Document
  DocumentHTML+="<table align=center width=100% border=0>\n" +
  "<tr><td>&nbsp;</td></tr>\n<tr><td>\n" +
  "<p><strong>Notes on Delivery of the MMSE</strong><br />\n" +
  "The test was originally developed for Western Cultures and thus needs " +
  "careful augmentation for non-Western societies e.g. the statement " +
  "\"close your eyes\" signifies death in the Chinese culture.\n" +
  " The age and level of education of the subject will also influence the\n" +
  " test results. For example, a person with &lt;= 4 years of schooling and\n" +
  " normal cognitive function is only expected to score 22. \n" +
  "In general, scoring indications for the MMSE are as follows </br />\n" +
  "<ul><li>24-30 - normal limits of cognition</li>\n" +
  "<li>18-23 - mild to moderate cognitive impairment</li>\n" +
  "<li>&nbsp;0-17  - severe cognitive impairment</li></ul></p>\n" +
  "<p><strong>Orientation</strong><br />\n" +
  "Ask for the date first. Then ask specifically for the parts omitted e.g." +
  "\"Can you also tell me what the season is?\"</p>\n" +
  "<p><strong>Registration</strong><br />\n" +
  "Ask the patient if you may test his or her memory. Say the names of \n" +
  "three unrelated objects, clearly and slowly, allowing about one second \n" +
  "for each one.  Once you have said all three, ask the subject to repeat \n" +
  "them.  The first attempt is used to determine the score (0-3), but keep \n" +
  "saying them until the patient can repeat all three - up to six trials.  \n" +
  "If the subject does not eventually learn all three, then recall cannot \n" +
  "be meaningfully tested.</p>\n" +
  "<p><strong>Attention and Calculation</strong><br />\n" +
  "If the patient cannot or will not count backwards from 100, ask him/her \n" +
  "to spell the word \"world\" backwards.  The score is the number of \n" +
  "letters in the correct order. e.g. dlrow=5 drlow=3</p>\n" +
  "<p><strong>Language</strong><br />\n" +
  "<i>Writing.</i> Give the subject a piece of paper and ask him/her to \n" +
  "write a sentence. Do not dictate the sentence: it should be written \n" +
  "spontaneously.  It must contain a noun and a verb and be sensible. \n" +
  "Grammar and punctuation are not needed.<br />\n" +
  "<i>Copying.</i> On a clean piece of paper, draw two intersecting \n" +
  "pentagons each side 2-3 cm long.  Ask the patient to copy it exactly.  \n" +
  "All 10 angles must be present and two must intersect to record a positive \n" +
  "response. Tremor and rotation are ignored.</p></td></tr>\n" +
  "</table>\n"
  // Finalise Document
  DocumentHTML+="</body>"
  return(DocumentHTML)
 }
//
//==============================================================================
//  Modified Elderly Mobility Scale - server report no 6
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Modified Elderly Mobility Scale
//------------------------------------------------------------------------------
 function newMEMScale() {
   var LinkUrl="patweb13.pbl?reportno=06&template=002&urnumber=" +
          document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+");
   var Left=(document.body.clientWidth-800)/2;
   DFrameLink(LinkUrl,75,Left,800,650);
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update Modified Elderly Mobility Scale
//------------------------------------------------------------------------------
 function MEMScaleDetails(maVisno,maDate,maTime) {
   var LinkUrl="patweb13.pbl?reportno=06&template=003&urnumber=" +
          document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + maVisno.replace(/ /g,"+") +
          "&pmems002=" + maDate.replace(/ /g,"+") +
          "&pmems003=" + maTime.replace(/ /g,"+");
   var Left=(document.body.clientWidth-800)/2;
   DFrameLink(LinkUrl,75,Left,800,600);
 }
//------------------------------------------------------------------------------
// Function : Calculate  Modified Elderly Mobility Scale Total Score
//------------------------------------------------------------------------------
 function calcMEMSScore(theForm) {
    theForm.totalScore.value =
       (theForm.pmems004.value -0) + (theForm.pmems005.value -0) +
       (theForm.pmems006.value -0) + (theForm.pmems007.value -0) +
       (theForm.pmems008.value -0) + (theForm.pmems009.value -0) +
       (theForm.pmems010.value -0) + (theForm.pmems011.value -0);
 }
//------------------------------------------------------------------------------
// Function : Modified Elderly Mobility Scale Clinical Document Layout
//------------------------------------------------------------------------------
 function MEMSDocument(theForm) {
  DocumentHTML="<title>Modified Elderly Mobility Scale</title>\n"
  DoPatientHeader(theForm);
  // Document Header
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr><td align=left class=HeadingRow>\n" +
          "<br />Modified Elderly Mobility Scale<br /><br /></td></tr>\n" +
  "</table>\n" +
  "<table align=center width=100%>\n" +
  " <tr valign=top><td width=25%><b>" +
                 document.getElementById('title001').innerText + "</b></td>\n" +
  "     <td>" + theForm.pmems002.value +
            "&nbsp;&nbsp;<b>" + document.getElementById('title002').innerText +
            "</b>&nbsp;&nbsp;" + theForm.pmems003.value + "</td></tr>\n" +
  "</table>\n"
  // Document Detail
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr valign=top><td width=25%><b>" +
                 document.getElementById('title003').innerText + "</b></td>\n" +
  "     <td width=5% align=left><b>" + theForm.pmems004.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0031').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0032').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0033').innerText + "</li>\n" +
  "</ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title004').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems005.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0041').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0042').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0043').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title005').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems006.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0051').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0052').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0053').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0054').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title006').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems007.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0061').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0062').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0063').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0064').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title007').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems008.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0071').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0072').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0073').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0074').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title008').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems009.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0081').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0082').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0083').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0084').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title009').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems010.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0091').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0092').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0093').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title010').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems011.value + "</b></td>\n" +
  "     <td><ul style=\"list-style: none;padding:0;margin:0\">\n" +
  "          <li>" + document.getElementById('text0101').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0102').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0103').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0104').innerText + "</li>\n" +
  "         </ul></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title011').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.totalScore.value + "</b></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title012').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmems012.value + "</b></td>\n" +
  "     <td>" + document.getElementById('text0121').innerText + "\n" +
  "         </td></tr>\n" +
  "</table>\n"
  // Finalise Document
  DocumentHTML+= "</body>"
  return(DocumentHTML)
 }
//
//==============================================================================
//  Lawtons Assessment of Daily Living - server report no 7
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Lawtons Assessment of Daily Living
//------------------------------------------------------------------------------
 function newLADL() {
   var LinkUrl="patweb13.pbl?reportno=07&template=002&urnumber=" +
          document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+");
   var Left=(document.body.clientWidth-800)/2;
   DFrameLink(LinkUrl,75,Left,800,650);
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update Lawtons Assessment of Daily Living
//------------------------------------------------------------------------------
 function LADLDetails(maVisno,maDate,maTime) {
   var LinkUrl="patweb13.pbl?reportno=07&template=003&urnumber=" +
          document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + maVisno.replace(/ /g,"+") +
          "&pmlad002=" + maDate.replace(/ /g,"+") +
          "&pmlad003=" + maTime.replace(/ /g,"+");
   var Left=(document.body.clientWidth-800)/2;
   DFrameLink(LinkUrl,75,Left,800,600);
 }
//------------------------------------------------------------------------------
// Function : Calculate Lawtons Assessment of Daily Living Total Score
//------------------------------------------------------------------------------
 function calcLADLScore(theForm) {
    theForm.totalScore.value =
       (theForm.pmlad004.value -0) + (theForm.pmlad005.value -0) +
       (theForm.pmlad006.value -0) + (theForm.pmlad007.value -0) +
       (theForm.pmlad008.value -0) + (theForm.pmlad009.value -0) +
       (theForm.pmlad010.value -0) + (theForm.pmlad011.value -0);
 }
//------------------------------------------------------------------------------
// Function : Lawtons Assessment of Daily Living Clinical Document Layout
//------------------------------------------------------------------------------
 function LADLDocument(theForm) {
  // Patient Header
  DocumentHTML="<title>Lawtons Assessment of Daily Living</title>\n"
  DoPatientHeader(theForm);
  // Document Header
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr><td align=left class=HeadingRow>\n" +
          "<br />Lawton\'s Assessment of Daily Living<br /><br /></td></tr>\n" +
  "</table>\n" +
  "<table align=center width=100%>\n" +
  " <tr valign=top><td width=20%><b>" +
                 document.getElementById('title001').innerText + "</b></td>\n" +
  "     <td>" + theForm.pmlad002.value +
            "&nbsp;&nbsp;<b>" + document.getElementById('title002').innerText +
            "</b>&nbsp;&nbsp;" + theForm.pmlad003.value + "</td></tr>\n" +
  "</table>\n"
  // Document Details
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr valign=top><td width=20%><b>" +
                 document.getElementById('title003').innerText + "</b></td>\n" +
  "     <td width=5% align=left><b>" + theForm.pmlad004.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0031').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0032').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0033').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0034').innerText + "</li>\n" +
  "          </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title004').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad005.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0041').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0042').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0043').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0044').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title005').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad006.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0051').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0052').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0053').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0054').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title006').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad007.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0061').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0062').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0063').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0064').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title007').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad008.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0071').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0072').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0073').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0074').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title008').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad009.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0081').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0082').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0083').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0084').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title009').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad010.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0091').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0092').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0093').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title010').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.pmlad011.value + "</b></td>\n" +
  "     <td><ol>\n" +
  "          <li>" + document.getElementById('text0101').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0102').innerText + "</li>\n" +
  "          <li>" + document.getElementById('text0103').innerText + "</li>\n" +
  "         </ol></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  " <tr valign=top><td><b>" +
                 document.getElementById('title011').innerText + "</b></td>\n" +
  "     <td align=left><b>" + theForm.totalScore.value + "</b></td></tr>\n" +
  " <tr><td colspan=3 align=center><hr /></td></tr>\n" +
  "</table>\n"
  // Finalise Document
  DocumentHTML+="</body>"
  return(DocumentHTML)
 }
//
//==============================================================================
//  Auto Classification Code Maintenance - server report no 8
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Auto Classification Code
//------------------------------------------------------------------------------
 function newAutoCCode(linkurl) {
   Left=(document.body.clientWidth-900)/2
   DFrameLink(linkurl,50,Left,900,400)
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update Auto Classification Code
//------------------------------------------------------------------------------
 function autoClassDetails(ClassCode,Vers,ImpCode,Effdte,ActvSts) {
   LinkForm.pmsnc001.value=ClassCode
   LinkForm.pmsnc002.value=Vers
   LinkForm.pmsnc003.value=ImpCode
   LinkForm.pmsnc004.value=Effdte
   Left=(document.body.clientWidth-900)/2
   DFrameSubmit(LinkForm,50,Left,900,400)
 }
//==============================================================================
//  Generic Routines
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Output Standard Clinical Document Header details
//------------------------------------------------------------------------------
 function DoPatientHeader(theForm) {
  DocumentHTML+="<style type=text/css>\n" +
  "body { margin:10; \n" +
  "       font-family: Arial; }\n" +
  "td { font-size:10pt;}\n" +
  "td.HeadingRow  { font-size:12pt; \n" +
  "    font-weight:bold; }\n" +
  "</style>\n" +
  "<body>\n"
  // Company Logo
  DocumentHTML+="<table align=center width=100%>\n" +
  " <tr><td width=150><img height=50 src=../images/logo.png></td></tr>\n" +
  "</table>"
  // Patient Details
  DocumentHTML+="<table style=\"border:1px solid black;\" " +
                " align=center width=100%>\n" +
  " <tr><td>UR:&nbsp;&nbsp;<b>" +
                   theForm.urnumber.value + "</b>&nbsp;&nbsp;" +
           "Visit Number:&nbsp;&nbsp;<b>" +
                   theForm.admissno.value + "</b></td></tr>\n" +
  " <tr><td><b>" + theForm.patname.value + "</b></td></tr>\n" +
  " <tr><td><b>" + theForm.Address1.value + "<br />\n " +
                   theForm.Address2.value + "<br />\n " +
                   theForm.Address3.value + "<br />\n " +
                   theForm.Address4.value + "<br />\n " +
                   theForm.PostCode.value + "</b></td></tr>\n" +
  " <tr><td>Date of Birth:&nbsp;&nbsp;<b>" +
                   theForm.dob.value + "</b>&nbsp;&nbsp;" +
           "Sex:&nbsp;&nbsp;<b>" +
                   theForm.sex.value + "</b>&nbsp;&nbsp;" +
           "Age:&nbsp;&nbsp;<b>" +
                   theForm.age.value + "</b></td></tr>\n" +
  " <tr><td>Indigenous Status:&nbsp;&nbsp;<b>" +
                   theForm.indigtyp.value + "</b></td></tr>\n" +
  " <tr><td><b>Insurance/Health Fund:</b></td></tr>\n" +
  " <tr><td>" + theForm.insurdsc.value + ":&nbsp;&nbsp;" +
                   theForm.insurtyp.value + "</td></tr>\n" +
  " <tr><td>Membership No:&nbsp;&nbsp;" +
                   theForm.insurmem.value + "</td></tr>\n" +
  "</table>\n"
 }
//==============================================================================
//  Impairment Group Maintenance - server report no 9
//==============================================================================
//
//------------------------------------------------------------------------------
// Function : Navigate to Add Impairment Code
//------------------------------------------------------------------------------
 function newImpairmentGrp(linkurl) {
   Left=(document.body.clientWidth-600)/2
   DFrameLink(linkurl,100,Left,600,400)
 }
//------------------------------------------------------------------------------
// Function : Navigate to Update Impairment Code
//------------------------------------------------------------------------------
 function ImpGrpDetails(ImpairmentGrpCode) {
   LinkForm.pmigr001.value=ImpairmentGrpCode
   Left=(document.body.clientWidth-600)/2
   DFrameSubmit(LinkForm,50,Left,600,400)
 }
//------------------------------------------------------------------------------
// Function : Generate Impairment Group keywords
//------------------------------------------------------------------------------
 function GenerateIGIKeyword() {
   if(confirm("Generate New Impairment Group Keyword Table")) {
      document.GenerateForm.submit(); }
 }
//------------------------------------------------------------------------------
// Function : Edit Impairment Group (from header)
//------------------------------------------------------------------------------
 function editImpairmentGrp() {
   var Message="Enter an Impairment Group";
   if (isWhitespace(SelectCode.startkey.value)) {
       alert(Message);
       return;
    }
   SelectCode.template.value=3
   SelectCode.pmigr001.value=SelectCode.startkey.value
   Left=(document.body.clientWidth-600)/2
   DFrameSubmit(SelectCode,0,Left,600,400)
 }
//------------------------------------------------------------------------------
// Function : Check if Ultilising Weighted FIMs for Program Details and Extracts
//------------------------------------------------------------------------------
function chkUseFIMsWgt(){
  if (document.getElementById('ptcnfimw')) {
      if (document.getElementById('ptcnfimw').value == "1") {
        return true;
      }
      else {
        return false;
      }
  }
  else {
      return false;
  }
}
//----------------------------------------------------------------------
// Function : Rounds and formats a number with/without decimal places
//            and will not default the return value to zero if the number
//            value is spaces or not entered
//----------------------------------------------------------------------
function ValdFIMValue(number,decimal){
 if (isWhitespace(number.value)) {
     return;
 }

 RoundNumber(number,decimal);
}

