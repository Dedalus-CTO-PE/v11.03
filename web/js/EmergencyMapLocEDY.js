//jsVersion  : V11.03.00
//------------------------------------------------------------
//  Site Code Based Map Location - Wairarapa DHB
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

	// key to location cell setup:
	// obj.AddLocation(room-desc, room-code, x1, y1, x2, y2, x1, y1, cryptic-param-08, room-style)
	// where w = (x2-x1)px; h = (y2-y1)px; single cell: w = 199px, h = 67px
	// and cryptic-param-08: 
	//	* omitted = one patient permitted so user prompted to swap patients if room is occupied
	//	* "WAIT" = room is a waiting room
	//	* "OTH" = room is other type allowing multiple patients 
	//  * "HIDE" = hide room on map view
	// and room-style = name of css class (defined in EmergencyMapTAS.css) to apply to location cell
 
 	// column 1
	obj.AddLocation("Cubicle 6","C6y",5,35,215,107,5,35,"","ClinicalDecisionEDM");
	obj.AddLocation("Resus 1","R1y",5,108,215,180,5,108,"","ResusEDW");
	obj.AddLocation("Resus 2","R2y",5,181,215,253,5,181,"", "ResusEDW");
	obj.AddLocation("AAU 1","A1y",5,546,215,619,5,546,"", "AAUBedEDW");
	
	// column 2
	obj.AddLocation("Cubicle 5","C5y",216,35,426,107,216,35,"","ClinicalDecisionEDM");	
	obj.AddLocation("AAU 2","A2y",216,546,426,619,216,546,"", "AAUBedEDW");	
	
	// column 3
	obj.AddLocation("Cubicle 4","C4y",427,35,637,107,427,35,"","ClinicalDecisionEDM");
	obj.AddLocation("AAU 3","A3y",427,546,637,619,427,546,"", "AAUBedEDW");
	
	// column 4
	obj.AddLocation("Cubicle 3","C3y",638,35,848,107,638,35,"","ClinicalDecisionEDM");
	obj.AddLocation("AAU 4","A4y",638,546,848,619,638,546,"", "AAUBedEDW");
	
	// column 5
	obj.AddLocation("Cubicle 2","C2y",849,35,1059,107,849,35,"","ClinicalDecisionEDM");
	obj.AddLocation("AAU 5","A5y",849,546,1059,619,849,546,"","AAUBedEDW");
	
	// column 6
	obj.AddLocation("Cubicle 1","C1y",1060,35,1270,107,1060,35,"","ClinicalDecisionEDM");
	obj.AddLocation("Triage Room","TRy",1060,108,1270,180,1060,108,"","TriageRoomEDW");
	obj.AddLocation("Radiology","RDy",1060,181,1270,253,1060,181,"OTH","OutOfDeptEDW");
	obj.AddLocation("Treatment Room","T1y",1060,254,1270,326,1060,254,"","StandardRoomEDW");
	obj.AddLocation("Isolation/Gynae Room","IGy",1060,327,1270,399,1060,327,"","StandardRoomEDW");
	obj.AddLocation("Plaster Room","PRy",1060,400,1270,473,1060,400,"","StandardRoomEDW");
	obj.AddLocation("AAU 6","A6y",1060,546,1270,619,1060,546,"","AAUBedEDW");
	
	// column 7
	obj.AddLocation("Waiting Room","WRy",1271,35,1481,473,1271,35,"WAIT","WaitingRoomEDW");
	
}
