package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class BackgroundDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;
	StringComponent	titleField;
	ColorComponent	titleColor, backgroundColor;
	FontComponent	titleFont;
	RangeComponent	lmargin, rmargin, tmargin, bmargin;
	OnOffComponent	threeD;
	OnOffComponent	legendVis;
	OacComponent	oac;
	Label		marginLabel;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	Color		saveColor1, saveColor2, saveColor3;
	String		saveString;
	Font		saveFont;
	double		saveLmargin, saveRmargin, saveTmargin, saveBmargin;
	boolean		saveBoolean;
	boolean		saveThreeD;

  	public BackgroundDialog (javachart.applet.ChartAppShell c){

		shell = c;
		chart = c.chart;

		saveVals();

		layout = new GridBagLayout();
		constraints = new GridBagConstraints();
		setLayout(layout);

		constraints.fill = GridBagConstraints.BOTH;
		constraints.gridheight = 1;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		titleField = new StringComponent("Title", chart.getBackground().getTitleString(), 40);
		layout.setConstraints(titleField, constraints);
		add(titleField);

		titleColor = new ColorComponent("Title Color", 
				chart.getBackground().getTitleColor());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(titleColor, constraints);
		add(titleColor);
		titleFont = new FontComponent("Title Font", 
				chart.getBackground().getTitleFont());
		constraints.ipady = 30;
		layout.setConstraints(titleFont, constraints);
		add(titleFont);

		constraints.fill = GridBagConstraints.BOTH;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.ipady = 0;
		backgroundColor = new ColorComponent("Background Color",
					chart.getBackground().getGc().getFillColor());
		layout.setConstraints(backgroundColor, constraints);
		add(backgroundColor);


		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		threeD = new OnOffComponent("3D Effects", chart.isThreeD());
		layout.setConstraints(threeD, constraints);
		add(threeD);

		constraints.gridwidth = GridBagConstraints.REMAINDER;
		legendVis = new OnOffComponent("Legend Visible",
					chart.isLegendVisible());
		layout.setConstraints(legendVis, constraints);
		add(legendVis);

		marginLabel = new Label("Margins");
		constraints.ipady = 10;
		constraints.gridheight = 1;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(marginLabel, constraints);
		add(marginLabel);
		
		constraints.ipady = 5;
		constraints.gridheight = 1;
		constraints.gridwidth = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		lmargin = new RangeComponent("Left ", chart.getPlotarea().getLlX());
		layout.setConstraints(lmargin, constraints);
		add(lmargin);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		tmargin = new RangeComponent("Top   ", chart.getPlotarea().getUrY());
		layout.setConstraints(tmargin, constraints);
		add(tmargin);

		constraints.gridheight = 1;
		constraints.gridwidth = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.anchor = GridBagConstraints.WEST;
		rmargin = new RangeComponent("Right", chart.getPlotarea().getUrX());
		layout.setConstraints(rmargin, constraints);
		add(rmargin);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		bmargin = new RangeComponent("Bottom", chart.getPlotarea().getLlY());
		layout.setConstraints(bmargin, constraints);
		add(bmargin);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(450, 400);
		setResizable(false);
		setTitle("Background Options");
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
		chart.getBackground().setTitleString(titleField.getValue());
		chart.getBackground().setTitleColor(titleColor.getValue());
		chart.getBackground().setTitleFont(titleFont.getValue());
		chart.getBackground().getGc().setFillColor(backgroundColor.getValue());
		chart.setLegendVisible(legendVis.getValue());
		chart.getPlotarea().setLlX(lmargin.getValue());
		chart.getPlotarea().setLlY(bmargin.getValue());
		chart.getPlotarea().setUrX(rmargin.getValue());
		chart.getPlotarea().setUrY(tmargin.getValue());
		chart.setThreeD(threeD.getValue());
	}

	void saveVals() {
		saveColor1 = chart.getBackground().getTitleColor();
		saveColor2 = chart.getBackground().getGc().getFillColor();
		saveString = chart.getBackground().getTitleString();
		saveFont = chart.getBackground().getTitleFont();
		saveLmargin = chart.getPlotarea().getLlX();
		saveRmargin = chart.getPlotarea().getUrX();
		saveTmargin = chart.getPlotarea().getUrY();
		saveBmargin = chart.getPlotarea().getLlY();
		saveThreeD = chart.isThreeD();
		saveBoolean = chart.isLegendVisible();
	}

	void restoreVals() {
		chart.getBackground().setTitleString(saveString);
		chart.getBackground().setTitleColor(saveColor1);
		chart.getBackground().setTitleFont(saveFont);
		chart.getBackground().getGc().setFillColor(saveColor2);
		chart.getPlotarea().getGc().setFillColor(saveColor3);
		chart.getPlotarea().setLlX(saveLmargin);
		chart.getPlotarea().setLlY(saveBmargin);
		chart.getPlotarea().setUrX(saveRmargin);
		chart.getPlotarea().setUrY(saveTmargin);
		chart.setThreeD(saveThreeD);
		chart.setLegendVisible(saveBoolean);
	}
}
