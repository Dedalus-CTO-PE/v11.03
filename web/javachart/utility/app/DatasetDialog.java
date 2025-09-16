package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class DatasetDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;
	Dataset		dataset;

	//need to add labels & data, images...
	Label		title;
	StringComponent	nameField;
	ColorComponent	fillColor, lineColor, labelColor;
	Label		labelLabel; //labelabelabelabel... lol!
	FontComponent	labelFont;
	OacComponent	oac;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	Color		saveColor1, saveColor2, saveColor3;
	Font		saveFont;
	String		saveString;

  	public DatasetDialog (javachart.applet.ChartAppShell c,
				Dataset	    d){

		shell = c;
		chart = c.chart;
		dataset = d;

		saveVals();

		layout = new GridBagLayout();
		constraints = new GridBagConstraints();
		setLayout(layout);

		constraints.ipady = 10;
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		title = new Label("Dataset Attributes");
		layout.setConstraints(title, constraints);
		add(title);

		constraints.ipady = 3;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		nameField = new StringComponent("Dataset Name", 
				dataset.getName(), 20);
		layout.setConstraints(nameField, constraints);
		add(nameField);

		constraints.gridwidth = 2;
		fillColor = new ColorComponent("Fill Color", 
				dataset.getGc().getFillColor());
		layout.setConstraints(fillColor, constraints);
		add(fillColor);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		lineColor = new ColorComponent("Line Color", 
				dataset.getGc().getLineColor());
		layout.setConstraints(lineColor, constraints);
		add(lineColor);

		labelLabel = new Label("Labels");
		layout.setConstraints(labelLabel, constraints);
		add(labelLabel);

		labelColor = new ColorComponent("Label Color", 
				dataset.getLabelColor());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(labelColor, constraints);
		add(labelColor);

		labelFont = new FontComponent("Label Font", 
				dataset.getLabelFont());
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(labelFont, constraints);
		add(labelFont);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(400, 320);
		setResizable(false);
		setTitle(dataset.getName());
	}

	public void show(){
		saveVals();
		super.show();
	}

	public void show(Dataset d){
		dataset = d;
		saveVals();
		setTitle(dataset.getName());
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
		fillColor.setValue(dataset.getGc().getFillColor());
		lineColor.setValue(dataset.getGc().getLineColor());
		labelColor.setValue(dataset.getLabelColor());
		labelFont.setValue(dataset.getLabelFont());
		nameField.setValue(dataset.getName());
	}

	void getVals() {
		dataset.getGc().setFillColor(fillColor.getValue());
		dataset.getGc().setLineColor(lineColor.getValue());
		dataset.setLabelColor(labelColor.getValue());
		dataset.setLabelFont(labelFont.getValue());
		dataset.setName(nameField.getValue());
	}

	void saveVals() {
		saveColor1 = dataset.getGc().getFillColor();
		saveColor2 = dataset.getGc().getLineColor();
		saveColor3 = dataset.getLabelColor();
		saveFont = dataset.getLabelFont();
		saveString = dataset.getName();
	}

	void restoreVals() {
		dataset.getGc().setFillColor(saveColor1);
		dataset.getGc().setLineColor(saveColor2);
		dataset.setLabelColor(saveColor3);
		dataset.setLabelFont(saveFont);
		dataset.setName(saveString);
	}
}
