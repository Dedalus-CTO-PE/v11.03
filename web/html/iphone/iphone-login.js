//jsVersion  : V11.03.00
//
// Source Code:  ./iphone/iphone-login.js
//
// Modification 
//
// Version         Date        Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.15.02       18/10/2019  Don Nguyen     TSK 0882653
//                             Clear document frame content on CloseDocument()
// V10.15.01       29/05/2019  Don Nguyen     TSK 0872140
//                             Added ability to bypass standalone check in 
//                             CheckLoginPage(); via custom js variable in 
//                             'iphone-settings.js'
// V10.08.01       06.06.2016  B.G.Ackland    
//                             Healthscope Login Configuration
// V10.06.01       27.10.2015  B.G.Ackland    CAR 302579
//                             Store patient list cookie location as href not pathname 
// V10.04.01       22.06.2014  B.G.Ackland    CAR 302579
//                             New WEBSEC01 Redirection Technique
// V10.03.02       24.09.2013  B.G.Ackland    
//                             Password Redirect
// V10.03.01       21.07.2013  B.G.Ackland    CAR 288233
//                             Fix Login URL Determination to same method as iPad
// V10.03.00       13/04/2012  Version change
// V10.01.00       13/04/2012  Version change
// V10.00.00       13/04/2012  Created for Mobility Suite
var whitespace = " \t\n\r";
//
// Zoom Control
//
function allowZoom() {
  window.top.document.getElementById("viewport").setAttribute('content','width = 980, initial-scale = 1.0, minimum-scale = 0.25, maximum-scale = 4.0');
}
function disableZoom() {
  window.top.document.getElementById("viewport").setAttribute('content','width = device-width, initial-scale = 1.0,  minimum-scale = 1.0, maximum-scale = 1.0');
}
//------------------------------------------------------------
//  Close Full Screen Document View
//------------------------------------------------------------
function CloseDocument() {
  disableZoom();
  pScreen=top.document.getElementById("patientScreen");
  pScreen.style.display = "";
  dFrame=top.document.getElementById("docFrame");
  dScreen=top.document.getElementById("docScreen");
  dScreen.style.position = "absolute";
  dScreen.style.top = "0px";
  dScreen.style.left = "0px";
  dScreen.style.width = "0px";
  dScreen.style.height = "0px";
  dScreen.style.display = "none";
  dFrame.src = "about:blank";
}
function setHistory() {
  loc=window.frames["iphone-frame"].location;
  if (loc.pathname.match(/blank/)) return;
  if (loc.pathname.match(/Loading/)) return;
  setCookie("PatientList",loc.href,"1")
}
function setCookie(c_name,value,expiredays) {
 var exdate=new Date();
 exdate.setDate(exdate.getDate()+expiredays);
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
function CheckLoginPage() {
  if ( (navigator.userAgent.match(/iPhone/i) || 
        navigator.userAgent.match(/iPod/i) || 
        navigator.userAgent.match(/iPad/i)) &&
       (typeof window['BypassStandaloneCheck'] == undefined ||
        window['BypassStandaloneCheck'] != true) ) {

    if (!window.navigator.standalone) {
      window.setTimeout(function(){window.scrollTo(0,1)},300);
      document.write('<head>');
      document.write('<title>Clinicals</title>');
      document.write('<meta name="apple-mobile-web-app-capable" content="yes" />');
      document.write('<meta name="apple-mobile-web-app-status-bar-style" content="black" />');
      document.write('<meta http-equiv="content-type" content="text/html; charset=utf-8" />');
      document.write('<meta id="viewport" name="viewport" content="initial-scale=1.0,minimum-scale=1.0,maximum-scale=1.0" />');
      document.write('<meta name="apple-mobile-web-app-capable" content="yes" />');
      document.write('<link rel="apple-touch-icon"                 href="touch-icon-iphone.png" />');
      document.write('<link rel="apple-touch-icon" sizes="114x114" href="touch-icon-iphone-retina.png" />');
      document.write('<link rel="apple-touch-startup-image"        href="touch-startup-iphone.png"');
      document.write('       media="(device-width: 320px) and (device-height: 480px) and (-webkit-device-pixel-ratio: 1)">');
      document.write('<link rel="apple-touch-startup-image"        href="touch-startup-iphone4.png"');
      document.write('       media="(device-width: 320px) and (device-height: 480px) and (-webkit-device-pixel-ratio: 2)">');
      document.write('<link rel="apple-touch-startup-image"        href="touch-startup-iphone5.png"');
      document.write('      media="(device-width: 320px) and (device-height: 568px) and (-webkit-device-pixel-ratio: 2)">');
      document.write('<link rel="stylesheet" href="iphone.css" type="text/css" />');
      document.write('</head>');
      document.write('<body style="');
      document.write('background-image:url(touch-welcome.png);');
      document.write('background-repeat:no-repeat;');
      document.write('background-position:center top;');
      document.write('color:white;');
      document.write('font-size:14px;');
      document.write('font-family: Helvetica, sans-serif;');
      document.write('">');
      document.write('<div style="margin-top:120px;margin-left:auto;margin-right:auto;width:250px;text-align:center;">');
      document.write('<p style="align:text-center;font-weight:bold;">Welcome to '+loginOrganisationName+'</p>');
      document.write('<p style="line-height:40%;">&nbsp;</p>');
      document.write('<p style="align:text-center">To access this application you must add it to your home screen.');
      document.write(' You will require a login and password to access clinical information.</p>');
      document.write('<p style="line-height:40%;">&nbsp;</p>');
      document.write('<p style="align:text-center">Tap the bookmark button and choose <br>"Add to Home Screen"</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p></div></body>');
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

  var dt=getCookie("LoginDateTime")
  if (dt=="") { sFrame.src = "LoginPage.html"; }
  var ldt=new Date(getCookie("LoginDateTime"));
  var cdt = new Date()
  if ((Math.ceil((cdt.getTime()-ldt.getTime())/1000))<3600) {
    url = getCookie("PatientList"); 
    if (isWhitespace(url)||url.match(/blank/)) {
      top.setCookie("ProcessKeyID","","1")
      sFrame.src = "LoginPage.html"; 
    } else {
      var ProcessKeyID=decodeBase64(top.getCookie("ProcessKeyID"));
      if (verify(ProcessKeyID)) {
        sFrame.src = url;
      } else {
        top.setCookie("ProcessKeyID","","1")
        sFrame.src = "LoginPage.html";
      }
    }
  } else {
    top.setCookie("ProcessKeyID","","1")
    sFrame.src = "LoginPage.html"; 
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
    loginHTTP = new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
    loginHTTP.open('GET',url,true,'nobody','xx');
    loginHTTP.setRequestHeader("Cache-Control", "no-cache");
    loginHTTP.send()
    loginHTTP.abort();

  } else {
    LoginForm.username.value=decodeBase64(top.getCookie("ProcessKey"));
    var url=  "../../cgi-bin/websec01.pbl?reportno=1&template=1&for=logoff&httprand="+Math.random();
    loginHTTP = new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
    loginHTTP.open('GET',url,false,'nobody','xx');
    loginHTTP.setRequestHeader("Cache-Control", "no-cache");
    loginHTTP.send()
    loginHTTP.abort(); 
  }
  top.setCookie("PatientList","","1")
  top.setCookie("PatientDetail","","1")
  top.setCookie("ProcessKeyID","","1")
}
function verify(ProcessKeyID) {
  var uname = ProcessKeyID.split("|")[0]
  var upass = ProcessKeyID.split("|")[1]
  var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
  loginHTTP = new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  loginHTTP.open("GET", url, false, uname, upass);
  loginHTTP.send("");
  if (loginHTTP.status == 200) { 
    if (loginHTTP.responseText.match(/INVALID SECURITY/)) {
      return false; }
    if (loginHTTP.responseText.match(/websec01/)) {
      return false; }
    return true;
  }
  else {
    return false; }
}
function login() {
  top.setCookie("LoginDateTime","","1")
  var uname = LoginForm.username.value;
  var upass = LoginForm.password.value;
  if (isWhitespace(uname)||isWhitespace(upass)){ 
    alertify.alert('Enter User Name and Password'); }
  else {
    var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
    loginHTTP = new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
    loginHTTP.open("GET", url, false,uname,upass );
//    loginHTTP.setRequestHeader('Authorization', encodeBase64(uname+":"+upass));
    loginHTTP.send("");
    if (loginHTTP.status == 200) { 
      var ldt= new Date()
      top.setCookie("LoginDateTime",ldt,"1")
      if (loginHTTP.responseText.match(/INVALID SECURITY/)) {
        alertify.alert("User Profile Not Available for this Application. Please Contact the Systems Administrator");
      }
      else {
        if (loginHTTP.responseText.match(/websec01/)) {
          location.href="../../cgi-bin/websec01.pbl?reportno=2&template=5";
          return;
        } else {
          top.setCookie("ProcessKey",encodeBase64(uname),"10")
          top.setCookie("ProcessKeyID",encodeBase64(uname+"|"+upass),"1")
          var urlRegex= new RegExp("(.+location.href=.)(.+ )(.;.+)","gi");
          url=loginHTTP.responseText.replace(/\n/g,"")  /* get rid of line feeds */
          url=url.replace(urlRegex,"$2")                /* get location from string */
          if (isWhitespace(url.replace(/ *$/,"").replace(/.*\//g,""))) {
            url=url.replace(/.*html\//g,"")
          } else {
            url=url.replace(/.*\//g,"")
          }
          var tempUrl = url;
          tempUrl = tempUrl.replace(/ /g,'');
          if(!tempUrl.match(/\./) &&
            tempUrl.substring(tempUrl.length-1,tempUrl.length) != '/') {
            url = url.replace(/ /g,'')+'/';
          }
//
//        url=loginHTTP.responseText.replace(/\n/g,"");
//        url=url.replace(/.*URL=/,"");
//        url=url.replace(/ *\>.*/g,"");
// if (isWhitespace(url.replace(/ *$/,"").replace(/.*\//g,""))) {
//          url=url.replace(/.*html\//g,"")
//        } else {
//          url=url.replace(/.*\//g,"")
//        }
//        var tempUrl = url;
//        tempUrl = tempUrl.replace(/ /g,'');
//        if(!tempUrl.match(/\./) && tempUrl.substring(tempUrl.length-1,tempUrl.length) != '/') {
//          location.href = url+'/';
// }else { 
//          location.href = url;
//        }
          top.setCookie("HomePageURL",url,"1");
          location.href = url;
        }
      }
    } 
    else { 
      alertify.alert("Invalid Username and/or password!");
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
function verifyHomePage(ProcessKeyID) {
  if (isWhitespace(ProcessKeyID)) { return false; }
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
      return false; 
    }
    if (loginHTTP.responseText.match(/websec01/)) {
      alertify.alert("User Secuirty Expired or Reset");
      alertify.alert("Please Contact the Hospital Support Service Desk.");
      return false; 
    }
    top.setLoginTimeout()
    var urlRegex= new RegExp("(.+location.href=.)(.+ )(.;.+)","gi");
    url=loginHTTP.responseText.replace(/\n/g,"")  /* get rid of line feeds */
    url=url.replace(urlRegex,"$2")                /* get location from string */
    if (isWhitespace(url.replace(/ *$/,"").replace(/.*\//g,""))) {
      url=url.replace(/.*html\//g,"")
    } else {
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
  } else {
    alertify.alert("Login Failed HTTP Status:"+loginHTTP.status)
    return false; 
  }
}
