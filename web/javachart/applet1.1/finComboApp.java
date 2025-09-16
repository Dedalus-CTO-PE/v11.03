package javachart.applet;

import javachart.chart.FinComboChart;
import javachart.chart.DateAxis;
import java.util.Vector;
import java.util.StringTokenizer;
import java.util.NoSuchElementException;
import java.util.Date;
import java.io.InputStream;


public class finComboApp extends dateLineApp {

	StringTokenizer	tokenLine;

	public void getMyDatasets(String s) {
		String str;

		FinComboChart c = (FinComboChart) chart;
		str = getParameter("splitWindow");
		if(str != null)
			if(str.equalsIgnoreCase("false"))
				c.setSplitWindow(false);
		for(int i=0;i<20;i++){
	 			str = getParameter("dataset" + i + "Type");
	 			if(str != null){
	 				if(str.equals("Line")) 
	 					c.dataAllocation[i] = FinComboChart.LINE;
	 				else if(str.equals("HLOC")) 
	 					c.dataAllocation[i] = FinComboChart.HLOC;
	 				else if(str.equals("Stick")) {
	 					c.dataAllocation[i] = FinComboChart.STICK;
				}
			}
		}

		if((myInputStream = openURL(s))==null) return;
		dataBlockStrings = new Vector();
		readDataBlock();
		convertDataBlockToChartData();
		if(!closeURL(myInputStream)) return;

	}

	//overloads the public init to build a DateLineChart
	public void init () {
			  
		chart = new FinComboChart("My Chart");
		getOptions();			   
		getMyOptions();
		chart.resize(this.size().width, this.size().height);

	}

	//This just gets standard line chart options + a beginning and ending date
	//for the X axis
	public void getMyOptions() {
		String 		str;
		FinComboChart	l;
		DateAxis	ax;

		l = (FinComboChart) chart;
		ax = (DateAxis) l.getXAxis();

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

	protected void convertDataBlockToChartData(){
		int i, j, numRows;
		double x[], y[], y2[], y3[];
		int relevantColumns;

		numRows = dataBlockStrings.size();
		x = new double[numRows];
		y = new double[numRows];
		y2 = new double[numRows];
		y3 = new double[numRows];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		j = 0;
		while(getYElements(numRows, j, y, y2, y3)){
			getDatasetParameters(j, x, y, y2, y3); 
			j++;
		}
	}

	protected boolean getYElements(int numRows, int setNumber, 
			double y1[], 
			double y2[], 
			double y3[]){
		int		i;
		FinComboChart	c;
		c = (FinComboChart)chart;
		try{
			if( (c.dataAllocation[setNumber] == FinComboChart.LINE)||
				(c.dataAllocation[setNumber] == FinComboChart.STICK)){
				for(i=0;i<numRows;i++) {
					y1[i] = getDoubleElement(i);
				}
			}
			else if (c.dataAllocation[setNumber] == FinComboChart.HLOC){
				for(i=0;i<numRows;i++) {
					y1[i] = getDoubleElement(i);
				}
				for(i=0;i<numRows;i++) {
					y2[i] = getDoubleElement(i);
				}
				for(i=0;i<numRows;i++) {
				y3[i] = getDoubleElement(i);
				}	
			}
			else
				return false;
		}
		catch (NoSuchElementException e) {
			return false;
		}
		catch (ArrayIndexOutOfBoundsException a) {
			return false;
		}
		return true;
	}
}
