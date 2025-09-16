package javachart.applet;

import java.applet.*;
import java.awt.Graphics;
import javachart.chart.*;

public class simpleApp extends Applet {

ChartInterface chart;

	public void init () {
			  
		double yvals[] = new double[5];
		for(int i=0;i<5;i++)
			yvals[i] = Math.random();
		chart = new BarChart("My Chart");
		chart.resize(this.size().width, this.size().height);
		chart.addDataSet("my data", yvals);
	}

	public void paint(Graphics g) {
		chart.drawGraph(g);
	}
} 
