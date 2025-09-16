package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class BarDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;
	Bar		bar;

	//need to add labels & data, images...
	Label		title;
	OnOffComponent	labelsOn;
	RangeComponent	clusterWidth;
	DoubleComponent	barBaseline;
	OacComponent	oac;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	boolean		saveBool;
	double		saveDouble1, saveDouble2;

  	public BarDialog (javachart.applet.ChartAppShell c,
				Bar	    b){

		shell = c;
		chart = c.chart;
		bar = b;

		saveVals();

		layout = new GridBagLayout();
		constraints = new GridBagConstraints();
		setLayout(layout);

		constraints.ipady = 10;
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		title = new Label("Bar Chart Attributes");
		layout.setConstraints(title, constraints);
		add(title);

		constraints.ipady = 3;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		labelsOn = new OnOffComponent("Labels", bar.getLabelsOn());
		layout.setConstraints(labelsOn, constraints);
		add(labelsOn);

		constraints.fill = GridBagConstraints.HORIZONTAL;
		clusterWidth = new RangeComponent("Cluster Width", 
				bar.getClusterWidth());
		layout.setConstraints(clusterWidth, constraints);
		add(clusterWidth);

		barBaseline = new DoubleComponent("Baseline", 
				bar.getBaseline());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(barBaseline, constraints);
		add(barBaseline);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(240, 220);
		setResizable(false);
		setTitle("Bar Chart Attributes");
	}

	public void show(){
		saveVals();
		super.show();
	}

	public void show(Bar d){
		bar = d;
		saveVals();
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
		labelsOn.setValue(bar.getLabelsOn());
		barBaseline.setValue(bar.getBaseline());
		clusterWidth.setValue(bar.getClusterWidth());
	}

	void getVals() {
		bar.setLabelsOn(labelsOn.getValue());
		bar.setBaseline(barBaseline.getValue());
		bar.setClusterWidth(clusterWidth.getValue());
	}

	void saveVals() {
		saveBool = bar.getLabelsOn();
		saveDouble1 = bar.getBaseline();
		saveDouble2 = bar.getClusterWidth();
	}

	void restoreVals() {
		bar.setLabelsOn(saveBool);
		bar.setBaseline(saveDouble1);
		bar.setClusterWidth(saveDouble2);
	}
}
