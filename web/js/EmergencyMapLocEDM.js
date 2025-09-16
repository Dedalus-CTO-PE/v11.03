//jsVersion  : V11.03.00
//------------------------------------------------------------
//  Site Code Based Map Location - MidCentral DHB
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

 document.styleSheets[document.styleSheets.length-1].addRule(".LocationStyle",
 "background-color:#FEF1E9;");
 
 	// key to location cell setup:
	// obj.AddLocation(room-desc, room-code, x1, y1, x2, y2, x1, y1, cryptic-param-08)
	// where w = (x2-x1)px; h = (y2-y1)px; single cell: w = 199px, h = 67px
	// and cryptic-param-08: 
	//	* omitted = one patient permitted so user prompted to swap patients if room is occupied
	//	* "WAIT" = room is a waiting room
	//	* "OTH" = room is other type allowing multiple patients 
	//  * "HIDE" = hide room on map view
	// and room-style = name of css class (defined in EmergencyMapTAS.css) to apply to location cell	
 
	// column 1
	obj.AddLocation("Resus/high acuity 03","R3m",5,35,215,180,5,35,"","ResusEDM");
	obj.AddLocation("Resus/high acuity 02","R2m",5,181,426,252,5,181,"","ResusEDM");
	obj.AddLocation("Resus/high acuity 01","R1m",5,253,426,325,5,253,"","ResusEDM");
	obj.AddLocation("AJ Assessment 10","AJm",5,326,426,399,5,326,"","StandardRoomEDM");
	obj.AddLocation("Ambulance Bay 1","A1m",5,400,426,472,5,400,"","ResusEDM");	
	obj.AddLocation("Ambulance Bay 2","A2m",5,473,426,545,5,473,"","ResusEDM");
	obj.AddLocation("Ambulance Bay 3","A3m",5,546,426,618,5,546,"","ResusEDM");
	obj.AddLocation("Observation 01","E1m",5,619,215,691,5,619,"","ClinicalDecisionEDM");
	obj.AddLocation("Observation 02","E2m",5,692,215,764,5,692,"","ClinicalDecisionEDM");
	obj.AddLocation("Observation 03","E3m",5,765,215,837,5,765,"","ClinicalDecisionEDM");	
	
	// column 2
	obj.AddLocation("Resus/high acuity 04","R4m",216,35,426,180,216,35,"","ResusEDM");
	obj.AddLocation("Observation 04","E4m",216,619,426,691,216,619,"","ClinicalDecisionEDM");
	obj.AddLocation("Observation 05","E5m",216,692,426,764,216,692,"","ClinicalDecisionEDM");
	obj.AddLocation("Observation 06","E6m",216,765,426,837,216,765,"","ClinicalDecisionEDM");		
	
	// column 3
	obj.AddLocation("Resus/high acuity 05","R5m",427,35,637,180,427,35,"","ResusEDM");
	obj.AddLocation("Observation 07","E7m",427,692,637,764,427,692,"","ClinicalDecisionEDM");
	obj.AddLocation("Observation 08","E8m",427,765,637,837,427,765,"","ClinicalDecisionEDM");	

	// column 4
	obj.AddLocation("Resus/high acuity 06","R6m",638,35,848,180,638,35,"","ResusEDM");
	obj.AddLocation("AI Assessment 09","AIm",638,546,848,691,638,546,"","StandardRoomEDM");
	obj.AddLocation("AH Assessment 08","AHm",638,692,848,837,638,692,"","StandardRoomEDM");
	
	// column 5
	obj.AddLocation("AA Assessment 01","AAm",849,35,1059,180,849,35,"","StandardRoomEDM");
	obj.AddLocation("AB Assessment 02","ABm",849,181,1059,325,849,181,"","StandardRoomEDM");
	obj.AddLocation("AC Assessment 03","ACm",849,326,1059,472,849,326,"","StandardRoomEDM");
	obj.AddLocation("AD Assessment 04","ADm",849,473,1059,618,849,473,"","StandardRoomEDM");
	obj.AddLocation("AE Assessment 05","AEm",849,619,1270,691,849,619,"","StandardRoomEDM");
	obj.AddLocation("AF Assessment 06","AFm",849,692,1270,764,849,692,"","StandardRoomEDM");
	obj.AddLocation("AG Assessment 07","AGm",849,765,1270,837,849,765,"","StandardRoomEDM");
	
	// column 6
	obj.AddLocation("Corridor 01","O1m",1060,35,1270,107,1060,35,"","OverflowEDM");
	obj.AddLocation("Corridor 02","O2m",1060,108,1270,180,1060,108,"","OverflowEDM");
	obj.AddLocation("Corridor 03","O3m",1060,181,1270,252,1060,181,"","OverflowEDM");
	obj.AddLocation("Corridor 04","O4m",1060,253,1270,325,1060,253,"","OverflowEDM");
	obj.AddLocation("Corridor 05","O5m",1060,326,1270,399,1060,326,"","OverflowEDM");
	obj.AddLocation("Corridor 06","O6m",1060,400,1270,472,1060,400,"","OverflowEDM");
	obj.AddLocation("Corridor 07","O7m",1060,473,1270,545,1060,473,"","OverflowEDM");
	obj.AddLocation("Corridor 08","O8m",1060,546,1270,618,1060,546,"","OverflowEDM");

	
	// column 7
	obj.AddLocation("C1 Minor 01","C1m",1271,35,1481,107,1271,35,"","StandardRoomEDM");
	obj.AddLocation("C2 Minor 02","C2m",1271,108,1481,180,1271,108,"","StandardRoomEDM");
	obj.AddLocation("C3 Minor 03","C3m",1271,181,1481,252,1271,181,"","StandardRoomEDM");
	obj.AddLocation("Suture A","SAm",1271,253,1481,399,1271,253,"","StandardRoomEDM");
	obj.AddLocation("Suture B","SBm",1271,400,1481,545,1271,400,"","StandardRoomEDM");
	obj.AddLocation("Eye/ENT","EYm",1271,546,1481,691,1271,546,"","StandardRoomEDM");
	
	// column 8
	obj.AddLocation("Waiting Room1","W1m",1482,35,2111,472,1482,35,"WAIT","WaitingRoomEDM"); 
	obj.AddLocation("Sub-wait","W2m",1482,473,2111,910,1482,473,"WAIT","WaitingRoomEDM");	
	
}
