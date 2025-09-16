package javachart.beans.data;

import java.net.*;
import java.io.*;
import java.util.*;

public class RowColumnDataFeed extends URLDataFeed {

	public RowColumnDataFeed(){
		super();
	}

	public void setLabelsOnRows(boolean yesNo){
		labelsOnRows = yesNo;
	}
	public boolean getLabelsOnRows(){
		return labelsOnRows;
	}
	public void setReadByRows(boolean yesNo){
		readByRows = yesNo;
	}
	public boolean getReadByRows(){
		return readByRows;
	}

	protected void updateDataArrays(){
		if(readByRows)
			readByRows();
		else
			readByColumns();
		updateDatasets();
	}

	private void readByRows(){
		int i, j;
		StringTokenizer st;

		numberOfPoints = tokenizedLines.size();
		if(numberOfPoints < 1){
			System.out.println("numberOfPoints is less than one");
			return;
		}
		st = (StringTokenizer)(tokenizedLines.elementAt(0));
		numberOfSets = st.countTokens() - 1;

		if((xArray == null)||(xArray.length != numberOfSets))
			xArray = new double[numberOfSets][];
		if((yArray == null)||(yArray.length != numberOfSets))
			yArray = new double[numberOfSets][];
		if((labelArray == null)||(labelArray.length != numberOfSets))
			labelArray = new String[numberOfSets][];
		for(i=0;i<numberOfSets;i++){
			if((xArray[i] == null)||(xArray[i].length != numberOfPoints))
				xArray[i] = new double[numberOfPoints];
			if((yArray[i] == null)||(yArray[i].length != numberOfPoints))
				yArray[i] = new double[numberOfPoints];
			if((labelArray[i] == null)||(labelArray[i].length != numberOfPoints))
				labelArray[i] = new String[numberOfPoints];
		}


		for(i=0;i<tokenizedLines.size(); i++){
			double xVal;
			String labelVal;
			j = 0;
			st = (StringTokenizer)(tokenizedLines.elementAt(i));
			try{
			if(labelsOnRows){
				labelVal = ((String)st.nextElement()).trim();
				xVal = (double)i;
			}
			else{
				labelVal = null;
				xVal = doubleFromString((String)st.nextElement());
			}
			}
			catch (NoSuchElementException e) {
				updateDatasets();
				return;
			}
			while(st.hasMoreElements()){
				labelArray[j][i] = labelVal;
				xArray[j][i] = xVal;
				yArray[j][i] = doubleFromString((String)st.nextElement());
				j++;
			}
		}

	}

	private void readByColumns(){
		int i, j;
		StringTokenizer st;

		numberOfSets = tokenizedLines.size() - 1;
		if(numberOfSets < 1){
			System.out.println("no complete data sets!!");
			return;
		}
		st = (StringTokenizer)(tokenizedLines.elementAt(0));
		numberOfPoints = st.countTokens();

		if((xArray == null)||(xArray.length != numberOfSets))
			xArray = new double[numberOfSets][];
		if((yArray == null)||(yArray.length != numberOfSets))
			yArray = new double[numberOfSets][];
		if((labelArray == null)||(labelArray.length != numberOfSets))
			labelArray = new String[numberOfSets][];

		for(i=0;i<numberOfSets;i++){
			if((xArray[i] == null)||(xArray[i].length != numberOfPoints))
				xArray[i] = new double[numberOfPoints];
			if((yArray[i] == null)||(yArray[i].length != numberOfPoints))
				yArray[i] = new double[numberOfPoints];
			if((labelArray[i] == null)||(labelArray[i].length != numberOfPoints))
				labelArray[i] = new String[numberOfPoints];
		}


		j = 0;
		st = (StringTokenizer)(tokenizedLines.elementAt(0));
		while(st.hasMoreElements()){
			double xVal;
			String labelVal;
			if(labelsOnRows){
				labelVal = ((String)st.nextElement()).trim();
				xVal = (double) j;
			}
			else {
				labelVal = null;
				xVal = doubleFromString((String)st.nextElement());
			}
			for(i=1;i<tokenizedLines.size();i++){
				xArray[i-1][j] = xVal;
				labelArray[i-1][j] = labelVal;
			}
			j++;
		}

		for(i=1;i<tokenizedLines.size(); i++){
			st = (StringTokenizer)(tokenizedLines.elementAt(i));
			j = 0;
			while(st.hasMoreElements()){
				yArray[i-1][j] = doubleFromString((String)st.nextElement());
				j++;
			}
		}

	}

	protected double doubleFromString(String s){
		try{
			return Double.valueOf(s.trim()).doubleValue();
		}
		catch(NumberFormatException e){
			return 0;
		}
	}

	protected StringTokenizer currentLine;

	private int numberOfPoints, numberOfSets;
	private boolean readByRows = true;
	private boolean labelsOnRows = true;
}
