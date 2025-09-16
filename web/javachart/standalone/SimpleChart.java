package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

/**
 *	This chart can also be added to any other component with a call like this:
 *  add(new SimpleChart());
 */

public class SimpleChart extends java.awt.Panel {

	public Chart            	chart;

	SimpleChart(){
		chart = new BarChart("Test Chart");

		double x[] = new double[5];
		double y[] = new double[5];
    
		for (int i = 0; i < 5; i++) {
		x[i] = (double) i;
		y[i] = Math.random();
		}

		chart.addDataSet("Test", x, y);
		chart.getXAxis().setTitleString("X axis");
		chart.getYAxis().setTitleString("Y axis");
	} 

	public void paint(Graphics g){
		chart.resize(this.getSize().width, this.getSize().height);
		chart.drawGraph(g);
	}

	public static void main (String[] args) {

		SimpleChart 		f = new SimpleChart();

		Frame myFrame = new Frame();
		myFrame.add(f);
		myFrame.resize(500, 300);
		f.resize(500, 300);
		myFrame.show();
	}
} 
