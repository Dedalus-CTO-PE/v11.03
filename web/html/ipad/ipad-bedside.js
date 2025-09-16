//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/ipad-bedside.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V11.01.00 04/06/2021 Tony Hui      TSK 0907017
//                      Changed the image URL to Dedalus Theme.    
// V10.14.01 29/05/2019 Don Nguyen    TSK 0872140
//                      Added ability to bypass standalone check in
//                      CheckLoginPage(); via custom js variable in
//                      'ipad-settings.js'
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.00 13/04/2012 Version change
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

//
// iPad Login Javascript Code
//
// Modification 
//  21 Jan 2011 B.G.Ackland
//              Login Timeout and Default List Loading Redesign
//
var logoutTime=10;    // Login Timeout
var logoutTimerID=0;
var whitespace = " \t\n\r";
//var IPADFullPath = "/devwork/v10.01/html/ipad/"
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
  top.location.reload();
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
function CheckLoginPage() {
  if ( navigator.userAgent.match(/iPad/i) &&
       (typeof window['BypassStandaloneCheck'] == undefined ||
        window['BypassStandaloneCheck'] != true) ) {

    if (!window.navigator.standalone && !window.nativeIOS) {
      window.setTimeout(function(){window.scrollTo(0,1)},300);
      document.write('<head>');
      document.write('<title>Bedside Panel</title>');
      document.write('<meta name="apple-mobile-web-app-capable" content="yes" />');
      document.write('<meta name="apple-mobile-web-app-status-bar-style" content="black" />');
      document.write('<meta name="viewport" content="width=device-width, user-scalable=no" />');
      document.write('<link rel="apple-touch-icon"          href="apple-touch-icon.png">');
      document.write('<meta http-equiv="content-type" content="text/html; charset=utf-8" />');
      document.write('</head>');
      document.write('<body style="');
      document.write('background-color:#0e3f42;');
      document.write('background-image:url(login_dedalus_v2.png);');
      document.write('background-repeat:no-repeat;');
      document.write('background-position:center top;');
      document.write('color:white;');
      document.write('font-size:14px;');
      document.write('font-family: Helvetica, sans-serif;');
      document.write('">');
      document.write('<div style="margin-top:122px;margin-left:auto;margin-right:auto;width:250px;text-align:center;">');
      document.write('<p style="align:text-center;font-weight:bold;">Welcome to iSOFT Clinicals</p>');
      document.write('<p style="line-height:10%;">&nbsp;</p>');
      document.write('<p style="align:text-center">To access this application you must add it to your home screen.');
      document.write(' You will require a login and password to access clinical information.</p>');
      document.write('<p style="line-height:10%;">&nbsp;</p>');
      document.write('<p style="align:text-center">Tap the bookmark button and choose <br>"Add to Home Screen"</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p>');
      document.write('<p style="align:text-center">&nbsp;</p></div></body>');
      return;
    }
  }
  sFrame=document.getElementById("iphone-frame");
  sFrame.src = "BedsideLogin.html";
}
function FlushCredentials() {
  var url=  "../../cgi-bin/websec01.pbl?reportno=1&template=1&for=logoff&httprand="+Math.random();
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,false,'nobody','xx');
  xmlHttp.send()
  xmlHttp.abort(); 
  top.setCookie("PatientList","","1")
  top.setCookie("PatientDetail","","1")
  top.setCookie("ProcessKeyID","","1")
  top.clearLoginTimeout()
}
function login() {
  top.setCookie("LoginDateTime","","1")
  top.setCookieTime("AccessDateTime","","1200")
  var uname = LoginForm.username.value;
  var upass = LoginForm.password.value;
  if (isWhitespace(uname)||isWhitespace(upass)){ 
    alertify.alert('Enter User Name and Password'); 
  } else {
    var url= "../../cgi-bin/websec01.pbl?reportno=1&template=1&httprand="+Math.random();
    var xmlHttp = createHttpObject();
    xmlHttp.open("GET", url, false,uname,upass );
    xmlHttp.setRequestHeader("Cache-Control", "no-cache");
    xmlHttp.send();
    if (xmlHttp.status == 200) { 
      var ldt= new Date()
      top.setCookie("LoginDateTime",ldt,"1")
      top.setCookieTime("AccessDateTime",ldt,"60")
      if (xmlHttp.responseText.match(/INVALID SECURITY/)) {
        alertify.alert("User Profile Not Available for this Application. Please Contact the Systems Administrator");
      } else {
        if (xmlHttp.responseText.match(/websec01/) ) {
          location.href = "../../cgi-bin/websec01.pbl?reportno=2&template=4&wbsec001="+uname+"&httprand="+Math.random();  
        } else {
          top.setLoginTimeout();
          wardcode=top.getCookie("wardcode");
          bedcode=top.getCookie("bedcode");
          if (isWhitespace(wardcode)) {
            location.href = "../../cgi-bin/websec01.pbl?reportno=5&template=12&wbsec001="+uname+"&httprand="+Math.random();  
          } else {
            urnumber=top.getCookie("urnumber");
            if (isWhitespace(urnumber)) {
              alertify.alert("No Patient Currently in this Location.");
              confirmMsg="Do You Wish to Change Location?";
              alertify.confirm(confirmMsg, function (e) {    
                if (e) {
                  location.href = "../../cgi-bin/websec01.pbl?reportno=5&template=12&wbsec001="+
                                  uname+"&httprand="+Math.random();  
                }
              } else {
                top.location.reload();
              });
            } else {
              location.href = "ShowWardBed.html";
            }
          }
        }
      }
    } else { 
      alertify.alert("Invalid Username and/or password! :"+xmlHttp.status);
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
