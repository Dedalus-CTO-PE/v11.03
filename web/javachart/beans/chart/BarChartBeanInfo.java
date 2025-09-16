package javachart.beans.chart;

import java.beans.*;


public class BarChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.BarChart.class;
		customizerClass =  javachart.beans.customizer.TabShell.class;
	}
	
}
