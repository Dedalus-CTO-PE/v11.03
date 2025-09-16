package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class RangeComponent extends java.awt.Panel {

	Label			labelL, valueL;
	Scrollbar		slider;
	GridBagLayout		l;
	GridBagConstraints	c;

	//gets/sets ranges from 0 to 1
  	public RangeComponent (	String	label,
				double	start){

    		super();

		l = new GridBagLayout();
    		setLayout(l);
		c = new GridBagConstraints();

		add(new Label(label));

		c.weightx = 1;
		c.fill = GridBagConstraints.HORIZONTAL;
		slider = new Scrollbar(Scrollbar.HORIZONTAL, 
					(int)(start*100.), 1, 0, 100);
		l.setConstraints(slider, c);
		add(slider);
		valueL = new Label("blank");
		setLabelText((int)(start*100.));
		add(valueL);
	}

	public boolean handleEvent(Event e){
		int i;

		if(e.target.equals(slider)){
			i = slider.getValue();
			setLabelText(i);
		}
		return true;
	}

	public double getValue(){
		return (double)(slider.getValue())/100.;
	}

	public void setValue(double d){
		slider.setValue((int) (d*100));
		setLabelText(slider.getValue());
	}

	private void setLabelText(int i) {
		if(i==100)
			valueL.setText("1.0");
		else if (i < 10)
			valueL.setText("0.0" + String.valueOf(i));
		else
			valueL.setText("0." + String.valueOf(i));
	}
}
