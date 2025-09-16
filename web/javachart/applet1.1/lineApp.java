package javachart.applet;

import javachart.chart.LineChart;


public class lineApp extends ChartAppShell {

			  
	public void init () {
			  
		chart = new LineChart("My Chart");
		getOptions();			   
		getMyOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyOptions() {

		String 		str;
		LineChart	l;
		l = (LineChart) chart;
	
	 	str = getParameter("plotLinesOn");
	 	if(str != null) 
	 		l.setLineVisible(true);
	 	str = getParameter("plotLinesOff");
	 	if(str != null) 
	 		l.setLineVisible(false);
		str = getParameter("labelsOn");
	 	if(str != null) 
	 		l.getLine().setLabelsOn(true);
		str = getParameter("lableAngle");
		if(str != null)
		 	l.getLine().setLabelAngle(Integer.parseInt(str));
		str = getParameter("labelFormat");
		if(str != null) 
		 	l.getLine().setLabelFormat(Integer.parseInt(str));
		str = getParameter("labelPrecision");
		if(str != null) 
		 	l.getLine().setLabelPrecision(Integer.parseInt(str));
			
		getAxisOptions();
	}
}
