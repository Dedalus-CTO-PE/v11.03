package javachart.beans.chart;

import javachart.chart.*;
import java.awt.*;

public class SpeedoChart extends ChartBean {


	public SpeedoChart() {

		double y[] = new double[3];
		String labels[] = new String[3];
	
		y[0] = 1234.0;
		labels[0] = "A";
		y[1] = 5678.0;
		labels[1] = "B";
		y[2] = 8910.0;
		labels[2] = "C";

		chart = new javachart.chart.SpeedoChart("Test Chart");
		chart.addDataSet("Apples", y);
		chart.getBackground().setTitleString("Speedy");

		setVisible(true);
	} 

	public static void main (String[] args) {

		SpeedoChart 		b = new SpeedoChart();
		java.awt.Frame			f1 = new java.awt.Frame();
		java.awt.Frame			f2 = new java.awt.Frame();
		javachart.beans.customizer.SpeedoTabShell customizer = new javachart.beans.customizer.SpeedoTabShell();


		f1.add(b);
		f1.resize(500, 300);
		b.chart.resize(500, 300);
		f1.show();
		f2.setSize(430, 300);
		f2.add(customizer);
		customizer.setObject(b);
		customizer.addPropertyChangeListener(b);
		f2.show();

	} 
} 
