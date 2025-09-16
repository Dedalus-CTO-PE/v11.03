//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb02.js
//
// Written   : 28.12.2000 Pat Dirito
//
// Function  : Standard Functions Used in emrweb0206001.html
//
// Version   : 
//            V10.06.01 08.09.2015  Ania P        CAR 320941 
//                      Fixed width of PatientSearch() opener
//             V9.02.10 23.04.2002  Bronko
//                      Mods for StV golive
//             V9.02.09 14.03.2002  Bronko                                    
//                      Changes for doctor/nurse incompleates
//             V9.02.08 07.03.2002 Bronko
//                                To integrate the inpatient module into the
//                                Emergency discharge screen
//             V9.02.07 28.02.2002 Bronko
//                      Intergration of the inpatient module with EMR
//             V9.02.06 24.02.2002 Bronko
//                      Intergration of the inpatient module with EMR
//             V9.02.05 07.02.2002 Bronko
//                      Changes for St V.
//             V9.02.04 31.01.2002 Bronko
//                      Changes to functionality of Map View
//             V9.02.03 10.01.2002 Bronko
//                      New functionality of Doctor & Nurse handover
//             V9.02.02 20.12.2001 Bronko
//                      changes for St.V. with emr
//             V9.02.01 15.12.2001 Bronko
//                      Refreshing Emergency map 
//             V5.09.00 28.12.2000 Pat Dirito
//
//========================================================================
//========================================================================
//  Report 1
//========================================================================
function checkAlias01()  {
  if (document.UpdateForm.aliasset.value==0) {
    if(confirm("Save old Name as Alias ?")) {
      document.UpdateForm.savealia.value=1;
    }
    document.UpdateForm.aliasset.value=1;
  }
}
//
//========================================================================
//  Report 6
//========================================================================
//function CheckPost() {  //called from onload
//  if(document.UpdateForm.urnumber.value=="       0") {
//    DefPost();
//  }
//}
function Reset() {
  url="emrweb02.pbl?reportno=6&template=1&urnumber=0&admissno=" +
       document.UpdateForm.admissno.value;
  location.replace(url);
}
function SearchUR() {
   LenUR=document.UpdateForm.urnumber.value.length
   switch(LenUR) {
     case 1: NewUR="       " + document.UpdateForm.urnumber.value;break;
     case 2: NewUR="      " + document.UpdateForm.urnumber.value;break;
     case 3: NewUR="     " + document.UpdateForm.urnumber.value;break;
     case 4: NewUR="    " + document.UpdateForm.urnumber.value;break;
     case 5: NewUR="   " + document.UpdateForm.urnumber.value;break;
     case 6: NewUR="  " + document.UpdateForm.urnumber.value;break;
     case 7: NewUR=" " + document.UpdateForm.urnumber.value;break;
     default: NewUR= document.UpdateForm.urnumber.value;break;
   }
   document.UpdateForm.urnumber.value=NewUR;
   url="emrweb02.pbl?reportno=06&template=1" +
       "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
       "&regsflag=1"
   location.replace(url);
}
function PatientSearch(fpatname,urnumber,admissno) {
   window.urnumber=urnumber
   window.admissno=admissno
   window.fpatname=fpatname.value
   SearchUrl="patweb90.pbl?reportno=1&template=101&srchadmn=" +
             document.UpdateForm.admissno.value +
             "&srchsnam=" +
             document.UpdateForm.ptmas005.value +
             "&srchgnam=" +
             document.UpdateForm.ptmas006.value 
  Left=(document.body.clientWidth-1000)/2;
  DFrameLink(SearchUrl,20,Left,1000,630);   
}
function SetCancel() {
  location.href="emrweb01.pbl?reportno=1&template=3";
}
function setFormactn() {
  if (validateMandatory(UpdateForm)) {
     SetRedirect();
     if ((document.UpdateForm.urnumber.value=="       0") || 
        (document.UpdateForm.urnumber.value=="        ")) { 
         document.UpdateForm.formactn.value="NW"
         document.UpdateForm.updttype.value="ALLNW" 
     }
     else { 
         document.UpdateForm.formactn.value="EX"
         document.UpdateForm.updttype.value="ALLEX" 
     }
     UpdateWin=window.open("","HideUpdateWindow",
     "width=10,height=10,top=1024,directories=no,location=no" +
     ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
     document.UpdateForm.target="HideUpdateWindow";
     document.UpdateForm.submit()
     }
}
