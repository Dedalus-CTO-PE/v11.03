// Source Code:  ./iphone/smPatientHeader.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.00       13/04/2012                   Version change
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

//------------------------------------------------------------
// Insert Standard Patient Heading
//------------------------------------------------------------
function InsertPatientHeader() {
  linkurl=top.getCookie("PatientPageURL");
  linktitle=top.getCookie("PatientPageTitle");
  if (isWhitespace(linkurl)) {
    alertify.alert("Invalid Access Path");
  }
  loc=location;
  if (loc.pathname.match(/cgi-bin/)) {
    ImageFile = "../images/patients/" + PatientURN.replace(/ /g,"") + ".jpg" }
  else {
    ImageFile = "../../images/patients/" + PatientURN.replace(/ /g,"") + ".jpg" }
  

  PHS='<table width=100% border=0 cellspacing=0 cellpadding=0 class="PHeadingSection">' +
                    '<tr><td class=PHeadingField>'+PatientNAM
  

  if (ShowPatientImages) {
    PHS+='</td><td rowspan="2" style="width:50px;" align="right">' +
         "<span onclick='AddPhoto(\""+PatientURN+"\",\""+PatientVIS+"\");' class=PatientImageHead>"+
         "<img style='display:none;' src='"+ImageFile+"'"+
         " class=PatientImage"+
         " onload=\"this.style.display='inline';\""+
         " onerror=\"this.parentElement.innerHTML='<br>Add<br>Photo ID';\"</span>"
  }
  PHS+= "</td></tr><tr><td class=subscript>" + PatientSEX + " - " +
        "Age  " + PatientAGE + " (" + PatientDOB + ")" 
  if (isWhitespace(PatientLOC)) {
    PHS+='</td>' 
  }
  else {
    PHS+='<br>'+ PatientLOC +'</td>'
  }
  PHS+='</tr></table>'

  document.getElementById('PageTitle').innerHTML=linktitle;
  document.getElementById('PatientHeading').innerHTML=PHS;
  theURL = linkurl + '&httprand='+Math.random();
  openFormSection(theURL,linktitle)
 }
}
