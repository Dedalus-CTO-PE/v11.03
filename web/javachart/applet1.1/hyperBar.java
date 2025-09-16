package javachart.applet;

import javachart.chart.HorizBarChart;

public class hyperBar extends hyperColumn {

	public void init () {
		chart = new HorizBarChart("My Chart");
		getOptions();               
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);
		chart.setUseDisplayList(true);
	}
}
