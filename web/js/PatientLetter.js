//jsVersion  : V11.03.00
function PreviewLetter() {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=700,height=400,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  NewWindow.document.open()
  NewWindow.document.write(Letter())
  NewWindow.document.close();
}
function PrintLetter() {
  if(validateMandatory(UpdateForm)) {
  NewWindow=window.open("","NewWindow",
  "top=1100,left=10,width=700,height=40,location=no,toolbar=yes,scrollbars=yes")
  UpdateForm.htmlline.value=Letter()
  NewWindow.document.open()
  NewWindow.document.write(UpdateForm.htmlline.value)
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
function Letter() {
  DocumentHTML="<title>Patient Letter</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; }\n" +
"td { font-size:10pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-weight:bold; }\n" +
"</style>\n" +
"<body><table align=center width=640>\n" +
"<tr><td rowspan=2 width=150>\n" +
"    <img height=50 src=/images/FormsLogo.gif></td>\n" +
"    <td valign=bottom>   \n" +
"    <b><font size=+2>E</font>LTHAM     \n" +
"    <font size=+2>H</font>OSPITAL</b><br></td>\n" +
"    <td rowspan=2 width=150>818 Whitehorse Rd<br>Box Hill,3128<br>\n" +
"    Ph: 98996233</td></tr>\n" +
"</table><p>\n" +
"<table align=center border=0 cellspacing=0 cellpadding=1 width=540>\n" +
"<tr><td colspan=4>\n" +
GP.Name.value + "<br>\n" +
GP.Address1.value + "<br>\n" 
if (!isWhitespace(GP.Address2.value)) {
  DocumentHTML+=GP.Address2.value + "<br>\n" }
DocumentHTML+=GP.Address3.value + "<br>\n" +
GP.Address4.value + ", " + GP.PostCode.value + "<p>\n" +
"    </td></tr>\n" +
"<tr><td colspan=4>\n" +
"<tr><td colspan=4>\n" +
"Dear " + GP.FirstName.value + ",<p>\n" +
"    </td></tr>\n" +
"<tr><td colspan=4>\n" +
TextArea(DataEntry.Paragraph1.value) + "<p>\n" +
TextArea(DataEntry.Paragraph2.value) + "<p>\n" +
TextArea(DataEntry.Paragraph3.value) + "<p>\n" +
"    </td></tr>\n" +
"<tr><td colspan=4 bgcolor=#cccccc>\n" +
"    <b>Patient Details</td></tr>\n" +
"<tr><td>Name:</td><td>" + Patient.Title.value + " " +
     Patient.Given.value + " " + Patient.Surname.value + "</td>\n" +
"    <td>Date of Birth</td><td>"+ Patient.DOB.value + "</td></tr>\n" +
"<tr valign=top><td>Address</td>\n" +
"    <td>" + Patient.Address1.value + "</td>\n" +
"    <td>Sex</td><td>" + Patient.Sex.value + "</td></tr>\n" +
"<tr valign=top><td></td>\n" +
"    <td>" + Patient.Address2.value + "</td>"  +
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
"<tr><td>Procedure</td><td colspan=3> " + Patient.Procedure.value + "</td></tr>\n" +
"</table><p><p>\n"  +
"<table align=center border=0 cellspacing=0 cellpadding=1 width=540>\n" +
"<tr><td>Regards<p></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><p><hr width=150 size=1 noshade align=left></td></tr>\n" +
"<tr><td> " + Patient.LoginName.value + "</td></tr>\n" +
"</table>\n" 
  return(DocumentHTML)
}
