package javachart.beans.chart;

import java.beans.*;


public class LabelLineChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.LabelLineChart.class;
		customizerClass =  javachart.beans.customizer.LineTabShell.class;
	}
	
}
