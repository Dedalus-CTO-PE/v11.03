package javachart.applet;

import javachart.chart.BarChart;


public class columnApp extends ChartAppShell {

			  
	public void init () {
			  
		chart = new BarChart("My Chart");
		getOptions();			   
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyOptions() {
		String 		str;
		BarChart	b;

		b = (BarChart) chart;
	 	str = getParameter("barLabelsOn");
	 	if(str != null)
	 		if(str.indexOf("true") != -1)
	 			b.getBar().setLabelsOn(true);
	 	str = getParameter("barBaseline");
	 	if(str != null)
	 		b.getBar().setBaseline((Double.valueOf(str)).doubleValue());
	 	str = getParameter("barClusterWidth");
	 	if(str != null)
	 		b.getBar().setClusterWidth((Double.valueOf(str)).doubleValue());
	 	str = getParameter("barLabelAngle");
	 	if(str != null)
		 	b.getBar().setLabelAngle(Integer.parseInt(str));
		str = getParameter("labelFormat");
		if(str != null) 
		 	b.getBar().setLabelFormat(Integer.parseInt(str));
		str = getParameter("labelPrecision");
		if(str != null) 
		 	b.getBar().setLabelPrecision(Integer.parseInt(str));
	}
}
