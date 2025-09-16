package javachart.contrib;

import javachart.applet.indBarApp;
import java.util.*;
import java.awt.Graphics;
import java.io.InputStream;

public class epaApp extends indBarApp {

	Vector		dataBlockStrings; 	//stores rows of data
	String		dataLabels[];
	InputStream	myInputStream;


	public void getMyDatasets(String s) {

		if((myInputStream = openURL(s)) == null) return;
		dataBlockStrings = new Vector();
		readDataBlock();
		convertDataBlockToChartData();
		if(!closeURL(myInputStream)) return;

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

	protected void convertDataBlockToChartData(){
		int i, numRows;
		double x[], y[], z[];
		StringTokenizer st;
		String	numString;
		String xAxisTitle, yAxisTitle;

		numRows = dataBlockStrings.size();
		x = new double[numRows-1];
		y = new double[numRows-1];
		dataLabels = new String[numRows];
		z = new double[0];
		st = (StringTokenizer) dataBlockStrings.elementAt(0);
		xAxisTitle = st.nextToken();
		yAxisTitle = st.nextToken();
		for(i=1;i<numRows;i++) {
			x[i-1] = (double) i;
			st = (StringTokenizer) dataBlockStrings.elementAt(i);
			dataLabels[i-1] = st.nextToken();
			try {
				numString = st.nextToken();
			}
			catch(NoSuchElementException e) {
				numString = dataLabels[i-1];	
				dataLabels[i-1] = " ";
			}
			y[i-1] = Double.valueOf(numString.trim()).doubleValue();
		}

		getDatasetParameters(0, y, y, z, null);
		chart.getXAxis().setTitleString(xAxisTitle);
		chart.getYAxis().setTitleString(yAxisTitle);
	}

private boolean firstTime = true;

	protected String[] getLabels(String s){
		if(firstTime){
			firstTime = false;
			return dataLabels;
		}
		return super.getLabels(s);
	}
}
