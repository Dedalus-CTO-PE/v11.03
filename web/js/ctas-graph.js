/*  01 : CTAS : 23-AUG-2016 : Regional Customisations

*/
function createCanvas (divname, width, height) {
	var graphdiv = document.getElementById(divname);
	var canvas = document.createElement("canvas");
	canvas.width = width;
	canvas.height = height;
	graphdiv.appendChild(canvas);
	var ctx = canvas.getContext("2d");
	return ctx;
}	

function drawGrid (context, color, stepx, stepy) {
	context.strokeStyle = color;
	context.lineWidth = 0.5;
	
	for (var i = stepx + 0.5; i < context.canvas.width; i += stepx) {
		context.beginPath();
		context.moveTo(i, 0);
		context.lineTo(i, context.canvas.height);
		context.stroke();
	}
	
	for (var i = stepy + 0.5; i < context.canvas.height; i += stepy) {
		context.beginPath();
		context.moveTo(0, i);
		context.lineTo(context.canvas.width, i);
		context.stroke();		
	}
}	
	
function drawGraph(graphdiv, height, width) {	
	// public properties
	this.values;
	this.labels;
	this.colors = ["navy"];
	this.VERTICAL_AXIS_INTERVAL = 10;
	this.title;
	this.legendlabels;
	this.labelFont = "12px Calibri";

	graph = this;
	
	var ctx = createCanvas(graphdiv, height, width);
	
	// private properties
	var maxValue;
	var minValue;
	var largestValue;
	var smallestValue;
	var NUM_VERTICAL_TICKS;
	var VERTICAL_TICK_SPACING;
	var AXIS_ORIGIN;
	
	function calcParams() {
		// constants	
		HORIZONTAL_AXIS_MARGIN = 50;
		VERTICAL_AXIS_MARGIN = 50;
		HORIZONTAL_LABEL_SIZE = 85;
		LEGEND_HEIGHT = 20;

		GRAPH_BOTTOM = { x: HORIZONTAL_AXIS_MARGIN,
						y: ctx.canvas.height - VERTICAL_AXIS_MARGIN - HORIZONTAL_LABEL_SIZE };
		AXIS_TOP = VERTICAL_AXIS_MARGIN;
		AXIS_RIGHT = ctx.canvas.width - HORIZONTAL_AXIS_MARGIN;
		
		AXIS_WIDTH = AXIS_RIGHT - GRAPH_BOTTOM.x;
		AXIS_HEIGHT = GRAPH_BOTTOM.y - AXIS_TOP;
		
		TICK_WIDTH = 10;
		TICKS_LINE_WIDTH = 0.5;
		TICKS_COLOR = 'black';	
		
		AXIS_LINEWIDTH = 1.0;
		AXIS_COLOR = 'black';
		
		SPACE_BETWEEN_LABELS_AND_AXIS = 20;
		
		// determine span of axes
		maxValue = graph.values[0][0];
		minValue = graph.values[0][0];
		for (var i=0; i<graph.values.length; i++) {
			for (var j=0; j<graph.values[i].length; j++) {
				if (graph.values[i][j] > maxValue) { maxValue = graph.values[i][j]; }
				if (graph.values[i][j] < minValue) { minValue = graph.values[i][j]; }
			}
		}	
				
		// determine length of vertical axis
		largestValue = maxValue + graph.VERTICAL_AXIS_INTERVAL-(maxValue%graph.VERTICAL_AXIS_INTERVAL);
		if (minValue < 0) {
			tmp = Math.abs(minValue);
			smallestValue = -1 * (tmp + graph.VERTICAL_AXIS_INTERVAL-(tmp%graph.VERTICAL_AXIS_INTERVAL));
		} else { smallestValue = 0; }
			
		VERTICAL_AXIS_LENGTH = largestValue + Math.abs(smallestValue);	
		NUM_VERTICAL_TICKS = VERTICAL_AXIS_LENGTH / graph.VERTICAL_AXIS_INTERVAL;
		VERTICAL_TICK_SPACING = AXIS_HEIGHT/NUM_VERTICAL_TICKS;
		
		// determine location of axis origin
		if (minValue < 0 ) {
			AXIS_ORIGIN = { x: GRAPH_BOTTOM.x,
							y: GRAPH_BOTTOM.y - 
								(Math.abs(smallestValue)/graph.VERTICAL_AXIS_INTERVAL) 
								* VERTICAL_TICK_SPACING };
		} else {
			AXIS_ORIGIN = GRAPH_BOTTOM;
		}
	}
	
	function drawHorizontalAxis() {
		ctx.beginPath();
		ctx.moveTo(GRAPH_BOTTOM.x, AXIS_ORIGIN.y);
		ctx.lineTo(AXIS_RIGHT, AXIS_ORIGIN.y);
		ctx.stroke();		
	}
	
	function drawVerticalAxis() {
		ctx.beginPath();
		ctx.moveTo(GRAPH_BOTTOM.x, GRAPH_BOTTOM.y);
		ctx.lineTo(GRAPH_BOTTOM.x, AXIS_TOP);
		ctx.stroke();
	}
	
	function drawVerticalAxisTicks() {
		var deltaX;	
		for (var i=1; i < NUM_VERTICAL_TICKS; ++i) {
			ctx.beginPath();
			if (i%graph.VERTICAL_AXIS_INTERVAL === 0) deltaX = TICK_WIDTH;
			else deltaX = TICK_WIDTH/2;
			
			ctx.moveTo(GRAPH_BOTTOM.x - deltaX,
					GRAPH_BOTTOM.y - i * VERTICAL_TICK_SPACING);
			ctx.lineTo(GRAPH_BOTTOM.x + deltaX,
					GRAPH_BOTTOM.y - i * VERTICAL_TICK_SPACING);
			ctx.stroke();
		}
	}
	
	function drawAxes() {
		ctx.save();
		ctx.strokeStyle = AXIS_COLOR;
		ctx.lineWidth = AXIS_LINEWIDTH;
		
		drawHorizontalAxis();
		drawVerticalAxis();
		
		ctx.lineWidth = TICKS_LINE_WIDTH;
		ctx.strokeStyle = TICKS_COLOR;
		
		drawVerticalAxisTicks();
		drawHorizontalAxisLabels();
		drawVerticalAxisLabels();
		
		ctx.restore();
	}
	
	function drawHorizontalAxisLabels() {
		ctx.textAlign = 'left';
		ctx.textBaseline = 'middle';
		ctx.font = graph.labelFont;
		ctx.fillStyle = "black";
		
		labelInterval = AXIS_WIDTH/graph.labels.length;
		for (var i=0; i<graph.labels.length; i++) {
			label = graph.labels[i];				
			ctx.translate(GRAPH_BOTTOM.x + i*labelInterval + labelInterval/2, 
				GRAPH_BOTTOM.y + 2);	
			ctx.rotate(90 * Math.PI/180);
			ctx.fillText(label,0,0, VERTICAL_AXIS_MARGIN + HORIZONTAL_LABEL_SIZE);
			ctx.setTransform(1, 0, 0, 1, 0, 0);			
		}
	}
	
	function drawVerticalAxisLabels() {
		ctx.textAlign = 'right';
		ctx.textBaseline = 'middle';
		ctx.font = graph.labelFont;
		ctx.fillStyle = "black";
		
		ylabel = smallestValue;
		for (var i=0; i <= NUM_VERTICAL_TICKS; ++i) {
			ctx.fillText(ylabel,
				GRAPH_BOTTOM.x - SPACE_BETWEEN_LABELS_AND_AXIS,
				GRAPH_BOTTOM.y - i * VERTICAL_TICK_SPACING);
			ylabel += graph.VERTICAL_AXIS_INTERVAL;
		}
	}
	
	function drawBackgroundLines(color) {
		ctx.strokeStyle = color;
		ctx.lineWidth = 0.5;
		for (var i=0; i<= NUM_VERTICAL_TICKS; i++) {
			ctx.beginPath();
			ctx.moveTo(GRAPH_BOTTOM.x, GRAPH_BOTTOM.y - i * VERTICAL_TICK_SPACING);
			ctx.lineTo(AXIS_RIGHT, GRAPH_BOTTOM.y - i * VERTICAL_TICK_SPACING);
			ctx.stroke();		
		}		
	}
	
	 function drawTitle() {
		ctx.textAlign = 'center';
		ctx.textBaseline = 'top';
		ctx.font = "bold 14px calibri";
		ctx.fillStyle = "black";
		ctx.fillText(graph.title, ctx.canvas.width/2, 5);
	}
	
	function drawLegend(x, y, width) {
		SWATCH_SIDE = 10;
		SPACING = 2;
		PADDING = 10;
		
		// determine label size
		ctx.font = graph.labelFont;
		maxwidth = 0;
		maxheight = 10;
		for (var i=0; i<graph.legendlabels.length; i++) {
			var txt = ctx.measureText(graph.legendlabels[i]);
			if (txt.width > maxwidth) { maxwidth = txt.width; }
			if (txt.height > maxheight) { maxheight = txt.height; }
		}		
		
		numItemsPerRow = Math.floor(width/(SWATCH_SIDE + SPACING + maxwidth));
		itemWidth = SWATCH_SIDE + SPACING + maxwidth + PADDING;
		itemHeight = maxheight + SPACING;
		
		for (var i=0; i<graph.legendlabels.length; i++) {
			if (graph.legendlabels[i]) {
				// draw color block
				ctx.fillStyle = graph.colors[i%graph.colors.length];
				ctx.fillRect(x + (i%numItemsPerRow) * itemWidth,
					y + Math.floor(i/numItemsPerRow) * itemHeight,
					SWATCH_SIDE,
					SWATCH_SIDE);
				
				// draw label
				ctx.font = graph.labelFont;
				ctx.fillStyle = "black";
				ctx.textAlign = "left";
				ctx.textBaseline = "middle";
				ctx.fillText(graph.legendlabels[i],
					x + (i%numItemsPerRow) * itemWidth + SWATCH_SIDE + SPACING, 
					y + Math.floor(i/numItemsPerRow) * itemHeight + SWATCH_SIDE/2);
			}
		}
		
		// return legend height to caller (width is fixed)
		return graph.legendlabels.length%numItemsPerRow * itemHeight;
	}		
	
	this.drawBarChart = function() {
		calcParams();
		drawTitle();
		legendheight = 0;
		if (graph.legendlabels) {
			legendheight = drawLegend(GRAPH_BOTTOM.x,30,AXIS_WIDTH);
		}
		drawAxes();	
		drawBackgroundLines('#d6d6c2');
		
		BARSET_SPACING = 10;
		labelInterval = AXIS_WIDTH/graph.labels.length;
		barsetWidth = labelInterval - BARSET_SPACING;
		barWidth = barsetWidth/graph.values.length;
		
		for (j=0; j<graph.labels.length; j++) {
			for (i = 0; i < graph.values.length; i++) {
				
				// calculate bar height
				ratio = graph.values[i][j] / largestValue;
				barHeight = ratio * (AXIS_ORIGIN.y - AXIS_TOP);			
				
				// draw bar
				ctx.fillStyle = graph.colors[i%graph.colors.length];
				ctx.fillRect(AXIS_ORIGIN.x + j*labelInterval + i*barWidth,
					AXIS_ORIGIN.y - barHeight,
					barWidth,
					barHeight);	
			}
		}						
	}
}
