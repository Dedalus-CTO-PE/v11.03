//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb0201713.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

var dateArray = new Array();
var captureAllEye = new Array();
var captureAllVerbal = new Array();
var captureAllMotor = new Array();
var captureAllTotal = new Array();
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
    actionBtn.className += " SpanButton";
    
    actionBtn.innerText = "Done";
    actionBtn.onclick = function() {
       parent.CloseDocument();
    }
  }

  loadGraphValues();

  data[0] = dateArray;
  data[1] = captureAllEye.slice();

  graph = new Graph({'width':graphWidth,
                     'height':graphHeight,
                     'plotPoint':true,
                     'parentDiv':div,
                     'background':'#ffffff',
                     'legendVisible':true,
                     'logScale':logScale,
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

  var dataset = new DataSet({"dataSetName":"Eye",
                             "lineColor":"#324F85",
                             "plotPoints":data});
  graph.addDataSet(dataset);
  graph.draw();
};
function changeGraph(item) {
  var div = document.getElementById('graphDiv');
  div.innerHTML = '';
 
  graph = new Graph({'width':graphWidth,
                    'height':graphHeight,
                    'plotPoint':true,
                    'parentDiv':div,
                    'background':'#ffffff',
                    'legendVisible':true,
                    'logScale':logScale,
                    'lineWidth':1
                    });

  minDate.setDate(minDate.getDate());
  graph.setMinDate(minDate);
  graph.setMaxDate(maxDate);
  graph.setNticks(nticks);

  for(var i =0; i < item.length; i++) {
    if(item[i].selected) {
      switch(parseInt(item[i].value,10)) {
        case 1:
          var data = new Array();

          data[0] = dateArray;
          data[1] = captureAllEye.slice();

          if(captureAllEye.length > 0) {
            var dataset = new DataSet({"dataSetName":"Eye",
                             "lineColor":"#324F85",
                             "plotPoints":data});
            graph.addDataSet(dataset);
          }
          break;
        case 2:
          var data = new Array();

          data[0] = dateArray;
          data[1] = captureAllVerbal.slice();

          if(captureAllVerbal.length > 0) {
            var dataset = new DataSet({"dataSetName":"Verbal",
                             "lineColor":"#ff4F85",
                             "plotPoints":data});
            graph.addDataSet(dataset);
          }
          break;
       case 3:
          var data = new Array();

          data[0] = dateArray;
          data[1] = captureAllMotor.slice();

          if(captureAllMotor.length > 0) {
            var dataset = new DataSet({"dataSetName":"Motor",
                             "lineColor":"#32ff85",
                             "plotPoints":data});
            graph.addDataSet(dataset);
          }

          break; 
      case 4:
        var data = new Array();

        data[0] = dateArray;
        data[1] = captureAllTotal.slice();

        if(captureAllTotal.length > 0) {
            var dataset = new DataSet({"dataSetName":"Total",
                             "lineColor":"#111155",
                             "plotPoints":data});
            graph.addDataSet(dataset);

        }
        break;
      default:
        break;
   }
  }
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
    var eye = new Object();
    var verbal = new Object();
    var motor = new Object();
    var total = new Object();
    
    dates = FormatDateTime(t.rows[i][1]).replace(/at/g,"");;
    eye = t.rows[i][15];
    captureAllEye.push(eye);
    dateArray.push(dates);

    verbal = t.rows[i][16];
    captureAllVerbal.push(verbal);
    motor = t.rows[i][17];
    captureAllMotor.push(motor);

    total = t.rows[i][18];
    captureAllTotal.push(total);
  }
}
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

