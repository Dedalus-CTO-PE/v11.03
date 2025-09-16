package javachart.applet;

import javachart.chart.SpeedoChart;
import javachart.chart.HistorySpeedo;
import javachart.chart.SpeedoAxis;


public class hSpeedoApp extends ChartAppShell {

			  
	public void init () {
		SpeedoChart	s;			  

		chart = new SpeedoChart("My Chart");
		s = (SpeedoChart) chart;

		s.setSpeedo(new HistorySpeedo(chart.getDatasets(),
					(SpeedoAxis) chart.getYAxis(),
					chart.getPlotarea()));
		getOptions();			   
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);
	}

	public void getMyOptions() {
		String		str;
		SpeedoChart	s;
		SpeedoAxis	ax;
		HistorySpeedo	h;

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

		str = getParameter("watermarkColor");
		if(str != null) {
			h = (HistorySpeedo) s.getSpeedo();
			h.getHistoryGc().setFillColor(getColor(str));
		}
	}
}
