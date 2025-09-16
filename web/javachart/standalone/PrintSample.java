package javachart.standalone;

import javachart.chart.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Vector;

/**
 *	This file implements a very simple example of chart printing, using the JDK 1.1 printJob
 *  class.  This program will fail to compile with Java 1.0
 */

public class PrintSample extends java.awt.Panel implements ActionListener {

	public Chart            	chart;

	PrintSample(){
		chart = new PieChart("Test Chart");

		double y[] = new double[5];
    
		for (int i = 0; i < 5; i++) {
			y[i] = Math.random();
		}

		chart.addDataSet("Test", y);

		setLayout(new BorderLayout());
		Button myButton = new Button("Print Me");
		add(myButton, "South");
		myButton.addActionListener(this);
	} 

	public void paint(Graphics g){
		chart.resize(getSize().width, getSize().height);
		chart.drawGraph(g);
	}

	public void actionPerformed(ActionEvent e){
		print(new Frame());
	}

	public static void main (String[] args) {

		PrintSample 		f = new PrintSample();

		Frame myFrame = new Frame();
		myFrame.add(f);
		myFrame.setSize(500, 500);
		myFrame.show();
		//f.print(myFrame);
	}

	private void print(Frame f1){
		PrintJob myPrintJob = f1.getToolkit().getPrintJob(f1, "job-o-rama", null);
		if(myPrintJob == null)
			System.out.println("null print job!!!");
		else {
			Graphics g = myPrintJob.getGraphics();
			if(g == null)
				System.out.println("null print job graphics!!");
			else{
				chart.drawGraph(g);
				f1.print(g);
			}
			g.dispose();
			myPrintJob.end();
		}
	}

} 
