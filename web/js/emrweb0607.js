//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0607.js
//========================================================================
function setOrdered(p) {
  if(p.d_emoci004.checked == true) {
    p.emoci004.value="1";
    SetCurrentDateTime(p.emoci005,p.emoci006);
    p.emoci005.className="Date Mandatory";
    p.emoci006.className="Time Mandatory";
  } else {
    p.emoci004.value="0";
    p.emoci005.value="";
    p.emoci006.value="";
    p.emoci005.className="Date";
    p.emoci006.className="Time";
  }
}
function tickOrdered(p) {
  if(!isWhitespace(p.emoci005.value) || !isWhitespace(p.emoci006.value)) {
    p.d_emoci004.checked=true;
    p.emoci004.value="1";
    p.emoci005.className="Date Mandatory";
    p.emoci006.className="Time Mandatory";
  } else {
    p.d_emoci004.checked=false;
    p.emoci004.value="0";
    p.emoci005.className="Date";
    p.emoci006.className="Time";
  }
}
function setReturned(p) {
  if(p.d_emoci007.checked == true) {
    p.emoci007.value="1";
    SetCurrentDateTime(p.emoci008,p.emoci009);
    p.emoci008.className="Date Mandatory";
    p.emoci009.className="Time Mandatory";
  } else {
    p.emoci007.value="0";
    p.emoci008.value="";
    p.emoci009.value="";
    p.emoci008.className="Date";
    p.emoci009.className="Time";
  }
}
function tickReturned(p) {
  if(!isWhitespace(p.emoci008.value) || !isWhitespace(p.emoci009.value)) {
    p.d_emoci007.checked=true;
    p.emoci007.value="1";
    p.emoci008.className="Date Mandatory";
    p.emoci009.className="Time Mandatory";
  } else {
    p.d_emoci007.checked=false;
    p.emoci007.value="0";
    p.emoci008.className="Date";
    p.emoci009.className="Time";
  }
}
function setSeen(p) {
  if(p.d_emoci010.checked == true) {
    p.emoci010.value="1";
    SetCurrentDateTime(p.emoci011,p.emoci012);
    p.emoci011.className="Date Mandatory";
    p.emoci012.className="Time Mandatory";
  } else {
    p.emoci010.value="0";
    p.emoci011.value="";
    p.emoci012.value="";
    p.emoci011.className="Date";
    p.emoci012.className="Time";
  }
}
function tickSeen(p) {
  if(!isWhitespace(p.emoci011.value) || !isWhitespace(p.emoci012.value)) {
    p.d_emoci010.checked=true;
    p.emoci010.value="1";
    p.emoci011.className="Date Mandatory";
    p.emoci012.className="Time Mandatory";
  } else {
    p.d_emoci010.checked=false;
    p.emoci010.value="0";
    p.emoci011.className="Date";
    p.emoci012.className="Time";
  }
}
function LinkAdd() {
  linkUrl="emrweb06.pbl?reportno=07&template=002" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-500)/2;
  DFrameLink(linkUrl,50,Left,500,350);
}
function LinkRecord(adm,cnt) {
  linkUrl="emrweb06.pbl?reportno=07&template=003" +
          "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + adm.replace(/ /g,"+") +
          "&emoci001=" + adm.replace(/ /g,"+") + 
          "&emoci002=" + cnt.replace(/ /g,"+");
  Left=(document.body.clientWidth-500)/2
  DFrameLink(linkUrl,50,Left,500,350);
}
function DeleteRecord(adm,cnt) {
  if(!confirm("Are you sure you want to Delete this record ?")) {
    return;
  }
  document.DeleteForm.emoci001.value=adm;
  document.DeleteForm.emoci002.value=cnt;
  document.DeleteForm.submit();
}
function PostAdd() {
  if(validateMandatory(AddForm)) {
    document.AddForm.updatety.value="A";
    document.AddForm.submit();
  }
}
function PostDelete() {
  if(!confirm("Are you sure you want to Delete this record ?")) {
    return;
  }
  document.UpdateForm.updatety.value="D";
  document.UpdateForm.submit();
}
function PostUpdate() {
  if(validateMandatory(UpdateForm)) {
    document.UpdateForm.updatety.value="U";
    document.UpdateForm.submit();
  }
}
