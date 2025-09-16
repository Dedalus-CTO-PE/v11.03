// jsVersion  : V10.12.00
//
// Source Code:  ./ipad/graph/chart.class.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

function Chart(options){
  var options = {
    _name:	            options.name || 'new chart',
    _parentDiv:             options.parentDiv || null, 
    _dataSet:               options.dataSet || new Array(),
    _backgroundColor:       options.backgroundColor || '#ffffff',
    _id:                    options.id || '',
    _width:                 options.width || 600,
    _height:                options.height || 800,
    _title:                 options.title || '',
    _slots:                 options.slots || 16,
    _maxValue:              Math.ceil(options.maxValue/Math.pow(10,options.maxValue.toString().length-2))
                                       * Math.pow(10,options.maxValue.toString().length-2) || 4000,
    _numberOfLines:         options.numberOfLines || 10,
    _labelOff:              options.labelOff || false,
    _dateSpacing:           options.dateSpacing || 0
  }
  //global - private instance variable
  var _chart = null;
  var _arrayTouchValuesX = new Array();
  var _arrayTouchValuesY = new Array();
  var _arrayPlaceValuesX = new Array();
  var _arrayPlaceValuesY = new Array();
  var _arrayDataSetColor = new Array();
  var _arrayDataSetName  = new Array();
  
  //constants
  var CHART_WIDTH = options._width;
  var CHART_HEIGHT =  options._height;
  var SPACING_X = CHART_WIDTH - (CHART_WIDTH * 0.95);
  var SPACING_Y = CHART_HEIGHT - (CHART_HEIGHT * 0.95);
  var OFFSET_LEFT = CHART_WIDTH - (CHART_WIDTH * 0.98);
  var START_POS_X = (2 * SPACING_X);
  var START_POS_Y = (3 * SPACING_Y);
  var MAX_SLOTS = options._slots * 2;
  var CHART_POS_MIDDLE = "";
  var INTERVAL = (CHART_WIDTH - START_POS_X - OFFSET_LEFT) / MAX_SLOTS ;
  var RATIO = 8;

  var that = this; //keep ref. of the current chart object

 /**
  *	constructor
  **/
  if(options._parentDiv != null) {
    var insertBeforeObj = null;
    _chart = document.createElement('canvas');
    _chart.id = options._id+"_chart";

    _chart.width = options._width;
    _chart.height = options._height;
    _chart.className = "chart";
  
    insertBeforeObj = options._parentDiv.childNodes[0];

    if( insertBeforeObj == null) {
      options._parentDiv.appendChild(_chart);
    }else {
      options._parentDiv.insertBefore(_chart,insertBeforeObj);
    }

    /**************************************************************************
     *	setting up event listeners
     *************************************************************************/
    _chart.addEventListener('touchstart',function(e) {
        e.preventDefault();
        e.stopPropagation();

        if( e.touches[0].pageX > _chart.offsetLeft + SPACING_X + OFFSET_LEFT &&
            e.touches[0].pageX < options._width + _chart.offsetLeft ) {
          for(var l = 0; l < _arrayTouchValuesX.length; l++) {
            if( parseInt(_arrayTouchValuesX[l],10) + _chart.offsetLeft < e.touches[0].pageX+INTERVAL &&
                parseInt(_arrayTouchValuesX[l],10) + _chart.offsetLeft > e.touches[0].pageX-INTERVAL) {

                drawPopUp(_arrayPlaceValuesX[l],
                         _arrayPlaceValuesY[l],
                         _arrayTouchValuesX[l],
                         _arrayTouchValuesY[l]);

               return;
            }
          }
      }
    },true);


    _chart.addEventListener( 'mousemove', function(e) {
       if( e.pageX > _chart.offsetLeft+SPACING_X+OFFSET_LEFT &&
           e.pageX < options._width+_chart.offsetLeft ) {

         for( var l = 0; l < _arrayTouchValuesX.length; l++ ) {
           if( parseInt( _arrayTouchValuesX[l], 10 ) + _chart.offsetLeft < e.pageX + INTERVAL && 
               parseInt( _arrayTouchValuesX[l], 10 ) + _chart.offsetLeft  > e.pageX - INTERVAL ) {

	       drawPopUp( _arrayPlaceValuesX[l], //value X axis
                          _arrayPlaceValuesY[l], //value y axis
                          _arrayTouchValuesX[l], //x position
                          _arrayTouchValuesY[l]); //y position
               return;
            }
         }
       }

       e.preventDefault();
       e.stopPropagation();

    },true);

     _chart.addEventListener( 'touchmove', function(e) {
        if( e.touches[0].pageX > _chart.offsetLeft + SPACING_X + OFFSET_LEFT &&
            e.touches[0].pageX < options._width + _chart.offsetLeft ) {
          for(var l = 0; l < _arrayTouchValuesX.length; l++) {
            if( parseInt(_arrayTouchValuesX[l],10) + _chart.offsetLeft < e.touches[0].pageX+INTERVAL && 
                parseInt(_arrayTouchValuesX[l],10) + _chart.offsetLeft > e.touches[0].pageX-INTERVAL) {

                drawPopUp(_arrayPlaceValuesX[l],
                         _arrayPlaceValuesY[l],
                         _arrayTouchValuesX[l],
                         _arrayTouchValuesY[l]);

               return;
            }
          }
        }

        e.preventDefault();
        e.stopPropagation();
    },true);

     _chart.addEventListener('touchend',function(e) {
       that.draw();
       e.preventDefault();
       e.stopPropagation();
    },true);

     _chart.addEventListener('mouseout',function(e) {
       that.draw();
       e.preventDefault();
       e.stopPropagation();
    },true);
 
  } // end constructor 
  
 /**
  * private methods
  **/

 /****************************************************************************
  *	draw background
  ****************************************************************************/
  function drawChartBackground(){
    var ctx = _chart.getContext( '2d' );
    var metric = ctx.measureText( options._title );
    ctx.beginPath();
    ctx.fillStyle = options._backgroundColor;
    ctx.fillRect( 0 , 0, options._width, options._height );
    ctx.fill();
    ctx.closePath();
    ctx.save();
    ctx.restore();

    //chart title - display chart
 /*   ctx.beginPath();
    ctx.fillStyle = "#000";
    ctx.font = "bold 20px Arial";
    var stringAttribute = ctx.measureText(options._title);
    ctx.fillText( options._title,(options._width + SPACING_X - OFFSET_LEFT) / 2 - (stringAttribute.width/2), 30);
    ctx.closePath();
    ctx.save();
    ctx.restore(); */
  }
 /****************************************************************************
  * drawGridLines - draw the grid lines on the chart
  ***************************************************************************/
  function drawGridLines(){
    var ctx = _chart.getContext( '2d' );
 
    for(var i = 0; i <= MAX_SLOTS ; i++) {
      ctx.beginPath();
      ctx.lineWidth = 1;
      ctx.strokeStyle = "#efefef";

      if(i % 2 == 0) {   
        ctx.moveTo( START_POS_X + (INTERVAL * i), START_POS_Y );
        ctx.lineTo( START_POS_X + (INTERVAL * i), START_POS_Y );
        ctx.lineTo( START_POS_X + (INTERVAL * i), CHART_HEIGHT - SPACING_Y );
      }

      ctx.stroke();
      ctx.closePath();
      ctx.save();
      ctx.restore();
    }
  }
 /****************************************************************************
  * drawMiddleLine - draw middle line to indicate the zero value
  ***************************************************************************/
  function drawMiddleLine(startX,startY,endX){
    var ctx = _chart.getContext( '2d' );

    ctx.beginPath();
    ctx.lineWidth = 5;
    ctx.moveTo( startX, startY );
    ctx.lineTo( startX, startY );
    ctx.lineTo( endX, startY );

    ctx.stroke();
    ctx.closePath();
    ctx.save();
    ctx.restore();
  }
 /***************************************************************************
  * drawLabels - draw the labels oto the chart
  ***************************************************************************/
  function drawLabels(){
    var ctx = _chart.getContext( '2d' );
    var lineStartPosX = START_POS_X - 10;

    var stringNumber = "";
    var interval = 0;

    var numOfLines = options._numberOfLines * 2.5;
    var num = CHART_HEIGHT / numOfLines ;
    var num2 = options._maxValue;
    var n =   num2  / numOfLines * 2.5 ;
    RATIO = num / n;

    for(var i = 0 ; i < numOfLines - 4; i++) {
      ctx.beginPath();
      ctx.font = '10px Arial';
      ctx.lineWidth = 1;
      ctx.strokeStyle = "#efefef";
      interval = i * num;
      stringNumber = num2;

      if ( num2 == 0 ) {
         CHART_POS_MIDDLE = START_POS_Y + interval ;
         ctx.lineWidth = 5;
         stringNumber = num2;
      }

       ctx.moveTo( lineStartPosX, START_POS_Y + interval );
       ctx.lineTo( lineStartPosX, START_POS_Y + interval );
       ctx.lineTo( CHART_WIDTH-OFFSET_LEFT, START_POS_Y + interval );

       num2 -= n ;
       ctx.fillStyle = "#000";
       ctx.fillText( stringNumber, SPACING_X, START_POS_Y + 4 + interval );
       ctx.fill();
       ctx.stroke();
       ctx.closePath();
       ctx.save();
       ctx.restore();

     }
  }

 /*****************************************************************************
  * drawChartBarValue - draw chart bar value
  ****************************************************************************/
  function drawChartBarValue(){
    var ctx = _chart.getContext( '2d' );
    var textOffset = 6;
    var addOffset = 0;
    var gradient = null;
    var labelValue = "";
    var dataDates = options._dataSet[0];
    var dataValues = options._dataSet[1];

    for(var i = 0, j = 0; i <= MAX_SLOTS ; i++) {
      if( i % 2 ) {
        ctx.beginPath();
        ctx.lineWidth = INTERVAL ;
        if(typeof dataValues[j] != 'undefined') {

          if(dataValues[j] < 0 ) {

            gradient = ctx.createLinearGradient(0, 0, 0, CHART_HEIGHT );
            gradient.addColorStop(1, "#73AEC9");
            gradient.addColorStop(0.5, "#338Aee"); 
            gradient.addColorStop(0, "#0000FF"); 
            ctx.strokeStyle = gradient;
            addOffset = -2;

           }else if (dataValues[j] >= 0){

             gradient = ctx.createLinearGradient(0, 0, 0, CHART_POS_MIDDLE);
             gradient.addColorStop(0, "#ff0000");
             gradient.addColorStop(0.5, "#ee0000"); 
             gradient.addColorStop(1, "#aa0000"); 
 
             ctx.strokeStyle = gradient;
             addOffset = 3;

           }else {

             addOffset = 0;

           } 
 
           labelValue = dataValues[j] * RATIO  ;

         }else {
            if (j >= dataValues.length) {
              ctx.stroke();
              ctx.closePath();
              ctx.save();
	      ctx.restore();
               return;
            }

            labelValue = "X";
	    ctx.font = '10px Verdana';
         }

         if( labelValue != "X" ) {

           ctx.moveTo( START_POS_X +  INTERVAL * i, CHART_POS_MIDDLE  + addOffset);
           ctx.lineTo( START_POS_X +  INTERVAL * i, CHART_POS_MIDDLE  + addOffset); 
           ctx.lineTo( START_POS_X +  INTERVAL * i, CHART_POS_MIDDLE  - labelValue);
           addPlacement(dataDates[j],dataValues[j]+"ml");
           //store the coordinates
           addCoordinates( START_POS_X +  INTERVAL * i, CHART_POS_MIDDLE  - labelValue);

         }else {

           ctx.fillText(labelValue, START_POS_X + INTERVAL *  i - textOffset , CHART_POS_MIDDLE  + textOffset);
           addPlacement(dataDates[j],'not recorded');
           //store the coordinates
           addCoordinates( START_POS_X +  INTERVAL * i, CHART_POS_MIDDLE);

         }


         if(!options._labelOff) {
             ctx.font = '10px Arial';
             ctx.fillStyle = "#000";
             var tmpDate = dataDates[j].substring(0,7)+" "+dataDates[j].substring(9,11);
             var size = ctx.measureText(tmpDate);

           if(options._dateSpacing != 0) { 
             if(j % options._dateSpacing == 0) {
               ctx.fillText( tmpDate, START_POS_X + INTERVAL * i - ( size.width / 2 )+
                           options._dateSpacing*INTERVAL, SPACING_Y * 2 + 15 );
             }
           }else {
               ctx.fillText( tmpDate, START_POS_X + INTERVAL * i - ( size.width / 2 ), SPACING_Y * 2 + 15 );
           }
         }

         if( j < dataValues.length ) {
            j++;
         }else {
           break;
         }

         ctx.stroke();
         ctx.closePath();
         ctx.save();
	 ctx.restore();
       }
     }//end draw interval line
  }
   /***************************************************************************
    * drawPopUp
    **************************************************************************/
   function drawPopUp(valueX,valueY,x,y){
        var ctx = _chart.getContext('2d');

        drawChartBackground();
        drawGridLines();
        drawLabels();
        drawChartBarValue();

	//draw Box
	ctx.beginPath();
        ctx.lineWidth = 1;
	ctx.strokeStyle = "#FFCC33";

        if(x+140 < CHART_WIDTH) {
          ctx.moveTo(x,y);
          ctx.lineTo(x+10,y-10);
          ctx.lineTo(x+10,y-10);
          ctx.lineTo(x+10,y-20);
          ctx.lineTo(x+120,y-20);
          ctx.lineTo(x+120,y+20);
          ctx.lineTo(x+10,y+20);
          ctx.lineTo(x+10,y+10);
          ctx.lineTo(x,y);
        }else {
          ctx.moveTo(x,y);
          ctx.lineTo(x-10,y-10);
          ctx.lineTo(x-10,y-10);
          ctx.lineTo(x-10,y-20);
          ctx.lineTo(x-120,y-20);
          ctx.lineTo(x-120,y+20);
          ctx.lineTo(x-10,y+20);
          ctx.lineTo(x-10,y+10);
          ctx.lineTo(x,y);
        }

	ctx.fillStyle ="#FFFF99";
        ctx.fill();
	ctx.stroke();
	ctx.closePath();
	ctx.save();
	ctx.restore();
	
        //write text 
	ctx.beginPath();
        ctx.font = "12px Arial";

        if(x+140 < CHART_WIDTH) {  
          if(valueY < 0) {
            ctx.fillStyle = '#000';
            ctx.fillText(valueX,x+20,y);
            ctx.fillText(valueY,x+20,y+15);
          }else{
            ctx.fillStyle = '#000';
            ctx.fillText(valueX,x+20,y);
            ctx.fillText(valueY,x+20,y+15);
          }
        }else {
          if(valueY < 0) {
            ctx.fillStyle = '#000';
            ctx.fillText(valueX,x-100,y);
            ctx.fillText(valueY,x-100,y+15);
          }else{
            ctx.fillStyle = '#000';
            ctx.fillText(valueX,x-100,y);
            ctx.fillText(valueY,x-100,y+15);
          }

        }
        ctx.fill();
        ctx.stroke();
        ctx.save();
	ctx.restore();
	
   };; //drawPopUp

   /***************************************************************************
    * addCoordinates
    **************************************************************************/
   function addCoordinates(x,y) {
     _arrayTouchValuesX.push(x);
     _arrayTouchValuesY.push(y);
   };; //end addCoordinates

   /***************************************************************************
    * addPlacement
    **************************************************************************/
   function addPlacement(x,y) {
     _arrayPlaceValuesX.push(x);
     _arrayPlaceValuesY.push(y);
   };; //end addPlacement

 /**
  *  public methods
  **/

 /***************************************************************************
  * draw - draw the chart 
  **************************************************************************/
    this.draw = function() {
      var ctx = _chart.getContext( '2d' );
      ctx.clearRect( 0, 0, options._width, options._height );
      drawChartBackground();
      drawGridLines();
      drawLabels();
      drawChartBarValue();
    };
}
