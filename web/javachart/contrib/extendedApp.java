package javachart.contrib;

import javachart.chart.LineChart;
import java.util.Vector;
import java.util.StringTokenizer;
import java.awt.Graphics;
import java.awt.FontMetrics;
import java.io.InputStream;


public class extendedApp extends ChartAppShell {

	StringTokenizer	tokenLine;
	Vector	dataBlockStrings; 	//stores rows of data
	InputStream	myInputStream;

	public void getMyDatasets(String s) {

		if((myInputStream = openURL(s)) == null) return;
		dataBlockStrings = new Vector();
		readDataBlock();
		convertDataBlockToChartData();
		if(!closeURL(myInputStream)) return;

	}

	//overloads the public init to build a LineChart
	public void init () {
			  
		chart = new LineChart("My Chart");
		getOptions();			   
		getMyOptions();
		chart.resize(this.size().width, this.size().height);

	}

	//This just gets standard line chart options
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
		int i, j, numRows;
		double x[], y[], z[];
		int relevantColumns;

		numRows = dataBlockStrings.size();
		x = new double[numRows];
		y = new double[numRows];
		z = new double[0];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		for(j=1;j<relevantColumns;j++){
			for(i=0;i<numRows;i++) {
				y[i] = getPercentElement(i);
			}
			//we actually just throwaway z here
			getDatasetParameters(j-1, x, y, z, null); 
		}
	}

	protected double getTimeElement(	int row ){
		StringTokenizer	s;
		String	numString;
		int	colonPosition;
		double	hours, minutes;

		s = (StringTokenizer) dataBlockStrings.elementAt(row);
		numString = s.nextToken().trim();
		colonPosition = numString.indexOf(":");
		hours = Double.valueOf(numString.substring(0,colonPosition)).doubleValue();
		minutes = Double.valueOf(numString.substring(colonPosition+1)).doubleValue();
		return (hours + (minutes/60.0));
	}

	protected double getPercentElement( int row ){
		StringTokenizer	s;
		String	numString;
		int	percentPosition;

		s = (StringTokenizer) dataBlockStrings.elementAt(row);
		numString = s.nextToken().trim();
		percentPosition = numString.indexOf("%");
		if(percentPosition == -1)
			return Double.valueOf(numString).doubleValue();
		else
			return Double.valueOf(numString.substring(0,percentPosition)).doubleValue();
	}

}
