package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class AxisDialog extends Frame {

	ChartInterface	chart;
	javachart.applet.ChartAppShell	shell;
	AxisInterface	axis;

	//need to add manual scaling button, details for label & date axes
	Label		title;
	StringComponent	titleString;
	ColorComponent	titleColor, tickColor, lineColor, labelColor, gridColor;
	FontComponent	titleFont, labelFont;
	OnOffComponent	gridVis, minTickVis, majTickVis, labelVis, lineVis, commaFormat;
	IntComponent	labelAngle;
	//add side & logic to process...
	OacComponent	oac;

	GridBagLayout		layout;
	GridBagConstraints	constraints;

	Color		saveColor1, saveColor2, saveColor3, saveColor4, saveColor5;
	Font		saveFont1, saveFont2;
	String		saveString;
	boolean		saveOnOff1, saveOnOff2, saveOnOff3, saveOnOff4, saveOnOff5;
	int		saveInt1, saveInt2;

  	public AxisDialog (javachart.applet.ChartAppShell c,
				AxisInterface	    a){

		shell = c;
		chart = c.chart;
		axis = a;

		saveVals();

		layout = new GridBagLayout();
		constraints = new GridBagConstraints();
		setLayout(layout);

		constraints.ipady = 10;
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.anchor = GridBagConstraints.WEST;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		title = new Label("General Axis Attributes");
		layout.setConstraints(title, constraints);
		add(title);

		constraints.ipady = 3;
		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		titleString = new StringComponent("Axis Title", 
				axis.getTitleString(), 20);
		layout.setConstraints(titleString, constraints);
		add(titleString);

		constraints.gridwidth = GridBagConstraints.REMAINDER;
		titleColor = new ColorComponent("Title Color", 
				axis.getTitleColor());
		layout.setConstraints(titleColor, constraints);
		add(titleColor);

		titleFont = new FontComponent("Title Font", 
				axis.getTitleFont());
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(titleFont, constraints);
		add(titleFont);


		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		labelVis = new OnOffComponent("Axis Labels", 
				axis.getLabelVis());
		layout.setConstraints(labelVis, constraints);
		add(labelVis);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		labelAngle = new IntComponent("Label Angle", 
			axis.getLabelAngle(), -90, 90);
		layout.setConstraints(labelAngle, constraints);
		add(labelAngle);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		labelColor = new ColorComponent("Label Color", 
				axis.getLabelColor());
		layout.setConstraints(labelColor, constraints);
		add(labelColor);


		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.gridheight = 1;
		commaFormat = new OnOffComponent("Comma Format", 
				(axis.getLabelFormat()==0)?false:true);
		layout.setConstraints(commaFormat, constraints);
		add(commaFormat);


		labelFont = new FontComponent("Label Font", 
				axis.getLabelFont());
		constraints.gridheight = 1;
		constraints.fill = GridBagConstraints.HORIZONTAL;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		layout.setConstraints(labelFont, constraints);
		add(labelFont);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		lineVis = new OnOffComponent("Axis Line", 
				axis.getLineVis());
		layout.setConstraints(lineVis, constraints);
		add(lineVis);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		lineColor = new ColorComponent("Line Color", 
				axis.getLineGc().getLineColor());
		layout.setConstraints(lineColor, constraints);
		add(lineColor);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		gridVis = new OnOffComponent("Grid Lines", 
				axis.getGridVis());
		layout.setConstraints(gridVis, constraints);
		add(gridVis);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		gridColor = new ColorComponent("Grid Color", 
				axis.getGridGc().getLineColor());
		layout.setConstraints(gridColor, constraints);
		add(gridColor);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = 2;
		majTickVis = new OnOffComponent("Major Ticks", 
				axis.getMajTickVis());
		layout.setConstraints(majTickVis, constraints);
		add(majTickVis);

		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		tickColor = new ColorComponent("Tick Color", 
				axis.getTickGc().getLineColor());
		layout.setConstraints(tickColor, constraints);
		add(tickColor);


		constraints.gridheight = 1;
		constraints.weightx = 1;
		constraints.fill = GridBagConstraints.NONE;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		minTickVis = new OnOffComponent("Minor Ticks", 
				axis.getMinTickVis());
		layout.setConstraints(minTickVis, constraints);
		add(minTickVis);

		constraints.weighty = 1;
		constraints.gridheight = 1;
		constraints.gridwidth = GridBagConstraints.REMAINDER;
		constraints.anchor = GridBagConstraints.SOUTH;
		oac = new OacComponent();
		layout.setConstraints(oac, constraints);
		add(oac);
		resize(450, 570);
		setResizable(false);
		if(axis.getTitleString() != null)
			setTitle(axis.getTitleString());
		else
			setTitle("Axis");
	}

	public void show(){
		saveVals();
		super.show();
	}

	public void show(AxisInterface a){
		axis = a;
		saveVals();
		setTitle(axis.getTitleString());
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
		titleString.setValue(axis.getTitleString());
		titleColor.setValue(axis.getTitleColor());
		tickColor.setValue(axis.getTickGc().getLineColor());
		lineColor.setValue(axis.getLineGc().getLineColor());
		gridColor.setValue(axis.getGridGc().getLineColor());
		labelColor.setValue(axis.getLabelColor());
		titleFont.setValue(axis.getTitleFont());
		labelFont.setValue(axis.getLabelFont());
		gridVis.setValue(axis.getGridVis());
		minTickVis.setValue(axis.getMinTickVis());
		majTickVis.setValue(axis.getMajTickVis());
		labelVis.setValue(axis.getLabelVis());
		labelAngle.setValue(axis.getLabelAngle());
		commaFormat.setValue(axis.getLabelFormat()==0?false:true);
		lineVis.setValue(axis.getLineVis());
	}

	void getVals() {
		axis.setTitleString(titleString.getValue());
		axis.setTitleColor(titleColor.getValue());
		axis.getTickGc().setLineColor(tickColor.getValue());
		axis.getLineGc().setLineColor(lineColor.getValue());
		axis.getGridGc().setLineColor(gridColor.getValue());
		axis.setLabelColor(labelColor.getValue());
		axis.setTitleFont(titleFont.getValue());
		axis.setLabelFont(labelFont.getValue());
		axis.setGridVis(gridVis.getValue());
		axis.setMinTickVis(minTickVis.getValue());
		axis.setMajTickVis(majTickVis.getValue());
		axis.setLabelVis(labelVis.getValue());
		axis.setLabelAngle(labelAngle.getValue());
		axis.setLabelFormat(commaFormat.getValue()?1:0);
		axis.setLineVis(lineVis.getValue());
	}

	void saveVals() {
		saveString = axis.getTitleString();
		saveColor1 = axis.getTitleColor();
		saveColor2 = axis.getTickGc().getLineColor();
		saveColor3 = axis.getLineGc().getLineColor();
		saveColor4 = axis.getGridGc().getLineColor();
		saveColor5 = axis.getLabelColor();
		saveFont1 = axis.getTitleFont();
		saveFont2 = axis.getLabelFont();
		saveOnOff1 = axis.getGridVis();
		saveOnOff2 = axis.getMinTickVis();
		saveOnOff3 = axis.getMajTickVis();
		saveOnOff4 = axis.getLabelVis();
		saveOnOff5 = axis.getLineVis();
		saveInt1 = axis.getLabelAngle();
		saveInt2 = axis.getLabelFormat();
	}

	void restoreVals() {
		axis.setTitleString(saveString);
		axis.setTitleColor(saveColor1);
		axis.getTickGc().setLineColor(saveColor2);
		axis.getLineGc().setLineColor(saveColor3);
		axis.getGridGc().setLineColor(saveColor4);
		axis.setLabelColor(saveColor5);
		axis.setTitleFont(saveFont1);
		axis.setLabelFont(saveFont2);
		axis.setGridVis(saveOnOff1);
		axis.setMinTickVis(saveOnOff2);
		axis.setMajTickVis(saveOnOff3);
		axis.setLabelVis(saveOnOff4);
		axis.setLineVis(saveOnOff5);
		axis.setLabelAngle(saveInt1);
		axis.setLabelFormat(saveInt2);
	}
}
