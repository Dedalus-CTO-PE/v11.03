//jsVersion  : V11.03.01
//------------------------------------------------------------
// Source Code  : emrweb0225001.js
//
// Function     : Doctor Handover (NEW) utility functions
//
// Modification :
//
// V11.02.01  07/11/2022  Peter Vela             0910319
//                        Added new remote scripts to CreateDocHandoverForm()
//                        to validate No Dr Charge and if the doctor has been
//                        handed over already
// V11.01.01  18/03/2021  Peter Vela        Task 0900574
//                        Added Section C
// V10.06.01  28/07/2015  Don Nguyen        CAR 297670
//                        Fixed the layout of the html output for saving on the
//                        server.
// V10.06.00  22/07/2015  Don Nguyen        CAR 297670
//                        Created new
//------------------------------------------------------------
function CreateDocHandoverForm() {
  if (validateMandatory(DocumentForm)) {

    var serverURL = "../cgi-bin/comweb81.pbl?reportno=50&valdcode=" +
            document.PatientLinks.newdoctr.value.replace(/ /g,"+") +
            "&valdadmn=" + document.DocumentForm.admissno.value.replace(/ /g,"+");

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      if (returnValue.return_value == "1") {

        var billcomp = " ";    
        if (document.DocumentForm.radio10[1].checked) {billcomp="1";}
        if (document.DocumentForm.radio10[2].checked) {billcomp="2";}
        serverURL = "../cgi-bin/comweb81.pbl?reportno=51&valdcode=" +
          document.PatientLinks.newdoctr.value.replace(/ /g,"+") +
          "&valdadmn=" + document.DocumentForm.admissno.value.replace(/ /g,"+")+
          "&valdcod2=" + billcomp.replace(/ /g,"+");

        returnValue = RSExecute(serverURL);

        if (returnValue.status != 0) {
          alert("To Doctor Billing Complete indicator not updated in emrhisaf");
        }

//UPTOHERE
        NewWindow=window.open("","NewWindow",
        "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes");

        DocumentForm.htmlline.value = DocHandoverDocument();

        var doctor=document.PatientLinks.newdoctr.value.toUpperCase()
        var admissno=document.PatientLinks.admissno.value;
        var user=document.PatientLinks.webuseid.value;

// We need to get the date/time of the doctor allocate that just happened
        var serverURL = "../cgi-bin/emrweb08.pbl?reportno=41" +
                        "&admissno=" + admissno.replace(/ /g,"+") +
                        "&doctcode=" + doctor.replace(/ /g,"+") +
                        "&updttype=ALDOC";
        returnValue = RSExecute(serverURL);

        if (returnValue.status == 0) {
          ReturnValues=returnValue.return_value.split("|");

          var sDate = GetFullDateString(ReturnValues[0]);
          var sTime = ReturnValues[1].substr(0,2) + ":" +
          ReturnValues[1].substr(2,2) + ":" + ReturnValues[1].substr(4,2);

          DocumentForm.corsp002.value = sDate;
          DocumentForm.corsp004.value = sTime;
          DocumentForm.corsp009.value = trim(DocumentForm.corsp009.value);
          DocumentForm.corsp010.value = trim(DocumentForm.corsp010.value);

          NewWindow.document.open();
          NewWindow.document.write(DocumentForm.htmlline.value);
          NewWindow.print();
          self.close();
          NewWindow.document.close();
          NewWindow.close();

          DocumentForm.submit();  // create Clinical Document (cliweb08.pbl)
        }

        return;
      }

    }


    NewWindow=window.open("","NewWindow",
      "top=10,left=10,width=750,height=500,location=no,toolbar=yes,scrollbars=yes,menubar=yes");

    DocumentForm.htmlline.value = DocHandoverDocument();

    var doctor=document.PatientLinks.newdoctr.value.toUpperCase()
    var admissno=document.PatientLinks.admissno.value;
    var user=document.PatientLinks.webuseid.value;

    var serverURL = "../cgi-bin/emrweb08.pbl?reportno=3" +
                   "&admissno=" + admissno.replace(/ /g,"+") +
                   "&doctcode=" + doctor.replace(/ /g,"+") +
                   "&webuseid=" + user.replace(/ /g,"+") +
                   "&updttype=ALDOC" +
                   "&updateky=" + PatientLinks.updateky.value.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);

    if (returnValue.status == 0) {

      var billcomp = " ";
      if (document.DocumentForm.radio10[1].checked) {billcomp="1";}
      if (document.DocumentForm.radio10[2].checked) {billcomp="2";}
      serverURL = "../cgi-bin/comweb81.pbl?reportno=51&valdcode=" +
        document.PatientLinks.newdoctr.value.replace(/ /g,"+") +
        "&valdadmn=" + document.DocumentForm.admissno.value.replace(/ /g,"+")+
        "&valdcod2=" + billcomp.replace(/ /g,"+");

      returnValue = RSExecute(serverURL);

      if (returnValue.status != 0) {
        alert("To Doctor Billing Complete indicator not updated in emrhisaf");
      }

//UPTOHERE
      // We need to get the date/time of the doctor allocate that just happened
      var serverURL = "../cgi-bin/emrweb08.pbl?reportno=41" +
                   "&admissno=" + admissno.replace(/ /g,"+") +
                   "&doctcode=" + doctor.replace(/ /g,"+") +
                   "&updttype=ALDOC";
      returnValue = RSExecute(serverURL);

      if (returnValue.status == 0) {
        ReturnValues=returnValue.return_value.split("|");

        var sDate = GetFullDateString(ReturnValues[0]);
        var sTime = ReturnValues[1].substr(0,2) + ":" + 
          ReturnValues[1].substr(2,2) + ":" + ReturnValues[1].substr(4,2);
        
        DocumentForm.corsp002.value = sDate;
        DocumentForm.corsp004.value = sTime;
        DocumentForm.corsp009.value = trim(DocumentForm.corsp009.value);
        DocumentForm.corsp010.value = trim(DocumentForm.corsp010.value);

	NewWindow.document.open();
	NewWindow.document.write(DocumentForm.htmlline.value);
  	NewWindow.print();
  	self.close();
  	NewWindow.document.close();
	NewWindow.close();

	DocumentForm.submit();  // create Clinical Document (cliweb08.pbl)
      }
    }
  }
}

function DocHandoverDocument() {
  DocumentHTML = "<title>Doctor Handover Form</title>\n" +

  "<head>\n" +
  "<style type=text/css>\n" +
  "body { margin:10;" +
  "font-family: Arial; }\n" +
  "td { font-size:9pt; }\n" +
  "td.SectHead {" +
  "background-color:lightgrey;" +
  "font-family: Arial;" +
  "font-weight:bold; }\n" +
  "td.HeadingRow  { " +
  "font-family: Arial;" +
  "font-size:10pt; " +
  "font-weight:bold; }\n" +
  "p.page {page-break-after: always}\n" +
  "td.HighLightRed { " +
  "color:#ff0000; " +
  "font-weight:bold; }\n" +
  "table.Section {" +
  " border: 1px solid black;" +
  " border-collapse:collapse;" +
  "}\n" +
  "td.SectionCellA {" +
  " border-top: 1px solid black;" +
  " border-right: 1px solid black;" +
  " width: 380px;" +
  "}\n" +
  "td.SectionCellB1 {" +
  " border-top: 1px solid black;" +
  " width: 270px;" +
  "}\n" +
  "td.SectionCellB2 {" +
  " border-left: 1px solid black;" +
  " width: 270px;" +
  "}\n" +
  "td.SectionCellC1 {" +
  " border-top: 1px solid black;" +
  " border-left: 1px solid black;" +
  "}\n" +
  "td.SectionCellC2 {" +
  " border-left: 1px solid black;" +
  "}\n" +
  "</style>\n" +
  "</head>\n"

  DocumentHTML += "<body>\n" +
  "<table width=100% cellspacing=2 cellpadding=2 align=center border=0>\n" +

  "<tr><td style='width:120px'>HANDOVER from</td>" + 
  "<td colspan=3 style='width:620px'><b>" + trim(Patient.FrDocNam.value) + "</b>" +
  " to <b>" + trim(Patient.ToDocNam.value) + "</b></td></tr>\n" +

  "<tr><td>Patient Name:</td>" + 
  "<td colspan=3><b>" + trim(Patient.FullName.value) + "</td></tr>\n" +

  "<tr><td style='width:120px'>Visit Number:</td>" + 
  "<td style='width:160px'><b>" + Patient.admissno.value + "</b></td>" +
  "<td style='width:90px'>Date of Birth:</td>" + 
  "<td style='width:400px'><b>" + Patient.DOB.value + "</b></td></tr>\n" +

  "<tr><td>Date of Visit:</td>" +
  "<td><b>" + Patient.VisitDat.value + "</b></td>" +
  "<td>Time of Visit:</td>" + 
  "<td><b>" + Patient.VisitTim.value + "</b></td></tr>\n" +

  "</table>\n"

  //
  // Section A
  //
  DocumentHTML += "<br><table width=100% cellspacing=0 cellpadding=0 border=0>\n" +
  "<tr><td class=HighLightRed>Section A</td></tr>\n" +
  "</table>\n"

  DocumentHTML += "<br><table class=Section width=100% cellspacing=0 cellpadding=4>\n"

  // Summary of assessment...
  DocumentHTML += "<tr><td class='SectionCellA'>Summary of assessment, working diagnosis & plan to date discussed and provided in notes</td>\n"
  if (document.getElementById('rdo11').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b><b>Yes</b></b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }
  else if (document.getElementById('rdo12').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[X]</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" + 
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }


  // Outstanding procedures...
  DocumentHTML += "<tr><td class='SectionCellA'>Outstanding procedures to be completed in ED (e.g. LP)</td>\n"
  if (document.getElementById('rdo21').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<span>" + document.getElementById('inpcmt02').value + "</span></td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else if (document.getElementById('rdo22').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[X]</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }


  // Pending investigations...
  DocumentHTML += "<tr><td class='SectionCellA'>Pending investigations results (e.g. CT, second Troponin)</td>\n"
  if (document.getElementById('rdo31').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<span>" + document.getElementById('inpcmt03').value + "</span></td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else if (document.getElementById('rdo32').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[X]</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }


  // Outstanding communications...
  DocumentHTML += "<tr><td class='SectionCellA'>Outstanding communications (e.g. update surgeon when CT report available)</td>\n"
  if (document.getElementById('rdo41').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n" +
 
    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<span>" + document.getElementById('inpcmt04').value + "</span></td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else if (document.getElementById('rdo42').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" + 
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[X]</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }


  // Medication Chart completed
  DocumentHTML += "<tr><td class='SectionCellA'>Medication Chart completed</td>\n"
  if (document.getElementById('rdo51').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else if (document.getElementById('rdo52').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[X]</td>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else if (document.getElementById('rdo53').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<b>Not Required</b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }


  // Other issues/comments...
  DocumentHTML += "<tr><td class='SectionCellA'>Other issues/comments (e.g. NFR orders)</td>\n"
  if (document.getElementById('rdo61').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n" +

    "<tr><td>&nbsp;</td><td class='SectionCellB2'>\n" +
    "<span>" + document.getElementById('inpcmt06').value + "</span>" +
    "</td><td class='SectionCellC2'>&nbsp;</td></tr>\n"
  }
  else if (document.getElementById('rdo62').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[X]</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>Nil</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }
  

  // Bedside introduction...
  DocumentHTML += "<tr><td class='SectionCellA'>Bedside introduction of the accepting doctor to the patient</td>\n"
  if (document.getElementById('rdo71').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b><b>Yes</b></b>&nbsp;[X]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }
  else if (document.getElementById('rdo72').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[X]</td></tr>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td class='SectionCellC1'><b>No</b>&nbsp;[&nbsp;&nbsp;]</td></tr>\n"
  }


  // Free Text
  var contents = document.getElementById('txtArea').value;
  
  // Replace all line breaks in text area contents with <br> for html
  contents = contents.replace(/(?:\r\n|\r|\n)/g,"<br>");
  DocumentHTML += "<tr><td class='SectionCellA'>Free text:</td>" +
  "<td class='SectionCellB1' colspan=2>\n" +
  "<span>" + contents + "</span>" +
  "</td></tr>\n" +
  "</table>\n"


  //
  // Section B
  //
  DocumentHTML += "<br><br><table width=100% cellspacing=0 cellpadding=0 border=0>\n" +
  "<tr><td class=HighLightRed>Section B</td></tr>\n" +
  "</table>\n"

  DocumentHTML += "<br><table class=Section width=100% cellspacing=0 cellpadding=4>\n" +

  // Summary of assessment...
  "<tr><td class='SectionCellA'>'Handover' for two doctor procedures & sedation</td>"
  if (document.getElementById('rdo81').checked) {
    DocumentHTML += "<td class='SectionCellB1'><b><b>Yes</b></b>&nbsp;[X]</td>\n" +
    "<td>&nbsp;</td></tr></table>\n"
  }
  else {
    DocumentHTML += "<td class='SectionCellB1'><b>Yes</b>&nbsp;[&nbsp;&nbsp;]</td>\n" +
    "<td>&nbsp;</td></tr></table>\n"
  }


  //
  // Section C
  //
  DocumentHTML += "<br><br><table width=100% cellspacing=0 cellpadding=0 border=0>\n" +
  "<tr><td class=HighLightRed>Section C</td></tr>\n" +
  "</table>\n"

  DocumentHTML += "<br><table class=Section width=100% cellspacing=0 cellpadding=4>\n"

  DocumentHTML += "<tr>"

  DocumentHTML += "<td class='SectionCellA' valign=top>"
  DocumentHTML += "Doctor Billing Complete? <b>" +
                  document.DocumentForm.corsp009.value +
                  "</b>"
  DocumentHTML += "</td>"

  if (document.DocumentForm.radio9[0].checked==true) {
 
    DocumentHTML += "<td class='SectionCellB1' valign=top>"
    DocumentHTML += "<b>Yes</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
    DocumentHTML += "</td>"

    DocumentHTML += "<td class='SectionCellC1'>"
    DocumentHTML += "<b>No</b>&nbsp;[X]</td>\n"
    DocumentHTML += "</td></tr>"

    DocumentHTML += "<tr><td></td><td class='SectionCellB2' valign=top>"
    DocumentHTML += "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
    DocumentHTML += "</td>"

    DocumentHTML += "<td class='SectionCellC2'>"
    DocumentHTML += "</td></tr>"

  }

  if (document.DocumentForm.radio9[1].checked==true) {

    DocumentHTML += "<td class='SectionCellB1' valign=top>"
    DocumentHTML += "<b>Yes</b>&nbsp;[X]<br>\n"
    DocumentHTML += "</td>"

    DocumentHTML += "<td class='SectionCellC1'>"
    DocumentHTML += "<b>No</b>&nbsp;[&nbsp;&nbsp;]</td>\n"
    DocumentHTML += "</td></tr>"

    DocumentHTML += "<tr><td></td><td class='SectionCellB2' valign=top>"
    DocumentHTML += "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
    DocumentHTML += "</td>"

    DocumentHTML += "<td class='SectionCellC2'>"
    DocumentHTML += "</td></tr>"

  }

  if (document.DocumentForm.radio9[2].checked==true) {

    DocumentHTML += "<td class='SectionCellB1' valign=top>"
    DocumentHTML += "<b>Yes</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
    DocumentHTML += "</td>"

    DocumentHTML += "<td class='SectionCellC1'>"
    DocumentHTML += "<b>No</b>&nbsp;[&nbsp;&nbsp;]</td>\n"
    DocumentHTML += "</td></tr>"

    DocumentHTML += "<tr><td></td><td class='SectionCellB2' valign=top>"
    DocumentHTML += "<b>Not Required</b>&nbsp;[X]<br>\n"
    DocumentHTML += "</td>"

    DocumentHTML += "<td class='SectionCellC2'>"
    DocumentHTML += "</td></tr>"

  }

//  DocumentHTML += "<tr>"
//
//  DocumentHTML += "<td class='SectionCellA' valign=top>"
//  DocumentHTML += "To Doctor Billing Complete? <b>" +
//                  document.DocumentForm.corsp010.value +
//                  "</b>"
//  DocumentHTML += "</td>"
//
//  if (document.DocumentForm.radio10[0].checked==true) {
//
//    DocumentHTML += "<td class='SectionCellB1' valign=top>"
//    DocumentHTML += "<b>Yes</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
//    DocumentHTML += "</td>"
//
//    DocumentHTML += "<td class='SectionCellC1'>"
//    DocumentHTML += "<b>No</b>&nbsp;[X]</td>\n"
//    DocumentHTML += "</td></tr>"
//
//    DocumentHTML += "<tr><td></td><td class='SectionCellB2' valign=top>"
//    DocumentHTML += "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
//    DocumentHTML += "</td>"
//
//    DocumentHTML += "<td class='SectionCellC2'>"
//    DocumentHTML += "</td></tr>"
//
//  }
//
//  if (document.DocumentForm.radio10[1].checked==true) {
//
//    DocumentHTML += "<td class='SectionCellB1' valign=top>"
//    DocumentHTML += "<b>Yes</b>&nbsp;[X]<br>\n"
//    DocumentHTML += "</td>"
//
//    DocumentHTML += "<td class='SectionCellC1'>"
//    DocumentHTML += "<b>No</b>&nbsp;[&nbsp;&nbsp;]</td>\n"
//    DocumentHTML += "</td></tr>"
//
//    DocumentHTML += "<tr><td></td><td class='SectionCellB2' valign=top>"
//    DocumentHTML += "<b>Not Required</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
//    DocumentHTML += "</td>"
//
//    DocumentHTML += "<td class='SectionCellC2'>"
//    DocumentHTML += "</td></tr>"
//
//  }
//
//  if (document.DocumentForm.radio10[2].checked==true) {
//
//    DocumentHTML += "<td class='SectionCellB1' valign=top>"
//    DocumentHTML += "<b>Yes</b>&nbsp;[&nbsp;&nbsp;]<br>\n"
//    DocumentHTML += "</td>"
//
//    DocumentHTML += "<td class='SectionCellC1'>"
//    DocumentHTML += "<b>No</b>&nbsp;[&nbsp;&nbsp;]</td>\n"
//    DocumentHTML += "</td></tr>"
//
//    DocumentHTML += "<tr><td></td><td class='SectionCellB2' valign=top>"
//    DocumentHTML += "<b>Not Required</b>&nbsp;[X]<br>\n"
//    DocumentHTML += "</td>"
//
//    DocumentHTML += "<td class='SectionCellC2'>"
//    DocumentHTML += "</td></tr>"
//
//  }
  
  DocumentHTML += "</table>\n"

  DocumentHTML += "</body>\n";

  return(DocumentHTML);
}
