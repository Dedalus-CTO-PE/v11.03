//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb1003711.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01       02.07.2013    B.G.Ackland Align tran and Work Scripts
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

var resultCollection = new Array();
var found = false; 
var count = 0;
var color = new Array();
var selectedItems = new Array();
var item_global = null;
var logScale = false;
var lastestMinDate;
var lastestMaxDate;

window.onload = function() {

  var div = document.getElementById('graphDiv');
  var data = new Array();
  var changeChartMenu = document.getElementById('changeChartMenu');
  var chartNumber = getQueryString('chart');
  var actionButton = parent.document.getElementById('actionButton');
  selectedItems.splice(selectedItems.length,0,chartNumber);

  if(actionButton) {
     
     actionButton.className = actionButton.className.replace(/SpanButtonBlue/g,"");
     actionButton.className = actionButton.className+" SpanButton";
     actionButton.innerText = "Done";
     actionButton.onclick = function () { parent.CloseDocument()};
  }

  loadGraphValues();

  for(var i = 0; i < resultCollection.length; i++) {
     var item = document.createElement('option');
     item.value = i ;
     if(typeof resultCollection[i] != 'undefined' ) {
       item.text = resultCollection[i].name;
       if(chartNumber == i) {
         item.selected = true;
          
       }

       changeChartMenu.appendChild(item);
       color[i] =  getColorFromWebSafeArray();
     }
  }

  if(typeof resultCollection[chartNumber] != 'undefined') {
    graph = new Graph({'width':graphWidth,
                     'height':graphHeight,
                     'plotPoint':true,
                     'parentDiv':div,
                     'background':'#ffffff',
                     'legendVisible':true,
                     'lineWidth':1,
                     'logScale':logScale
                    });

    var data = new Array();
  
    var dateTimeLength = resultCollection[chartNumber].dateTime.length-1;
    minDate = new Date(resultCollection[chartNumber].dateTime[dateTimeLength]);
    maxDate = new Date(resultCollection[chartNumber].dateTime[dateTimeLength]);

    lastestMinDate = new Date(resultCollection[chartNumber].dateTime[dateTimeLength]);
    lastestMaxDate = new Date(resultCollection[chartNumber].dateTime[dateTimeLength]);

    item_global = changeChartMenu.options;

    data[0] = resultCollection[chartNumber].dateTime;
    data[1] = resultCollection[chartNumber].data.slice();

    var dataset = new DataSet({"dataSetName":resultCollection[chartNumber].name,
                               "lineColor":"#000000",
                               "plotPoints":data,
                  	       "lineWidth":1,
                               "logScale":logScale,
                               "refMin":resultCollection[chartNumber].refMin,
                               "refMax":resultCollection[chartNumber].refMax
                              });

    graph.addDataSet(dataset);
  
    oneMonth();

    graph.draw();
  }else {
    var dateTimeLength = resultCollection[0].dateTime.length-1;
    minDate = new Date(resultCollection[0].dateTime[dateTimeLength]);
    maxDate = new Date(resultCollection[0].dateTime[dateTimeLength]);

    lastestMinDate = new Date(resultCollection[0].dateTime[dateTimeLength]);
    lastestMaxDate = new Date(resultCollection[0].dateTime[dateTimeLength]);

    graph = new Graph({'width':graphWidth,
                     'height':graphHeight,
                     'plotPoint':true,
                     'parentDiv':div,
                     'background':'#ffffff',
                     'legendVisible':true,
                     'lineWidth':1,
                     'logScale':logScale
                    });

    var data = new Array();

    item_global = changeChartMenu.options;


    data[0] = resultCollection[0].dateTime;
    data[1] = resultCollection[0].data.slice();

    var dataset = new DataSet({"dataSetName":resultCollection[0].name,
                               "lineColor":"#000000",
                               "plotPoints":data,
                               "lineWidth":1,
                               "logScale":logScale,
                               "refMin":resultCollection[0].refMin,
                               "refMax":resultCollection[0].refMax
                              });

    graph.addDataSet(dataset);

    oneMonth();
    graph.draw();
   };
};

function changeDateRange(value) {
  switch(parseInt(value,10)) {
    case 1:
       oneDay();
       break;
    case 2:
       oneWeek();
       break;
    case 3:
       oneMonth();
       break;
    case 4:
       threeMonths();
       break;
    case 5:
       sixMonths();
       break;
    case 6:
       oneYear();
       break;
    case 7:
       threeYears();
       break;
    case 8:
       sixYears();
       break;
     default:
       break;
  }
}


function changeGraph(item) {
  item_global = item;
  addItem=true;
  for (var i=0;i<selectedItems.length;i++) {
    if (item.options[item.selectedIndex].value==selectedItems[i]) {
      selectedItems.splice(i,1);
      addItem=false;
    }
  }
  if (addItem) {
      selectedItems.splice(selectedItems.length,0,item.options[item.selectedIndex].value);
  }
  var div = document.getElementById('graphDiv');
  div.innerHTML = '';
 
  if(typeof resultCollection[0] != 'undefined') {
    graph = new Graph({'width':graphWidth, 
                    'height':graphHeight,
                    'plotPoint':true,
                    'parentDiv':div,
                    'background':'#ffffff',
                    'legendVisible':true,
                    'logScale':logScale,
                    });

    minDate.setDate(minDate.getDate());
    graph.setMinDate(minDate);
    graph.setMaxDate(maxDate);
    graph.setNticks(nticks);
 
  //  for(var j = 0; j < item.length; j++) {
  //    if(item[j].selected) {
  //        var num = item[j].value;
    for(var j = 0; j < selectedItems.length; j++) {
          var num = selectedItems[j];

          var data = new Array();
          if(typeof resultCollection[num] != 'undefined' ) {
             data[0] = resultCollection[num].dateTime;
             data[1] = resultCollection[num].data.slice();
 
             var dataset = new DataSet({"dataSetName":resultCollection[num].name,
                                      "lineColor":color[j],
                                      "plotPoints":data,
                                      "lineWidth":1,
                                      "logScale":logScale,
                                      "refMin":resultCollection[num].refMin,
                                      "refMax":resultCollection[num].refMax
                                      });
             graph.addDataSet(dataset);
          }
//      }   
    }
    graph.draw();
  }else {
    alertify.alert("No dataset");
  }
}
function loadGraphValues() {
  Results = new Table();
  AddResultsRows();
  
  for(var i = 0; i < Results.rows.length; i++) {
    if(resultCollection.length == 0) {
        var value = parseFloat(Results.rows[i][2]);
        if( !isNaN(value) ) {
          resultCollection[count] = new Object();
          resultCollection[count].name = Results.rows[i][7];
          resultCollection[count].code = Results.rows[i][0];
          var refArray = Results.rows[i][3].split("-");
          resultCollection[count].refMin = ""+refArray[0];
          resultCollection[count].refMax = ""+refArray[1];
          resultCollection[count].dateTime = new Array();
          resultCollection[count].dateTime.push(FormatDateTime(Results.rows[i][1]).replace(/at/g,""));

          resultCollection[count].data = new Array();
          resultCollection[count].data.push(Results.rows[i][2]);
        }
    }else {
       for(var j= 0; j < resultCollection.length; j++) {
           var value = parseFloat(Results.rows[i][2]);
           if( !isNaN(value) ) {
             var rowName =  Results.rows[i][0]; 
             if( typeof resultCollection[j] != 'undefined') {
               if(resultCollection[j].code.replace(/ /g,"") == rowName.replace(/ /g,"")) {
                  resultCollection[j].dateTime.push(FormatDateTime(Results.rows[i][1]).replace(/at/g,""));
                  resultCollection[j].data.push(Results.rows[i][2]);
                  found = true;
                  break;
               }
             }
           }
      }
       
      if(!found) {
        var value = parseFloat(Results.rows[i][2]);
        if( !isNaN(value)) {
            count++;
            resultCollection[count] = new Object();
            resultCollection[count].name = Results.rows[i][7];
            resultCollection[count].code = Results.rows[i][0];
            var refArray = Results.rows[i][3].split("-");
            resultCollection[count].refMin = ""+refArray[0];
            resultCollection[count].refMax = ""+refArray[1];
            resultCollection[count].dateTime = new Array();
            resultCollection[count].dateTime.push(FormatDateTime(Results.rows[i][1]).replace(/at/g,""));

            resultCollection[count].data = new Array();
            resultCollection[count].data.push(Results.rows[i][2]);
       }
     }
     
     found = false;
   }
 }
}

function setNormalisation(bool) {
  if(bool == "true"){
     logScale = true;
  }else{
     logScale = false;
  }

  if(item_global != null) {
    changeGraph(item_global);
  }
}
