//jsVersion  : V11.03.00
//------------------------------------------------------------
//  Site Code Based Map Location - Whanganui DHB
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
	obj.AddLocation("Resus Rm 1   ","R1w",5,35,215,107,5,35,"","StandardRoomEDW");
	obj.AddLocation("Overflow - Trolley","C1w",5,108,215,180,5,108,"", "OverflowEDW");
	obj.AddLocation("Whanau room","WHw",5,181,426,326,5,181,"","StandardRoomEDW");
	obj.AddLocation("ED Cubicle 12","12w",5,327,215,399,5,327,"","StandardRoomEDW");
	obj.AddLocation("Proc Rm Cub 14","14w",5,400,215,472,5,400,"","StandardRoomEDW");
	obj.AddLocation("Iso Rm Cub 15","15w",5,473,215,545,5,473,"","StandardRoomEDW");	
	obj.AddLocation("AAU Cubicle 1","A1w",5,546,215,618,5,546,"","AAUBedEDW");
	obj.AddLocation("AAU Cubicle 2","A2w",5,619,215,691,5,619,"","AAUBedEDW");
	obj.AddLocation("AAU Cubicle 3","A3w",5,692,215,764,5,692,"","AAUBedEDW");
	obj.AddLocation("AAU Cubicle 4A","A4w",5,765,215,837,5,765,"","AAUBedEDW");	
	
	// column 2
	obj.AddLocation("Resus Rm 2   ","R2w",216,35,426,107,216,35,"","StandardRoomEDW");	
	obj.AddLocation("Overflow - Trolley","C7w",216,546,426,618,216,546,"", "OverflowEDW");	
	obj.AddLocation("ED Cubicle 11","11w",216,619,426,691,216,619,"","StandardRoomEDW");
	obj.AddLocation("Child Rm (bed)","16w",216,692,637,764,216,692,"","StandardRoomEDW");	
	obj.AddLocation("AAU Cubicle 4B","A5w",216,765,426,837,216,765,"","AAUBedEDW");
	
	// column 3
	obj.AddLocation("ED Cubicle 3 ","03w",427,35,637,107,427,35,"","StandardRoomEDW");
	obj.AddLocation("Overflow - Trolley","C8w",427,546,637,618,427,546,"", "OverflowEDW");
	obj.AddLocation("ED Cubicle 10","10w",427,619,637,691,427,619,"","StandardRoomEDW");
	obj.AddLocation("AAU Cubicle 5A","A6w",427,765,637,837,427,765,"","AAUBedEDW");
	
	// column 4
	obj.AddLocation("ED Cubicle 4 ","04w",638,35,848,107,638,35,"","StandardRoomEDW");
	obj.AddLocation("Overflow - Trolley","C2w",638,108,848,180,638,108,"", "OverflowEDW");
	obj.AddLocation("Overflow - Trolley","C4w",638,546,848,618,638,546,"", "OverflowEDW");
	obj.AddLocation("Low Stim Cub 9","09w",638,619,848,691,638,619,"","StandardRoomEDW");
	obj.AddLocation("AAU Cubicle 5B","A7w",638,765,848,837,638,765,"","AAUBedEDW");
	
	// column 5
	obj.AddLocation("ED Cubicle 5 ","05w",849,35,1059,107,849,35,"","StandardRoomEDW");
	obj.AddLocation("Overflow - Trolley","C3w",849,108,1059,180,849,108,"", "OverflowEDW");
	obj.AddLocation("X-Ray  ","XRw",849,181,1270,253,849,181,"","OutOfDeptEDW");
	obj.AddLocation("Radiology","RDw",849,254,1270,326,849,254,"","OutOfDeptEDW");	
	obj.AddLocation("On leave room","OLw",849,327,1270,399,849,327,"","OutOfDeptEDW");
	obj.AddLocation("Miscellaneous room","MSw",849,400,1270,472,849,400,"","OutOfDeptEDW");	
	obj.AddLocation("Triage room 1","T1w",849,473,1059,545,849,473,"","TriageRoomEDW");
	obj.AddLocation("Overflow - Trolley","C5w",849,546,1059,618,849,546,"", "OverflowEDW");
	obj.AddLocation("ED Cubicle 8 ","08w",849,619,1059,691,849,619,"","StandardRoomEDW");
	
	// column 6
	obj.AddLocation("Eye-Cubicle 6","06w",1060,35,1270,107,1060,35,"","StandardRoomEDW");
	obj.AddLocation("Triage room 2","T2w",1060,473,1270,545,1060,473,"","TriageRoomEDW");
	obj.AddLocation("Overflow - Trolley","C6w",1060,546,1270,618,1060,546,"", "OverflowEDW");
	obj.AddLocation("ED Cubicle 7 ","07w",1060,619,1270,691,1060,619,"","StandardRoomEDW");
	
	// column 7
	obj.AddLocation("Wait Rm 1","W1w",1271,35,1901,472,1271,35,"WAIT","WaitingRoomEDW"); 
	obj.AddLocation("Wait Rm 2 Treat","W2w",1271,473,1901,837,1271,473,"WAIT","WaitingRoomEDW");
}
