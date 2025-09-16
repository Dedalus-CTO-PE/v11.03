//jsVersion  : V11.03.00
//========================================================================
// Program   : DischargeSummary.js
//
// Function  : Print Discharge Summary
//
// Version   :
//
// V9.11.00  24/02/2009  Ebon Clements CAR 171162
//           Added print() to PrintSummary()
//========================================================================
function PreviewSummary() {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  NewWindow.document.open()
  NewWindow.document.write(DischargeDocument())
  NewWindow.document.close();
}
function PrintSummary() {
  if(validateMandatory(UpdateForm)) {
  NewWindow=window.open("","NewWindow",
  "top=1100,width=700,height=40,location=no,toolbar=yes,scrollbars=yes")
  UpdateForm.htmlline.value=DischargeDocument()
  NewWindow.document.open()
  NewWindow.document.write(UpdateForm.htmlline.value)
  NewWindow.print();
  NewWindow.document.close();
  NewWindow.close();
  AddWindow=window.open("","AddWindow",
  "top=1024,width=10,height=10,location=no,toolbar=no,scrollbars=no")
  UpdateForm.target="AddWindow"
  UpdateForm.submit()
  }
}
function TextArea(DataValue) {
ReturnString=""
for (i=0;i<DataValue.length;i++) {
 ReturnString+=DataValue.substr(i,80)+"\n"; i=i+79 }
return ReturnString
}
function DischargeDocument() {
  DocumentHTML="<title>Discharge Summary Notification</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; }\n" +
"td { font-size:10pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-weight:bold; }\n" +
"</style>\n" +
"<body><table align=center width=640>\n" +
"<tr><td rowspan=2 width=150>\n" +
"    <img height=50 src=../images/logo.gif>" +
"</td>\n" +
"    <td valign=bottom>   \n" +
"    <b><font size=+2>" + Patient.Hospital.value +"\n" +
"    </td>\n" +
"    <td rowspan=2 width=150>"+Patient.HospitalAdd1.value + "\n"+
"<br>"+Patient.HospitalAdd2.value+"," + 
       Patient.HospitalAdd3.value + " " +
Patient.HospitalPostCode.value+"<br>\n" +
"    Ph: "+Patient.HospitalPhone.value + "</td></tr>\n" +
"<tr><td><font size=+2>Discharge Summary</font></td></tr>\n" +
"</table><p>\n" +
"<table align=center border=0 cellspacing=0 cellpadding=1 width=640>\n" +
"<tr><td colspan=4 bgcolor=#cccccc>\n" +
"    <b>Patient Details</td></tr>\n" +
"<tr><td>Name:</td><td>" + Patient.Title.value + "\n " +
     Patient.Given.value + " " + Patient.Surname.value + "</td>\n" +
"    <td>Date of Birth</td><td>"+ Patient.DOB.value + "</td></tr>\n" +
"<tr valign=top><td>Address</td>\n" +
"    <td>" + Patient.Address1.value + "</td>\n" +
"    <td>Sex</td><td>" + Patient.Sex.value + "</td></tr>\n" +
"<tr valign=top><td></td>\n" +
"    <td>" + Patient.Address2.value + "</td>\n"  +
"    <td>Home </td><td>" + Patient.PhoneAH.value + "</td></tr>\n" +
"<tr valign=top><td></td>\n" +
"    <td>" + Patient.Address3.value + "</td>\n" +
"    <td>Business </td><td>" + Patient.PhoneBH.value + "</td></tr>\n" +
"<tr valign=top><td></td>\n" +
"    <td>" + Patient.Address4.value + Patient.PostCode.value + "</td></tr>\n" +
"<tr><td colspan=4 bgcolor=#cccccc>\n" +
"    <b>Admission Details</td></tr>\n" +
"<tr><td>Admitted</td><td> " + Patient.AdmDate.value + "</td>\n" +
"    <td>Discharged</td><td> " + Patient.DscDate.value + "</td></tr>\n" +


"<tr><td>Hospital Ref.</td><td> " + Patient.urnumber.value + "</td>\n" +
"    <td>Visit No.</td><td> " + Patient.admissno.value + "</td></tr>\n" +

"<tr><td>Discharge Diagnosis</td><td> " + Patient.Procedure.value + "</td>\n" +
"    <td>Admitting Diagnosis</td><td> " + Patient.Diagnosis.value + "</td></tr>\n" +

"<tr><td>Discharge Destination</td><td> " + Patient.Ddest.value + "</td>\n" +
"    <td>Transfer Destination</td><td> " + Patient.Tdest.value + "</td></tr>\n" +

"</table><p>\n"  +
"<table align=center border=0 cellpadding=0 cellspacing=0 width=640>\n" 

if (DataEntry.Given.value!="") {
 DocumentHTML+="<tr><td class=SectHead>Given to Patient<br></td></tr>\n" +
 "<tr><td>\n" + TextArea(DataEntry.Given.value) + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.WoundDressing.value!="") {
 DocumentHTML+="<tr><td class=SectHead>Wound/Dressing Instructions</td></tr>\n"+
 "<tr><td>\n" + TextArea(DataEntry.WoundDressing.value) + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.DietInstructions.value!="") {
 DocumentHTML+="<tr><td class=SectHead>Diet Instructions</td></tr>\n" +
 "<tr><td>\n" + TextArea(DataEntry.DietInstructions.value) + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.Additional.value!="") {
 DocumentHTML+="<tr><td class=SectHead>Additional Information </td></tr>\n" +
 "<tr><td>\n" + TextArea(DataEntry.Additional.value) + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

DocumentHTML+="<tr><td align=center class=SectHead>Medication<td></tr>\n" +
              "<tr><td><table border=0 cellspacing=0 width=100%>\n" +
              "<tr><td class=SectHead>Drug</td>\n" +
              "    <td class=SectHead>Strength</td>\n" +
              "    <td class=SectHead>Dosage</td></tr>\n" 
for (i=0; i < Medications.length ;i++) {
 if(i%3==0) { DocumentHTML+="<tr>\n"  }
 DocumentHTML+="<td>" + Medications[i].value + "</td>\n" 
 if(i%3==2) { DocumentHTML+="</tr>\n"  }
}
DocumentHTML+="</table><br></td></tr>\n" +
"<tr><td class=SectHead align=center>Appointments<td></tr>\n" +
              "<tr><td><table border=0 cellspacing=0 width=100%>\n" +
              "<tr><td class=SectHead>Date</td>\n" +
              "    <td class=SectHead>Time</td>\n" +
              "    <td class=SectHead>Doctor</td>\n" +
              "    <td class=SectHead>Location</td></tr>\n" 
for (i=0; i < Appointments.length ;i++) {
 if(i%5==0) { DocumentHTML+="<tr>\n"  }
 if (Appointments[i].type!="hidden") {
 DocumentHTML+="<td>" + Appointments[i].value + "</td>\n" }
 if(i%5==4) { DocumentHTML+="</tr>\n"  }
}
DocumentHTML+="</table></td></tr>\n" +
"</table><p><p>\n"  +
"<table align=center border=0 cellspacing=0 cellpadding=1 width=640>\n" +
"<tr><td colspan=4 bgcolor=#cccccc>\n" +
"    <b>Information Provided by</td></tr>\n" +
"<tr><td>HMO Name</td><td> " + Patient.LoginName.value + "</td>\n" +
"    <td>Consultant</td><td>\n" + 
    Patient.DoctorName.value + "</td></tr>\n" +
"<tr><td>Signature</td><td></td>\n" +
"    <td>Signature</td><td></td></tr>\n" +
"<tr><td></td><td><hr width=150 size=1 noshade align=left></td>\n" +
"    <td></td><td><hr width=150 size=1 noshade align=left></td></tr>\n" +
"<tr><td>Date Created</td><td> " + Patient.CurrentDate.value + "</td>\n" +
"    <td></td><td></td></tr>\n" +
"</table>\n" 
  return(DocumentHTML)
}
