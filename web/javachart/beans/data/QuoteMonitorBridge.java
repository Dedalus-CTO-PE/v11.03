package javachart.beans.data;

import java.beans.*;
import java.util.*;
import javachart.chart.*;

public class QuoteMonitorBridge extends SimpleDataFeed {

	public QuoteMonitorBridge(){
	}

	public void propertyChange(PropertyChangeEvent e){
		if(e==null)
			return;
		//System.out.println("Just got a " + e.getPropertyName() + " and it's " + e.getNewValue().toString());
		if(e.getPropertyName().equals("date"))
			currentDate = (double)((Date) e.getNewValue()).getTime();
		if(e.getPropertyName().equals("bid"))
			currentBid = ((Double)e.getNewValue()).doubleValue();
		if(e.getPropertyName().equals("ask"))
			currentAsk = ((Double)e.getNewValue()).doubleValue();
		if(e.getPropertyName().equals("price")) {
			currentPrice = ((Double)e.getNewValue()).doubleValue();
			update();
		}
			/**
		if(e.getPropertyName().equals("volume")) {
			currentVolume = ((Double)e.getNewValue()).doubleValue();
			//update();
		}
		**/
	}

	public void reset(){
		numberOfQuotes = 0;
	}

	public void update(){
		thisObservation[0] = currentBid;
		thisObservation[1] = currentAsk;
		thisObservation[2] = currentPrice;
		updateDatasets();
		numberOfQuotes++;
		fireEvent();
	}

	protected void updateDatasets(){
		int i;

		for(i=0;i<thisObservation.length;i++){
			if(myDatasetArray[i]==null){
				myDatasetArray[i] = new Dataset();
			}
			updateDataset(i, myDatasetArray[i]);
		}
	}

	protected void updateDataset(int whichSet, Dataset d){

		d.setName(qMonitorNames[whichSet]);
		Vector dataVector = d.getData();

		//get rid of vestigal dummy data
		if(numberOfQuotes == 0)
			dataVector.removeAllElements();

		if(numberOfQuotes > maximumQuotes)
			while(dataVector.size()>maximumQuotes)
				dataVector.removeElementAt(0);
		dataVector.addElement(new
			Datum(currentDate,
				thisObservation[whichSet], 
				true,
				dummyGlobals));
	}

	public int getMaximumQuotes(){
		return maximumQuotes;
	}

	public void setMaximumQuotes(int i){
		maximumQuotes = i;
	}

	private int maximumQuotes = 500;
	private int numberOfQuotes = 0;
	/*	generally, only price information comes in from Yahoo  */
	String[] qMonitorNames = { "bid", "ask", "price"};
	private double[]	thisObservation = new double[3];
	private	double	currentDate, currentBid, currentAsk, currentPrice, currentVolume;
	private Globals		dummyGlobals = new Globals();
}
