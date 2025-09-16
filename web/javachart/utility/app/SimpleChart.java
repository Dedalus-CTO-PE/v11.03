package javachart.utility.app;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

//Simple picking dialog example, extends applet to pick up Dialog management

public class SimpleChart extends applet {

	public static void main (String[] args) {

		SimpleChart 		me = new SimpleChart();


		Frame f = new Frame("Simple JavaChart Application");
		me.init();
		me.start();
		me.run();

		f.add("Center", me);
		f.resize(500, 300);
		me.chart.resize(500, 300);
		f.show();
	} 

	public String getParameter(String s){
		//no real shell to get parameters from...
		return null;
	}

	public void init(){

		double x[] = new double[5];
		double y[] = new double[5];
    
		for (int i = 0; i < 5; i++) {
		x[i] = (double) i;
		y[i] = Math.random() * 50.0;
		}

		chart = new javachart.chart.BarChart("Test Chart");

		chart.addDataSet("Test", x, y);
		chart.getXAxis().setTitleString("X axis");
		chart.getYAxis().setTitleString("Y axis");
		chart.setUseDisplayList(true);
	}
}
