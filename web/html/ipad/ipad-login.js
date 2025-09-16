//jsVersion  : V11.03.01
//
// Source Code:  ./ipad/ipad-login.js
//
// iPad Login Javascript Code
//
// Modification 
//
// Version    Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V11.03.01  25/01/2023 Don Nguyen    TSK 0893674
//                       Modified receiveMessage() to refresh the screen
//                       accordingly when coming back from a non-patient
//                       MedChart screen; i.e. return to 'Patients' list.
// V11.01.00  04/06/2021 Tony Hui      TSK 0907017
//                       Modified url reference to Dedalus Theme.   
// V10.14.01  29/05/2019 Don Nguyen    TSK 0872140
//                       Added ability to bypass standalone check in
//                       CheckLoginPage(); via custom js variable in
//                       'ipad-settings.js'
// V10.13.01  21.08.2018 B.G.Ackland TSK 0861978
//                       Fix Home Page URL Cookie to end in slash
// V10.06.01  05.08.2015 B.G.Ackland Enhancement
//                       Update Background Images to CSC
// V10.05.03  25.03.2015 B.G.Ackland Enhancement
//                       Aviod Black Screen if ProcessKeyID Cookie Invalid/Corrupted
// V10.05.02  25.07.2014 B.G.Ackland Enhancement
//                       Stop Invalid HomePageURL "<html" from happening.
// V10.05.01  15.07.2014 B.G.Ackland Enhancement
//                       Stop iPhone Login on iPad
// V10.04.05  03.07.2014 B.G.Ackland CAR 289383
//                       Fix DIV/IFRAME for MedChart launch
// V10.04.04  18.06.2014 B.G.Ackland CAR 289383
//                       Fix DIV/IFRAME for MedChart launch
// V10.04.03  18.06.2014 B.G.Ackland CAR-299363
//                       Reset DIV Heights after return from Medchart
// V10.04.02  13.05.2014 B.G.Ackland CAR-299363
//                       Remove trailing whitespace on login URL before adding /
// V10.03.05  02.04.2014 B.G.Ackland CAR-299363
//                       Change code for websec01 META tag removal
// V10.03.04  22.03.2014 B.G.Ackland CAR-
//                       Receive Post Back Message from MedChart fr Refresh
// V10.03.03  24/01/2014 B.G.Ackland CAR-
//                       Remove Display of Username and SSO Key
// V10.03.02  24/07/2013 B.G.Ackland CAR-
//                       Healthscope LDAP Mapped Login
// V10.03.01  01/07/2013 B.G.Ackland CAR-
//                       Healthscope Fix Logout Time
// V10.01.02  06/11/2012 B.G.Ackland CAR-
//                       Healthscope Change for Hospital Name Display
// V10.01.01  16/04/2012 Saroeun Soeur CAR
//                       set cookie to store home url to fix
//                       refresh logout problem.
// V10.01.00  13/04/2012 Version change
// V10.00.00  13/04/2012 Created for Mobility Suite
//
//
//
var theVersion="v11.03";
var logoutTimerID=0;
var whitespace = " \t\n\r";
var winHeight=window.innerHeight;
var winWidth=window.innerWidth;
var ieWidth=document.documentElement.clientWidth;
var ieHeight=document.documentElement.clientHeight;
function receiveMessage(e) {
  if (window.removeEventListener) {
    removeEventListener("message", receiveMessage, false);
  } else {
    detachEvent("onmessage", receiveMessage);
  }

  if (navigator.userAgent.match(/iPad/i)) {
    window.top.document.getElementById("viewport").setAttribute('content',
    'user-scalable=no, initial-scale = 1.0 , minimum-scale = 1.0, maximum-scale = 1.0');
  }

  var medScreen=document.getElementById("medScreen");  // Hide MedChart Frame
  medScreen.style.display = "none";
  medScreen.innerHTML= "";

  var patFrame=top.document.getElementById("patFrame");

  if (patFrame && patFrame.contentWindow.location.href.indexOf("urnumber")!=-1){
    var patScreen=top.document.getElementById("patScreen");
    patScreen.style.display='';  // Show Patient Frame
    top.frames["PatFrame"].refreshScreen();  // Refresh Patient Screen
  }
  else {
    pScreen=top.document.getElementById("mainScreen");
    pScreen.style.display = "";

    baseUrl = top.getCookie("HomePageURL");

    // Set Home Page to 'Patients' list
    if (typeof getHospitalName == "function") {
      homePageTitle=getHospitalName() + " - Patients";
    }
    else {
      homePageTitle="Patients";
    }

    homePageURL=CGIPath+"patweb97.pbl?reportno=1&template=13";

    ProcessKey=top.getCookie("ProcessKey");
    top.setCookie("homePageTitle"+ProcessKey,homePageTitle,30);
    top.setCookie("homePageURL"+ProcessKey,homePageURL,30);

    sFrame=document.getElementById("iphone-frame");
    sFrame.src = baseUrl;  // refresh screen
  }
}
function setReceiver() {
  if (window.addEventListener){
    addEventListener("message", receiveMessage, false)
  } else {
    attachEvent("onmessage", receiveMessage)
  }
}
function CheckResize() {
  if( typeof( window.innerWidth ) == 'number' ) {
    if ((winHeight!=window.outerHeight)||
         (winWidth!=window.outerWidth)) {
       document.location.reload();
    }
  } else {
    if ((ieHeight!=document.documentElement.clientHeight)||
         (ieWidth!=document.documentElement.clientWidth)) {
       document.location.reload();
    }
  }
}
//
// Zoom Control
//
function allowZoom() {
  window.top.document.getElementById("viewport").setAttribute('content','user-scalable=yes, initial-scale = 1.0, minimum-scale = 0.25, maximum-scale = 4.0');
}
function disableZoom() {
  window.top.document.getElementById("viewport").setAttribute('content','initial-scale=1.0,minimum-scale= 1.0,maximum-scale=1.0');
}
//------------------------------------------------------------
//  Close Full Screen Document View
//------------------------------------------------------------
function CloseDocument() {
  var imageDiv;
  imageViewer=0;
  dFrame=top.document.getElementById("docFrame");
  try {
    divList=dFrame.contentDocument.getElementsByTagName("DIV")
  } catch (e) {
    dFrame.src=IPADFullPath+"LoadingPage.html";
    dScreen=top.document.getElementById("docScreen");
    dScreen.style.display = "none";
    return
  }
  divList=dFrame.contentDocument.getElementsByTagName("DIV")
  for (i = 0; i < divList.length; i++) {
   if (divList[i].id=="imgDiv"&&divList[i].style.display=="block") {
     imageViewer=1;
     imageDiv=divList[i];
   }
  }
  if (imageViewer==1) {
    dFrame=dFrame.contentDocument.getElementById("imgFrame");
    divList=dFrame.contentDocument.getElementsByTagName("DIV");
    for (i = 0; i < divList.length; i++) {
     if (divList[i].id=="imgDiv1"&&divList[i].style.display=="block") {
       imageViewer=2;
       imageDiv=divList[i];
     }
    }
    if (imageViewer==2) {
      dFrame=dFrame.contentDocument.getElementById("imgFrame1");
      el=dFrame.contentDocument.getElementById("imgDiv2");
      if (el.style.display=="block") {
        imageDiv=el;
        dFrame=dFrame.contentDocument.getElementById("imgFrame2");
      }
    }
    dFrame.src=IPADFullPath+"LoadingPage.html";
    imageDiv.style.display="none";
  }
  else {
    disableZoom();
    pScreen=top.document.getElementById("mainScreen");
    pScreen.style.display = "";
    dFrame=top.document.getElementById("docFrame");
    dScreen=top.document.getElementById("docScreen");
    dFrame.src=IPADFullPath+"LoadingPage.html";
    dScreen.style.display = "none";
  }
}
function setPatientTimeout() {
  var ldt= new Date();
  top.setCookieTime("AccessDateTime",ldt,"60");
  top.setLoginTimeout()
}
function clearLoginTimeout() {
 if (logoutTimerID!=0) clearTimeout(logoutTimerID);
}
function setLoginTimeout() {
 if (logoutTimerID!=0) clearTimeout(logoutTimerID);
 logoutTimerID=setTimeout("ShowLoginScreen()",logoutTime*60*1000);
}
function ShowLoginScreen() {
  top.document.write("<html><head><body "+
               "style='background:-webkit-gradient(linear, 0% 0%, 0% 100%, "+
               "from(#121212), to(#383838), color-stop(.4,#303030))'" +
               "</body></head></html>");
  alertify.alert("Your Login has Reached the Timeout Setting of "+ logoutTime +" minutes.");
  if (isWhitespace(logoutURL)) {
    top.location.reload(); 
  } else {
    top.location.href=logoutURL;
  }
}
function setCookieTime(c_name,value,expiremins) {
 var exdate=new Date();
 exdate.setTime(exdate.getTime()+(parseInt(expiremins)*60*1000));
 document.cookie=c_name+ "=" +escape(value)+ ((expiremins==null) ? "" : ";expires="+exdate.toGMTString());
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
function hideSearch() {
  sScreen=document.getElementById("SearchScreen")
  sFrame=document.getElementById("SearchFrame")
  sScreen.style.display = "none";
  pFrame.src = "LoadingPage.html";
}
function hidePatient() {
  mScreen=document.getElementById("mainScreen")
  mScreen.style.display="";
  pScreen=document.getElementById("patientScreen")
  pFrame=document.getElementById("patientFrame")
  pScreen.style.display = "none";
  pFrame.src = "LoadingPage.html";
}
function setFrameHeights() {
  var myWidth = 0, myHeight = 0;
  if( typeof( window.innerWidth ) == 'number' ) {
    //Non-IE
    myWidth = window.innerWidth;
    myHeight = window.innerHeight;
  } else if( document.documentElement && ( document.documentElement.clientWidth || document.documentElement.clientHeight ) ) {
    //IE 6+ in 'standards compliant mode'
    myWidth = document.documentElement.clientWidth;
    myHeight = document.documentElement.clientHeight;
  } else if( document.body && ( document.body.clientWidth || document.body.clientHeight ) ) {
    //IE 4 compatible
    myWidth = document.body.clientWidth;
    myHeight = document.body.clientHeight;
  }
  iframe=document.getElementById('iphone-frame')
  if (window.navigator.userAgent.indexOf("MSIE") != -1) {
    iframe.style.height=myHeight+'px'
  } else {
    iframe.style.height=myHeight-2+'px'
  }
  iframe.style.width="100%";
}
function CheckLoginPage() {
  if (typeof getHospitalName == "function") {
    getHospitalName();
  }
  if (navigator.userAgent.match(/iPhone/i)) {
   if (window.iPhoneEnabled == undefined || !window.iPhoneEnabled) {
    PageHeader();
    document.write('<p style="width:100%;text-align:center;font-weight:bold;">');
    document.write('Welcome to '+theHospitalName+'</p>');
    document.write('<p style="line-height:10%;">&nbsp;</p>');
    document.write('<p style="width:100%;text-align:center">This access method is not suitable for iPhone.');
    document.write(' Please contact the support desk to get the correct URL.</p>');
    document.write('<p style="width:100%;text-align:center">');
    document.write(' <a href="../iphone/login.html">Touch Here to Continue</a></p>');
    document.write('<p style="line-height:10%;">&nbsp;</p>');
    PageFooter();
    return;
   }
  }
  if(navigator.userAgent.match(/Macintosh/i)||
     navigator.userAgent.match(/Windows/i) ) {
    setFrameHeights()
  }
  if((navigator.userAgent.match(/playbook/i))||
     (navigator.userAgent.match(/blackberry/i))) {
     location.href="../playbook/login.html";
     return;
  }

  if( (navigator.userAgent.match(/iPhone/i) ||
       navigator.userAgent.match(/iPod/i) ||
       navigator.userAgent.match(/iPad/i)) &&
      (typeof window['BypassStandaloneCheck'] == undefined ||
       window['BypassStandaloneCheck'] != true) ) {

    if (!window.navigator.standalone && !window.nativeIOS) {
      window.setTimeout(function(){window.scrollTo(0,1)},300);
      PageHeader();
      document.write('<p style="text-align:center;width:100%;font-weight:bold;">');
      document.write('Welcome to '+theHospitalName+'</p>');
      document.write('<p style="line-height:10%;">&nbsp;</p>');
      document.write('<p style="width:100%;text-align:center">');
      document.write('To access this application you must add it to your home screen.');
      document.write(' You will require a login and password to access clinical information.</p>');
      document.write('<p style="line-height:10%;">&nbsp;</p>');
      document.write('<p style="width:100%;text-align:center">');
      document.write('Tap the share icon and choose <br>"Add to Home Screen"</p>');
      PageFooter();
      return;
    }
  }
  sFrame=document.getElementById("iphone-frame");
  var SSOKey=decodeBase64(top.getCookie("HealthscopeKey"));
  if (SSOKey!="") {
    top.setCookie("ProcessKeyID",top.getCookie("HealthscopeKey"));
    if (verifyHomePage(SSOKey)) {
      top.setCookie("HealthscopeKey","","-1000");
      return;
    } else {
      alertify.alert("Single Sign on Login Failed Key");
    }
  }
  var dt=getCookie("AccessDateTime")
  if (isWhitespace(dt)) { 
    if (sFrame.src != "LoginPage.html") sFrame.src = "LoginPage.html";
    return true;}
  var ldt=new Date(getCookie("AccessDateTime"));
  var cdt = new Date()
  if ((Math.ceil((cdt.getTime()-ldt.getTime())))<(logoutTime*60*1000)) {
    url = top.getCookie("HomePageURL");
    if (isWhitespace(url)) {
      top.setCookie("ProcessKeyID","","1")
      sFrame.src = "LoginPage.html";
      return;
    }
    if (url.match(/blank/)) {
      top.setCookie("HomePageURL","","1")
      top.setCookie("ProcessKeyID","","1")
      sFrame.src = "LoginPage.html";
      return;
    }
    if (url.match(/<html/)) {
      top.setCookie("HomePageURL","","1")
      top.setCookie("ProcessKeyID","","1")
      sFrame.src = "LoginPage.html";
      return;
    }
    var ProcessKeyID=decodeBase64(top.getCookie("ProcessKeyID"));
    if (verify(ProcessKeyID)) {
      sFrame.src = url;
      return;
    } else {
      top.setCookie("HomePageURL","","1")
      top.setCookie("ProcessKeyID","","1")
      sFrame.src = "LoginPage.html";
      return;
    }
  }
}
function FlushCredentials() {
  if (window.navigator.userAgent.indexOf("MSIE") != -1) {
    document.execCommand("ClearAuthenticationCache");
    return
  }
  if (window.navigator.userAgent.indexOf("Chrome") != -1) {
    LoginForm.username.value=decodeBase64(top.getCookie("ProcessKey"));
    var url=  "../../cgi-bin/websec01.pbl?reportno=1&template=1&for=logoff&httprand="+Math.random();
    loginHTTP = createHttpObject();
    loginHTTP.open('GET',url,true,'nobody','xx');
    loginHTTP.setRequestHeader("Cache-Control", "no-cache");
    loginHTTP.send()
    loginHTTP.abort();

  } else {
    LoginForm.username.value=decodeBase64(top.getCookie("ProcessKey"));
    var url=  "../../cgi-bin/websec01.pbl?reportno=1&template=1&for=logoff&httprand="+Math.random();
    loginHTTP = createHttpObject();
    loginHTTP.open('GET',url,false,'nobody','xx');
    loginHTTP.setRequestHeader("Cache-Control", "no-cache");
    loginHTTP.send()
    loginHTTP.abort(); 
  }
  top.setCookie("PatientList","","1")
  top.setCookie("PatientDetail","","1")
  top.setCookie("ProcessKeyID","","1")
  top.clearLoginTimeout()
}
function verify(ProcessKeyID) {
  if (isWhitespace(ProcessKeyID)) {
    return false; }
  var uname = ProcessKeyID.split("|")[0]
  var upass = ProcessKeyID.split("|")[1]
  var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
  loginHTTP = createHttpObject();
  loginHTTP.open("GET", url, false, uname, upass);
  loginHTTP.setRequestHeader("Cache-Control", "no-cache");
  loginHTTP.send();
  if (loginHTTP.status == 200) { 
    if (loginHTTP.responseText.match(/INVALID SECURITY/)) {
      return false; }
    if (loginHTTP.responseText.match(/websec01/)) {
      return false; }
    top.setLoginTimeout()
    return true;
  }
  else {
    return false; }
}
function verifyHomePage(ProcessKeyID) {
  if (isWhitespace(ProcessKeyID)) {
    return false; }
  var uname = ProcessKeyID.split("|")[0]
  var upass = ProcessKeyID.split("|")[1]
  var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
  loginHTTP = createHttpObject();
  loginHTTP.open("GET", url, false, uname, upass);
  loginHTTP.setRequestHeader("Cache-Control", "no-cache");
  loginHTTP.send();
  if (loginHTTP.status == 200) { 
    if (loginHTTP.responseText.match(/INVALID SECURITY/)) {
      alertify.alert("Security Profile Invalid");
      alertify.alert("Please Contact the Hospital Support Service Desk.");
      return false; }
    if (loginHTTP.responseText.match(/websec01/)) {
      alertify.alert("User Secuirty Expired or Reset");
      alertify.alert("Please Contact the Hospital Support Service Desk.");
      return false; }
    top.setLoginTimeout()
    var urlRegex= new RegExp("(.+location.href=.)(.+ )(.;.+)","gi");
    url=loginHTTP.responseText.replace(/\n/g,"")  /* get rid of line feeds */
    url=url.replace(urlRegex,"$2")                /* get location from string */
    if (isWhitespace(url.replace(/ *$/,"").replace(/.*\//g,""))) {
      url=url.replace(/.*html\//g,"")
    }else {
      url=url.replace(/.*\//g,"")
    }
    top.setLoginTimeout();
    var tempUrl = url;
    tempUrl = tempUrl.replace(/ /g,'');
    if(!tempUrl.match(/\./) &&
      tempUrl.substring(tempUrl.length-1,tempUrl.length) != '/') {
      url = url.replace(/ /g,'')+'/';
    }
    var ldt= new Date()
    top.setCookie("LoginDateTime",ldt,"1")
    top.setCookieTime("AccessDateTime",ldt,"60")
    el=document.getElementById("iphone-frame");
    el.src = url;
    return true;
  }
  else {
    alertify.alert("Login Failed HTTP Status:"+loginHTTP.status)
    return false; 
  }
}
function login() {
  top.setCookie("LoginDateTime","","1")
  top.setCookieTime("AccessDateTime","","1200")
  var uname = LoginForm.username.value;
  var upass = LoginForm.password.value;
  if (isWhitespace(uname)||isWhitespace(upass)){ 
    alertify.alert('Enter User Name and Password'); 
  } else {
//var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
    if(navigator.userAgent.match(/MSIE/i) ) {
      var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
      loginHTTP = createHttpObject();
      loginHTTP.open("GET", url, false,uname,upass );
      loginHTTP.setRequestHeader("Cache-Control", "no-cache");
      loginHTTP.send("");
    } else {
      var url= "../../cgi-bin/websec01.pbl"
      var qs= "reportno=1&template=1&httprand="+Math.random();
      loginHTTP = createHttpObject();
      loginHTTP.open("POST", url, false,uname,upass );
      loginHTTP.setRequestHeader("Cache-Control", "no-cache");
      loginHTTP.send(qs);
    }
    if (loginHTTP.status == 200) { 
      var ldt= new Date()
      top.setCookie("LoginDateTime",ldt,"1")
      top.setCookieTime("AccessDateTime",ldt,"60")
      if (loginHTTP.responseText.match(/INVALID SECURITY/)) {
        alertify.alert("User Profile Not Available for this Application. Please Contact the Systems Administrator");
      } else {
        if (loginHTTP.responseText.match(/websec01/) ) {
          location.href = "../../cgi-bin/websec01.pbl?reportno=2&template=4&wbsec001="+uname+"&httprand="+Math.random();  
        } else {
          top.setCookie("ProcessKey",encodeBase64(uname),"10")
          top.setCookie("ProcessKeyID",encodeBase64(uname+"|"+upass),"1")
          url=loginHTTP.responseText.replace(/\n/g,"");
          var urlRegex= new RegExp("(.+location.href=.)(.+ )(.;.+)","gi");
          url=loginHTTP.responseText.replace(/\n/g,"")  /* get rid of line feeds */
          url=url.replace(urlRegex,"$2")                /* get location from string */
	  if (isWhitespace(url.replace(/ *$/,"").replace(/.*\//g,""))) {
            url=url.replace(/.*html\//g,"")
          }else {
            url=url.replace(/.*\//g,"")
          }
          top.setLoginTimeout();
          var tempUrl = url;
          tempUrl = tempUrl.replace(/ /g,'');
          if(!tempUrl.match(/\./) && tempUrl.substring(tempUrl.length-1,tempUrl.length) != '/') {
            url = url.replace(/ /g,'')+'/';
	  }
          top.setCookie("HomePageURL",url,"1");
          location.href = url;
        }
      }
    } else { 
      alertify.alert("Invalid Username and/or password! :"+loginHTTP.status);
    }
  }
}
function ClearMsg() {
  var ErrM=document.getElementById("ErrMsg");
  ErrM.innerHTML="";
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
var END_OF_INPUT = -1;
var base64Str;
var base64Count;
var base64Chars = new Array(
    'A','B','C','D','E','F','G','H',
    'I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X',
    'Y','Z','a','b','c','d','e','f',
    'g','h','i','j','k','l','m','n',
    'o','p','q','r','s','t','u','v',
    'w','x','y','z','0','1','2','3',
    '4','5','6','7','8','9','+','/'
);
var reverseBase64Chars = new Array();
for (var i=0; i < base64Chars.length; i++){
    reverseBase64Chars[base64Chars[i]] = i;
}
function setBase64Str(str){
    base64Str = str;
    base64Count = 0;
}
function readBase64(){    
    if (!base64Str) return END_OF_INPUT;
    if (base64Count >= base64Str.length) return END_OF_INPUT;
    var c = base64Str.charCodeAt(base64Count) & 0xff;
    base64Count++;
    return c;
}
function encodeBase64(str){
    setBase64Str(str);
    var result = '';
    var inBuffer = new Array(3);
    var lineCount = 0;
    var done = false;
    while (!done && (inBuffer[0] = readBase64()) != END_OF_INPUT){
        inBuffer[1] = readBase64();
        inBuffer[2] = readBase64();
        result += (base64Chars[ inBuffer[0] >> 2 ]);
        if (inBuffer[1] != END_OF_INPUT){
            result += (base64Chars [(( inBuffer[0] << 4 ) & 0x30) | (inBuffer[1] >> 4) ]);
            if (inBuffer[2] != END_OF_INPUT){
                result += (base64Chars [((inBuffer[1] << 2) & 0x3c) | (inBuffer[2] >> 6) ]);
                result += (base64Chars [inBuffer[2] & 0x3F]);
            } else {
                result += (base64Chars [((inBuffer[1] << 2) & 0x3c)]);
                result += ('=');
                done = true;
            }
        } else {
            result += (base64Chars [(( inBuffer[0] << 4 ) & 0x30)]);
            result += ('=');
            result += ('=');
            done = true;
        }
        lineCount += 4;
        if (lineCount >= 76){
            result += ('\n');
            lineCount = 0;
        }
    }
    return result;
}
function readReverseBase64(){   
    if (!base64Str) return END_OF_INPUT;
    while (true){      
        if (base64Count >= base64Str.length) return END_OF_INPUT;
        var nextCharacter = base64Str.charAt(base64Count);
        base64Count++;
        if (reverseBase64Chars[nextCharacter]){
            return reverseBase64Chars[nextCharacter];
        }
        if (nextCharacter == 'A') return 0;
    }
    return END_OF_INPUT;
}
 
function ntos(n){
    n=n.toString(16);
    if (n.length == 1) n="0"+n;
    n="%"+n;
    return unescape(n);
}
 
function decodeBase64(str){
    setBase64Str(str);
    var result = "";
    var inBuffer = new Array(4);
    var done = false;
    while (!done && (inBuffer[0] = readReverseBase64()) != END_OF_INPUT
        && (inBuffer[1] = readReverseBase64()) != END_OF_INPUT){
        inBuffer[2] = readReverseBase64();
        inBuffer[3] = readReverseBase64();
        result += ntos((((inBuffer[0] << 2) & 0xff)| inBuffer[1] >> 4));
        if (inBuffer[2] != END_OF_INPUT){
            result +=  ntos((((inBuffer[1] << 4) & 0xff)| inBuffer[2] >> 2));
            if (inBuffer[3] != END_OF_INPUT){
                result +=  ntos((((inBuffer[2] << 6)  & 0xff) | inBuffer[3]));
            } else {
                done = true;
            }
        } else {
            done = true;
        }
    }
    return result;
}
//------------------------------------------------------------
//  createHttpObject: set up object for Ajax_RSExecute calls
//------------------------------------------------------------
function createHttpObject()
{
  try
  {
    xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  }
  catch (e)
  {
    // Internet Explorer in newer or older form
    try
    {
      xmlHttp=new ActiveXObject("Msxml2.XMLHTTP");
    }
    catch (e)
    {
      try
      {
        xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
      }
      catch (e)
      {
        alertify.alert("Your browser does not support AJAX!");
        return false;
      }
    }
  }
  return xmlHttp;
}
function ClosePatient() {
  var imageDiv;
  imageViewer=0;
  dFrame=top.document.getElementById("patFrame");
  divList=dFrame.contentDocument.getElementsByTagName("DIV")
  pScreen=top.document.getElementById("mainScreen");
  pScreen.style.display = "";
  dFrame=top.document.getElementById("patFrame");
  dScreen=top.document.getElementById("patScreen");
  dFrame.src=IPADFullPath+"LoadingPage.html";
  dScreen.style.display = "none";
}
function PageHeader() {
  document.write('<head>');
  document.write('<title>'+theHospitalName+'</title>');
  document.write('<meta name="apple-mobile-web-app-capable" content="yes" />');
  document.write('<meta name="apple-mobile-web-app-status-bar-style" content="black" />');
  document.write('<meta name="viewport" content="width=device-width, user-scalable=no" />');
  document.write('<link rel="apple-touch-icon"          href="apple-touch-icon.png">');
  document.write('<meta http-equiv="content-type" content="text/html; charset=utf-8" />');
  document.write('</head>');
  document.write('<body style="');
  document.write('background-color:#000000;');
  document.write('background-image:url(login_dedalus_v2.png);');
  document.write('background-repeat:no-repeat;');
  document.write('background-position:center top;');
  document.write('font-family:Helvetica, sans-serif !important;');
  document.write('color:#666666 !important;');
  document.write('font-size:12pt !important;');
  document.write('">');
  document.write('<table cellspacing=0 cellpadding=2 border=0 ');
  document.write('style="margin-top:42px;width:600px;margin-left:auto;margin-right:auto">');
  document.write('<tr><td>&nbsp;</td><td>');
  document.write('<div style="text-align:right;color:rgb(29,79,145);');
  document.write('font-size:30px;font-weight:normal;margin-top:6px">ENTERPRISE </div>');
  document.write('<div style="text-align:right;color:rgb(29,79,145);font-size:26px;font-weight:normal">');
  document.write('Health  Solutions</div>');
  document.write('</td></tr>');
  document.write('<tr><td>&nbsp;</td></tr>');
  document.write('<tr><td>&nbsp;</td>');
  document.write('<td align=right ');
  document.write('style="height:40px;color:rgb(29,79,145);font-size:12px;');
  document.write('vertical-align:bottom;font-weight:normal;">');
  document.write('webPAS Mobility '+theVersion+'</td>');
  document.write('<tr><td>&nbsp;</td></tr>');
  document.write('<tr><td colspan=2 style="font-size:14pt;">');
}
function PageFooter() {
  document.write('</td></tr></table></body>');
}
