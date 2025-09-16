package javachart.beans.chart;

import java.beans.*;


public class StackColumnChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.StackColumnChart.class;
		customizerClass =  javachart.beans.customizer.TabShell.class;
	}
	
}
