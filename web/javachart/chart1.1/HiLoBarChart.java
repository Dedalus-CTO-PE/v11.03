package javachart.chart;

import java.awt.Graphics;

/***
 * A derivative of conventional column charts that draws hi-lo bars using
 * the y and y2 values from each Datum to determine the top and bottom of
 * each bar.
 * This class also uses a HiLoAxis, which calculates a starting point for
 * the axis scale based on the minimum y2 values
 *
 * @see		javachart.chart.BarChart
 * @see		javachart.chart.HiLoAxis
 * @see		javachart.chart.HiLoBar
 */

public class HiLoBarChart extends BarChart{


/**
 *	constructs a default chart 
 */

	public HiLoBarChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public HiLoBarChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public HiLoBarChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}
/***
 * Installs a dataset with hi and lo values
 */
	public void addDataSet(String   s,
	    double   y[],
	    double   y2[]) {

		int	i;
		double	x[];

		x = new double[y.length];

		if(numberOfDatasets < 20) {
			for(i=0;i<y.length;i++){
				x[i] = (double) i;
				y2[i] = y[i] - y2[i];
			}
			datasets[numberOfDatasets] = 
				new Dataset(s, x, y, y2, numberOfDatasets, globals);
			numberOfDatasets++;
		}
		else
			System.out.println("max datasets is " + Chart.MAX_DATASETS); 
	}

/***
 * Installs a dataset with hi and lo values and labels
 */
	public void addDataSet(String	s,
	    double		y[],
	    double		y2[],
	    String		dataLabels[]) {

		int	i;
		double	x[];

		x = new double[y.length];

		if(numberOfDatasets < Chart.MAX_DATASETS) {
			for(i=0;i<y.length;i++) {
				x[i] = (double) i;
				y2[i] = y[i] - y2[i];
			}
			datasets[numberOfDatasets] = 
				new Dataset(s, x, y, y2, dataLabels, numberOfDatasets, globals);
			numberOfDatasets++;
		}
		else
			System.out.println("max datasets is " + Chart.MAX_DATASETS); 
	}

/***
 * Returns HiLoBar rather than Bar
 */
	public Bar	getBar() {
		return bar;
	}
/**
 *	Installs a new HiLoBar in this class
 * @param	b	HiLoBar class
 */
	public void setBar(HiLoBar b) {
		bar = b;
	}

	//utility methods
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		bar = new HiLoBar(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		yAxis = new HiLoAxis(datasets, false, plotarea);
	}
}
