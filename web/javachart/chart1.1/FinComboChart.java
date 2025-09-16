package javachart.chart;

import java.awt.Graphics;

/**
 *	A Financial Combination Chart contains HiLoClose, Line and Stick
 *	elements.  The datasets in this chart are allocated among the various
 *	graphical elements with the setChartType method.
 */
public class FinComboChart extends Chart{

	//Chart package classes
	HiLoClose		hiLoClose;
	Stick			stick;
	Line			line;
	AxisInterface		xAxis;
	AxisInterface		yAxis;
	Dataset			lineData[], stickData[], hlocData[];
	public int		dataAllocation[];

	AxisInterface 	stickYAxis, lineYAxis;
	Plotarea		stickPlotarea, linePlotarea;
	boolean			splitWindow = true;
	boolean			hasStickData = false;
	boolean			hasLineData = false;
	boolean			hasHLOCData = false;


/**
 *	Line
 */
	public static final int	LINE = 0;
/**
 *	Stick
 */
	public static final int	STICK = 1;
/**
 *	HiLoClose
 */
	public static final int	HLOC = 2;

/**
 *	constructs a default chart 
 */

	public FinComboChart() {
		super();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */

	public FinComboChart(String	s) {
		super(s);
	}

/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */

	public FinComboChart(String		s,
	    		Graphics	g ) {
		super(s, g);
	}

/**
 *	Draw this chart on the previously defined Graphics class
 */
	    public void drawGraph() {
		if(canvas == null)
			return;
		drawGraph(canvas);
	}

/**
 *	Draw this chart on the specified Graphics class
 */
	public void drawGraph(Graphics g) {
		if(g == null)
			return;
		super.drawGraph();
		distributeDatasets();
		distributeAxisAttributes();
		background.draw(g);
		if(!splitWindow){
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
			stick.draw(g);
			line.draw(g);
		}
		else {
			double saveBase = plotarea.llY;
			double windowHeight;
			double numberOfWindows = 0.0;
			if(hasStickData)
				numberOfWindows += 1.0;
			if(hasLineData)
				numberOfWindows += 1.0;
			if(hasHLOCData)
				numberOfWindows += 1.0;
			windowHeight = (plotarea.urY - plotarea.llY)/numberOfWindows;
			//always draw the X axis
			if(xAxisVisible)
				xAxis.draw(g);
			else
				xAxis.scale();
			if(hasHLOCData){
				plotarea.llY = plotarea.urY - windowHeight;
				plotarea.draw(g);
				//draw only if data available
				yAxis.setDatasets(hlocData);
				if(yAxisVisible)
					yAxis.draw(g);
				else
					yAxis.scale();
				hiLoClose.draw(g);
			}
			else {
				plotarea.llY = plotarea.urY; //invisible
			}
			if(hasLineData){
				linePlotarea.gc = plotarea.gc;
				linePlotarea.urY = plotarea.llY;
				linePlotarea.llY = plotarea.llY - windowHeight;
				linePlotarea.llX = plotarea.llX;
				linePlotarea.urX = plotarea.urX;
				plotarea.llY = linePlotarea.llY;
				linePlotarea.draw(g);
				if(yAxisVisible)
					lineYAxis.draw(g);
				else
					lineYAxis.scale();
				line.plotarea = linePlotarea;
				line.yAxis = lineYAxis;
				line.draw(g);
			}
			if(hasStickData){
				stickPlotarea.gc = plotarea.gc;
				stickPlotarea.urY = plotarea.llY;
				stickPlotarea.llY = plotarea.llY - windowHeight;
				stickPlotarea.llX = plotarea.llX;
				stickPlotarea.urX = plotarea.urX;
				stickPlotarea.draw(g);
				stick.plotarea = stickPlotarea;
				if(yAxisVisible)
					stickYAxis.draw(g);
				else
					stickYAxis.scale();
				stick.yAxis = stickYAxis;
				stick.draw(g);
			}
			plotarea.llY = saveBase; //reset to original plotarea
		}
		if(legendVisible)
			legend.draw(g);
	}

/**
 *	Returns this chart's HiLoClose class
 */
	public HiLoClose	getHiLoClose() {
		return hiLoClose;
	}
/**
 *	Installs a new HiLoClose class for this chart
 */
	public void setHiLoClose(HiLoClose b) {
		hiLoClose = b;
	}

/**
 *	Returns this chart's X axis
 */
	public AxisInterface	getXAxis() {
		return xAxis;
	}
/**
 *	Replaces this chart's X axis (presumed to be a LabelAxis)
 */
	public void setXAxis(LabelAxis axis) {
		xAxis = axis;
	}

/**
 *	Returns this chart's Y axis
 */
	public AxisInterface	getYAxis() {
		return yAxis;
	}

/**
 *	Replaces this chart's Y axis
 */
	public void	setYAxis(Axis axis) {
		yAxis = axis;
	}

/**
 *  If set to true, this chart will display HLOC, Line, and Stick data in up to 3 separate
 *  plotareas, with an individual Axis for each chart.  Axis attributes are copied across
 *  all Y axes, and the data is arranged so that HLOC data is in the topmost window, Line
 *  data in the next, and Stick data in the bottommost window
 */
	public void setSplitWindow(boolean split){
		splitWindow = split;
	}
/**
 *  Returns true if this chart is currently set to draw data in split windows
 */
	public boolean getSplitWindow(){
		return splitWindow;
	}

/**
 *	Assigns a specified Dataset to a specified chart type
 *@param	dataset	Dataset to assign
 *@type		LINE, HLOC, or STICK
 */
	public synchronized void setChartType(int dataset,
				int type){
		if ((type<0)||(type>2)){
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
	void initChart() {
		initGlobals();
		plotarea = new Plotarea(globals);
		background = new Background(globals);
		initDataSets();
		initAxes();
		dataAllocation = new int[20];
		for(int i=0;i<20;i++) dataAllocation[i] = LINE;
		hiLoClose = new HiLoClose(hlocData, xAxis, yAxis, plotarea);
		stick = new Stick(stickData, xAxis, yAxis, plotarea);
		line = new Line(lineData, xAxis, yAxis, plotarea);
		legend = new Legend(datasets, globals);
		resize(640, 480); 
		// set a default height/width
	}

	public void resize(int width, int height){
		super.resize(width, height);
		stickPlotarea.resize(width, height);
		linePlotarea.resize(width, height);
	}

	protected void initDataSets() {
		datasets = new Dataset[20];     
		lineData = new Dataset[20];     
		hlocData = new Dataset[20];     
		stickData = new Dataset[20];     
	}

	void initAxes() {
		xAxis = new DateAxis(datasets, true, plotarea);
		xAxis.setBarScaling(false);
		yAxis = new HiLoAxis(datasets, false, plotarea);
		yAxis.setBarScaling(false);
		stickPlotarea = new Plotarea(getGlobals());
		linePlotarea = new Plotarea(getGlobals());
		stickYAxis = new Axis(stickData, false, stickPlotarea);
		stickYAxis.setBarScaling(true);
		lineYAxis = new Axis(lineData, false, linePlotarea);

	}

	void distributeDatasets(){
		int i, j;
		hasLineData = false;
		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == LINE){
				lineData[j++] = datasets[i];
				if(datasets[i] != null) //array is initialized to LINE, so check to see if real
					hasLineData = true;
			}
		}

		hasStickData = false;
		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == STICK){
				stickData[j++] = datasets[i];
				hasStickData = true;
			}
		}

		hasHLOCData = false;
		j = 0;
		for(i=0;i<20;i++){
			if(dataAllocation[i] == HLOC){
				hlocData[j++] = datasets[i];
				hasHLOCData = true;
			}
		}
	}

	void distributeAxisAttributes(){
		//copies all major attributes from the standard, or HLOC axis...
		Axis ax1 = (Axis) stickYAxis;
		Axis ax2 = (Axis) yAxis;
		ax1.majTickVis = ax2.majTickVis;
		ax1.minTickVis = ax2.minTickVis;
		ax1.gridVis = ax2.gridVis;
		ax1.labelVis = ax2.labelVis;
		ax1.lineVis = ax2.lineVis;
		ax1.labelFormat = ax2.labelFormat;
		ax1.labelPrecision = ax2.labelPrecision;
		ax1.labelColor = ax2.labelColor;
		ax1.labelFont = ax2.labelFont;
		ax1.labelAngle = ax2.labelAngle;
		ax1.lineGc = ax2.lineGc;
		ax1.gridGc = ax2.gridGc;
		ax1.tickGc = ax2.tickGc;
		ax1.side = ax2.side;

		ax1 = (Axis) lineYAxis;
		ax1.majTickVis = ax2.majTickVis;
		ax1.minTickVis = ax2.minTickVis;
		ax1.gridVis = ax2.gridVis;
		ax1.labelVis = ax2.labelVis;
		ax1.lineVis = ax2.lineVis;
		ax1.labelFormat = ax2.labelFormat;
		ax1.labelPrecision = ax2.labelPrecision;
		ax1.labelColor = ax2.labelColor;
		ax1.labelFont = ax2.labelFont;
		ax1.labelAngle = ax2.labelAngle;
		ax1.lineGc = ax2.lineGc;
		ax1.gridGc = ax2.gridGc;
		ax1.tickGc = ax2.tickGc;
		ax1.side = ax2.side;
	}
}
