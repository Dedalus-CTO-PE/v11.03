package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that represents data values in columns.
 */

public class BarChart extends Chart{

	//Chart package classes
	Bar			bar;
	AxisInterface		xAxis;
	AxisInterface		yAxis;

/**
 *	constructs a default chart 
 */

	public BarChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 * @param	s	chart name
 */

	public BarChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 * @param	s	chart name
 * @param	g	Graphics class to use
 */

	public BarChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}
/**
 *	draw the complete Bar chart
 */
	public void drawGraph() {
		if(canvas == null)
			return;

		drawGraph(canvas);
	}

/**
 *	draw the complete Bar Chart on the specified Graphics class
 */
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
		bar.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

	//accessors
/**
 *	returns the Bar class used in this chart
 */
	public Bar	getBar() {
		return bar;
	}
/**
 *	sets the Bar class to be used by this chart
 */
	public void setBar(Bar b) {
		bar = b;
	}

/**
 *	returns the X axis used in this chart
 */
	public AxisInterface	getXAxis() {
		return xAxis;
	}
/**
 *	sets an X axis to be used by this chart.
 * @param	axis	a LabelAxis for X values
 * @see		javachart.chart.LabelAxis
 */
	public void setXAxis(LabelAxis axis) {
		xAxis = axis;
	}

/**
 *	returns the Y axis used in this chart
 */
	public AxisInterface	getYAxis() {
		return yAxis;
	}
/**
 *	sets a Y axis to be used by this chart.
 * @param	axis	usually an Axis class
 * @see		javachart.chart.Axis
 * @see		javachart.chart.StackAxis
 * @see		javachart.chart.HiLoAxis
 */
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}

	//utility methods
/**
 *	initialize overall chart
 */
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		bar = new Bar(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

/**
 *	initialize this chart's axes
 */
	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		yAxis = new Axis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
	}
}
