package javachart.beans.chart;

import java.beans.*;


public class HorizBarChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.HorizBarChart.class;
		customizerClass =  javachart.beans.customizer.TabShell.class;
	}
	
}
