//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.01 02.07.2013 Align tran and Work Scripts
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

var pulseSlider = null;
var bpSlider = null;
var tempSlider = null;
var respSlider = null;
var bslSlider = null;
var outSlider = null;
var saO2Slider = null;
var pain1Slider = null;
var pain2Slider = null;
var o2FlowSlider = null;
var weightSlider = null;
var heightSlider = null;
var ewsPost=false;
var ewsScore=0;
//
var bpLower=100;
var bpUpper=180;
var rpLower=9;
var rpUpper=20;
var puLower=50;
var puUpper=100;
var opLower=120;
var lcLimit=0;
var nfrFlag=0;
var nfmaFlag=0;
//
function init() {
  var actionButton = parent.document.getElementById('actionButton');

  if(actionButton) {
     //format the action button
     actionButton.className = actionButton.className.replace(/SpanButton/g,"");
     actionButton.className = actionButton.className.replace(/Blue/g,"");
     actionButton.className = actionButton.className + " SpanButtonBlue";
     actionButton.innerText = "Save";

     actionButton.onclick = function () { 
                               submitObservation();
                            };
  }

  var div = document.getElementById('rightPanel');
  var sliderDir = "../html/ipad/slider/";

  getLatestEWS();
  calculateBMI();
  calculateBSA();

  heightSlider = new Slider({"parentDiv":div,
                             "sliderDirectory":sliderDir,
                             "markerOn":true});
  heightSlider.setOnEnd(function () {
                             calculateBMI();
                             calculateBSA();
                        });

  weightSlider = new Slider({"parentDiv":div,
                             "sliderDirectory":sliderDir,
                             "markerOn":true});
  weightSlider.setOnEnd(function() { 
                           calculateBMI();
                           calculateBSA();
                        });

  bslSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                          "markerOn":true});

  saO2Slider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});
  o2FlowSlider = new Slider({"parentDiv":div,
                             "sliderDirectory":sliderDir,
                             "markerOn":true});
//  pain2Slider = new Slider({"parentDiv":div,
//                          "sliderDirectory":sliderDir,
//                           "markerOn":true});

  pain1Slider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});
  outSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                          "markerOn":true});
  outSlider.setOnEnd(function() { 
                           calculateEWS();
                        });

  tempSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});

  pulse = new Slider({"parentDiv":div,
		      "sliderDirectory":sliderDir,
		      "markerOn":true});
  pulse.setOnEnd(function() { 
                           calculateEWS();
                        });

  bpSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                          "markerOn":true,
			  "multiMarker":true});
  bpSlider.setMarkerValue({"markValue1":105,
                           "markValue2":135})
  bpSlider.setOnEnd(function() { 
                           calculateEWS();
                        });

  respSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});
  respSlider.setOnEnd(function() { 
                           calculateEWS();
                        });


  setSliderValue(o2FlowSlider,'Oxygen Flow L/min',15,0,.5,1,'inp_8');  
  setSliderValue(pain1Slider,'Pain',10,0,1,0,'inp_7');  
//  setSliderValue(pain1Slider,'Pain at Rest',10,0,1,0,'inp_7');  
//  setSliderValue(pain2Slider,'Pain with Movement',10,0,1,0,'inp_12');  
  setSliderValue(saO2Slider,'Oxygen Sat (%)',100,80,0.5,1,'inp_6');  
  setSliderValue(bslSlider,'Blood Sugar',20,0,0.1,1,'inp_5');  
  setSliderValue(outSlider,'4hr Urine Output',200,0,1,0,'inp_11');  
  setSliderValue(respSlider,'Respiration',40,0,1,0,'inp_4');  
  setSliderValue(tempSlider,'Temperature',41,31,0.5,1,'inp_3');  
  setSliderValue(bpSlider,'Blood Pressure',200,30,5,0,'inp_2');  
  setSliderValue(pulse,'Heart Rate',200,20,1,0,'inp_1');  
  determinWeightRange();
  determinHeightRange();

     render(respSlider,'inp_4');
     render(o2FlowSlider,'inp_8');
     render(saO2Slider,'inp_6');
     render(bpSlider,'inp_2');
     render(pulse,'inp_1');
     render(tempSlider,'inp_3');
     render(outSlider,'inp_11');
     render(pain1Slider,'inp_7');
//     render(pain2Slider,'inp_12');
     render(bslSlider,'inp_5');
     render(weightSlider,'inp_9');
     render(heightSlider,'inp_10');

  window.onresize = function() {
     render(respSlider,'inp_4');
     render(o2FlowSlider,'inp_8');
     render(saO2Slider,'inp_6');
     render(bpSlider,'inp_2');
     render(pulse,'inp_1');
     render(tempSlider,'inp_3');
     render(outSlider,'inp_11');
     render(pain1Slider,'inp_7');
//     render(pain2Slider,'inp_12');
     render(bslSlider,'inp_5');
     render(weightSlider,'inp_9');
     render(heightSlider,'inp_10');
  }
}

function render(obj,id) {
  var label = document.getElementById(id);
  obj.bindTo(label);
}

function setSliderValue(obj,title,max,min,step,decimalPlace,resultLabel) {
  var label = document.getElementById(resultLabel);
  obj.setResultLabel(label);
  obj.setSliderValues(max,min,step,decimalPlace);
  obj.drawGraph(title);
  //on blood pressure
  if(resultLabel != "inp_2") {
    obj.setMarkerValue({"markValue1":getResultFromMultiple(label.value)[1],
                        "markValue2":0});
  }
  obj.redrawMarker();
  label.style.display = "";
}

function determinWeightRange() {
  var maxWeight = 200;
  var minWeight = 0;
  var stepWeight = 0.5;
  var step = 0.5;
  var decimal  = 1;
  var age; 
  if(parent.PatientAge) {
    age = parent.PatientAge.substring(0,3);
  }else {
    var t = document.getElementById('patientAge');
    age = t.value.substring(0,3);    
  }
  age = age.replace(/ /g,"");
  age = parseInt(age,10);

  if(age < 2 ){
     maxWeight = 10;
     stepWeight = 0.01;
  }else if(age < 6) {
     maxWeight = 25;
     stepWeight = 0.1;
  }
      
  setSliderValue(weightSlider,'Weight (kg)',maxWeight,minWeight,stepWeight,decimal,'inp_9');
}
function determinHeightRange() {
  var maxHeight = 280;
  var minHeight = 50;
  var stepHeight = 1;
  var decimal  = 0;
  if(parent.PatientAge) {
    age = parent.PatientAge.substring(0,3);
  }else {
    var t = document.getElementById('patientAge');
    age = t.value.substring(0,3);    
  }

  age = age.replace(/ /g,"");
  age = parseInt(age,10);

  if(age < 2 ){
     maxHeight = 75;
     minHeight = 5;
     stepHeight = 0.5;
     decimal = 1
  }else if(age < 6) {
     maxHeight = 150;
     minHeight = 50;
     stepHeight = 1;
     decimal = 0;
  }

  setSliderValue(heightSlider,'Height (cm)',maxHeight,minHeight,stepHeight,decimal,'inp_10');
}

function prepare() {
    var inp_1 = document.getElementById('inp_1'); //pulse
    var inp_2 = document.getElementById('inp_2'); //bp 
    var inp_3 = document.getElementById('inp_3'); //temp
    var inp_4 = document.getElementById('inp_4'); //resp
    var inp_5 = document.getElementById('inp_5'); //blood sugar
    var inp_6 = document.getElementById('inp_6'); //SaO2
    var inp_7 = document.getElementById('inp_7'); //Pain
    var inp_8 = document.getElementById('inp_8'); //O2 flow
    var inp_9 = document.getElementById('inp_9'); //weight
    var inp_10 = document.getElementById('inp_10'); //height
    var inp_11 = document.getElementById('inp_11'); //4hr Urine
//    var inp_12 = document.getElementById('inp_12'); //Pain (Movement)
  
    var bloodPressure = getResultFromMultiple(inp_2.value);

    AddForm.obdet004.value = inp_1.value;
    AddForm.obdet006.value = bloodPressure[0];
    AddForm.obdet007.value = bloodPressure[1];
    AddForm.obdet005.value = inp_3.value;
    AddForm.obdet008.value = inp_4.value;
    AddForm.obdet034.value = inp_5.value;
    AddForm.obdet009.value = inp_6.value;
    AddForm.obdet041.value = inp_7.value;
    AddForm.obdet010.value = inp_8.value;
    AddForm.pmsvx045.value = inp_9.value;   
    AddForm.obdet037.value = inp_9.value;   
    AddForm.pmsvx046.value = inp_10.value;   
    AddForm.obdet035.value = inp_11.value;   
}

function submitObservation() {
  var status = validateMandatory(AddForm);
  if (status == true) {
    prepare();
    var theURL = AddForm.action;
    var postStr = AJAXPostString2(AddForm);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
    if (xmlHttp.responseText.match(/location.href/i)){
        alertEWS()
      }else{
      alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
      }
    }else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}

function alertEWS() {
  if (ewsScore>7)  MedAlert();
  else if (ewsScore>5) EWS3();
  else if (ewsScore>3) EWS2();
  else if (ewsScore>0) EWS1();
  else { 
   parent.frames['PatFrame'].refreshScreen();
   parent.CloseDocument();
  }
}
function CloseAlert() {
  parent.frames['PatFrame'].refreshScreen();
  parent.CloseDocument();
}
function CallTeam() {
  ewsText.innerHTML="<ul>"+
                   "<li class=ItemRes><input type=button class=callButton value='Call' "+
                   "    onclick='callFacetime(ewsFacetime2);'>Medical Emergency Team (ap)</li>" +
                   "<li class=ItemRes><input type=button class=callButton value='Call' "+
                   "    onclick='callFacetime(ewsFacetime3);'>On Call House Surgeon (jb)</li>" +
                   "<li class=ItemRes><input type=button class=callButton value='Call' "+
                   "    onclick='callFacetime(ewsFacetime4);'>Nurse Supervisor Manager (jm)</li>" +
                   "<li class=ItemRes><input type=button class=callButton value='Call' "+
                   "    onclick='callFacetime(ewsFacetime2);'>Nurse Unit Manager (ba)</li>" +
                   "    </li>" +
                   "</ul>" +
                   "<p style='font-size:12px;'>NB: This could be configured use VOIP to telephone network/skype/etc"
}
function callFacetime(userName) {
  el=document.getElementById("facetime")
  el.src="facetime:"+userName
}
function MedAlert() {
  el=document.getElementById('ewsScore');
  el.className="ewsscore ews777"
  el.innerHTML="Early Warning Score : "+ewsScore;
  ewsText=document.getElementById('ewsText');
  ewsText.innerHTML="Contact Medical Emergency Team:<br>"+
                   "<ul><li>Stay With Patient.</li>"+
                   "    <li>SMS has been Sent to Medical Emergency Team.</li>"+
                   "    <li>Email has been sent to Medical Emergency Team.</li>"+
                   "</ul>"
  ShowEWSAlert()
  SendSMS();
  recipient ="backland@csc.com,brian.ackland@me.com"
  subject="MEDICAL ALERT"
  SendEmail(recipient,subject,messageText());
}
function SendSMS() {
  urnumber=AddForm.urnumber.value
  admissno=AddForm.admissno.value
  MobileNo="+61412515818"
  MessageText="MEDICAL ALERT PATIENT - "+trim(PatientLinks.patientName.value)+
              " ( " +trim(PatientLinks.urnumber.value) + ")" +
              " Location : " +trim(PatientLinks.patientLocation.value) +
              " Contact : " +trim(PatientLinks.userName.value)

  xmlHttp = createHttpObject();
  theURL = "sendsms.php?mobileNo="+encodeURIComponent(MobileNo);
  theURL = theURL + "&messageText="+encodeURIComponent(MessageText);
  theURL = theURL + "&urnumber="+encodeURIComponent(urnumber);
  theURL = theURL + "&admissno="+encodeURIComponent(admissno);
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();

  switch (trim(PatientLinks.secureid.value)) {
   case 'doc1' :
     return; break;
   case 'hd' :
     MobileNo=SMSPhoneHD; break;
   case 'mw' :
     MobileNo=SMSPhoneMW; break;
   case 'jm' :
     MobileNo=SMSPhoneJM; break;
   case 'hinz' :
     MobileNo=SMSPhoneHINZ; break;
  }

  theURL = "sendsms.php?mobileNo="+encodeURIComponent(MobileNo);
  theURL = theURL + "&messageText="+encodeURIComponent(MessageText);
  theURL = theURL + "&urnumber="+encodeURIComponent(urnumber);
  theURL = theURL + "&admissno="+encodeURIComponent(admissno);
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
}
function SendEmail(recipient,subject,message) {
  switch (trim(PatientLinks.secureid.value)) {
   case 'doc1' :
     recipient=ewsEmailBA; break;
   case 'hd' :
     recipient=ewsEmailHD; break;
   case 'mw' :
     recipient=ewsEmailMW; break;
   case 'jm' :
     recipient=ewsEmailJM; break;
   case 'hinz' :
     recipient=ewsEmailHINZ; break;
  }
  urnumber=AddForm.urnumber.value
  admissno=AddForm.admissno.value
  FromUser = trim(PatientLinks.userName.value)
  xmlHttp = createHttpObject();
  theURL = "sendeml.php?sendto="+encodeURIComponent(recipient);
  theURL = theURL + "&messageSubject="+encodeURIComponent(subject);
  theURL = theURL + "&messageText="+encodeURIComponent(message);
  theURL = theURL + "&fromuser="+encodeURIComponent(FromUser);
  theURL = theURL + "&urnumber="+encodeURIComponent(urnumber);
  theURL = theURL + "&admissno="+encodeURIComponent(admissno);
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
}
function messageText() {
  var pu = document.getElementById("inp_1");
  var bp = document.getElementById("inp_2");
  var rp = document.getElementById("inp_4");
  var op = document.getElementById("inp_11");
  var puValue = parseInt(pu.value,10);
  var rpValue = parseInt(rp.value,10);
  var opValue = parseInt(op.value,10);
  var bpValue = getResultFromMultiple(bp.value);
  var bpSystolic=bpValue[0];
  var bpDiastolic=bpValue[1];
  el=AddForm.obdet036
  lc=el.options[el.selectedIndex].text;
  message="<html><br>PATIENT : "+trim(PatientLinks.patientName.value)+
          "<br>EWS Score : "+ewsScore+
          "<br>Respiration: "+rpValue+
          "<br>Heart Rate: "+puValue+
          "<br>Blood Pressure: "+bpSystolic+"/"+bpDiastolic+
          "<br>4hr Urine Output: "+opValue+"ml"+
          "<br>Conciousness: "+lc+
          "<br>LOCATION : " +trim(PatientLinks.patientLocation.value) +
          "<br>CONTACT : " +trim(PatientLinks.userName.value)+
          "</html>"
   return message;
}
function EWS3() {
  recipient ="backland@csc.com,brian.ackland@me.com"
  subject="EARLY WARNING SYSTEM ALERT"
  SendEmail(recipient,subject,messageText());
  el=document.getElementById('ewsScore');
  el.className="ewsscore ews3"
  el.innerHTML="Early Warning Score : "+ewsScore;
  ewsText=document.getElementById('ewsText');
  ewsText.innerHTML="Click Call for Registrar Review within 20 minutes.<br>"+
                   "<ul><li>Inform PAR Nurse</li>"+
                   "<li>Inform House Officer</li>"+
                   "<li>Inform Nurse in Charge</li>"+
                   "</ul>"
  ShowEWSAlert()
}
function EWS2() {
  recipient ="backland@csc.com,brian.ackland@me.com"
  subject="EARLY WARNING SYSTEM ALERT"
  SendEmail(recipient,subject,messageText());
  el=document.getElementById('ewsScore');
  el.className="ewsscore ews2"
  el.innerHTML="Early Warning Score : "+ewsScore;
  ewsText=document.getElementById('ewsText');
  ewsText.innerHTML="House Office Review within 60 minutes:<br>"+
                   "<ul><li>Discuss with Nurse in Charge </li>" +
                   "<li>Inform PAR Nurse</li></ul>" 
  ShowEWSAlert()
}
function EWS1() {
  el=document.getElementById('ewsScore');
  el.className="ewsscore ews1"
  el.innerHTML="Early Warning Score : "+ewsScore;
  ewsText=document.getElementById('ewsText');
  ewsText.innerHTML="Manage pain,fever or distress:<br>"+
                    "<ul><li>Consider increasing frequency of observations</li>"+
                    "<li>Discuss with nurse in charge/referral for review</li></ul>"
  ShowEWSAlert()
}
function ShowEWSAlert() {
  el=document.getElementById('ewsAlert');
  el.style.display="";
  
}

function getResultFromMultiple(value) {
  var result = new Array();
  var length = value.length;
  var num1 = value.substr(0,value.indexOf("/"));
  var num2 = value.substr(value.indexOf("/")+1,length);

  result = [num1,num2];
  return result;
}


function calculateEWS() {
 ewsScore=0;
 var pu = document.getElementById("inp_1");
 var bp = document.getElementById("inp_2");
 var rp = document.getElementById("inp_4");
 var op = document.getElementById("inp_11");
 pu.className="tag";
 bp.className="tag";
 op.className="tag";
 rp.className="tag";
 var bpValue = getResultFromMultiple(bp.value);
 var bpSystolic=bpValue[0];
 var bpDiastolic=bpValue[1];
 if (!isWhitespace(bpSystolic)) {
   if (bpSystolic<70)  { bp.className="tag ews777";ewsScore+=8 }
   else if (bpSystolic<80&&bpSystolic<bpLower)  { bp.className="tag ews3";ewsScore+=3 }
   else if (bpSystolic<90&&bpSystolic<bpLower)  { bp.className="tag ews2";ewsScore+=2 }
   else if (bpSystolic>180&&bpSystolic>bpUpper) { bp.className="tag ews2";ewsScore+=2 }
   else if (bpSystolic<100&&bpSystolic<bpLower) { bp.className="tag ews1";ewsScore+=1 }
 }
 
 var rpValue = parseInt(rp.value,10);
 if (rpValue!="NaN") {
   if (rpValue<5||rpValue>35){ rp.className="tag ews777";ewsScore+=8 }
   else if ((rpValue<rpLower&&rpValue<9)||(rpValue>rpUpper&&rpValue>30)){ rp.className="tag ews3";ewsScore+=3 }
   else if (rpValue>20&&rpValue>rpUpper) { rp.className="tag ews2";ewsScore+=2 }
 }

 var puValue = parseInt(pu.value,10);
 if (puValue!="NaN") {
   if (puValue<41||puValue>139)  { pu.className="tag ews777";ewsScore+=8 }
   else if (puValue>130&&puValue>puUpper)   { pu.className="tag ews3";ewsScore+=3 }
   else if ((puValue<puLower&&puValue<50)||(puValue>puUpper&&puValue>110))  { pu.className="tag ews2";ewsScore+=2 }
   else if (puValue>100&&puValue>puUpper)   { pu.className="tag ews1";ewsScore+=1 }
 }

 var opValue = parseInt(op.value,10);
 if (opValue!="NaN") {
   if (opValue<80&&opValue<opLower)  { op.className="tag ews3";ewsScore+=3 }
   else if (opValue<120&&opValue<opLower)  { op.className="tag ews2";ewsScore+=2 }
 }

 el=AddForm.obdet036
 el.className="Mandatory"
 if (!isWhitespace(el.options[el.selectedIndex].value)) {
   lc=parseInt(el.options[el.selectedIndex].value,10);
   if (lc==1&&lcLimit<2) {el.className="Mandatory ews1"; ewsScore+=lc;}
   if (lc==2&&lcLimit<3) {el.className="Mandatory ews2"; ewsScore+=lc;}
   if (lc==3&&lcLimit<4) {el.className="Mandatory ews3"; ewsScore+=lc;}
   if (lc==8)            {el.className="Mandatory ews777"; ewsScore+=lc;}
 }

 el=AddForm.ewsvalue
 el.value=ewsScore;
 el.className="tag"
 if (ewsScore>1) el.className="tag ews1"
 if (ewsScore>3) el.className="tag ews2"
 if (ewsScore>5) el.className="tag ews3"
 if (ewsScore>7) el.className="tag ews777"
  
}

function calculateBSA() {
 var weight = document.getElementById("inp_9");
 var height = document.getElementById("inp_10");
 var bsaLabel = document.getElementById("bsavalue");
 var h = parseFloat(height.value);
 var w = parseFloat(weight.value);

 if(!isNaN(h) && !isNaN(w)){
   bsaLabel.value = Math.sqrt( (h * w) / 3600 ).toFixed(2);
 }

}

function calculateBMI() {
 var weight = document.getElementById("inp_9");
 var height = document.getElementById("inp_10");
 var bmiLabel = document.getElementById("bmivalue");
 var h = parseFloat(height.value);
 var w = parseFloat(weight.value);
 
 if(!isNaN(h) && !isNaN(w)){
   bmiLabel.value =  Math.round( w / ( ( h / 100 )  * ( h / 100 ) )) ;
 }
}
function getLatestEWS() {
  var xmlHttp = createHttpObject();
  var theURL="cliweb02.php?reportno=3&urnumber="+AddForm.urnumber.value.replace(/ /,"+")+
                                "&admissno="+AddForm.admissno.value.replace(/ /,"+")
  xmlHttp.open("GET", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send();
  if (xmlHttp.status == "200") {
   var h = document.getElementsByTagName("head")[0];
   var s = document.createElement("script");
   s.type="text/javascript";
   h.appendChild(s);
   s.text=xmlHttp.responseText;
   setDefaults();
  }
}
