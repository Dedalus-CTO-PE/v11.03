package javachart.beans.chart;

import java.beans.*;


public class AreaChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.AreaChart.class;
		customizerClass =  javachart.beans.customizer.AreaTabShell.class;
	}
	
}
