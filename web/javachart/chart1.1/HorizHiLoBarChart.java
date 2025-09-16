package javachart.chart;

import java.awt.Graphics;

/***
 * A derivative of conventional column charts that draws hi-lo bars using
 * the y and y2 values from each Datum to determine the top and bottom of
 * each bar.  Multiple datasets are clustered side-by-side.
 *
 * This class also uses a HiLoAxis, which calculates a starting point for
 * the axis scale based on the minimum y2 values
 *
 * @see		javachart.chart.BarChart
 * @see		javachart.chart.HiLoAxis
 * @see		javachart.chart.HorizHiLoBar
 */
public class HorizHiLoBarChart extends BarChart{

/**
 *	constructs a default chart 
 */

	public HorizHiLoBarChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public HorizHiLoBarChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public HorizHiLoBarChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}
/**
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

	//utility methods
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		bar = (Bar) new HorizHiLoBar(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		xAxis.setSide(1);

		yAxis = new HiLoAxis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
		yAxis.setSide(0);
	}
}
