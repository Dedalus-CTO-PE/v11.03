package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that looks like a gauge or speedometer.  This chart plots
 *	a single value (the first value added using the addDataset method)
 *	but draws a scale based on all Dataset information.
 */

public class SpeedoChart extends Chart{

	//Chart package classes
	Speedo		speedo;
	SpeedoAxis	yAxis;

/**
 *	constructs a default chart 
 */

	public SpeedoChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public SpeedoChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public SpeedoChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	//draw routines
	public void drawGraph() {
		if(canvas == null)
			return;
		drawGraph(canvas);
	}

	public void drawGraph(Graphics g) {
		if(g == null)
			return;
		super.drawGraph();
		background.draw(g);
		plotarea.draw(g);
/*
		if(speedo.needleStyle == 3) { 
*/
			yAxis.scale();
			speedo.draw(g);
			if(yAxisVisible)
				yAxis.draw(g);
/*
		}
		else {
			if(yAxisVisible)
				yAxis.draw(g);
			else
				yAxis.scale();
			speedo.draw(g);
		}
*/
	}

	//accessors
	public Speedo	getSpeedo() {
		return speedo;
	}
	public void setSpeedo(Speedo s) {
		speedo = s;
	}

	public AxisInterface	getYAxis() {
		return yAxis;
	}
	public void	setYAxis(SpeedoAxis axis) {
		yAxis = axis;
	}

	public void resize(int newWidth, int newHeight) {
		globals.maxY = newHeight;
		plotarea.resize(newWidth, newHeight);
		background.resize(newWidth, newHeight);
	}

	//utility methods
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		speedo = new Speedo(datasets, yAxis, plotarea);
		// set a default height/width
		resize(640, 480); 
	}

	void initAxes() {
		yAxis = new SpeedoAxis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
	}
}
