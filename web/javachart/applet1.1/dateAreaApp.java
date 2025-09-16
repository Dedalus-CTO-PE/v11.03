package javachart.applet;

import java.util.*;
import javachart.chart.*;


public class dateAreaApp extends dateLineApp {
	
	long startData = -1;
	long endData = -1;

	public void init () {
		String str = getParameter("startData");
	 	if(str != null) 
	 		startData = Date.parse(str);
		str = getParameter("endData");
	 	if(str != null) 
	 		endData = Date.parse(str);
		chart = new DAreaChart("My Chart");
		getOptions();
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyOptions() {

		String 		str;
		DateAxis	ax;
		ax = (DateAxis) chart.getXAxis();

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

	protected double getTimeElement(	int row ){
		StringTokenizer	s;
		String	dateString;
		int	colonPosition;
		double	hours, minutes;

		s = (StringTokenizer) dataBlockStrings.elementAt(row);
		dateString = s.nextToken().trim();
		try {
			long thisDate =  Date.parse(dateString);
			if(startData > 0)
				if(thisDate < startData){
					//System.out.println("returning a throwaway date");
					return(-1.0);
				}
			if(endData > 0)
				if(thisDate > endData){
					//System.out.println("returning a throwaway date");
					return(-1.0);
				}
			return (double) thisDate;
		}
		catch (IllegalArgumentException e) {
			System.out.println("can't parse " + dateString);
			return 0.0;
		}
	}
	protected void convertDataBlockToChartData(boolean firstTime){
		int i, j, numRows;
		double x[], y[];
		double partialX[] = null, partialY[] = null;
		int partialLength = 0;
		int relevantColumns;
		Dataset	saveD;

		numRows = dataBlockStrings.size();
		x = new double[numRows];
		y = new double[numRows];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		if(startData!=-1){
			for(i=0;i<x.length;i++){
				if(x[i]>0.0)
					partialLength++;
			}
			//System.out.println("partial arrays are " + partialLength);
			partialX = new double[partialLength];
			partialY = new double[partialLength];
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		for(j=1;j<=relevantColumns;j++){
			for(i=0;i<numRows;i++) {
				y[i] = getDoubleElement(i);
			}

			if(startData!=-1){
				int l = 0;
				for(int k=0;k<x.length;k++){
					if(x[k]>0.0){
						//System.out.println("assigning partials at " + l
						//	+ ", k: " + k + " x is " + x[k]);
						partialX[l]=x[k];
						partialY[l]=y[k];
						l++;
					}
				}
			}
		//we actually just throwaway z here
			if(startData==-1){
				if(firstTime)
					getDatasetParameters(j-1, x, y, null, null); 
				else{
					chart.getDatasets()[j-1].replaceXData(x);
					chart.getDatasets()[j-1].replaceYData(y);
				}
				//System.out.println("added full");
			}
			else{
				if(firstTime)
					getDatasetParameters(j-1, partialX, partialY, null, null); 
				else{
					chart.getDatasets()[j-1].replaceXData(partialX);
					chart.getDatasets()[j-1].replaceYData(partialY);
				}
				//System.out.println("added partials");

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

}
