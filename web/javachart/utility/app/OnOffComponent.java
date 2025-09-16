package javachart.utility.app;

import java.awt.*;

class OnOffComponent extends java.awt.Panel {

	CheckboxGroup	onOff;
	Checkbox	onBox, offBox;

  	public OnOffComponent (String	label,
				boolean	trueFalse){

    		setLayout(new FlowLayout(FlowLayout.LEFT));
		add(new Label(label));
		onOff = new CheckboxGroup();
		onBox = new Checkbox("On", onOff, (trueFalse == true));
		add(onBox);
		offBox = new Checkbox("Off", onOff, (trueFalse == false));
		add(offBox);
	}

	boolean getValue(){
		String trueFalse;
		trueFalse =  (onOff.getCurrent()).getLabel();
		if(trueFalse == "On") return true;
		else return false;
	}

	void setValue(boolean onOff){
		if(onOff){
			onBox.setState(true);
			offBox.setState(false);
		}
		else {
			onBox.setState(false);
			offBox.setState(true);
		}
	}

	public boolean action (Event e, Object o) { //defer action until OK
		return true;
	}
}
