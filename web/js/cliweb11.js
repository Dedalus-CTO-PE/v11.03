//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb91.js
//
// Written   : 09.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in patweb91  
//
// Version   :
//
// V9.11.02 27.11.2008 Jill Habasque  CAR 184636 
//          Fixed low/high point mandatory/readonly combinations
// V9.10.01 25.07.2008 Jill Habasque  CAR 174243
//          Created inclue
//
//========================================================================
//   Report 1
//========================================================================
var widthrep01 = 650;
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-widthrep01)/2
  DFrameLink(linkurl,0,Left,widthrep01,480)
}
function checkRange(theform){
 if((theform.reidt005[1].checked!=true)&&
    (theform.reidt005[2].checked!=true)&&
    (theform.reidt005[3].checked!=true)){
    theform.reidt006[0].disabled="true";
    theform.reidt006[1].disabled="true";
    theform.reidt006[2].disabled="true";
    theform.reidt007.className="Readonly"
    theform.reidt007.readOnly=true
    theform.reidt007.value=""
    theform.reidt008.className="Readonly"
    theform.reidt008.readOnly=true
    theform.reidt008.value=""
    theform.reidt009.className="Readonly"
    theform.reidt009.readOnly=true
    theform.reidt009.value=""
    theform.reidt010.className="Readonly"
    theform.reidt010.readOnly=true
    theform.reidt010.value=""
 }
  if((theform.reidt005[2].checked==true)||
    (theform.reidt005[3].checked==true)){
      theform.reidt006[0].disabled=false;
      theform.reidt006[1].disabled=false;
      theform.reidt006[2].disabled=false;
      theform.reidt007.className="Mandatory"
      theform.reidt007.readOnly=false
      theform.reidt008.className="Mandatory"
      theform.reidt008.readOnly=false
      theform.reidt009.className="Mandatory"
      theform.reidt009.readOnly=false
      theform.reidt010.className="Mandatory"
      theform.reidt010.readOnly=false
 }
  if(theform.reidt005[1].checked==true){
      theform.reidt006[0].disabled=false;
      theform.reidt006[1].disabled=false;
      theform.reidt006[2].disabled=false;
      theform.reidt007.className="Mandatory"
      theform.reidt007.readOnly=false
      theform.reidt008.className="Mandatory"
      theform.reidt008.readOnly=false
      theform.reidt009.className="Readonly"
      theform.reidt009.readOnly=true
      theform.reidt009.value=""
      theform.reidt010.className="Readonly"
      theform.reidt010.readOnly=true
      theform.reidt010.value=""
 }
  if(theform.reidt006[1].checked==true &&
     (theform.reidt005[1].checked==true)){
      theform.reidt007.className="Mandatory"
      theform.reidt007.readOnly=false
      theform.reidt008.className="Readonly"
      theform.reidt008.readOnly=true
      theform.reidt008.value=""
      theform.reidt009.className="Readonly"
      theform.reidt009.readOnly=true
      theform.reidt009.value=""
      theform.reidt010.className="Readonly"
      theform.reidt010.readOnly=true
      theform.reidt010.value=""
 }
  if(theform.reidt006[2].checked==true &&
     (theform.reidt005[1].checked==true)){
      theform.reidt007.className="Readonly"
      theform.reidt007.readOnly=true
      theform.reidt007.value=""
      theform.reidt008.className="Mandatory"
      theform.reidt008.readOnly=false
      theform.reidt009.className="Readonly"
      theform.reidt009.readOnly=true
      theform.reidt009.value=""
      theform.reidt010.className="Readonly"
      theform.reidt010.readOnly=true
      theform.reidt010.value=""
 }
  if(theform.reidt006[1].checked==true &&
     (theform.reidt005[2].checked==true || theform.reidt005[3].checked==true)){
      theform.reidt007.className="Mandatory"
      theform.reidt007.readOnly=false
      theform.reidt008.className="Readonly"
      theform.reidt008.readOnly=true
      theform.reidt009.className="Mandatory"
      theform.reidt009.readOnly=false
      theform.reidt010.className="Readonly"
      theform.reidt010.readOnly=true
      theform.reidt010.value=""
 }
  if(theform.reidt006[2].checked==true &&
     (theform.reidt005[2].checked==true || theform.reidt005[3].checked==true)){
      theform.reidt007.className="Readonly"
      theform.reidt007.readOnly=true
      theform.reidt008.className="Mandatory"
      theform.reidt008.readOnly=false
      theform.reidt009.className="Readonly"
      theform.reidt009.readOnly=true
      theform.reidt009.value=""
      theform.reidt010.className="Mandatory"
      theform.reidt010.readOnly=false
 }
  if(theform.reidt006[0].checked==true &&
     (theform.reidt005[2].checked==true || theform.reidt005[3].checked==true)){
      theform.reidt007.className="Mandatory"
      theform.reidt007.readOnly=false
      theform.reidt008.className="Mandatory"
      theform.reidt008.readOnly=false
      theform.reidt009.className="Mandatory"
      theform.reidt009.readOnly=false
      theform.reidt010.className="Mandatory"
      theform.reidt010.readOnly=false
 }
}

