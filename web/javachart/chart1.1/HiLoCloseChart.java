package javachart.chart;

import java.awt.Graphics;

/**
 *	Constructs a chart using Dates as X values, and High, Low, and Close
 *	observations for each Date.
 * @see	javachart.chart.FinComboChart
 * @see javachart.chart.HiLoClose
 */

public class HiLoCloseChart extends Chart{

	//Chart package classes
	HiLoClose		hiLoClose;
	AxisInterface		xAxis;
	AxisInterface		yAxis;

/**
 *	constructs a default chart 
 */

	public HiLoCloseChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public HiLoCloseChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public HiLoCloseChart(String		s,
	    		Graphics	g ) {
		super(s, g);
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
		super.drawGraph();
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
		hiLoClose.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

	//accessors
	public HiLoClose	getHiLoClose() {
		return hiLoClose;
	}
	public void setHiLoClose(HiLoClose b) {
		hiLoClose = b;
	}

	public AxisInterface	getXAxis() {
		return xAxis;
	}
	public void setXAxis(LabelAxis axis) {
		xAxis = axis;
	}

	public AxisInterface	getYAxis() {
		return yAxis;
	}
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}

	//utility methods
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		hiLoClose = new HiLoClose(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	void initAxes() {
		xAxis = new DateAxis(datasets, true, plotarea);
		yAxis = new HiLoAxis(datasets, false, plotarea);

		xAxis.setBarScaling(false);
		yAxis.setBarScaling(false);
	}
}
