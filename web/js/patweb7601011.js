//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7601011.js
//
// Written   : 23.01.2007 Peter Vela   
//
// Function  :View Full Estimation  
//
// Version   :
//
// V9.08.01  23/01/2007  Peter Vela    CAR 128097
//           Created js
//========================================================================
function fullEstimateDocument() {
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
"<tr>" +
"<td></td>" +
"<td colspan=2>****  COPY OF ESTIMATION ****</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td width=50>Date: </td>" + "<td width=150>" + Patient.cpcdate.value + "</td>" + "<td colspan=2>Fees Estimation</td>" +
"</tr>\n" +
"<tr>" +
"<td width=50>Time: </td>" + "<td width=150>" + Patient.ctimeis.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td></td>" +
"<td></td>" +
"<td colspan=2>" + Patient.cname.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td width=70>Estimate for </td>" + "<td width=150>" + Patient.patname.value + "</td>" +
"<td></td><td></td><td>U/R No:</td><td>" + Patient.urnumber.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td></td>" +
"<td colspan=2>" + Patient.address1.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td></td>" +
"<td colspan=2>" + Patient.address2.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td></td>" +
"<td>" + Patient.suburb.value + "</td><td>" + Patient.postcode.value + "</td>" +
"<td></td>" +
"<td>Quote No: </td><td>" + Patient.pmfdquot.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td colspan=2>Estimations for a hospitalisation for </td>" +
"<td>" + Patient.pmfdnons.value + " nights</td>" +
"</tr>\n" +
"<tr>" +
"<td colspan=2>based on admission date of </td>" +
"<td>" + Patient.pmfdadat.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td width=80 colspan=2>Claim Code</td>" + "<td>: " + Patient.pmfdclty.value + "</td>" +
"<td>" + Patient.pmfdcltd.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td width=80 colspan=2>Health Fund</td>" + "<td>: " + Patient.pmfdhfun.value +
"</td>" +
"<td>" + Patient.pmfdhfud.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td width=150 colspan=2>Health Fund Table</td>" + "<td>: " + Patient.pmfdhftb.value + "</td>" +
"<td>" + Patient.pmfdhftd.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td width=150 colspan=2>Classification</td>" + "<td>: " + Patient.pmfdatyp.value + "</td>" +
"<td>" + Patient.pmfdatyd.value + "</td>" +
"</tr>\n" +
"<tr>" +
"<td width=150 colspan=2>Bed Type</td>" + "<td>: " + Patient.pmfdbdty.value + "</td>" +
"<td>" + Patient.pmfdbdtd.value + "</td>" +
"</tr>\n"

if(Patient.cmxxflag.value==1) {
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Casemix Code</td>" + "<td>: " + Patient.pmfdcmcd.value + "</td>" +
               "<td>" + Patient.pmfdcmdd.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.tht1code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Theatre Fee Item 1</td>" + "<td>: " + Patient.tht1code.value + "</td>" +
               "<td>" + Patient.tht1desc.value + "</td>" +
               "</tr>\n" 
}

if(!isWhitespace(Patient.tht2code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Theatre Fee Item 2</td>" + "<td>: " + Patient.tht2code.value + "</td>" +
               "<td>" + Patient.tht2desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.tht3code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Theatre Fee Item 3</td>" + "<td>: " + Patient.tht3code.value + "</td>" +
               "<td>" + Patient.tht3desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.tht4code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Theatre Fee Item 4</td>" + "<td>: " + Patient.tht4code.value + "</td>" +
               "<td>" + Patient.tht4desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.tht5code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Theatre Fee Item 5</td>" + "<td>: " + Patient.tht5code.value + "</td>" +
               "<td>" + Patient.tht5desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.tht6code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Theatre Fee Item 6</td>" + "<td>: " + Patient.tht6code.value + "</td>" +
               "<td>" + Patient.tht6desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.mis1code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Misc.Charge Code 1</td>" + "<td>: " + Patient.mis1code.value + "</td>" +
               "<td>" + Patient.mis1desc.value + "</td>" +
               "</tr>\n"
}               

if(!isWhitespace(Patient.mis2code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Misc.Charge Code 2</td>" + "<td>: " + Patient.mis2code.value + "</td>" +
               "<td>" + Patient.mis2desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.mis3code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Misc.Charge Code 3</td>" + "<td>: " + Patient.mis3code.value + "</td>" +
               "<td>" + Patient.mis3desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.mis4code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Misc.Charge Code 4</td>" + "<td>: " + Patient.mis4code.value + "</td>" +
               "<td>" + Patient.mis4desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.mis5code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Misc.Charge Code 5</td>" + "<td>: " + Patient.mis5code.value + "</td>" +
               "<td>" + Patient.mis5desc.value + "</td>" +
               "</tr>\n"
}

if(!isWhitespace(Patient.mis6code.value)){
  DocumentHTML+="<tr>" +
                "<td width=150 colspan=2>Misc.Charge Code 6</td>" + "<td>: " + Patient.mis6code.value + "</td>" +
               "<td>" + Patient.mis6desc.value + "</td>" +
               "</tr>\n"
}

DocumentHTML+="</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td width=155>Accommodation Fee Table</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td><td>Days</td>" +
               "<td>Hospital Fee</td>" +
               "<td>Fund Rebate</td>" +
               "<td>Fund Gap</td>" +
"</tr>\n"

if(Patient.bdfee01a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee01a.value + "</td>" +
                "<td>" + Patient.bdfee01b.value + "</td>" +
                "<td>" + Patient.bdfee01c.value + "</td>" +
                "<td>" + Patient.bdfee01d.value + "</td>" +
                "</tr>\n" 
}
if(Patient.bdfee02a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee02a.value + "</td>" +
                "<td>" + Patient.bdfee02b.value + "</td>" +
                "<td>" + Patient.bdfee02c.value + "</td>" +
                "<td>" + Patient.bdfee02d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee03a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee03a.value + "</td>" +
                "<td>" + Patient.bdfee03b.value + "</td>" +
                "<td>" + Patient.bdfee03c.value + "</td>" +
                "<td>" + Patient.bdfee03d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee04a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee04a.value + "</td>" +
                "<td>" + Patient.bdfee04b.value + "</td>" +
                "<td>" + Patient.bdfee04c.value + "</td>" +
                "<td>" + Patient.bdfee04d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee05a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee05a.value + "</td>" +
                "<td>" + Patient.bdfee05b.value + "</td>" +
                "<td>" + Patient.bdfee05c.value + "</td>" +
                "<td>" + Patient.bdfee05d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee06a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee06a.value + "</td>" +
                "<td>" + Patient.bdfee06b.value + "</td>" +
                "<td>" + Patient.bdfee06c.value + "</td>" +
                "<td>" + Patient.bdfee06d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee07a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee07a.value + "</td>" +
                "<td>" + Patient.bdfee07b.value + "</td>" +
                "<td>" + Patient.bdfee07c.value + "</td>" +
                "<td>" + Patient.bdfee07d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee08a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee08a.value + "</td>" +
                "<td>" + Patient.bdfee08b.value + "</td>" +
                "<td>" + Patient.bdfee08c.value + "</td>" +
                "<td>" + Patient.bdfee08d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee09a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee09a.value + "</td>" +
                "<td>" + Patient.bdfee09b.value + "</td>" +
                "<td>" + Patient.bdfee09c.value + "</td>" +
                "<td>" + Patient.bdfee09d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee10a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee10a.value + "</td>" +
                "<td>" + Patient.bdfee10b.value + "</td>" +
                "<td>" + Patient.bdfee10c.value + "</td>" +
                "<td>" + Patient.bdfee10d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee11a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee11a.value + "</td>" +
                "<td>" + Patient.bdfee11b.value + "</td>" +
                "<td>" + Patient.bdfee11c.value + "</td>" +
                "<td>" + Patient.bdfee11d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee12a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee12a.value + "</td>" +
                "<td>" + Patient.bdfee12b.value + "</td>" +
                "<td>" + Patient.bdfee12c.value + "</td>" +
                "<td>" + Patient.bdfee12d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee13a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee13a.value + "</td>" +
                "<td>" + Patient.bdfee13b.value + "</td>" +
                "<td>" + Patient.bdfee13c.value + "</td>" +
                "<td>" + Patient.bdfee13d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee14a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee14a.value + "</td>" +
                "<td>" + Patient.bdfee14b.value + "</td>" +
                "<td>" + Patient.bdfee14c.value + "</td>" +
                "<td>" + Patient.bdfee14d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee15a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee15a.value + "</td>" +
                "<td>" + Patient.bdfee15b.value + "</td>" +
                "<td>" + Patient.bdfee15c.value + "</td>" +
                "<td>" + Patient.bdfee15d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee16a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee16a.value + "</td>" +
                "<td>" + Patient.bdfee16b.value + "</td>" +
                "<td>" + Patient.bdfee16c.value + "</td>" +
                "<td>" + Patient.bdfee16d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee17a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee17a.value + "</td>" +
                "<td>" + Patient.bdfee17b.value + "</td>" +
                "<td>" + Patient.bdfee17c.value + "</td>" +
                "<td>" + Patient.bdfee17d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee18a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee18a.value + "</td>" +
                "<td>" + Patient.bdfee18b.value + "</td>" +
                "<td>" + Patient.bdfee18c.value + "</td>" +
                "<td>" + Patient.bdfee18d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee19a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee19a.value + "</td>" +
                "<td>" + Patient.bdfee19b.value + "</td>" +
                "<td>" + Patient.bdfee19c.value + "</td>" +
                "<td>" + Patient.bdfee19d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee20a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee20a.value + "</td>" +
                "<td>" + Patient.bdfee20b.value + "</td>" +
                "<td>" + Patient.bdfee20c.value + "</td>" +
                "<td>" + Patient.bdfee20d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee21a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee21a.value + "</td>" +
                "<td>" + Patient.bdfee21b.value + "</td>" +
                "<td>" + Patient.bdfee21c.value + "</td>" +
                "<td>" + Patient.bdfee21d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee22a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee22a.value + "</td>" +
                "<td>" + Patient.bdfee22b.value + "</td>" +
                "<td>" + Patient.bdfee22c.value + "</td>" +
                "<td>" + Patient.bdfee22d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee23a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee23a.value + "</td>" +
                "<td>" + Patient.bdfee23b.value + "</td>" +
                "<td>" + Patient.bdfee23c.value + "</td>" +
                "<td>" + Patient.bdfee23d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee24a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee24a.value + "</td>" +
                "<td>" + Patient.bdfee24b.value + "</td>" +
                "<td>" + Patient.bdfee24c.value + "</td>" +
                "<td>" + Patient.bdfee24d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee25a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee25a.value + "</td>" +
                "<td>" + Patient.bdfee25b.value + "</td>" +
                "<td>" + Patient.bdfee25c.value + "</td>" +
                "<td>" + Patient.bdfee25d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee26a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee26a.value + "</td>" +
                "<td>" + Patient.bdfee26b.value + "</td>" +
                "<td>" + Patient.bdfee26c.value + "</td>" +
                "<td>" + Patient.bdfee26d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee27a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee27a.value + "</td>" +
                "<td>" + Patient.bdfee27b.value + "</td>" +
                "<td>" + Patient.bdfee27c.value + "</td>" +
                "<td>" + Patient.bdfee27d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee28a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee28a.value + "</td>" +
                "<td>" + Patient.bdfee28b.value + "</td>" +
                "<td>" + Patient.bdfee28c.value + "</td>" +
                "<td>" + Patient.bdfee28d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee29a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee29a.value + "</td>" +
                "<td>" + Patient.bdfee29b.value + "</td>" +
                "<td>" + Patient.bdfee29c.value + "</td>" +
                "<td>" + Patient.bdfee29d.value + "</td>" +
                "</tr>\n"
}
if(Patient.bdfee30a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.bdfee30a.value + "</td>" +
                "<td>" + Patient.bdfee30b.value + "</td>" +
                "<td>" + Patient.bdfee30c.value + "</td>" +
                "<td>" + Patient.bdfee30d.value + "</td>" +
                "</tr>\n"
}

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n" +
 "<tr><td colspan=6 align=center><hr width=100%></td></tr>"

DocumentHTML+="</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +     
"<tr>" +
"<td width=155>Theatre Fees</td>" +
"</tr>\n" +    
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td><td>Items</td>" +
               "<td>Hospital Fee</td>" +
               "<td>Fund Rebate</td>" +
               "<td>Fund Gap</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n"

if(Patient.thfee01a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee01a.value + "</td>" +
                "<td>" + Patient.thfee01b.value + "</td>" +
                "<td>" + Patient.thfee01c.value + "</td>" +
                "<td>" + Patient.thfee01d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee02a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee02a.value + "</td>" +
                "<td>" + Patient.thfee02b.value + "</td>" +
                "<td>" + Patient.thfee02c.value + "</td>" +
                "<td>" + Patient.thfee02d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee03a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee03a.value + "</td>" +
                "<td>" + Patient.thfee03b.value + "</td>" +
                "<td>" + Patient.thfee03c.value + "</td>" +
                "<td>" + Patient.thfee03d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee04a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee04a.value + "</td>" +
                "<td>" + Patient.thfee04b.value + "</td>" +
                "<td>" + Patient.thfee04c.value + "</td>" +
                "<td>" + Patient.thfee04d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee05a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee05a.value + "</td>" +
                "<td>" + Patient.thfee05b.value + "</td>" +
                "<td>" + Patient.thfee05c.value + "</td>" +
                "<td>" + Patient.thfee05d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee06a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee06a.value + "</td>" +
                "<td>" + Patient.thfee06b.value + "</td>" +
                "<td>" + Patient.thfee06c.value + "</td>" +
                "<td>" + Patient.thfee06d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee07a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee07a.value + "</td>" +
                "<td>" + Patient.thfee07b.value + "</td>" +
                "<td>" + Patient.thfee07c.value + "</td>" +
                "<td>" + Patient.thfee07d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee08a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee08a.value + "</td>" +
                "<td>" + Patient.thfee08b.value + "</td>" +
                "<td>" + Patient.thfee08c.value + "</td>" +
                "<td>" + Patient.thfee08d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee09a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee09a.value + "</td>" +
                "<td>" + Patient.thfee09b.value + "</td>" +
                "<td>" + Patient.thfee09c.value + "</td>" +
                "<td>" + Patient.thfee09d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee10a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee10a.value + "</td>" +
                "<td>" + Patient.thfee10b.value + "</td>" +
                "<td>" + Patient.thfee10c.value + "</td>" +
                "<td>" + Patient.thfee10d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee11a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee11a.value + "</td>" +
                "<td>" + Patient.thfee11b.value + "</td>" +
                "<td>" + Patient.thfee11c.value + "</td>" +
                "<td>" + Patient.thfee11d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee12a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee12a.value + "</td>" +
                "<td>" + Patient.thfee12b.value + "</td>" +
                "<td>" + Patient.thfee12c.value + "</td>" +
                "<td>" + Patient.thfee12d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee13a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee13a.value + "</td>" +
                "<td>" + Patient.thfee13b.value + "</td>" +
                "<td>" + Patient.thfee13c.value + "</td>" +
                "<td>" + Patient.thfee13d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee14a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee14a.value + "</td>" +
                "<td>" + Patient.thfee14b.value + "</td>" +
                "<td>" + Patient.thfee14c.value + "</td>" +
                "<td>" + Patient.thfee14d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee15a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee15a.value + "</td>" +
                "<td>" + Patient.thfee15b.value + "</td>" +
                "<td>" + Patient.thfee15c.value + "</td>" +
                "<td>" + Patient.thfee15d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee16a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee16a.value + "</td>" +
                "<td>" + Patient.thfee16b.value + "</td>" +
                "<td>" + Patient.thfee16c.value + "</td>" +
                "<td>" + Patient.thfee16d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee17a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee17a.value + "</td>" +
                "<td>" + Patient.thfee17b.value + "</td>" +
                "<td>" + Patient.thfee17c.value + "</td>" +
                "<td>" + Patient.thfee17d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee18a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee18a.value + "</td>" +
                "<td>" + Patient.thfee18b.value + "</td>" +
                "<td>" + Patient.thfee18c.value + "</td>" +
                "<td>" + Patient.thfee18d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee19a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee19a.value + "</td>" +
                "<td>" + Patient.thfee19b.value + "</td>" +
                "<td>" + Patient.thfee19c.value + "</td>" +
                "<td>" + Patient.thfee19d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee20a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee20a.value + "</td>" +
                "<td>" + Patient.thfee20b.value + "</td>" +
                "<td>" + Patient.thfee20c.value + "</td>" +
                "<td>" + Patient.thfee20d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee21a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee21a.value + "</td>" +
                "<td>" + Patient.thfee21b.value + "</td>" +
                "<td>" + Patient.thfee21c.value + "</td>" +
                "<td>" + Patient.thfee21d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee22a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee22a.value + "</td>" +
                "<td>" + Patient.thfee22b.value + "</td>" +
                "<td>" + Patient.thfee22c.value + "</td>" +
                "<td>" + Patient.thfee22d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee23a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee23a.value + "</td>" +
                "<td>" + Patient.thfee23b.value + "</td>" +
                "<td>" + Patient.thfee23c.value + "</td>" +
                "<td>" + Patient.thfee23d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee24a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee24a.value + "</td>" +
                "<td>" + Patient.thfee24b.value + "</td>" +
                "<td>" + Patient.thfee24c.value + "</td>" +
                "<td>" + Patient.thfee24d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee25a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee25a.value + "</td>" +
                "<td>" + Patient.thfee25b.value + "</td>" +
                "<td>" + Patient.thfee25c.value + "</td>" +
                "<td>" + Patient.thfee25d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee26a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee26a.value + "</td>" +
                "<td>" + Patient.thfee26b.value + "</td>" +
                "<td>" + Patient.thfee26c.value + "</td>" +
                "<td>" + Patient.thfee26d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee27a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee27a.value + "</td>" +
                "<td>" + Patient.thfee27b.value + "</td>" +
                "<td>" + Patient.thfee27c.value + "</td>" +
                "<td>" + Patient.thfee27d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee28a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee28a.value + "</td>" +
                "<td>" + Patient.thfee28b.value + "</td>" +
                "<td>" + Patient.thfee28c.value + "</td>" +
                "<td>" + Patient.thfee28d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee29a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee29a.value + "</td>" +
                "<td>" + Patient.thfee29b.value + "</td>" +
                "<td>" + Patient.thfee29c.value + "</td>" +
                "<td>" + Patient.thfee29d.value + "</td>" +
                "</tr>\n"
}
if(Patient.thfee30a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.thfee30a.value + "</td>" +
                "<td>" + Patient.thfee30b.value + "</td>" +
                "<td>" + Patient.thfee30c.value + "</td>" +
                "<td>" + Patient.thfee30d.value + "</td>" +
                "</tr>\n"
}

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n"

 DocumentHTML+="<tr>" +
               "<td>&nbsp;</td><td>" + Patient.thfeetla.value + "</td>" +
               "<td>" + Patient.thfeetlb.value + "</td>" +
               "<td>" + Patient.thfeetlc.value + "</td>" +
               "<td>" + Patient.thfeetld.value + "</td>" +
               "</tr>\n"

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n" +
 "<tr><td colspan=6 align=center><hr width=100%></td></tr>"

DocumentHTML+="</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td width=155>Prosthetics Costs</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td><td>Items</td>" +
               "<td>Hospital Fee</td>" +
               "<td>Fund Rebate</td>" +
               "<td>Fund Gap</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n"

if(Patient.msfee01a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee01a.value + "</td>" +
                "<td>" + Patient.msfee01b.value + "</td>" +
                "<td>" + Patient.msfee01c.value + "</td>" +
                "<td>" + Patient.msfee01d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee02a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee02a.value + "</td>" +
                "<td>" + Patient.msfee02b.value + "</td>" +
                "<td>" + Patient.msfee02c.value + "</td>" +
                "<td>" + Patient.msfee02d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee03a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee03a.value + "</td>" +
                "<td>" + Patient.msfee03b.value + "</td>" +
                "<td>" + Patient.msfee03c.value + "</td>" +
                "<td>" + Patient.msfee03d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee04a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee04a.value + "</td>" +
                "<td>" + Patient.msfee04b.value + "</td>" +
                "<td>" + Patient.msfee04c.value + "</td>" +
                "<td>" + Patient.msfee04d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee05a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee05a.value + "</td>" +
                "<td>" + Patient.msfee05b.value + "</td>" +
                "<td>" + Patient.msfee05c.value + "</td>" +
                "<td>" + Patient.msfee05d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee06a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee06a.value + "</td>" +
                "<td>" + Patient.msfee06b.value + "</td>" +
                "<td>" + Patient.msfee06c.value + "</td>" +
                "<td>" + Patient.msfee06d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee07a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee07a.value + "</td>" +
                "<td>" + Patient.msfee07b.value + "</td>" +
                "<td>" + Patient.msfee07c.value + "</td>" +
                "<td>" + Patient.msfee07d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee08a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee08a.value + "</td>" +
                "<td>" + Patient.msfee08b.value + "</td>" +
                "<td>" + Patient.msfee08c.value + "</td>" +
                "<td>" + Patient.msfee08d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee09a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee09a.value + "</td>" +
                "<td>" + Patient.msfee09b.value + "</td>" +
                "<td>" + Patient.msfee09c.value + "</td>" +
                "<td>" + Patient.msfee09d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee10a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee10a.value + "</td>" +
                "<td>" + Patient.msfee10b.value + "</td>" +
                "<td>" + Patient.msfee10c.value + "</td>" +
                "<td>" + Patient.msfee10d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee11a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee11a.value + "</td>" +
                "<td>" + Patient.msfee11b.value + "</td>" +
                "<td>" + Patient.msfee11c.value + "</td>" +
                "<td>" + Patient.msfee11d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee12a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee12a.value + "</td>" +
                "<td>" + Patient.msfee12b.value + "</td>" +
                "<td>" + Patient.msfee12c.value + "</td>" +
                "<td>" + Patient.msfee12d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee13a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee13a.value + "</td>" +
                "<td>" + Patient.msfee13b.value + "</td>" +
                "<td>" + Patient.msfee13c.value + "</td>" +
                "<td>" + Patient.msfee13d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee14a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee14a.value + "</td>" +
                "<td>" + Patient.msfee14b.value + "</td>" +
                "<td>" + Patient.msfee14c.value + "</td>" +
                "<td>" + Patient.msfee14d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee15a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee15a.value + "</td>" +
                "<td>" + Patient.msfee15b.value + "</td>" +
                "<td>" + Patient.msfee15c.value + "</td>" +
                "<td>" + Patient.msfee15d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee16a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee16a.value + "</td>" +
                "<td>" + Patient.msfee16b.value + "</td>" +
                "<td>" + Patient.msfee16c.value + "</td>" +
                "<td>" + Patient.msfee16d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee17a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee17a.value + "</td>" +
                "<td>" + Patient.msfee17b.value + "</td>" +
                "<td>" + Patient.msfee17c.value + "</td>" +
                "<td>" + Patient.msfee17d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee18a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee18a.value + "</td>" +
                "<td>" + Patient.msfee18b.value + "</td>" +
                "<td>" + Patient.msfee18c.value + "</td>" +
                "<td>" + Patient.msfee18d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee19a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee19a.value + "</td>" +
                "<td>" + Patient.msfee19b.value + "</td>" +
                "<td>" + Patient.msfee19c.value + "</td>" +
                "<td>" + Patient.msfee19d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee20a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee20a.value + "</td>" +
                "<td>" + Patient.msfee20b.value + "</td>" +
                "<td>" + Patient.msfee20c.value + "</td>" +
                "<td>" + Patient.msfee20d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee21a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee21a.value + "</td>" +
                "<td>" + Patient.msfee21b.value + "</td>" +
                "<td>" + Patient.msfee21c.value + "</td>" +
                "<td>" + Patient.msfee21d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee22a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee22a.value + "</td>" +
                "<td>" + Patient.msfee22b.value + "</td>" +
                "<td>" + Patient.msfee22c.value + "</td>" +
                "<td>" + Patient.msfee22d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee23a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee23a.value + "</td>" +
                "<td>" + Patient.msfee23b.value + "</td>" +
                "<td>" + Patient.msfee23c.value + "</td>" +
                "<td>" + Patient.msfee23d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee24a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee24a.value + "</td>" +
                "<td>" + Patient.msfee24b.value + "</td>" +
                "<td>" + Patient.msfee24c.value + "</td>" +
                "<td>" + Patient.msfee24d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee25a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee25a.value + "</td>" +
                "<td>" + Patient.msfee25b.value + "</td>" +
                "<td>" + Patient.msfee25c.value + "</td>" +
                "<td>" + Patient.msfee25d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee26a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee26a.value + "</td>" +
                "<td>" + Patient.msfee26b.value + "</td>" +
                "<td>" + Patient.msfee26c.value + "</td>" +
                "<td>" + Patient.msfee26d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee27a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee27a.value + "</td>" +
                "<td>" + Patient.msfee27b.value + "</td>" +
                "<td>" + Patient.msfee27c.value + "</td>" +
                "<td>" + Patient.msfee27d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee28a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee28a.value + "</td>" +
                "<td>" + Patient.msfee28b.value + "</td>" +
                "<td>" + Patient.msfee28c.value + "</td>" +
                "<td>" + Patient.msfee28d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee29a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee29a.value + "</td>" +
                "<td>" + Patient.msfee29b.value + "</td>" +
                "<td>" + Patient.msfee29c.value + "</td>" +
                "<td>" + Patient.msfee29d.value + "</td>" +
                "</tr>\n"
}
if(Patient.msfee30a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.msfee30a.value + "</td>" +
                "<td>" + Patient.msfee30b.value + "</td>" +
                "<td>" + Patient.msfee30c.value + "</td>" +
                "<td>" + Patient.msfee30d.value + "</td>" +
                "</tr>\n"
}

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n"

 DocumentHTML+="<tr>" +
               "<td>&nbsp;</td><td>" + Patient.msfeetla.value + "</td>" +
               "<td>" + Patient.msfeetlb.value + "</td>" +
               "<td>" + Patient.msfeetlc.value + "</td>" +
               "<td>" + Patient.msfeetld.value + "</td>" +
               "</tr>\n"

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n" +
 "<tr><td colspan=6 align=center><hr width=100%></td></tr>"

DocumentHTML+="</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td width=155>Overnight Costs</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td><td>No of Nights</td>" +
               "<td>Hospital Amnt</td>" +
               "<td>Fund Amount</td>" +
               "<td>Fund Gap Amnt</td>" +
"</tr>\n" +
"<tr>" +
"<td>&nbsp;</td>" +
"</tr>\n"

if(Patient.ovfee01a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee01a.value + "</td>" +
                "<td>" + Patient.ovfee01b.value + "</td>" +
                "<td>" + Patient.ovfee01c.value + "</td>" +
                "<td>" + Patient.ovfee01d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee02a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee02a.value + "</td>" +
                "<td>" + Patient.ovfee02b.value + "</td>" +
                "<td>" + Patient.ovfee02c.value + "</td>" +
                "<td>" + Patient.ovfee02d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee03a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee03a.value + "</td>" +
                "<td>" + Patient.ovfee03b.value + "</td>" +
                "<td>" + Patient.ovfee03c.value + "</td>" +
                "<td>" + Patient.ovfee03d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee04a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee04a.value + "</td>" +
                "<td>" + Patient.ovfee04b.value + "</td>" +
                "<td>" + Patient.ovfee04c.value + "</td>" +
                "<td>" + Patient.ovfee04d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee05a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee05a.value + "</td>" +
                "<td>" + Patient.ovfee05b.value + "</td>" +
                "<td>" + Patient.ovfee05c.value + "</td>" +
                "<td>" + Patient.ovfee05d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee06a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee06a.value + "</td>" +
                "<td>" + Patient.ovfee06b.value + "</td>" +
                "<td>" + Patient.ovfee06c.value + "</td>" +
                "<td>" + Patient.ovfee06d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee07a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee07a.value + "</td>" +
                "<td>" + Patient.ovfee07b.value + "</td>" +
                "<td>" + Patient.ovfee07c.value + "</td>" +
                "<td>" + Patient.ovfee07d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee08a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee08a.value + "</td>" +
                "<td>" + Patient.ovfee08b.value + "</td>" +
                "<td>" + Patient.ovfee08c.value + "</td>" +
                "<td>" + Patient.ovfee08d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee09a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee09a.value + "</td>" +
                "<td>" + Patient.ovfee09b.value + "</td>" +
                "<td>" + Patient.ovfee09c.value + "</td>" +
                "<td>" + Patient.ovfee09d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee10a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee10a.value + "</td>" +
                "<td>" + Patient.ovfee10b.value + "</td>" +
                "<td>" + Patient.ovfee10c.value + "</td>" +
                "<td>" + Patient.ovfee10d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee11a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee11a.value + "</td>" +
                "<td>" + Patient.ovfee11b.value + "</td>" +
                "<td>" + Patient.ovfee11c.value + "</td>" +
                "<td>" + Patient.ovfee11d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee12a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee12a.value + "</td>" +
                "<td>" + Patient.ovfee12b.value + "</td>" +
                "<td>" + Patient.ovfee12c.value + "</td>" +
                "<td>" + Patient.ovfee12d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee13a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee13a.value + "</td>" +
                "<td>" + Patient.ovfee13b.value + "</td>" +
                "<td>" + Patient.ovfee13c.value + "</td>" +
                "<td>" + Patient.ovfee13d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee14a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee14a.value + "</td>" +
                "<td>" + Patient.ovfee14b.value + "</td>" +
                "<td>" + Patient.ovfee14c.value + "</td>" +
                "<td>" + Patient.ovfee14d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee15a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee15a.value + "</td>" +
                "<td>" + Patient.ovfee15b.value + "</td>" +
                "<td>" + Patient.ovfee15c.value + "</td>" +
                "<td>" + Patient.ovfee15d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee16a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee16a.value + "</td>" +
                "<td>" + Patient.ovfee16b.value + "</td>" +
                "<td>" + Patient.ovfee16c.value + "</td>" +
                "<td>" + Patient.ovfee16d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee17a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee17a.value + "</td>" +
                "<td>" + Patient.ovfee17b.value + "</td>" +
                "<td>" + Patient.ovfee17c.value + "</td>" +
                "<td>" + Patient.ovfee17d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee18a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee18a.value + "</td>" +
                "<td>" + Patient.ovfee18b.value + "</td>" +
                "<td>" + Patient.ovfee18c.value + "</td>" +
                "<td>" + Patient.ovfee18d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee19a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee19a.value + "</td>" +
                "<td>" + Patient.ovfee19b.value + "</td>" +
                "<td>" + Patient.ovfee19c.value + "</td>" +
                "<td>" + Patient.ovfee19d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee20a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee20a.value + "</td>" +
                "<td>" + Patient.ovfee20b.value + "</td>" +
                "<td>" + Patient.ovfee20c.value + "</td>" +
                "<td>" + Patient.ovfee20d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee21a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee21a.value + "</td>" +
                "<td>" + Patient.ovfee21b.value + "</td>" +
                "<td>" + Patient.ovfee21c.value + "</td>" +
                "<td>" + Patient.ovfee21d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee22a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee22a.value + "</td>" +
                "<td>" + Patient.ovfee22b.value + "</td>" +
                "<td>" + Patient.ovfee22c.value + "</td>" +
                "<td>" + Patient.ovfee22d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee23a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee23a.value + "</td>" +
                "<td>" + Patient.ovfee23b.value + "</td>" +
                "<td>" + Patient.ovfee23c.value + "</td>" +
                "<td>" + Patient.ovfee23d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee24a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee24a.value + "</td>" +
                "<td>" + Patient.ovfee24b.value + "</td>" +
                "<td>" + Patient.ovfee24c.value + "</td>" +
                "<td>" + Patient.ovfee24d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee25a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee25a.value + "</td>" +
                "<td>" + Patient.ovfee25b.value + "</td>" +
                "<td>" + Patient.ovfee25c.value + "</td>" +
                "<td>" + Patient.ovfee25d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee26a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee26a.value + "</td>" +
                "<td>" + Patient.ovfee26b.value + "</td>" +
                "<td>" + Patient.ovfee26c.value + "</td>" +
                "<td>" + Patient.ovfee26d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee27a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee27a.value + "</td>" +
                "<td>" + Patient.ovfee27b.value + "</td>" +
                "<td>" + Patient.ovfee27c.value + "</td>" +
                "<td>" + Patient.ovfee27d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee28a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee28a.value + "</td>" +
                "<td>" + Patient.ovfee28b.value + "</td>" +
                "<td>" + Patient.ovfee28c.value + "</td>" +
                "<td>" + Patient.ovfee28d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee29a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee29a.value + "</td>" +
                "<td>" + Patient.ovfee29b.value + "</td>" +
                "<td>" + Patient.ovfee29c.value + "</td>" +
                "<td>" + Patient.ovfee29d.value + "</td>" +
                "</tr>\n"
}
if(Patient.ovfee30a.value!=""){
  DocumentHTML+="<tr>" +
                "<td>&nbsp;</td><td>" + Patient.ovfee30a.value + "</td>" +
                "<td>" + Patient.ovfee30b.value + "</td>" +
                "<td>" + Patient.ovfee30c.value + "</td>" +
                "<td>" + Patient.ovfee30d.value + "</td>" +
                "</tr>\n"
}

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n"

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n" +
 "<tr><td colspan=6 align=center><hr width=100%></td></tr>"

 DocumentHTML+="</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n" +
 "<tr>" +
"<td colspan=6>THIS IS ONLY AN ESTIMATION - TOTAL PRICE IS GST INCLUSIVE</td>" +
 "</tr>\n" +
 "<tr>" +
 "<td>&nbsp;</td>" +
 "</tr>\n" +
 "<tr>" +
 "<td colspan=6>" + Patient.ptcnqum1.value + "</td>" +
 "</tr>\n" +
 "<tr>" +
 "<td colspan=6>" + Patient.ptcnqum2.value + "</td>" +
 "</tr>\n"

DocumentHTML+="</body>"
  return(DocumentHTML)
}
