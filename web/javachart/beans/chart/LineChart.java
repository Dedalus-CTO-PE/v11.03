package javachart.beans.chart;

import javachart.chart.*;
import java.awt.*;
import java.beans.*;

public class LineChart extends ChartBean {

	public LineChart() {

		double y[] = new double[3];
		String labels[] = new String[3];
	
		y[0] = 1234.0;
		labels[0] = "A";
		y[1] = 5678.0;
		labels[1] = "B";
		y[2] = 8910.0;
		labels[2] = "C";

		chart = new javachart.chart.LineChart("Test Chart");
		loadMarkers();
		markerList = new int[chart.getDatasets().length];
		for(int i=0;i<markerList.length;i++)
			markerList[i] = 0;
	
		chart.addDataSet("Apples", y, labels);

		chart.getBackground().setTitleString("Line Chart");
	
		setVisible(true);
	} 

	public void paint(Graphics g) {
		if(imageTracker==null) { //reinitialize transient images
			loadMarkers();
			for(int i=0;i<markerList.length;i++){
				try {
				if(markerList[i]==0)
					chart.getDatasets()[i].getGc().setImage(null);
				else
					chart.getDatasets()[i].getGc().setImage(markerImages[markerList[i]-1]);
				} catch (Exception e) { //probably no dataset 
				}
			}
		}
		try {
			imageTracker.waitForID(0);
		} catch (InterruptedException e) {
			return;
		}
		super.paint(g);
	}


	public void setDatasetImageIndex(int dataset, int imageIndex){
		markerList[dataset] = imageIndex;
		if(imageIndex==0)
			chart.getDatasets()[dataset].getGc().setImage(null);
		else
			chart.getDatasets()[dataset].getGc().setImage(markerImages[imageIndex-1]);
		repaint();
	}

	public int getDatasetImageIndex(int dataset){
		return markerList[dataset];
	}

	void loadMarkers(){

		imageTracker = new MediaTracker(this);
		markerImages = new Image[markerNames.length];
		for(int i=0;i<markerNames.length;i++){
			//markerImages[i] = getToolkit().getImage("../../html/images/" + markerNames[i] + ".gif");
			//markerImages[i] = getToolkit().getImage(markerNames[i] + ".gif");
			markerImages[i] = loadImage("javachart/beans/chart/" + markerNames[i] + ".gif");
			imageTracker.addImage(markerImages[i], 0);
		}
	}

    private java.awt.Image loadImage(String name) {
	try {
	    java.net.URL url = getClass().getResource(name);
	    return createImage((java.awt.image.ImageProducer) url.getContent());
	} catch (Exception ex) {
	    return null;
	}
    }

	public static void main (String[] args) {

		LineChart 		b = new LineChart();
		java.awt.Frame			f1 = new java.awt.Frame();
		java.awt.Frame			f2 = new java.awt.Frame();
		javachart.beans.customizer.LineTabShell customizer = new javachart.beans.customizer.LineTabShell();


		f1.add(b);
		f1.resize(500, 300);
		b.chart.resize(500, 300);
		f1.show();
		f2.setSize(430, 300);
		f2.add(customizer);
		customizer.setObject(b);
		customizer.addPropertyChangeListener(b);
		f2.show();

	} 

	String[] markerNames = {
								"ball_yellow",
								"ball_blue",
								"ball_red",
								"ball_purple",
								"ball_orange",
								"ball_pink",
								"ball_green" };
	int[] markerList;
	transient Image[] markerImages;
	transient MediaTracker	imageTracker;
} 
