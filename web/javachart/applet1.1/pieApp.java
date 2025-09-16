package javachart.applet;

import javachart.chart.PieChart;

public class pieApp extends ChartAppShell {

			  
	public void init () {
			  
		chart = new PieChart("My Chart");
		getOptions();			   
		getMyOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyOptions() {
		String 		str;
		PieChart	p;

		p = (PieChart) chart;
		str = getParameter("explodeSlice");
		if(str != null) 
		 	p.getPie().setExplosion((Integer.valueOf(str)).intValue(), 0.05);
		str = getParameter("textLabelsOn");
		if(str != null) {
		 	p.getPie().setTextLabelsOn(true);
		}
		str = getParameter("textLabelsOff");
		if(str != null) {
		 	p.getPie().setTextLabelsOn(false);
		}
		str = getParameter("valueLabelsOn");
		if(str != null) {
		 	p.getPie().setValueLabelsOn(true);
		}
		str = getParameter("valueLabelsOff");
		if(str != null) {
		 	p.getPie().setValueLabelsOn(false);
		}
		str = getParameter("percentLabelsOn");
		if(str != null) {
		 	p.getPie().setPercentLabelsOn(true);
		}
		str = getParameter("percentLabelsOff");
		if(str != null) {
		 	p.getPie().setPercentLabelsOn(false);
		}
		str = getParameter("labelPosition");
		if(str != null) {
		 	p.getPie().setLabelPosition(Integer.parseInt(str));
		}
		str = getParameter("labelFormat");
		if(str != null) {
		 	p.getPie().setLabelFormat(Integer.parseInt(str));
		}
		str = getParameter("labelPrecision");
		if(str != null) {
		 	p.getPie().setLabelPrecision(Integer.parseInt(str));
		}
		str = getParameter("startDegrees");
		if(str != null) {
		 	p.getPie().setStartDegrees(Integer.parseInt(str));
		}
		str = getParameter("pieWidth");
		if(str != null) {
		 	p.getPie().setWidth((Double.valueOf(str)).doubleValue());
		}
		str = getParameter("pieHeight");
		if(str != null) {
		 	p.getPie().setHeight((Double.valueOf(str)).doubleValue());
		}
		str = getParameter("xLoc");
		if(str != null) {
		 	p.getPie().setXLoc((Double.valueOf(str)).doubleValue());
		}
		str = getParameter("yLoc");
		if(str != null) {
		 	p.getPie().setYLoc((Double.valueOf(str)).doubleValue());
		}
		str = getParameter("labelFont");
		if(str != null) {
		 	p.getPie().setLabelFont(getFont(str));
		}
		str = getParameter("labelColor");
		if(str != null) {
		 	p.getPie().setLabelColor(getColor(str));
		}
	}
}
