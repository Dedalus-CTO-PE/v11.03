//jsVersion  : V11.03.00
//========================================================================
// Program   : singaporeHRN.js
//
// Written   : 19.09.2006
//
// Function  : Standard Functions Used for singapore UR's    
//
// Version   :
//
// V9.07.01 19/09/2006  Jill Habasque CAR 109852
//                      Created include
//========================================================================
function checkSingaporeHRN(type,theField){
  if(type.value.substr(3,1)=="X"){
     return;
  }
  LenHRN=theField.value.length
  switch(LenHRN) {
    case 0:
      return true;
    case 8:
      num1=parseInt(theField.value.substr(0,1),10)*2;
      num2=parseInt(theField.value.substr(1,1),10)*7;
      num3=parseInt(theField.value.substr(2,1),10)*6;
      num4=parseInt(theField.value.substr(3,1),10)*5;
      num5=parseInt(theField.value.substr(4,1),10)*4;
      num6=parseInt(theField.value.substr(5,1),10)*3;
      num7=parseInt(theField.value.substr(6,1),10)*2;
      num8=(theField.value.substr(7,1));
      total=(num1+num2+num3+num4+num5+num6+num7)
      if(type.value.substr(3,1)=="T"|type.value.substr(3,1)=="G"){
        total=total+4;
      }
      divided=total/11
      divided=parseInt(divided,10);
      multiplied=divided*11
      diff=total-multiplied
      if(type.value.substr(3,1)=="S"|type.value.substr(3,1)=="T"){
        check="JZIHGFEDCBA";
      } else if(type.value.substr(3,1)=="F"|type.value.substr(3,1)=="G"){
        check="XWUTRQPNMLK";
      } else {
      alert("Invalid HRN type. ");
        theField.focus()
        return false;
      }
      calcdigit=check.substr(diff,1);
      if(calcdigit==num8){
        return true;
      }
      else {
        alert("Invalid HRN Number")
        theField.focus()
        return false;
      }
    default:
      alert("HRN Number must be 9 characters in length")
      theField.focus()
      return false;
  }
}
