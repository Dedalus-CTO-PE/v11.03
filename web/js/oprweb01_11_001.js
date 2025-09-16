//jsVersion  : V11.03.00
function ShowDoctor(linkurl) { Doctor=open(linkurl,"Doctor",
    "width=640,height=250,scrollbars=yes,status=no,toolbar=no,menubar=no"); }
function validateMandatory(theForm)
{   return (
      checkString(theForm.elements["patsname"],"Surname") &&
      checkString(theForm.elements["patgname"],"Given Name") &&
      checkString(theForm.elements["patbirdt"],"Date of Birth") &&
      checkString(theForm.elements["pataddr1"],"Address") &&
      checkString(theForm.elements["patpayor"],"Payor") &&
      checkString(theForm.elements["patadmdt"],"Admission Date") &&
      checkString(theForm.elements["operexpd"],"Operation Duration") &&
      checkString(theForm.elements["operanae"],"Anaesthetic") &&
      checkDate(theForm.elements["patbirdt"],"Date of Birth")
//      checkString(theForm.elements["operpref"],"Operation") &&
    )
}
function changeOperation(theForm)
{   for (var i = 0; i < theForm.operpref.length; i++) {
      if (theForm.operpref.options[i].selected == true) {
         theForm.elements["operdes1"].value=theForm.operpref.options[i].text
      }
    }
}
function LookUpMbs(mbsName,mbsCode) {
  window.ValidateName=mbsName
  window.ValidateCode=mbsCode
  document.MbsLookup.valdcode.value=mbsCode.value
  document.MbsLookup.target="newWindow"
  newWindow=open("","newWindow",
  "width=1,height=1,scrollbars=no,status=no,toolbar=no,menubar=no")
  document.MbsLookup.submit()
}
function ShowDoctor(linkurl) { Doctor=open(linkurl,"Doctor",
    "width=640,height=250,scrollbars=yes,status=no,toolbar=no,menubar=no"); 
}
function CancelBooking(linkurl) { 
  Left=(document.body.clientWidth-640)/2
  DFrameLink(linkurl,0,Left,640,290)
}
