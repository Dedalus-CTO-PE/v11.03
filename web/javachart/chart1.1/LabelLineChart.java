package javachart.chart;

import java.awt.Graphics;

/**
 *	A Line chart that uses a LabelAxis for the X axis to provide 
 *	user-defined labels.
 *
 * @see	javachart.chart.LineChart
 */

public class LabelLineChart extends LineChart{

/**
 *	constructs a default chart 
 */

	public LabelLineChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public LabelLineChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public LabelLineChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	//utility methods
    protected void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		line = new Line(datasets, xAxis, yAxis, plotarea);
		legend = new LineLegend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	protected void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(false);
		yAxis = new Axis(datasets, false, plotarea);
	}
}
