package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

public class Spinner extends java.awt.Frame {
	javachart.chart.Chart            	chart;
	int			startDegrees;

	public static void main (String[] args) {

		Spinner 		f = new Spinner();
		double x[] = new double[5];
		double y[] = new double[5];
    
		for (int i = 0; i < 5; i++) {
		x[i] = (double) i;
		y[i] = Math.random();
		}

		f.chart = new javachart.chart.PieChart("Test Chart");

		f.chart.addDataSet("Test", y);

		f.resize(300, 300);
		f.chart.resize(300, 300);

		f.show();
	} 

/**
 *  spins the pie by adjusting the rotation value on drag
 */
	public boolean handleEvent(Event e){
		javachart.chart.PieChart p;
		double 	radians, width, height;
		int	deg;

		if(e.id == Event.WINDOW_DESTROY)
			System.exit(0);

		if(e.id == Event.MOUSE_DOWN){
			p = (javachart.chart.PieChart) chart;
			width = (double) this.size().width;
			height = (double) this.size().height;
			radians = Math.atan2(
				((width/2.0)-(double)e.x)/width,
				((height/2.0)-(double)e.y)/height);
			startDegrees = (int) (180 * radians / Math.PI);
			startDegrees -= p.getPie().getStartDegrees();
		}
		if(e.id == Event.MOUSE_DRAG){
			p = (javachart.chart.PieChart) chart;
			width = (double) this.size().width;
			height = (double) this.size().height;
			radians = Math.atan2(
				((width/2.0)-(double)e.x)/width,
				((height/2.0)-(double)e.y)/height);
			deg = (int) (180 * radians / Math.PI);

			deg -= startDegrees;
			p.getPie().setStartDegrees(deg);
			repaint();
		}
		return true;
	}

	public void paint(Graphics g){
		chart.drawGraph(g);
	}
} 
