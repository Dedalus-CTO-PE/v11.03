package javachart.beans.data;

import java.beans.*;
import java.io.Serializable;

public class SimpleDataFeedBeanInfo extends SimpleBeanInfo 
		implements Serializable {

	PropertyDescriptor[] dataFeedProps;

	public EventSetDescriptor[] getEventSetDescriptors() {
		String[] listenerMethods = { "newData" };
		EventSetDescriptor e = null;
		try {
			e = new EventSetDescriptor(SimpleDataFeed.class,
				"New Data Event", DataFeedListener.class, listenerMethods,
				"addDataFeedListener",
				"removeDataFeedListener");
		} catch (IntrospectionException ex) {
			System.out.println("introspection problem");
		}
		EventSetDescriptor[] events = { e };
		return events;
	}
}
