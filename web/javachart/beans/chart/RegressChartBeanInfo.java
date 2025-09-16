package javachart.beans.chart;

import java.beans.*;


public class RegressChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.RegressChart.class;
		customizerClass =  javachart.beans.customizer.LineTabShell.class;
	}
	
}
