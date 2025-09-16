package javachart.beans.chart;

import java.beans.*;


public class StackBarChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.StackBarChart.class;
		customizerClass =  javachart.beans.customizer.TabShell.class;
	}
	
}
