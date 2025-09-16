package javachart.applet;

import javachart.chart.StickChart;
import javachart.chart.DateAxis;
import java.util.Date;


public class stickApp extends dateLineApp {

			  
	public void init () {	  
		chart = new StickChart("My Chart");
		getOptions();
		getMyOptions();
		chart.resize(this.size().width, this.size().height);
	}

	public void getMyOptions() {
		String 		str;
		StickChart	b;
		DateAxis	ax;

		b = (StickChart) chart;
		ax = (DateAxis) b.getXAxis();

	 	str = getParameter("barBaseline");
	 	if(str != null)
	 		b.getStick().setBaseline((Double.valueOf(str)).doubleValue());

		getAxisOptions();

		//overrides xAxisStart & xAxisEnd
	 	str = getParameter("startDate");
	 	if(str != null) 
	 		ax.setAxisStart((double) Date.parse(str));
		//overrides xAxisStart & xAxisEnd
	 	if(str != null) 
	 		ax.setAxisStart((double) Date.parse(str));
	 	str = getParameter("endDate");
	 	if(str != null) 
	 		ax.setAxisEnd((double) Date.parse(str));
	 	str = getParameter("scalingType");
	 	if(str != null) 
	 		ax.setScalingType(Integer.parseInt(str));
	}
}
