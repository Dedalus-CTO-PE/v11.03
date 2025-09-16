package javachart.chart;

import java.awt.Graphics;

/***
 * 	A derivative of conventional bar charts that draws bars using
 * 	a separate color for each bar.  This is done by using the Bar's
 * 	drawInd method.  Multiple datasets are clustered
 * 	side-by-side.
 *
 * @see javachart.chart.BarChart
 */

public class IndBarChart extends BarChart{

/**
 *	constructs a default chart 
 */

	public IndBarChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public IndBarChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public IndBarChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}
	public void addDataSet(String   s,
	    double   x[]) {

		if(numberOfDatasets < MAX_DATASETS) {
			datasets[numberOfDatasets] = new Dataset(s, x, true, globals);
			numberOfDatasets++;
		}
	}

	public void addDataSet(String		s,
	    double		x[],
	    String		dataLabels[]) {

		if(numberOfDatasets < MAX_DATASETS) {
			datasets[numberOfDatasets] = new Dataset(s, x, 
			    dataLabels, true, globals);
			numberOfDatasets++;
		}
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
		super.drawGraph(g);
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
		bar.drawInd(g);
		if(legendVisible)
			legend.draw(g);
	}

	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		background.globals = globals;
		initDataSets();
		initAxes();
		bar = new HorizBar(datasets, xAxis, yAxis, plotarea);
		legend = new PieLegend(datasets, globals);
		resize(640, 480); 
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
