package javachart.contrib;

import java.util.Date;
import javachart.chart.*;
import javachart.applet.*;
import java.awt.*;

/**
 *	Virtually the same as trendScroller.java, but extends dateLineApp
 *  to pick up URL date parsing methods, instead of ChartAppShell
 */

public class dateTrendScroller extends dateLineApp {

	Image backgroundImage;
	MediaTracker imageTracker;
	int scrollWindows = 10;
	double scrollIncrement, baseStartingValue;
	Scrollbar myScrollbar;
	Panel myScrollPanel;
	Button zoomButton;
	double scrollPanelX = 0.0;
	double  scrollPanelY = 0.95;
	double  scrollPanelWidth = 1.0;
	double  scrollPanelHeight = 0.05;
	Point scrollPanelSize, scrollPanelLocation;
	Transform scrollTransform;
	boolean zoomed = false;

	int saveVisible, saveMinimum, saveMaximum, saveValue;

	public void init(){		
		String 		str;
		DateAxis	ax;

		chart = new TwinAxisDateChart();
		ax = (DateAxis) chart.getXAxis();


		getOptions();
		getMyOptions();
 		getAxisOptions();

		//overrides xAxisStart & xAxisEnd
	 	str = getParameter("startDate");
	 	if(str != null) 
	 		ax.setAxisStart((double) Date.parse(str));
	 	str = getParameter("endDate");
	 	if(str != null) 
	 		ax.setAxisEnd((double) Date.parse(str));
	 	str = getParameter("scalingType");
	 	if(str != null) 
	 		ax.setScalingType(Integer.parseInt(str));
		chart.resize(this.size().width, this.size().height);
	}

	public void getMyOptions() {

		String 			str;
		TwinAxisDateChart	l;
		l = (TwinAxisDateChart) chart;

		l = (TwinAxisDateChart) chart;
		l.getLine().setClip(true);
		l.getAuxLine().setClip(true);

	 	str = getParameter("plotLinesOn");
	 	if(str != null) 
	 		l.setLineVisible(true);
	 	str = getParameter("plotLinesOff");
	 	if(str != null) 
	 		l.setLineVisible(false);
		str = getParameter("backgroundImage");
		if(str != null) {
			chart.setBackground(new ImageBackground(chart.getGlobals()));
			chart.getBackground().getGc().setImage(getImage(str));
		}

		getAxisOptions();

		//scrolling stuff

	     	str = getParameter("scrollbarX");
	     	if(str != null) 
	     		scrollPanelX = (Double.valueOf(str)).doubleValue();
	     	str = getParameter("scrollbarY");
	     	if(str != null) 
	     		scrollPanelY = (Double.valueOf(str)).doubleValue();
	     	str = getParameter("scrollbarWidth");
	     	if(str != null) 
	     		scrollPanelWidth = (Double.valueOf(str)).doubleValue();
	     	str = getParameter("scrollbarHeight");
	     	if(str != null) 
	     		scrollPanelHeight = (Double.valueOf(str)).doubleValue();

		scrollTransform = new Transform(0.0, 0.0, 1.0, 1.0,
						0, 0,
						this.size().width,
						this.size().height);
		scrollPanelLocation = scrollTransform.point(scrollPanelX, scrollPanelY);
		scrollPanelSize = scrollTransform.point(scrollPanelWidth, scrollPanelHeight);

//System.out.println("panel size is " + scrollPanelSize);
//System.out.println("panel loc is " + scrollPanelLocation);
/************** integer version - hard to use
	 	str = getParameter("scrollPanelX");
	 	if(str != null) 
	 		scrollPanelX = Integer.parseInt(str);
		else
			scrollPanelX = 0;
	 	str = getParameter("scrollPanelY");
	 	if(str != null) 
	 		scrollPanelY = Integer.parseInt(str);
		else
			scrollPanelY = this.size().height - 25;
	 	str = getParameter("scrollPanelHeight");
	 	if(str != null) 
	 		scrollPanelHeight = Integer.parseInt(str);
		else
			scrollPanelHeight = 25;
	 	str = getParameter("scrollPanelWidth");
	 	if(str != null) 
	 		scrollPanelWidth = Integer.parseInt(str);
		else
			scrollPanelWidth = this.size().width;
*******************/
		str = getParameter("scrollWindows");
		if(str != null)
		 	scrollWindows = Integer.parseInt(str);

		//create and add scrollbar, button, and panel to contain
		myScrollPanel = new Panel();
		myScrollPanel.setLayout(new BorderLayout());
		myScrollbar = new Scrollbar(Scrollbar.HORIZONTAL, 
			0,1,0, scrollWindows - 1);
		myScrollPanel.add("Center", myScrollbar);
		zoomButton = new Button("Zoom");
		myScrollPanel.add("East", zoomButton);

		if(chart.getXAxis().getAutoScale()) {
			chart.getXAxis().scale();
			chart.getXAxis().setAutoScale(false);
		}

		baseStartingValue = chart.getXAxis().getAxisStart();
		scrollIncrement = (chart.getXAxis().getAxisEnd() - 
					baseStartingValue) / (double) scrollWindows;
		add(myScrollPanel);
		myScrollPanel.reshape(scrollPanelLocation.x, scrollPanelLocation.y, 
				scrollPanelSize.x, scrollPanelSize.y);
		setLayout((LayoutManager)null);
	}

	protected void getAxisOptions(){
		String str;

		super.getAxisOptions();

		TwinAxisDateChart tChart = (TwinAxisDateChart) chart;
		str = getParameter("AuxAxisOptions");
		if(str != null)
		 	getAuxAxisOptions(str);
		str = getParameter("AuxAxisStart");
		if(str != null)
		 	tChart.getAuxAxis().setAxisStart((Double.valueOf(str)).doubleValue());
		str = getParameter("AuxAxisEnd");
		if(str != null)
		 	tChart.getAuxAxis().setAxisEnd((Double.valueOf(str)).doubleValue());
		str = getParameter("AuxAxisLabelFont");
		if(str != null)
		 	tChart.getAuxAxis().setLabelFont(getFont(str));
		str = getParameter("AuxAxisLabelAngle");
		if(str != null)
		 	tChart.getAuxAxis().setLabelAngle(Integer.parseInt(str));
		str = getParameter("AuxAxisLabelPrecision");
		if(str != null)
		 	tChart.getAuxAxis().setLabelPrecision(Integer.parseInt(str));
		str = getParameter("AuxAxisLabelFormat");
		if(str != null)
		 	tChart.getAuxAxis().setLabelFormat(Integer.parseInt(str));
		str = getParameter("AuxAxisColor");
		if(str != null) {
		 	tChart.getAuxAxis().setLabelColor(getColor(str));
		 	tChart.getAuxAxis().getLineGc().setLineColor(getColor(str));
		 	tChart.getAuxAxis().getGridGc().setLineColor(getColor(str));
		 	tChart.getAuxAxis().getTickGc().setLineColor(getColor(str));
		}
		str = getParameter("AuxAxisLabelColor");
		if(str != null)
		 	tChart.getAuxAxis().setLabelColor(getColor(str));
		str = getParameter("AuxAxisLineColor");
		if(str != null)
		 	tChart.getAuxAxis().getLineGc().setLineColor(getColor(str));
		str = getParameter("AuxAxisGridColor");
		if(str != null)
		 	tChart.getAuxAxis().getGridGc().setLineColor(getColor(str));
		str = getParameter("AuxAxisTickColor");
		if(str != null)
		 	tChart.getAuxAxis().getTickGc().setLineColor(getColor(str));
		str = getParameter("AuxAxisTickLength");
		if(str != null)
		 	tChart.getAuxAxis().setMajTickLength(Integer.parseInt(str));
		str = getParameter("AuxAxisMinTickLength");
		if(str != null)
		 	tChart.getAuxAxis().setMinTickLength(Integer.parseInt(str));
		str = getParameter("AuxAxisTickCount");
		if(str != null)
		 	tChart.getAuxAxis().setNumMajTicks(Integer.parseInt(str));
		str = getParameter("AuxAxisMinTickCount");
		if(str != null)
		 	tChart.getAuxAxis().setNumMinTicks(Integer.parseInt(str));
		str = getParameter("AuxAxisGridCount");
		if(str != null)
		 	tChart.getAuxAxis().setNumGrids(Integer.parseInt(str));
		str = getParameter("AuxAxisLabelCount");
		if(str != null)
		 	tChart.getAuxAxis().setNumLabels(Integer.parseInt(str));
		str = getParameter("AuxAxisTitle");
		if(str != null)
		 	tChart.getAuxAxis().setTitleString(str);
		str = getParameter("AuxAxisTitleColor");
		if(str != null)
		 	tChart.getAuxAxis().setTitleColor(getColor(str));
		str = getParameter("AuxAxisTitleFont");
		if(str != null)
		 	tChart.getAuxAxis().setTitleFont(getFont(str));
	}
	
	protected void getAuxAxisOptions(String s) {
		TwinAxisDateChart tChart = (TwinAxisDateChart) chart;
		if(s.indexOf("autoScale") != -1)
		 	tChart.getAuxAxis().setAutoScale ( true);
		if(s.indexOf("noAutoScale") != -1)
		 	tChart.getAuxAxis().setAutoScale ( false);
		if(s.indexOf("lineOn") != -1)
		 	tChart.getAuxAxis().setLineVis ( true);
		if(s.indexOf("lineOff") != -1)
		 	tChart.getAuxAxis().setLineVis ( false);
		if(s.indexOf("labelsOn") != -1)
		 	tChart.getAuxAxis().setLabelVis ( true);
		if(s.indexOf("labelsOff") != -1)
		 	tChart.getAuxAxis().setLabelVis ( false);
		if(s.indexOf("gridOn") != -1)
		 	tChart.getAuxAxis().setGridVis ( true);
		if(s.indexOf("gridOff") != -1)
		 	tChart.getAuxAxis().setGridVis ( false);
		if(s.indexOf("tickOn") != -1)
		 	tChart.getAuxAxis().setMajTickVis ( true);
		if(s.indexOf("tickOff") != -1)
		 	tChart.getAuxAxis().setMajTickVis ( false);
		if(s.indexOf("minTickOn") != -1)
		 	tChart.getAuxAxis().setMinTickVis ( true);
		if(s.indexOf("minTickOff") != -1)
		 	tChart.getAuxAxis().setMinTickVis ( false);
		if(s.indexOf("bottomAxis") != -1)
		 	tChart.getAuxAxis().setSide ( 0);
		if(s.indexOf("topAxis") != -1)
		 	tChart.getAuxAxis().setSide ( 2);
		if(s.indexOf("leftAxis") != -1)
		 	tChart.getAuxAxis().setSide ( 1);
		if(s.indexOf("rightAxis") != -1)
		 	tChart.getAuxAxis().setSide ( 3);
		 }

		 		

	public boolean getDatasetParameters(	int 	which,
						double	xArr[],
						double	yArr[],
						double	y2Arr[],
						double	y3Arr[]) {
		String str;
		
	 	str = getParameter("dataset" + which + "Axis");
		if(str != null) {
			if(str.equals("right")){
				TwinAxisDateChart t = (TwinAxisDateChart)chart;
				t.assignToRightAxis(which, true);
			}
		}
		return super.getDatasetParameters(which, xArr, yArr, y2Arr, y3Arr);
	}

	private Image	getImage(String imageName){
		Image img;

		try{
			img = getImage(new java.net.URL(getCodeBase(), imageName));
			imageTracker = new MediaTracker(this);
			imageTracker.addImage(img, 0);
			return img;
		}
		catch(java.net.MalformedURLException e) {
			System.out.println("couldn't load desert.jpg");
			return null;
		}
	}

	public boolean handleEvent(Event e){

		if(e.target.equals(myScrollbar)){
			repaint();
			return true;
		}
		if(e.target instanceof Button){
			if(e.id == Event.ACTION_EVENT){
				if(zoomed) {
					zoomed = false;
					myScrollbar.setValues(saveValue, saveVisible, saveMinimum, saveMaximum);
				}
				else {
					zoomed = true;
					saveVisible = myScrollbar.getVisible();
					saveMinimum = myScrollbar.getMinimum();
					saveMaximum = myScrollbar.getMaximum();
					saveValue = myScrollbar.getValue();
					myScrollbar.setValues(1, 1, 1, 1);
				}
				repaint();
				return true;
			}
		}
		return false;
	}

/**
	public boolean action(Event e, Object o){

		if(e.target instanceof Button){
			System.out.println("toggle zoom here");
			return true;
		}
		return false;
	}
**/

	public void paint(Graphics g){
		if(imageTracker != null)
			try {
				imageTracker.waitForID(0);
			} catch (InterruptedException e) {
	            		return;
			}

		if(zoomed){
			chart.getXAxis().scale();
		}
		else {
			int scrollVal = myScrollbar.getValue();
			double startVal = baseStartingValue + ((double)scrollVal * scrollIncrement);
			chart.getXAxis().setAxisStart(startVal);
			chart.getXAxis().setAxisEnd(startVal + scrollIncrement);
		}
		offScreenImage = null;
		super.paint(g);
		paintComponents(g);
		myScrollPanel.paintComponents(g);
	}

}
