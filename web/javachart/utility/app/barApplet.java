package javachart.utility.app;

import java.awt.*;
import java.util.Vector;
import javachart.chart.*;

public class barchartApp extends javachart.applet.barApp {
    AxisDialog			axisDialog;
    PlotDialog			plotDialog;
    BackgroundDialog	backgroundDialog;
    DatasetDialog		datasetDialog;
    DatumDialog			datumDialog;
    LegendDialog		legendDialog;
    BarDialog			barDialog;
    private Vector 		list;
    private Point		pickpt;
    Object				myObj;

    public void init () {
              
		super.init();
		chart.setUseDisplayList(true);
	}

	public boolean handleEvent(Event e){
		BarChart b;
		int i;
	
		b = (BarChart) chart;
		if(e.id == Event.MOUSE_DOWN){
			list = new Vector();
			pickpt = new Point(e.x, e.y);
			if (b.getDisplayList().contains(pickpt,list))
				System.out.println("got a pick...");
		}
		else
			return false;

		if(e.metaDown()){
			i = list.size() - 2;
			System.out.println("got a meta down...");
		}
		else if(e.controlDown()){
			i = list.size() - 3;
			System.out.println("got a meta down...");
		}
		else i = list.size() - 1;

		System.out.println("there are " + list.size() + " items in the list");
		try {
			myObj = list.elementAt(i);
		}
		catch (ArrayIndexOutOfBoundsException err) {
			System.out.println("array out of bounds at " + i);
			myObj = list.elementAt(0);
		}
		doDialog(myObj);
		return true;
	}

	private void doDialog(Object myObj){
		//need to special case pies and ind bars
		if (myObj instanceof Dataset){
			if (datasetDialog == null){
				datasetDialog = new DatasetDialog((javachart.applet.ChartAppShell)this, (Dataset)myObj);
				datasetDialog.show();
			}
			else
				datasetDialog.show((Dataset)myObj);
		}
		if (myObj instanceof Datum){
			System.out.println("Datum");
			if (datumDialog == null){
				datumDialog = new DatumDialog((javachart.applet.ChartAppShell)this, (Datum)myObj);
				datumDialog.show();
			}
			else
				datumDialog.show((Datum)myObj);
		}
		if (myObj instanceof Bar){
			if (barDialog == null){
				barDialog = new BarDialog((javachart.applet.ChartAppShell)this, (Bar)myObj);
				barDialog.show();
			}
			else
				barDialog.show((Bar)myObj);
		}
		if (myObj instanceof Axis){
			if (axisDialog == null){
				axisDialog = new AxisDialog((javachart.applet.ChartAppShell)this, (AxisInterface)myObj);
				axisDialog.show();
			}
			else
				axisDialog.show((AxisInterface)myObj);
		}
		if (myObj instanceof Plotarea){
			if (plotDialog == null){
				plotDialog = new PlotDialog((javachart.applet.ChartAppShell)this);
				plotDialog.show();
			}
			else
				plotDialog.show();
		}
		if (myObj instanceof Gc){
			System.out.println("Gc");
		}
		if (myObj instanceof Background){
			if (backgroundDialog == null){
				backgroundDialog = new BackgroundDialog((javachart.applet.ChartAppShell)this);
				backgroundDialog.show();
			}
			else
				backgroundDialog.show();
		}
		if (myObj instanceof Legend){
			if (legendDialog == null){
				legendDialog = new LegendDialog((javachart.applet.ChartAppShell)this);
				legendDialog.show();
			}
			else
				legendDialog.show();
		}
	}
} 
