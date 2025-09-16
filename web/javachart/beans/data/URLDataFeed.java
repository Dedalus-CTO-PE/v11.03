package javachart.beans.data;

import java.net.*;
import java.io.*;
import java.util.*;

public abstract class URLDataFeed extends SimpleDataFeed implements Runnable {

	public URLDataFeed(){
		start();
	}

	public void start(){
		if (myThread==null){
			myThread = new Thread(this);
		}
		if(myThread.isAlive())
			return;
		myThread.start();
		//System.out.println("Starting...");
	}

	public void stop(){
		if (myThread!=null){
			myThread.stop();
			//System.out.println("Stopping...");
			myThread = null;
		}
	}

	public void run(){
		while(true){
			try{
				myThread.sleep(interval*1000);
			}
			catch(InterruptedException e){
				System.out.println("URL data feed interrupted!");
			}
			if(!externalTrigger){
				update();
				fireEvent();
			}
		}
	}

	public void setAutomaticUpdates(boolean b){
		externalTrigger = !b;
	}
	public boolean getAutomaticUpdates(){
		return !externalTrigger;
	}

	public void setURL(String u){
		myURLString = u;
	}
	public String getURL(){
		return myURLString;
	}
	public void setInterval(int seconds){
		interval = seconds;
	}
	public int getInterval(){
		return interval;
	}
	public void setDelimiter(String s){
		delimitString = s;
	}
	public String getDelimiter(){
		return delimitString;
	}

	public void update(){
		if(readURLInfo())
			super.update();
	}

	protected boolean readURLInfo(){
		String str;
		InputStream dataStream;

		dataStream = openURL(myURLString);
		if(dataStream == null)
			return false;
		while((str = getLineFromURL(dataStream)) != null) {
			tokenizedLines.addElement(new StringTokenizer(str, delimitString, false));
		}
		closeURL(dataStream);
		updateDataArrays();
		tokenizedLines.removeAllElements();
		return true;
	}


	protected String getLineFromURL(InputStream myInputStream) {
		boolean		keepReading = true;
		int		ch = -1;
		int		i, j;

		for(i=0;i<BUFFLEN;i++) buff[i] = 0;
		i = 0;
		while(keepReading) {
			try {
				ch = myInputStream.read();
			}
			catch (java.io.IOException e) {
				System.out.println("bad i/o operation");
			}
			if (ch == -1) {
				keepReading = false;
				if(i == 0)
					return null;
				else
					return(new String(buff, 0, i));
			}
			else if ((ch == '\n')||(ch == '\r')){
				if(i>0)
					return(new String(buff, 0, i));
			}
			else {
				buff[i] = (char) ch;
				i++;
			}
		}
		return(new String(buff, 0, i));

	}

	//URL convenience methods
	protected InputStream openURL(String s) {
		String s1, s2;
		URLConnection connection;
		InputStream myInputStream;
		URL	myUrl;

		//open a URL
		try {
			myUrl = new URL(s);
		}
		catch (java.net.MalformedURLException e) {
			//relative url?
			System.out.println("couldn't open " + s);
			return null;
		}

		//then try to get an input stream
		try {
			connection = myUrl.openConnection();
			connection.setUseCaches(false);
			myInputStream = connection.getInputStream();
		}
		catch (java.io.IOException e) {
			System.out.println("can't open stream " + s);
			return null;
		}
		return myInputStream;
	}

	protected boolean closeURL(InputStream myInputStream) {
		try {
			myInputStream.close();
		}
		catch (java.io.IOException e) {
			System.out.println("can't close URL");
			return false;
		}
		return true;
	}

	protected void updateDataArrays(){
	}

	private int	interval = 60;
	private transient Thread myThread = null;
	private String delimitString = ",";
	private String myURLString = "http://www.ve.com/data/dummy.dat";
	private boolean externalTrigger = true;

	private InputStream myInputStream;
	private static int BUFFLEN = 4096;
	private char buff[] = new char[BUFFLEN];

	protected Vector tokenizedLines = new Vector();
}
