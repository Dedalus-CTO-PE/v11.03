package javachart.applet;

import javachart.utility.*;
import java.awt.*;
import java.awt.image.*;
import java.applet.*;
import java.util.*;
import java.net.URL;
import java.net.URLConnection;
import java.io.*;
import java.net.Socket;
import java.util.StringTokenizer;

public class gifButton extends Applet implements Runnable {
	OutputStream	myOutputStream;
	Socket		  sock;
	Thread		getThread;
	Vector		chartImages;
	Image		chartImage;
	Frame		myProgressBar;
	GifMaker	myGifMaker;
	Button		myButton;

	//params
	String	buttonMessage;
	String	saveCGI;
	String	displayCGI;
	int	progressBarHeight = 50;
	int	progressBarWidth = 200;
	String	progressBarTitle = "Progress...";

	public void run() {
	repaint();
	}

	public void start() {
		if (getThread == null) {
			getThread = new Thread(this);
			getThread.start();
		}
	}

	public void stop() {
		if(getThread != null) {
			getThread.stop();
			getThread = null;
		}
	}

	public boolean action(Event ev, Object what){
		 if(ev.target instanceof Button){
			doGIFs();
			return true;
		}
		return false;
	}

	public void doGIFs(){
		Enumeration	images;

		getAppletImages();
		images = chartImages.elements();
		myGifMaker = new GifMaker();
		while(images.hasMoreElements()){
			chartImage = (Image) images.nextElement();
			myGifMaker.setImage(chartImage);
			initProgressBar();
			myGifMaker.setProgressBar(myProgressBar);
			myGifMaker.generate();
			myProgressBar.hide();
			showStatus("writing to server...");
			writeToSocket();
			try {
				getAppletContext().showDocument(new URL(displayCGI + "?" + myGifMaker.getSize()), "_blank");
			} catch (java.net.MalformedURLException e) {
				System.out.println("couldn't load the display url");
			}
		}
		showStatus("done");
	}

	public void init () {
		String	str;

		str = getParameter("buttonMessage");
		if(str != null)
			buttonMessage = new String(str);
		else
			buttonMessage = "Click for GIF";
		str = getParameter("saveCGI");
		if(str != null)	//must be on the same server as this applet
			saveCGI = new String(str);
		else
			saveCGI = "/cgi-bin/saveGif.cgi";
		str = getParameter("displayCGI");
		if(str != null)	
			displayCGI = new String(str);
		else
			displayCGI = "http://www.ve.com/cgi-bin/displayGif.cgi";
		str = getParameter("progressBarWidth");
		if(str != null)	
			progressBarWidth = Integer.parseInt(str);
		str = getParameter("progressBarHeight");
		if(str != null)	
			progressBarHeight = Integer.parseInt(str);
		str = getParameter("progressBarTitle");
		if(str != null)	
			progressBarTitle = new String(str);

		myButton = new Button(buttonMessage);
		add(myButton);

	}

	void getAppletImages(){
		AppletContext 	context;
		Enumeration 	whatApplets;
		Applet		found;

		context = getAppletContext();
		whatApplets = context.getApplets();
		chartImages = new Vector();
		while(whatApplets.hasMoreElements()){
			found = (Applet) whatApplets.nextElement();
			if(found instanceof javachart.applet.ChartAppShell){
				chartImages.addElement(((javachart.applet.ChartAppShell)found).chart.getImage());
			}
		}

	}

/*****start of Socket code ***/
	private final String ctype  = "application/octet-stream";
	private	   String home;
	private	   int	port;


	public void writeToSocket()
	{
		DataOutputStream dataout;

		home = getCodeBase().getHost();
		port = getCodeBase().getPort();
		if (port == -1)  port = 80;

		//create a client socket 
		try
		{
			sock = new Socket(home, port);
		}
		catch (Exception e)
		{
			showStatus("bad socket...");
			System.out.println("socket:" + e.getMessage());
		}


		// Obtain output stream to communicate with the server
		try
		{
			myOutputStream = sock.getOutputStream();
		}
		catch (Exception e)
		{
			showStatus("bad output stream...");
			System.out.println("socket:" + e.getMessage());
			try
			{
			sock.close();
			}
			catch (IOException ee) {}
			return;
		}

		try
		{
			dataout = new DataOutputStream(myOutputStream);
		}
		catch (Exception e)
		{
			showStatus("bad data output stream...");
			System.out.println("data output stream:" + e.getMessage());
			try
			{
			sock.close();
			}
			catch (IOException ee) {}
			return;
		}

		// Send http request to server and get return data
		try
		{
			// HTTP header
			dataout.writeBytes("POST " + saveCGI + " HTTP/1.0\r\n");
			dataout.writeBytes("Host: " + home + ":" + port + "\r\n");
			dataout.writeBytes("Content-type: " + ctype + "\r\n");
			dataout.writeBytes("Content-length: " + myGifMaker.getSize() + "\r\n");
			dataout.writeBytes("\r\n");		// end of header
			dataout.flush();
			myGifMaker.setOutputStream(myOutputStream);
			myGifMaker.write();
		}
		catch (Exception e)
		{
			showStatus("couldn't write...");
			System.out.println("writing:" + e.getMessage());
			try
			{
			sock.close();
			}
			catch (IOException ee) {;}
			return;
		}

		// close up shop
		try
		{
			myOutputStream.close();
		}
		catch (IOException e) {;}
		try
		{
			sock.close();
		}
		catch (IOException e) {;}
	}
	/*****end of socket code*****/

	public void initProgressBar(){
		if(myProgressBar == null){
			myProgressBar = new Frame();
			myProgressBar.resize(progressBarWidth, progressBarHeight);
		}
		myProgressBar.setResizable(false);
		myProgressBar.setTitle(progressBarTitle);
		myProgressBar.show();
	}
}
