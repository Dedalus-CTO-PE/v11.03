package javachart.contrib;

import javachart.chart.*;
import java.awt.Graphics;
import java.awt.Image;

/**
 * 	very simple subclass of Background that draws an image instead of
 *	a solid color
 */
public class ImageBackground extends Background {

	public ImageBackground(Globals g){
		super(g);
	}

	public synchronized void draw(Graphics g){
		Gc myGc = getGc();
		Image myImage = myGc.getImage();
		if(myImage == null)
			return;
		int imageWidth = myImage.getWidth(null);
		int imageHeight = myImage.getHeight(null);
		if((imageWidth == -1)||(imageHeight == -1))
			return;
		g.drawImage(myImage, 0, 0, null);
				g.setFont(getTitleFont());

	}
}
