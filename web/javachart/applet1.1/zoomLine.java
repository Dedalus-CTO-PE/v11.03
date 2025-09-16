package javachart.applet;

import java.awt.*;
import javachart.chart.*;

public class zoomLine extends lineApp {

	DataTransform			transformer;
	Datum				datOne, datTwo;
	boolean 			altClick = false;
	int				x1, y1, x2, y2;

	public void getMyOptions() {
		String str;
		super.getMyOptions();

		if(chart.getXAxis().getAutoScale()) {
			chart.getXAxis().scale();
			chart.getXAxis().setAutoScale(false);
		}
		if(chart.getYAxis().getAutoScale()) {
			chart.getYAxis().scale();
			chart.getYAxis().setAutoScale(false);
		}
		LineChart lineChart = (LineChart) chart;
		lineChart.getLine().setClip(true);
	}

	public boolean handleEvent(Event e){
		Point	pickpt;
	
		if(transformer == null)
			transformer = new javachart.chart.DataTransform((LineChart)chart);
		if(e.id == Event.MOUSE_DOWN){
			if(!home){
				doVEMessage();
				return true;
			}
			if(e.metaDown()){
				chart.getXAxis().scale();
				chart.getYAxis().scale();
				transformer.resize();
				repaint();
				altClick = true;
				return true;
			}
			x1 = x2 = e.x;
			y1 = y2 = e.y;
			pickpt = new Point (e.x, e.y);
			datOne = transformer.pointToDatum(pickpt);
		}
		if(e.id == Event.MOUSE_DRAG){
			//use to draw bounding box
			if (!home)
				return true;
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
			pickpt = new Point (e.x, e.y);
			datTwo = transformer.pointToDatum(pickpt);
			//System.out.println("one X:" + datOne.getX() + ", Y: " + datOne.getY());
			//System.out.println("two X:" + datTwo.getX() + ", Y: " + datTwo.getY());
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

	public void paint(Graphics g) {
		if(gotImages)
			try {
				imageTracker.waitForID(0);
			} catch (InterruptedException e) {
				return;
			}
		
		offScreenImage = createImage(size().width, size().height);
		offScreenSize = size();
		offScreenGraphics = offScreenImage.getGraphics();
		chart.setImage(offScreenImage);
		if (chart.getStringRotator() == null)
			chart.setStringRotator(new RotateString(this));

		if (offScreenGraphics != null)
				chart.drawGraph(offScreenGraphics);
		else
			System.out.println("null graphics in app shell");
			drawMyStuff(offScreenGraphics);
 
		g.drawImage(offScreenImage, 0, 0, null);
		if(messageFrame!=null)
		if(messageFrame.isShowing())
		messageFrame.repaint();
	}
}
