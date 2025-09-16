package javachart.chart;

import java.awt.Graphics;

/**
 *	A combination chart that includes both Bar and Line components
 */

public class BarLineChart extends Chart{

	//Chart package classes
	Line			line;
	Bar			bar;
	AxisInterface		xAxis;
	AxisInterface		yAxis;
	Dataset			lineData[], barData[];
	public int		dataAllocation[];

	public static final int	BAR = 0;
	public static final int	LINE = 1;

/**
 *	constructs a default chart 
 */

	public BarLineChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public BarLineChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public BarLineChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

/**
 *      distribute datasets and draw the complete chart
 */
	    public void drawGraph() {
		if(canvas == null)
			return;
		drawGraph(canvas);
	}

/**
 *	Draws the entire BarLineChart on the specified Graphics class
 * @param	g	Graphics class to draw
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
		bar.draw(g);
		line.draw(g);
		if(legendVisible)
			legend.draw(g);
	}

/**
 *	sets this chart to stack data columns (true) or cluster them (false)
 *@param	trueFalse	whether to stack data columns
 */
	public synchronized void setStackedBar(boolean trueFalse) {
		if(trueFalse){
			yAxis = new StackAxis(datasets, false, plotarea);
			yAxis.setBarScaling(true);
			bar = new StackColumn(datasets, xAxis, yAxis, plotarea);
			line.setYAxis(yAxis);
		}
		else
			bar = new Bar(datasets, xAxis, yAxis, plotarea);
	}
	//accessors
/**
 *	returns this chart's Line component
 */
	public Line	getLine() {
		return line;
	}
/**
 *	installs a new Line class for this chart
 *	@param	l	the new Line class
 */
	public void setArea(Line l) {
		line = l;
	}

/**
 *	returns this chart's Bar component
 */
	public Bar	getBar() {
		return bar;
	}
/**
 *	installs a new Bar class for this chart
 *	@param	b	new Bar class
 */
	public void setBar(Bar b) {
		bar = b;
	}

/**
 *	returns this chart's xAxis
 */
	public AxisInterface	getXAxis() {
		return xAxis;
	}
/**
 *	installs a new LabelAxis for this chart's X axis
 *	@param	axis	new LabelAxis
 */
	public void setXAxis(LabelAxis axis) {
		xAxis = axis;
	}

/**
 *	returns this chart's Y Axis
 */
	public AxisInterface	getYAxis() {
		return yAxis;
	}
/**
 *	installs a new Y axis for this chart
 *	@param	axis	new Axis class for Y values
 */
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}

/**
 *	assigns a dataset to a specified chart type - default is LINE
 *	@param	dataset	dataset to assign
 *	@param	type - LINE or BAR
 */
	public synchronized void setChartType(int dataset,
				int type){
		if ((type<BAR)||(type>LINE)){
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
		for(int i=0;i<20;i++) dataAllocation[i] = LINE;
		bar = new Bar(datasets, xAxis, yAxis, plotarea);
		line = new Line(datasets, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}


	protected void initDataSets() {
		datasets = new Dataset[20];     
		barData = new Dataset[20];     
		lineData = new Dataset[20];     
	}

	private void initAxes() {
		xAxis = new LabelAxis(datasets, true, plotarea);
		xAxis.setBarScaling(true);
		yAxis = new Axis(datasets, false, plotarea);
		yAxis.setBarScaling(true);
	}

	private void distributeDatasets(){
		int i, j;
		double barMax, lineMax;
		//StackAxis	myYAxis;
		Axis		myYAxis;

		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == BAR)
				barData[j++] = datasets[i];
		}
		bar.datasets = barData;
		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == LINE)
				lineData[j++] = datasets[i];
		}
		line.datasets = lineData;

		//figure out which datasets to scale against
		if(yAxis instanceof StackAxis)
			myYAxis = (StackAxis) yAxis;
		else
			myYAxis = (Axis) yAxis;
		myYAxis.datasets = lineData;
		myYAxis.scale();
		lineMax = myYAxis.axisEnd;

		myYAxis.datasets = barData;
		myYAxis.scale();
		barMax = myYAxis.axisEnd;
	
		if(lineMax>barMax)
			myYAxis.datasets = lineData;
	}

}
