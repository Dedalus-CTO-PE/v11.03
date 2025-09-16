package javachart.applet;

import java.awt.*;
import javachart.chart.LineChart;
import javachart.chart.RotateString;

public class scrollingLine extends lineApp {

	int scrollWindows = 10;
	double scrollIncrement, baseStartingValue;
	Scrollbar myScrollbar;

	public void getMyOptions() {
		String str;
		super.getMyOptions();
		str = getParameter("scrollWindows");
	   		   	if(str != null)
	   	scrollWindows = Integer.parseInt(str);
		myScrollbar = new Scrollbar(Scrollbar.HORIZONTAL, 
			0,1,0, scrollWindows - 1);
		if(chart.getXAxis().getAutoScale()) {
			chart.getXAxis().scale();
			chart.getXAxis().setAutoScale(false);
		}
		baseStartingValue = chart.getXAxis().getAxisStart();
		scrollIncrement = (chart.getXAxis().getAxisEnd() - 
					baseStartingValue) / (double) scrollWindows;

		setLayout(new BorderLayout());
		add("South", myScrollbar);
		LineChart lineChart = (LineChart) chart;
		lineChart.getLine().setClip(true);
	}

	public boolean handleEvent(Event e){

		if(e.target.equals(myScrollbar)){
			if(!home)
				doVEMessage();
			repaint();
		}
		return true;
	}

	public void paint(Graphics g) {
			if(gotImages)
				try {
					imageTracker.waitForID(0);
				} catch (InterruptedException e) {
                			return;
				}


			int scrollVal = myScrollbar.getValue();
			double startVal = baseStartingValue + ((double)scrollVal * scrollIncrement);
			chart.getXAxis().setAxisStart(startVal);
			chart.getXAxis().setAxisEnd(startVal + scrollIncrement);
		
			offScreenImage = createImage(size().width, size().height);
			offScreenSize = size();
			offScreenGraphics = offScreenImage.getGraphics();
			chart.setImage(offScreenImage);
			if (chart.getStringRotator() == null)
				chart.setStringRotator(new RotateString(this));

			if (offScreenGraphics != null)
					chart.drawGraph(offScreenGraphics);
			else
				System.out.println("null graphics in app shell");
				drawMyStuff(offScreenGraphics);
 
                		g.drawImage(offScreenImage, 0, 0, null);
			if(messageFrame!=null)
				if(messageFrame.isShowing())
					messageFrame.repaint();
		}
}
