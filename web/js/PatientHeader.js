//jsVersion  : V11.03.05
//------------------------------------------------------------
// Source Code  : PatientHeader.js
//
// Function     : Clinical Patient Header Display
//------------------------------------------------------------
// Insert Standard Patient Heading
//------------------------------------------------------------
var jsonAllergies;
var medchartAvailable;

var t=null;  // Allergies & Alerts table

var bIsLegacyAllergy = true;
var sMedChartVer = VariableNameExists('MedChartVersion') ? MedChartVersion : '';

function InsertPatientHeader() {
  PatientHeadingStr='<table cellpadding=0 class="PHeadingSection">' +
  '<tr><td class=PHeadingField>' +
  '    <img src="../images/PatientFolder' + PatientSTA + '.gif" ' +
  '     onclick=\'fnPatientLink();\'' +
  '     class="Icon" alt="Patient Details"> ' + PatientNAM

  AddAlertIcons()
  AddCDMIcons()

  if (isWhitespace(PatientHFT)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    hfund=PatientHFT.substr(0,6);
    PatientHeadingStr+='<td class=DataLabel align=right>' +
          HealthFundDescription + '</td>' +
    '    <td class=DataField>' +
    '    <a href=\'javascript:HFViewFrame("'+ hfund + '");\'>' +
    '    ' + PatientHFT + '</a></td>'}

  ImageFile = PatientImageURL(PatientURN,PatientSEX);

  if (isWhitespace(PatientLOC)) {
    PatientHeadingStr+='<td></td><td class=DataField>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Location</td>' +
    '    <td class=DataField>' + PatientLOC }

  var curIPHyperlinkVisit=PatientCUR.substr(0,8);
  var curIPHyperlinkParam=PatientCUR.substr(8,1);
  var curIPHyperlinkOpt=PatientCUR.substr(9,1);

  if (PatientCUR.substring(0,1)!="(") {
    PatientCUR=PatientCUR.substring(10,PatientCUR.length);}

  if (isWhitespace(PatientCUR)) {
    PatientHeadingStr+='</td>';
  } else if (curIPHyperlinkParam==1) { // show hyperlink
    if (curIPHyperlinkOpt==0) { // single hosp
      PatientHeadingStr+='<a class=CurrentIPLink href="../cgi-bin/patweb98.pbl?reportno=01&template=002&urnumber='+PatientURN+'&admissno='+curIPHyperlinkVisit+'" style="color:red;">'+PatientCUR+'</a></td>';
    } else if (curIPHyperlinkOpt==1) { // multi hosp - IP & user log hosp same
        PatientHeadingStr+='<a class=CurrentIPLink href="../cgi-bin/patweb98.pbl?reportno=01&template=002&urnumber='+PatientURN+'&admissno='+curIPHyperlinkVisit+'" style="color:red;">'+PatientCUR+'</a></td>';
    } else if (curIPHyperlinkOpt==2) { // multi hosp - IP & user log hosp diff
        PatientHeadingStr+="<a class=CurrentIPLink href='javascript:AdmissionEnquiryFrame(\""+curIPHyperlinkVisit+"&noreturn=1\");' style='color:red;'>"+PatientCUR+"</a></td>";
    } else {
      PatientHeadingStr+='<font color=red>'+PatientCUR+'</td>';
    }
  } else { // no hyperlink
    PatientHeadingStr+='<font color=red>'+PatientCUR+'</td>';
  }

  if (isWhitespace(PatientUNT)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Unit</td>' +
   '    <td class=DataField>' + PatientUNT + '</td>'}

  if (!isWhitespace(PatientAID)) {
    PatientHeadingStr+='<td class=DataLabel align=right>' +
         URDescription + '</td>' +
    '    <td class=PHeadingField align=right>' + PatientAID}
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>' +
          URDescription + '</td>' +
    '    <td class=PHeadingField align=right>' + PatientURN}

  if (ShowPatientImages) {
    PatientHeadingStr+='</td>' +
    '<td rowspan="2" align="right">' +
    '<a href=\'javascript:DFrameImgLink("' + ImageFile + '",330,250)\'>' +
    '<img name="patimage" height="50" border=0 src="' + ImageFile +
    '" style="display: none" ' +
    ' alt="Patient U/R ' + PatientURN + '" onload="showImage(this);"></a>' }

  PatientHeadingStr+='</td></tr>' +
  '<tr><td><table><tr><td class=DataLabel>DoB</td>' +
  '    <td class=DataField >' + PatientDOB +
  '(Age  ' + PatientAGE + ')</td>' +
  '    <td class=DataLabel align=right>Gender</td>' +
  '    <td class=DataField>' + PatientSEX + '</td>';

  if (PatientALT.split("|")[1].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + IDGenderDesc +'</td>'+
    '<td class=DataField>' + PatientALT.split("|")[1] + '</td>';
  }

  if (PatientALT.split("|")[2].length > 0) {
  PatientHeadingStr+='<td class=DataLabel align=right>' + PronounDesc + '</td>'+
    '<td class=DataField>' + PatientALT.split("|")[2] + '</td>';
  }

  PatientHeadingStr+='</tr></table></td>';

  if (isWhitespace(PatientCLC)|PatientCLC==".1") {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
  PatientHeadingStr+='<td class=DataLabel align=right>'+ PatientCLH+'</td>' +
    '    <td class=DataField>' + PatientCLC + '</td>'}

  if (isWhitespace(DoctorCOD)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    doctorCode=DoctorCOD.split("|")
    doctorName=DoctorNAM.split("|")
    PatientHeadingStr+='<td class=DataLabel align=right>Consultant</td>' +
    '    <td class=DataField>' +
    '    <a href=\'javascript:DoctorViewFrame("'+ doctorCode[0] + '");\'>' +
    '    ' + doctorName[0] + '</a>' 
    if (!isWhitespace(doctorCode[1])) {
   PatientHeadingStr+='/<a href=\'javascript:DoctorViewFrame("'+ doctorCode[1] +
    '");\'>' +
    '    ' + doctorName[1] + '</a></td>' }}

  if (isWhitespace(PatientPRI)) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Privacy</td>' +
    '    <td class=DataField>' + PatientPRI + '</td>'}

  if (isWhitespace(PatientVIS)||parseInt(PatientVIS,10)==0) {
    PatientHeadingStr+='<td></td><td></td>' }
  else {
    PatientHeadingStr+='<td class=DataLabel align=right>Visit No</td>' +
    '    <td class=PHeadingField align=right>' + PatientVIS + '</td>'  }
  PatientHeadingStr+='</tr></table>' ;
  document.getElementById('PatientHeading').innerHTML=PatientHeadingStr;
}
function GetAllergies() {
  GetAllergyStatus(GetMedchartAllergies,DisplayExtendedBanner);
}
function GetMedchartAllergies() {
  var theURL = "MedchartServices.php?reportno=4&urnumber="+PatientURN+
               "&admissno="+PatientVIS+
               "&httprand="+Math.random();

  ShowWaitScreen();

  if (IEBrowser) {
    var xmlHttp = createHttpObject();
    xmlHttp.open("GET", theURL, false);
    xmlHttp.send();

    if (xmlHttp.status == 200) {
      if (xmlHttp.responseText.substr(0,5)=="ERROR") {
        return;
      } else {
        if (xmlHttp.responseText!="") {
          //convert text to javascript object
          jsonAllergies = eval("("+xmlHttp.responseText+")");
          ProcessAllergies()
          DisplayExtendedBanner();
          HideWaitScreen();
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(theURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status == 0) {
          if (returnValue.responseText.substr(0,5)=="ERROR") {
            return;
          } else {
            if (returnValue.responseText!="") {
              //convert text to javascript object
              jsonAllergies = eval("("+returnValue.responseText+")");
              ProcessAllergies()
              DisplayExtendedBanner();

              // Call InitTable() to redraw the table with MedChart Allergies
              // if defined on the page.
              if (window.AddAllergies != undefined &&
                  (typeof AddAllergies == 'function')) {
                if (window.InitTable != undefined &&
                    (typeof InitTable == 'function')) {
                  InitTable();
                }
              }
              HideWaitScreen();
            }
          }
        }
      }   
    );
  }
}
function GetAllergyStatus(RetFuncTrue,RetFuncFalse) {
  if (MedchartIntegration == false) {
    if (RetFuncFalse != undefined && typeof(RetFuncFalse) == 'function') {
      RetFuncFalse();
    }
    return false;
  }

  var allergyStatus="Allergy Status Unknown";
  var theURL = "MedchartServices.php?reportno=7&urnumber="+PatientURN+
               "&admissno="+PatientVIS+
               "&httprand="+Math.random();

  if (IEBrowser) {
    var xmlHttp = createHttpObject();
    xmlHttp.open("GET", theURL, false);
    xmlHttp.send();

    if (xmlHttp.status==200) {
      if (xmlHttp.responseText.substr(0,5)=="ERROR") {
        if (RetFuncFalse != undefined && typeof(RetFuncFalse) == 'function') {
          RetFuncFalse();
        }
        return false;

      } else {
        allergyStatus=xmlHttp.responseText;

        if (allergyStatus.match(/No Known Allergies/i)) {
          medchartAvailable=true;
          return false;
        }
        if (allergyStatus.match(/Allergy Status Unknown/i)) {
          medchartAvailable=true;
          return false;
        }

        medchartAvailable=true;
        if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
          RetFuncTrue();
        }
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(theURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status == 0) {
          if (returnValue.responseText.substr(0,5)=="ERROR") {
            if (RetFuncFalse != undefined && typeof(RetFuncFalse) == 'function') {
              RetFuncFalse();
            }
            return false;

          } else {
            allergyStatus=returnValue.responseText;

            if (allergyStatus.match(/No Known Allergies/i)) {
              medchartAvailable=true;
              return false;
            }
            if (allergyStatus.match(/Allergy Status Unknown/i)) {
              medchartAvailable=true;
              return false;
            }

            medchartAvailable=true;
            if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
              RetFuncTrue();
            }
          }
        }   
      }
    );
  }
}
function ProcessAllergies() {
  if (!jsonAllergies) return;

  if (!isWhitespace(sMedChartVer)) {
    if (parseInt(sMedChartVer) > 8) { bIsLegacyAllergy = false };
  }

  if (bIsLegacyAllergy) {  // LEGACY Allergies schema
    for (var Allergy in jsonAllergies) {
      var Description=jsonAllergies[Allergy]['Description'];
      var StartDate=jsonAllergies[Allergy]['StartDate'];
      var DiagnosisDate=jsonAllergies[Allergy]['DiagnosisDate'];
      var CertaintyDescription=jsonAllergies[Allergy]['Certainty']['Description'];
      var StatusDescription=jsonAllergies[Allergy]['Status']['Description'];
      var StatusId=jsonAllergies[Allergy]['Status']['StatusId'];
      var TypeDescription=jsonAllergies[Allergy]['AllergyType']['Description'];
      var ModifiedBy=jsonAllergies[Allergy]['ModifiedByName']['DisplayName'];

      StartDate=netDate(StartDate,"datetime");
      DiagnosisDate=netDate(DiagnosisDate,"datetime");

      if (StatusId==1) {
        t.addRow('',TypeDescription,Description,StatusDescription,'',
                 ModifiedBy,StartDate,'9');
      }
    }
  }
  else {  // NEW Allergies schema
    for (var Allergy in jsonAllergies['Allergies']) {
      if (typeof jsonAllergies['Allergies'][Allergy] == 'object') {
        var Description=jsonAllergies['Allergies'][Allergy]['Description'];
        var StartDate=jsonAllergies['Allergies'][Allergy]['StartDate'];
        var DiagnosisDate=jsonAllergies['Allergies'][Allergy]['DiagnosisDate'];
        var CertaintyDescription=jsonAllergies['Allergies'][Allergy]['Certainty']['Description'];
        var StatusDescription=jsonAllergies['Allergies'][Allergy]['Status']['Description'];
        var StatusId=jsonAllergies['Allergies'][Allergy]['Status']['StatusId'];
        var TypeDescription=jsonAllergies['Allergies'][Allergy]['AllergyType']['Description'];
        var ModifiedBy=jsonAllergies['Allergies'][Allergy]['ModifiedByName']['DisplayName'];

        StartDate=netDate(StartDate,"datetime");
        DiagnosisDate=netDate(DiagnosisDate,"datetime");

        if (StatusId==1) {
          t.addRow('',TypeDescription,Description,StatusDescription,'',
                   ModifiedBy,StartDate,'9');
        }
      }
    }
  }
}
//
// Format .NET Date Return in JSON from MedChart
//
function netDate(el,format) {
  if (isWhitespace(el)) return "";
  var d = new Date(parseInt(el.replace(/\/+Date\(([\d+-]+)\)\/+/, '$1')));
  var ThisHrs=d.getHours();
  var ThisMin=d.getMinutes();
  var ThisDay=d.getDate();
  var ThisMth=parseInt(d.getMonth(),10) +1;
  var ThisYrs=d.getFullYear();
  if (ThisHrs < 10) ThisHrs="0" + ThisHrs
  if (ThisMin < 10) ThisMin="0" + ThisMin
  if (ThisDay < 10) ThisDay="0" + ThisDay
  if (ThisMth < 10) ThisMth="0" + ThisMth
  ThisHrs = ThisHrs.toString();
  ThisMin = ThisMin.toString();
  ThisMth = ThisMth.toString();
  ThisDay = ThisDay.toString();
  var monthname = new Array('Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep','Oct','Nov','Dec');
  var MonthName=monthname[d.getMonth()];
  if (format=="displaydate") return ThisDay+" "+MonthName+" "+ThisYrs
  if (format=="date") return ThisYrs+ThisMth+ThisDay
  if (format=="datetime") return ThisYrs+ThisMth+ThisDay+ThisHrs+ThisMin
}
function InsertPatientOther() {
 Alerts = new Table(1,0,1,"100%","center",35);
 t = new Table(1,0,1,"100%","center",35);
 AddAlertRows();
 GetAllergies();
}
function DisplayExtendedBanner() {
 Alerts=t;
 UsualAddress = PatientAD1.replace(/ *$/,"<br>") +
                PatientAD2.replace(/ *$/,"<br>").replace(/^<br>$/,"") +
                PatientAD3.replace(/ *$/,"<br>").replace(/^<br>$/,"") +
                PatientAD4.replace(/ *$/," ").replace(/^ $/,"") +
                PatientADP.replace(/ *$/," ") + "</b><br>" 
 FROMADD      = PatientAD1.replace(/ *$/," ") +
                PatientAD2.replace(/ *$/," ") +
                PatientAD3.replace(/ *$/," ") +
                PatientAD4.replace(/ *$/," ") +
                PatientADP.replace(/ *$/," ") 
 GoogleMap1   = "<a target=_blank href='http://maps.google.com.au/maps?q="+ 
                FROMADD +"'>Google Map</a></br>"
 PBE= "<table class=p-banner-table border=1>" +
      "<tbody><tr>" +
      "<th><span>Address  </span>&nbsp;" +
      "<b>"+(PatientAD1.replace(/ *$/," ") +
               PatientAD2.replace(/ *$/," ") +
               PatientAD3.replace(/ *$/," ") +
               PatientAD4.replace(/ *$/," ") +
               PatientADP.replace(/ *$/," ") ).slice(0,20) + "..." + "</b></th>" +
      "<th><span>Phone and email </span>&nbsp;<b>" + PatientHPH + "</th>" +
      "<th><span>Other Information </span><b></th><th>"  
   PBE+="<span>Considerations</span></th><th>"
   if (Alerts.rows.length>0) {
      PBE+="<div id=BannerAlertIcon class=b-alert-icon></div>"
   }
   PBE+="<div id=BannerExpandIcon class='x-tool x-tool-expand' onclick='TogglePatient(this)'></div>" +
        "<span>Allergies and Alerts</span></th></tr>" +
        "<tr><td><span>Usual Address </span><br>" +UsualAddress+GoogleMap1+"</td>" +
         "<td><table class=b-table>" +
         "<tr><td class=b-label>Home</td><td class=b-text>"+PatientHPH+" </td></tr>" +
         "<tr><td class=b-label>Work</td><td class=b-text>"+PatientBPH+" </td></tr>" +
         "<tr><td class=b-label>Mobile</td><td class=b-text>"+PatientMPH+" </td></tr>" +
         "<tr><td class=b-label>Email</td><td></td></tr>" +
         "<tr><td colspan=2><a href='mailto:"+PatientEML+"'>" +PatientEML+"</a></td></tr>" +
         "</table><br>" +
        "</td><td><table class=b-table>" 
  if (!isWhitespace(DoctorCOD)) {
    doctorCode=DoctorCOD.split("|")
    doctorName=DoctorNAM.split("|")
    PBE+='<tr><td class=b-label>Consultant</td><td class=b-text>' +
         '<a href=\'javascript:DoctorViewFrame("'+ doctorCode[0] + 
         '");\'>' + '   ' + doctorName[0] + '</a></td>' 
    if (!isWhitespace(doctorCode[1])) {
       PBE+='<tr><td class=b-label>Consultant</td><td class=b-text>' +
            '<a href=\'javascript:DoctorViewFrame("'+ doctorCode[1] + '");\'>' +
            '    ' + doctorName[1] + '</a></td></tr>' 
    }
  }
  LGP=PatientLGP.split("|")
  if (!isWhitespace(LGP[0])) {
    PBE+='<tr><td class=b-label>Local GP</td><td class=b-text>' +
         '<a href=\'javascript:HCPViewFrame("'+LGP[0]+'","'+LGP[1]+'","'+
         LGP[2]+'")\'>'+LGP[3]+ '</a> </td></tr>'
  }
  if (!isWhitespace(PatientHFT)) {
    hfund=PatientHFT.substr(0,6);
    PBE+='<tr><td class=b-label>' + HealthFundDescription + '</td>' +
         '<td class=b-text><a href=\'javascript:HFViewFrame("'+ hfund + '");\'>' +
         ' ' + PatientHFT + '</a></td></tr>'
  }

  if (isWhitespace(PatientCLC)|PatientCLC==".1") {
    PBE+=''; }
  else {
    PBE+='<tr><td class=b-label>'+ PatientCLH+'</td><td class=b-text>' + PatientCLC + '</td></tr>'
  }
  if (PatientINT.match(/Y/)) {
    PBE+="<tr><td class=b-label>Interpreter</td><td class=b-text>" + PatientLN1  
    if (!isWhitespace(PatientLN2)) PBE+="<br>" + PatientLN2 
    PBE+="</td></tr>" 
  }
 PBE+="</table></td><td>" 
 PBE+="</td><td colspan=2>" 
 AddAlertDetails()
 PBE+="</td></tr><tr>" +
      "<th class=LinkMore><a href='javascript:LinkAddress();'>View all addresses</a></th>" +
      "<th class=LinkMore><a href='javascript:LinkContact();'>View all contact details</a></th>" +
      "<th class=LinkMore> &nbsp;</th>" 
 PBE+="<th class=LinkMore> &nbsp;</th>" +
      "<th  colspan=2 class=LinkMore><a href='javascript:LinkAlert();'>" +
      "View/Update Allergies/Alerts</a></th></tr></table>" 
 PatientBannerEx1.innerHTML=PBE
}
function AddAlertDetails() {
  if (Alerts.rows.length>0) {
    PBE+="<table class=b-alert-table>" 
    maxalt=Alerts.rows.length
    if (Alerts.rows.length>4) { maxalt=4 }
    for(var i = 0; i < maxalt; i++) {
      PBE+="<tr title='Alert/Allergy \t"+Alerts.rows[i][2]+
               "\nActive Date \t"+FD(Alerts.rows[i][6])+
               "\nRecorded by \t"+Alerts.rows[i][5]+"" + 
               "\nType \t\t"+Alerts.rows[i][1]+"" + 
               "\nInfection \t"+Alerts.rows[i][3]+"" + 
               "\nReaction \t"+Alerts.rows[i][4]+"'><td>" + 
                Alerts.rows[i][2] + "</td>"+
               "<td align=right>" + Alerts.rows[i][3] + "</td>" +
               "<td align=right><img src=../images/AlertStatus" + Alerts.rows[i][7] + ".gif class=ListIcon></td></tr>"
    }
    if (Alerts.rows.length>4) {
      PBE+="<tr><td align=center colspan=3>...More Alerts Exist</td></tr>"
    }
    PBE+="</table>" 
  }
}
function AddAllergyDetails() {
  if (Allergies.rows.length>0) {
    PBE+="<table class=b-alert-table>" 
    maxalt=Allergies.rows.length
    if (Allergies.rows.length>4) { maxalt=4 }
    for(var i = 0; i < maxalt; i++) {
      if (Allergies.rows[i][8]!="999") {
        PBE+="<tr title='Alert/Allergy \t"+Allergies.rows[i][1]+
             "\nType \t\t"+Allergies.rows[i][6]+"" + 
             "\nStatus\t\t"+Allergies.rows[i][9]+
             "\nCertainty \t"+Allergies.rows[i][11]+
             "\nDiagnosed On \t"+FD(Allergies.rows[i][4])+
             "\nStarted Date \t"+FD(Allergies.rows[i][2])+
             "\nStopped Date \t"+FD(Allergies.rows[i][3])+
             "\nComments \t"+Allergies.rows[i][6]+"'><td>" + Allergies.rows[i][1] + "</td>"+
             "<td >" + Allergies.rows[i][6] + "</td>" 
             "<td align=right><img src=../images/AlertStatus" + Allergies.rows[i][7] + ".gif class=ListIcon></td></tr>"
      }
    }
    if (Allergies.rows.length>4) {
      PBE+="<tr><td align=center colspan=3>...More Allergies Exist</td></tr>"
    }
    PBE+="</table>" 
  }
}
function FD(ccyymmdd) {
  yrr=ccyymmdd.substring(0,4);
  mth=GetMonthName(ccyymmdd.substring(4,6));
  day=ccyymmdd.substring(6,8);
  ret = day+ " "+ mth+ " "+ yrr;
  return ret
}
function LinkAddress() {
   serverid="patweb98"
   reportno="01"
   template="001"
   admissno=PatientLinks.admissno.value.replace(/ /g,"+");
   urnumber=PatientLinks.urnumber.value.replace(/ /g,"+");
   url=serverid + ".pbl?reportno=" + reportno +
                  "&template=" + template +
                  "&urnumber=" + urnumber +
                  "&admissno=" + admissno
  location.href=url
}
function LinkContact() {
   serverid="patweb98"
   reportno="01"
   template="001"
   admissno=PatientLinks.admissno.value.replace(/ /g,"+");
   urnumber=PatientLinks.urnumber.value.replace(/ /g,"+");
   url=serverid + ".pbl?reportno=" + reportno +
                  "&template=" + template +
                  "&urnumber=" + urnumber +
                  "&admissno=" + admissno
  location.href=url
}
function LinkAllergies() {
// patient,prescribe,administration,review
// allergies, healthissues, currentmedications, wardsummary
// var theParas = 'xml='+
  SetCookie("IBAMedChartOption","patient");
  URL="patweb98.pbl?reportno=1&template=905"+
              "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
              "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") 
  window.open(URL,"MedChart","location=no,menubar=no,resizable=yes,scrollbars=no,status=yes,toolbar=no,top=0,left=0,width=" + (window.screen.availWidth - 20)+ ",height=" + (window.screen.availHeight - 60), true);
}
function LinkAlert() {
   serverid="patweb98"
   reportno="01"
   template="003"
   admissno=PatientLinks.admissno.value.replace(/ /g,"+");
   urnumber=PatientLinks.urnumber.value.replace(/ /g,"+");
   url=serverid + ".pbl?reportno=" + reportno +
                  "&template=" + template +
                  "&urnumber=" + urnumber +
                  "&admissno=" + admissno
  location.href=url
}
function TogglePatient(xDiv) {
  if (xDiv.className=="x-tool x-tool-expand") {
    xDiv.className="x-tool x-tool-collapse";
//    PatientBannerEx1.style.position='absolute';
    PatientBannerEx1.style.height='auto';
    PatientBannerEx1.style.zIndex='900';
  }
  else {
    xDiv.className="x-tool x-tool-expand";
    PatientBannerEx1.style.height='20px';
//    PatientBannerEx1.style.position='';
    PatientBannerEx1.style.zIndex='900';
  }
}
