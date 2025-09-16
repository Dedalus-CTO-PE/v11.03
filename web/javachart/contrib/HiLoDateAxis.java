package javachart.contrib;

import javachart.chart.*;

/***
 * Extends DateAxis to change the way scaling is calculated.  This class considers
 * the minimum y2 values of each Dataset rather than just the minimum x or y
 */
public class HiLoDateAxis extends DateAxis implements AxisInterface {

/**
 * @param dsets	Array of Dataset classes for this Axis
 * @param xAxis	True if this is an X axis
 * @param plt	The Plotarea bounded by this Axis
 */
	HiLoDateAxis(Dataset         dsets[], 
	    	boolean         xAxis,
	    	Plotarea        plt) {
		super(dsets, xAxis, plt);
	}

/**
 *	returns a minimum value for Datasets managed on this Axis.  Overrides
 *	Axis to consider Y2 values rather than Y values.
 * @param	nmsets	number of datasets in use
 */
	protected double	getMinValsFromData(int nmsets) {
		int 	i;
		double  low    =  9e35;

		for (i=0; i<nmsets; i++){
			low = Math.min(low, getDatasets()[i].minY2());
		}
		return low;
	}
}
