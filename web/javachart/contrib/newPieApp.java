package javachart.contrib;

import javachart.chart.PieChart;


public class newPieApp extends javachart.applet.pieApp {

	          
	public void  replaceData(double	y[]){
		System.out.println("getting doubles");
		chart.getDatasets()[0].replaceYData(y);
	}

	public void  replaceData(){
		System.out.println("got into the routine with no args");
	}

/************
	the real McCoy
*************/
	public void  replaceData(int where, float f){
/*****
		System.out.println("got into the routine with two args");
******/
		chart.getDatasets()[0].getDataElementAt(where).setY(f);
		
	}
}
