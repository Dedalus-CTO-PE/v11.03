//------------------------------------------------------------
//  Site Code Based Map Location
//
//  AddLocation(Description, Code, left, top, right, botton, Start Position Left, Top);
//
//------------------------------------------------------------

var ShowLocationAreas=true;
var ShowPatients=true;
var PatientCellHeight=65;
var PatientCellWidth=200;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var immediate = 0
var emergency = 0
var urgent = 20
var semi = 50
var non = 110

function SetLocations() {

 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle", "background-color:#E0FFFF;");
 document.styleSheets[document.styleSheets.length-1].addRule("#ImageLocation", "background-color:#E9FFFF;");

 obj.AddLocation("RM6           ","RM6",5,35,204,101,5,35);
 obj.AddLocation("RM2           ","RM2",5,169,204,235,5,169);
 obj.AddLocation("RM1           ","RM1",5,236,204,301,5,236);
 obj.AddLocation("Waiting Room  ","WR ",5,573,604,703,5,573,"WAIT");
 obj.AddLocation("RM3           ","RM3",205,102,404,168,205,102);
 obj.AddLocation("RM7           ","RM7",405,35,604,101,405,35);
 obj.AddLocation("RM4           ","RM4",405,102,604,168,405,102);
 obj.AddLocation("RM8           ","RM8",605,35,804,101,605,35);
 obj.AddLocation("RM5           ","RM5",605,102,804,168,605,102);
 obj.AddLocation("WCA           ","WCA",605,573,804,705,605,573,"WCA");
 obj.AddLocation("RM9           ","RM9",805,102,1004,168,805,102);
 obj.AddLocation("R10           ","R10",805,169,1004,235,805,169);
 obj.AddLocation("R11           ","R11",805,236,1004,302,805,236);
 obj.AddLocation("R12           ","R12",805,303,1004,371,805,303);
 obj.AddLocation("R14           ","R14",805,372,1004,438,805,372);
 obj.AddLocation("R15           ","R15",805,439,1004,505,805,439);
 obj.AddLocation("OTR           ","OTR",805,573,1004,705,805,573,"OTR");

}
