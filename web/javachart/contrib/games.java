package javachart.contrib;

/**
 *	Simple program that uses 2 interesting subclasses:
 *	TwinAxisChart - draws a Line chart with 2 Y axes
 *	ImageBackground	- draws a chart background with an image on it
 */


import javachart.chart.*;

import java.applet.Applet;
import java.awt.*;

public class games extends Applet {
	TwinAxisChart 	chart = null;
	MediaTracker	imageTracker;

	public void init () {

                Color black = new Color(255,255,255);
                chart = new TwinAxisChart();

                double[] data1 = {5.0,8.0,0.5,1.5,1.3};
                chart.addDataSet("Us", data1);

                double[] data2 = {11237.5,4321.4569,1234.3216,7.8,1236.5};
                chart.addDataSet("Them", data2);
                chart.assignToRightAxis(1, true);

		/**install an Image Background here.... **/
		chart.setBackground(new ImageBackground(chart.getGlobals()));
		chart.getBackground().getGc().setImage(getImage());

		/*** make the axis stuff white ***/
		AxisInterface ax = chart.getXAxis();
		ax.setLabelColor(Color.white);
		ax.getLineGc().setLineColor(Color.white);
		ax.getTickGc().setLineColor(Color.white);
		ax = chart.getYAxis();
		ax.setLabelColor(Color.white);
		ax.getLineGc().setLineColor(Color.white);
		ax.getTickGc().setLineColor(Color.white);
		ax = chart.auxYAxis;
		ax.setLabelColor(Color.white);
		ax.getLineGc().setLineColor(Color.white);
		ax.getTickGc().setLineColor(Color.white);

                chart.resize(this.size().width, this.size().height);
        }

	public void paint(Graphics g) {
		try {
			imageTracker.waitForID(0);
		} catch (InterruptedException e) {
			return;
		}

		/* mysterious class needed for drawing rotated labels */
		if (chart.getStringRotator() == null)
			chart.setStringRotator(new RotateString(this));

		chart.drawGraph(g);
	}

	Image	getImage(){
		Image img;

		try{
			img = getImage(new java.net.URL(getCodeBase(), "javachart/contrib/desert.jpg"));
			imageTracker = new MediaTracker(this);
			imageTracker.addImage(img, 0);
			return img;
		}
		catch(java.net.MalformedURLException e) {
			System.out.println("couldn't load desert.jpg");
			return null;
		}
	}
}
