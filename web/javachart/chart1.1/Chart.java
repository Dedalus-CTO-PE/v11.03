package javachart.chart;

import java.awt.Graphics;
import java.awt.Font;
import java.awt.Color;
import java.awt.Image;
import java.io.Serializable;

/**
 *	An abstract class that implements several methods common to all 
 *	charts.  Subclasses of Chart inherit a variety of addDataset methods 
 *	and implementations of all the standard access methods defined in 
 *	ChartInterface.  Most final classes based on the Chart class are 
 *	fairly simple, requiring initialization of Axes and chart components.
 *@see javachart.chart.ChartInterface
 *@see javachart.chart.AreaChart
 *@see javachart.chart.BarChart
 *@see javachart.chart.BarLineChart
 *@see javachart.chart.DAreaChart
 *@see javachart.chart.DateLineChart
 *@see javachart.chart.FinComboChart
 *@see javachart.chart.HiLoBarChart
 *@see javachart.chart.HiLoCloseChart
 *@see javachart.chart.HorizBarChart
 *@see javachart.chart.HorizHiLoBarChart
 *@see javachart.chart.IndBarChart
 *@see javachart.chart.IndColumnChart
 *@see javachart.chart.LabelLineChart
 *@see javachart.chart.LineChart
 *@see javachart.chart.PieChart
 *@see javachart.chart.RegressChart
 *@see javachart.chart.SpeedoChart
 *@see javachart.chart.StackBarChart
 *@see javachart.chart.StackColumnChart
 *@see javachart.chart.StickChart
 */

public abstract class Chart implements ChartInterface, Serializable {

	//Package vars
	String           	name = "New Chart";
	Graphics         	canvas;
	boolean          	legendVisible = false;
	int              	width = 640;
	int              	height = 480;
	boolean			xAxisVisible = true;
	boolean			yAxisVisible = true;

	Globals			globals;
	Dataset			datasets[];
	Plotarea		plotarea;
	Background		background;
	LegendInterface		legend;

	//utility variables
	int             numberOfDatasets = 0;
	String          routineName =   "Initialization Value";
	int             errNo   =       0;
	final static int MAX_DATASETS = 40;

/**
 *	constructs a default chart 
 */
	public Chart() {
		initChart();
	}

/**
 *	constructs a default chart 
 *	with the specified name
 *@param	s	chart name
 */
	public Chart(       String          s) {
		name = s;
		initChart();
	}


/**
 *	constructs a default chart 
 *	with the specified name and default Graphics class
 *@param	s	chart name
 *@param	g	Graphics class to use
 */
	public Chart(String	s,
	    	Graphics	g ) {
		name = s;
		if(g == null) {
			return;
		}
		canvas = g;
		initChart();
	}

/**
 *	draws an entire chart to this chart's Graphic class
 */
	public void paint() {
		drawGraph();
	}

/**
 *	draws an entire chart to the specified Graphics class
 *@param	g	Graphics class to use
 */
	public void paint(Graphics g) {
			drawGraph(g);
	}

/**
 *	draws an entire chart to this chart's Graphic class
 */
	public void drawGraph() {
		if (globals.useDisplayList)
			globals.displayList.clear();
	}

/**
 *	draws an entire chart to the specified Graphics class
 *@param	g	Graphics class to use
 */
	public void drawGraph(Graphics g) {
		if (globals.useDisplayList)
			globals.displayList.clear();
	}

/**
 *	add a dataset to this chart
 *@param	s	name of dataset
 *@param	x	array of x values
 */
	public void addDataSet(String   s,
	    double   x[]) {

		if(numberOfDatasets < MAX_DATASETS) {
			datasets[numberOfDatasets] = new Dataset(s, x, numberOfDatasets, globals);
			numberOfDatasets++;
		}
		else
			System.out.println("max datasets is " + MAX_DATASETS); 
	}

/**
 *	add a dataset to this chart
 *@param	s	name of dataset
 *@param	x	array of x values
 *@param	y	array of y values
 */
	public void addDataSet(String   s,
	    double   x[],
	    double   y[]) {

		if(numberOfDatasets < MAX_DATASETS) {
			datasets[numberOfDatasets] = new Dataset(s, x, y, numberOfDatasets, globals);
			numberOfDatasets++;
		}
		else
			System.out.println("max datasets is " + MAX_DATASETS); 
	}

/**
 *	add a dataset to this chart
 *@param	x	name of x values (usually dates)
 *@param	hi	array of high values
 *@param	lo	array of low values
 *@param	close	array of close values
 */
	public void addDataSet(String	s,
	    double		x[],
	    double		hi[],
	    double		lo[],
	    double		close[]){

		if(numberOfDatasets < MAX_DATASETS) {
			datasets[numberOfDatasets] = new Dataset(s, x, 
			    hi, lo, close, numberOfDatasets, globals);
			numberOfDatasets++;
		}
		else {
			System.out.println("maximum number of datasets is " + MAX_DATASETS);
		}

	}

/**
 *	add a dataset to this chart
 *@param	s	name of dataset
 *@param	x	array of x values
 *@param	dataLabels	labels for each data point
 */
	public void addDataSet(String	s,
	    double		x[],
	    String		dataLabels[]) {

		if(numberOfDatasets < MAX_DATASETS) {
			datasets[numberOfDatasets] = new Dataset(s, x, 
			    dataLabels, numberOfDatasets, globals);
			numberOfDatasets++;
		}
		else {
			System.out.println("maximum number of datasets is " + MAX_DATASETS);
		}

	}

/**
 *	add a dataset to this chart
 *@param	s	name of dataset
 *@param	x	array of x values
 *@param	y	array of y values
 *@param	dataLabels	labels for each data point
 */
	public void addDataSet(String	s,
	    double		x[],
	    double		y[],
	    String		dataLabels[]) {
		addDataSet(s, x, dataLabels);
	}


/**
 *	deletes the named dataset and rearranges this chart's dataset array
 *@param	s	name of dataset to delete
 */
	public void deleteDataSet(String s) {
		int     i, j;

		for(i=0;i<numberOfDatasets;i++)
			if (datasets[i].setName == s) {
				datasets[i] = null;
				for(j=i+1;j<numberOfDatasets;j++)
					datasets[j-1] = datasets[j];
				continue;
			}
		numberOfDatasets--;
	}

/**
 *	returns the number of datasets used by this chart
 */
	public int getNumDatasets() {
		return numberOfDatasets;
	}

/**
 *	resizes all this chart's graphical components
 */
	public void resize(int newWidth, int newHeight) {
		globals.maxY = newHeight;
		plotarea.resize(newWidth, newHeight);
		background.resize(newWidth, newHeight);
		legend.resize(newWidth, newHeight);
		globals.maxX = newWidth;
		globals.maxY = newHeight;
	}

/**
 *	Installs a new Globals class for this chart
 *@see	javachart.chart.Globals
 */
	protected void initGlobals(){
		globals = new Globals();
	}

/**
 *	Initializes an array to contain Dataset classes
 */
	protected void initDataSets() {
		datasets = new Dataset[MAX_DATASETS];     
	}

	//accessors
/**
 *	returns this chart's name
 */
	public String           getName() {
		return name;
	}
/**
 *	sets a new name for this chart
 *@param	s	chart name
 */
	public void	setName(String s) {
		name = s;
	}

/**
 *	returns this chart's default Graphics class
 */
	public Graphics         getCanvas() {
		return canvas;
	}
/**
 *	sets a new Graphics class for default use
 *@param	g	new Graphics class
 */
	public void 		setCanvas(Graphics g) {
		canvas = g;
	}

/**
 *	inquires whether this chart's Legend should be drawn with the rest of
 *	the chart
 */
	public boolean          isLegendVisible() {
		return legendVisible;
	}
/**
 *	sets this chart's legend visibility characteristic
 *@param v	if true, this chart's Legend is drawn with the chart
 */
	public void	setLegendVisible(boolean v) {
		legendVisible = v;
	}

/**
 *	returns the width (in pixels) of this chart
 */
	public int              getWidth() {
		return width;
	}
/**
 *	sets a new width for this chart
 *@param	w	the new width
 */
	public void setWidth(int w) {
		width = w;
	}
/**
 *	returns the current height
 */
	public int              getHeight() {
		return height;
	}
/**
 *	sets a new height for this chart
 *@param	h	the new height
 */
	public void setHeight(int h) {
		height = h;
	}

/**
 *	returns this chart's X axis
 */
	public AxisInterface	getXAxis() {
		return null;
	}
/**
 *	installs a new X axis for use by this chart
 */
	public void setXAxis(AxisInterface a) {
	}

/**
 *	returns this chart's Y axis
 */
	public AxisInterface 	getYAxis() {
		return null;
	}
/**
 *	installs a new Y axis for use by this chart
 */
	public void setYAxis(AxisInterface a) {
	}

/**
 *	returns true if the X axis is drawn with the rest of the chart
 */
	public boolean		isXAxisVisible() {
		return xAxisVisible;
	}
/**
 *	toggles the visibility of this chart's X axis
 *@param	vis	true if you want this chart's X axis drawn
 */
	public void		setXAxisVisible(boolean vis) {
		xAxisVisible = vis;
	}

/**
 *	returns true if the Y axis is drawn with the rest of the chart
 */
	public boolean		isYAxisVisible() {
		return yAxisVisible;
	}
/**
 *	toggles the visibility of this chart's Y axis
 *@param	vis	true if you want this chart's Y axis drawn
 */
	public void		setYAxisVisible(boolean vis) {
		yAxisVisible = vis;
	}

/**
 *	returns this chart's array of Dataset classes
 */
	public Dataset[]	getDatasets() {
		return datasets;
	}
/**
 *	installs a new array of Dataset classes for this chart
 *	param	d	the new list of Datasets
 */
	public void setDatasets(Dataset[] d) {
		datasets = d;
	}

/**
 *	returns this chart's Plotarea class
 */
	public Plotarea		getPlotarea() {
		return plotarea;
	}
/**
 *	installs a new Plotarea for this chart
 *@param	p	the new Plotarea
 */
	public void setPlotarea(Plotarea p) {
		plotarea = p;
	}

/**
 *	returns this chart's Background class
 */
	public Background	getBackground() {
		return background;
	}
/**
 *	installs a new Background class for this chart
 *@param	b	the new Background
 */
	public void setBackground(Background b) {
		background = b;
	}
/**
 *	returns this chart's Legend as a Legend Interface
 */
	public LegendInterface	getLegend() {
		return legend;
	}
/**
 *	installs a new Legend for this chart
 *@param	l	the new Legend
 */
	public void setLegend(LegendInterface l) {
		legend = l;
	}

/**
 *	returns this chart's Globals class
 */
	public Globals getGlobals() {
		return globals;
	}
/**
 *	installs a new Globals class for this chart
 */
/* need to check to make sure this works... */
	public void setGlobals(Globals g) {
		globals = g;
	}
/**
 *	returns true if this chart will be drawn with 3-D effects
 */
	public boolean 		isThreeD(){
		return globals.threeD;
	}
/**
 *	sets this chart's 3-D effects attribute
 *@param	b	true if 3-D effects are desired
 */
	public void 		setThreeD(boolean b){
		globals.threeD = b;
	}

/**
 *	3-D effects are added by drawing effect panels offset in X and Y 
 *	directions.  This method returns the current X offset value in pixels
 */
	public int 		getXOffset(){
		return globals.xOffset;
	}
/**
 *	sets the X offset for 3-D effects in pixels
 *@param	i	new offset value
 */
	public void 		setXOffset(int i){
		globals.xOffset = i;
	}

/**
 *	returns the current Y offset value in pixels
 */
	public int 		getYOffset(){
		return globals.yOffset;
	}
/*
 *	sets the Y offset for 3-D effects in pixels
 *	param	i	new offset value
 */
	public void 		setYOffset(int i){
		globals.yOffset = i;
	}

/**
 *	returns this chart's RotateString class
 */
	public RotateString 	getStringRotator(){
		return globals.stringRotator;
	}
/**
 *	installs a new RotateString class for this chart
 *	param	rotator	new RotateString class
 */
	public void 		setStringRotator(RotateString rotator){
		globals.stringRotator = rotator;
	}

/**
 *	Returns this chart's Image, if it has been installed and produced.
 *	This image is used internally by JavaChart's RotateString class to
 *	rotate text strings with raster operations.  This must be a valid
 *	chart Image to rotate strings properly.
 *
 *	This image may also be used after drawing for other operations, such
 *	as exporting image files or for clipboard operations.
 */
	public Image 	getImage(){
		return globals.getImage();
	}
/**
 *	installs an Image for use in JavaChart's RotateString class.  
 *	Normally, this is the Image associated with the Graphics class used
 *	for drawing charts.
 *
 *@param	i	an Image class used for drawing charts;
 */
	public void 		setImage(Image i){
		globals.setImage(i);
	}

/**
 *	returns JavaChart's central DisplayList.
 *@see javachart.chart.DisplayList
 *@see javachart.chart.Globals
 */
	public DisplayList getDisplayList(){
		return globals.getDisplayList();
	}
/**
 *	installs a new DisplayList for use in retrieving a list of chart 
 *	objects at a specified location.
 */
	public void 	setDisplayList(DisplayList d){
		globals.setDisplayList(d);
	}

/**
 *	inquires whether this chart accumulates drawing information into a 
 *	central DisplayList.
 */
	public boolean 	getUseDisplayList(){
		return globals.getUseDisplayList();
	}
/**
 *	Determines whether this chart will use a DisplayList to acquire 
 *	geometric information about chart objects or not.  By default, 
 *	JavaChart's DisplayList is not active.
 *@param	yesNo	true if you wish to use a DisplayList
 *@see	javachart.chart.DisplayList
 *@see	javachart.chart.Globals
 */
	public void 		setUseDisplayList(boolean yesNo){
		globals.setUseDisplayList(yesNo);
	}

	void	initChart(){
	}
}
