package javachart.beans.chart;

import java.beans.*;


public class DateAreaChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.DateAreaChart.class;
		customizerClass =  javachart.beans.customizer.AreaTabShell.class;
	}
	
}
