function SubmitTransfer() {
  if (validateMandatory(pat96btf)) {
    if(pat96btf.ptcnbedm.value=="1") {
      validateBedRequestUpdate(pat96btf.admissno,pat96btf.trntowrd,
                               pat96btf.trntobed,pat96btf.valdindc);
      WardbedreqUpdate(pat96btf.admissno,pat96btf.trntowrd,pat96btf.trntobed,
                       pat96btf.valdindc)
    }
    SetHousekeeping();
    SubmitHidden(pat96btf);
  }
}
function checkVisitor() {
    pat96btf.pmsvx039.value="0";
    if(pat96btf.d_pmsvx039.checked==1) {
       pat96btf.pmsvx039.value="1" }
}
function checkPhonCal() {
    pat96btf.pmsvx040.value="0";
    if(pat96btf.d_pmsvx040.checked==1) {
       pat96btf.pmsvx040.value="1" }
}
function ShowHouse() {
  document.pat96btf.notifyhs.className=""
  if(document.pat96btf.ptcnchot.value=="1") {
    document.pat96btf.notifyhs.className="Mandatory"
    Displayhousekeeping1.style.display="";
    Displayhousekeeping2.style.display="";
    Displayhousekeeping3.style.display="";
    Displayhousekeeping4.style.display="";
  }
}
function HouseMandatory() {
  if(pat96btf.notifyhs.options[pat96btf.notifyhs.selectedIndex].value=="1") {
     document.pat96btf.pmhrd006.className="Mandatory"
     document.pat96btf.pmhrd006.disabled=false;
  } else {
     document.pat96btf.pmhrd006.selectedIndex=0;
     document.pat96btf.pmhrd006.className="Readonly"
     document.pat96btf.pmhrd006.disabled=true;
  }
}
function SetHousekeeping() {
  if(document.pat96btf.ptcnchot.value=="1" &&
    pat96btf.notifyhs.options[pat96btf.notifyhs.selectedIndex].value=="1") {
    i=document.pat96btf.trandate.selectedIndex;
    document.pat96btf.pmhrd004.value=document.pat96btf.trandate.options[i].text;
    document.pat96btf.pmhrd005.value=document.pat96btf.trantime.value;
  }
}
function SummaryPage() {
  CaseList=GetContentCookie("CasePath");
  if (CaseList=="unknown") {
    location.href="patweb98.pbl?reportno=01&template=049" +
    "&urnumber=" + PatientLinks.urnumber.value +
    "&admissno=" + PatientLinks.admissno.value +
    "&MenuType=" + PatientLinks.MenuType.value
  }
  else {
    location.href=CaseList
  }
}
function SetDefault() {
  tranward=GetContentCookie("tranward");
  tranbed=GetContentCookie("tranbed");
  el=document.pat96btf.trntowrd
  for (i=0;i<el.options.length;i++) {
    if (el.options[i].value==tranward) el.selectedIndex=i
  }
  el=document.pat96btf.trntobed;
  el.value=tranbed;
  el=document.pat96btf.redirect;
  el.value=el.value+tranward;
}
