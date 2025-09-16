package javachart.applet;

import javachart.chart.SpeedoChart;
import javachart.chart.SpeedoAxis;


public class speedoApp extends ChartAppShell {

			  
	public void init () {
			  
		chart = new SpeedoChart("My Chart");
		getOptions();			   
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);
	}

	public void getMyOptions() {
		String		str;
		SpeedoChart	s;
		SpeedoAxis	ax;

		s = (SpeedoChart) chart;

		str = getParameter("alarmThreshold");
		if(str != null)
		 	s.getSpeedo().setAlarmThreshold((Double.valueOf(str)).doubleValue());
		str = getParameter("needleStyle");
		if(str != null)
		 	s.getSpeedo().setNeedleStyle((Integer.valueOf(str)).intValue());
		str = getParameter("speedoPosition");
		if(str != null) {
			ax = (SpeedoAxis) s.getYAxis();
		 	ax.setSpeedoPosition((Integer.valueOf(str)).intValue());
		}

		str = getParameter("labelsOutside");
		if(str != null) {
			ax = (SpeedoAxis) s.getYAxis();
		 	ax.setLabelsInside(false);
		}

		str = getParameter("labelsInside");
		if(str != null) {
			ax = (SpeedoAxis) s.getYAxis();
		 	ax.setLabelsInside(true);
		}
	}
}
