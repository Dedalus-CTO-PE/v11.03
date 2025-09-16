package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

public class DataTracker extends java.awt.Frame {
	Chart            	chart;
	DataTransform		transformer;
	boolean 		barSelected = false;
	Datum			myDat, chartDat;

  public static void main (String[] args) {

	DataTracker 		me = new DataTracker();
	double x[] = new double[5];
	double y[] = new double[5];
	

	for (int i = 0; i < 5; i++) {
	  x[i] = (double) i;
	  y[i] = Math.random() * 100;
	}

	me.chart = new BarChart("Test Chart");

	me.chart.addDataSet("Test", x, y);
	me.chart.getXAxis().setTitleString("X axis");
	me.chart.getYAxis().setTitleString("Y axis");
	me.chart.setUseDisplayList(true);

	me.chart.setStringRotator(new RotateString(me));

	me.chart.setCanvas(me.getGraphics());
	me.chart.resize(500, 300);
	me.resize(500, 300);
	me.show();

	me.chart.getYAxis().scale();
	me.chart.getYAxis().setAutoScale(false);
	me.chart.drawGraph();

	//must do after drawing to get correct axis scale!
	me.transformer = new DataTransform(me.chart);

  } 

	public boolean handleEvent(Event e){
		BarChart b;
		int i;
		Vector	list;
		Point	pickpt;
		Object	myObj;

		if(e.id == Event.WINDOW_DESTROY)
			System.exit(0);

		b = (BarChart) chart;
		pickpt = new Point (e.x, e.y);
		if(transformer == null)
			return true;
		list = new Vector();
		if(e.id == Event.MOUSE_DOWN){
			myDat = transformer.pointToDatum(pickpt);
			System.out.println("at " + myDat.getX() + ", " + myDat.getY());
			if (b.getDisplayList().contains(pickpt,list)){
				System.out.println("got a pick...");
				for(int j=0;j<list.size();j++){
					myObj = list.elementAt(j); //last item in list, manipulate as needed
					if(myObj instanceof Datum){
						barSelected=true;
						chartDat = (Datum) myObj;
						chartDat.setY(myDat.getY());
					}

					//check some other things, out of curiousity
					if(myObj instanceof Bar)
						System.out.println("got a bar...");

					if(myObj instanceof Dataset)
						System.out.println("got a dataset...");
					if(myObj instanceof Plotarea)
						System.out.println("got a plotarea...");
					if(myObj instanceof Background)
						System.out.println("got a Background...");
					if(myObj instanceof Axis)
						System.out.println("got an Axis...");
				}
				repaint();

				//Axes may have changed scaling
				/*** but not in this program
				transformer.resize();
				***/
			}
		}
		if(e.id == Event.MOUSE_DRAG){
			if(barSelected){
				myDat = transformer.pointToDatum(pickpt);
				chartDat.setY(myDat.getY());
				repaint();
			}
		}
		if(e.id == Event.MOUSE_UP){
			barSelected = false;
		}
		return true;
	}

	public void paint(Graphics g){
		chart.drawGraph(g);
	}
} 
