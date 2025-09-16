package javachart.chart;

import java.awt.Graphics;

/**
*	A DateAreaChart contains of 1 Area, 1 DateAxis for x values, and 1
*	StackAxis for y values.
* @see 	javachart.chart.Area
* @see	javachart.chart.DateAxis
* @see	javachart.chart.StackAxis
* @see	javachart.chart.Chart
*/
public class DAreaChart extends AreaChart{

/**
 *	constructs a default chart 
 */

	public DAreaChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 * @param	s	chart name
 */

	public DAreaChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 * @param	s	chart name
 * @param	g	Graphics class to use
 */

	public DAreaChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	void initAxes() {
		xAxis = new DateAxis(datasets, true, plotarea);
		xAxis.setBarScaling(false);
		yAxis = new StackAxis(datasets, false, plotarea);
	}
}
