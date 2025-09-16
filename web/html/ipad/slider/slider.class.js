// jsVersion  : V10.12.00
//
// Source Code:  ./ipad/slider/slider.class.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

/******************************************************************************
 * VERSION      DATE              AUTHOR          COMMENTS
 * V1.00.01     27/02/2012        Jay Soeur       added floating point labels
 *                                                when decimal is greater 0
 * V1.00.00     16/11/2010        Jay Soeur       Created new slider class
 *
 *******************************************************************************/

/******************************************************************************
 *  class Slider
 *      param:  options - an object that initialises the the slider
 *              max:            sets the max scale of the slider
 *              min:            sets the min scale of the slider
 *              parentDiv:      the parent object that the slider is binded to
 *              resultLabel:    the result of the slider value binded to
 *              step:           the incremental steps of the scale
 *              id:             the id of the slider object
 *              onendcallback:  the on touch  event of the slider
 *              labelArray:     the collection of label objects
 *              decimalPlace:   
 *              markerOn:         
 *              title:            
 *              multiMarker:      
 *              separator:        
 *              lineColor:        
 *
 *       public methods:
 *             void deselectCurrentLabel()
 *             void drawGraph(title)
 *             void placeMarker()
 *             void redrawMarker()
 *             void renderSliderValues()
 *             void selectCurrentLabel()
 *             void selectCurrentLabel()
 *
 *             void setLabelArray(obj)
 *             void setLineColor(value)
 *             void setMarkerOn(bool)
 *             void setOnEnd(callback)
 *             void setSliderMinValue(value)
 *             void setSliderMaxValue(value)
 *             void setSliderValues(max,min,step,decimalPlace)
 *             void setResultLabel(obj)
 *
 *             obj getCurrentLabel()
 *             string getCurrentTitle()
 *
 *       private methods:
 *             int calculate(positionY)
 *             int convertToOffsetPosition(resultLabelValue)
 *             void onEnd()
 *             void setMultipleMarkEvent()
 *             void setSingleMarkEvent()
 *
 *****************************************************************************/

var _plotImage = new Image();
var _plotImage1 = new Image();
var _plotImage2 = new Image();
_plotImage.src = "../html/ipad/slider/handler_gray_1_pointer.png";
_plotImage1.src = "../html/ipad/slider/handler_gray_1_pointer.png";
_plotImage2.src = "../html/ipad/slider/handler_gray_1_pointer.png";

function Slider(options) {
    /**************************************************************************
     *   private instance variables
     **************************************************************************/

    var options = {
        _max:               options.max || 0,
        _min:               options.min || 0,
        _parentDiv:         options.parentDiv || null,
        _resultLabel:       options.resultLabel || null,
        _step:              options.step || 1,
        _id:                options.id || null,
        _onendcallback:     options.onendcallback || null,
        _currentPosition:   0,
        _currentPosition2:  0,
        _labelArray:        options.labelArray || null,
        _decimalPlace:      options.decimalPlace || 0,
        _markerOn:          options.markerOn || false,
        _title:             options.title || '',
        _multiMarker:       options.multiMarker || false,
        _separator:         options.separator || '/',
        _lineColor:         options.lineColor || "#3333ff",
        _markerCrossOver:   options.markerCrossOver || false,
        };

    //constant variables
    var MARK1 = 1;
    var MARK2 = 2;
    var NO_MARK = 0;
    var PADDING = 20;

    //store a refer to the current object Slider
    var _that = this;

    var _ratio;    //the ratio between slider height and max substract min value
    var _slider;   //the slider object
    var _marker = 0; // keep track of multiple plot points on the graph

    var mousepress = null;
    /**************************************************************************
     *   create the slider panel
     **************************************************************************/
    if(options._parentDiv != null) {
        _slider = document.createElement('canvas');
        //set the image path 

        _slider.id = options._id+"slider";
        _slider.className = "slider";

	var insertBeforeObj = null;
	insertBeforeObj = options._parentDiv.childNodes[0];
	if(insertBeforeObj == null) {
	  options._parentDiv.appendChild(_slider);
        }else {
	  options._parentDiv.insertBefore(_slider,insertBeforeObj);
        }
    
        _ratio = ((_slider.offsetHeight-(PADDING)*2)  / (options._max - options._min));

         /********************************************************************
          * event touchstart
          ********************************************************************/
        _slider.addEventListener("touchstart",function(e) {
            var touchY = e.touches[0].pageY ;

            if(options._multiMarker) {

		setMultiMarkEventStart( touchY );

            }else {
                
		if(options._resultLabel != null) {
                    options._resultLabel.value = calculate( touchY );
                }

                options._currentPosition = touchY;
            }
           
            if(options._markerOn === true) {
                _that.placeMarker();
            }

            e.stopPropagation();
            e.preventDefault();
            
        },true);

	 _slider.addEventListener("mousedown",function(e) {
            var mouseY = e.pageY ;
	    mousepress = true;

            if(options._multiMarker) {

                setMultiMarkEventStart( mouseY );

            }else {

                if(options._resultLabel != null) {
                    options._resultLabel.value = calculate( mouseY );
                }

                options._currentPosition = mouseY;
            }

            if(options._markerOn === true) {
                _that.placeMarker();
            }

            e.stopPropagation();
            e.preventDefault();

        },true);


        /**********************************************************************
         * event touchmove
         *********************************************************************/
        _slider.addEventListener("touchmove",function(e) {
            var touchY = e.touches[0].pageY ;
              if(options._multiMarker) {
                  setMultipleMarkEventMove(touchY);            
              }else {
                  setSingleMarkEventMove(touchY);
              }
           
              if(options._markerOn === true) {
                _that.placeMarker();
              }

              e.stopPropagation();
              e.preventDefault();
        },true);

        _slider.addEventListener("mousemove",function(e) {
            var mouseY = e.pageY ;
	     if(mousepress == true) {
               if(options._multiMarker) {
                  setMultipleMarkEventMove(mouseY);
               }else {
                  setSingleMarkEventMove(mouseY);
               }

               if(options._markerOn === true) {
                 _that.placeMarker();
               }

               e.stopPropagation();
               e.preventDefault();
             }
        },true);


        /**********************************************************************
         *  event touchend
         *********************************************************************/
        _slider.addEventListener('touchend',onEnd,false);
        _slider.addEventListener('mouseout',onEnd,false);
        _slider.addEventListener('mouseup',function(){mousepress=false;onEnd();},false);

    } else {
        alert('(parentDiv) is mandatory');
    }
 


    /**************************************************************************
    *  private methods
    ***************************************************************************/

    //this function calculates the result value given the position
    function calculate(y) {
        return ( ( Math.round( 
                                 ( 
                                    ( _slider.offsetHeight - y +  _slider.offsetTop ) / _ratio 
                                 ) / options._step 
                             ) * options._step 
                 ) + options._min 
               ).toFixed(options._decimalPlace);
    };
    

    //this function is the opposite of the calculate function, takes a result value and returns the position
    function convertToOffsetPosition(resultValue) {
       return (Math.round(
                            -(resultValue - options._min) * 
			      _ratio + _slider.offsetTop + _slider.offsetHeight
                         )
              );
    };

    function setMultiMarkEventStart(positionY) {
    //  if( options._currentPosition >= options._currentPosition2) {
        if( options._currentPosition == -Infinity && options._currentPosition2 == -Infinity) {
          _marker = MARK2;
          options._currentPosition = positionY + 50 ;
          options._currentPosition2 = positionY;
        }else if( options._currentPosition <= ( positionY + 25) && options._currentPosition >= ( positionY - 25)) {
          options._currentPosition = positionY;
          _marker = MARK1;
        }else if ( options._currentPosition2 <= ( positionY + 25) && options._currentPosition2 >= ( positionY - 25)) {
          options._currentPosition2 = positionY;
          _marker = MARK2;
	}else if (options._currentPosition < positionY) {
	  options._currentPosition = positionY;
          _marker = MARK1;
        }else if (options._currentPosition2 > positionY) {
	  options._currentPosition2 = positionY;
          _marker = MARK2;
        }else {
          _marker = NO_MARK;
          options._currentPosition2 = positionY;
          options._currentPosition = positionY + 25;
        }
     
	options._resultLabel.value =
                    calculate (options._currentPosition2 ) +
                    options._separator +
                    calculate (options._currentPosition );
    };
    /**************************************************************************
     *  set position of multi plot mark
     *************************************************************************/
    function setMultipleMarkEventMove(positionY) {
        var touchValue = calculate( positionY );

	if(options._markerCrossOver == false) {
          if( _marker == MARK1 ) {
            if( parseInt(touchValue,10) >= 
	        parseInt(calculate(options._currentPosition2),10) ) {
               options._currentPosition = options._currentPosition2;
	    }else if ( touchValue <= options._min ) {
                options._currentPosition = _slider.offsetHeight + _slider.offsetTop;
            }else {
                options._currentPosition = positionY;
            }
          }else if ( _marker == MARK2) {
             if( parseInt(touchValue,10) >= parseInt(options._max,10)) {
                options._currentPosition2 = _slider.offsetTop;
             }else if ( parseInt(touchValue,10) <= 
	                parseInt(calculate(options._currentPosition),10) ) {
                options._currentPosition2 = options._currentPosition;
             }else {
                options._currentPosition2 = positionY;
             }
          }

          options._resultLabel.value = 
                    calculate (options._currentPosition2 ) + 
                    options._separator + 
                    calculate (options._currentPosition );
        }else {  //allow multiple markers to cross over
	  if( _marker == MARK1 ) {
            if(touchValue >= options._max)
                options._currentPosition = 0;
            else if ( touchValue <= options._min )
                options._currentPosition = _slider.offsetHeight;
            else        
                options._currentPosition = positionY;
          }else if ( _marker == MARK2) {
            if(touchValue >= options._max)
                options._currentPosition2 = 0;
            else if ( touchValue <= options._min )
                options._currentPosition2 = _slider.offsetHeight;
            else
                options._currentPosition2 = positionY;
          }
          options._resultLabel.value = 
                    calculate (options._currentPosition ) + 
                    options._separator + 
                    calculate (options._currentPosition2 );
        }
    };

    /**************************************************************************
     *  set position of single plot mark
     *************************************************************************/
    function setSingleMarkEventMove( positionY ){
        var touchY = positionY;
        var value = calculate( touchY );
        var max = convertToOffsetPosition(options._max);
        var min = convertToOffsetPosition(options._min);
	//we reverse everything: coordinates start from 0,0 top,left
        if( options._resultLabel != null ) {
            if( touchY <= max ) {
                options._currentPosition = max;
                options._resultLabel.value = options._max.toFixed(options._decimalPlace);
            } else if( touchY >= min ) {
                options._currentPosition = min;
                options._resultLabel.value = options._min.toFixed(options._decimalPlace);
            } else {
                options._currentPosition = touchY ;
                options._resultLabel.value = value;
            }
        }
    };;



    function onEnd() {
        if(options._onendcallback != null )
            options._onendcallback();
    };


    /**************************************************************************
     *  public methods
     **************************************************************************/
    this.setOnEnd = function(callback) {
        options._onendcallback = callback;
    };


    this.setResultLabel = function(value) {
        options._resultLabel = value;
    };


    this.setLabelArray = function(values) {
        options._labelArray = values;
    };


    this.getCurrentLabel = function() {
        return options._resultLabel;
    };


    this.setSliderMaxValue = function(value) {
        options._max = value;
    };


    this.setSliderMinValue = function(value) {
        options._min = value;
    };

    this.drawGraph = function(title) {
        var forward = 0;
        var touchposition = 0;
        var START_POSITION_Y = 10.5;
        var START_POSITION_X = 53.5;
        var SECTIONS_REQUIRED = 10;
        var MAX = options._max.toFixed(options._decimalPlace);
        var MIN = options._min.toFixed(options._decimalPlace);
        var HEIGHT = _slider.offsetHeight;
        var WIDTH = _slider.offsetWidth ;
        var SPACING_X = 25;
        var SPACING_Y = 25;
        var context = _slider.getContext("2d");

        //width and height of the canvas
        _slider.width = WIDTH;
        _slider.height = HEIGHT;
        options._title = title;

        context.clearRect(0,0,WIDTH,HEIGHT);
        context.save();

        context.font = "12px arial ";
        context.translate(10, HEIGHT / 2);
        context.rotate( 270 * Math.PI / 180 );
        context.fillText(title, - ( context.measureText(title).width / 2 ), 2 );
        context.translate(10, HEIGHT / 2 );
        context.restore();
        context.font = "10px sans-serif";

	//draw the slider line
	context.save();
	context.beginPath();
	context.strokeStyle = "#ccc";
	context.lineWidth = 6;
	context.lineCap = "round";
        context.moveTo( WIDTH/1.44 , 6 );
        context.lineTo( WIDTH/1.44 , HEIGHT-6 );
	context.stroke();
	context.closePath();
        context.restore();

	context.save();
        context.moveTo( SPACING_X+25 , START_POSITION_Y -3  );
        context.lineTo( WIDTH, START_POSITION_Y -3 );
        context.textAlign = "right";
        context.fillText( MAX , SPACING_X+22, START_POSITION_Y  );
        xScale=MAX;



        for (var y = START_POSITION_Y + SPACING_Y; y < HEIGHT - 8; y += SPACING_Y) {
	  context.moveTo( SPACING_X+25, y );
          context.lineTo( WIDTH, y );
	  xScale = calculate(y+_slider.offsetTop);
          context.textAlign = "right";
	  if(options._decimalPlace > 0) {
            context.fillText((parseFloat(xScale,10)).toFixed(options._decimalPlace) ,SPACING_X+22, y + 3);
   	  }else {
            context.fillText((parseInt(xScale,10)).toFixed(options._decimalPlace) ,SPACING_X+22, y + 3);
	  }
        }

        context.strokeStyle = "#ccc";
        context.stroke();
    };
    
    this.setMarkerOn = function(bool) {
        options._markerOn = bool;
    };

    this.placeMarker = function() {
        if(options._markerOn === true) {
            this.drawGraph(this.getCurrentTitle());
            var ctx = _slider.getContext("2d");

            if(options._multiMarker) {
               ctx.save();
               ctx.beginPath();
               ctx.fillStyle = options._lineColor;
               if(options._currentPosition > options._currentPosition2) {
                 ctx.rect(_slider.offsetWidth / 1.47,options._currentPosition2-_slider.offsetTop,4,(options._currentPosition+_slider.offsetTop)-(options._currentPosition2+_slider.offsetTop));
               }else{
                 ctx.rect(_slider.offsetWidth / 1.47,options._currentPosition-(25/2)-_slider.offsetTop,4,(options._currentPosition2+_slider.offsetTop)-(options._currentPosition+_slider.offsetTop));
               }
               ctx.shadowColor = "black";
               ctx.shadowX = 5;
               ctx.shadowY = 5;
               ctx.shadowBlur = 5;
               ctx.fill();
               ctx.restore();
               ctx.save();
               ctx.beginPath();
               ctx.shadowColor = "black";
               ctx.shadowX = 0;
               ctx.shadowY = 0;
               ctx.shadowBlur = 0;
               ctx.drawImage(_plotImage1,_slider.offsetWidth / 2.48 ,options._currentPosition-(25/2)-_slider.offsetTop,50,25);
               ctx.closePath();
               ctx.restore();
               ctx.save();
               ctx.beginPath();
               ctx.shadowColor = "black";
               ctx.shadowX = 0;
               ctx.shadowY = 0;
               ctx.shadowBlur = 0;
               ctx.drawImage(_plotImage2,_slider.offsetWidth / 2.48 ,options._currentPosition2-(25/2)-_slider.offsetTop,50,25);
               ctx.fill();
               ctx.closePath();
               ctx.restore();
           }else {
               ctx.save();
               ctx.beginPath();
               ctx.fillStyle = options._lineColor;
               ctx.rect(_slider.offsetWidth / 1.47,options._currentPosition-_slider.offsetTop,4,_slider.offsetHeight+_slider.offsetTop);
               ctx.shadowColor = "black";
               ctx.shadowX = 5;
               ctx.shadowY = 5;
               ctx.shadowBlur = 5;
               ctx.fill();
               ctx.restore();
               ctx.save();
               ctx.beginPath();
               ctx.shadowColor = "black";
               ctx.shadowX = 0;
               ctx.shadowY = 0;
               ctx.shadowBlur = 0;
               ctx.drawImage(_plotImage,_slider.offsetWidth / 2.48 ,options._currentPosition-(25/2)-_slider.offsetTop,50,25);
               ctx.closePath();
               ctx.restore();
           }
        }
    };

    this.setSliderValues = function(max,min,step,decimalPlace) {
        options._min = min;
        options._max = max;
        options._step = step;
        options._decimalPlace = decimalPlace;
        this.renderSliderValues();
    };

    this.selectCurrentLabel = function() {
        options._resultLabel.className += " selected";
    };



    this.getCurrentTitle = function() {
        return options._title;
    };

    this.selectCurrentLabel = function() {
        options._resultLabel.className += " selected";
    };


    this.deselectCurrentLabel = function() {
        options._resultLabel.className =  options._resultLabel.className.replace( /selected/g ,"" );
    };


    this.renderSliderValues = function() {
        _ratio = ( (_slider.offsetHeight) / ( options._max - options._min ) );
    };

    this.setLineColor = function(value) {
        options._lineColor = value;
    };
    
    this.redrawMarker = function() {
        if(options._markerOn === true) {
          this.placeMarker();
        }
    };

   this.getSeparator = function() {
     return options._separator;
   };
 
   this.setMarkerOn = function(value) {
     options._markerOn = value;
   };

   this.setMultiMarker = function(value) {
       options._multiMarker = value;
    }; 
   
    this.setMarkerCrossOver = function(bool) {
       options._markerCrossOver = bool;
    }; 
   
   this.setMarkerValue = function(values) {
       var values = {
         _value1: values.markValue1 || 0,
         _value2: values.markValue2 || 0,
       }

       options._currentPosition = convertToOffsetPosition(values._value1);
       options._currentPosition2 = convertToOffsetPosition(values._value2);
   };

  this.bindTo = function(label) {
	label.style.left = (_slider.offsetLeft + label.offsetWidth/2)+14 + "px";
        label.style.top =  (_slider.offsetTop-label.offsetHeight) + "px";
  };
} 

