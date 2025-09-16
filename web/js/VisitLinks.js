//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : VisitLinks.js
//
// Function     :
//
// Modification :
//
// V10.00.00 28/06/2010 Jill Parkinson CAR 224339
//                      New Include
//----------------------------------------------------------------------
// Widget Visit Links
//----------------------------------------------------------------------
function linkPatient(Urnumber,VisitNo,VisitType,SecOpt,Casekeys,Site,AAEFlag,EVNTFlag) {

WidgetLeftPanel(ClickWidget);
WidgetRightPanelOpen();

if (VisitType=="7") {
   document.PatientLinks.action="patweb89.pbl"
   document.PatientLinks.reportno.value="1"
   document.PatientLinks.template.value="020"
   if(SecOpt=="1"){
     document.PatientLinks.action="patweb81.pbl"
     document.PatientLinks.reportno.value="1"
     document.PatientLinks.template.value="009"
   }
   if(SecOpt=="2"){
     document.PatientLinks.action="patweb81.pbl"
     document.PatientLinks.reportno.value="1"
     document.PatientLinks.template.value="010"
   }
   document.PatientLinks.admissno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
   document.PatientLinks.submit()
}
if (VisitType=="3") {
   document.PatientLinks.action="patweb98.pbl"
   document.PatientLinks.reportno.value="01"
   document.PatientLinks.template.value="301"
   document.PatientLinks.admissno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
   document.PatientLinks.submit()
}
if (VisitType=="2") {
   if(document.PatientLinks.outpsite.value!=Site) {
     alert("Invalid Outpatient Site Security.")
     return;
   }
   document.PatientLinks.action="outweb02.pbl"
   document.PatientLinks.reportno.value="3"
   document.PatientLinks.template.value="301"
   document.PatientLinks.admissno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
   document.PatientLinks.submit()
}
if (VisitType=="4") {
   if(document.PatientLinks.outpsite.value!=Site) {
     alert("Invalid Outpatient Site Security.")
     return;
   }
   document.PatientLinks.action="outweb02.pbl"
   document.PatientLinks.reportno.value="3"
   document.PatientLinks.template.value="015"
   document.PatientLinks.admissno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
   document.PatientLinks.submit()
}
if (VisitType=="1") {
   if (AAEFlag=="1") {
     document.PatientLinks.action="patweb98.pbl"
     document.PatientLinks.reportno.value="1"
     document.PatientLinks.template.value="070"
     document.PatientLinks.admissno.value=VisitNo
     document.PatientLinks.urnumber.value=Urnumber
     document.PatientLinks.submit()
   } 
   else {
     document.PatientLinks.action="emrweb02.pbl"
     document.PatientLinks.reportno.value="1"
     document.PatientLinks.template.value="021"
     document.PatientLinks.admissno.value=VisitNo
     document.PatientLinks.urnumber.value=Urnumber
     document.PatientLinks.submit()
   }
}
if (VisitType=="8") {
   document.PatientLinks.action="watweb01.pbl"
   document.PatientLinks.reportno.value="2"
   document.PatientLinks.template.value="010"
   document.PatientLinks.admissno.value=VisitNo
   document.PatientLinks.urnumber.value=Urnumber
   document.PatientLinks.casekeys.value=Casekeys
   document.PatientLinks.submit()
}
if (VisitType=="6") {
   alert("This is a community health visit.  Details not available");
}

if (VisitType=="9") {

    if(EVNTFlag=="1")
       {
          document.PatientLinks.action="patweb81.pbl"
          document.PatientLinks.reportno.value="1"
          document.PatientLinks.template.value="7"
          document.PatientLinks.admissno.value=VisitNo
          document.PatientLinks.urnumber.value=Urnumber
          document.PatientLinks.submit()
//          Left=(document.body.clientWidth-600)/2
//          DFrameSubmit(PatientLinks,0,Left,650,400)
          return;
        }
   
    if(EVNTFlag=="2")
       {
          document.PatientLinks.action="patweb81.pbl"
          document.PatientLinks.reportno.value="1"
          document.PatientLinks.template.value="5"
          document.PatientLinks.admissno.value=VisitNo
          document.PatientLinks.urnumber.value=Urnumber
          document.PatientLinks.submit()
//          Left=(document.body.clientWidth-600)/2
//          DFrameSubmit(PatientLinks,0,Left,650,400)
           return;
        }

    if(EVNTFlag=="3")
       {
          document.PatientLinks.action="patweb81.pbl"
          document.PatientLinks.reportno.value="1"
          document.PatientLinks.template.value="3"
          document.PatientLinks.admissno.value=VisitNo
          document.PatientLinks.urnumber.value=Urnumber
          document.PatientLinks.submit()
//          Left=(document.body.clientWidth-600)/2
//         DFrameSubmit(PatientLinks,0,Left,650,400)
           return;
        }

    if(SecOpt=="2")
       {
          document.PatientLinks.action="patweb81.pbl"
          document.PatientLinks.reportno.value="1"
          document.PatientLinks.template.value="1"
          document.PatientLinks.admissno.value=VisitNo
          document.PatientLinks.urnumber.value=Urnumber
          document.PatientLinks.submit()
        }
   if(SecOpt=="0")
     {
        document.PatientLinks.action="allweb02.pbl"
        document.PatientLinks.reportno.value="2"
        document.PatientLinks.template.value="1"
        document.PatientLinks.admissno.value=VisitNo
        document.PatientLinks.urnumber.value=Urnumber
        document.PatientLinks.submit()
      }
   if(SecOpt!=="0"&SecOpt!=="2")
      {
       alert("Screen is not viewable by all departments")
      }
  }
}
