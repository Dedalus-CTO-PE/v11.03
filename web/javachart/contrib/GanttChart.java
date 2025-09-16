package javachart.contrib;

import javachart.chart.*;
import java.awt.Graphics;

public class GanttChart extends HorizHiLoBarChart {
	HiLoDateAxis	timeAxis;
	HorizHiLoBar	ganttBar;
	int		numberOfDatasets = 0;

	public GanttChart(){
		super();
		initializeLocalVars();
	}

	public void drawGraph(){
	}

	public void drawGraph(Graphics g) {
		if(g == null)
			return;
		//super.drawGraph(g);
		getBackground().draw(g);
		getPlotarea().draw(g);
		getXAxis().draw(g);
		timeAxis.draw(g);
		ganttBar.draw(g);
		if(isLegendVisible())
			getLegend().draw(g);
	}

	public AxisInterface getYAxis(){
		return timeAxis;
	}

	private void initializeLocalVars(){
		timeAxis = new HiLoDateAxis(getDatasets(), false, getPlotarea());
		timeAxis.setBarScaling(true);
		timeAxis.setSide(0);
		ganttBar = new HorizHiLoBar(getDatasets(), getXAxis(), timeAxis, getPlotarea());
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

		if(numberOfDatasets > 20) 
			return;
		for(i=0;i<y.length;i++){
			x[i] = (double) i;
		}
		getDatasets()[numberOfDatasets] = 
			new Dataset(s, x, y, y2, numberOfDatasets, getGlobals());
		numberOfDatasets++;

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

		if(numberOfDatasets > 20) 
		return;
		for(i=0;i<y.length;i++) {
			x[i] = (double) i;
		}
		getDatasets()[numberOfDatasets] = 
			new Dataset(s, x, y, y2, dataLabels, numberOfDatasets, getGlobals());
		numberOfDatasets++;
	}
}
