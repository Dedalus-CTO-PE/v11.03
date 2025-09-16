package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that represents data with horizontal bars.  Multiple Datasets
 *	are stacked, one upon another, and each Dataset is drawn in a color
 *	defined by the Dataset Gc.
 */

public class StackBarChart extends BarChart{

/**
 *	constructs a default chart 
 */

	public StackBarChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public StackBarChart(       String          s) {
		super(s);
	}


/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public StackBarChart(String	s,
	    Graphics	g ) {
		super(s, g);
	}

	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		bar = new StackBar(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setSide(1);
		xAxis.setBarScaling(true);
		yAxis = new StackAxis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
		yAxis.setSide(0);
	}
}
