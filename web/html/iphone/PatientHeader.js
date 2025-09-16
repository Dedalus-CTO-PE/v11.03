// Source Code:  ./iphone/PatientHeader.js
//
// Modification 
//
// Version         Date         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.15.01       14.02.2020   Jill Parkinson 
//                              Add Current IP to header
// V10.07.01       29.10.2015   B.G.Ackland    
//                              Add U/R to header
// V10.03.01       17.07.2013   B.G.Ackland    
//                              Initial Cabrini Customisation
//------------------------------------------------------------
// Insert Standard Patient Heading
//------------------------------------------------------------
function InsertPatientHeader() {
  el=document.getElementsByTagName("div")
  for (i=0;i<el.length;i++) {
     if (el[i].id.match(/section.*row/)) {
         el[i].style.display="block";
     }
  }
  loc=location;
  if (loc.pathname.match(/cgi-bin/)) {
    ImageFile = "patientPhoto.php?urnumber=" + PatientURN.replace(/ /g,"+") +
                                "&gender=" + PatientSEX
                 
  } else {
    ImageFile = "../cgi-bin/patientPhoto.php?urnumber=" + PatientURN.replace(/ /g,"+") +
                                "&gender=" + PatientSEX
  }
  PHS='<table width=100% border=0 cellspacing=0 cellpadding=0 class="PHeadingSection">' +
                    '<tr><td class=PHeadingField>'+PatientNAM

  PHS+='</td><td rowspan="2" style="padding-right:5px;width:50px;" align="right">' +
       "<span class=PatientImageHead>"+
       "<img style='display:none;' src='"+ImageFile+"'"+
       " class=PatientImage"+
       " onload=\"this.style.display='inline';\""+
       " </span>"+
       "</td></tr><tr><td class=subscript>" + PatientSEX + " - " +
       "Age  " + PatientAGE + " (" + PatientDOB + ")"+"<br>UR:"+ PatientURN;
  if (!isWhitespace(PatientLOC)) {
    PHS+="  Loc:"+ PatientLOC;
  }
  PHS+="<font color=red>"+PatientCUR+"</font></td></tr></table>"

  UsualAddress = PatientAD1.replace(/ *$/,"<br>") +
                 PatientAD2.replace(/ *$/," ") +
                 PatientAD3.replace(/ *$/," ") +
                 PatientAD4.replace(/ *$/," ") +
                 PatientADP.replace(/ *$/," ") 
  AddressLink  = PatientAD1.replace(/ *$/," ") +
                 PatientAD2.replace(/ *$/," ") +
                 PatientAD3.replace(/ *$/," ") +
                 PatientAD4.replace(/ *$/," ") +
                 PatientADP.replace(/ *$/," ") 
 GoogleMap1   = "<a class=sectionLink href='http://maps.google.com.au/maps?q="+ AddressLink +"'>"

 ADD="<ul class=sectionList><li class=sectionItem>" +GoogleMap1+"address" +
     "<span class=\"sectionText\" style=\"margin-left:20px;display:block;\">"+UsualAddress+"</span></a></li></ul>"
 ADD+="<ul class=sectionList>"
 if (!isWhitespace(PatientHPH)) {
   ADD+="<li class=sectionItem>"+
        "<a class=sectionLink href=\"tel:"+PatientHPH+"\">home "+
        "<span class=\"sectionText\">"+PatientHPH+"</span></a></li>" }
 if (!isWhitespace(PatientHPH)) {
   ADD+="<li class=sectionItem>"+
        "<a class=sectionLink href=\"tel:"+PatientBPH+"\">work "+
        "<span class=\"sectionText\">"+PatientBPH+"</span></a></li>" }
 if (!isWhitespace(PatientMPH)) {
   ADD+="<li class=sectionItem>"+
        "<a class=sectionLink href=\"tel:"+PatientMPH+"\">mobile "+
        "<span class=\"sectionText\">"+PatientMPH+"</span></a></li>" }
 ADD+="</ul>"
 if (!isWhitespace(PatientEML)) {
   ADD+="<ul class=sectionList>"+
        "<li class=sectionItem>"+
        "<a class=sectionLink href=\"mailto:"+PatientEML+"\">email <span class=\"sectionText\">"+
        PatientEML+"</span></a></li>"+
        "</ul>" 
 }

 NOK="<ul class=sectionList>"+
     "<li class=sectionItem "+
     "onclick=\"ContactViewFrame('patweb98.pbl?reportno=1&template=086&urnumber="+
     PatientURN+"&admissno="+PatientVIS+"');\">" +
     "patient contacts" +
     "<span class='menuArrow'>&nbsp;</span></li>"+
     "</ul>" 
 OTH="<ul class=sectionList>"
  if (!isWhitespace(DoctorCOD)) {
    doctorCode=DoctorCOD.split("|")
    doctorName=DoctorNAM.split("|")
    OTH+="<li class=sectionItem "+
         " onclick='DoctorViewFrame(\""+ doctorCode[0] + "\");'>" +
         "consultant<span class=\"sectionText\">"+ doctorName[0] + "</span>" +
         "<span class='menuArrow'>&nbsp;</span></li>"
    if (!isWhitespace(doctorCode[1])) {
      OTH+="<li class=sectionItem onclick='DoctorViewFrame(\""+ doctorCode[1] + "\");'>" +
         "consultant<span class=\"sectionText\">"+ doctorName[1] + "</span>" +
         "<span class='menuArrow'>&nbsp;</span></li>"
    }
  }
  LGP=PatientLGP.split("|")
  if (!isWhitespace(LGP[0])) {
    OTH+="<li class=sectionItem "+
         " onclick='HCPViewFrame(\""+ 
         LGP[0] + "\",\""+LGP[1]+"\",\""+LGP[2]+"\");'>" +
         "local doctor<span class=\"sectionText\">"+ LGP[3] + "</span>" +
         "<span class='menuArrow'>&nbsp;</span></li>"
  }
  if (!isWhitespace(PatientHFC)) {
    OTH+="<li class=sectionItem "+
         " onclick='HFViewFrame(\""+ PatientHFC +"\");'>" +
         HealthFundDescription.toLowerCase() + 
         "<span class=\"sectionText\">"+ 
         PatientHFD + "</span>" +
         "<span class='menuArrow'>&nbsp;</span></li>"
  }

  if (!isWhitespace(PatientHTB)) {
    OTH+="<li class=sectionItem>health fund table"+
         "<span class=\"sectionText\">"+ 
         PatientHTB + "</span></li>" 
  }
  if (PatientINT.match(/Y/)) {
    OTH+="<li class=sectionItem>interpreter<span class=\"sectionText\">"+ PatientLN1 + "</span></li>" 
    if (!isWhitespace(PatientLN2)) OTH+=" / " + PatientLN2 
  }
 OTH+="</ul>" 
 document.getElementById('PatientHeading').innerHTML=PHS;
 document.getElementById('section1').innerHTML=ADD+NOK+OTH;

 section=top.getCookie("PatientPageSection");
 linkurl=top.getCookie("PatientPageURL");
 linktitle=top.getCookie("PatientPageTitle");
 if (!isWhitespace(linkurl)) {
   theURL = linkurl + '&httprand='+Math.random();
   openFormSection(section,theURL,linktitle)
 }
 else {
   if (!isWhitespace(section)) {
     var content= document.getElementById(section);
     toggleSection(content);
     top.setCookie("PatientPageSection","","1")
   }
 }
}
function HFViewFrame(HFCode) {
  if(HFCode=="" ) return;
  LinkToUrl="patweb87.pbl?reportno=2&template=10&hfund001=" + HFCode;
  openURLsection(LinkToUrl,"Health Fund Details");
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
  openURLsection(LinkToUrl,"HCP Details");
}
function DoctorViewFrame(DoctorCode) {
  if(DoctorCode=="" ) return;
  var LinkToUrl="patweb99.pbl?reportno=1&template=11&doctcode=" + DoctorCode;
  openURLsection(LinkToUrl,"Doctor Details");
}
function ContactViewFrame(LinkToUrl) {
  openURLsection(LinkToUrl,"Patient Contacts");
}
function openURLsection(theURL,PageTitle) {
 el=document.getElementsByTagName("div")
 for (i=0;i<el.length;i++) {
   if (el[i].id.match(/section.*row/)) {
     el[i].style.display="none";
   }
   if (el[i].id=="section1") { 
     el[i].style.display="none";
   }
 }
 openSection(theURL,PageTitle);
}
