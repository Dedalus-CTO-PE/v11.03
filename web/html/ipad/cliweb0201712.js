//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0201712.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

var _dataArray = new Array();
var _dataAcc = new Array();
var _max = 0;
var _data;

window.onload = function() {
 var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className += " SpanButton";
    actionBtn.innerText = "Done";
    actionBtn.onclick = function() {
       parent.CloseDocument();
    }
  }

   
  loadGraphValues();
  dailyFrequencyChart(["2400"]);  
  drawChart("Once Daily",0);

};

function drawChart(value,num) {
  _data = new Array();
  var div = document.getElementById('graphDiv');

  _data[0] = _dataAcc[0];
  _data[1] = _dataAcc[1];

  div.innerHTML = "";

  if(_data[0].length != 0) {
    var chart = new Chart({"parentDiv":div,
                         "title":"Fluid Chart "+value,
                         "slots":_data[0].length,
                         "width":600,
                         "height":400,
                         "dataSet":_data,
                         "maxValue":_max,
                         "labelOff":false,
                         "dateSpacing":num
                          });
    chart.draw();

  }else {
     alertify.alert("nothing to chart");
  }
}

var aArray = new Array();

function loadGraphValues() {
  t = new Table();
  AddObservationRows();
  SortOrderBy=1;
  t.rows.sort();

  var tt = new Array();
  var dt = new Array();

  for(var i = 0; i < t.rows.length; i++) {
    var fluid = new Object();

    fluid.dateValue = (t.rows[i][1]).replace(/at/g,"");
    fluid.output = t.rows[i][12];
    fluid.input  = t.rows[i][14];
    _dataArray.push(fluid);
    
  }
  
  var oneDay = 1000 * 60 * 60;
  var yyyy; 
  var mm;
  var dd;
  var hr;
  var min;
  var sec;

  var nd = _dataArray[_dataArray.length-1].dateValue.replace(/at/g,"").replace(/ /g,"").replace(/:/g,"");

  yyyy = nd.substring(0,4);
  mm = nd.substring(4,6);
  dd = nd.substring(6,8);
  hr = nd.substring(8,10);
  min = nd.substring(10,12);
  sec = nd.substring(12,14);
  var cmpDate = new Date(yyyy,mm-1,dd,hr,min,sec);
       
  for(var j = 0, k = _dataArray.length - 1 ; j < 30; j++) {
       nd = _dataArray[k].dateValue.replace(/at/g,"").replace(/ /g,"").replace(/:/g,"");
       yyyy = nd.substring(0,4);
       mm = nd.substring(4,6);
       dd = nd.substring(6,8);
       hr = nd.substring(8,10);
       min = nd.substring(10,12);
       sec = nd.substring(12,14);

       var dt1 = new Date(yyyy,mm-1,dd,hr,min,sec);

       var tmpDate1=dt1.getFullYear()+""+(leadingZero(dt1.getMonth()+1))+""+(leadingZero(dt1.getDate()));
       var tmpDate2=cmpDate.getFullYear()+""+(leadingZero(cmpDate.getMonth()+1))+""+(leadingZero(cmpDate.getDate())); 

       if( tmpDate1 == tmpDate2) {
           //add dateTime of rows
           aArray.push(_dataArray[k]);
           k--;
       }else {
           var fluid2 = new Object();
           var tttt = cmpDate;
           var dummy = new Date(tttt);

           dummy = dummy.getFullYear()+""+(leadingZero(dummy.getMonth()+1))+
                   ""+(leadingZero(dummy.getDate()))+
                   ""+leadingZero(dummy.getHours())+":"+
                   leadingZero(dummy.getMinutes())+":"+
                   leadingZero(dummy.getSeconds());

           fluid2.dateValue = dummy;
           fluid2.output="0";
           fluid2.input="0";
           aArray.push(fluid2);
           cmpDate = (cmpDate.getTime() - oneDay*i);
           cmpDate = new Date(cmpDate);
           //add dummy dateTime
       }

  }
 
  _dataArray = aArray.reverse();
}

function leadingZero(val) {
  if((""+val).length == 1) {
    return "0"+""+val.toString();
  }else {
    return val;
  }
}

function changeChartFrequency(value) {
  var num = 0;
  var title = "";

  switch(value){
    case "1":
      dailyFrequencyChart(["2400"]);  
      title = "Once Daily";
      num = 0;
      break;
    case "2":
      dailyFrequencyChart(["1200","2400"]);  
      title = "Twice Daily";
      num = 2;
      break;
    case "3":
      dailyFrequencyChart(["0600","1200","1800","2400"]);  
      title = "Four Times Daily";
      num = 4;
      break;
    default:	
  }

  drawChart(title,num);

}

function dailyFrequencyChart(times){
  var tt = new Array();
  var dt = new Array();

  var valueIn = new Array();
  var valueOut = new Array();
  var label = "";

  var prevDate = undefined;
  _dataAcc = new Array();

  if(typeof _dataArray[0] != 'undefined') {
    prevDate = _dataArray[0].dateValue.replace(/ /g,'');
  }

  for(var j = 0; j < times.length; j++) {
    valueIn[j] = 0;
    valueOut[j] = 0;
  }

  for(var i = 0; i < _dataArray.length; i++){
    if( typeof _dataArray[0] != 'undefined') {

       if(_dataArray[i].dateValue.replace(/ /g,'').substring(0,8) == prevDate.replace(/ /g,'').substring(0,8)) {

	 var intDate = _dataArray[i].dateValue.replace(/ /g,'').substring(8,13).replace(/:/g,'');
	 intDate = parseInt(intDate);
 
         for(var j = 0; j < times.length; j++) {
	   if(parseInt(intDate,10) < parseInt(times[j],10)) {
             if(!isNaN(_dataArray[i].input.replace(/ /g,''))) {
               if(_dataArray[i].input.replace(/ /g,'').length != 0) {
                 valueIn[j] = parseInt(valueIn[j]) + parseInt(_dataArray[i].input.toString(),10);
               }
             }
           
             if(!isNaN(_dataArray[i].output.replace(/ /g,''))) {
               if(_dataArray[i].output.replace(/ /g,'').length != 0) {
                  valueOut[j] = parseInt(valueOut[j]) + parseInt(_dataArray[i].output.toString(),10);
               }   
             }
             break;
            }
         }

       }else {
         for(var j = 0; j < times.length; j++) {
           if(times.length == 1) {
             label = "";
           }else if( times.length == 2) {
             if(j % 2) {
               label = "PM";
             }else{
               label = "AM";
             }
           }else {
             if(j < times.length/2) {
               label = "AM";
             }else {
               label = "PM";
             }
          }

           dt.push(FormatDate(prevDate)+" "+label);
           if(valueIn[j] == 0 && valueOut[j] == 0) {
              var num;
              tt.push(num);
           }else {
              tt.push( valueIn[j] - valueOut[j] );
           }

           if(Math.abs(valueIn[j]) > _max) {
             _max = Math.abs(valueIn[j]);
           }

           if(Math.abs(valueOut[j]) > _max) {
             _max = Math.abs(valueOut[j]);
           }
 
         }
 
         for(var j = 0; j < times.length; j++) {
           valueIn[j] = 0;
           valueOut[j] = 0;
         }
	 
	 intDate = _dataArray[i].dateValue.replace(/ /g,'').substring(8,13).replace(/:/g,'');

         for(var j = 0; j < times.length; j++) {
	   if(parseInt(intDate,10) < parseInt(times[j],10)) {
             if(!isNaN(_dataArray[i].input.replace(/ /g,''))) {
               if(_dataArray[i].input.replace(/ /g,'').length != 0) {
                 valueIn[j] = parseInt(valueIn[j]) + parseInt(_dataArray[i].input.toString(),10);
               }
             }
           
             if(!isNaN(_dataArray[i].output.replace(/ /g,''))) {
               if(_dataArray[i].output.replace(/ /g,'').length != 0) {
                  valueOut[j] = parseInt(valueOut[j]) + parseInt(_dataArray[i].output.toString(),10);
               }   
             }
             break;
            }
         }

         prevDate = _dataArray[i].dateValue;
       }
    }
  }

  for(var j = 0; j < times.length; j++) {
    if(times.length == 1) {
      label = "";
     }else if( times.length == 2) {
       if(j % 2) {
         label = "PM";
       }else{
         label = "AM";
       }
     }else {
        if(j < times.length/2) {
           label = "AM";
         }else {
           label = "PM";
         }
    }

    dt.push(FormatDate(prevDate)+" "+label);
    tt.push( valueIn[j] - valueOut[j] );

    if(Math.abs(valueIn[j]) > _max) {
      _max = Math.abs(valueIn[j]);
    }

    if(Math.abs(valueOut[j]) > _max) {
      _max = Math.abs(valueOut[j]);
    }
  }

  _dataAcc.push(dt);
  _dataAcc.push(tt);
  
}


