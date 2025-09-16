package javachart.applet;

import java.util.StringTokenizer;
import javachart.chart.HiLoCloseChart;
import javachart.chart.Dataset;


public class hiLoCloseApp extends dateLineApp {

			  
	public void init () {
			  
		chart = new HiLoCloseChart("My Chart");
		getOptions();
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyOptions() {

	}

	protected void convertDataBlockToChartData(boolean firstTime){
		int i, j, numRows;
		double x[], high[], low[], close[];
		int relevantColumns;
		Dataset	saveD;

		numRows = dataBlockStrings.size();
		x = new double[numRows];
		high = new double[numRows];
		low = new double[numRows];
		close = new double[numRows];
		for(i=0;i<numRows;i++) {
			x[i] = getTimeElement(i);
		}

		relevantColumns = ((StringTokenizer) dataBlockStrings.elementAt(0)).countTokens();
		if(relevantColumns<3){
			System.out.println("not enough columns: " + relevantColumns);
			return;
		}
		for(i=0;i<numRows;i++) {
				high[i] = getDoubleElement(i);
		}
		for(i=0;i<numRows;i++)
				low[i] = getDoubleElement(i);
		for(i=0;i<numRows;i++)
				close[i] = getDoubleElement(i);
		if(firstTime)
			getDatasetParameters(0, x, high, low, close); 
		else{
			saveD = chart.getDatasets()[0];
			chart.getDatasets()[0] = 
				new Dataset(saveD.getName(), x, high, low, close, 0, chart.getGlobals());
			chart.getDatasets()[0].setGc(saveD.getGc());
			chart.getDatasets()[0].setLabelFont(saveD.getLabelFont());
			chart.getDatasets()[0].setLabelColor(saveD.getLabelColor());
		}
	}
}
