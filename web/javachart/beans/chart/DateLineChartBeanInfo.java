package javachart.beans.chart;

import java.beans.*;


public class DateLineChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.DateLineChart.class;
		customizerClass =  javachart.beans.customizer.LineTabShell.class;
	}
	
}
