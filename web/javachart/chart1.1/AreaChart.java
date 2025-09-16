package javachart.chart;

import java.awt.Graphics;

/**
 *	Creates and draws a conventional area chart, stacking y values at each
 *	observation.
 *	An AreaChart contains 1 Area component, 1 LabelAxis for x values, and 
 *	1 StackAxis for y values.
 *	Because data values must be "aligned" to be stacked rationally, X
 *	values are assumed to be monotonically increasing whole numbers.
 *	You can, however, use the AreaChart's LabelAxis to create whatever 
 *	labels are appropriate for your AreaChart.
 * @see 	javachart.chart.Area
 * @see	javachart.chart.LabelAxis
 * @see	javachart.chart.StackAxis
 * @see	javachart.chart.Chart
 */

public class AreaChart extends Chart{

	//Chart package classes
	Area              	area;
	AxisInterface		xAxis;
	AxisInterface		yAxis;

/**
 *	constructs a default chart 
 */
	public AreaChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */
	public AreaChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */
	public AreaChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

/**
 *	Draws an AreaChart on a predefined Graphics class
 */
	public synchronized void drawGraph() {
		if(canvas == null)
			return;
		drawGraph(canvas);
	}

/**
 *	Draws an AreaChart on the specified Graphics class
 * @param	g	Graphics class to draw on
 */
	public synchronized void drawGraph(Graphics g) {
		if(g == null)
			return;
		super.drawGraph();
		background.draw(g);
		plotarea.draw(g);
		xAxis.draw(g);
		yAxis.draw(g);
		area.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

	//Accessor methods
/**
 *	returns the Area component
 */
	public Area area() {
		return area;
	}

/**
 *	returns the AreaChart's X Axis
 */
	public AxisInterface getXAxis() {
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
 *	returns the AreaChart's Y Axis
 */
	public AxisInterface getYAxis() {
		return yAxis;
	}

/**
 *	sets a Y axis to be used by this chart.
 * @param	axis	usually an Axis class
 * @see		javachart.chart.Axis
 */
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}


	//utility methods
	synchronized void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		area = new Area(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(false);
		yAxis = new StackAxis(datasets, false, plotarea);
	}
}
