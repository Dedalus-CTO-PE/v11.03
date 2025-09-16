package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class PlotDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;

	Label		title, gridLabel;
	ColorComponent	yGridColor, xGridColor, backgroundColor;
	OnOffComponent	yGridVis, xGridVis, threeD;
	OacComponent	oac;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	Color		saveColor1, saveColor2, saveColor3;
	boolean		saveVis1, saveVis2, save3d;

  	public PlotDialog (javachart.applet.ChartAppShell c){

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
		title = new Label("Plotting Area Background");
		layout.setConstraints(title, constraints);
		add(title);

		constraints.ipady = 0;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		backgroundColor = new ColorComponent("Background Color", 
				chart.getPlotarea().getGc().getFillColor());
		layout.setConstraints(backgroundColor, constraints);
		add(backgroundColor);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		threeD = new OnOffComponent("3D Effects", chart.isThreeD());
		layout.setConstraints(threeD, constraints);
		add(threeD);


		gridLabel = new Label("Grids");
		layout.setConstraints(gridLabel, constraints);
		add(gridLabel);

		xGridColor = new ColorComponent("X Axis", 
				chart.getXAxis().getGridGc().getLineColor());
		constraints.gridheight = 1;
		constraints.gridwidth = 2;
		layout.setConstraints(xGridColor, constraints);
		add(xGridColor);

		yGridColor = new ColorComponent("Y Axis", 
				chart.getYAxis().getGridGc().getLineColor());
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(yGridColor, constraints);
		add(yGridColor);

		constraints.ipady = 0;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		xGridVis = new OnOffComponent("X Axis", chart.getXAxis().getGridVis());
		layout.setConstraints(xGridVis, constraints);
		add(xGridVis);

		constraints.ipady = 0;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		yGridVis = new OnOffComponent("Y Axis", chart.getYAxis().getGridVis());
		layout.setConstraints(yGridVis, constraints);
		add(yGridVis);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(340, 300);
		setResizable(false);
		setTitle("Plotting Area");
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
		chart.setThreeD(threeD.getValue());
		chart.getPlotarea().getGc().setFillColor(backgroundColor.getValue());
		chart.getXAxis().getGridGc().setLineColor(xGridColor.getValue());
		chart.getYAxis().getGridGc().setLineColor(yGridColor.getValue());
		chart.getXAxis().setGridVis(xGridVis.getValue());
		chart.getYAxis().setGridVis(yGridVis.getValue());
	}

	void saveVals() {
		saveColor1 = chart.getPlotarea().getGc().getFillColor();
		saveColor2 = chart.getXAxis().getGridGc().getLineColor();
		saveColor3 = chart.getYAxis().getGridGc().getLineColor();
		saveVis1 = chart.getXAxis().getGridVis();
		saveVis2 = chart.getYAxis().getGridVis();
		save3d = chart.isThreeD();
	}

	void restoreVals() {
		chart.getPlotarea().getGc().setFillColor(saveColor1);
		chart.getXAxis().getGridGc().setLineColor(saveColor2);
		chart.getYAxis().getGridGc().setLineColor(saveColor3);
		chart.getXAxis().setGridVis(saveVis1);
		chart.getYAxis().setGridVis(saveVis2);
		chart.setThreeD(save3d);
	}
}
