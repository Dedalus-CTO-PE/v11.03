package javachart.beans.chart;

import javachart.chart.*;
import java.awt.*;

public class AreaChart extends ChartBean {

	double			value;

	public AreaChart() {

		double y[] = new double[3];
	
		y[0] = value = 1234.0;
		y[1] = 5678.0;
		y[2] = 8910.0;

		chart = new javachart.chart.AreaChart("Test Chart");
	
		chart.addDataSet("Apples", y);

		y[0] = value = 3400.5;
		y[1] = 1234.567;
		y[2] = 9876.543;
		chart.addDataSet("Oranges", y);
		chart.getBackground().setTitleString("Bart");
	
		setVisible(true);
	} 

	public static void main (String[] args) {

		AreaChart 		b = new AreaChart();
		java.awt.Frame			f1 = new java.awt.Frame();
		java.awt.Frame			f2 = new java.awt.Frame();
		javachart.beans.customizer.AreaTabShell customizer = new javachart.beans.customizer.AreaTabShell();


		f1.add(b);
		f1.resize(500, 300);
		b.chart.resize(500, 300);
		f1.show();
		f2.setSize(430, 300);
		f2.add(customizer);
		customizer.setObject(b);
		customizer.addPropertyChangeListener(b);
		f2.show();

/* printing experiment 
		PrintJob myPrintJob = f1.getToolkit().getPrintJob(f1, "job-o-rama", null);
		b.chart.drawGraph(myPrintJob.getGraphics());
		f1.print(myPrintJob.getGraphics());
		myPrintJob.finalize();
*/
	} 
} 
