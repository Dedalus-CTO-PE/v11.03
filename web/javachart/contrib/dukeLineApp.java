package javachart.contrib;

/**
 *	very similar to javachart.applet.dateLineApp.java, except it installs
 *	a DiscontinuousLine, and adds handling for discontinuities.
 */
import javachart.chart.*;
import java.util.Vector;
import java.util.StringTokenizer;
import java.util.Date;
import java.awt.Graphics;
import java.awt.FontMetrics;
import java.io.InputStream;


public class dukeLineApp extends javachart.applet.ChartAppShell {

	StringTokenizer	tokenLine;
	Vector		dataBlockStrings; 	//stores rows of data
	String		urlString;
	boolean 	discontinuities[];
	InputStream	myInputStream;

	public void getMyDatasets(String s) {

		if((myInputStream = openURL(s)) == null) return;
		urlString = new String(s);
		dataBlockStrings = new Vector();
		readDataBlock();
		convertDataBlockToChartData(true);
		if(!closeURL(myInputStream)) return;

	}

	protected void reReadURLDatasets() {

//System.out.println("reReading " + urlString);
		if((myInputStream = openURL(urlString)) == null) return;
		dataBlockStrings = new Vector();
		readDataBlock();
		convertDataBlockToChartData(false);
		if(!closeURL(myInputStream)) return;

	}

	//overloads the public init to build a DateLineChart
        public void init () {
              
		chart = new DateLineChart("My Chart");
		DateLineChart myChart = (DateLineChart) chart;
		myChart.setLine(new DiscontinuousLine(
				chart.getDatasets(),
				chart.getXAxis(),
				chart.getYAxis(),
				chart.getPlotarea()));
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
		discontinuities = new boolean[numRows];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		for(j=1;j<=relevantColumns;j++){
			for(i=0;i<numRows;i++) {
				y[i] = getDoubleElement(i);
			}
			if(firstTime){
				getDatasetParameters(j-1, x, y, null, null); 
				//insert discontinuities
				for(int k=0;k<discontinuities.length;k++)
					if(discontinuities[k])
						chart.getDatasets()[j-1].getDataElementAt(k).setY2(-1.0);
			}
			else{
				saveD = chart.getDatasets()[j-1];
				chart.getDatasets()[j-1] = 
					new Dataset(saveD.getName(), x, y, chart.getGlobals());
				chart.getDatasets()[j-1].setGc(saveD.getGc());
				chart.getDatasets()[j-1].setLabelFont(saveD.getLabelFont());
				chart.getDatasets()[j-1].setLabelColor(saveD.getLabelColor());
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
			return (double) Date.parse(dateString);
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
		try {
			discontinuities[row] = false;
			return Double.valueOf(numString).doubleValue();
		}
		catch (NumberFormatException e){
			discontinuities[row] = true;
			return 0.0;
		}
	}

}
