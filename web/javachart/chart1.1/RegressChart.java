package javachart.chart;

import java.awt.Graphics;

/**
 *	Subclasses LineChart to draw each dataset with a Regress component
 *	rather than a Line component
 */

public class RegressChart extends LineChart{

/**
 *	constructs a default chart 
 */

	public RegressChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public RegressChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public RegressChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	 protected void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		line = new Regress(datasets, xAxis, yAxis, plotarea);
		legend = new LineLegend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}
}
