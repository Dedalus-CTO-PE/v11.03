package javachart.applet;

import java.awt.*;
import java.util.Vector;
import java.net.*;
import javachart.chart.*;

public class hyperColumn extends columnApp {

	Vector links;
	String str;

	public void init(){
		super.init();
		chart.setUseDisplayList(true);
	}

	public boolean getDatasetParameters(	int 	which,
					double	xArr[],
					double	yArr[],
					double	y2Arr[],
					double	y3Arr[]) {

		String[] linkStrings;
	
	 	str = getParameter("dataset" + which + "Links");
	 	if(str != null) {
	 		if(links == null)
				links = new Vector();
			linkStrings = getLabels(str);
			links.addElement((Object) linkStrings);
		}

		return(super.getDatasetParameters(which, xArr, yArr, y2Arr, y3Arr));
	}

	public boolean handleEvent(Event e){
		int i;
		Vector	list;
		Point	pickpt;
		Object	myObj;
		Datum	myDat;
		int		whichDataset = -1, whichDatum = -1;

		if(links == null)
			return false;

		if(e.id == Event.MOUSE_DOWN){
			if(!home)
				doVEMessage();
			BarChart b = (BarChart) chart;
			pickpt = new Point (e.x, e.y);
			list = new Vector();
			if (b.getDisplayList().contains(pickpt,list)){
				for(int j=0;j<list.size();j++){
					myObj = list.elementAt(j); //last item in list, manipulate as needed
					if(myObj instanceof Dataset)
						whichDataset = getDatasetIndex((Dataset)myObj);
					if(myObj instanceof Datum)
						whichDatum = getDatumIndex((Datum)myObj, whichDataset);
				}
				if((whichDataset == -1)||(whichDatum == -1))
					return false;
				openLink(whichDataset, whichDatum);
			}
		}
		return true;
	}

	private int getDatasetIndex(Dataset d){
		int i;
		Dataset[] datasetArray;

		datasetArray = chart.getDatasets();
		for(i=0;i<datasetArray.length;i++){
			if(d == datasetArray[i])
				return i;
		}
		return -1;
	}

	private int getDatumIndex(Datum d, int setNumber){
		Vector dataVector;
		int i;

		if(setNumber == -1)
			return -1;

		dataVector = chart.getDatasets()[setNumber].getData();
		for(i=0;i<dataVector.size();i++){
			if (dataVector.elementAt(i) == d)
				return i;
		}
		return -1;
	}
	
	private void openLink(int setNumber, int elementNumber){
		String[] linkList;
		String s, s1, s2;

		try {
			linkList = (String[]) links.elementAt(setNumber);
			s = linkList[elementNumber];
			try {
				getAppletContext().showDocument(new URL(s), "_blank");
			}	catch (java.net.MalformedURLException e) {
			//relative url?
				try{
					s1 = getDocumentBase().toExternalForm();
					s2 = s1.substring(0, s1.lastIndexOf("/") + 1);
					myUrl = new URL(s2 + s);
					getAppletContext().showDocument(myUrl, "_blank");
				}
				catch (java.net.MalformedURLException f) {
					System.out.println("couldn't open " + s);
					return;
				}
			}
		} catch (ArrayIndexOutOfBoundsException e){
			return;
		}
	}
}
