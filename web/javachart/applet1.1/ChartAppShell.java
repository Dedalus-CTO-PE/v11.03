package javachart.applet;

import java.util.Date;
import java.util.Vector;
import java.applet.Applet;
import java.awt.*;
import java.lang.Number;
import java.net.URL;
import java.net.URLConnection;
import java.io.InputStream;
import javachart.chart.*;


public abstract class ChartAppShell extends Applet implements Runnable {
	public ChartInterface 	chart;
	double			yArr[] = { 0 };
	boolean			gotDatasets = false;
	URL			myUrl;
	Thread			getThread;
	int			networkInterval = -1;
	MediaTracker		imageTracker;
	boolean			gotImages;
	char			buff[] = new char[8192];
	String			delimiter;

	MessageFrame		messageFrame;	//for copyright notice
	Transform		logoTransform;  //for drawing VE logo
	boolean			home = false;	//set to true to avoid VE message and dot
	boolean			useDwellLabel = true;
	int				dwellLabelPrecision = 2;
	int				dwellLabelFormat	= 1;
	boolean			dwellUseXValue		= true;
	boolean			dwellUseYValue		= true;
	boolean			dwellUseString		= false;
	String			dwellXString, dwellYString;

	//for timing the dwell labels
	private	int	secondsSoFar = 0;

	public void run() {
		while (true) {
			//sleep first, because it draws on initial paint
			try { 
				Thread.sleep(1000); 
				if((networkInterval != -1)&&(secondsSoFar > networkInterval)){
					secondsSoFar = 0;
					reReadURLDatasets();
					showDataPopup = false;
					repaint();
				}
				else {
					doDwellLabel();
					secondsSoFar++;
				}
			}
			catch (InterruptedException e) {}
		}
	}

	//override update for smoother redraws
	protected Image		offScreenImage;
	Dimension	offScreenSize;
	Graphics	offScreenGraphics;

	public final synchronized void  update(Graphics g) 
	{
		paint(g);
	}

	public void start() {
		if(useDwellLabel)
			chart.setUseDisplayList(true);
		else
			chart.setUseDisplayList(false);
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

	public void paint(Graphics g) {
		int i;
		Dimension d	= size();
		if(gotImages)
			try {
				imageTracker.waitForID(0);
			} catch (InterruptedException e) {
				return;
			}
		if((offScreenImage == null)||
			(d.width != offScreenSize.width)||
			(d.height != offScreenSize.height)) {
			offScreenImage = createImage(d.width, d.height);
			offScreenSize = d;
			offScreenGraphics = offScreenImage.getGraphics();
		}
		chart.setImage(offScreenImage);
		if (chart.getStringRotator() == null)
			chart.setStringRotator(new RotateString(this));

		if (offScreenGraphics != null)
				chart.drawGraph(offScreenGraphics);
		else
			System.out.println("null graphics in app shell");
		drawMyStuff(offScreenGraphics);
 
		g.drawImage(offScreenImage, 0, 0, null);
		if(showDataPopup) {
			drawDataPopup(g);
			dwellLabelVisible = true;
		}
		else
			dwellLabelVisible = false;
		if(messageFrame!=null)
			if(messageFrame.isShowing())
				messageFrame.repaint();
	}

	protected void getOptions() {
		//buff = new char[4096]; XXX
		String	str;

		if((getCodeBase().getHost()).equals("www.ve.com"))
			home = true;
		else {
			str = getParameter("CopyrightNotification");
			if(str != null)
				if(str.equals("JavaChart is a copyrighted work, and subject to full legal protection"))
					home = true;
		}
		str = getParameter("delimiter");
		if(str != null)
		 	delimiter = new String(str);
		else
	 		delimiter = new String(",");
		str = getParameter("networkInterval");
		if(str != null)
		 	networkInterval = Integer.parseInt(str);
		str = getParameter("dwellLabelsOn");
		if((str != null)&&(str.equalsIgnoreCase("false")))
		 	useDwellLabel =false;
		str = getParameter("dwellUseLabelString");
		if((str != null)&&(str.equalsIgnoreCase("true")))
		 	dwellUseString =true;
		str = getParameter("dwellUseXValue");
		if((str != null)&&(str.equalsIgnoreCase("false")))
		 	dwellUseXValue =false;
		str = getParameter("dwellUseYValue");
		if((str != null)&&(str.equalsIgnoreCase("false")))
		 	dwellUseYValue =false;
		str = getParameter("dwellXString");
		if(str != null)
		 	dwellXString =str;
		else
			dwellXString = "X: #";
		str = getParameter("dwellYString");
		if(str != null)
		 	dwellYString =str;
		else
			dwellYString = "Y: #";
		str = getParameter("dwellLabelPrecision");
		if(str != null)
		 	dwellLabelPrecision = Integer.parseInt(str);
		str = getParameter("dwellLabelFormat");
		if(str != null)
		 	dwellLabelFormat = Integer.parseInt(str);
		str = getParameter("URLDataBlock");
		if(str != null)
		 	getURLDataBlock(str);
		str = getParameter("URLXYDataRows");
		if(str != null)
		 	getURLXYDataRows(str);
		str = getParameter("URLXYDataColumns");
		if(str != null)
		 	getURLXYDataColumns(str);
		str = getParameter("dataset0xURL");
		if(str != null)
		 	getURLDatasets();
		str = getParameter("dataset0yURL");
		if(str != null)
		 	getURLDatasets();
		str = getParameter("dataset0xyURL");
		if(str != null)
		 	getURLDatasets();
		str = getParameter("dataset0xValues");
		if(str != null)
		 	getDatasets();
		str = getParameter("dataset0yValues");
		if(str != null)
		 	getDatasets();
		str = getParameter("dataset0xyValues");
		if(str != null)
		 	getDatasets();
		str = getParameter("customDatasetHandler");
		if(str != null)
		 	getMyDatasets(str);
		str = getParameter("legendOn");
		if(str != null)
		 	chart.setLegendVisible(true);
		str = getParameter("legendOff");
		if(str != null)
		 	chart.setLegendVisible(false);
		str = getParameter("legendColor");
		if(str != null) {
		 	chart.getLegend().getBackgroundGc().setFillColor(getColor(str));
		 	chart.getLegend().getBackgroundGc().setLineColor(getColor(str));
		}
		str = getParameter("legendVertical");
		if(str != null)
		 	chart.getLegend().setVerticalLayout(true);
		str = getParameter("legendHorizontal");
		if(str != null)
		 	chart.getLegend().setVerticalLayout(false);
		str = getParameter("legendLabelColor");
		if(str != null)
		 	chart.getLegend().setLabelColor(getColor(str));
		str = getParameter("legendLabelFont");
		if(str != null)
		 	chart.getLegend().setLabelFont(getFont(str));
		str = getParameter("legendllX");
		if(str != null)
		 	chart.getLegend().setLlX((Double.valueOf(str)).doubleValue());
		str = getParameter("legendllY");
		if(str != null)
		 	chart.getLegend().setLlY((Double.valueOf(str)).doubleValue());
	 	str = getParameter("iconWidth");
	 	if(str != null) 
		 	chart.getLegend().setIconWidth(Double.valueOf((str.trim())).doubleValue());
	 	str = getParameter("iconHeight");
	 	if(str != null) 
		 	chart.getLegend().setIconHeight(Double.valueOf((str.trim())).doubleValue());
	 	str = getParameter("iconGap");
	 	if(str != null) 
		 	chart.getLegend().setIconGap(Double.valueOf((str.trim())).doubleValue());

		str = getParameter("plotAreaTop");
		if(str != null)
		 	chart.getPlotarea().setUrY((Double.valueOf(str)).doubleValue());
		str = getParameter("plotAreaBottom");
		if(str != null)
		 	chart.getPlotarea().setLlY((Double.valueOf(str)).doubleValue());
		str = getParameter("plotAreaLeft");
		if(str != null)
		 	chart.getPlotarea().setLlX((Double.valueOf(str)).doubleValue());
		str = getParameter("plotAreaRight");
		if(str != null)
		 	chart.getPlotarea().setUrX((Double.valueOf(str)).doubleValue());
		str = getParameter("plotAreaColor");
		if(str != null)
		 	chart.getPlotarea().getGc().setFillColor(getColor(str));
		str = getParameter("backgroundColor");
		if(str != null)
		 	chart.getBackground().getGc().setFillColor(getColor(str));
		str = getParameter("titleColor");
		if(str != null)
		 	chart.getBackground().setTitleColor(getColor(str));
		str = getParameter("titleFont");
		if(str != null)
		 	chart.getBackground().setTitleFont(getFont(str));
		str = getParameter("titleString");
		if(str != null)
		 	chart.getBackground().setTitleString(str);
		str = getParameter("3D");
		 	if(str != null)
		 		chart.setThreeD(true);
		str = getParameter("2D");
		if(str != null)
		 	chart.setThreeD(false);
		str = getParameter("XDepth");
		if(str != null)
				chart.setXOffset(Integer.parseInt(str));
		str = getParameter("YDepth");
		if(str != null)
			chart.setYOffset(Integer.parseInt(str));
	
	}

	protected Font getFont(String str){
		String	fontName;
		int	size, style, i, j;
		String	s;
		Font	f;
		
		i = str.indexOf(delimiter, 0);
		fontName = str.substring(0,i);
		fontName = str.substring(0,i);
		j = str.indexOf(delimiter, i+1);
		size = (Integer.valueOf(str.substring(i+1,j))).intValue();
		style = (Integer.valueOf(str.substring(j+1))).intValue();
		f = new Font(fontName, style, size);
		if (f != null)
			return f;
		else
		 		return new Font("TimesRoman", 0, 12);
		 }
		 

	protected Color getColor(String s) {
		if (s.equalsIgnoreCase("black"))
		 	return Color.black;
		if (s.equalsIgnoreCase("white"))
		 	return Color.white;
		if (s.equalsIgnoreCase("lightGray"))
		 	return Color.lightGray;
		if (s.equalsIgnoreCase("gray"))
		 	return Color.gray;
		if (s.equalsIgnoreCase("darkGray"))
		 	return Color.darkGray;
		if (s.equalsIgnoreCase("red"))
		 	return Color.red;
		if (s.equalsIgnoreCase("pink"))
		 	return Color.pink;
		if (s.equalsIgnoreCase("orange"))
		 	return Color.orange;
		if (s.equalsIgnoreCase("yellow"))
		 	return Color.yellow;
		if (s.equalsIgnoreCase("green"))
		 	return Color.green;
		if (s.equalsIgnoreCase("magenta"))
		 	return Color.magenta;
		if (s.equalsIgnoreCase("cyan"))
		 	return Color.cyan;
		if (s.equalsIgnoreCase("blue"))
		 	return Color.blue;
		try {
			return new Color(Integer.parseInt(s, 16));
		}
		catch (NumberFormatException e) {
		}
			return Color.black;
	}
		 

	protected void getDatasets(){
		int i = 0;
		 	
		if(gotDatasets) return;
		gotDatasets = true;
		while(getDataset(i))
		 	i++;
		if (chart.getNumDatasets() < 1)
			chart.addDataSet("dummy", yArr);
	}

	public boolean getDataset(int which) {
		double	xArr[] = null;
		double	yArr[] = null;
		double	y2Arr[] = null;
		String	str;
		 	
		/**** get data for dataset "which" *******/		 	
		str = getParameter("dataset" + which + "xValues");
		if(str != null) {
		 	xArr = getVals(str);
		}
		 	
		str = getParameter("dataset" + which + "dateValues");
		if(str != null) {
		 	xArr = getDateVals(str);
		}
		
		str = getParameter("dataset" + which + "yValues");
		if(str != null) {
		 	yArr = getVals(str);
		}
		
		str = getParameter("dataset" + which + "y2Values");
		if(str != null) {
		 	y2Arr = getVals(str);
		}
		 	
		str = getParameter("dataset" + which + "xyValues");
		if(str != null) {
		 	System.out.println("xyVals not supported yet");
		}
		 	
		return(getDatasetParameters(which, xArr, yArr, y2Arr,null));
	}

	protected double[] getVals(String s) {
		double	vals[];
		int i, j;
		int start, end;
		
		i = 0;
		j = 0;
		while(i != -1) {
		 	i = s.indexOf(delimiter, i+1);
		 	j++;
		}
		if (j == 0) try {
		 	vals = new double[1];
		 	vals[i] = Double.valueOf((s.trim())).doubleValue();
		return vals;
		}
		catch (java.lang.NumberFormatException e) {
			vals = new double[1];
			vals[0] = 0.0;
			System.out.println("Unintelligable number in this string: " + s);
			return vals;
		}
		vals = new double[j];
		
		start = 0;
		try {
		 	for(i=0;i<j-1;i++) {
		 		end = s.indexOf(delimiter, start);
		 		vals[i] = (Double.valueOf((s.substring(start,end)).trim())).doubleValue();
	 		 	start = end + 1;
		 	}
		 	vals[i] = (Double.valueOf((s.substring(start)).trim())).doubleValue();
		}
		catch (java.lang.NumberFormatException e) {
			vals = new double[1];
			vals[0] = 0.0;
			System.out.println("Unintelligable number in this string: " + s);
		}

		return vals;
	}
		 
	protected double[] getDateVals(String s) {
		double	vals[];
		int i, j;
		int start, end;
		 	
		i = 0;
		j = 0;
		while(i != -1) {
		 	i = s.indexOf(delimiter, i+1);
		 	j++;
		}
		if (j == 0) {
		 	vals = new double[1];
		 	vals[i] = (double) Date.parse(s.trim());
			return vals;
		}

		vals = new double[j];
		start = 0;
		for(i=0;i<j-1;i++) {
		 	end = s.indexOf(delimiter, start);
		 	vals[i] = (double) Date.parse((s.substring(start,end)).trim());
	 		start = end + 1;
		}
		vals[i] = (double) Date.parse((s.substring(start)).trim());
		return vals;
	}
		 
	protected String[] getLabels(String s) {
		String	labels[];
		int i, j;
		int start, end;
		 	
		i = 0;
		j = 0;
		while(i != -1) {
		 	i = s.indexOf(delimiter, i+1);
		 	j++;
		}
		labels = new String[j];
		
		start = 0;
		for(i=0;i<j-1;i++) {
		 	end = s.indexOf(delimiter, start);
		 	labels[i] = s.substring(start, end);
		 	start = end + 1;
		}
		labels[i] = s.substring(start);
		return labels;
	}

	protected Image makeURLImage(String s) {
		Image	img;

		img = getImage(getCodeBase(), s);
		if(!gotImages) {
			imageTracker = new MediaTracker(this);
			gotImages = true;
		}
		imageTracker.addImage(img, 0);
		return img;
	}

	//URL convenience methods
	public InputStream openURL(String s) {
		String s1, s2;
		URLConnection connection;
		InputStream myInputStream;

		//open a URL
		try {
			myUrl = new URL(s);
		}
		catch (java.net.MalformedURLException e) {
			//relative url?
			try{
				s1 = getDocumentBase().toExternalForm();
				s2 = s1.substring(0, s1.lastIndexOf("/") + 1);
				myUrl = new URL(s2 + s);
			}
			catch (java.net.MalformedURLException f) {
				System.out.println("couldn't open " + s);
				return null;
			}
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

	public boolean closeURL(InputStream myInputStream) {
		try {
			myInputStream.close();
		}
		catch (java.io.IOException e) {
			System.out.println("can't close URL");
			return false;
		}
		return true;
	}

	public String getLineFromURL(InputStream myInputStream) {
		boolean		keepReading = true;
		int		ch = -1;
		int		i, j;

		for(i=0;i<256;i++) buff[i] = 0;
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

		 
	protected void getURLDatasets(){
	 	int i = 0;
		if(gotDatasets) 
			return;
		gotDatasets = true;
	 	while(getURLDataset(i))
	 		i++;
	 	if (chart.getNumDatasets() < 1)
	 		chart.addDataSet("dummy", yArr);
	}

	protected void reReadURLDatasets(){
		int 		i, j;
		String		str, urlStr;
		double		xArr[];
		double		yArr[];
		String		labels[];
		InputStream	myInputStream;

	 	str = getParameter("URLDataBlock");
	 	if(str != null) {
			if((myInputStream = openURL(str))!=null) {
	 			for(i=0;i<chart.getNumDatasets();i++) {
					urlStr = getLineFromURL(myInputStream);
	 					yArr = getVals(urlStr);
					chart.getDatasets()[i].replaceYData(yArr);
				}
			}
			closeURL(myInputStream);
		}

	 	str = getParameter("URLXYDataRows");
	 	if(str != null) {
			int n, k;
			double xyArr[];

			if((myInputStream=openURL(str))!=null) {
	 				for(i=0;i<chart.getNumDatasets();i++) {
					urlStr = getLineFromURL(myInputStream);
	 					xyArr = getVals(urlStr);
	 					xArr = new double[xyArr.length/2];
	 					yArr = new double[xArr.length];
					k = 0;
					for(n=0;n<xyArr.length;n++) {
						try {
							xArr[k] = xyArr[n];n++;
							yArr[k] = xyArr[n];k++;
						}
						catch (ArrayIndexOutOfBoundsException e)
						{
					System.out.println("need same number of x & y observations in dataset " + i);
							return;
						}
					}
					chart.getDatasets()[i].replaceYData(yArr);
					chart.getDatasets()[i].replaceXData(xArr);
				}
			}
			closeURL(myInputStream);
		}

	 	str = getParameter("URLXYDataColumns");
	 	if(str != null) {
			int nrows, ncolumns;
			double dataBlock[][];

			if((myInputStream = openURL(str))!=null) {
				urlStr = getLineFromURL(myInputStream); //number of rows
				nrows = Integer.parseInt(urlStr.trim());
				ncolumns = chart.getNumDatasets() * 2; //already calc'd # datasets
				dataBlock = new double[nrows][];
				xArr = new double[nrows];
				yArr = new double[nrows];
	 			for(i=0;i<nrows;i++) {
					urlStr = getLineFromURL(myInputStream);
					dataBlock[i] = getVals(urlStr);
				}
			}
			else
				return;
			closeURL(myInputStream);

	 		for(i=0;i<ncolumns;i+=2) {
				for(j=0;j<nrows;j++){
					try {
						xArr[j] = dataBlock[j][i];
						yArr[j] = dataBlock[j][i+1];
					}
					catch (ArrayIndexOutOfBoundsException e)
					{
						System.out.println("need same number of x & y observations in column " + i + " and row " + j);
						return;
					}
				}
				chart.getDatasets()[i/2].replaceYData(yArr);
				chart.getDatasets()[i/2].replaceXData(xArr);
			}
		} //end of URLXYDataColumns block

		for(i=0;i<chart.getNumDatasets();i++) {
			str = getParameter("dataset" + i + "xURL");
			if(str != null) {
				if((myInputStream = openURL(str))!=null) {
					urlStr = getLineFromURL(myInputStream);
					xArr = getVals(urlStr);
					chart.getDatasets()[i].replaceXData(xArr);
				}
				closeURL(myInputStream);
			}
		
			str = getParameter("dataset" + i + "yURL");
			if(str != null) {
				//fake some data between 1 * 10
				if (str.equalsIgnoreCase("fake")) {
					yArr = new double[5];
					for(j=0;j<5;j++)
						yArr[j] = 10.0 * Math.random();
					chart.getDatasets()[i].replaceYData(yArr);
				}
				else if((myInputStream = openURL(str))!=null) {
					urlStr = getLineFromURL(myInputStream);
	 				yArr = getVals(urlStr);
					chart.getDatasets()[i].replaceYData(yArr);
					closeURL(myInputStream);
				}
	 		}

			/*** check for URL labels ****/
	 		str = getParameter("dataset" + i + "URLLabels");
	 		if(str != null) {
				if((myInputStream = openURL(str))!=null) {
					urlStr = getLineFromURL(myInputStream);
	 				labels = getLabels(urlStr);
					replaceDataLabels(i, labels);
					closeURL(myInputStream);
				}
	 		}
		}
	 }
	 
	 protected boolean getURLDataset(int which) {
	 	double	xArr[] = null;
	 	double	yArr[] = null;
	 	double	y2Arr[] = null;
	 	String	str;
	 	String	urlStr;
		int	j;
		InputStream myInputStream;
	 	
	 	/**** get data for dataset "which" *******/		 	
	 	str = getParameter("dataset" + which + "xURL");
	 	if(str != null) {
			if((myInputStream = openURL(str))!=null) {
				urlStr = getLineFromURL(myInputStream);
	 			xArr = getVals(urlStr);
				closeURL(myInputStream);
			}
	 	}
	 	
	 	str = getParameter("dataset" + which + "yURL");
	 	if(str != null) {
		 	if (str.equalsIgnoreCase("fake")) {
				//fake some data between 1 * 10
				yArr = new double[5];
				for(j=0;j<5;j++)
					yArr[j] = 10.0 * Math.random();
			}
			else if((myInputStream = openURL(str))!=null) {
				urlStr = getLineFromURL(myInputStream);
	 			yArr = getVals(urlStr);
				closeURL(myInputStream);
			}
		}
	 	
	 	str = getParameter("dataset" + which + "y2URL");
	 	if(str != null) {
		 	if (str.equalsIgnoreCase("fake")) {
				//fake some data between 1 * 10
				yArr = new double[5];
				for(j=0;j<5;j++)
					y2Arr[j] = 10.0 * Math.random();
			}
			else if((myInputStream = openURL(str))!=null) {
				urlStr = getLineFromURL(myInputStream);
	 			y2Arr = getVals(urlStr);
				closeURL(myInputStream);
			}
	 	}
	 	
	 	str = getParameter("dataset" + which + "xyURL");
	 	if(str != null) {
	 		System.out.println("xyVals not supported yet");
	 	}

		return(getDatasetParameters(which, xArr, yArr, y2Arr,null));
	 }

	 protected boolean getURLXYDataRows(String urlStr) {
	 	double	xyArr[] = null;
	 	double	xArr[] = null;
	 	double	yArr[] = null;
	 	String	str;
		int	i = 0;
		int	j, k;
		InputStream myInputStream;

	 	if(urlStr != null){
			myInputStream = openURL(urlStr);
			if(myInputStream == null)
				return false;
		}
		else
			return false;

		gotDatasets = true;
		while((str = getLineFromURL(myInputStream)) != null) {
	 			xyArr = getVals(str);
	 			xArr = new double[xyArr.length/2];
	 			yArr = new double[xArr.length];
				k = 0;
			for(j=0;j<xyArr.length;j++) {
				try {
					xArr[k] = xyArr[j];j++;
					yArr[k] = xyArr[j];k++;
				}
				catch (ArrayIndexOutOfBoundsException e)
				{
					System.out.println("need same number of x & y observations in dataset " + i);
					return false;
				}
			}
			getDatasetParameters(i, xArr, yArr, null,null);
			i++;
		}
		closeURL(myInputStream);
		return true;
	 }

	 protected boolean getURLXYDataColumns(String urlStr) {
	 	double	xArr[] = null;
	 	double	yArr[] = null;
	 	String	myStr;
		int	i, j;
		int nrows, ncolumns;
		double dataBlock[][];
		InputStream myInputStream;

	 	if(urlStr != null){
			if((myInputStream = openURL(urlStr))==null)
				return false;
		}
		else
			return false;

		gotDatasets = true;
		myStr = getLineFromURL(myInputStream); //number of rows
		nrows = Integer.parseInt(myStr.trim());
		dataBlock = new double[nrows][];
		xArr = new double[nrows];
		yArr = new double[nrows];
	 	for(i=0;i<nrows;i++) {
			myStr = getLineFromURL(myInputStream);
			dataBlock[i] = getVals(myStr);
		}
		closeURL(myInputStream);
		ncolumns = dataBlock[0].length; //assumes rectangular array

	 	for(i=0;i<ncolumns;i+=2) {
			for(j=0;j<nrows;j++){
				try {
					xArr[j] = dataBlock[j][i];
					yArr[j] = dataBlock[j][i+1];
				}
				catch (ArrayIndexOutOfBoundsException e) {
					System.out.println("need same number of x & y observations in column " + i + " and row " + j);
					return false;
				}
			}
			getDatasetParameters(i/2, xArr, yArr, null,null);
		}
		return true;
	 }

	 protected boolean getURLDataBlock(String urlStr) {
	 	double	xArr[] = null;
	 	double	yArr[] = null;
	 	String	str;
		int	i = 0;
		InputStream myInputStream;

	 	if(urlStr != null){
			if((myInputStream = openURL(urlStr))==null)
				return false;
		}
		else
			return false;

		gotDatasets = true;
		while((str = getLineFromURL(myInputStream)) != null) {
	 		yArr = getVals(str);
			getDatasetParameters(i, xArr, yArr, null,null);
			i++;
		}
		closeURL(myInputStream);
		return true;
	 }

	public boolean getDatasetParameters(	int 	which,
					double	xArr[],
					double	yArr[],
					double	y2Arr[],
					double	y3Arr[]) {
		String	labels[] = null;
		Dataset	dataset;
		String	str;
		String	setName;
		int	i;
		InputStream myInputStream;

		/*** get dataset name ***/
		str = getParameter("dataset" + which + "Name");
		if(str != null)
		 	setName = new String(str);
		else
			setName = new String("dataset" + which);
		 	
		/**** get labels for dataset "which" ******/
		str = getParameter("dataset" + which + "Labels");
		if(str != null) {
		 	labels = getLabels(str);
		}

		/*** check for URL labels ****/
	 	str = getParameter("dataset" + which + "URLLabels");
	 	if(str != null) {
			if((myInputStream = openURL(str))!=null) {
				str = getLineFromURL(myInputStream);
 				labels = getLabels(str);
			}
			closeURL(myInputStream);
		}

		/***HLOC chart***/
		if ((y3Arr != null)&&(y2Arr != null)&&(yArr != null)) {
			chart.addDataSet(setName, xArr, yArr, y2Arr, y3Arr);
		}
		 /*** add dataset based on whether got xvals,yvals,labels ****/
		/*** a hilo chart's data **/
		else if ((y2Arr != null)&&(yArr != null)&&(labels != null)) {
			if(xArr == null)
				chart.addDataSet(setName, yArr, y2Arr, labels);
			else
				chart.addDataSet(setName, xArr, yArr, labels);
		}
		else if ((y2Arr != null)&&(yArr != null)&&(labels == null))
			if(xArr == null)
				chart.addDataSet(setName, yArr, y2Arr);
			else
				chart.addDataSet(setName, xArr, yArr);
		/*** every other kind of chart ***/
		else
			if (yArr != null)
			if(labels != null) 
					if(xArr == null)
						chart.addDataSet(setName, yArr, labels);
					else
						chart.addDataSet(setName, xArr, yArr, labels);
				else
					if(xArr == null)
						chart.addDataSet(setName, yArr);
					else
						chart.addDataSet(setName, xArr, yArr);

		if (yArr == null) // we've got *no* data so return
			return false;

		str = getParameter("dataset" + which + "Color");
		if(str != null) { 
		 	chart.getDatasets()[which].getGc().setFillColor(getColor(str));
		 	chart.getDatasets()[which].getGc().setLineColor(getColor(str));
		}

		/*** get individual colors for dataset "which" *********/
		str = getParameter("dataset" + which + "Colors");
		if(str != null) {
			labels = getLabels(str);
			dataset = chart.getDatasets()[which];
			for(i=0;i<labels.length;i++) {
				dataset.getDataElementAt(i).getGc().setFillColor(getColor(labels[i]));
			}
		}
		 	
		str = getParameter("dataset" + which + "LabelFont");
		if(str != null) { 
		chart.getDatasets()[which].setLabelFont(getFont(str));
		}
		str = getParameter("dataset" + which + "LabelColor");
		if(str != null) { 
		chart.getDatasets()[which].setLabelColor(getColor(str));
		}
		str = getParameter("dataset" + which + "Image");
		if(str != null) { 
		chart.getDatasets()[which].getGc().setImage(makeURLImage(str));
		}
		return true;
	}
		 
	protected void getAxisOptions(){
		String str;

		str = getParameter("yAxisOptions");
		if(str != null)
		 	getYAxisOptions(str);
		str = getParameter("yAxisStart");
		if(str != null)
		 	chart.getYAxis().setAxisStart((Double.valueOf(str)).doubleValue());
		str = getParameter("yAxisEnd");
		if(str != null)
		 	chart.getYAxis().setAxisEnd((Double.valueOf(str)).doubleValue());
		str = getParameter("yAxisLabelFont");
		if(str != null)
		 	chart.getYAxis().setLabelFont(getFont(str));
		str = getParameter("yAxisLabelAngle");
		if(str != null)
		 	chart.getYAxis().setLabelAngle(Integer.parseInt(str));
		str = getParameter("yAxisLabelPrecision");
		if(str != null)
		 	chart.getYAxis().setLabelPrecision(Integer.parseInt(str));
		str = getParameter("yAxisLabelFormat");
		if(str != null)
		 	chart.getYAxis().setLabelFormat(Integer.parseInt(str));
		str = getParameter("yAxisColor");
		if(str != null) {
		 	chart.getYAxis().setLabelColor(getColor(str));
		 	chart.getYAxis().getLineGc().setLineColor(getColor(str));
		 	chart.getYAxis().getGridGc().setLineColor(getColor(str));
		 	chart.getYAxis().getTickGc().setLineColor(getColor(str));
		}
		str = getParameter("yAxisLabelColor");
		if(str != null)
		 	chart.getYAxis().setLabelColor(getColor(str));
		str = getParameter("yAxisLineColor");
		if(str != null)
		 	chart.getYAxis().getLineGc().setLineColor(getColor(str));
		str = getParameter("yAxisGridColor");
		if(str != null)
		 	chart.getYAxis().getGridGc().setLineColor(getColor(str));
		str = getParameter("yAxisTickColor");
		if(str != null)
		 	chart.getYAxis().getTickGc().setLineColor(getColor(str));
		str = getParameter("yAxisTickLength");
		if(str != null)
		 	chart.getYAxis().setMajTickLength(Integer.parseInt(str));
		str = getParameter("yAxisMinTickLength");
		if(str != null)
		 	chart.getYAxis().setMinTickLength(Integer.parseInt(str));
		str = getParameter("yAxisTickCount");
		if(str != null)
		 	chart.getYAxis().setNumMajTicks(Integer.parseInt(str));
		str = getParameter("yAxisMinTickCount");
		if(str != null)
		 	chart.getYAxis().setNumMinTicks(Integer.parseInt(str));
		str = getParameter("yAxisGridCount");
		if(str != null)
		 	chart.getYAxis().setNumGrids(Integer.parseInt(str));
		str = getParameter("yAxisLabelCount");
		if(str != null)
		 	chart.getYAxis().setNumLabels(Integer.parseInt(str));
		str = getParameter("yAxisTitle");
		if(str != null)
		 	chart.getYAxis().setTitleString(str);
		str = getParameter("yAxisTitleColor");
		if(str != null)
		 	chart.getYAxis().setTitleColor(getColor(str));
		str = getParameter("yAxisTitleFont");
		if(str != null)
		 	chart.getYAxis().setTitleFont(getFont(str));   	
		str = getParameter("xAxisOptions");
		if(str != null)
		 	getXAxisOptions(str);
		str = getParameter("xAxisStart");
		if(str != null)
		 	chart.getXAxis().setAxisStart((Double.valueOf(str)).doubleValue());
		str = getParameter("xAxisEnd");
		if(str != null)
		 	chart.getXAxis().setAxisEnd((Double.valueOf(str)).doubleValue());
		str = getParameter("xAxisLabelFont");
		if(str != null)
		 	chart.getXAxis().setLabelFont(getFont(str));
		str = getParameter("xAxisLabelAngle");
		if(str != null)
		 	chart.getXAxis().setLabelAngle(Integer.parseInt(str));
		str = getParameter("xAxisLabelFormat");
		if(str != null)
		 	chart.getXAxis().setLabelFormat(Integer.parseInt(str));
		str = getParameter("xAxisLabelPrecision");
		if(str != null)
		 	chart.getXAxis().setLabelPrecision(Integer.parseInt(str));
		str = getParameter("xAxisColor");
		if(str != null) {
		 	chart.getXAxis().setLabelColor ( getColor(str));
		 	chart.getXAxis().getLineGc().setLineColor ( getColor(str));
		 	chart.getXAxis().getGridGc().setLineColor ( getColor(str));
		 	chart.getXAxis().getTickGc().setLineColor ( getColor(str));
		}
		str = getParameter("xAxisLabelColor");
		if(str != null)
		 	chart.getXAxis().setLabelColor ( getColor(str));
		str = getParameter("xAxisLineColor");
		if(str != null)
		 	chart.getXAxis().getLineGc().setLineColor ( getColor(str));
		str = getParameter("xAxisGridColor");
		if(str != null)
		 	chart.getXAxis().getGridGc().setLineColor ( getColor(str));
		str = getParameter("xAxisTickColor");
		if(str != null)
		 	chart.getXAxis().getTickGc().setLineColor ( getColor(str));
		str = getParameter("xAxisTickLength");
		if(str != null)
		 	chart.getXAxis().setMajTickLength ( Integer.parseInt(str));
		str = getParameter("xAxisMinTickLength");
		if(str != null)
		 	chart.getXAxis().setMinTickLength ( Integer.parseInt(str));
		str = getParameter("xAxisTitle");
		if(str != null)
		 	chart.getXAxis().setTitleString(str);
		str = getParameter("xAxisTitleColor");
		if(str != null)
		 	chart.getXAxis().setTitleColor(getColor(str));
		str = getParameter("xAxisTitleFont");
		if(str != null)
		 	chart.getXAxis().setTitleFont(getFont(str));
		str = getParameter("xAxisLabels");
		if(str != null)
		 	getXAxisLabels(str);
		str = getParameter("xAxisTickCount");
		if(str != null)
		 	chart.getXAxis().setNumMajTicks ( Integer.parseInt(str));
		str = getParameter("xAxisMinTickCount");
		if(str != null)
		 	chart.getXAxis().setNumMinTicks ( Integer.parseInt(str));
		str = getParameter("xAxisGridCount");
		if(str != null)
		 	chart.getXAxis().setNumGrids (Integer.parseInt(str));
		str = getParameter("xAxisLabelCount");
		if(str != null)
		 	chart.getXAxis().setNumLabels ( Integer.parseInt(str));
	}
   	
	 protected void getYAxisOptions(String s) {
		 if(s.indexOf("autoScale") != -1)
		 	chart.getYAxis().setAutoScale ( true);
		if(s.indexOf("noAutoScale") != -1)
		 	chart.getYAxis().setAutoScale ( false);
		if(s.indexOf("lineOn") != -1)
		 	chart.getYAxis().setLineVis ( true);
		if(s.indexOf("lineOff") != -1)
		 	chart.getYAxis().setLineVis ( false);
		if(s.indexOf("labelsOn") != -1)
		 	chart.getYAxis().setLabelVis ( true);
		if(s.indexOf("labelsOff") != -1)
		 	chart.getYAxis().setLabelVis ( false);
		if(s.indexOf("gridOn") != -1)
		 	chart.getYAxis().setGridVis ( true);
		if(s.indexOf("gridOff") != -1)
		 	chart.getYAxis().setGridVis ( false);
		if(s.indexOf("tickOn") != -1)
		 	chart.getYAxis().setMajTickVis ( true);
		if(s.indexOf("tickOff") != -1)
		 	chart.getYAxis().setMajTickVis ( false);
		if(s.indexOf("minTickOn") != -1)
		 	chart.getYAxis().setMinTickVis ( true);
		if(s.indexOf("minTickOff") != -1)
		 	chart.getYAxis().setMinTickVis ( false);
		if(s.indexOf("rightAxis") != -1)
		 	chart.getYAxis().setSide ( 3);
		if(s.indexOf("leftAxis") != -1)
		 	chart.getYAxis().setSide ( 1);
		if(s.indexOf("topAxis") != -1)
		 	chart.getYAxis().setSide ( 2);
		if(s.indexOf("bottomAxis") != -1)
		 	chart.getYAxis().setSide ( 0);
	 }
		 
	 protected void getXAxisOptions(String s) {
		if(s.indexOf("autoScale") != -1)
		 	chart.getXAxis().setAutoScale ( true);
		if(s.indexOf("noAutoScale") != -1)
		 	chart.getXAxis().setAutoScale ( false);
		if(s.indexOf("lineOn") != -1)
		 	chart.getXAxis().setLineVis ( true);
		if(s.indexOf("lineOff") != -1)
		 	chart.getXAxis().setLineVis ( false);
		if(s.indexOf("labelsOn") != -1)
		 	chart.getXAxis().setLabelVis ( true);
		if(s.indexOf("labelsOff") != -1)
		 	chart.getXAxis().setLabelVis ( false);
		if(s.indexOf("gridOn") != -1)
		 	chart.getXAxis().setGridVis ( true);
		if(s.indexOf("gridOff") != -1)
		 	chart.getXAxis().setGridVis ( false);
		if(s.indexOf("tickOn") != -1)
		 	chart.getXAxis().setMajTickVis ( true);
		if(s.indexOf("tickOff") != -1)
		 	chart.getXAxis().setMajTickVis ( false);
		if(s.indexOf("minTickOn") != -1)
		 	chart.getXAxis().setMinTickVis ( true);
		if(s.indexOf("minTickOff") != -1)
		 	chart.getXAxis().setMinTickVis ( false);
		if(s.indexOf("bottomAxis") != -1)
		 	chart.getXAxis().setSide ( 0);
		if(s.indexOf("topAxis") != -1)
		 	chart.getXAxis().setSide ( 2);
		if(s.indexOf("leftAxis") != -1)
		 	chart.getXAxis().setSide ( 1);
		if(s.indexOf("rightAxis") != -1)
		 	chart.getXAxis().setSide ( 3);
	 }
		 
	 protected void getXAxisLabels(String s) {
		String	axisLabels[];
		int i, j;
		int start, end;
		
		i = 0;
		j = 0;
		while(i != -1) {
		 	i = s.indexOf(delimiter, i+1);
		 	j++;
		}
		axisLabels = new String[j];
		
		start = 0;
		for(i=0;i<j-1;i++) {
		 	end = s.indexOf(delimiter, start);
		 	axisLabels[i] = s.substring(start, end);
		 	start = end + 1;
		}
		axisLabels[i] = s.substring(start);
		chart.getXAxis().addLabels(axisLabels);
	}
		 
	public void replaceDataLabels(int	whichSet,
					String []	labels){
		int 	i;
		Vector	myData;
		Datum	myDatum;

		myData = chart.getDatasets()[whichSet].getData();
		for(i=0;i<myData.size();i++){
			myDatum = (Datum)(myData.elementAt(i));
			try {
				myDatum.setLabel(labels[i]);
			}
			catch (ArrayIndexOutOfBoundsException e){}
		}
	}

	public void getMyDatasets(String s){
		/* doesn't do anything here... meant to be overloaded by 
		user function.  This function must perform create an x, y, y2
		array, and then call getDatasetParameter(setnumber,x,y,y2,y3)
		*/
	}

	public void drawMyStuff(Graphics g){
		/* draws dot & VE message... meant to be overloaded by 
		user function.  This method is called after drawing the chart
		*/
		if(home)
			return;
		g.setColor(Color.blue);
		g.fillRect(this.size().width - 20, this.size().height - 20, 5, 5);
	}


	public void getMyOptions() {
		getAxisOptions();
	}

	void doVEMessage() {
		if(messageFrame == null) {
			messageFrame = new MessageFrame();
			messageFrame.setAppletContext(getAppletContext());
		}
		messageFrame.show();		
	}

	public boolean mouseDown(Event e, int x, int y){
		if(!home)
			doVEMessage();
		return true;
	}

	private void doDwellLabel(){
		Vector	list;
		Point	pickpt;
		
		if((dwellLabelVisible)||(!useDwellLabel))
			return;
		pickpt = new Point (popupX, popupY);
		displayList.removeAllElements();
		if (chart.getDisplayList().contains(pickpt,displayList)){
			displayInfo(displayList);
		}
	}

	public boolean handleEvent(Event e){
		if(e.id == Event.MOUSE_DOWN){
			mouseDown(e, 0, 0);
			return true;
		}
		if(showDataPopup == true){
			showDataPopup = false;
			repaint();
			return true;
		}
		popupX = e.x;
		popupY = e.y;
		return false;
	}

	private void displayInfo(Vector list){
		for(int j=0;j<list.size();j++){
			Object myObj = list.elementAt(j); 
			if(myObj instanceof Datum){
				dwellLabelXString = getDwellLabelXString((Datum)myObj);
				dwellLabelYString = getDwellLabelYString((Datum)myObj);
				dwellLabelLabelString = getDwellLabelLabelString((Datum)myObj);
				showDataPopup = true;
				repaint();
				return;
			}
		}
	}

	protected String getDwellLabelXString(Datum d){
		String s = Double.toString(d.getX());
		int where = dwellXString.indexOf("#");
		return dwellXString.substring(0,where) +
			Gc.formattedLabel(s, dwellLabelFormat, dwellLabelPrecision)
			+ dwellXString.substring(where + 1);
	}

	protected String getDwellLabelYString(Datum d){
		String s = Double.toString(d.getY());
		int where = dwellYString.indexOf("#");
		return dwellYString.substring(0,where) +
			Gc.formattedLabel(s, dwellLabelFormat, dwellLabelPrecision)
			+ dwellYString.substring(where + 1);
	}

	protected String getDwellLabelLabelString(Datum d){
		String s = d.getLabel();
		return s;
	}

	protected void drawDataPopup(Graphics g){
		FontMetrics fm = g.getFontMetrics();
		int width1;
		if(dwellLabelLabelString == null)
			width1 = 0;
		else
			width1 = fm.stringWidth(dwellLabelLabelString) + 6;
		int width2;
		if(dwellUseXValue)
			width2 = fm.stringWidth(dwellLabelXString) + 6;
		else
			width2 = 0;
		int width3;
		if(dwellUseYValue)
			width3= fm.stringWidth(dwellLabelYString) + 6;
		else
			width3 = 0;
		int width;
		if(width1 > width2)
			width = width1;
		else
			width = width2;
		if(width3 > width)
			width = width3;
		int lineHeight = fm.getHeight() + 4;
		int overallHeight = 4;
		if(dwellUseXValue)
			overallHeight += lineHeight;
		if(dwellUseYValue)
			overallHeight += lineHeight;
		if(dwellUseString)
			overallHeight += lineHeight;
		if((popupX + width) > getSize().width)
			popupX = getSize().width - width - 10;
		popupY = popupY - overallHeight; //shift up away from cursor
		if(popupY < 0 )
			popupY = 0;

		g.setColor(Color.white);
		g.fillRect(popupX, popupY, width, overallHeight);
		g.setColor(Color.black);
		g.drawRect(popupX, popupY, width, overallHeight);

		int h = lineHeight;
		if((dwellUseString)&&(dwellLabelLabelString!=null)){
			g.drawString(dwellLabelLabelString, popupX + 3, popupY + h);
			h += lineHeight;
		}
		if(dwellUseXValue){
			g.drawString(dwellLabelXString, popupX + 3, popupY + h);
			h += lineHeight;
		}
		if(dwellUseYValue)
			g.drawString(dwellLabelYString, popupX + 3, popupY + h);
		popupY = popupY + overallHeight; //shift back down to be at original event location
	}

	Vector displayList = new Vector();
	boolean showDataPopup = false;
	boolean dwellLabelVisible = false;
	int popupX = 0;
	int popupY = 0;
	String dwellLabelXString, dwellLabelYString, dwellLabelLabelString;

}
