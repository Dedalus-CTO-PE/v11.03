//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.08.01 27.10.2016 Ebon Clements TSK 0320084
//                      Added admittingDoctorSection display
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
function PopulateFields() {
//
// Show Expected Ward/Unit information if present
//
  el=document.getElementById("triageSection")
  if (isWhitespace(document.getElementById("triageValue").value)) el.style.display='none';
  el=document.getElementById("doctorSection")
  if (isWhitespace(document.getElementById("doctorValue").value)) el.style.display='none';
  el=document.getElementById("expectedUnit")
  if (isWhitespace(document.getElementById("unitValue").value)) el.style.display='none';
  if (!isWhitespace(document.getElementById("admtDrValue").value)) {
       el=document.getElementById("admittingDoctorSection")
       el.style.display='';
     }
//
// Format Past Medical History
//
  MedNoteLine=document.getElementById("medNoteLine").value
  NoteArray=MedNoteLine.split("|");
  NewNotes=NoteArray[0]
  noHistory=true;
  for (var j=1; j < NoteArray.length; j++) {
    if (!isWhitespace(NoteArray[j])) {
      NewNotes=NewNotes+"<br/>"+NoteArray[j];
      noHistory=false;
    } }
  el=document.getElementById("pastMedicalSection")
  if (noHistory) {
    el.style.display="none";
  }
  else {
    document.getElementById("pastMedicalHistory").innerHTML=NewNotes;
  }
//
// Format Prsenting Complaint
//
  el=document.getElementById("presentingComp")
  el.innerHTML=document.getElementById("prescom0").value;
  pc1=document.getElementById("prescom1").value;
  pc2=document.getElementById("prescom2").value;
  pc3=document.getElementById("prescom3").value;
  pc4=document.getElementById("prescom4").value;
  pc5=document.getElementById("prescom5").value;
  pc6=document.getElementById("prescom6").value;
  if (!isWhitespace(pc1)) el.innerHTML+="<span class=presentText>"+pc1+"</span>";
  if (!isWhitespace(pc2)) el.innerHTML+="<span class=presentText>"+pc2+"</span>";
  if (!isWhitespace(pc3)) el.innerHTML+="<span class=presentText>"+pc3+"</span>";
  if (!isWhitespace(pc4)) el.innerHTML+="<span class=presentText>"+pc4+"</span>";
  if (!isWhitespace(pc5)) el.innerHTML+="<span class=presentText>"+pc5+"</span>";
  if (!isWhitespace(pc6)) el.innerHTML+="<span class=presentText>"+pc6+"</span>";
  el=document.getElementById("clinicalResults")
  theURL="cliweb10.pbl?reportno=6&template=2"+
         "&urnumber="+ document.getElementById("urnumber").value.replace(/ /g,"+")+
	 "&admissno="+ document.getElementById("admissno").value.replace(/ /g,"+")
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    el.innerHTML=xmlHttp.responseText;
  }
}
