package javachart.applet;

import javachart.chart.*;
import java.util.Vector;
import java.util.StringTokenizer;
import java.util.Date;
import java.awt.Graphics;
import java.awt.FontMetrics;
import java.io.InputStream;


public class dateLineApp extends ChartAppShell {

	StringTokenizer	tokenLine;
	protected Vector		dataBlockStrings; 	//stores rows of data
	String		urlString;
	protected 	InputStream 	myInputStream;
	protected		boolean		incrementalData = false;
	String		incrementalUrl;

	public void getMyDatasets(String s) {

		if((myInputStream = openURL(s))==null) return;
		urlString = new String(s);
		dataBlockStrings = new Vector();
		readDataBlock();
		convertDataBlockToChartData(true);
		if(!closeURL(myInputStream)) return;

	}

	protected void reReadURLDatasets() {

		if(incrementalData){

			if((myInputStream = openURL(incrementalUrl))==null) return;
			dataBlockStrings = new Vector();
			readDataBlock();
			convertDataBlockToIncrementalData(false);
			if(!closeURL(myInputStream)) return;
		}
		else {

			if((myInputStream = openURL(urlString))==null) return;
			dataBlockStrings = new Vector();
			readDataBlock();
			convertDataBlockToChartData(false);
			if(!closeURL(myInputStream)) return;
		}

	}

	//overloads init to build a DateLineChart
	public void init () {

		chart = new DateLineChart("My Chart");
		getOptions();
		getMyOptions();
		chart.resize(this.size().width, this.size().height);

	}

	//This just gets standard line chart options + a beginning and ending date
	//for the X axis
	public void getMyOptions() {

		String 		str;
		DateLineChart	l;
		DateAxis	ax;
		l = (DateLineChart) chart;
		ax = (DateAxis) l.getXAxis();

	 	str = getParameter("plotLinesOn");
	 	if(str != null) 
	 		l.setLineVisible(true);
	 	str = getParameter("plotLinesOff");
	 	if(str != null) 
	 		l.setLineVisible(false);

		getAxisOptions();

		//overrides xAxisStart & xAxisEnd
	 	str = getParameter("startDate");
	 	if(str != null) 
	 		ax.setAxisStart((double) Date.parse(str));
	 	str = getParameter("endDate");
	 	if(str != null) 
	 		ax.setAxisEnd((double) Date.parse(str));
	 	str = getParameter("scalingType");
	 	if(str != null) 
	 		ax.setScalingType(Integer.parseInt(str));	     		
	 	str = getParameter("incrementalDataURL");
	 	if(str != null) {
			incrementalData = true;
	 		incrementalUrl = str;
		}
	}

	//grab the entire file, putting it into a StringTokenizer Vector
	protected void readDataBlock(){
		String s;
		//end of data block will be null string
		s = getLineFromURL(myInputStream);
		while(s != null){ 
			if(s.length() > 1)
				dataBlockStrings.addElement((Object)new StringTokenizer(s, ","));
			s = getLineFromURL(myInputStream);
		}
	}

	protected void convertDataBlockToChartData(boolean firstTime){
		int i, j, numRows;
		double x[], y[];
		int relevantColumns;
		Dataset	saveD;

		numRows = dataBlockStrings.size();
		x = new double[numRows];
		y = new double[numRows];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		for(j=1;j<=relevantColumns;j++){
			for(i=0;i<numRows;i++) {
				y[i] = getDoubleElement(i);
			}
		//we actually just throwaway z here
			if(firstTime)
				getDatasetParameters(j-1, x, y, null, null); 
			else{
				chart.getDatasets()[j-1].replaceXData(x);
				chart.getDatasets()[j-1].replaceYData(y);
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

	protected void convertDataBlockToIncrementalData(boolean firstTime){
		int i, j, numRows;
		double x[], y[];
		int relevantColumns;

		numRows = dataBlockStrings.size();
		x = new double[numRows];
		y = new double[numRows];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		for(j=1;j<=relevantColumns;j++){
			for(i=0;i<numRows;i++) {
				y[i] = getDoubleElement(i);
			}
		//we actually just throwaway z here
			if(firstTime)
				getDatasetParameters(j-1, x, y, null, null); 
			else{
				Vector dataVector = chart.getDatasets()[j-1].getData();
				Globals g = chart.getGlobals();
				for(int k=0;k<x.length;k++){
					Datum d = new Datum(x[k], y[k], g);
					dataVector.addElement(d);
				}
			}
		}
	}

	protected double getTimeElement(	int row ){
		StringTokenizer	s;
		String	dateString;
		int	colonPosition;
		double	hours, minutes;

		s = (StringTokenizer) dataBlockStrings.elementAt(row);
		dateString = s.nextToken().trim();
		try {
			long d = Date.parse(dateString);
			//Date newDate = new Date(d);
			//System.out.println("data: " + newDate.toString());
			return (double) d;
		}
		catch (IllegalArgumentException e) {
			System.out.println("can't parse " + dateString);
			return 0.0;
		}
	}

	protected double getDoubleElement( int row ){
		StringTokenizer	s;
		String	numString;

		s = (StringTokenizer) dataBlockStrings.elementAt(row);
		numString = s.nextToken().trim();
		return Double.valueOf(numString).doubleValue();
	}

	protected String getDwellLabelXString(Datum dat){
			double d = dat.getX();
			Date myDate = new Date((long)d);
			return myDate.toString();
	}

}
