package javachart.contrib;

import java.util.StringTokenizer;
import java.util.Vector;
import javachart.chart.StackColumnChart;


public class cornellColumn extends javachart.applet.ChartAppShell {

	Vector	rows;
	          
        public void init () {
              
		chart = new StackColumnChart("My Chart");
		getOptions();
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyDatasets(String s){
		String 		str;
		int 		i, j, nColumns;
		double[]	yVals;
		String[]	oneRow, axisLabels;

     		str = getParameter("dataRows");
     		if(str == null) 
			return;
		StringTokenizer bunchOLines = new StringTokenizer(str, "|");
		rows = new Vector();

		i = 0;
		while(bunchOLines.hasMoreTokens()) {
     			rows.addElement(getLabels(bunchOLines.nextToken()));
			i++;
		}
		//we now have i rows, arranged as a Vector of String arrays
		//figure out how many columns = nDatasets + 1
		//first column is an axis string
		oneRow = (String []) rows.elementAt(0);
		nColumns = oneRow.length;

		for(j=1;j<nColumns;j++){
			yVals = new double[rows.size()];
			for(i=0;i<rows.size();i++){
				oneRow = (String []) rows.elementAt(i);
				try{
				yVals[i] = Double.valueOf(oneRow[j]).doubleValue();
				}
				catch(Exception e){
					yVals[i] = 0.0;
				}
			}
			getDatasetParameters(j-1, null, yVals, null, null);
		}

		axisLabels = new String[rows.size()];
		for(i=0;i<rows.size();i++){
			oneRow = (String []) rows.elementAt(i);
			axisLabels[i] = oneRow[0];
		}
		chart.getXAxis().addLabels(axisLabels);
	}

	protected void getXAxisLabels(String s){
		//overrides ChartAppShell method, preventing non-row HTML labels
	}

	public void getMyOptions() {
		String 		str;
		StackColumnChart	b;
		b = (StackColumnChart) chart;

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
	     	if(str != null) {
	     		b.getBar().setLabelFormat(Integer.parseInt(str));
		}
	     		
	}

}
