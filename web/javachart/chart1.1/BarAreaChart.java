package javachart.chart;

import java.awt.Graphics;

/**
 *	A chart that contains a combination of Bar and Area components
 */

public class BarAreaChart extends Chart{

	//Chart package classes
	Area			area;
	Bar			bar;
	AxisInterface		xAxis;
	AxisInterface		yAxis;
	Dataset			areaData[], barData[];
	public int		dataAllocation[];

	public static final int	BAR = 0;
	public static final int	AREA = 1;

/**
 *	constructs a default chart 
 */

	public BarAreaChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public BarAreaChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public BarAreaChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

	//draw routines
/**
 *	Draws a chart on the previously defined Graphics class
 */
	public void drawGraph() {
		if(canvas == null)
			return;
		drawGraph(canvas);
	}

/**
 *	draws a chart on the specified Graphics class
 */
	public void drawGraph(Graphics g) {
		if(g == null)
			return;
		super.drawGraph();
		distributeDatasets();
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
		area.draw(g);
		bar.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

/**
 *	sets this chart to stack data columns (true) or cluster them (false)
 *@param	trueFalse	whether to stack data columns
 */
	public void setStackedBar(boolean trueFalse) {
		if(trueFalse)
			bar = new StackColumn(datasets, xAxis, yAxis, plotarea);
		else
			bar = new Bar(datasets, xAxis, yAxis, plotarea);
	}
	//accessors
/**
 *	returns this chart's Area component
 */
	public Area	getArea() {
		return area;
	}
/**
 *	replaces this chart's Area component
 */
	public void setArea(Area a) {
		area = a;
	}

/*
 *	returns this chart's Bar component
 */
	public Bar	getBar() {
		return bar;
	}
/**
 *	replaces this chart's Bar component
 */
	public void setBar(Bar b) {
		bar = b;
	}

/**
 *	returns this chart's X axis
 */
	public AxisInterface	getXAxis() {
		return xAxis;
	}
/**
 *	replaces this chart's X axis(expects a LabelAxis)
 */
	public void setXAxis(LabelAxis axis) {
		xAxis = axis;
	}

/**
 *	returns this chart's Y axis
 */
	public AxisInterface	getYAxis() {
		return yAxis;
	}
/**
 *	replaces this chart's Y axis
 */
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}

/**
 *	assigns a dataset to a specified chart type - default is AREA
 * @param	dataset	dataset to assign
 * @param	type - AREA or BAR
 */
	public synchronized void setChartType(int dataset,
				int type){
		if ((type<BAR)||(type>AREA)){
			System.out.println("bad Chart Type");
			return;
		}
		if (dataset>20){
			System.out.println("bad dataset number");
			return;
		}
		dataAllocation[dataset] = type;
	}

	//utility methods
	synchronized void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		dataAllocation = new int[20];
		for(int i=0;i<20;i++) dataAllocation[i] = AREA;
		bar = new Bar(datasets, xAxis, yAxis, plotarea);
		area = new Area(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}


	protected void initDataSets() {
		datasets = new Dataset[20];     
		barData = new Dataset[20];     
		areaData = new Dataset[20];     
	}

	void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		yAxis = new StackAxis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
	}

	synchronized void distributeDatasets(){
		int i, j;
		double barMax, areaMax;
		StackAxis	myYAxis;

		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == BAR)
				barData[j++] = datasets[i];
		}
		bar.datasets = barData;
		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == AREA)
				areaData[j++] = datasets[i];
		}
		area.datasets = areaData;

		//figure out which datasets to scale against
		myYAxis = (StackAxis) yAxis;
		myYAxis.datasets = areaData;
		myYAxis.scale();
		areaMax = myYAxis.axisEnd;

		myYAxis.datasets = barData;
		myYAxis.scale();
		barMax = myYAxis.axisEnd;
	
		if(areaMax>barMax)
			myYAxis.datasets = areaData;
	}

}
