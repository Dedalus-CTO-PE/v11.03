package javachart.beans.chart;

import javachart.chart.*;
import java.awt.*;

public class IndBar extends ChartBean {

	double			value;

	public IndBar() {

		double y[] = new double[3];
		String labels[] = new String[3];
	
		y[0] = value = 1234.0;
		labels[0] = "A";
		y[1] = 5678.0;
		labels[1] = "B";
		y[2] = 8910.0;
		labels[2] = "C";

		chart = new IndBarChart("Test Chart");
	
		chart.addDataSet("Apples", y, labels);

		chart.getBackground().setTitleString("Bar Chart");
	
		setVisible(true);
	} 

	public static void main (String[] args) {

		IndBar 		b = new IndBar();
		java.awt.Frame			f1 = new java.awt.Frame();
		java.awt.Frame			f2 = new java.awt.Frame();
		javachart.beans.customizer.IndBarTabShell customizer = new javachart.beans.customizer.IndBarTabShell();


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
