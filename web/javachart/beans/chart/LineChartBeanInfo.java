package javachart.beans.chart;

import java.beans.*;


public class LineChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.LineChart.class;
		customizerClass =  javachart.beans.customizer.LineTabShell.class;
	}
	
}
