//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb0201.js
//
// Function  : Standard Functions Used in allweb0201* templates
//
//========================================================================
//
function SetClinicTypeList(theForm) {
  p=theForm;

  if(p.alcndhos.value=="1" &&
    (!isWhitespace(p.filtpsit.value))) {
     SetClinicType(p.filtctyp,p.defctype.value,p.filtpsit.value);
  }
  else{
    SetClinicType(p.filtctyp,p.defctype.value,p.usersite.value);
  }
  if(isWhitespace(p.deftclid.value)) {
     p.deftclid.value=p.wbseclid.value;
  }
  SetClinicIDList(theForm);
}
function SetClinicIDList(theForm) {
  p=theForm;
  p.filtclid.options.length=1;
  if(p.alcndhos.value=="1" &&
    (!isWhitespace(p.filtpsit.value))) {
     SetTypeClinic(p.filtclid,p.deftclid.value,p.filtpsit.value,p.filtctyp.value);
  }
  else{
     SetTypeClinic(p.filtclid,p.deftclid.value,p.usersite.value,p.filtctyp.value);
  }
}
//
function adjustRowHeight(rowHeight)
{
  var els = document.getElementById("BodyDivision").getElementsByTagName("tr");
  if(rowHeight == undefined) {rowHeight = 30;}
  for (var i=0; i < els.length; i++) {
    var el = els[i];
    if(el.offsetHeight < rowHeight)
    {
      el.height = rowHeight;
    }
  }
}

