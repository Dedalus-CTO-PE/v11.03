package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.util.Vector;

public class SimpleLine extends java.awt.Frame {
	Chart            	chart;

	public static void main (String[] args) {

		SimpleLine 		f = new SimpleLine();
		double x[] = new double[5];
		double y[] = new double[5];
    
		for (int i = 0; i < 5; i++) {
		x[i] = (double) i;
		y[i] = Math.random();
		}

		f.chart = new LineChart("Test Chart");

		f.chart.addDataSet("Test", x, y);
		f.chart.getXAxis().setTitleString("X axis");
		f.chart.getYAxis().setTitleString("Y axis");
		f.chart.setUseDisplayList(true);

		f.chart.setStringRotator(new RotateString(f));

		f.resize(500, 300);
		f.chart.resize(500, 300);
		f.show();
	} 

	public boolean handleEvent(Event e){
		LineChart b;
		int i;
		Vector	list;
		Point	pickpt;
		Object	myObj;
		Datum	myDat;
		
		if(e.id == Event.WINDOW_DESTROY)
			System.exit(0);

		b = (LineChart) chart;
		pickpt = new Point (e.x, e.y);
		list = new Vector();
		if(e.id == Event.MOUSE_DOWN){
			if (b.getDisplayList().contains(pickpt,list)){
				System.out.println("got a pick...");
				for(int j=0;j<list.size();j++){
					myObj = list.elementAt(j); //last item in list, manipulate as needed
					if(myObj instanceof Dataset)
						System.out.println("got a dataset...");
					if(myObj instanceof Line)
						System.out.println("got a Line...");
					if(myObj instanceof Plotarea)
						System.out.println("got a plotarea...");
					if(myObj instanceof Background)
						System.out.println("got a Background...");
					if(myObj instanceof Axis)
						System.out.println("got an Axis...");
					if(myObj instanceof Datum){
						System.out.println("got a datum, setting to 0");
						myDat = (Datum) myObj; //coerce to Datum
						myDat.setY(0.0);
					}
				}
				repaint();
			}
		}
		return true;
	}

	public void paint(Graphics g){
		Dimension d = getSize();
		chart.resize(d.width, d.height);
		chart.drawGraph(g);
	}
} 
