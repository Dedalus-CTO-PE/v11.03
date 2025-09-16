package javachart.beans.chart;

import javachart.chart.*;
import java.awt.*;
import java.util.Date;

public class DateAreaChart extends ChartBean {

	double			value;

	public DateAreaChart() {

		double x[] = new double[3];
		double y[] = new double[3];
	
		Date now = new Date();
		x[0] = now.getTime();
		x[1] = x[0] + 60000;
		x[2] = x[1] + 60000;
		y[0] = 1234.0;
		y[1] = 5678.0;
		y[2] = 8910.0;

		chart = new javachart.chart.DAreaChart("Test Chart");
	
		chart.addDataSet("Apples", x, y);
		chart.addDataSet("Oranges", x, y);
		chart.getBackground().setTitleString("DateAreaChart");
	
		setVisible(true);
	} 

	public static void main (String[] args) {

		DateAreaChart 		b = new DateAreaChart();
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
