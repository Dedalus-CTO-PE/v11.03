//jsVersion  : V11.03.00
//
var frstdate;
var lastdate;
var DateKey;
var cscportal=0;
var HospitalGroup;
var HospitalName;
var sjogprtl = "";
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function InitPage() {
  AdmissionID=GetCookieData("AdmissionID")

  getPortalCookie();

  theURL="preadm01.php"+
        "?reportno=2" +
        "&admissionid="+AdmissionID +
        "&httprand="+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var patientObj = eval("("+xmlHttp.responseText+")");
    contentString = '<form name=UpdateForm>'+
                    '<table width=95% border=0 padding=3 cellspacing=0 align=center>';
    for (var i = 0; i < patientObj.length; i++) {
      var c=0
      for (fieldLabel in patientObj[i]) {
        switch (fieldLabel) {
        case "cscportal":
          cscportal=1;
          break;
        case "Hospital":
          HospitalName=patientObj[i][fieldLabel];
          break;
        case "HospitalGroup":
          HospitalGroup=patientObj[i][fieldLabel];
          contentString += "<tr id=HospitalSelect valign=top>"+
                           "<td class=DataLabel>Hospital</td>"+
                           "<td class=DataField colspan=3><select id=HospitalCode name=HospitalCode>" +
                           "<option></option></select></td></tr>";
          break;
        case "srchsnam":
          contentString += "<input type=hidden name=srchsnam value='"+ patientObj[i][fieldLabel]+ "'>"; 
          break;
        case "srchgnam":
          contentString += "<input type=hidden name=srchgnam value='"+ patientObj[i][fieldLabel]+ "'>"; 
          break;
        case "srchpsex":
          contentString += "<input type=hidden name=srchpsex value='"+ patientObj[i][fieldLabel]+ "'>"; 
          break;
        case "srchpdob":
          contentString += "<input type=hidden name=srchpdob value='"+ patientObj[i][fieldLabel]+ "'>"; 
          break;
        case "srchpage":
          contentString += "<input type=hidden name=srchpage value='"+ patientObj[i][fieldLabel]+ "'>"; 
          break;
        case "Comments":
          if (c%2==0) contentString += "</tr>";
          contentString += "<tr valign=top><td class=DataLabel>"+ fieldLabel +"</td>"+
                           "<td class=DataField colspan=3><textarea rows=5 cols=60 name=comments>" +
                            patientObj[i][fieldLabel]+ "</textarea></td></tr>";
          break;
        default:
          if (c%2==0) contentString += "<tr valign=top c="+c+">"
          contentString += "<td class=DataLabel>"+ fieldLabel +"</td>"+
                           "<td class=DataField>" + patientObj[i][fieldLabel]+ "</td>";
          if ((c+1)%2==0) contentString += "</tr  c="+c+">"
          c=c+1
        }
      }
    }
    contentString+='<tr><td align=center colspan=4>&nbsp;</td></tr>'+
                   '<tr><td align=center colspan=4>'+
                   '<input type=button class=button value=Process onclick=Process("'+AdmissionID+'");>';
    if (cscportal==1) {
      contentString+='<input type=button class=button value=View/Print onclick=View("'+AdmissionID+'");>';
    } 
    if (HospitalGroup=="SJOG") {
      contentString+='<input type=button class=button value="Change Hospital"'+
                     ' onclick=UpdateHospital("'+AdmissionID+'");>';
    } 
    contentString+='<input type=button class=button value=Pending onclick=UpdatePending("'+AdmissionID+'");>'+
                   '<input type=button class=button value=Ignore  onclick=UpdateIgnore("'+AdmissionID+'");>'+
                   '<input type=button class=button value=Close   onclick="DFrameExit();"></td></tr>' +
                   '</table></form>'
    ot=document.getElementById("FormLocation");
    ot.innerHTML=contentString;
  }
  else {
    alert('Error Connecting to Web Service');
  }
  if (HospitalGroup=="SJOG") {
    theURL="preadm01.php?reportno=11&httprand="+Math.random();
    xmlHttp = createHttpObject();
    xmlHttp.open("GET", theURL, false);
    xmlHttp.send();
    var ReturnSelect=document.getElementById("HospitalCode");
    var hospitals = JSON.parse(xmlHttp.responseText);
    for (var i=0;i<hospitals.length;i++) {
      ReturnSelect.options[ReturnSelect.options.length]=
        new Option(hospitals[i].hospital_name+" ("+hospitals[i].hospital_state+")",
                   hospitals[i].hospital_code+"|"+hospitals[i].hospital_state);
      if (HospitalName==hospitals[i].hospital_name) {
        ReturnSelect.selectedIndex=ReturnSelect.options.length-1;
      }
    }
  }
}
function View(AdmissionID) {
  theURL="preadm01.php?reportno=9&AutoPrint=Y&admissionid="+AdmissionID;
  window.open(theURL,"_blank");
}
function Process(AdmissionID) {

  if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
    SetCookie("sjogwaPortalCOOKIE","");
  }

  theComments=UpdateForm.comments.value;
  theURL="preadm01.php"+
        "?reportno=3" +
        "&status=3" +
        "&admissionid="+AdmissionID +
        "&comments="+theComments
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (!isWhitespace(xmlHttp.responseText)) {
    alert("Update Pending Returned:"+xmlHttp.responseText)
  }

  theURL='patweb90.pbl?reportno=1&template=202&srchtype=1&norecord=5'+
          '&admisnid='+AdmissionID+'&httprand='+Math.random();
  if (UpdateForm.srchsnam!=null) theURL+='&srchsnam='+UpdateForm.srchsnam.value.toUpperCase()
  if (UpdateForm.srchgnam!=null) theURL+='&srchgnam='+UpdateForm.srchgnam.value.toUpperCase()
  if (UpdateForm.srchpsex!=null) theURL+='&srchpsex='+UpdateForm.srchpsex.value
  if (UpdateForm.srchpdob!=null) theURL+='&srchpdob='+UpdateForm.srchpdob.value
  if (UpdateForm.srchpage!=null) theURL+='&srchpage='+UpdateForm.srchpage.value
//  location.href=theURL
  var t;
  var h;
  var w = getClientWidth()-20;
  var l = 8;
  h  = document.body.clientHeight-205;
  t  = 200;
  DFrameLink(theURL,t,l,w,h);
}
function UpdatePending(AdmissionID) {
  theComments=UpdateForm.comments.value;
  theURL="preadm01.php"+
        "?reportno=3" +
        "&status=1" +
        "&admissionid="+AdmissionID +
        "&comments="+theComments
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (!isWhitespace(xmlHttp.responseText)) {
    alert("Update Pending Returned:"+xmlHttp.responseText)
  }
  DFrameExitRefresh();
}
function UpdateHospital(AdmissionID) {
  var el=document.getElementById("HospitalCode");
  var hospCode=el.options[el.selectedIndex].value.split("|")[0];
  var hospState=el.options[el.selectedIndex].value.split("|")[1];
  var hospName=el.options[el.selectedIndex].text;
  hospName=hospName.replace(/ (.*)$/,"");
  theComments=UpdateForm.comments.value;
  theURL="preadm01.php"+
        "?reportno=10" +
        "&admissionid="+AdmissionID +
        "&hospitalstate="+hospState +
        "&hospitalcode="+hospCode +
        "&hospitalname="+hospName +
        "&comments="+theComments
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (!isWhitespace(xmlHttp.responseText)) {
    alert("Update Hospital Returned:"+xmlHttp.responseText)
  }
  alert("Preadmission Form Move to "+hospName+" in "+hospState);
  DFrameExitRefresh();
}
function UpdateIgnore(AdmissionID) {
  theComments=UpdateForm.comments.value;
  theURL="preadm01.php"+
        "?reportno=3" +
        "&status=2" +
        "&admissionid="+AdmissionID +
        "&comments="+theComments
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (!isWhitespace(xmlHttp.responseText)) {
    alert("Update Ignore Returned:"+xmlHttp.responseText)
  }
  DFrameExitRefresh();
}
function getPortalCookie() {
  if (GetCookieData("sjogwaPortalCOOKIE") != 'unknown') {
    ExpireCookiePath("sjogwaPortalCOOKIE");
    sjogprtl = "1";
  }
}
