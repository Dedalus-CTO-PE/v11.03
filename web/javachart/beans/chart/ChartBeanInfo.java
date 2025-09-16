package javachart.beans.chart;

import java.beans.*;
import java.io.Serializable;

public abstract class ChartBeanInfo extends SimpleBeanInfo {

	protected static PropertyDescriptor[] pd;


	public ChartBeanInfo() {
		super();
		initClasses();
		pd = new PropertyDescriptor[1];
		try {
/*
			pd[0]  = new PropertyDescriptor("chart", beanClass);
			pd[0].setPropertyEditorClass(javachart.beans.chart.BarChartEditor.class);
*/
			pd[0]  = new PropertyDescriptor("title", beanClass);
		}
		catch (IntrospectionException e) {
			System.out.println("couldn't introspect something");
		}
	}

	public PropertyDescriptor[] getPropertyDescriptors() {
		return pd;
	}

	public BeanDescriptor getBeanDescriptor() {
		return new BeanDescriptor(beanClass, customizerClass);
	}

	abstract void initClasses();
	protected Class customizerClass;
	protected Class beanClass;
}
