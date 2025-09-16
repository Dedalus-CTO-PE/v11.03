package javachart.beans.chart;

import java.beans.*;


public class StickChartBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.StickChart.class;
		customizerClass =  javachart.beans.customizer.TabShell.class;
	}
	
}
