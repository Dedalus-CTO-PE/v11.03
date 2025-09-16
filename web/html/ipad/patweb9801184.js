//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9801184.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.06.01 23.06.2105 B.G.Ackland   CAR 312621
//                      Reformat concession cards and link to update if available for user
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
var showAlias = false;
var showConcession = false;
var sex;
var sname;
var gname;
var dob;
//------------------------------------------------------------
// Convert Date Field from DD MMM YYYY to YYYYMMDD
//------------------------------------------------------------
function SetDateYYYYMMDD(DateString) {
 if (DateString!="") {
 day=DateString.substr(0,2)
 mthnam=DateString.substr(3,3)
 yrr=DateString.substr(7,4)
 switch (mthnam) {
  case "Jan": mon="01";break;
  case "Feb": mon="02";break;
  case "Mar": mon="03";break;
  case "Apr": mon="04";break;
  case "May": mon="05";break;
  case "Jun": mon="06";break;
  case "Jul": mon="07";break;
  case "Aug": mon="08";break;
  case "Sep": mon="09";break;
  case "Oct": mon="10";break;
  case "Nov": mon="11";break;
  case "Dec": mon="12";break;
  }
 ReturnString=yrr+mon+day
 ReturnString.replace(/ /g,"0")
 return ReturnString
 }
 else {
 return ""
 }
}
function checkAliasNumber() {
 if (window.nativeIOS) {
  var elements = document.getElementsByClassName('dynamicRowAlias');
  var aliasButtonToggle = document.getElementById('aliasButtonToggle');

  if(elements) {
    if(elements.length < 1) {
       aliasButtonToggle.style.display = "none";
    }
  }
 }
}
//
// link to Add/update if in users menu
//
function ConcessionAction() {
  var el=top.document.getElementById("patientSettings");
  for (i=0;i<el.options.length;i++) {
    if (el.options[i].value=="29") {
      el.selectedIndex=i;
      top.PatientTask(el);
    }
  }
}
function toggle() {
 if (window.nativeIOS) {
  var elements = document.getElementsByClassName('dynamicRowAlias');
  var aliasButtonToggle = document.getElementById('aliasButtonToggle');

  if(!showAlias) {
    for(var i = 0; i < elements.length; i++) {
      elements[i].style.display = "block";
    }
    aliasButtonToggle.className=aliasButtonToggle.className.replace(/imgDown/,'imgUp');
    showAlias = true;
  }else {
    aliasButtonToggle.className=aliasButtonToggle.className.replace(/imgUp/,'imgDown');
    for(var i = 0; i < elements.length; i++) {
      elements[i].style.display = "none";
    }
    showAlias = false;
  }
 }
}
function getAlias() {
  dob = SetDateYYYYMMDD(dob);
  var urnumber = document.getElementById('urnumber');
  var xmlHttp = createHttpObject();
  theURL = CGIPath + "patweb89.php?reportno=1&urnumber="+urnumber.value.replace(/ /g,"+")+
           "&sname="+sname.replace(/ /g,"")+"&gname="+gname.replace(/ /g,"")+"&dob="+
            dob.replace(/ /g,"")+"&sex="+sex.replace(/ /g,"");
            //get patient alias
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  return xmlHttp.responseText;
}

function getConcession() {
  var urnumber = document.getElementById('urnumber');
  var xmlHttp = createHttpObject();
  theURL = CGIPath + "patweb89.php?reportno=2&urnumber="+urnumber.value.replace(/ /g,"+");
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  return xmlHttp.responseText;
}
function InitPage() {
  TOADD=ADL1.replace(/ *$/," ") +
        ADL2.replace(/ *$/," ") +
        ADL3.replace(/ *$/," ") +
        ADL4.replace(/ *$/," ") +
        ADL5.replace(/ *$/," ")
  GL1=document.getElementById("GoogleLink1");
  GL1.href='https://maps.google.com.au/maps?output=embed&q='+TOADD;

  OTH="<ul class=summaryList>"
   if (!isWhitespace(DoctorCOD)) {
     doctorCode=DoctorCOD.split("|")
     doctorName=DoctorNAM.split("|")
     OTH+="<li class=sectionItem "+
          " onclick='DoctorViewFrame(\""+ doctorCode[0] + "\");'>" +
          "<span class=labelText>consultant</span>" +
         "<span class=\"sectionText\">"+
          doctorName[0] + "</span>" +
         "<span class=detailIcon></span></li>"
     if (!isWhitespace(doctorCode[1])) {
       OTH+="<li class=sectionItem onclick='DoctorViewFrame(\""+ doctorCode[1] + "\");'>" +
          "<span class=labelText>consultant</span>" +
         "<span class=\"sectionText\">"+ doctorName[1] + "</span>" +
         "<span class=detailIcon></span></li>"
     }
   }
   LGP=PatientLGP.split("|")
   if (!isWhitespace(LGP[0])) {
    OTH+="<li class=sectionItem "+
         " onclick='HCPViewFrame(\""+
         LGP[0] + "\",\""+LGP[1]+"\",\""+LGP[2]+"\");'>" +
         "<span class=labelText>local doctor</span>" +
         "<span class=\"sectionText\">"+ LGP[3] + "</span>" +
         "<span class=detailIcon></span></li>"
   }
   if (!isWhitespace(PatientHFC)) {
     OTH+="<li class=sectionItem "+
          " onclick='HFViewFrame(\""+ PatientHFC +"\");'><span class=labelText>" +
          HealthFundDescription.toLowerCase() + "</span>" +
          "<span class=\"sectionText\">"+
          PatientHFD + "</span>" +
         "<span class=detailIcon></span></li>"
   }

   if (!isWhitespace(PatientHTB)) {
     OTH+="<li class=sectionItem><span class=labelText>health fund table</span>"+
          "<span class=\"sectionText\">"+
          PatientHTB + "</span></li>"
   }

   if(!isWhitespace(PatientHMN)) {
     OTH += "<li class=sectionItem><span class=labelText>health fund member number</span>"+
            "<span class=\"sectionText\">"+
            PatientHMN + "</span></li>";
   }

 if(!isWhitespace(PatientCNC)) {
     OTH += "<li class=sectionItem onclick='ConcessionAction();'>"+
            "<span class=labelText>concession card</span>"+
            PatientCNC+
            "<span id='concessionButtonToggle'  class='detailIcon'></span>"

   }
 if(!isWhitespace(PatientMDN)) {
     OTH += "<li class=sectionItem><span class=labelText>medicare number</span>"+
            "<span class=\"sectionText\">"+
            PatientMDN + "</span></li>";
   }


   if (PatientINT.match(/Y/)) {
     OTH+="<li class=sectionItem><span class=labelText>interpreter</span>" +
          "<span class=\"sectionText\">"+ PatientLN1 + "</span></li>"
     if (!isWhitespace(PatientLN2)) OTH+=" / " + PatientLN2
   }
  OTH+="</ul>"

  ALS = "<span class=labelText>Alias</span>"+PatientALS+
        "<span id='aliasButtonToggle' class='detailIcon imgDown'></span>";
  document.getElementById('section1').innerHTML = OTH;
  document.getElementById('aliasSection').innerHTML = ALS;
  if (!window.nativeIOS) {
    el=parent.document.getElementById("sectionFormFrame")
    x=document.body.offsetHeight;
    el.style.height=x+50+"px";
  }
}
function DoctorViewFrame(DoctorCode) {
  if(DoctorCode=="" ) return;
  var LinkToUrl="patweb99.pbl?reportno=1&template=11&doctcode=" + DoctorCode;
  parent.openSection(LinkToUrl,"Doctor Details");
}
function ContactViewFrame(LinkToUrl) {
  parent.openSection(LinkToUrl,"Patient Contacts");
}
function HFViewFrame(HFCode) {
  if(HFCode=="" ) return;

  LinkToUrl="patweb87.pbl?reportno=2&template=10&hfund001=" + HFCode;
 // LinkToUrl = "patweb87.pbl?reportno=2&template=10&hfund001=" + HFCode;

  parent.openSection(LinkToUrl,"Health Fund Details");
}
function HCPViewFrame(GpCode,GpPrac,GpPcnt) {
  if(GpCode=="" & GpPrac=="") return;
  if (GpPrac=="" | GpPrac==undefined)
  {
    LinkToUrl="patweb99.pbl?reportno=4&template=11&genpcode=" + GpCode;
  }
  else
  {
    if (GpCode=="" | GpCode==undefined)
    {
      LinkToUrl="patweb99.pbl?reportno=4&template=13&genpprac=" + GpPrac +
                "&genppcnt=" + GpPcnt;
    }
    else
    {
      LinkToUrl="patweb99.pbl?reportno=4&template=12&genpcode=" + GpCode +
                "&genpprac=" + GpPrac +
                "&genppcnt=" + GpPcnt;
    }
  }
  parent.openSection(LinkToUrl,"HCP Details");
}

