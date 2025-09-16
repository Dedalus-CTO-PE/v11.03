package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class IntComponent extends java.awt.Panel {

	Label		valueL;
	Scrollbar	slider;

	GridBagConstraints	c;
	GridBagLayout		l;

  	public IntComponent (	String	label,
				int 	start,
				int	min,
				int	max){

    		super();
		l = new GridBagLayout();
		c = new GridBagConstraints();
    		setLayout(l);
		add(new Label(label));
		c.weightx = 1;
		c.fill = GridBagConstraints.HORIZONTAL;
		slider = new Scrollbar(Scrollbar.HORIZONTAL, start, 1, min, max);
		l.setConstraints(slider, c);
		add(slider);
		valueL = new Label(String.valueOf(start));
		add(valueL);
	}

	public boolean handleEvent(Event e){
		int i;

		if(e.target.equals(slider)){
			i = slider.getValue();
			valueL.setText(String.valueOf(i));
		}
		return true;
	}

	public int getValue(){
		return slider.getValue();
	}

	public void setValue(int i){
		slider.setValue(i);
		valueL.setText(String.valueOf(i));
	}
}
