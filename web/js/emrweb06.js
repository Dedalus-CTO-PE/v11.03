//jsVersion  : V11.03.00
/========================================================================
// Program   : emrweb06.js
//
// Written   : 08.09.2001 Harvinder HPS
//
//
// Version   : 
//             V9.02.10  23.04.2002  Bronko
//                       Mods for StV golive
//             V9.02.09  14.03.2002  Bronko
//                       Changes for doctor/nurse incompleates
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
//             V9.02.03 20.12.2001 Bronko
//                      changes for St.V. with emr
//             V9.02.02 15.12.2001 Bronko
//                      Refreshing Emergency map 
//             V9.02.01 08.09.2001 Harvinder HPS
//                                 Newly created
//
//========================================================================
//
function EmrProcSearch(ReturnName,ReturnCode) {
  var PopUpFrameDoc = DFrameStart();
  var linkURL="emrweb05.pbl?reportno=6&template=4&norecord=9";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = linkURL;
  SearchFrameShow();
}
//
function EmrDiagnosisSearch(ReturnCode,ReturnName)  {
  var PopUpFrameDoc = DFrameStart();
  var linkURL="emrweb05.pbl?reportno=7&template=4";
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href = linkURL;
  SearchFrameShow();
}
//
function LookEmrCode(validType,validName,validCode) {
  window.ValidateName=validName
  window.ValidateCode=validCode
  document.LookUpCode.valdtype.value=validType
  document.LookUpCode.valdcode.value=validCode.value
  DFrameHide(document.LookupCode)
}
//
