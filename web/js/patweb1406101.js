/*******************************************************************************
 *
 *  patweb1406101
 *
 *------------------------------------------------------------------------------
 *  V10.01.03 16.07.2013  Patrick Adair CAR 288635
 *            obsoleted by patweb14.js
 *  V10.01.02 28.05.2013  Saroeun Soeur CAR 285650
 *            change cookie to query
 *  V10.01.01 16/05/2013  Patrick Adair  CAR 285158
 *            Changed functions to redirect as per new requirements
 *  V10.01.00 28/03/2013  Saroeun Soeur  CAR 280425
 *  V10.01.00 21/02/2013  Saroeun Soeur  CAR 279937
 *                        Interface to Online Preadmission Database
 *
 ******************************************************************************/

function LinkTo(AdmissionID,urno,admission) {
  var t;
  var h;
  var w = getClientWidth() - 400;
  var l = (getClientWidth()/2) - w/2;
  h  = document.body.clientHeight-150;
  t  = 50;

  AdmissionIDtest = AdmissionID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");
  
  //SetCookie("AdmissionID",AdmissionID);
  //SetCookie("AdmissionURN"," ");
  SetCookiePath("eAdmission");
  DFrameLink("patweb14.pbl?reportno=6&template=102&urnumber="+urno+
                     "&admissno="+admission+"&admisnid="+AdmissionID,t,l,w,h);
}

function LinkToBook(AdmissionID,urno,admission) {
  
AdmissionIDtest = AdmissionID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");

//  SetCookie("AdmissionID",AdmissionID);
//  SetCookie("AdmissionURN"," ");
  SetCookiePath("eAdmission");
  location.href = "patweb89.pbl?reportno=1&template=020&urnumber="+urno+
                  "&admissno="+admission.replace(/ /g,"+")
                 +"&admisnid="+AdmissionID;
}
