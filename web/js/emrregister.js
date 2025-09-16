//jsVersion  : V11.03.00
<!-- hide
//
function  emrContact(linkUrl)  {
  myWin=open(linkUrl, "ContactDetails",
  "width=480,height=240,scrollbars=no,status=no,toolbar=no,menubar=no");
}
//
function  emrAccount(linkUrl)  {
  myWin=open(linkUrl, "AccountDetails",
  "width=480,height=240,scrollbars=no,status=no,toolbar=no,menubar=no");
}
//
function WardBedScan(toWard,toWardName,toBed,bedStat)  {
  window.toward=toWard
  window.towardname=toWardName
  window.tobed=toBed
  window.bedstat=bedStat
  WardBed=open("patweb95.pbl?reportno=1&template=001","WardBed",
    "width=640,height=400,scrollbars=yes,status=no,toolbar=no,menubar=yes");
}
//
function doctorSearch(doctorName,doctorCode) {
  window.docName=doctorName
  window.docCode=doctorCode
  window.ptmis004=doctorCode
  DoctorSearch=open("/lookups/DoctorSearchWindow.html", "DoctorSearch",
  "width=640,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no") ;
}
//
function mbsSearch(mbsName,mbsCode)  {
  window.mbsName=mbsName
  window.mbsCode=mbsCode
  myWin=open("/lookups/MbsSearchWindow.html", "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function casemixSearch(drgName,drgCode)  {
  if (document.Patient.fldrgmbs[0].checked) {
         drgSearch(drgName,drgCode)  }
  else {
         mbsSearch(drgName,drgCode)  }
}
function drgSearch(drgName,drgCode)  {
  window.drgName=drgName
  window.drgCode=drgCode
  myWin=open("/lookups/DrgSearchWindow.html", "displayWindow",
  "width=600,height=400,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function  emrDetails(linkUrl)  {
  myWin=open(linkUrl, "MasterDetails",
  "width=620,height=370,scrollbars=yes,status=no,toolbar=no,menubar=no");
}
//
function  emrClaim()  {
      i=document.Patient.emvis008.selectedIndex
      claimType=document.Patient.emvis008.options[i].value.substring(3,4)
      document.linkForm.target="ClaimDetails"
      if (claimType=='V'){
        document.linkForm.template.value="7" 
        ClaimDetails=open("","ClaimDetails",
        "width=350,height=100,scrollbars=no,status=no,toolbar=no,menubar=no")
        document.linkForm.submit()
        }
      else {
      if (claimType=='M'){
        document.linkForm.template.value="6" 
        ClaimDetails=open("","ClaimDetails",
        "width=500,height=460,scrollbars=no,status=no,toolbar=no,menubar=no")
        document.linkForm.submit()
        }
      else {
      if (claimType=='W'){
        document.linkForm.template.value="5" 
        ClaimDetails=open("","ClaimDetails",
        "width=600,height=300,scrollbars=no,status=no,toolbar=no,menubar=no")
        document.linkForm.submit()
        }
      else
       { alert("No Claim Details Required")
       }
       }
       }
}
//
function LookUp(validType,validName,validCode) {
  if (validType=2) {
    if (document.Patient.fldrgmbs[0].checked) {
         validType=2  }
    else {
         validType=1  }
  }
  window.ValidateName=validName
  window.ValidateCode=validCode
  document.Lookup.valdtype.value=validType
  document.Lookup.valdcode.value=validCode.value
  document.Lookup.target="newWindow"
  newWindow=open("","newWindow",
  "width=1,height=1,scrollbars=no,status=no,toolbar=no,menubar=no")
  document.Lookup.submit()
}
//
function  cancelCode(linkUrl)  {
  myWin=open(linkUrl, "CancellationCode",
  "width=200,height=140,scrollbars=no,status=no,toolbar=no,menubar=no");
}
// -->
