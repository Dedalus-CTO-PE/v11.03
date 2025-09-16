package javachart.contrib;

import java.util.StringTokenizer;
import javachart.contrib.GanttChart;
import javachart.chart.Dataset;
import javachart.applet.dateLineApp;

/****************************

Parses a data file that looks like this:

activity1, startDate, endDate, startDate, endDate...
activity2, startDate, endDate, startDate, endDate...
...

to construct a simple Gantt like chart

Uses GanttChart.java, which extends HorizHiLoBarChart, and HiLoDateAxis, which
extends DateAxis.

See javachart/html/contrib/gantt.html for an example chart

*************************************/

public class ganttApp extends dateLineApp {
       
	String labels[];

	public void init () {
              
		chart = new GanttChart();
		getOptions();
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);

	}
	
	public void getMyOptions() {
		String 		str;
		GanttChart	b;
		b = (GanttChart) chart;

     		str = getParameter("barLabelsOn");
     		if(str != null) 
     			b.getBar().setLabelsOn(true);
     		str = getParameter("barBaseline");
     		if(str != null)
     			b.getBar().setBaseline((Double.valueOf(str)).doubleValue());
     		str = getParameter("barClusterWidth");
     		if(str != null)
    			b.getBar().setClusterWidth((Double.valueOf(str)).doubleValue());
    		str = getParameter("barLabelAngle");
     		if(str != null)
	     		b.getBar().setLabelAngle(Integer.parseInt(str));
	    	str = getParameter("labelFormat");
	    	if(str != null) 
	     		b.getBar().setLabelFormat(Integer.parseInt(str));		
	}

	protected void convertDataBlockToChartData(boolean firstTime){

		double startDates[], endDates[], xVals[];
		int i, j, numRows;
		int relevantColumns;
		Dataset	saveD;

		numRows = dataBlockStrings.size();
		labels = new String[numRows];
		startDates = new double[numRows];
		endDates = new double[numRows];
		xVals = new double[numRows];
		for(i=0;i<numRows;i++) {
			labels[i] = getLabelElement(i);
			xVals[i] = (double) i;
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		j = 1;
		while(j<=relevantColumns){
			for(i=0;i<numRows;i++) {
				startDates[i] = getTimeElement(i);
				endDates[i] = getTimeElement(i);
			}
			j += 2;
		//we actually just throwaway z here
			if(firstTime){
				getDatasetParameters(j/2-1,  null, endDates,  startDates, null); 
			}
			else{
				//chart.getDatasets()[j-1].replaceLabels(labels);
				chart.getDatasets()[j-1].replaceYData(startDates);
				//chart.getDatasets()[j-1].replaceY2Data(endDates);
/*
Alternate mechanism for replacing data...
				saveD = chart.getDatasets()[j-1];
				chart.getDatasets()[j-1] = 
					new Dataset(saveD.getName(), x, y, chart.getGlobals());
				chart.getDatasets()[j-1].setGc(saveD.getGc());
				chart.getDatasets()[j-1].setLabelFont(saveD.getLabelFont());
				chart.getDatasets()[j-1].setLabelColor(saveD.getLabelColor());
*/
			}
		}
	}

	protected String getLabelElement( int row ){
		StringTokenizer	s;
		String	labelString;

		s = (StringTokenizer) dataBlockStrings.elementAt(row);
		labelString = s.nextToken();
		return labelString;
	}

	// overrides the method in ChartAppShell to supplant with labels from file
	protected String[] getLabels(String s){
		return labels;
	}
}
