package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class DatumDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;
	Datum		datum;

	//need to add labels & data, images...
	Label		title;
	StringComponent	label;
	ColorComponent	fillColor, lineColor;
	DoubleComponent	xVal, yVal;
	OacComponent	oac;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	Color		saveColor1, saveColor2;
	Font		saveFont;
	String		saveString;
	double		saveX, saveY;

  	public DatumDialog (javachart.applet.ChartAppShell c,
				Datum	    d){

		shell = c;
		chart = c.chart;
		datum = d;

		saveVals();

		layout = new GridBagLayout();
		constraints = new GridBagConstraints();
		setLayout(layout);

		constraints.ipady = 10;
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		title = new Label("Data Point Attributes");
		layout.setConstraints(title, constraints);
		add(title);

		constraints.ipady = 3;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		label = new StringComponent("Label", 
				datum.getLabel(), 20);
		layout.setConstraints(label, constraints);
		add(label);

		constraints.gridwidth = 2;
		fillColor = new ColorComponent("Fill Color", 
				datum.getGc().getFillColor());
		layout.setConstraints(fillColor, constraints);
		add(fillColor);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		lineColor = new ColorComponent("Line Color", 
				datum.getGc().getLineColor());
		layout.setConstraints(lineColor, constraints);
		add(lineColor);

		xVal = new DoubleComponent("X Value", 
				datum.getX());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(xVal, constraints);
		add(xVal);

		yVal = new DoubleComponent("Y Value", 
				datum.getY());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(yVal, constraints);
		add(yVal);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(400, 300);
		setResizable(false);
		setTitle(datum.getLabel());
	}

	public void show(){
		saveVals();
		super.show();
	}

	public void show(Datum d){
		datum = d;
		saveVals();
		setTitle(datum.getLabel());
		setVals();
		super.show();
	}

	public boolean action(Event e, Object arg){
			if(oac.status == 0) {
				getVals(); //and then dismiss...
				hide();
			}
			if(oac.status == 1)
				getVals();
			if(oac.status == 2) {
				restoreVals(); //and then dismiss...
				hide();
			}

			shell.repaint();
			return true;
	}

	void setVals() {
		fillColor.setValue(datum.getGc().getFillColor());
		lineColor.setValue(datum.getGc().getLineColor());
		label.setValue(datum.getLabel());
		xVal.setValue(datum.getX());
		yVal.setValue(datum.getY());
	}

	void getVals() {
		datum.getGc().setFillColor(fillColor.getValue());
		datum.getGc().setLineColor(lineColor.getValue());
		datum.setLabel(label.getValue());
		datum.setX(xVal.getValue());
		datum.setY(yVal.getValue());
	}

	void saveVals() {
		saveColor1 = datum.getGc().getFillColor();
		saveColor2 = datum.getGc().getLineColor();
		saveString = datum.getLabel();
		saveX = datum.getX();
		saveY = datum.getY();
	}

	void restoreVals() {
		datum.getGc().setFillColor(saveColor1);
		datum.getGc().setLineColor(saveColor2);
		datum.setLabel(saveString);
		datum.setX(saveX);
		datum.setY(saveY);
	}
}
