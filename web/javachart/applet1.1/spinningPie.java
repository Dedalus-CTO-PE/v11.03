package javachart.applet;

import java.awt.*;
import javachart.chart.PieChart;
import javachart.chart.RotateString;

public class spinningPie extends pieApp {

	int startDegrees;

	public void getMyOptions() {
		super.getMyOptions();
		PieChart pieChart = (PieChart) chart;
		startDegrees = pieChart.getPie().getStartDegrees();
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
			p = (PieChart) chart;
			width = (double) this.size().width;
			height = (double) this.size().height;
			radians = Math.atan2(
				((width/2.0)-(double)e.x)/width,
				((height/2.0)-(double)e.y)/height);
			startDegrees = (int) (180 * radians / Math.PI);
			startDegrees -= p.getPie().getStartDegrees();
			if(!home)
				doVEMessage();

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
} 
