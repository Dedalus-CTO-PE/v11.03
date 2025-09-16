package javachart.beans.chart;

import java.beans.*;


public class IndColumnBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.IndColumn.class;
		customizerClass =  javachart.beans.customizer.IndBarTabShell.class;
	}
	
}
