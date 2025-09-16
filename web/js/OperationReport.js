//jsVersion  : V11.03.00
function Preview() {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=700,height=400,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  NewWindow.document.open()
  NewWindow.document.write(Document())
  NewWindow.document.close();
}
function Print() {
  if(validateMandatory(UpdateForm)) {
  NewWindow=window.open("","NewWindow",
  "top=1100,left=10,width=700,height=40,location=no,toolbar=yes,scrollbars=yes")
  UpdateForm.htmlline.value=Document()
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
function FormatText(str) {
var Line= parseInt(((str.length)/60) + 1,10);   // No. of lines to be displayed
x=0;y=60;var Retstr="";
for (var a=0; a < Line; a++) {
    Retstr=Retstr + str.substr(x,y) + "<br>"
    x=x+60;
  }
return Retstr;
}
function Document() {
  DocumentHTML="<title>Operation Report</title>\n" +
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
"    <b><font size=+2>B</font>ox     \n" +
"    <b><font size=+2>H</font>ill    \n" +
"    <b><font size=+2>H</font>ealth    \n" +
"    <font size=+2>A</font>gency</b><br></td>\n" +
"    <td rowspan=2 width=150>19 Shierlaw Ave<br>Canterbury Vic 3126<br>\n" +
"    Ph: 98957400</td></tr>\n" +
"<tr><td><font size=+2>OPERATION REPORT</font></td></tr>\n" +
"</table><p>\n" +
"<table align=center border=0 cellspacing=0 cellpadding=1 width=640>\n" +
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
"<tr><td>Operation Date</td><td> " + Patient.OprDate.value + "</td>\n" +
"    <td>Hospital Ref.</td><td> " + Patient.urnumber.value + "</td></tr>\n" +
"<tr align=top><td>Operation</td>\n" +
"    <td colspan=3> " + DataEntry.Operation1.value + "<br>\n" +
"                   " + DataEntry.Operation2.value + "<br>\n" +
"                   " + DataEntry.Operation3.value + "</td</tr>\n" +
"</table><p>\n"  +
"<table align=center border=0 cellpadding=0 cellspacing=0 width=640>\n" 

if (DataEntry.opcom004.value!="") {
i=DataEntry.opcom004.value
FormatString=FormatText(i);
 DocumentHTML+="<tr><td class=SectHead>Procedure Description<br></td></tr>\n" +
 "<tr><td>\n" + FormatString + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.opcom003.value!="") {
i=DataEntry.opcom003.value
FormatString=FormatText(i);
 DocumentHTML+="<tr><td class=SectHead>Findings</td></tr>\n"+
 "<tr><td>\n" + FormatString + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.opcom001.value!="") {
i=DataEntry.opcom001.value
FormatString=FormatText(i);
 DocumentHTML+="<tr><td class=SectHead>Inter-Operative Complications</td></tr>\n" +
 "<tr><td>\n" + FormatString + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.opcom005.value!="") {
i=DataEntry.opcom005.value
FormatString=FormatText(i);
 DocumentHTML+="<tr><td class=SectHead>Post-Operative Instructions</td></tr>\n" +
 "<tr><td>\n" + FormatString + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }


if (DataEntry.opcom006.value!="") {
i=DataEntry.opcom006.value
FormatString=FormatText(i);
 DocumentHTML+="<tr><td class=SectHead>Management</td></tr>\n" +
 "<tr><td>\n" + FormatString + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

if (DataEntry.opcom007.value!="") {
i=DataEntry.opcom007.value
FormatString=FormatText(i);
 DocumentHTML+="<tr><td class=SectHead>Post-Operative Complications</td></tr>\n" +
 "<tr><td>\n" + FormatString + "</td></tr>\n" +
 "<tr><td>&nbsp;</td></tr>\n" }

 DocumentHTML+="</table>\n"  +
"<table align=center border=0 cellspacing=0 cellpadding=1 width=640>\n" +
"<tr><td>Signature<p></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><p><hr width=150 size=1 noshade align=left></td></tr>\n" +
"<tr><td> " + Patient.LoginName.value + "</td></tr>\n" +
"</table>\n"
  return(DocumentHTML)
}
