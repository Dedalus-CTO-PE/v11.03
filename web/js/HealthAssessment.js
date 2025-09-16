//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : HealthAssessment.js
//                              
// Modifications :
//                              
// V9.08.01  13.10.2006 Davin           CAR 76341
//           Created from DischargeSummaryJH.js
//------------------------------------------------------------ 
function PreviewFullAssessm() {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  NewWindow.document.open()
  NewWindow.document.write(fullAssessmentDocument())
  NewWindow.document.close();
}
function PrintFullAssessm() {
  if(validateMandatory(DocumentForm)) {
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  DocumentForm.htmlline.value=fullAssessmentDocument()
  NewWindow.document.open()
  NewWindow.document.write(DocumentForm.htmlline.value)
  NewWindow.print();
  self.close();
  NewWindow.document.close();
  NewWindow.close();
    UpdateForm.submit();
    DocumentForm.submit()
  }
}
function fullAssessmentDocument() {
  DocumentHTML="<title>Health Assessment Details</title>\n" +
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:10pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:14pt; \n" +
"font-weight:bold; }\n" +
"p.page {page-break-after: always}\n" +
"</style>\n" +

"<p class=page><table align=center width=640 border=1>\n" +
"<tr><td colspan=3 width=150><img height=50 src=../images/logo.gif></td>\n" +
"<tr><td><b>Name: </b>" + Patient.Title.value + "\n  " +
     Patient.Given.value + " " + Patient.Surname.value + "</td>\n" +
"    <td><b>URN: </b>" + Patient.urnumber.value + "</td>\n" +
"    <td><b>Home Phone No: </b>" + Patient.homephon.value + "</td></tr>\n" +
"<tr><td><b>Address: </b>" + Patient.Address1.value + "\n " +
                          Patient.Address2.value + "\n " +
                          Patient.Address3.value + "\n " +
                          Patient.Address4.value + "\n " +
                          Patient.PostCode.value + "</td>\n" +
"    <td><b>Sex: </b>" + Patient.sex.value + "</td>\n" +
"    <td><b>DOB: </b>" + Patient.dob.value + "</td>\n" +

"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" MEDICAL HISTORY </td></tr>\n" +
"<tr><td colspan=3><table width=100%>\n" +
"    <td><b>Have you ever had any of the following? </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td>High blood pressure </td>\n" +
"    <td>" + Patient.assflg03.value + "</td>\n" +
"<tr><td>Chest pain or angina </td>\n" +
"    <td>" + Patient.assflg04.value + "</td>\n" +
"    <td>How often? </td>\n" +
"    <td>" + UpdateForm.ibass093.value + "</td>\n" +
"<tr><td>Heart attack </td>\n" +
"    <td>" + Patient.assflg05.value + "</td>\n" +
"    <td>When? </td>\n" +
"    <td>" + UpdateForm.ibass094.value + "</td>\n" +
"<tr><td>Other Heart disease or heart murmur </td>\n" +
"    <td>" + Patient.assflg06.value + "</td>\n" +
"    <td>What type? </td>\n" +
"    <td>" + UpdateForm.ibass095.value + "</td>\n" +
"<tr><td>Stroke </td>\n" +
"    <td>" + Patient.assflg07.value + "</td>\n" +
"    <td>Remaining disability? </td>\n" +
"    <td>" + UpdateForm.ibass096.value + "</td>\n" +
"<tr><td>Asthma </td>\n" +
"    <td>" + Patient.assflg08.value + "</td>\n" +
"    <td>Is it under control? </td>\n" +
"    <td>" + UpdateForm.ibass063.value + "</td>\n" +
"<tr><td>Chronic cough or chronic bronchitis </td>\n" +
"    <td>" + Patient.assflg09.value + "</td>\n" +
"    <td>Is it productive? </td>\n" +
"    <td>" + UpdateForm.ibass064.value + "</td>\n" +
"<tr><td>Any other lung or chest disease </td>\n" +
"    <td>" + Patient.assflg10.value + "</td>\n" +
"    <td>What type? </td>\n" +
"    <td>" + UpdateForm.ibass097.value + "</td>\n" +
"<tr><td>Diabetes </td>\n" +
"    <td>" + Patient.assflg11.value + "</td>\n" +
"    <td>Do you take Insulin? </td>\n" +
"    <td>" + Patient.assflg12.value + "</td>\n" +
"<tr><td>&nbsp;</td>\n" +
"    <td>&nbsp;</td>\n" +
"    <td>Do you take tablets? </td>\n" +
"    <td>" + Patient.assflg13.value + "</td>\n" +
"<tr><td>Hepatitis </td>\n" +
"    <td>" + Patient.assflg14.value + "</td>\n" +
"    <td>When? </td>\n" +
"    <td>" + UpdateForm.ibass098.value + "</td>\n" +
"<tr><td>Exposure to the AIDS virus </td>\n" +
"    <td>" + Patient.assflg15.value + "</td>\n" +
"    <td>When? </td>\n" +
"    <td>" + UpdateForm.ibass099.value + "</td>\n" +
"<tr><td>Fits or Epilepsy </td>\n" +
"    <td>" + Patient.assflg16.value + "</td>\n" +
"    <td>Last episode? </td>\n" +
"    <td>" + UpdateForm.ibass100.value + "</td>\n" +
"<tr><td>Kidney condition </td>\n" +
"    <td>" + Patient.assflg17.value + "</td>\n" +
"    <td>What type? </td>\n" +
"    <td>" + UpdateForm.ibass101.value + "</td>\n" +
"<tr><td>Blood clots in legs or lungs </td>\n" +
"    <td>" + Patient.assflg18.value + "</td>\n" +
"    <td>When? </td>\n" +
"    <td>" + UpdateForm.ibass102.value + "</td>\n" +
"<tr><td>Heartburn/Indigestion/Hiatus Hernia </td>\n" +
"    <td>" + Patient.assflg19.value + "</td>\n" +
"</table></tr>\n" +

"<tr><td colspan=3><table width=100%>\n" +
"<tr><td width=70%>&nbsp; </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td>Would you get short of breath if you climbed \n" +
"        one flight of stairs? </td>\n" +
"    <td>" + Patient.assflg20.value + "</td>\n" +
"<tr><td>Do you have any other health condition or serious illness? </td>\n" +
"    <td>" + Patient.assflg21.value + "</td>\n" +
"<tr><td>What are they? </td>\n" +
"<tr><td>" + UpdateForm.ibass123.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass124.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass125.value + "</td>\n" +
"</table></tr>\n" +

"<tr><td colspan=3><table width=100%>\n" +
"<tr><td width=30%><b>Have you ever had: </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td>Any operations? </td>\n" +
"    <td>" + Patient.assflg22.value + "</td>\n" +
"    <td>What were they? Any problems? </td>\n" +
"    <td>" + UpdateForm.ibass103.value + "</td>\n" +
"<tr><td>Blood transfusions? </td>\n" +
"    <td>" + Patient.assflg23.value + "</td>\n" +
"    <td>Any reactions? </td>\n" +
"    <td>" + UpdateForm.ibass104.value + "</td>\n" +
"</table></tr>\n" +

"<tr><td colspan=3><table width=100%>\n" +
"<tr><td width=50%><b>Have you or your family had: </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td>Serious bleeding problems? </td>\n" +
"    <td>" + Patient.assflg24.value + "</td>\n" +
"    <td>Please describe </td>\n" +
"    <td>" + UpdateForm.ibass105.value + "</td>\n" +
"<tr><td>Serious reactions to general anaethesia? </td>\n" +
"    <td>" + Patient.assflg25.value + "</td>\n" +
"    <td>What type? </td>\n" +
"    <td>" + UpdateForm.ibass106.value + "</td>\n" +
"<tr><td>Medical problems which run in the family \n" +
"        e.g. muscular dystrophy, thalassaemia? </td>\n" +
"    <td>" + Patient.assflg26.value + "</td>\n" +
"    <td>What type? </td>\n" +
"    <td>" + UpdateForm.ibass107.value + "</td>\n" +
"<tr><td>Females: Are you pregnant? </td>\n" +
"    <td>" + Patient.assflg27.value + "</td>\n" +
"    <td>Due date? </td>\n" +
"    <td>" + UpdateForm.ibass065.value + "</td>\n" +
"</table></tr>\n" +
"</table></p>\n" +

"<table align=center width=640 border=1>\n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" MEDICATIONS, ADVERSE REACTIONS AND SUBSTANCE USE </td></tr>\n" +
"<tr><td colspan=3><table width=100%>\n" +
"<tr><td width=85%>&nbsp; </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td><b>Do you have any allergies or have you had \n" +
"           any reactions to any medications? </td>\n" +
"    <td>" + Patient.assflg28.value + "</td>\n" +
"<tr><td>Please describe: </td>\n" +
"<tr><td>" + UpdateForm.ibass126.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass127.value + "</td>\n" +
"</table></tr>\n" +

"<tr><td colspan=3><table width=100%>\n" +
"<tr><td>&nbsp; </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td>Do you take aspirin regularly? </td>\n" +
"    <td>" + Patient.assflg29.value + "</td>\n" +
"<tr><td>Have you ever taken cortisone type medication? </td>\n" +
"    <td>" + Patient.assflg30.value + "</td>\n" +
"    <td>When? </td>\n" +
"    <td>" + UpdateForm.ibass108.value + "</td>\n" +
"<tr><td>Do you smoke? </td>\n" +
"    <td>" + Patient.assflg31.value + "</td>\n" +
"    <td>How many? </td>\n" +
"    <td>" + UpdateForm.ibass109.value + "</td>\n" +
"<tr><td>Do you drink alcohol? </td>\n" +
"    <td>" + Patient.assflg32.value + "</td>\n" +
"    <td>How much? </td>\n" +
"    <td>" + UpdateForm.ibass110.value + "</td>\n" +
"<tr><td>Do you use any other substances? </td>\n" +
"    <td>" + Patient.assflg33.value + "</td>\n" +
"    <td>Which ones? </td>\n" +
"    <td>" + UpdateForm.ibass111.value + "</td>\n" +
"<tr><td>Do you take any regular medication? </td>\n" +
"    <td>" + Patient.assflg34.value + "</td>\n" +
"    <td>Please list below </td>\n" +
"</table></tr>\n" +

"<tr><td colspan=3><table width=100% border=1>\n" +
"<tr><td><b>Name of medication </td>\n" +
"    <td><b>Dose (mg) </td>\n" +
"    <td><b>When? (e.g.morning) </td></tr>\n" +
"<tr><td>" + UpdateForm.ibass113.value + "</td>\n" +
"    <td>" + UpdateForm.ibass066.value + "</td>\n" +
"    <td>" + UpdateForm.ibass067.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass114.value + "</td>\n" +
"    <td>" + UpdateForm.ibass068.value + "</td>\n" +
"    <td>" + UpdateForm.ibass069.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass115.value + "</td>\n" +
"    <td>" + UpdateForm.ibass070.value + "</td>\n" +
"    <td>" + UpdateForm.ibass071.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass116.value + "</td>\n" +
"    <td>" + UpdateForm.ibass072.value + "</td>\n" +
"    <td>" + UpdateForm.ibass073.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass117.value + "</td>\n" +
"    <td>" + UpdateForm.ibass074.value + "</td>\n" +
"    <td>" + UpdateForm.ibass075.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass118.value + "</td>\n" +
"    <td>" + UpdateForm.ibass076.value + "</td>\n" +
"    <td>" + UpdateForm.ibass077.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass119.value + "</td>\n" +
"    <td>" + UpdateForm.ibass078.value + "</td>\n" +
"    <td>" + UpdateForm.ibass079.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass120.value + "</td>\n" +
"    <td>" + UpdateForm.ibass080.value + "</td>\n" +
"    <td>" + UpdateForm.ibass081.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass121.value + "</td>\n" +
"    <td>" + UpdateForm.ibass082.value + "</td>\n" +
"    <td>" + UpdateForm.ibass083.value + "</td>\n" +
"<tr><td>" + UpdateForm.ibass122.value + "</td>\n" +
"    <td>" + UpdateForm.ibass084.value + "</td>\n" +
"    <td>" + UpdateForm.ibass085.value + "</td>\n" +
"</table></tr>\n" +

"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" DISCHARGE PLANNING INFORMATION </td></tr>\n" +
"<tr><td colspan=3><table width=100%>\n" +
"<tr><td width=80%>&nbsp; </td>\n" +
"    <td><b>Yes/No </td>\n" +
"<tr><td>Will you be going home alone after your hospital stay? </td>\n" +
"    <td>" + Patient.assflg35.value + "</td>\n" +
"<tr><td>Do you live alone? </td>\n" +
"    <td>" + Patient.assflg36.value + "</td>\n" +
"<tr><td>Will you have problems looking after \n" +
"        yourself after your hospital stay? </td>\n" +
"    <td>" + Patient.assflg37.value + "</td>\n" +
"<tr><td>Do you take care of others at home? </td>\n" +
"    <td>" + Patient.assflg38.value + "</td>\n" +
"<tr><td>Are you homeless / no fixed place of address? </td>\n" +
"    <td>" + Patient.assflg39.value + "</td>\n" +
"<tr><td>Do you live in a rooming house, private hotel, \n" +
"        crisis accommodation or hostel? </td>\n" +
"    <td>" + Patient.assflg40.value + "</td>\n" +
"<tr><td>Do you use community services? e.g. \n" +
"        Home help, meals-on-wheels, etc. </td>\n" +
"    <td>" + Patient.assflg41.value + "</td>\n" +
"<tr><td>Do you require an interpreter? </td>\n" +
"    <td>" + Patient.assflg42.value + "</td>\n" +
"<tr><td>Are you currently under psychiatric care? </td>\n" +
"    <td>" + Patient.assflg43.value + "</td>\n" +
"</table></tr>\n" +
"<tr><td colspan=3><b>Thank you for taking the time to \n" +
"                     answer these questions carefully </td>\n" +
"</table>\n" +

"<table align=center width=640 border=1>\n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" For Staff Use </td></tr>\n" +
"<tr><td colspan=3><table width=100%>\n" +
"<tr><td><b>Preadmission clinic booking </td>\n" +
"    <td>" + Patient.assflg44.value + "</td>\n" +
"<tr><td><b>Planned surgery </td>\n" +
"    <td>" + UpdateForm.ibass112.value + "</td>\n" +
"    <td>" + Patient.assflg45.value + "</td>\n" +
"<tr><td><b>Patient age </td>\n" +
"    <td>" + Patient.assflg46.value + "</td>\n" +
"    <td><b>Blood pressure </td>\n" +
"    <td>" + UpdateForm.ibass086.value + "</td>\n" +
"<tr><td><b>Height </td>\n" +
"    <td>" + UpdateForm.ibass087.value + "</td>\n" +
"    <td><b>Weight </td>\n" +
"    <td>" + UpdateForm.ibass088.value + "</td>\n" +
"    <td><b>BMI </td>\n" +
"    <td>" + Patient.assflg47.value + "</td>\n" +
"<tr><td><b>Investigations ordered </td>\n" +
"    <td>" + Patient.assflg48.value + "</td>\n" +
"</table></tr>\n" +
"<tr><td width=40%><b>Other </td>\n" +
"    <td width=40%><b>Signature </td>\n" +
"    <td><b>Date </td>\n" +
"</table>\n"
  return(DocumentHTML)
}
