package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class FontComponent extends java.awt.Panel {

	Label		labelL;
	Choice		menu;
	Font		myFont;
	IntComponent	pointSize;
	StyleComponent	fontStyle;
	GridBagLayout	l;
	GridBagConstraints	c;

  	public FontComponent (String 	label,
				Font	start){

    		super();
		myFont = start;
		l = new GridBagLayout();
		c = new GridBagConstraints();

    		setLayout(l);
		c.anchor = GridBagConstraints.WEST;
		c.weightx = 1.0;
		c.fill = GridBagConstraints.NONE;
		labelL = new Label(label);
		l.setConstraints(labelL, c);
		add(labelL);

		menu = new Choice();
		menu.addItem("TimesRoman");
		menu.addItem("Courier");
		menu.addItem("Helvetica");
		menu.addItem("Palatino");
		menu.select(myFont.getName());
		c.weightx = 2.0;
		l.setConstraints(menu, c);
		add(menu);

		c.fill = GridBagConstraints.HORIZONTAL;
		c.gridheight = 1;
		c.gridwidth = GridBagConstraints.REMAINDER;
		pointSize = new IntComponent("Point Size", 
			myFont.getSize(), 5, 50);
		l.setConstraints(pointSize, c);
		add(pointSize);

		fontStyle = new StyleComponent(myFont);
		c.gridheight = 1;
		c.gridwidth = 3;
		c.fill = GridBagConstraints.NONE;
		l.setConstraints(fontStyle, c);
		add(fontStyle);
	}

	public Font getValue(){
		return new Font(menu.getSelectedItem(), 
				fontStyle.getValue(),
				pointSize.getValue());
	}

	public void setValue(Font f){
		myFont = f;
	}

	public boolean action (Event e, Object o) { //defer action until OK
		return true;
	}
}

class StyleComponent extends java.awt.Panel {

	CheckboxGroup	fontStyle;

  	public StyleComponent (Font	start){

    		setLayout(new FlowLayout(FlowLayout.LEFT));
		fontStyle = new CheckboxGroup();
		add(new Checkbox("Plain", fontStyle, (start.getStyle() == 0)));
		add(new Checkbox("Bold", fontStyle, (start.getStyle() == 1)));
		add(new Checkbox("Italic", fontStyle, (start.getStyle() == 2)));
		add(new Checkbox("Bold Italic", fontStyle, (start.getStyle() == 3)));
	}

	int getValue(){
		String style;
		style =  (fontStyle.getCurrent()).getLabel();
		if(style == "Plain") return 0;
		if(style == "Bold") return 1;
		if(style == "Italic") return 2;
		return 3;
	}
}
