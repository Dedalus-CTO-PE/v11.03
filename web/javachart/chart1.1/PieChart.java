package javachart.chart;

import java.awt.Graphics;

/**
 *	A conventional Pie chart containing a single Pie with one slice per 
 *	data point, a PieLegend, a Plotarea, and a Background
 */

public class PieChart extends Chart{

	Pie		pie;

/**
 *	constructs a default chart 
 */

	public PieChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 * @param	s	chart name
 */

	public PieChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 * @param	s	chart name
 * @param	g	Graphics class to use
 */

	public PieChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

/**
 *	Draws the entire chart to the predefined Graphics class
 */
	public void drawGraph() {
		if(canvas == null)
			return;
		drawGraph(canvas);
	}

/**
 *	Draws the entire chart on the specified Graphics class
 * @param	g	Graphics class to draw
 */
	public void drawGraph(Graphics g) {
		if(g == null)
			return;
		super.drawGraph();
		background.draw(g);
		pie.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

/**
 *	Creates a new Dataset and Legend based on this data array
 * @param	s	Dataset name
 * @param	y	Array of pie slice values
 */
	public void addDataSet(String   s,
	    double   y[]) {
		PieLegend pl;

		pie.dataset = new Dataset(s, y, true, globals);
		datasets[0] = pie.dataset;
		pl = (PieLegend) legend;
		pl.dataset = pie.dataset;
		numberOfDatasets = 1;
	}

/**
 *	Creates a Dataset and PieLegend based on this value and label array
 * @param	s		Dataset name
 * @param	y		Array of pie values
 * @param	dataLabels	Pie slice labels
 */
	public void addDataSet(String		s,
				double		y[],
				String		dataLabels[]) {
		PieLegend pl;

		pie.dataset = new Dataset(s, y, dataLabels, true, globals);
		datasets[0] = pie.dataset;
		pl = (PieLegend) legend;
		pl.dataset = pie.dataset;
		numberOfDatasets = 1;
	}

/**
 *	This chart's Pie component
 */
	public	Pie getPie() {
		return pie;
	}
/**
 *	Install a new Pie class for this chart
 */
	public void setPie(Pie p) {
		pie = p;
	}

	void initChart() {
		initGlobals();
		background = new Background(globals);
		plotarea = new Plotarea(globals);
		initDataSets();
		pie = new Pie((Dataset)null, plotarea, globals);
		legend = new PieLegend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}
}
