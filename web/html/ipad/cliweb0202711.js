//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0202711.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

var pulseSlider = null;
var bpSlider = null;
var tempSlider = null;
var respSlider = null;
var outSlider = null;
var bslSlider = null;
var saO2Slider = null;
var painSlider = null;
var o2FlowSlider = null;
var weightSlider = null;
var heightSlider = null;

function init() {
  var actionButton = parent.document.getElementById('actionButton');

  if(actionButton) {
     //format the action button
     actionButton.className = actionButton.className.replace(/SpanButton/g,"");
     actionButton.className = actionButton.className.replace(/Blue/g,"");
     actionButton.className = actionButton.className + " SpanButtonBlue";
     actionButton.innerText = "Update";

     actionButton.onclick = function () {
                               submitObservation();
                            };
  }
  var loc=UpdateForm.c_obdet036.value
  for (var i=0;i<UpdateForm.obdet036.options.length;i++) {
    if (parseInt(UpdateForm.obdet036.options[i].value,10)==loc) {
      UpdateForm.obdet036.selectedIndex=i;
    }
  }
  var div = document.getElementById('rightPanel');
  var sliderDir = "../html/ipad/slider/";

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
  painSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});
  outSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                          "markerOn":true});
  tempSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});
  pulse = new Slider({"parentDiv":div,
		      "sliderDirectory":sliderDir,
		      "markerOn":true});
  bpSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                          "markerOn":true,
			  "multiMarker":true});
  
  bpSlider.setMarkerValue({"markValue1":105,
                           "markValue2":135})

  respSlider = new Slider({"parentDiv":div,
                          "sliderDirectory":sliderDir,
                           "markerOn":true});


  setSliderValue(painSlider,'Pain',10,0,1,0,'inp_7');  
  setSliderValue(outSlider,'4hr Urine Output',200,0,1,0,'inp_11');  
  setSliderValue(saO2Slider,'Oxygen Sat. (%)',100,80,0.5,1,'inp_6');  
  setSliderValue(o2FlowSlider,'O2 Flow Ltr/min',15,0,.5,1,'inp_8');  
  setSliderValue(bslSlider,'Blood sugar',20,0,0.1,1,'inp_5');  
  setSliderValue(tempSlider,'Temperature',41,31,0.5,1,'inp_3');  
  setSliderValue(pulse,'Heart Rate',200,20,1,0,'inp_1');  
  setSliderValue(bpSlider,'Blood pressure',200,30,5,0,'inp_2');  
  setSliderValue(respSlider,'Respiration',40,0,1,0,'inp_4');  
  determinweightrange();
  determinHeightRange();

  render(pulse,'inp_1');
  render(bpSlider,'inp_2');
  render(tempSlider,'inp_3');
  render(respSlider,'inp_4');
  render(bslSlider,'inp_5');
  render(saO2Slider,'inp_6');
  render(outSlider,'inp_11');
  render(painSlider,'inp_7');
  render(o2FlowSlider,'inp_8');
  render(weightSlider,'inp_9');
  render(heightSlider,'inp_10');

  window.onresize = function() {
     render(pulse,'inp_1');
     render(bpSlider,'inp_2');
     render(tempSlider,'inp_3');
     render(respSlider,'inp_4');
     render(bslSlider,'inp_5');
     render(outSlider,'inp_11');
     render(painSlider,'inp_7');
     render(saO2Slider,'inp_6');
     render(o2FlowSlider,'inp_8');
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

  //on blood pressure
  if(resultLabel == "inp_2" ) {
      // restore the markers
      obj.setMarkerValue({"markValue1":getResultFromMultiple(label.value)[1],
                             "markValue2":getResultFromMultiple(label.value)[0]
                            });

  } else {
      //on everything else restore just the first marker
      obj.setMarkerValue({"markValue1":getResultFromMultiple(label.value)[1],
                             "markValue2":0
                            });
  }

   //redraw the slider marker after markers are set on the grahp

  obj.drawGraph(title);
  obj.redrawMarker();
  label.style.display = "";
}

function determinHeightRange() {
  var maxHeight = 280;
  var minHeight = 50;
  var stepHeight = 1;
  var decimal  = 0;
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

function determinweightrange() {
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
function prepare() {
  if (validateMandatory(UpdateForm)) {
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
    var bloodPressure = getResultFromMultiple(inp_2.value);
    UpdateForm.obdet004.value = inp_1.value.replace(/ /g,"");
    UpdateForm.obdet006.value = bloodPressure[0];
    UpdateForm.obdet007.value = bloodPressure[1];
    UpdateForm.obdet005.value = inp_3.value;
    UpdateForm.obdet008.value = inp_4.value;
    UpdateForm.obdet034.value = inp_5.value;
    UpdateForm.obdet009.value = inp_6.value;
    UpdateForm.obdet041.value = inp_7.value;
    UpdateForm.obdet010.value = inp_8.value;
    UpdateForm.pmsvx045.value = inp_9.value;   
    UpdateForm.pmsvx046.value = inp_10.value;   
  }
}
function submitObservation() {
  prepare();
  var status = validateMandatory(UpdateForm);
  if (status == true) {
    var theURL = UpdateForm.action;
    var postStr = AJAXPostString2(UpdateForm);
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status == "200") {
      if ( xmlHttp.responseText.match(/location.href/i) ){
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }else{
        alertify.alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
      }
    }else{
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function getResultFromMultiple(value) {
  var result = new Array();
  var length = value.length;
  var num1 = value.substr(0,value.indexOf("/"));
  var num2 = value.substr(value.indexOf("/")+1,length);

  result = [num1,num2];
  return result;
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
