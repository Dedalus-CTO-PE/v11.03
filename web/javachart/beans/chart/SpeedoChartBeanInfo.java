package javachart.beans.chart;

import java.beans.*;


public class SpeedoChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.SpeedoChart.class;
		customizerClass =  javachart.beans.customizer.SpeedoTabShell.class;
	}
	
}
