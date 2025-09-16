package javachart.beans.chart;

import java.beans.*;


public class IndBarBeanInfo extends ChartBeanInfo {

	void initClasses(){
		beanClass =  javachart.beans.chart.IndBar.class;
		customizerClass =  javachart.beans.customizer.IndBarTabShell.class;
	}
	
}
