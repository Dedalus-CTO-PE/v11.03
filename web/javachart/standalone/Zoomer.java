package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

public class Zoomer extends java.awt.Frame {
	LineChart            	chart;
	DataTransform			transformer;
	Datum					datOne, datTwo;
	int						x1, y1, x2, y2;
	boolean					altClick = false;

	public static void main (String[] args) {

		Zoomer 		me = new Zoomer();
		double x[] = new double[400];
		double y[] = new double[400];
	

		for (int i = 0; i < x.length; i++) {
			x[i] = (double) i;
			y[i] = Math.random() * x[i];
		}

		me.chart = new LineChart("Test Chart");

		me.chart.addDataSet("Test", x, y);
		me.chart.getXAxis().setTitleString("X axis");
		me.chart.getYAxis().setTitleString("Y axis");

		me.chart.setStringRotator(new javachart.chart.RotateString(me));

		me.chart.resize(500, 300);
		me.resize(500, 300);
		me.show();
		me.chart.drawGraph(me.getGraphics());
		me.chart.getYAxis().setAutoScale(false);
		me.chart.getXAxis().setAutoScale(false);
		me.chart.getLine().setClip(true);

	} 

	public boolean handleEvent(Event e){
		Point	pickpt;
	
		if(e.id == Event.WINDOW_DESTROY)
			System.exit(0);

		pickpt = new Point (e.x, e.y);
		if(transformer == null)
			//must do after drawing to get correct axis scale!
			transformer = new javachart.chart.DataTransform((LineChart)chart);
		if(e.id == Event.MOUSE_DOWN){
			if(e.metaDown()){
				chart.getXAxis().scale();
				chart.getYAxis().scale();
				//Axes may have changed scaling
				transformer.resize();
				repaint();
				altClick = true;
				return true;
			}
			x1 = x2 = e.x;
			y1 = y2 = e.y;
			datOne = transformer.pointToDatum(pickpt);
		}
		if(e.id == Event.MOUSE_DRAG){
			//use to draw bounding box
			if(e.y<y1){
				y2 = y1;
				y1 = e.y;
			}
			else 
				y2 = e.y;
			if(e.x<x1){
				x2 = x1;
				x1 = e.x;
			}
			else 
				x2 = e.x;
			repaint();
			transformer.resize();
			getGraphics().setColor(getForeground());
			getGraphics().drawRect(x1, y1,
					x2 - x1, 
					y2 - y1);
		}
		if(e.id == Event.MOUSE_UP){
			//if(e.metaDown())
			if(altClick){
				altClick = false;
				return true;
			}
			//rescale and redraw
			datTwo = transformer.pointToDatum(pickpt);
			if(datOne.getX()>datTwo.getX()){
				chart.getXAxis().setAxisStart(datTwo.getX());
				chart.getXAxis().setAxisEnd(datOne.getX());
			}
			else {
				chart.getXAxis().setAxisStart(datOne.getX());
				chart.getXAxis().setAxisEnd(datTwo.getX());
			}
			if(datOne.getY()>datTwo.getY()){
				chart.getYAxis().setAxisStart(datTwo.getY());
				chart.getYAxis().setAxisEnd(datOne.getY());
			}
			else {
				chart.getYAxis().setAxisStart(datOne.getY());
				chart.getYAxis().setAxisEnd(datTwo.getY());
			}
			repaint();
			//Axes may have changed scaling
			transformer.resize();
		}
		return true;
	}

	public void paint(Graphics g){
		chart.drawGraph(g);
	}

	public void update(Graphics g){
		paint(g);
	}
} 
