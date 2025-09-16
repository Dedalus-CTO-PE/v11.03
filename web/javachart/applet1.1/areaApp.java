package javachart.applet;

import javachart.chart.AreaChart;

public class areaApp extends ChartAppShell {

	public void init () {

		chart = new AreaChart("My Chart");
		getOptions();
		getMyOptions();
		getAxisOptions();
		chart.resize(this.size().width, this.size().height);

	}

	public void getMyOptions() {
	}
}
