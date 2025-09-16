package javachart.beans.data;

import java.net.*;
import java.io.*;
import java.util.*;

public class DateDataFeed extends RowColumnDataFeed {

	public DateDataFeed(){
		setURL("http://www.ve.com/data/dateDummy.dat");
		setLabelsOnRows(false);
	}

	protected double doubleFromString(String s){
		try{
			return Double.valueOf(s.trim()).doubleValue();
		}
		catch(NumberFormatException e){
			return Date.parse(s);
		}
	}
}
