package javachart.beans.data;

public class DataFeedSimulator extends SimpleDataFeed implements Runnable {

	public DataFeedSimulator(){
		start();
	}

	public void start(){
		if (myThread==null){
			myThread = new Thread(this);
		}
		if(myThread.isAlive())
			return;
		myThread.start();
		System.out.println("Starting...");
	}

	public void stop(){
		if (myThread!=null){
			myThread.stop();
			System.out.println("Stopping...");
			myThread = null;
		}
	}

	public void run(){
		while(true){
			try{
				myThread.sleep(interval*1000);
			}
			catch(InterruptedException e){
				System.out.println("Simple data feed interrupted!");
			}
			updateDataArrays();
			fireEvent();
		}
	}

	public void setInterval(int seconds){
		interval = seconds;
		updateDataArrays();
		fireEvent();
	}
	public int getInterval(){
		return interval;
	}
	public int getNumberOfPoints(){
		return numberOfPoints;
	}
	public void setNumberOfPoints(int i){
		numberOfPoints = i;
		updateDataArrays();
		fireEvent();
	}
	public int getNumberOfSets(){
		return numberOfSets;
	}
	public void setNumberOfSets(int i){
		if(i>40)
			return;
		numberOfSets = i;
		updateDataArrays();
		fireEvent();
	}
	public float getScaleFactor(){
		return scaleFactor;
	}
	public void setScaleFactor(float f){
		scaleFactor = f;
		updateDataArrays();
		fireEvent();
	}

	public void update(){
		updateDataArrays();
		super.update();
	}

	//stuff some random numbers into the data arrays
	protected void updateDataArrays(){
		int i, j;

		if((xArray == null)||(xArray.length != numberOfSets))
			xArray = new double[numberOfSets][];
		if((yArray == null)||(yArray.length != numberOfSets))
			yArray = new double[numberOfSets][];
		if((labelArray == null)||(labelArray.length != numberOfSets))
			labelArray = new String[numberOfSets][];

		for(i=0;i<numberOfSets;i++){
			if((xArray[i] == null)||(xArray[i].length != numberOfPoints))
				xArray[i] = new double[numberOfPoints];
			if((yArray[i] == null)||(yArray[i].length != numberOfPoints))
				yArray[i] = new double[numberOfPoints];
			if((labelArray[i] == null)||(labelArray[i].length != numberOfPoints))
				labelArray[i] = new String[numberOfPoints];
			
		}

		for(i=0;i<numberOfSets;i++){
			for(j=0;j<numberOfPoints;j++){
				xArray[i][j] = (double) j;
				yArray[i][j] = Math.random() * scaleFactor;
				labelArray[i][j] = myLabels[j%26];
			}
		}

		//put the information into myDatasets
		updateDatasets();
	}

	private	int	interval = 5;
	private transient Thread myThread = null;
	private	int numberOfPoints = 3;
	private	int numberOfSets = 1;
	private float scaleFactor = 1.f;
	private String[] myLabels = {
				"A",
				"B",
				"C",
				"D",
				"E",
				"F",
				"G",
				"H",
				"I",
				"J",
				"K",
				"L",
				"M",
				"N",
				"O",
				"P",
				"Q",
				"R",
				"S",
				"T",
				"U",
				"V",
				"W",
				"X",
				"Y",
				"X" };
}
