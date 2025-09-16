//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0201.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

var graph = null;

var graphWidth;
var graphHeight;
var minDate;
var maxDate;
var nticks;
graphWidth = 950;
graphHeight = 450;

function oneDay() {
  setMinMax(1,12);
}

function oneWeek() {
  setMinMax(6,7);
}

function oneMonth() {
  setMinMax(29,6);
}

function threeMonths() {
  setMinMax(29*3,8);
} 

function sixMonths() {
  setMinMax(29*6,4);
}

function oneYear() {
  setMinMax(365,5);
}

function threeYears() {
  setMinMax(3*365,9);
}

function sixYears() {
  setMinMax(6*365,10);
}

function convertToMMM(m) {
  var MMM = "";
  switch(parseInt(m,10)) {
    case 0:
      MMM = 'Jan';
      break;
    case 1:
      MMM = 'Feb';
      break;
    case 2:
      MMM = 'Mar';
      break;
    case 3:
      MMM = 'Apr';
      break;
    case 4:
      MMM = 'May';
      break;
    case 5:
      MMM = 'Jun';
      break;
    case 6:
      MMM = 'Jul';
      break;
    case 7:
      MMM = 'Aug';
      break;
    case 8:
      MMM = 'Sep';
      break;
    case 9:
      MMM = 'Oct';
      break;
    case 10:
      MMM = 'Nov';
      break;
    case 11:
      MMM = 'Dec';
      break;
    default:
      break;
  }
  return MMM;
}

function setMinMax(value,n) {
//  minDate = new Date();
//  maxDate = new Date();

  var yyyymmddhhmm1 = "";

  yyyymmddhhmm1 = lastestMinDate.getDate()+" "+convertToMMM(lastestMinDate.getMonth()) +
                 " "+lastestMinDate.getFullYear()+" 00:00";

  minDate = new Date(yyyymmddhhmm1);
  maxDate = new Date (yyyymmddhhmm1);
  
  minDate.setDate(minDate.getDate()-value);
  maxDate.setDate(maxDate.getDate());

  graph.setMinDate(minDate);
  graph.setMaxDate(maxDate);
  nticks = n;
  graph.setNticks(n);
  graph.draw();
  displayDate(nticks);
}


function nextDay() {
 var value  = 1;

  if(nticks == 4) {
       value = 29;
  }else if(nticks == 6) {
      //value = 29;
      value = 7;
  }else if( nticks == 8 ) {
      value = 29;
  }else if (nticks == 5) {
      value = 29 * 2;
  }else if (nticks == 9) {
      value = 29*6;
  }else if (nticks == 10) {
      value = 29 * 6;
  }else if(nticks == 7) {
     value = 1;
  } else {
    value = 1;
  }

  minDate.setDate(minDate.getDate() + value);
  maxDate.setDate(maxDate.getDate() + value);
  graph.setMinDate(minDate);
  graph.setMaxDate(maxDate);

  graph.setNticks(nticks);
  graph.draw();
  displayDate(nticks);
}

function previousDay() {
 var value  = 1;

 if(nticks == 4) {
       value = 29;
  }else if(nticks == 6) {
      //value = 29;
      value = 7;
  }else if( nticks == 8 ) {
      value = 29;
  }else if (nticks == 5) {
      value = 29 * 2;
  }else if(nticks == 7) {
     value = 1;
  }else if (nticks == 9) {
      value = 29 * 6;
  }else if (nticks == 10) {
      value = 29 * 6;
  } else {
    value = 1;
  }

  minDate.setDate(minDate.getDate() - value);
  maxDate.setDate(maxDate.getDate() - value);
  graph.setMinDate(minDate);
  graph.setMaxDate(maxDate);
  graph.setNticks(nticks);
  graph.draw();
  displayDate(nticks);
}


function displayDate(nticks) {
  var displayDate = document.getElementById('displayDate');

  if(nticks == 12 || nticks == 7) {
    maxTime =  maxDate.toString().substring(0,21);
    minTime =  minDate.toString().substring(0,21);

    yy = minTime.substring(11,15);
    dd = minTime.substring(8,10);
    mmm =  minTime.substring(4,8);
    ddd = minTime.substring(0,3);
    tttt = minTime.substring(16,21);

    if(nticks == 12) {
      displayDate.innerText = ddd+", "+dd+" "+mmm+" "+yy+" ";
    }else if(nticks == 7) {
      displayDate.innerText = mmm+" "+yy+" ";
    }

    displayDate.style.display = "";

  }else {
     displayDate.style.display = "none";
  }
}

function setDateRange(min,max) {

  if(typeof min != 'string')  {
     min = min.value;
     max = max.value;
  }

  if(min.replace(/ /g,"").length == 0) {
      alertify.alert("From date is a required field");
      return;
  }

  if(max.replace(/ /g,"").length == 0) {
      alertify.alert("To date is a required field");
      return;
  }

  if( min.replace(/ /g,"") == max.replace(/ /g,"")) {
     alertify.alert("'From date' has to be greater than 'To date'");
     return;
  }


  nticks = graph.setMinMaxWithDateRange(min,max);
  graph.draw();
  displayDate(nticks);
}

//-----------------------------------------------------------------------------
// get color from web safe color array
//-----------------------------------------------------------------------------
var webSafeColors = ["#000033","#333333","#666633","#653312", 
                     "#33AA33","#333366","#8823C2","#44BB83",
                     "#AA4444","#44AA44","#4444AA","#AAAA00",
                     "#006600","#000066","#666666","#FFFF00",
                     "#FF0000","#00FF00","#0000FF","#000000"];

function getColorFromWebSafeArray() {
   return webSafeColors.pop();
}

