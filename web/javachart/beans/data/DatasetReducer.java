package javachart.beans.data;

import java.util.Vector;
import java.io.Serializable;
import javachart.chart.*;
import javachart.beans.chart.DummyChartBean;

/**
 *	Creates newData events with a single Dataset, from a newData event that may contain many
 *	datasets.  Used to push data into Pie, IndBar, IndColumn, Speedo charts
 */
public class DatasetReducer 
		extends SimpleDataFeed 
		implements DataFeedListener {

	public DatasetReducer(){
	}

	public void newData(DataEvent e){
		myDatasetArray[0] = e.datasetArray[selectedDataset];
		update();
	}

	public void setSelectedDataset(int i){
		if((i>0)&&(i<40))
			selectedDataset = i;
	}

	public int getSelectedDataset(){
		return selectedDataset;
	}

	private		int selectedDataset = 0;
}
