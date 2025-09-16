package javachart.contrib;

import javachart.chart.*;

import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

public class simpleChart extends Applet {
	HorizBarChart chart = null;

	public void init () {
                Color black = new Color(255,255,255);
                chart = new HorizBarChart("My Chart");

                double[] data1 = {5.0,8.0,0.5,1.5,1.3};
                chart.addDataSet("Us", data1);

                double[] data2 = {7.5,1.9,4.6,7.8,6.5};
                chart.addDataSet("Them", data2);

                chart.getLegend().setLabelColor(black);

                chart.resize(this.size().width, this.size().height);
        }

	public void paint(Graphics g) {
		chart.drawGraph(g);
	}
}
