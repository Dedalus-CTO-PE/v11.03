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

 // column 1
 obj.AddLocation("Isolation Room","ISO",5,35,204,168,5,35);
 obj.AddLocation("Room H01      ","H01",5,169,204,302,5,169);
 obj.AddLocation("Room H02      ","H02",5,303,204,436,5,303);
 obj.AddLocation("Room HDS      ","HDS",5,437,204,570,5,437);
 obj.AddLocation("Waiting Room  ","WR ",5,571,1204,771,5,571,"WAIT");
 
 // column 2
 obj.AddLocation("RC1           ","RC1",205,35,404,168,205,35);
 obj.AddLocation("RC2           ","RC2",205,169,404,302,205,169);
 obj.AddLocation("RC3           ","RC3",205,303,404,436,205,303);
 obj.AddLocation("RC4           ","RC4",205,437,404,570,205,437);
 
 // column 3
 obj.AddLocation("HR4           ","HR4",405,35,604,168,405,35);
 obj.AddLocation("HR5           ","HR5",405,169,604,302,405,169);
 obj.AddLocation("HR6           ","HR6",405,303,604,436,405,303);
 obj.AddLocation("HRS           ","HRS",405,437,604,570,405,437);

 // column 4
 obj.AddLocation("HPR           ","HPR",605,35,804,168,605,35);
 obj.AddLocation("HTR           ","HTR",605,169,804,302,605,169);
 
}
