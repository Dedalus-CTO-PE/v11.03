package javachart.chart;

import java.awt.Graphics;

/***
 * 	A derivative of conventional column charts that draws bars using
 * 	a separate color for each bar.  This is done by using the Bar's
 * 	drawInd method to draw bars.  Multiple datasets are clustered
 * 	side-by-side.
 *
 * @see javachart.chart.BarChart
 * @see javachart.chart.Bar
 */


public class IndColumnChart extends BarChart{

/**
 *	constructs a default chart 
 */

	public IndColumnChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public IndColumnChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public IndColumnChart(String		s,
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

	void initChart(){
		super.initChart();
		legend = new PieLegend(datasets, globals);
	}

}
