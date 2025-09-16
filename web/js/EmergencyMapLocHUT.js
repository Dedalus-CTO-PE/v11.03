//jsVersion  : V11.03.00
//------------------------------------------------------------
//  Site Code Based Map Location
//
//  AddLocation(Description, Code, left, top, right, botton, Start Position Left, Top);
//
//------------------------------------------------------------
var immediate = 0;
var emergency = 0;
var urgent = 20;
var semi = 50;
var non = 110;
var ShowLocationAreas=true;
var ShowPatients=true;
var PatientCellHeight=65;
var PatientCellWidth=200;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;

function SetLocations() {

 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle", "background-color:#FEF1E9;");

 obj.AddLocation("ISO           ","ISO",5,35,204,101,5,35);
 obj.AddLocation("MO1           ","MO1",5,102,204,168,5,102);
 obj.AddLocation("AMB           ","AMB",5,169,204,302,5,169,"AMB");
 obj.AddLocation("T10           ","T10",5,303,204,371,5,303);
 obj.AddLocation("CON           ","CON",5,372,204,438,5,372);
 obj.AddLocation("P3            ","P3 ",5,439,204,505,5,439);
 obj.AddLocation("OB1           ","OB1",5,506,204,572,5,506);
 obj.AddLocation("Waiting Room  ","WWR",5,573,604,703,5,573,"WAIT");

 obj.AddLocation("PRO           ","PRO",205,35,404,101,205,35);
 obj.AddLocation("MO2           ","MO2",205,102,404,168,205,102);
 obj.AddLocation("WHA           ","WHA",205,169,404,235,205,169);
 obj.AddLocation("CO1           ","CO1",205,236,404,302,205,236);
 obj.AddLocation("TR9           ","TR9",205,303,404,371,205,303);
 obj.AddLocation("CO4           ","CO4",205,372,404,438,205,372);
 obj.AddLocation("P2            ","P2 ",205,439,404,505,205,439);
 obj.AddLocation("OB2           ","OB2",205,506,404,572,205,506);

 obj.AddLocation("RC1           ","RC1",405,35,604,101,405,35);
 obj.AddLocation("MO3           ","MO3",405,102,604,168,405,102);
 obj.AddLocation("TR1           ","TR1",405,169,604,235,405,169);
 obj.AddLocation("CO2           ","CO2",405,236,604,302,405,236);
 obj.AddLocation("TR5           ","TR5",405,303,604,371,405,303);
 obj.AddLocation("CO5           ","CO5",405,372,604,438,405,372);
 obj.AddLocation("P1            ","P1 ",405,439,604,505,405,439);
 obj.AddLocation("OB3           ","OB3",405,506,604,572,405,506);

 obj.AddLocation("RC2           ","RC2",605,35,804,101,605,35);
 obj.AddLocation("MO4           ","MO4",605,102,804,168,605,102);
 obj.AddLocation("TR2           ","TR2",605,169,804,235,605,169);
 obj.AddLocation("CO3           ","CO3",605,236,804,302,605,236);
 obj.AddLocation("TR6           ","TR6",605,303,804,371,605,303);
 obj.AddLocation("CO6           ","CO6",605,372,804,438,605,372);
 obj.AddLocation("TR8           ","TR8",605,439,804,505,605,439);
 obj.AddLocation("OB4           ","OB4",605,506,804,572,605,506);
 obj.AddLocation("TCA           ","TCA",605,573,804,703,605,573);

 obj.AddLocation("RC3           ","RC3",805,35,1004,101,805,35);
 obj.AddLocation("MO5           ","MO5",805,102,1004,168,805,102);
 obj.AddLocation("TR3           ","TR3",805,169,1004,235,805,169);
 obj.AddLocation("TR4           ","TR4",805,236,1004,302,805,236);
 obj.AddLocation("XRA           ","XRA",805,303,1004,371,805,303,"OTHER");
 obj.AddLocation("INT           ","INT",805,372,1004,438,805,372);
 obj.AddLocation("TR7           ","TR7",805,439,1004,505,805,439);
 obj.AddLocation("OB5           ","OB5",805,506,1004,572,805,506);
 obj.AddLocation("Other         ","00",805,573,1004,703,805,573,"OTHER");

}
