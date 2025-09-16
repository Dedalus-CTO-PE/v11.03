//jsVersion  : V11.03.01
//========================================================================
// Program   : DischargeSummaryJH.js
//
// Written   : 20.11.2006 Jill Habasque
//
// Function  : Print Discharge Summary
//
//========================================================================

function PreviewFullSummary() {
  p=document.UpdateForm
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  if (p.ptcndscl.value == 3){
    UpdateForm.htmlline.value=NEHTALayout(); 
    previewOpen();
    return;
  }
  if (p.ptcndscl.value == 2){
    UpdateForm.htmlline.value=HEALayout(); 
    previewOpen();
    return;
  }
  if (p.ptcndscl.value == 1){
    UpdateForm.htmlline.value=fullGPDetails(); 
    previewOpen();
    return;
  }
  UpdateForm.htmlline.value=fullDischargeDocument();
  previewOpen();

}
function previewOpen(){
  NewWindow.document.open()
  NewWindow.document.write(UpdateForm.htmlline.value)
  NewWindow.document.close();
}
function PrintFullSummary() {
  if(!validateMandatory(UpdateForm)) {
    return;
  }
  NewWindow=window.open("","NewWindow",
  "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes")
  if (document.UpdateForm.ptcndscl.value == 3){
    UpdateForm.htmlline.value=NEHTALayout(); 
    postSummary();
    return;
  }
  if (document.UpdateForm.ptcndscl.value == 2){
    UpdateForm.htmlline.value=HEALayout(); 
    postSummary();
    return;
  }
  if (document.UpdateForm.ptcndscl.value == 1){
    UpdateForm.htmlline.value=fullGPDetails(); 
    postSummary();
    return;
  }
  UpdateForm.htmlline.value=fullDischargeDocument();
  postSummary();
  return;
}
function postSummary(){
  NewWindow.document.open()
  NewWindow.document.write(UpdateForm.htmlline.value)
  NewWindow.print();
  self.close();
  NewWindow.document.close();
  NewWindow.close();
  UpdateForm.submit();
}
function FaxFullSummary() {
  if(!validateMandatory(UpdateForm)) {
    return;
  }
  if (document.UpdateForm.ptcndscl.value == 3){
    UpdateForm.htmlline.value=NEHTALayout();
    UpdateForm.submit();
    return;
  }
  if (document.UpdateForm.ptcndscl.value == 2){
    UpdateForm.htmlline.value=HEALayout();
    UpdateForm.submit();
    return;
  }
  if (document.UpdateForm.ptcndscl.value == 1) {
    UpdateForm.htmlline.value=fullGPDetails();
    UpdateForm.submit();
    return;
  }
  UpdateForm.htmlline.value=fullDischargeDocument();
  UpdateForm.submit();
  return;
}
function fullDischargeDocument() {
  DocumentHTML="<title>Discharge Summary Notification</title>\n" +
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
"font-size:10pt; \n" +
"font-weight:bold; }\n" +
"P.breakhere {page-break-before: always}\n" +
"</style>\n" +
"<body><table align=center width=100%>\n" +
"<tr><td width=150>\n" +
"    <img height=50 src=../images/logo.gif>" +
"</td>\n" +
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td><table>"+
"<tr><td width=10%><b>Name: </b></td><td width=40%>" + "\n  " +
     Patient.Surname.value + ", " + Patient.Given.value + "</td>\n" +
"    <td width=5%><b>HRN: </b></td><td width=10%>" + Patient.hrnnumbr.value + "</td>\n" +
"<td width=15%><b>Admission No: </b></td><td width=15%>" + 
                          Patient.admissno.value + "</td></tr>\n" +
"<tr><td><b>Address: </b></td><td>" + Patient.Address1.value + "\n " +
                          Patient.Address2.value + "\n " +
"    <td><b>Sex: </b></td><td>" + Patient.sex.value + "</td>\n" +
"    <td><b>DOB: </b</td><td>" + Patient.dob.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td><td>"+Patient.Address3.value + "\n " +
                          Patient.Address4.value + " \n " +
                          Patient.PostCode.value + "</td>\n" +
"</table></td></tr>"+
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" DISCHARGE DETAILS</td></tr>\n" +
"<tr><td colspan=3><table width=100%>\n" +
"    <td><b>Admission Date </td>\n" +
"    <td><b>Discharge Date </td>\n" +
"    <td><b>Discharge Time </td>\n" +
"    <td><b>Status </td>\n" +
"<tr><td>" + Patient.admdate.value + "</td>\n" +
"    <td>" + Patient.dscdate.value + "</td>\n" +
"    <td>" + Patient.dsctime.value + "</td>\n" +
"    <td>" + Patient.dstatus.value + "</td>\n" +
"</table></tr>\n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" CLINICAL DIAGNOSIS</td></tr>\n" +
"<tr><td colspan=3><table width=100%>\n" +
"    <td><b>Principal Diagnosis:</td></tr>\n" +
"<tr><td>" + Patient.prdiag.value + "&nbsp;" + 
Patient.prddesc.value + "</td></tr>\n" +
"<tr><td><b>Other Diagnosis:</td></tr>\n" +
"<tr><td>" + Patient.othdiag.value + "</td></tr>\n" +
"    <td><b>Principal Procedure:</td></tr>\n" +
"<tr><td>" + Patient.prproc.value + "&nbsp;" +
Patient.prprocd.value + "</td></tr>\n" +
"<tr><td><b>Other Procedure:</td></tr>\n" +
"<tr><td>" + Patient.othproc.value + "</td></tr>\n" +
"</table></tr>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" CLINICAL SUMMARY</td></tr>\n" +
"<tr><td><b>Reason for Admission:</td></tr>\n" +
"<tr><td>" + Patient.admreas.value + "</td></tr>\n" +
"<tr><td><b>Other Reasons:</td></tr>\n" +
"<tr><td>" + Patient.othreas.value + "</td></tr>\n" +
"<tr><td><b>Brief History of Present Illness:</td></tr>\n" +
"<tr><td>" + Patient.briefhis.value + "</td></tr>\n" +
"<tr><td><b>Brief Physical Examination on Admission:</td></tr>\n" +
"<tr><td>" + Patient.briefphy.value + "</td></tr>\n" +
"<tr><td><b>Laboratory Findings on Admission:</td></tr>\n" +
"<tr><td>" + Patient.labfind.value + "</td></tr>\n" +
"</table></tr>\n" +
"<P class=breakhere>" +
"<body><table align=center width=100%>\n" +
"<tr><td width=150>\n" +
"    <img height=50 src=../images/logo.gif>" +
"</td>\n" +
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td><table>"+
"<tr><td width=10%><b>Name: </b></td><td width=40%>" + "\n " +
     Patient.Surname.value + ", " + Patient.Given.value + "</td>\n" +
"    <td width=5%><b>HRN: </b></td><td width=10%>" + Patient.hrnnumbr.value + 
"</td>\n" +
"<td width=15%><b>Admission No: </b></td><td width=15%>" +
                          Patient.admissno.value + "</td></tr>\n" +
"<tr><td><b>Address: </b></td><td>" + Patient.Address1.value + "\n " +
                          Patient.Address2.value + "\n " +
"    <td><b>Sex: </b></td><td>" + Patient.sex.value + "</td>\n" +
"    <td><b>DOB: </b</td><td>" + Patient.dob.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td><td>"+Patient.Address3.value + "\n " +
                          Patient.Address4.value + " \n " +
                          Patient.PostCode.value + "</td>\n" +
"</table></td></tr>"+
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" IN-HOSPITAL COURSE</td></tr>\n" +
"<tr><td><b>Hospital event, treatment, investigations:</td></tr>\n" +
"<tr><td>" + Patient.hossumm.value + "</td></tr>\n" +
"<tr><td><table width=100%>" +
"<tr><td align=left height=70 width=70% valign=bottom><hr></td>"+
"<td width=30% valign=bottom><hr></td></tr>" +
"</table>" +
"<tr><td><b>Condition upon discharge:</td></tr>\n" +
"<tr><td>" + Patient.condis.value + "</td></tr>\n" +
"<tr><td><table width=100%>" +
"<tr><td align=left height=70 width=70% valign=bottom><hr></td>"+
"<td width=30% valign=bottom><hr></td></tr>" +
"<tr><td><b>Results Pending (on discharge)</td><td><b>Date Ordered</tr>\n" +
"</table>" +
"<tr><td>" + Patient.resdis.value + "</td></tr>\n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" MEDICAL ALERTS</td></tr>\n" +
"<tr><td>" + Patient.medalerts.value + "</td></tr>\n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" DRUG ALLERGY DATA</td></tr>\n" +
"<tr><td>" + Patient.drugallergy.value + "</td></tr>\n" +
"</table></tr>\n" +
"<P class=breakhere>" +
"<body><table align=center width=100% border=0>\n" +
"<tr><td width=150>\n" +
"    <img height=50 src=../images/logo.gif>" +
"</td>\n" +
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td><table>"+
"<tr><td width=10%><b>Name: </b></td><td width=40%>" + "\n " +
     Patient.Surname.value + ", " + Patient.Given.value + "</td>\n" +
"    <td width=5%><b>HRN: </b></td><td width=10%>" + Patient.hrnnumbr.value + 
"</td>\n" +
"<td width=15%><b>Admission No: </b></td><td width=15%>" +
                          Patient.admissno.value + "</td></tr>\n" +
"<tr><td><b>Address: </b></td><td>" + Patient.Address1.value + "\n " +
                          Patient.Address2.value + "\n " +
"    <td><b>Sex: </b></td><td>" + Patient.sex.value + "</td>\n" +
"    <td><b>DOB: </b</td><td>" + Patient.dob.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td><td>"+Patient.Address3.value + "\n " +
                          Patient.Address4.value + " \n " +
                          Patient.PostCode.value + "</td>\n" +
"</table></td></tr>"+
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" DISCHARGE MEDICATION </td></tr>\n" +
"<tr><table width=100% border=1 cellspacing=0><tr><td align=center><b>Drug Name</td>\n" +
"<td align=center><b>Form</td>\n" +
"<td align=center><b>Dosage</td>\n" +
"<td align=center><b>Frequency</td>\n" +
"<td align=center><b>Duration</td>\n" +
"<td align=center><b>Special Instructions</td></tr>\n" +
"<tr><td>&nbsp;" + Patient.Code1.value + " - " + 
Patient.drug1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose1.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura1.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst1.value + "</td>\n" 
if(Patient.drug2.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code2.value + " - " +
Patient.drug2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose2.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura2.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst2.value + "</td>\n" 
}
if(Patient.drug3.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code3.value + " - " +
Patient.drug3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose3.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura3.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst3.value + "</td>\n"
}
if(Patient.drug4.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code4.value + " - " +
Patient.drug4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose4.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura4.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst4.value + "</td>\n" 
}
if(Patient.drug5.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code5.value + " - " +
Patient.drug5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose5.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura5.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst5.value + "</td>\n" 
}
if(Patient.drug6.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code6.value + " - " +
Patient.drug6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose6.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura6.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst6.value + "</td>\n" 
}
if(Patient.drug7.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code7.value + " - " +
Patient.drug7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose7.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura7.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst7.value + "</td>\n" 
}
if(Patient.drug8.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code8.value + " - " +
Patient.drug8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose8.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura8.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst8.value + "</td>\n" 
}
if(Patient.drug9.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code9.value + " - " +
Patient.drug9.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef9.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose9.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq9.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura9.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst9.value + "</td>\n" 
}
if(Patient.drug10.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code10.value + " - " +
Patient.drug10.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef10.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose10.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq10.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura10.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst10.value + "</td>\n" 
}
if(Patient.drug11.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code11.value + " - " +
Patient.drug11.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef11.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose11.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq11.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura11.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst11.value + "</td>\n" 
}
if(Patient.drug12.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code12.value + " - " +
Patient.drug12.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef12.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose12.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq12.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura12.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst12.value + "</td>\n" 
}
if(Patient.drug13.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code13.value + " - " +
Patient.drug13.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef13.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose13.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq13.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura13.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst13.value + "</td>\n" 
}
if(Patient.drug14.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code14.value + " - " +
Patient.drug14.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef14.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose14.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq14.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura14.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst14.value + "</td>\n" 
}
if(Patient.drug15.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code15.value + " - " +
Patient.drug15.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef15.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose15.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq15.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura15.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst15.value + "</td>\n" 
}
if(Patient.drug16.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code16.value + " - " +
Patient.drug16.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef16.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose16.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq16.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura16.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst16.value + "</td>\n" 
}
if(Patient.drug17.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code17.value + " - " +
Patient.drug17.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef17.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose17.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq17.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura17.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst17.value + "</td>\n" 
}
if(Patient.drug18.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code18.value + " - " +
Patient.drug18.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef18.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose18.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq18.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura18.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst18.value + "</td>\n" 
}
if(Patient.drug19.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code19.value + " - " +
Patient.drug19.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef19.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose19.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq19.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura19.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst19.value + "</td>\n" 
}
if(Patient.drug20.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code20.value + " - " +
Patient.drug20.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef20.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose20.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq20.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura20.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst20.value + "</td>\n" 
}
if(Patient.drug21.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code21.value + " - " +
Patient.drug21.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef21.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose21.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq21.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura21.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst21.value + "</td>\n" 
}
if(Patient.drug22.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code22.value + " - " +
Patient.drug22.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef22.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose22.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq22.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura22.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst22.value + "</td>\n" 
}
if(Patient.drug23.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code23.value + " - " +
Patient.drug23.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef23.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose23.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq23.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura23.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst23.value + "</td>\n" 
}
if(Patient.drug24.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code24.value + " - " +
Patient.drug24.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef24.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose24.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq24.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura24.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst24.value + "</td>\n" 
}
if(Patient.drug25.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code25.value + " - " +
Patient.drug25.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef25.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose25.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq25.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura25.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst25.value + "</td>\n" 
}
if(Patient.drug26.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code26.value + " - " +
Patient.drug26.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef26.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose26.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq26.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura26.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst26.value + "</td>\n" 
}
if(Patient.drug27.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code27.value + " - " +
Patient.drug27.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef27.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose27.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq27.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura27.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst27.value + "</td>\n" 
}
if(Patient.drug28.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code28.value + " - " +
Patient.drug28.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef28.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose28.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq28.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura28.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst28.value + "</td>\n" 
}
if(Patient.drug29.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code29.value + " - " +
Patient.drug29.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef29.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose29.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq29.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura29.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst29.value + "</td>\n" 
}
if(Patient.drug30.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code30.value + " - " +
Patient.drug30.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef30.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose30.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq30.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura30.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst30.value + "</td>\n" 
}
 DocumentHTML+= "<tr><td colspan=3 height=70 align=center valign=bottom>Instructed by Pharmacist(Name)\n" +
"</td><td colspan=3 height=70 align=center valign=bottom>Signature and Date</td>\n" +
"</tr>\n" +
"</table></tr>" +
"<tr><table width=640 cellspacing=0>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" DISCHARGE INSTRUCTIONS AND FOLLOW-UP PLAN \n" +
"</td></tr>\n" +
"</table></tr>" +
"<tr><table width=640 border=1 cellspacing=0>"+
"<tr><td colspan=3 align=center><b>Activity</td></tr>\n" +
"<tr><td align=center><b>Restrictions</td>\n" +
"<td align=center><b>Physical Activity</td>\n" +
"<td align=center><b>Diet</td></tr>\n" +
"<tr><td>" + Patient.restrict.value + "</td>\n" +
"<td>" + Patient.physical.value + "</td>\n" +
"<td>" + Patient.diet.value + "</td>\n" +
"</table></tr>" +
"<tr><table align=center width=640 cellspacing=0>\n" +
"<tr><td><b>Readmission plan</td>\n" +
"<tr><td>" + Patient.readmit.value + "</td></tr>\n"  +              
"<tr><td>" + Patient.preadmit.value + "</td></tr>\n"  +
"<tr><td><b>Follow-up Appointment</td>\n"
if(Patient.outvis01!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outvis01.value + "</td></tr>\n" 
}
if(Patient.outvis02!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outvis02.value + "</td></tr>\n" 
}
if(Patient.outvis03!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outvis03.value + "</td></tr>\n" 
}
if(Patient.outvis04!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outvis04.value + "</td></tr>\n" 
}
if(Patient.outvis05!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outvis05.value + "</td></tr>\n" 
}
DocumentHTML+="</table></tr>\n" +
"</table>\n" +
"<tr><td><table width=640>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" COMPLETED BY \n" +
"</td></tr>\n" +
"<tr><table width=640 border=1 cellspacing=0>\n" +
"<tr><td valign=bottom align=center height=70 width=32%>" 
if(UpdateForm.useatdoc.checked==true){
  DocumentHTML+= Patient.attdoct.value + "<br>" +
                 Patient.doctmcr.value + "<br>" 
}
DocumentHTML+="Doctor's Name and MCR No</td>\n" +
"<td align=center valign=bottom width=32%>Signature and Date</td>\n" +
"<td align=center valign=bottom width=36%>Co-Signature of Consultant in-charge</td>\n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" INSTRUCTED BY \n" +
"</td></tr>\n" +
"</table>\n" +
"<tr><table width=640 border=0>\n" +
"<tr><td>\n" +
" When to call your doctor/nurse on duty. Tel : 6880-2126 or 6880-2146\n" +
"</td></tr>\n" +
"</table>" +
"<tr><table width=640 border=0>\n" +
"<tr><td>" + Patient.when.value + "</td>\n" +
"</table></td></tr>" +
"</table>\n"+
"<tr><td><table width=640 border=1 cellspacing=0>" +
"<tr><td colspan=2 align=center height=70 valign=bottom>\n" +
" Staff Nurse Name \n" +
"</td><td align=center valign=bottom>Signature and Date</td></tr>\n" +
"<tr><td align=center valign=bottom width=32% height=70>"+
"Name of Patient/Caretaker</td>\n" +
"<td align=center valign=bottom width=36%>Relationship of Caretaker to Patient</td>\n" +
"</td><td align=center valign=bottom>Signature and Date</td></tr>\n" +
"</table>\n"+
"<P class=breakhere>" +
"<body><table align=center width=100% border=0>\n" +
"<tr><td width=150>\n" +
"    <img height=50 src=../images/logo.gif>" +
"</td>\n" +
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><td><table>"+
"<tr><td width=10%><b>Name: </b></td><td width=40%>" + "\n " +
     Patient.Surname.value + ", " + Patient.Given.value + "</td>\n" +
"    <td width=5%><b>HRN: </b></td><td width=10%>" + Patient.hrnnumbr.value + 
"</td>\n" +
"<td width=15%><b>Admission No: </b></td><td width=15%>" +
                          Patient.admissno.value + "</td></tr>\n" +
"<tr><td><b>Address: </b></td><td>" + Patient.Address1.value + "\n " +
                          Patient.Address2.value + "\n " +
"    <td><b>Sex: </b></td><td>" + Patient.sex.value + "</td>\n" +
"    <td><b>DOB: </b</td><td>" + Patient.dob.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td><td>"+Patient.Address3.value + "\n " +
                          Patient.Address4.value + " \n " +
                          Patient.PostCode.value + "</td>\n" +
"</table></td></tr>"+
"<tr><td colspan=6 align=center><hr width=100%></td></tr>" +
"<tr><table width=100% border=1 cellspacing=0><tr><td colspan=5 align=center><b>PRESCRIPTION</td>\n" +
"<tr><td width=10% align=center><b>Date</td>\n" +
"<td width=10% align=center><b>Filled By</td>\n" +
"<td width=10% align=center><b>Dispensed By</td>\n" +
"<td width=35% align=center><b>Supplied</td>\n" +
"<td width=35% align=center><b>Balance</td></tr>\n" +
"<tr><td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"</table>"+
"<tr><td>&nbsp;</td></tr>" +
"<tr><table width=100% border=1 cellspacing=0><tr><td align=center><b>Drug Name</td>\n" +
"<td align=center><b>Form</td>\n" +
"<td align=center><b>Dosage</td>\n" +
"<td align=center><b>Frequency</td>\n" +
"<td align=center><b>Duration</td>\n" +
"<td align=center><b>Special Instructions</td></tr>\n" +
"<tr><td>&nbsp;" + Patient.Code1.value + " - " +
Patient.drug1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose1.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura1.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst1.value + "</td>\n"
if(Patient.drug2.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code2.value + " - " +
Patient.drug2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose2.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura2.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst2.value + "</td>\n"
}
if(Patient.drug3.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code3.value + " - " +
Patient.drug3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose3.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura3.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst3.value + "</td>\n"
}
if(Patient.drug4.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code4.value + " - " +
Patient.drug4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose4.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura4.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst4.value + "</td>\n"
}
if(Patient.drug5.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code5.value + " - " +
Patient.drug5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose5.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura5.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst5.value + "</td>\n"
}
if(Patient.drug6.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code6.value + " - " +
Patient.drug6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose6.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura6.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst6.value + "</td>\n"
}
if(Patient.drug7.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code7.value + " - " +
Patient.drug7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose7.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura7.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst7.value + "</td>\n"
}
if(Patient.drug8.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code8.value + " - " +
Patient.drug8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose8.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura8.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst8.value + "</td>\n"
}
if(Patient.drug9.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code9.value + " - " +
Patient.drug9.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef9.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose9.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq9.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura9.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst9.value + "</td>\n"
}
if(Patient.drug10.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code10.value + " - " +
Patient.drug10.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef10.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose10.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq10.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura10.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst10.value + "</td>\n"
}
if(Patient.drug11.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code11.value + " - " +
Patient.drug11.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef11.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose11.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq11.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura11.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst11.value + "</td>\n"
}
if(Patient.drug12.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code12.value + " - " +
Patient.drug12.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef12.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose12.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq12.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura12.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst12.value + "</td>\n"
}
if(Patient.drug13.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code13.value + " - " +
Patient.drug13.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef13.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose13.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq13.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura13.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst13.value + "</td>\n"
}
if(Patient.drug14.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code14.value + " - " +
Patient.drug14.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef14.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose14.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq14.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura14.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst14.value + "</td>\n"
}
if(Patient.drug15.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code15.value + " - " +
Patient.drug15.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef15.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose15.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq15.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura15.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst15.value + "</td>\n"
}
if(Patient.drug16.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code16.value + " - " +
Patient.drug16.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef16.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose16.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq16.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura16.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst16.value + "</td>\n"
}
if(Patient.drug17.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code17.value + " - " +
Patient.drug17.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef17.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose17.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq17.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura17.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst17.value + "</td>\n"
}
if(Patient.drug18.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code18.value + " - " +
Patient.drug18.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef18.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose18.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq18.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura18.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst18.value + "</td>\n"
}
if(Patient.drug19.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code19.value + " - " +
Patient.drug19.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef19.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose19.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq19.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura19.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst19.value + "</td>\n"
}
if(Patient.drug20.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code20.value + " - " +
Patient.drug20.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef20.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose20.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq20.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura20.value + "</td>\n" +
"<td>&nbsp;" + Patient.inst20.value + "</td>\n"
}
 DocumentHTML+="</table>" +
"<tr><td>&nbsp;</td></tr>" +
"<tr><td><table width=640 border=1 cellspacing=0 cellpadding=0>" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
" PRESCRIBED BY \n" +
"</td></tr>\n" +
"<tr><td valign=bottom align=center height=70 width=32%>"
if(UpdateForm.useatdoc.checked==true){
  DocumentHTML+= Patient.attdoct.value + "<br>" +
                 Patient.doctmcr.value + "<br>"
}
DocumentHTML+="Doctor's Name and MCR No</td>\n" +
"<td align=center valign=bottom width=32%>Signature and Date</td>\n" +
"</td></tr>\n" + 
"</table></tr>" 
  return(DocumentHTML)
}

function fullGPDetails() {
  DocumentHTML="<title></title>\n" +
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
"font-size:10pt; \n" +
"font-weight:bold; }\n" +
"P.breakhere {page-break-before: always}\n" +
"</style>\n" +
"<body><table align=center width=100%>\n" +
"<tr><td width=150><img height=50 src='../images/" +
trim(UpdateForm.hospcode.value) + "logo.gif'></td>\n" +
"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n" +
"<tr><td><table>\n"+
"<tr><td width=15%><b>MRN: </b></td><td width=15%>\n" +
     Patient.urnumber.value + "</td>\n" +
"<tr><td width=15%><b>ADMN NO: </b></td><td width=15%>\n" +
     Patient.admissno.value + "</td></tr>\n" +
"<tr><td width=15%><b>SURNAME: </b></td><td width=15%>" + "\n  " +
     Patient.Surname.value + "</td></tr>\n" +
"<tr><td width=15%><b>GIVEN NAME: </b></td><td width=15%>" + "\n  " +
     Patient.Given.value + "</td></tr>\n" +
"<tr><td width=15%><b>DOB: </b></td><td width=15%>" + "\n  " +
     Patient.dob.value + "</td>\n" +
    "<td width=10%><b>SEX: </b></td><td width=10%>" + "\n  " +
     Patient.sex.value + "</td></tr>\n" +
"</table></td></tr>"+

"<tr><td colspan=6 align=center><hr width=100%></td></tr>\n" +
"<tr><td align=center><b>DISCHARGE SUMMARY</b></td></tr> \n" +
"<tr><td colspan=3 align=center class=HeadingRow>\n" +
"</td></tr>\n" +

"<tr><table width=100% align=center cellspacing=0><br>\n" +

"<tr><td width=15%><b>L.M.O : </b></td><td width=35%>\n" +
      GP.LMO.value + "</td>\n" +
    "<td width=25%><b>ADMISSION DATE :&nbsp;</b></td><td width=30%>\n" +
      GP.ADMDATE.value + "</td></tr>\n" +

"<tr><td width=15%><b>LMO Address : </b></td><td width=35%>\n" +
      GP.GPADD1.value + "</td>\n" +
    "<td width=25%><b>DISCHARGE DATE :&nbsp;</b></td><td>\n" +
      GP.DSCDATE.value + "</td></tr>\n" +

"<tr><td width=15%></td><td width=35%>\n" +
      GP.GPADD2.value + "</td>\n" +
    "<td width=25%><b>DISCH. DESTINATION :&nbsp;</b></td><td>\n" +
      GP.DSCDEST.value + "</td></tr>\n" +

"<tr><td width=15%></td><td width=35%>\n" +
      GP.GPADD3.value + "</td>\n" +

"<tr><td width=15%><b>LMO FAX : </b></td><td width=35%>\n" +
      GP.GPFAX.value + "</td></tr>\n" +

"<tr><td width=15%><b>V.M.O : </b></td><td width=35%>\n" +
      GP.VMO.value + "</td></tr>\n" +

"<tr><td width=15%><b>C.M.O : </b></td><td width=35%>\n" +
      GP.CMO.value + "</td></tr></table><br>\n" +

"<table width=100% cellspacing=0>"
if(GP.ALLERGIES.value==""){
  DocumentHTML+="<tr><td><b>No Allergies</b><td></tr></table><br>\n";
} else {
  DocumentHTML+="<tr><td><b>ALLERGIES </b>" + GP.ALLERGIES.value + "<td></tr></table><br>\n";
}

DocumentHTML+="<table width=100% cellspacing=0>" +
"<tr><td><b>FINAL DIAGNOSIS: </b>\n" +
    Patient.prddesc.value + "</td></tr>\n"+
    "<td width=60%>" + Patient.othdiag.value + "</td></tr>\n"+
"</table><br>\n" +

"<table width=100% cellspacing=0>\n" +
"<tr><td width=80%><b>OPERATIONS/PROCEDURES PERFORMED: </b>\n" ;
if(GP.NILOPRTN.value=="X"){ 
  DocumentHTML+="Nil";
}
DocumentHTML+="</td></tr>\n";
if(Patient.proc1d.value!=""){
  DocumentHTML+="<tr><td width=60%>" + Patient.proc1d.value + "</td></tr>\n" 
}
if(Patient.proc2d.value!=""){
  DocumentHTML+="<tr><td width=60%>" + Patient.proc2d.value + "</td></tr>\n" 
}
if(Patient.proc3d.value!=""){
  DocumentHTML+="<tr><td width=60%>" + Patient.proc3d.value + "</td></tr>\n" 
}
if(Patient.proc4d.value!=""){
  DocumentHTML+="<tr><td width=60%>" + Patient.proc4d.value + "</td></tr>\n" 
}
DocumentHTML+="</table><br>\n" +

"<table width=100% cellspacing=0>\n" +
"<tr><td><b>PROBLEMS ON ADMISSION: </b></td></tr>\n" +
    "<tr><td>" + Patient.othproc.value + "</td></tr></table><br>\n" +

"<table width=100% border=0 cellspacing=0>\n" +
"<tr><td><b>COMORBIDITIES: </b></td></tr>\n" +
"<tr valign=top><td>LONG TERM ANTICOAGULANT THERAPY&nbsp;&nbsp;&nbsp;\n"+
"    YES<input type= checkbox name=comoryes>\n"+
"    NO<input type= checkbox name=comorno>\n"+
"    <td>DIABETES </td></tr>\n"+
"<tr>"+
"    <td><input type= checkbox name=calyes>CAL&nbsp;&nbsp;\n"+
"    <input type= checkbox name=asthmays>ASTHMA&nbsp;&nbsp;\n"+
"    <input type= checkbox name=ihdyes>IHD&nbsp;&nbsp;\n"+
"    <input type= checkbox name=ccfyes>CCF&nbsp;&nbsp;\n"+
"    <input type= checkbox name=hyperten>HYPERTENSION&nbsp;&nbsp;\n"+
"    </td>"+
"    <td><input type= checkbox name=type1>TYPE 2\n"+
"</td></tr>\n"+
"<tr>"+
"    <td><input type= checkbox name=other>OTHER&nbsp;&nbsp;&nbsp;&nbsp;\n"+
"    <input type=text name=othrcomo size=40 >&nbsp;&nbsp;\n"+
"    <td><input type= checkbox name=type1>TYPE 2 WITH INSULIN\n"+
"    </td></tr>\n"+
"</table><br>\n" +

"<table width=100% border=0 cellspacing=0>\n" +
"<tr><td><b>MANAGEMENT AND INVESTIGATIONS: INCLUDE RELEVANT " +
"DIAGNOSIS TESTS, DRUGS ETC.</b></td></tr>\n" +
"<tr><td>" + Patient.othreas.value + "</td></tr>\n" +

"</table><br>\n" +

"<table width=100% border=0 cellspacing=0>\n" +
"<tr><td><b> READMISSION WITHIN 28 DAYS </b>\n" +
Patient.readmit28.value + "</td></tr></table><br>\n" +

"<P class=breakhere>" +
"<table width=100% border=0 cellspacing=0>\n" +
"<tr><td><b>COMPLICATIONS: </b></td></tr>\n" +
"    <td><input type=checkbox name=nilyes>NIL\n"+
"    </td></tr>\n"+
"<tr> <td><input type= checkbox name=winfect>WOUND INFECTION&nbsp;&nbsp;\n"+
"    <input type= checkbox name=wdisrupt>WOUND INFECTION&nbsp;&nbsp;\n"+
"    <input type= checkbox name=haemorrg>HAEMORRHAGE/HAEMATOMA&nbsp;&nbsp;\n"+
"    <input type= checkbox name=peyes>PE&nbsp;&nbsp;\n"+
"    <input type= checkbox name=otheryes>OTHER&nbsp;&nbsp;\n"+
"    </td></tr>\n"+
"<tr valign=top><td><input type= checkbox name=utiyes>UTI&nbsp;&nbsp;\n"+
"    <input type=checkbox name=cinfect>CHEST INFECTION&nbsp;&nbsp;\n"+
"    <input type=checkbox name=dvtyes>DVT&nbsp;&nbsp;\n"+
"    <input type=checkbox name=soreulcr>PRESSURE SORE/ULCER&nbsp;&nbsp;\n"+
"    <input type=text name=othrcomp size=40>&nbsp;&nbsp;\n"+
"    </td></tr>\n"+
"</table><br>\n" +

"<table width=100% border=0 cellspacing=0>\n" +
"<tr><td><b>PROBLEMS ON DISCHARGE:</b></td></tr> \n" +
"<tr><td>" + Patient.labfind.value + "</td></tr>\n" +
"</table></tr><br>\n"+

"<tr><table width=100% border=2 cellspacing=0><tr>" +
"<td align=center><b>Medication on Discharge</td>\n" +
"<td align=center><b>Dose</td>\n" +
"<td align=center><b>Frequency</td>\n" +
"<td align=center><b>Duration</td>\n" +
"<td align=center><b>Medication on Discharge</td>\n" +
"<td align=center><b>Dose</td>\n" +
"<td align=center><b>Frequency</td>\n" +
"<td align=center><b>Duration</td></tr>\n" +

"<tr><td>&nbsp;" + Patient.Code1.value + " - " +
                   Patient.drug1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose1.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura1.value + "</td>\n"

if(Patient.drug2.value!="")
{
  DocumentHTML+="<td>&nbsp;" + Patient.Code2.value + " - " +
               Patient.drug2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose2.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura2.value + "</td></tr>\n"
}
else
{
  DocumentHTML+="<td>&nbsp;</td>\n" +
                "<td>&nbsp;</td>\n" +
                "<td>&nbsp;</td>\n" +
                "<td>&nbsp;</td></tr>\n"
}

if (Patient.drug3.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code3.value + " - " +
               Patient.drug3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose3.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura3.value + "</td>\n"
}

if (Patient.drug4.value!=""){
 DocumentHTML+="<td>&nbsp;" + Patient.Code4.value + " - " +
               Patient.drug4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose4.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura4.value + "</td></tr>\n"
}

if(Patient.drug5.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code5.value + " - " +
               Patient.drug5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose5.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura5.value + "</td>\n"
}
if(Patient.drug6.value!=""){
  DocumentHTML+="<td>&nbsp;" + Patient.Code6.value + " - " +
               Patient.drug6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose6.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq6.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura6.value + "</td></tr>\n"
}
if(Patient.drug7.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code7.value + " - " +
               Patient.drug7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose7.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq7.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura7.value + "</td>\n"
}
if(Patient.drug8.value!=""){
  DocumentHTML+="<td>&nbsp;" + Patient.Code8.value + " - " +
               Patient.drug8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose8.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq8.value + "</td>\n" +
"<td>&nbsp;" + Patient.dura8.value + "</td></tr>\n"
}
 DocumentHTML+="</table><br>" +

"<table width=100% border=0 align=center cellspacing=0\n>" +
"<tr><td width=15%><b>FOLLOW UP:</b></td>\n" +
    "<td><b>V.M.O. </b></td>\n" +
    "<td>" + GP.VMO.value + "</td></tr>\n" +
"<tr><td width=15%></td><td><b>L.M.O. </b></td>\n" +
    "<td>" + GP.LMO.value + "</td></tr>\n" +
"<tr><td width=15%></td><td><b>OTHERS </b></td>\n" +
    "<td>" +  "</td></tr>\n" +
"</table></tr>\n" +

"<table width=100% border=0 align=center cellspacing=0><br>\n" +
"<tr><td><b>PRINT NAME:</b></td>\n" +
    "<td width=30%>_________________________ </td>\n" +
    "<td><b>SIGNED:</b></td>" +
    "<td width=30%>_________________________ </td>\n" +
    "<td><b>&nbsp;&nbsp;&nbsp;MEDICAL OFFICER </b></td></tr>\n" +

"</table></tr>\n"

  return(DocumentHTML)
}
// NEHTA Layout (Format 3)
//
function NEHTALayout() {
DocumentHTML=
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:10pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.HeadingRow1  { \n" +
"font-family: Arial;\n" +
"font-size:16pt; \n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10pt; \n" +
"font-weight:bold; }\n" +
"table.outlineBorder{\n"+
"border-width: 1px;\n"+
"border-color:#000000;\n"+
"border-style:solid; }\n"+
"P.breakhere {page-break-before: always}\n" +
"</style>\n" +
"<body><table border=0 align=center width=100%>\n" +
"<tr><td colspan=8><img height=100 src='../images/" +
  trim(UpdateForm.hospcode.value) + "logo.gif'></td>";

if (UpdateForm.ibcnmhos.value=="1") {
  DocumentHTML +=
  "<td align=right><table>\n" +
  "<tr><td align=right class=HeadingRow> " + Patient.pthsname.value + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.pthsadd1.value + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.pthsadd3.value +
  "&nbsp;" + Patient.pthsadd4.value +
  "&nbsp;" + Patient.pthspcod.value + "</td></tr>\n" +
  "<tr><td align=right>P: " + Patient.pthstele.value + "</td></tr>\n" +
  "<tr><td align=right>F: " + Patient.pthsfaxn.value + "</td></tr>\n" +
  "<tr><td align=right>&nbsp;</td></tr>\n"
} else {
  DocumentHTML +=
  "<td align=right><table>\n" +
  "<tr><td align=right class=HeadingRow> " + HospitalNameStr + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.hospadd1.value + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.hospadd2.value +
  "&nbsp;" + Patient.hosppost.value + "</td></tr>\n" +
  "<tr><td align=right>P: " + Patient.hospphone.value + "</td></tr>\n" +
  "<tr><td align=right>F: " + Patient.hospfax.value + "</td></tr>\n" +
  "<tr><td align=right>&nbsp;</td></tr>\n"
}

DocumentHTML+=
"</table></td>\n" +
"</tr>\n" +
"</table>\n" +

"<table border=0 align=center width=100%>\n" +
"<tr><td class=HeadingRow1 colspan=4 align=center>\n" +
"DISCHARGE SUMMARY - Admitted Patient</td></tr>\n" +
"<tr><td width=50%><b>Episode ID: </b>" + Patient.admissno.value +"</td>\n"+
"<td width=50%><b>Date Sent: </b>" + UpdateForm.corsp002.value + "</td></tr>\n" +
"<tr><td><b>Version Number: </b> "+ Patient.versionnumber.value + "</td>\n" +
"<td><b>Summary Status: </b> Final" + "</td></tr>\n" +
"<tr><td valign=top><table valign=top>\n" +
"<tr><td><b>Attending Consultant: </b>\n" +
Patient.attdoct.value + "</td></tr>\n" +
"<tr><td><b>Ward: </b>" + Patient.warddesc.value + "</td></tr>\n" +
"<tr><td><b>Phone: </b>" +
Patient.hospphone.value.substr(0,8) +
Patient.wardextn.value + "</td></tr>\n" +
"<tr><td><b>Summary Author: </b>\n" +
UpdateForm.heasummaryauthor.value + "</td></tr>\n"+
"<tr><td></td></tr>" +
"<tr><td><b>Referred By: \n</b>" +
Patient.refdoctt.value + Patient.refdoctg.value + Patient.refdocts.value + "</td></tr>\n" +
"</table></td>\n" +
"<td valign=top><table valign=top class=outlineBorder>\n" 
//"<tr><td><table class=outlineBorder rowspan=10 width=100%>\n" +
DocumentHTML+="<tr><td><b>Patient Details: </b>" + 
"<tr><td><b>UR: </b>" + Patient.urnumber.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.formname.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.Address1.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.Address2.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.Address3.value + Patient.Address4.value +
Patient.PostCode.value + "</td></tr>\n" +
"<tr><td>Sex: " + Patient.sex.value +
"</td><td>DOB: " + Patient.dob.value +
"</td><td nowrap>Age: " + Patient.Age.value + "</td></tr>\n" +
"<tr><td colspan=2>Indigenous Status: " + Patient.indigstatus.value + "</td></tr>\n" +
"<tr><td colspan=2><b>Insurance/Health Fund: </td></tr>\n" +
"<tr><td colspan=2>Insurance type: " + Patient.claimcode.value + "</td></tr>\n" +
"<tr><td colspan=2>Membership No: " + Patient.memberno.value + "</td></tr>\n" +
"<tr><td colspan=2>Organisation Name: "
if(Patient.hfund.value==""){
  DocumentHTML+=Patient.claimcode.value
} else {
  DocumentHTML+=Patient.hfund.value
}
DocumentHTML+="</td></tr>\n" +
"</table></td></tr>\n" +
"<tr><td><table class=outlineBorder width=100%>\n" +
"<tr><td valign=top width=50%>\n" +
"<tr><td class=HeadingRow>Patients Nominated General Practitioner:\n"+
"<tr><td>" + Patient.localdoctt.value +  Patient.localdoctg.value +
Patient.localdocts.value + "</td></tr>\n" 
if(Patient.practice.value!=""){
  DocumentHTML+="<tr><td>" + Patient.practice.value + "</td></tr>\n" +
  "<tr><td>" + Patient.pracadd1.value + "</td></tr>\n" +
  "<tr><td>" + Patient.pracadd2.value + "</td></tr>\n" +
  "<tr><td>" + Patient.pracadd3.value +
  Patient.pracadd4.value + Patient.pracpost.value +"</td></tr>\n" +
  "<tr><td>Tel:" + Patient.practele.value +
  "Fax: " + Patient.pracfax.value +"</td></tr>\n" +
  "<tr><td>Email: " + Patient.pracemail.value + "</td></tr>\n"
} else {
  DocumentHTML+="<tr><td>" + "</td></tr>\n" +
  "<tr><td>" + Patient.lgpadd1.value + "</td></tr>\n" +
  "<tr><td>" + Patient.lgpadd2.value + "</td></tr>\n" +
  "<tr><td>" + Patient.lgpadd3.value +
  Patient.lgpadd4.value + Patient.lgppost.value +"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
  "<tr><td>Tel:" + Patient.lgptele.value +
  "Fax: " + Patient.lgpfax.value +"</td></tr>\n" +
  "<tr><td>Email: " + Patient.lgpemail.value + "</td></tr>\n"
}
DocumentHTML+="<tr><td>&nbsp;</td></tr>\n" +
"</table></td>\n" +
"<td><table>\n" +
"<tr><td><b>Admission Date/Time: </b>\n" + Patient.admdate.value +
" "+Patient.admtime.value + "</td></tr>\n" +
"<tr><td><b>Admission Reason: </b>\n" + Patient.admreason.value + "</td></tr>\n"+
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Discharge Date/Time: </b>\n" + Patient.dscdate.value +
Patient.dsctime.value + "</td></tr>\n" +
//"<tr><td><b>Discharge Disposition: </b>\n" + Patient.dstatus.value +"</td></tr>\n" +
"<tr><td><b>Discharge Destination: </b>" + Patient.ddest.value +"</td></tr>\n"
if(Patient.discdest.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.discdest.value + "</td></tr>"
}
DocumentHTML+=
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Discharge Summary Recipient </b></u>" + "</td></tr>\n" +
"<tr><td><b>Recipient Name: </b>" + UpdateForm.recipnam.value +"</td></tr>\n" +
"<tr><td><b>Organisation Name: </b>" + UpdateForm.genpprac.value +"</td></tr>\n" +
"</td></tr></table></td></tr>\n"+
"<tr><td colspan=2><table align=center width=100%>\n" +
"<tr></tr>\n"+
// start new code
"<tr><td class=HeadingRow>PROBLEMS/DIAGNOSES: This Visit"+ "</td></tr>\n" +
"<tr><td>Admission Problem: "+Patient.casemix.value+ "</td></tr>\n" +
"<tr><td colspan=2><table width=100% border=0 class=outlineBorder>\n" +
"<tr><td><b>Problem/Diagnosis</b></td>\n" +
"<td><b>Date Start</b></td>\n" +
"<td><b>Note</b></td></tr>\n" +
"</table></td></tr>\n" +
"<tr><td>Discharge Problems/Diagnosis: "+Patient.discdiag.value+"</td></tr>\n" +
"<tr><td><table align=center cellspacing=0 width=100% border=1 \n"+
" border-color=#000000>\n" +
"<tr><td><b>Problem/Diagnosis: " +
"<td><b>Date Start</b></td>\n" +
"<td><b>Note</b></td></tr>\n" +
"<tr><td>" + Patient.diag1d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.diag2d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.diag3d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.diag4d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.diag5d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Significant Events: </b></td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Event Description: " +
"<td><b>Date Start</b></td>\n" +
"<td><b>Note</b></td></tr>\n" +
"<tr><td>" + Patient.eventdesc.value +
"\n</td><td>" + Patient.eventdate.value +
"\n</td><td>" + Patient.eventnote.value +
"\n</table></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>ASSOCIATED PROBLEMS/COMORBIDITIES: "+ "</b></td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Problem/Diagnosis: " +
"<td><b>Date Start</b></td>\n" +
"<td><b>Note</b></td></tr>\n" +
"<tr><td>" + Patient.assocdiag1d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.assocdiag2d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.assocdiag3d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.assocdiag4d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.assocdiag5d.value +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>PROCEDURES PERFORMED: This Visit "+ "</b></td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Procedure: " +
"<td><b>Performed Date</b></td>\n" +
"<td><b>Procedure Note</b></td></tr>\n" +
"<tr><td>" + Patient.proc1d.value +
"</td><td>" + Patient.procdate1.value +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.proc2d.value +
"</td><td>" + Patient.procdate2.value +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.proc3d.value +
"</td><td>" + Patient.procdate3.value +
"<td>&nbsp;</td></tr>\n" +
"<tr><td>" + Patient.proc4d.value +
"</td><td>" + Patient.procdate4.value +
"<td>&nbsp;</td></tr>\n" +
"</table></td></tr>\n" +
"<P class=breakhere>" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>MEDICATIONS "+ "</b></td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Medication Name " +
"<td><b>Dose</b></td>\n" +
"<td><b>Freq</b></td>\n" +
"<td><b>Frequency Qualifier</b></td>\n" +
"<td><b>Route</b></td>\n" +
"<td><b>Reason for Medication</b></td>\n" +
"<td><b>Status</b></td>\n" +
"<td><b>Change Description</b></td>\n" +
"<td><b>Changed Reason</b></td></tr>\n" +
"<tr><td>&nbsp;" + Patient.Code1.value + " - " +
Patient.drug1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose1.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq1.value + "</td>\n" +
"<td>&nbsp;" + Patient.quan1.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef1.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n"
if(Patient.drug2.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code2.value + " - " +
Patient.drug2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose2.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq2.value + "</td>\n" +
"<td>&nbsp;" + Patient.quan2.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef2.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n"
}
if(Patient.drug3.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code3.value + " - " +
Patient.drug3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose3.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq3.value + "</td>\n" +
"<td>&nbsp;" + Patient.quan3.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef3.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n"
}
if(Patient.drug4.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code4.value + " - " +
Patient.drug4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose4.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq4.value + "</td>\n" +
"<td>&nbsp;" + Patient.quan4.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef4.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n"
}
if(Patient.drug5.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.Code5.value + " - " +
Patient.drug5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dose5.value + "</td>\n" +
"<td>&nbsp;" + Patient.freq5.value + "</td>\n" +
"<td>&nbsp;" + Patient.quan5.value + "</td>\n" +
"<td>&nbsp;" + Patient.dosef5.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n"
}
  DocumentHTML+=
"</tr><tr><td colspan=9>NOTE: " +
"</td></tr>\n " +
"</table></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>KNOWN ADVERSE REACTIONS & ALERTS "+ "</b></td></tr>\n" +
"<tr><td>Adverse Reactions/Allergies: "+ "</td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Agent " +
"<td><b>Reaction</b></td>\n" +
"<td><b>Finding Sites</b></td>\n" +
"<td><b>Site Qualifier</b></td>\n" +
"<td><b>Date Start</b></td>\n" +
"<td><b>Reaction Note</b></td></tr>\n" +
"<tr><td>&nbsp;" + Patient.allergy1.value + "</td>\n "+
"<td>&nbsp;" + Patient.reaction1.value + "</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;</td>\n" +
"<td>&nbsp;" + Patient.allergyd1.value + "</td>\n" +
"<td>&nbsp;" + Patient.allergyc1.value + "</td></tr>\n"
if(Patient.allergy2.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy2.value + "</td>\n "+
  "<td>&nbsp;" + Patient.reaction2.value + "</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;" + Patient.allergyd2.value + "</td>\n" +
  "<td>&nbsp;" + Patient.allergyc2.value + "</td></tr>\n"
}
if(Patient.allergy3.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy3.value + "</td>\n "+
  "<td>&nbsp;" + Patient.reaction3.value + "</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;" + Patient.allergyd3.value + "</td>\n" +
  "<td>&nbsp;" + Patient.allergyc3.value + "</td></tr>\n"
}
if(Patient.allergy4.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy4.value + "</td>\n "+
  "<td>&nbsp;" + Patient.reaction4.value + "</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;" + Patient.allergyd4.value + "</td>\n" +
  "<td>&nbsp;" + Patient.allergyc4.value + "</td></tr>\n"
}
if(Patient.allergy5.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy5.value + "</td>\n "+
  "<td>&nbsp;" + Patient.reaction5.value + "</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;</td>\n" +
  "<td>&nbsp;" + Patient.allergyd5.value + "</td>\n" +
  "<td>&nbsp;" + Patient.allergyc5.value + "</td></tr>\n"
}
DocumentHTML+=
"</table></td></tr>\n" +
"<tr><td>Alerts/Warnings: "+ "</td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Alert Description </td>\n" +
"<td><b>Date Start</b></td>\n" +
"<td><b>Alert Note</b></td></tr>\n" +
"<tr><td>&nbsp;" + Patient.alert1.value + "</td>\n "+
"<td>&nbsp;" + Patient.alertd1.value + "</td>\n" +
"<td>&nbsp;" + Patient.alertc1.value + "</td></tr>\n"
if(Patient.alert2.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert2.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertd2.value + "</td>\n" +
  "<td>&nbsp;" + Patient.alertc2.value + "</td></tr>\n"
}
if(Patient.alert3.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert3.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertd3.value + "</td>\n" +
  "<td>&nbsp;" + Patient.alertc3.value + "</td></tr>\n"
}
if(Patient.alert4.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert4.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertd4.value + "</td>\n" +
  "<td>&nbsp;" + Patient.alertc4.value + "</td></tr>\n"
}
if(Patient.alert5.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert5.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertd5.value + "</td>\n" +
  "<td>&nbsp;" + Patient.alertc5.value + "</td></tr>\n"
}
DocumentHTML+=
"</table></td></tr>" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>CLINICAL MANAGEMENT: "+ "</b></td></tr>\n" +
"<tr><td colspan=2><table >\n"
DocumentHTML+=
"<tr><td>Diagnosis 1: "+Patient.nursing.value+"</td></tr>\n"
DocumentHTML+=
"<tr><td>Care Plan/Action 1: "+Patient.careplan1.value+"</td></tr>\n"
if(trim(Patient.nursing2.value)!=""){
DocumentHTML+=
"<tr><td>Diagnosis 2: "+Patient.nursing2.value+"</td></tr>\n"
}
if(trim(Patient.careplan2.value)!=""){
DocumentHTML+=
"<tr><td>Care Plan/Action 2: "+Patient.careplan2.value+"</td></tr>\n"
}
if(trim(Patient.nursing3.value)!=""){
DocumentHTML+=
"<tr><td>Diagnosis 3: "+Patient.nursing3.value+"</td></tr>\n"
}
if(trim(Patient.careplan3.value)!=""){
DocumentHTML+=
"<tr><td>Care Plan/Action 3: "+Patient.careplan3.value+"</td></tr>\n"
}
if(trim(Patient.nursing4.value)!=""){
DocumentHTML+=
"<tr><td>Diagnosis 4: "+Patient.nursing4.value+"</td></tr>\n"
}
if(trim(Patient.careplan4.value)!=""){
DocumentHTML+=
"<tr><td>Care Plan/Action 4: "+Patient.careplan4.value+"</td></tr>\n"
}
if(trim(Patient.nursing5.value)!=""){
DocumentHTML+=
"<tr><td>Diagnosis 5: "+Patient.nursing5.value+"</td></tr>\n"
}
if(trim(Patient.careplan5.value)!=""){
DocumentHTML+=
"<tr><td>Care Plan/Action 5: "+Patient.careplan5.value+"</td></tr>\n"
}
if(trim(Patient.nursing6.value)!=""){
DocumentHTML+=
"<tr><td>Diagnosis 6: "+Patient.nursing6.value+"</td></tr>\n"
}
if(trim(Patient.careplan6.value)!=""){
DocumentHTML+=
"<tr><td>Care Plan/Action 6: "+Patient.careplan6.value+"</td></tr>\n"
}
DocumentHTML+=
"</table></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"+
"<tr><td><b>Requested Follow-up Service :</b>"+ Patient.reqfollow.value+"</td></tr>\n" +
"<tr><td><b>Follow-up Appointment</td>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td><b>Referred to " + "</b></td>\n" +
"<td><b>Service Requested</b></td>\n" +
"<td><b>Appointment Date</b></td>\n" +
"<td><b>Appointment Time</b></td></tr>\n"
if(Patient.outvis01!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli01.value + "</td>\n" +
                "<td>" + Patient.outvty01.value + "</td>\n" +
                "<td>" + Patient.outdat01.value + "</td>\n" +
                "<td>" + Patient.outtim01.value + "</td></tr>\n"
}
if(Patient.outvis02!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli02.value + "</td>\n" +
                "<td>" + Patient.outvty02.value + "</td>\n" +
                "<td>" + Patient.outdat02.value + "</td>\n" +
                "<td>" + Patient.outtim02.value + "</td></tr>\n"
}
if(Patient.outvis03!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli03.value + "</td>\n" +
                "<td>" + Patient.outvty03.value + "</td>\n" +
                "<td>" + Patient.outdat03.value + "</td>\n" +
                "<td>" + Patient.outtim03.value + "</td></tr>\n"
}
if(Patient.outvis04!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli04.value + "</td>\n" +
                "<td>" + Patient.outvty04.value + "</td>\n" +
                "<td>" + Patient.outdat04.value + "</td>\n" +
                "<td>" + Patient.outtim04.value + "</td></tr>\n"
}
if(Patient.outvis05!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli05.value + "</td>\n" +
                "<td>" + Patient.outvty05.value + "</td>\n" +
                "<td>" + Patient.outdat05.value + "</td>\n" +
                "<td>" + Patient.outtim05.value + "</td></tr>\n"
}
DocumentHTML+="</table></td></tr>" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Patient Instructions :" + "</b></td></tr>\n" +
"<tr><td>" +Patient.patientins.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>RECOMMENDATIONS TO GP " + "</b></td></tr>\n" +
"<tr><td>" +Patient.reqtogp.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>INVESTIGATIONS PERFORMED: This Visit " + "</b></td></tr>\n" +
"<tr><td><b>PATHOLOGY " + "</b></td></tr>\n" +
"<tr><td> " +Patient.pathresults.value+ "</td></tr>\n" +
"<tr><td><b>DIAGNOSTIC IMAGING" + "</b></td></tr>\n" +
"<tr><td> " +Patient.diagimaging.value+ "</td></tr>\n" +
"<tr><td><b>OTHER INVESTIGATIONS </b></td></tr>\n" +
"<tr><td>"+Patient.othinvest.value+"</td></tr>\n" +
"</table></td></tr>\n" +
"</body>"
  return(DocumentHTML) 
}
// end NEHTA layout
//
// Healthscope layout
//
function HEALayout() {
DocumentHTML=
"<style type=text/css>\n" +
"body { margin:10; \n" +
"font-family: Arial; }\n" +
"td { font-size:10pt;}\n" +
"td.SectHead { \n" +
"background-color:lightgrey;\n" +
"font-family: Arial;\n" +
"font-weight:bold; }\n" +
"td.HeadingRow1  { \n" +
"font-family: Arial;\n" +
"font-size:16pt; \n" +
"font-weight:bold; }\n" +
"td.HeadingRow  { \n" +
"font-family: Arial;\n" +
"font-size:10pt; \n" +
"font-weight:bold; }\n" + 
"table.outlineBorder{\n"+
"border-width: 1px;\n"+
"border-color:#000000;\n"+
"border-style:solid; }\n"+
"P.breakhere {}\n" +
"</style>\n" +
"<body><table border=0 align=center width=100%>\n" +
"<tr><td colspan=8><img height=100 src='../images/" +
  trim(UpdateForm.hospcode.value) + "logo.gif'></td>";

if (UpdateForm.ibcnmhos.value=="1") {
  DocumentHTML +=
  "<td align=right><table>\n" +
  "<tr><td align=right class=HeadingRow> " + Patient.pthsname.value + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.pthsadd1.value + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.pthsadd3.value +
  "&nbsp;" + Patient.pthsadd4.value +
  "&nbsp;" + Patient.pthspcod.value + "</td></tr>\n" +
  "<tr><td align=right>P: " + Patient.pthstele.value + "</td></tr>\n" +
  "<tr><td align=right>F: " + Patient.pthsfaxn.value + "</td></tr>\n" +
  "<tr><td align=right>&nbsp;</td></tr>\n"
} else {
  DocumentHTML +=
  "<td align=right><table>\n" +
  "<tr><td align=right class=HeadingRow> " + HospitalNameStr + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.hospadd1.value + "</td></tr>\n" +
  "<tr><td align=right>" + Patient.hospadd2.value +
  "&nbsp;" + Patient.hosppost.value + "</td></tr>\n" +
  "<tr><td align=right>P: " + Patient.hospphone.value + "</td></tr>\n" +
  "<tr><td align=right>F: " + Patient.hospfax.value + "</td></tr>\n" +
  "<tr><td align=right>&nbsp;</td></tr>\n"
}

DocumentHTML+=
"</table></td>\n" +
"</tr>\n" +
"</table>\n" +

"<table border=0 align=center width=100%>\n" +
"<tr><td class=HeadingRow1 colspan=2 align=center>\n" +
"NURSING DISCHARGE SUMMARY - Admitted Patient</td></tr>\n" +
"<tr><td valign=top><table>\n" +
"<tr><td colspan=2><table class=outlineBorder width=100%>\n" +
"<tr><td class=HeadingRow>Patients Nominated General Practitioner:\n"+
"<tr><td>" + Patient.localdoctt.value +  Patient.localdoctg.value +  
Patient.localdocts.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
if(Patient.practice.value!=""){
  DocumentHTML+="<tr><td>" + Patient.practice.value + "</td></tr>\n" +
  "<tr><td>" + Patient.pracadd1.value + "</td></tr>\n" +
  "<tr><td>" + Patient.pracadd2.value + "</td></tr>\n" +
  "<tr><td>" + Patient.pracadd3.value +
  Patient.pracadd4.value + Patient.pracpost.value +"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
  "<tr><td>Tel:" + Patient.practele.value + 
  "Fax: " + Patient.pracfax.value +"</td></tr>\n" +
  "<tr><td>Email: " + Patient.pracemail.value + "</td></tr>\n"
} else {
  DocumentHTML+="<tr><td>" + "</td></tr>\n" +
  "<tr><td>" + Patient.lgpadd1.value + "</td></tr>\n" +
  "<tr><td>" + Patient.lgpadd2.value + "</td></tr>\n" +
  "<tr><td>" + Patient.lgpadd3.value +
  Patient.lgpadd4.value + Patient.lgppost.value +"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
  "<tr><td>Tel:" + Patient.lgptele.value + 
  "Fax: " + Patient.lgpfax.value +"</td></tr>\n" +
  "<tr><td>Email: " + Patient.lgpemail.value + "</td></tr>\n"
}
DocumentHTML+="<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"</table><table>" +
"<tr><td colspan=2><b>Attending Consultant: </b>\n" + 
Patient.attdoct.value + "</td></tr>\n" +
"<tr><td><b>Ward: </b>" + Patient.warddesc.value + "</td></tr>\n" +
//"<tr><td nowrap><b>Phone: </b>" + 
//Patient.hospphone.value.substr(0,8) +
//Patient.wardextn.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td colspan=2><b>Referred By: \n</b>" + 
Patient.refdoctt.value + Patient.refdoctg.value + Patient.refdocts.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Summary Status: </b> Final" + "</td></tr>\n" +
"<tr><td><b>Date Sent: </b>" + UpdateForm.corsp002.value + "</td></tr>\n" +
"<tr><td><b>Version Number: </b> "+ Patient.versionnumber.value + "</td></tr>\n" 
//"<tr><td colspan=2 nowrap><b>Summary Author: </b>\n" + 
//UpdateForm.heasummaryauthor.value + "</td></tr>\n"
DocumentHTML+="</table></td></tr>\n" +
"</table></td>\n" +
"<td valign=top><table valign=top>\n" +
"<tr><td><table class=outlineBorder rowspan=10 width=100%>\n" +
"<tr><td><b>UR: </b>" + Patient.urnumber.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.formname.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.Address1.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.Address2.value + "</td></tr>\n" +
"<tr><td colspan=2>" + Patient.Address3.value + Patient.Address4.value +
Patient.PostCode.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>Sex: " + Patient.sex.value + 
"</td><td>DOB: " + Patient.dob.value + 
"</td><td nowrap>Age: " + Patient.Age.value + "</td></tr>\n" +
"<tr><td colspan=2>Indigenous Status: " + Patient.indigstatus.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td colspan=2><b>Insurance/Health Fund: </td></tr>\n" +
"<tr><td colspan=2>Insurance type: " + Patient.claimcode.value + "</td></tr>\n" +
"<tr><td colspan=2>Membership No: " + Patient.memberno.value + "</td></tr>\n" +
"<tr><td colspan=2>Organisation Name: " 
if(Patient.hfund.value==""){
  DocumentHTML+=Patient.claimcode.value
} else {
  DocumentHTML+=Patient.hfund.value
}
DocumentHTML+="</td></tr>\n" +
"</td></tr></table></td></tr>\n" +
"<tr><td><b>Admission Date/Time: </b>\n" + Patient.admdate.value +
" "+Patient.admtime.value + "</td></tr>\n" +
"<tr><td><b>Admission Reason: </b>\n" + Patient.admreason.value + "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Visit Number: </b>" + Patient.admissno.value +"</td></tr>\n"+
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Discharge Date/Time: </b>\n" + Patient.dscdate.value +
Patient.dsctime.value + "</td></tr>\n" +
//"<tr><td><b>Discharge Disposition: </b>\n" + Patient.dstatus.value +"</td></tr>\n" +
"<tr><td><b>Discharge Destination: </b>" + Patient.ddest.value +"</td></tr>\n" 
if(Patient.discdest.value!=""){
  DocumentHTML+="<tr><td>&nbsp;" + Patient.discdest.value + "</td></tr>"
}
DocumentHTML+=
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Discharge Summary Recipient </b></u>" + "</td></tr>\n" +
"<tr><td><b>Recipient Name: </b>" + UpdateForm.recipnam.value +"</td></tr>\n" +
"<tr><td><b>Organisation Name: </b>" + UpdateForm.genpprac.value +"</td></tr>\n" +
"</td></tr></table></td></tr>\n"+
"<tr><td colspan=2><table align=center width=100%>\n" +
"<tr></tr>\n"+
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Past Medical History: </b></u>" + "</td></tr>\n" +
"<tr><td>" +Patient.medhist.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Admission Progress: </b></u>" + "</td></tr>\n" +
"<tr><td>" +Patient.progress.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Observations: </b></u>" + "</td></tr>\n" +
"<tr><td>" +Patient.observat.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Allied Health Discharge Notes: </b></u>" + "</td></tr>\n" +
"<tr><td>" +Patient.allhealt.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>Transfer Facility Handover Notes: </b></u>" + "</td></tr>\n" +
"<tr><td>" +Patient.trannote.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><table align=center width=100% border=0 cellspacing=0>\n" +
"<tr><td><b>Procedures: " +
"<td><b>Performed Date</b></td></tr>\n" +
"<tr><td>" + Patient.mmbs1d.value +
"</td><td>" + Patient.mmbsdate1.value +
"</td></tr>\n" +
"<tr><td>" + Patient.mmbs2d.value +
"</td><td>" + Patient.mmbsdate2.value +
"</td></tr>\n" +
"<tr><td>" + Patient.mmbs3d.value +
"</td><td>" + Patient.mmbsdate3.value +
"</td></tr>\n" +
"<tr><td>" + Patient.mmbs4d.value +
"</td><td>" + Patient.mmbsdate4.value +
"</td></tr>\n" +
"</table></td></tr>\n" +
"<P class=breakhere>" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +

"<tr><td><b><u>KNOWN ADVERSE REACTIONS & ALERTS "+ "</b></u></td></tr>\n" +
"<tr><td>Adverse Reactions/Allergies: "+ "</td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td width=30%><b>Alert Description </td>\n" +
"<td><b>Reaction Comment</b></td></tr>\n" +
"<tr><td>&nbsp;" + Patient.allergy1.value + "</td>\n "+
"<td>&nbsp;" + Patient.allergyc1.value + "</td></tr>\n" 
if(Patient.allergy2.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy2.value + "</td>\n "+
  "<td>&nbsp;" + Patient.allergyc2.value + "</td></tr>\n"
}
if(Patient.allergy3.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy3.value + "</td>\n "+
  "<td>&nbsp;" + Patient.allergyc3.value + "</td></tr>\n"
}
if(Patient.allergy4.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy4.value + "</td>\n "+
  "<td>&nbsp;" + Patient.allergyc4.value + "</td></tr>\n"
}
if(Patient.allergy5.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.allergy5.value + "</td>\n "+
  "<td>&nbsp;" + Patient.allergyc5.value + "</td></tr>\n"
}

DocumentHTML+=
"</table></td></tr>\n" +
"<tr><td>Alerts/Warnings: "+ "</td></tr>\n" +
"<tr><td><table align=center width=100% border=1 cellspacing=0>\n" +
"<tr><td width=30%><b>Alert Description </td>\n" +
"<td><b>Reaction Comment</b></td></tr>\n" +
"<tr><td>&nbsp;" + Patient.alert1.value + "</td>\n "+
"<td>&nbsp;" + Patient.alertc1.value + "</td></tr>\n" 
if(Patient.alert2.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert2.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertc2.value + "</td></tr>\n"
}
if(Patient.alert3.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert3.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertc3.value + "</td></tr>\n"
}
if(Patient.alert4.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert4.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertc4.value + "</td></tr>\n"
}
if(Patient.alert5.value!=""){
  DocumentHTML+=
  "<tr><td>&nbsp;" + Patient.alert5.value + "</td>\n "+
  "<td>&nbsp;" + Patient.alertc5.value + "</td></tr>\n"
}
DocumentHTML+=
"</table></td></tr>" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>CLINICAL MANAGEMENT: "+ "</b></u></td></tr>\n" +
"<tr><td colspan=2><table >\n" 
DocumentHTML+=
"<tr><td><b> 1: "+Patient.nursing.value+"</td></tr>\n" 
DocumentHTML+=
"<tr><td><b>Care Plan 1: </b>"+Patient.careplan1.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
if(trim(Patient.nursing2.value)!=""){
DocumentHTML+=
"<tr><td><b> 2: "+Patient.nursing2.value+"</td></tr>\n" 
}
if(trim(Patient.careplan2.value)!=""){
DocumentHTML+=
"<tr><td><b>Care Plan 2: </b>"+Patient.careplan2.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
}
if(trim(Patient.nursing3.value)!=""){
DocumentHTML+=
"<tr><td><b> 3: "+Patient.nursing3.value+"</td></tr>\n" 
}
if(trim(Patient.careplan3.value)!=""){
DocumentHTML+=
"<tr><td><b>Care Plan 3: </b>"+Patient.careplan3.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
}
if(trim(Patient.nursing4.value)!=""){
DocumentHTML+=
"<tr><td><b> 4: "+Patient.nursing4.value+"</td></tr>\n" 
}
if(trim(Patient.careplan4.value)!=""){
DocumentHTML+=
"<tr><td><b>Care Plan 4: </b>"+Patient.careplan4.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
}
if(trim(Patient.nursing5.value)!=""){
DocumentHTML+=
"<tr><td><b> 5: "+Patient.nursing5.value+"</td></tr>\n" 
}
if(trim(Patient.careplan5.value)!=""){
DocumentHTML+=
"<tr><td><b>Care Plan 5: </b>"+Patient.careplan5.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
}
if(trim(Patient.nursing6.value)!=""){
DocumentHTML+=
"<tr><td><b> 6: "+Patient.nursing6.value+"</td></tr>\n" 
}
if(trim(Patient.careplan6.value)!=""){
DocumentHTML+=
"<tr><td><b>Care Plan 6: </b>"+Patient.careplan6.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"
}
DocumentHTML+=
"</table></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n"+

"<tr><td><b><u>INVESTIGATIONS PERFORMED: This Visit " + "</b></u></td></tr>\n" +
"<tr><td><b>Pathology Performed By: " + "</b></td></tr>\n" +
"<tr><td> " +Patient.pathresults.value+ "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Diagnostic Imaging Performed By: " + "</b></td></tr>\n" +
"<tr><td> " +Patient.diagimaging.value+ "</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Other Investigations: </b></td></tr>\n" +
"<tr><td>"+Patient.othinvest.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Recommendations To GP: " + "</b></td></tr>\n" +
"<tr><td>" +Patient.reqtogp.value+"</b></td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b>Requested Follow-up Service: </b></td></tr>\n" +
"<tr><td>" + Patient.reqfollow.value+"</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +

"<tr><td>&nbsp;</td></tr></table>\n"+
document.Patient.Medications.value +
"<table><tr><td>&nbsp;</td></tr>\n" +
"<tr><td><b><u>FOLLOW-UP APPOINTMENTS:</u></td>\n" +
"<tr><td><table align=center width=100% border=0 cellspacing=0>\n" +
"<tr><td><b>Referred to " + "</b></td>\n" +
"<td><b>Service Requested</b></td>\n" +
"<td><b>Date / Time</b></td></tr>\n" 
if(Patient.outvis01!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli01.value + "</td>\n" +
                "<td>" + Patient.outvty01.value + "</td>\n" +
                "<td>" + Patient.outdat01.value + " at " +
                         Patient.outtim01.value + "</td></tr>\n"
}
if(Patient.outvis02!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli02.value + "</td>\n" +
                "<td>" + Patient.outvty02.value + "</td>\n" +
                "<td>" + Patient.outdat02.value + " at " +
                         Patient.outtim02.value + "</td></tr>\n"
}
if(Patient.outvis03!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli03.value + "</td>\n" +
                "<td>" + Patient.outvty03.value + "</td>\n" +
                "<td>" + Patient.outdat03.value + " at " +
                         Patient.outtim03.value + "</td></tr>\n"
}
if(Patient.outvis04!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli04.value + "</td>\n" +
                "<td>" + Patient.outvty04.value + "</td>\n" +
                "<td>" + Patient.outdat04.value + " at " +
                         Patient.outtim04.value + "</td></tr>\n"
}
if(Patient.outvis05!=undefined){
  DocumentHTML+="<tr><td>" + Patient.outcli05.value + "</td>\n" +
                "<td>" + Patient.outvty05.value + "</td>\n" +
                "<td>" + Patient.outdat05.value + " at " +
                         Patient.outtim05.value + "</td></tr>\n"
}
DocumentHTML+="</table></td></tr>" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>&nbsp;</td></tr>\n" +
"<tr><td>Discharging Nurse Signature: ______________________________________ " +
"Date: ______________" + "</td></tr>\n" +

"</table></td></tr>\n" +
"</body>"
  return(DocumentHTML) }
