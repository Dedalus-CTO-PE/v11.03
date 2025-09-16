package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that represents data with horizontally arranged bars
 */

public class HorizBarChart extends BarChart{

/**
 *	constructs a default chart 
 */

	public HorizBarChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public HorizBarChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public HorizBarChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		bar = new HorizBar(datasets, xAxis, yAxis, plotarea);
		bar.globals = globals;
		legend = new Legend(datasets, globals);
		// set a default height/width
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setSide(1);
		xAxis.setBarScaling(true);
		yAxis = new Axis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
		yAxis.setSide(0);
	}
}
