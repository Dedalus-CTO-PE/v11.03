package javachart.utility.app;

import java.awt.*;
import javachart.chart.*;

class OacComponent extends java.awt.Panel {

	Button		okBut, applyBut, cancelBut;
	int		status;

  	public OacComponent (){

		add(okBut = new Button("OK"));
		add(applyBut = new Button("Apply"));
		add(cancelBut = new Button("Cancel"));
		status = -1;
	}

	public boolean action(Event e, Object o){
		if(e.target instanceof Button){
                        if(e.target.equals(okBut))
                                status = 0;
                        if(e.target.equals(applyBut))
                                status = 1;
                        if(e.target.equals(cancelBut))
                                status = 2;
                }
                return false;
	}
}
