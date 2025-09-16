package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class StringComponent extends java.awt.Panel {

	Label		labelL;
	TextField	box;

  	public StringComponent (String 	label,
				String	start,
				int	ncols){

    		super();
    		setLayout(new FlowLayout(FlowLayout.LEFT));
		add(new Label(label));
		if(start != null)
			box = new TextField(start, ncols);
		else
			box = new TextField(new String(), ncols);
		add(box);
	}

	public String getValue(){
		return box.getText();
	}

	public void setValue(String s){
		box.setText(s);
	}

	public boolean action (Event e, Object o){
		return true; //prevents local processing - wait for okapplycanc
	}
}
