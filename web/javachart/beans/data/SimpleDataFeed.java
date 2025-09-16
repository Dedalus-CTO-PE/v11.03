package javachart.beans.data;

import java.util.Vector;
import java.io.Serializable;
import javachart.chart.*;

public abstract class SimpleDataFeed implements Serializable {

	public SimpleDataFeed(){
	}

	public void update(){
		fireEvent();
	}

	public void addDataFeedListener(DataFeedListener l){
		if(listeners == null)
			listeners = new Vector();
		listeners.addElement(l);
	}

	public void removeDataFeedListener(DataFeedListener l){
		listeners.removeElement(l);
	}

	public void setSendXData(boolean yesNo){
		if(yesNo)
			myEvent.modifiers|=DataEvent.X_DATA_MASK;
		else
			myEvent.modifiers&= ~DataEvent.X_DATA_MASK;
	}
	public boolean getSendXData(){
		if((myEvent.modifiers & DataEvent.X_DATA_MASK) != 0)
			return true;
		else
			return false;
	}

	public void setSendYData(boolean yesNo){
		if(yesNo)
			myEvent.modifiers|=DataEvent.Y_DATA_MASK;
		else
			myEvent.modifiers&= ~DataEvent.Y_DATA_MASK;
	}
	public boolean getSendYData(){
		if((myEvent.modifiers & DataEvent.Y_DATA_MASK) != 0)
			return true;
		else
			return false;
	}

	public void setSendZData(boolean yesNo){
		if(yesNo)
			myEvent.modifiers|=DataEvent.Z_DATA_MASK;
		else
			myEvent.modifiers&= ~DataEvent.Z_DATA_MASK;
	}
	public boolean getSendZData(){
		if((myEvent.modifiers & DataEvent.Z_DATA_MASK) != 0)
			return true;
		else
			return false;
	}

	public void setSendAuxData(boolean yesNo){
		if(yesNo)
			myEvent.modifiers|=DataEvent.AUX_DATA_MASK;
		else
			myEvent.modifiers&= ~DataEvent.AUX_DATA_MASK;
	}
	public boolean getSendAuxData(){
		if((myEvent.modifiers & DataEvent.AUX_DATA_MASK) != 0)
			return true;
		else
			return false;
	}

	public void setSendSetNames(boolean yesNo){
		if(yesNo)
			myEvent.modifiers|=DataEvent.SET_NAMES_MASK;
		else
			myEvent.modifiers&= ~DataEvent.SET_NAMES_MASK;
	}
	public boolean getSendSetNames(){
		if((myEvent.modifiers & DataEvent.SET_NAMES_MASK) != 0)
			return true;
		else
			return false;
	}

	public void setSendLabels(boolean yesNo){
		if(yesNo)
			myEvent.modifiers|=DataEvent.LABELS_MASK;
		else
			myEvent.modifiers&= ~DataEvent.LABELS_MASK;
	}
	public boolean getSendLabels(){
		if((myEvent.modifiers & DataEvent.LABELS_MASK) != 0)
			return true;
		else
			return false;
	}

	protected void fireEvent() {
		myEvent.datasetArray = myDatasetArray;

		if(listeners == null)
			listeners = new Vector();
		for(int i=0;i<listeners.size();i++){
			DataFeedListener l = (DataFeedListener) listeners.elementAt(i);
			l.newData(myEvent);
		}
	}

	protected void updateDatasets(){
		int i;
		int numberOfSets;

		//clear out any extra datasets
		numberOfSets = yArray.length;
		for(i=numberOfSets;i<myDatasetArray.length;i++){
			myDatasetArray[i] = null;
		}

		//update and/or add datasets
		for(i=0;i<numberOfSets;i++){
			Dataset d = myDatasetArray[i];
			if(d==null){
				d = new Dataset("Dataset " + i, new double[0], i, myGlobals);
				myDatasetArray[i] = d;
			}
			updateDataset(i, d);
		}
	}

	protected void updateDataset(int whichSet, Dataset d){
		int i;
		int numberOfPoints; //based on size of data arrays

		Vector dataVector = d.getData();
		//shrink, as required
		numberOfPoints = yArray[whichSet].length;
		while(dataVector.size()>numberOfPoints)
			dataVector.removeElementAt(numberOfPoints);
		//update X and Y values
		for(i=0;i<dataVector.size();i++){
			((Datum)dataVector.elementAt(i)).setY(yArray[whichSet][i]);
			((Datum)dataVector.elementAt(i)).setX(xArray[whichSet][i]);
			if(labelArray!=null)
				if((labelArray.length > whichSet)&&(labelArray[whichSet]!=null))
					((Datum)dataVector.elementAt(i)).setLabel(labelArray[whichSet][i]);
		}

		//add new Datum classes as required
		if(dataVector.size()<numberOfPoints){
			for(i=dataVector.size();i<numberOfPoints;i++){
				if(labelArray!=null){
					if((labelArray.length > whichSet)&&(labelArray[whichSet]!=null))
						dataVector.addElement(new
							Datum(xArray[whichSet][i],
								yArray[whichSet][i], 
								labelArray[whichSet][i],
								true, myGlobals));
					else
						dataVector.addElement(new
							Datum(xArray[whichSet][i],
								yArray[whichSet][i], 
								true, myGlobals));
				}
				else {
					dataVector.addElement(new
						Datum(xArray[whichSet][i],
							yArray[whichSet][i], 
							true, myGlobals));
				}
			}
		}
	}

	protected	Globals	myGlobals = new Globals();
	protected	Dataset[] myDatasetArray = new Dataset[40];
	protected	Vector listeners = null;
	protected 	DataEvent myEvent = new DataEvent(this);
	protected	double	xArray[][]; 
	protected	double	yArray[][]; 
	protected	String	labelArray[][];
}
