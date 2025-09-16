package javachart.beans.chart;

import java.beans.*;


public class PieChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.PieChart.class;
		customizerClass =  javachart.beans.customizer.PieTabShell.class;
	}
	
}
