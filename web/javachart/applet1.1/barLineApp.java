package javachart.applet;

import javachart.chart.BarLineChart;

public class barLineApp extends ChartAppShell {

	//overloads the public init to build a bar/line combo
	public void init () {
			  
		chart = new BarLineChart("My Chart");
		getOptions();			   
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);
	}

	//gets options relevant to bar/area, gets dataset allocation
	public void getMyOptions() {

		String 		str;
		BarLineChart	c;
		c = (BarLineChart) chart;

		for(int i=0;i<20;i++){
	 			str = getParameter("dataset" + i + "Type");
	 			if(str != null){
	 				if(str.equals("Bar")) 
	 					c.dataAllocation[i] = BarLineChart.BAR;
	 				else if(str.equals("Line")) 
	 					c.dataAllocation[i] = BarLineChart.LINE;
			}
		}

	 	str = getParameter("stackedBar");
	 	if(str != null) 
	 		if(str.equalsIgnoreCase("true")) 
	 			c.setStackedBar(true);
	 	str = getParameter("barLabelsOn");
	 	if(str != null) 
	 		c.getBar().setLabelsOn(true);
	 	str = getParameter("barBaseline");
	 	if(str != null)
	 		c.getBar().setBaseline((Double.valueOf(str)).doubleValue());
	 	str = getParameter("barClusterWidth");
	 	if(str != null)
			c.getBar().setClusterWidth((Double.valueOf(str)).doubleValue());
		str = getParameter("barLabelAngle");
	 	if(str != null)
		 	c.getBar().setLabelAngle(Integer.parseInt(str));
		str = getParameter("labelFormat");
		if(str != null)
		 	c.getBar().setLabelFormat(Integer.parseInt(str));
		if(str != null) 
		 	c.getBar().setLabelFormat(Integer.parseInt(str));
		str = getParameter("labelPrecision");
		if(str != null) 
		 	c.getBar().setLabelPrecision(Integer.parseInt(str));
	}
}
