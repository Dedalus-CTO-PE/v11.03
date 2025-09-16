package javachart.beans.chart;

import javachart.chart.*;
import javachart.beans.data.*;
import java.awt.*;
import java.beans.*;
import java.util.Vector;
import java.io.Serializable;

public abstract class ChartBean extends java.awt.Canvas implements Serializable,
		  DataFeedListener, PropertyChangeListener {

	int			width = 200, height = 150;
	protected int			modifiers;
	Chart		chart;


	public String	getTitle(){
		return chart.getBackground().getTitleString();
	}
	public void	setTitle(String s) {
		chart.getBackground().setTitleString(s);
	}
	public Chart getChart(){
		return chart;
	}
	//stuff to make it visible
	public Dimension getPreferredSize(){
		return new Dimension(width, height);
	}

	public void setPreferredSize(Dimension d){
		width = d.width;
		height = d.height;
	}

	public void setSize(int w,int h){
		width = w;
		height = h;
	}

	public void resize(int w,int h){
		width = w;
		height = h;
	}

	public Dimension getMinimumSize(){
		return new Dimension(200, 100);
	}

	public void reshape(int x, int y, int w,int h){
		width = w;
		height = h;
		super.reshape(x, y, width, height);
	}

	public void setBounds(int x, int y, int w, int h){
		reshape(x, y, w, h);
	}

	public void setPreferredSize(int w,int h){
		width = w;
		height = h;
	}

	//override update for smoother redraws
	private transient Image offScreenImage;
	private transient Dimension	offScreenSize;
	private transient Graphics	offScreenGraphics;

	public final synchronized void  update(Graphics g) 
	{
		paint(g);
	}

	public void paint(Graphics g) {
		int i;
		Dimension d	= getSize();

		//if((d.width != width)||(d.height != height))
		chart.resize(d.width, d.height);
		try {
		if((offScreenImage == null)||
			(d.width != offScreenSize.width)||
			(d.height != offScreenSize.height)) {
			offScreenImage = createImage(d.width, d.height);
			offScreenSize = d;
			offScreenGraphics = offScreenImage.getGraphics();
		}

		chart.setImage(offScreenImage);
		if (chart.getStringRotator() == null)
			chart.setStringRotator(new RotateString(this));

		if (offScreenGraphics != null)
				chart.drawGraph(offScreenGraphics);
 
		g.drawImage(offScreenImage, 0, 0, null);
		}
		catch(Exception e){
		chart.drawGraph(g);
		}
	}


	//datafeed interface stuff
	public void newData(DataEvent e){
		modifiers = e.modifiers;
		updateDatasets(e.datasetArray);
		repaint();
	}

	protected void updateDatasets(Dataset incomingData[]){

		Dataset[] myDatasets = chart.getDatasets();
		int numberOfSets = 0;

		while(incomingData[numberOfSets] != null)
			numberOfSets++;

		//clear out invalid datasets
		for(int i=numberOfSets;i<myDatasets.length;i++)
			myDatasets[i] = null;
		//add new datasets as required
		for(int i=0;i<numberOfSets; i++){
			if(myDatasets[i] == null) {
				//make a new dataset to make sure we get the right globals and attrs
				myDatasets[i] = new Dataset(null, new double[0], i, chart.getGlobals());
				myDatasets[i].setName(incomingData[i].getName());
				myDatasets[i].setData(incomingData[i].getData());
			}
		}

		//copy data into myDatasets
		for(int i=0;i<numberOfSets;i++){
			if(incomingData[i]!=null){
				if((modifiers & DataEvent.SET_NAMES_MASK) != 0)
					myDatasets[i].setName(incomingData[i].getName());
				copyData(incomingData[i].getData(), 
					myDatasets[i].getData());
			}
		}
	}

	private void copyData(Vector fromData, Vector toData){
		int fromSize = fromData.size();
		int i;

		//trim the current data vector, if necessary
		while(toData.size() > fromSize)
			toData.removeElementAt(fromSize);

		//update X and Y values, and label if necessary
		for(i=0;i<toData.size();i++){
			if((modifiers & DataEvent.Y_DATA_MASK) != 0)
				((Datum)toData.elementAt(i)).setY(((Datum)fromData.elementAt(i)).getY());
			if((modifiers & DataEvent.X_DATA_MASK) != 0)
				((Datum)toData.elementAt(i)).setX(((Datum)fromData.elementAt(i)).getX());
			if((modifiers & DataEvent.LABELS_MASK) != 0) {
				String label = ((Datum)fromData.elementAt(i)).getLabel();
					((Datum)toData.elementAt(i)).setLabel(label);
			}
		}

		//add new Datum classes as required
		if(toData.size()<fromSize){
			for(i=toData.size();i<fromSize;i++){
				Datum d = (Datum)fromData.elementAt(i);
				Datum newD = new Datum(d.getX(), d.getY(), d.getY2(), d.getLabel(),
					i, chart.getGlobals());
				toData.addElement(newD);
			}
		}
	}

	//for line, regression, scatter markers
	public void setDatasetImageIndex(int dataset, int image){
	}
	public int getDatasetImageIndex(int dataset){
		return 0; //trivial, and incorrect
	}

	//for test brace, primarily
	public void propertyChange(PropertyChangeEvent e){
		repaint();

	}
} 
