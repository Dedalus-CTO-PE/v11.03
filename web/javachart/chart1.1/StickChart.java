package javachart.chart;

import java.awt.Graphics;

/**
 *	A StickChart draws vertical lines from 0 (or the specified Bar 
 *	baseline) to each data point's Y value.
 */

public class StickChart extends Chart{

	//Chart package classes
	Stick			stick;
	AxisInterface		xAxis;
	AxisInterface		yAxis;

/**
 *	constructs a default chart 
 */

	public StickChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public StickChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public StickChart(String		s,
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
		if(xAxisVisible)
			xAxis.draw(g);
		else
			xAxis.scale();
		if(yAxisVisible)
			yAxis.draw(g);
		else
			yAxis.scale();
		stick.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

	//accessors
/**
 *	Inquire this chart's Stick component
 * @return	the Stick class used in this chart
 */
	public Stick	getStick() {
		return stick;
	}
/**
 *	Installs a new Stick component for this chart
 *
 * @param	s	New Stick component for this chart
 */
	public void setStick(Stick s) {
		stick = s;
	}

/**
 *	Inquires this chart's X Axis
 * @return	X axis
 */
	public AxisInterface	getXAxis() {
		return xAxis;
	}
/**
 *	Installs a new LabelAxis for this chart
 * @param	axis	new LabelAxis
 */
	public void setXAxis(LabelAxis axis) {
		xAxis = axis;
	}
/**
 *	Inquires this chart's Y axis
 * @return	Y axis
 */
	public AxisInterface	getYAxis() {
		return yAxis;
	}
/**
 *	Installs a new Axis for this chart
 * @param	axis	new Axis class
 */
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}

	//utility methods
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		stick = new Stick(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new DateAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		yAxis = new Axis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
	}
}
