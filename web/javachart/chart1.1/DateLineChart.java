package javachart.chart;

import java.awt.Graphics;

/**
 *	A DateLineChart is the same as a LineChart but uses a DateAxis
 *	to represent X values
 * @see javachart.chart.DateAxis
 */

public class DateLineChart extends LineChart{

/**
 *	constructs a default chart 
 */

	public DateLineChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public DateLineChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public DateLineChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	protected void initAxes() {
		xAxis = new DateAxis(datasets, true, plotarea);
		yAxis = new Axis(datasets, false, plotarea);
	}
}
