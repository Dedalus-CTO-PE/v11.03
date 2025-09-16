package javachart.beans.chart;

import javachart.chart.*;
import java.awt.*;

public class StackBarChart extends ChartBean {

	public StackBarChart() {

		double y[] = new double[3];
	
		y[0] = 1234.0;
		y[1] = 5678.0;
		y[2] = 8910.0;

		chart = new javachart.chart.StackBarChart("Test Chart");
	
		chart.addDataSet("Apples", y);

		y[0] = 3400.5;
		y[1] = 1234.567;
		y[2] = 9876.543;
		chart.addDataSet("Oranges", y);
		chart.getBackground().setTitleString("Bart");
	
		setVisible(true);
	} 
} 
