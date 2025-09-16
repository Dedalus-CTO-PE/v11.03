package javachart.beans.data;

import java.util.Vector;
import java.io.Serializable;
import javachart.chart.*;
import javachart.beans.chart.DummyChartBean;

public class DatapointReducer 
		extends SimpleDataFeed 
		implements DataFeedListener {

	public DatapointReducer(){
		myDataset = new Dataset();
		myDatasetArray[0] = myDataset;
	}

	public void newData(DataEvent e){
		Vector v = myDataset.getData();
		v.removeAllElements();
		if(useLastObservation)
			v.addElement(e.datasetArray[0].getData().lastElement());
		else
			v.addElement(e.datasetArray[0].getData().elementAt(selectedDatapoint));
		update();
	}

	public void setSelectedDatapoint(int i){
		if(i>0)
			selectedDatapoint = i;
	}

	public int getselectedDatapoint(){
		return selectedDatapoint;
	}

	public void setUseLastObservation(boolean yesNo){
		useLastObservation = yesNo;
	}

	public boolean getUseLastObservation(){
		return useLastObservation;
	}

	private		boolean useLastObservation = false;
	private		int selectedDatapoint = 0;
	private 	Dataset myDataset;
}
