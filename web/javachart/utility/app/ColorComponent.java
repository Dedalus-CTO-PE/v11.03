package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class ColorComponent extends java.awt.Panel {

	Label		labelL;
	Choice		menu;

  	public ColorComponent (String 	label,
				Color	start){

    		super();
    		setLayout(new FlowLayout(FlowLayout.LEFT));
		add(new Label(label));
		menu = new Choice();
		menu.addItem("black");
		menu.addItem("white");
		menu.addItem("red");
		menu.addItem("pink");
		menu.addItem("orange");
		menu.addItem("yellow");
		menu.addItem("green");
		menu.addItem("magenta");
		menu.addItem("cyan");
		menu.addItem("blue");
		menu.addItem("light gray");
		menu.addItem("gray");
		menu.addItem("dark gray");
		menu.select(colorToString(start));
		add(menu);
	}

	public Color getValue(){
		return stringToColor(menu.getSelectedItem());
	}

	public void setValue(Color c){
		menu.select(colorToString(c));
	}

	public boolean action (Event e, Object o) { //defer action until OK
		return true;
	}

	String colorToString(Color c){
		if (c == Color.black) return "black";
		if (c == Color.white) return "white";
		if (c == Color.red) return "red";
		if (c == Color.pink) return "pink";
		if (c == Color.orange) return "orange";
		if (c == Color.yellow) return "yellow";
		if (c == Color.green) return "green";
		if (c == Color.magenta) return "magenta";
		if (c == Color.cyan) return "cyan";
		if (c == Color.blue) return "blue";
		if (c == Color.lightGray) return "light gray";
		if (c == Color.gray) return "gray";
		return "dark gray";
	}

	Color stringToColor(String s){
		if (s == "black") return Color.black;
		if (s == "white") return Color.white;
		if (s == "red") return Color.red;
		if (s == "pink") return Color.pink;
		if (s == "orange") return Color.orange;
		if (s == "yellow") return Color.yellow;
		if (s == "green") return Color.green;
		if (s == "magenta") return Color.magenta;
		if (s == "cyan") return Color.cyan;
		if (s == "blue") return Color.blue;
		if (s == "light gray") return Color.lightGray;
		if (s == "gray") return Color.gray;
		return Color.darkGray;
	}
}
