package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class LegendDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;

	Label		title;
	ColorComponent	labelColor, backgroundColor;
	FontComponent	labelFont;
	RangeComponent	llXloc, llYloc;
	OnOffComponent	legendVis;
	OnOffComponent	legendVertical;
	OacComponent	oac;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	Color		saveColor1, saveColor2;
	Font		saveFont;
	double		saveDouble1, saveDouble2;
	boolean		saveVis;
	boolean		saveVert;

  	public LegendDialog (javachart.applet.ChartAppShell c){

		shell = c;
		chart = c.chart;

		saveVals();

		layout = new GridBagLayout();
		constraints = new GridBagConstraints();
		setLayout(layout);

		constraints.ipady = 10;
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		title = new Label("Legend Information");
		layout.setConstraints(title, constraints);
		add(title);

		constraints.ipady = 0;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		legendVis = new OnOffComponent("Legend Visible", chart.isLegendVisible());
		layout.setConstraints(legendVis, constraints);
		add(legendVis);

		legendVertical = new OnOffComponent("Vertical Layout", chart.getLegend().getVerticalLayout());
		layout.setConstraints(legendVertical, constraints);
		add(legendVertical);


		constraints.gridheight = 1;
		constraints.gridwidth = 1;
		backgroundColor = new ColorComponent("Background Color", 
				chart.getLegend().getBackgroundGc().getFillColor());
		layout.setConstraints(backgroundColor, constraints);
		add(backgroundColor);

		labelColor = new ColorComponent("Label Color", 
				chart.getLegend().getLabelColor());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(labelColor, constraints);
		add(labelColor);

		labelFont = new FontComponent("Label Font", 
				chart.getLegend().getLabelFont());
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.ipady = 10;
		layout.setConstraints(labelFont, constraints);
		add(labelFont);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = 2;
		llXloc = new RangeComponent("X Location", chart.getLegend().getLlX());
		layout.setConstraints(llXloc, constraints);
		add(llXloc);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		llYloc = new RangeComponent("Y Location", chart.getLegend().getLlY());
		layout.setConstraints(llYloc, constraints);
		add(llYloc);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(470, 310);
		setResizable(false);
		setTitle("Legend Options");
	}

	public void show(){
		saveVals();
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

	void getVals() {
		chart.getLegend().setLabelColor(labelColor.getValue());
		chart.getLegend().setLabelFont(labelFont.getValue());
		chart.getLegend().getBackgroundGc().setFillColor(backgroundColor.getValue());
		chart.setLegendVisible(legendVis.getValue());
		chart.getLegend().setVerticalLayout(legendVertical.getValue());
		chart.getLegend().setLlX(llXloc.getValue());
		chart.getLegend().setLlY(llYloc.getValue());
	}

	void saveVals() {
		saveColor1 = chart.getLegend().getLabelColor();
		saveColor2 = chart.getLegend().getBackgroundGc().getFillColor();
		saveVis = chart.isLegendVisible();
		saveVert = chart.getLegend().getVerticalLayout();
		saveFont = chart.getLegend().getLabelFont();
		saveDouble1 = chart.getLegend().getLlX();
		saveDouble2 = chart.getPlotarea().getLlY();
	}

	void restoreVals() {
		chart.getLegend().setLabelColor(saveColor1);
		chart.getLegend().getBackgroundGc().setFillColor(saveColor2);
		chart.getLegend().setVerticalLayout(saveVert);
		chart.setLegendVisible(saveVis);
		chart.getLegend().setLabelFont(saveFont);
		chart.getLegend().setLlX(saveDouble1);
		chart.getLegend().setLlY(saveDouble2);
	}
}
