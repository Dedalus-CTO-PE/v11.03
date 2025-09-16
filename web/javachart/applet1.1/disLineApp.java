package javachart.applet;

import javachart.chart.LineChart;
import javachart.chart.DiscontinuousLine;


public class disLineApp extends ChartAppShell {

	boolean discontinuities[];
			  
	public void init () {
		LineChart	l;

		chart = new LineChart("My Chart");
		l = (LineChart) chart;
		l.setLine(new DiscontinuousLine(chart.getDatasets(), chart.getXAxis(), chart.getYAxis(), chart.getPlotarea()));
		getOptions();			   
		getMyOptions();
		chart.resize(this.size().width, this.size().height);
	}

	public void getMyOptions() {

		String 		str;
		LineChart	l;
		l = (LineChart) chart;

	 	str = getParameter("plotLinesOn");
	 	if(str != null) 
	 		l.setLineVisible(true);
	 	str = getParameter("plotLinesOff");
	 	if(str != null) 
	 		l.setLineVisible(false);
		 		
		getAxisOptions();
	}

/**
 *	The next two methods just override ChartAppShell to set a signal value (-1) in the y2 of any Datum
 *	that throws a number format exception, or has missing data
 */
	protected double[] getVals(String s) {
		double	vals[];
		 	int i, j;
		 	int start, end;
		 	
		 	i = 0;
		 	j = 0;
		 	while(i != -1) {
		 		i = s.indexOf(delimiter, i+1);
		 		j++;
		 	}
		 	if (j == 0) try {
		 		vals = new double[1];
		 		vals[i] = Double.valueOf((s.trim())).doubleValue();
			return vals;
		}
		catch (java.lang.NumberFormatException e) {
			vals = new double[1];
			vals[0] = 0.0;
			System.out.println("Unintelligable number in this string: " + s);
			return vals;
		}
		vals = new double[j];
		discontinuities = new boolean[j];
		 	
		start = 0;
	 	for(i=0;i<j-1;i++) {
	 		end = s.indexOf(delimiter, start);
			try {
	 				vals[i] = (Double.valueOf((s.substring(start,end)).trim())).doubleValue();
				discontinuities[i] = false;
			}
			catch (java.lang.NumberFormatException e) {
				vals[i] = 0.0;
				discontinuities[i] = true;
				//System.out.println("Unintelligable number in this string: " + s);
			}
			start = end + 1;
		}
		try {
	 		vals[i] = (Double.valueOf((s.substring(start)).trim())).doubleValue();
			discontinuities[i] = false;
		}
		catch (java.lang.NumberFormatException e) {
			vals[i] = 0.0;
			discontinuities[i] = true;
			//System.out.println("Unintelligable number in this string: " + s);
		}
		return vals;
	}

	public boolean getDataset(int which) {
		double	xArr[] = null;
		double	yArr[] = null;
		double	y2Arr[] = null;
		boolean xDiscontinuities[] = null;
		boolean yDiscontinuities[] = null;
		String	str;
		int	i;
		 	
		/**** get data for dataset "which" *******/		 	
		str = getParameter("dataset" + which + "xValues");
		if(str != null) {
		 	xArr = getVals(str);
			if(discontinuities != null) {
				xDiscontinuities = discontinuities;
				discontinuities = null;
			}
		}
		 	
	   	str = getParameter("dataset" + which + "yValues");
	   	if(str != null) {
		 	yArr = getVals(str);
			if(discontinuities != null) {
				yDiscontinuities = discontinuities;
				discontinuities = null;
			}
	   	}
		 	
		if(getDatasetParameters(which, xArr, yArr, y2Arr,null)){
			if((xDiscontinuities!=null)||(yDiscontinuities!=null)){
				for(i=0;i<yDiscontinuities.length;i++)
					if((xDiscontinuities[i])||(yDiscontinuities[i]))
						chart.getDatasets()[which].getDataElementAt(i).setY2(-1.0);
			}
			return true;
		}
		else
			return false;
	}
}
