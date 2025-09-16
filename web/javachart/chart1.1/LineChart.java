package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that represents data in plotlines that connect arbitrary
 *	X and Y coordinates.
 *@see	javachart.chart.LabelLineChart
 */

public class LineChart extends Chart{

	//Chart package vars
	Line	line; 
	AxisInterface	xAxis;
	AxisInterface	yAxis;
	boolean	lineVisible = true;

/**
 *	constructs a default chart 
 */

	public LineChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public LineChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public LineChart(String		s,
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

		super.drawGraph(g);
		background.draw(g);
		plotarea.draw(g);
		if(xAxisVisible)
			xAxis.draw(g);
		if(yAxisVisible)
			yAxis.draw(g);
		line.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

	//accessors
	public AxisInterface	getXAxis(){
		return xAxis;
	}
	
	public AxisInterface	getYAxis() {
		return	yAxis;
	}

	public void setXAxis(AxisInterface a) {
		xAxis = a;
	}

	public void setYAxis(AxisInterface a) {
		yAxis = a;
	}

	public void	setLineVisible(boolean onOff) {
			lineVisible = onOff;
			if(onOff)
				line.scatterPlot = false;
			else
				line.scatterPlot = true;
	}
	public boolean	getLineVisible() {
			return lineVisible;
	}

	public Line getLine() {
		return line;
	}
	public void setLine(Line l) {
		line = l;
	}

	//utility methods
    protected void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		line = new Line(datasets, xAxis, yAxis, plotarea);
		legend = new LineLegend(datasets, globals);
		// set a default height/width
		resize(640, 480); 
	}

	protected void initAxes() {
		xAxis = new Axis(datasets, true, plotarea);
		yAxis = new Axis(datasets, false, plotarea);
	}
}
