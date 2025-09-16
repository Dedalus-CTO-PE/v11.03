package javachart.beans.data;

import java.util.EventObject;
import javachart.chart.Dataset;
import java.io.Serializable;

public class DataEvent extends EventObject implements Serializable {
	public Dataset[] datasetArray = new Dataset[20];
	public javachart.beans.chart.ChartBean chartBean = null;

	public static final int Y_DATA_MASK		= 1 << 0;
	public static final int X_DATA_MASK		= 1 << 1;
	public static final int Z_DATA_MASK		= 1 << 2;
	public static final int AUX_DATA_MASK	= 1 << 3;
	public static final int LABELS_MASK		= 1 << 4;
	public static final int SET_NAMES_MASK	= 1 << 5;

	public int	modifiers = X_DATA_MASK | Y_DATA_MASK;

	public DataEvent(Object source){
		super(source);
	}

	public DataEvent(Object source, int modifiers){
		super(source);
		this.modifiers = modifiers;
	}
}
