//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0201711.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01       02.07.2013                   Align tran and Work Scripts
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

/**********************************************************
 *  Saroeun Soeur v10.00.01
 *   display alert on no data 
 **********************************************************/

var captureAllPulse = new Array();
var dateArray = new Array();
var selectedItems = new Array();

var captureAllTemp = new Array();
var captureAllResp = new Array();
var captureBP1 = new Array();
var captureBP2 = new Array();
var captureAllSaO = new Array();
var captureAllFO = new Array();

var item_global = null;
var logScale = false;

var lastestMinDate;
var lastestMaxDate;

window.onload = function() {

  var div = document.getElementById('graphDiv');
  var data = new Array();

  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButton";
    actionBtn.innerText = "Done";
    actionBtn.onclick = function() {
       parent.CloseDocument();
    }
  }


  loadGraphValues();

  
  data[0] = dateArray;
  data[1] = captureAllPulse.slice();

  if(dateArray.length > 0 ) {
    graph = new Graph({'width':graphWidth,
                     'height':graphHeight,
                     'plotPoint':true,
                     'parentDiv':div,
                     'background':'#ffffff',
                     'legendVisible':true,
                     'lineWidth':1
                    });
    var dateTimeLength = dateArray.length - 1;
  
    minDate = new Date(dateArray[dateTimeLength]);
    maxDate = new Date(dateArray[dateTimeLength]);

    lastestMinDate = new Date(dateArray[dateTimeLength]);
    lastestMaxDate = new Date(dateArray[dateTimeLength]);
    oneWeek();

    var item = document.getElementById('chartSelect1');
    item_global = item.options;
    selectedItems.splice(selectedItems.length,0,"1");
    var dataset = new DataSet({"dataSetName":"Pulse",
                             "lineColor":"#0000FF",
                             "plotPoints":data,
                            });

    graph.addDataSet(dataset);

    graph.draw();
  }else {
    alertify.alert("No observations present for this patient.");
    parent.CloseDocument();
  } 
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
  graph = null;
  graph = new Graph({'width':graphWidth,
                    'height':graphHeight,
                    'plotPoint':true,
                    'parentDiv':div,
                    'background':'#ffffff',
                    'legendVisible':true,
                    'lineWidth':1,
                    'logScale':logScale
                    });

  minDate.setDate(minDate.getDate());
  graph.setMinDate(minDate);
  graph.setMaxDate(maxDate);
  graph.setNticks(nticks);
  
    for(var i = 0; i < selectedItems.length; i++) {
//         var num = selectedItems[j];
// for(var i = 0; i < item.length ; i++ ) {
//   if(item[i].selected) {
//     switch(parseInt(item[i].value,10)) {
     switch(parseInt(selectedItems[i],10)) {
       case 1:
         var data = new Array();

         data[0] = dateArray;
         data[1] = captureAllPulse.slice();

        if(captureAllPulse.length > 0) {
          var dataset = new DataSet({"dataSetName":"Pulse",
                                     "lineColor":"#0000FF",
                                     "plotPoints":data,
                                    });

          graph.addDataSet(dataset);

        }
        break;
      case 2:
        var data = new Array();

        data[0] = dateArray;
        data[1] = captureAllTemp.slice();;

        var dataset = new DataSet({"dataSetName":"Body Temp.",
                                      "lineColor":"#00FF00",
                                      "plotPoints":data,
                                      });
        graph.addDataSet(dataset);
        break;
     case 3:
       var data = new Array();

       data[0] = dateArray;
       data[1] = captureAllResp.slice();

       if(captureAllResp.length > 0) {
           var dataset = new DataSet({"dataSetName":"Respiratory",
                                      "lineColor":"#FF0000",
                                      "plotPoints":data,
                                      });
          graph.addDataSet(dataset);
       }

      break; 
    case 4:
      var data = new Array();
      var data2 = new Array();
      var data3 = new Array();
      data[0] = dateArray;
      data[1] = captureBP1.slice();

      data2[0] = dateArray;
      data2[1] = captureBP2.slice();


      if(captureBP1.length > 0) {
         var dataset1 = new DataSet({"dataSetName":"Systolic",
                                      "lineColor":"#660000",
                                      "plotPoints":data,
                                      });
         var dataset2 = new DataSet({"dataSetName":"Diastolic",
                                      "lineColor":"#AA0000",
                                      "plotPoints":data2,
                                      });

          graph.addDataSet(dataset1);
          graph.addDataSet(dataset2);
      }
      break;
    case 5:
      var data = new Array();

      data[0] = dateArray;
      data[1] = captureAllSaO.slice();

      if(captureAllSaO.length > 0) {
         var dataset = new DataSet({"dataSetName":"SaO",
                                      "lineColor":"#006600",
                                      "plotPoints":data,
                                      });

       
          graph.addDataSet(dataset);
      }

      break;
    case 6:
      var data = new Array();

      data[0] = dateArray;
      data[1] = captureAllFO.slice();

      if(captureAllFO.length > 0) {
         var dataset = new DataSet({"dataSetName":"FO",
                                      "lineColor":"#00AA00",
                                      "plotPoints":data,
                                      });
          graph.addDataSet(dataset);
      }
      break;
    default:
      break;
   }
//  }
 }

 if(graph != null)
  graph.draw();
}
function loadGraphValues() {
  t = new Table();
  AddObservationRows();
  SortOrderBy=1;
  t.rows.sort();
  
  for(var i = 0; i < t.rows.length; i++) {
    var pulse = new Object();
    var temp = new Object();
    var resp = new Object();
    var bp = new Object();
    var sao = new Object();
    var fo = new Object();
    
    dates = FormatDateTime(t.rows[i][1]).replace(/at/g,"");;
    pulse = t.rows[i][4];
    captureAllPulse.push(pulse);
    dateArray.push(dates);

    temp = t.rows[i][5];
    captureAllTemp.push(temp);
    resp = t.rows[i][6];
    captureAllResp.push(resp);
    bp = t.rows[i][7];
    
    var bpArray = bp.split("/");
    captureBP1.push(bpArray[0]);
    captureBP2.push(bpArray[1]);

    sao = t.rows[i][8];
    captureAllSaO.push(sao);
    fo = t.rows[i][9];
    captureAllFO.push(fo);
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
