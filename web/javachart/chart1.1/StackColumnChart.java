package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that represents data with vertical bars.  Multiple Datasets
 *	are stacked, one upon another, and each Dataset is drawn in a color
 *	defined by the Dataset Gc.
 */

public class StackColumnChart extends BarChart{

/**
 *	constructs a default chart 
 */

	public StackColumnChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public StackColumnChart(       String          s) {
		super(s);
	}


/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public StackColumnChart(String	s,
	    Graphics	g ) {
		super(s, g);
	}

	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		bar = new StackColumn(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		yAxis = new StackAxis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
	}
}
