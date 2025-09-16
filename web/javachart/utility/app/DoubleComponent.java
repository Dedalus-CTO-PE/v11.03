package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class DoubleComponent extends java.awt.Panel {

	Label		labelL;
	TextField	box;

  	public DoubleComponent (String 	label,
				double	start){

    		super();
    		setLayout(new FlowLayout(FlowLayout.LEFT));
		add(new Label(label));
		box = new TextField(String.valueOf(start), 4);
		add(box);
	}

	public double getValue(){
		return Double.valueOf(box.getText()).doubleValue();
	}

	public void setValue(double d){
		box.setText(String.valueOf(d));
	}

	public boolean action (Event e, Object o){
		return true; //prevents local processing - wait for okapplycanc
	}
}
