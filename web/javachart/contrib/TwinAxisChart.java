package javachart.contrib;

import javachart.chart.*;
import java.awt.Graphics;

public class TwinAxisChart extends LineChart {

	AxisInterface 	auxYAxis;
	Line		 	auxLine;
	Dataset			rightDatasets[];
	boolean			dataOnRight[];

	protected void initAxes(){
		super.initAxes();
		rightDatasets = new Dataset[20];
		dataOnRight = new boolean[20];
		for(int i=0;i<20;i++){
			dataOnRight[i] = false;
		}
		auxYAxis = new Axis(rightDatasets, false, getPlotarea());
		auxYAxis.setSide(3);
		auxLine = new Line(rightDatasets, getXAxis(), auxYAxis, getPlotarea());
	}

	public Line getAuxLine(){
		return auxLine;
	}

	public AxisInterface getAuxAxis(){
		return auxYAxis;
	}

	public void drawGraph(Graphics g){
		allocateDatasets();
		/** have to reproduce method code from parents because clipping
		    removes the auxilary axis **/
		//note - no display list code
		getBackground().draw(g);
		getPlotarea().draw(g);
		if(isXAxisVisible())
			getXAxis().draw(g);
		if(isYAxisVisible())
			getYAxis().draw(g);
		if(isLegendVisible())
			getLegend().draw(g);
		auxYAxis.draw(g);
		//will set clipper, so draw lines last
		getLine().draw(g);
		auxLine.draw(g);
	}

	public synchronized void assignToRightAxis(int dataset,
					boolean rightAxis){
		dataOnRight[dataset] = rightAxis;
	}

	private void allocateDatasets() {
		Dataset leftDatasets[];
		int i;
		int leftCounter = 0;
		int rightCounter = 0;

		leftDatasets =  new Dataset [20];
		for(i=0;i<20;i++){
			if(dataOnRight[i]){
				rightDatasets[rightCounter] = getDatasets()[i];
				rightCounter++;
			}
			else {
				leftDatasets[leftCounter] = getDatasets()[i];
				leftCounter++;
			}
		}
		getYAxis().setDatasets(leftDatasets);
		auxYAxis.setDatasets(rightDatasets);
		getLine().setDatasets(leftDatasets);
	}
}
