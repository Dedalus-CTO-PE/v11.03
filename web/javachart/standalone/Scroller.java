package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

public class Scroller extends java.awt.Frame {
	javachart.chart.LineChart       chart;
	boolean 		barSelected = false;
	int				x1, y1, x2, y2;
	Scrollbar		myScrollbar;
	int				scrollWindowSize;

	public static void main (String[] args) {

		Scroller 		me = new Scroller();
		double x[] = new double[400];
		double y[] = new double[400];
	

		for (int i = 0; i < x.length; i++) {
			x[i] = (double) i;
			y[i] = Math.random() * x[i];
		}

		me.chart = new javachart.chart.LineChart("Test Chart");

		me.chart.addDataSet("Test", x, y);
		me.chart.getPlotarea().setLlY(0.30);
		me.chart.getXAxis().setTitleString("X axis");
		me.chart.getYAxis().setTitleString("Y axis");

		me.chart.setStringRotator(new javachart.chart.RotateString(me));

		me.chart.resize(500, 300);

		me.chart.setCanvas(me.getGraphics());
		me.chart.getYAxis().setAutoScale(false);
		me.chart.getYAxis().scale();
		me.chart.getXAxis().setAutoScale(false);
		me.chart.getXAxis().scale();
		me.chart.getLine().setClip(true);

		me.scrollWindowSize = x.length/5;
		me.myScrollbar = new Scrollbar(Scrollbar.HORIZONTAL, 
			me.scrollWindowSize, 
			me.scrollWindowSize, 
			me.scrollWindowSize, 
			(int) me.chart.getXAxis().getAxisEnd());

		me.setLayout(new BorderLayout());
		me.add("South", me.myScrollbar);

		me.resize(500, 300);
		me.show();
	} 

	public boolean handleEvent(Event e){

		if(e.id == Event.WINDOW_DESTROY)
			System.exit(0);
		if(e.target.equals(myScrollbar)){
			repaint();
		}
		return true;
	}

	public void paint(Graphics g){

		int scrollVal = myScrollbar.getValue();
		chart.getXAxis().setAxisStart((double)(scrollVal - scrollWindowSize));
		chart.getXAxis().setAxisEnd((double)(scrollVal));
		chart.drawGraph(g);
		super.paint(g);
	}

	public void update(Graphics g){
		paint(g);
	}
} 
