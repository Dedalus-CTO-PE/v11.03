package javachart.contrib;

import javachart.chart.*;
import java.util.*;
import java.awt.*;

public class netEventApp extends javachart.applet.dateLineApp {

	double 	eventDates[];
	String	eventLabels[];
	Color	eventGridColors[];
	Color	eventLabelColors[];


	public void init(){
		eventDates = new double[20];
		for(int i=0;i<eventDates.length;i++) 
			eventDates[i] = 0.0; //unlikely
		eventLabels = new String[eventDates.length];
		eventGridColors = new Color[eventDates.length];
		eventLabelColors = new Color[eventDates.length];
		super.init();
	}

	public void getMyOptions(){
		super.getMyOptions();
		getGridEvents();
	}

	private void getGridEvents(){
		String str;

		for(int i=0;i<eventDates.length;i++){
			str = getParameter("event" + i + "Date");
			if(str != null)
				eventDates[i] = (double) Date.parse(str);
		}
		for(int i=0;i<eventDates.length;i++){
			str = getParameter("event" + i + "Label");
			if(str != null)
				eventLabels[i] = new String(str);
		}
		for(int i=0;i<eventDates.length;i++){
			str = getParameter("event" + i + "GridColor");
			if(str != null)
				eventGridColors[i] = getColor(str);
		}
		for(int i=0;i<eventDates.length;i++){
			str = getParameter("event" + i + "LabelColor");
			if(str != null)
				eventLabelColors[i] = getColor(str);
		}
	}

	public void drawMyStuff(Graphics g){
		double	eventX, startY, endY;
		Point	startPoint, endPoint;
		Datum	startDat, endDat;	//datapoint equivalents of grid line

		startY = chart.getYAxis().getAxisStart();
		endY = chart.getYAxis().getAxisEnd();
		eventX = 0.0;
		startDat = new Datum(eventX, startY, chart.getGlobals());
		endDat = new Datum(eventX, endY, chart.getGlobals());

		DataTransform dataXfm = new DataTransform((DateLineChart)chart);
		for(int i=0;i<eventDates.length;i++){
			//draw gridline
			if(eventDates[i] == 0.0)
				continue;
			startDat.setX(eventDates[i]);
			endDat.setX(eventDates[i]);
			if(eventGridColors[i] != null)
				g.setColor(eventGridColors[i]);
			startPoint = dataXfm.datumToPoint(startDat);
			endPoint = dataXfm.datumToPoint(endDat);
			g.drawLine(startPoint.x, startPoint.y, endPoint.x, endPoint.y);

			//draw label
			if(eventLabelColors[i] != null)
				g.setColor(eventLabelColors[i]);
			if(eventLabels[i] != null){
				g.drawString(eventLabels[i], startPoint.x, (startPoint.y - endPoint.y) / 2 + endPoint.y);
			}
		}
	}
}
