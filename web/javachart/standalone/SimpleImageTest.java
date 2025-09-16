package javachart.standalone;

import javachart.chart.*;
import javachart.utility.*;

import java.awt.*;
import java.util.*;
import java.io.*;

public class SimpleImageTest extends Frame
{
        public static void main(String argv[])
        {
                new SimpleImageTest();
        }

        public SimpleImageTest()
        {
                //generate sample data
                double x[] = new double[5];
                double y[] = new double[5];


                //fill an array with random numbers
                for (int i = 0; i < 5; i++) {
                x[i] = (double) i;
                y[i] = Math.random();
                }

                // create the bar chart
                chart = new BarChart();
                //chart = new BarChart("Test Chart");             
                
                //add the random numbers as a dataset with the name "Test"
                chart.addDataSet("Test", x, y);

                //Define some axis titles
                chart.getXAxis().setTitleString("X axis");
                chart.getYAxis().setTitleString("Y axis");

                chart.resize(500, 300);
                resize(30, 30);
		show();

		Image myImage = createImage(500, 300);
		chart.setImage(myImage);
                chart.drawGraph(myImage.getGraphics());

                Image i = chart.getImage();

                try
                {
                        // create gif image:
                        FileOutputStream gif_file = new
FileOutputStream("test.gif");
                        GifMaker gif_encoder = new GifMaker();

                        gif_encoder.setImage(i);
                        gif_encoder.setOutputStream(gif_file);

                        gif_encoder.write();

                        gif_file.flush();
                }
                catch(Exception e)
                {
                        System.out.println(""+e);
                        System.exit(0);
                }
				System.exit(0);
        }

/**
	public void paint(Graphics g){
		chart.drawGraph(g);
	}
**/

	private BarChart chart;
}

