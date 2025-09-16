/*******************************************************************************
 *
 *  patweb1406102
 *
 *  ----------------------------------------------------------------------------
 *  V10.01.03 16.07.2013  Patrick Adair CAR 288635
 *            obsoleted by patweb14.js
 *  V10.01.02 28.05.2013  Saroeun Soeur CAR 285650
 *            changed cookie to query
 *  V10.01.01 20/03/2013  Patrick Adair  CAR 285158
 *             Changed url redirections for new requirements
 *  V10.01.00 28/03/2013  Saroeun Soeur  CAR 280425
 *  V10.01.00 21/02/2013  Saroeun Soeur  CAR 279937
 *                        Interface to Online Preadmission Database
 *
 ******************************************************************************/

function Process(AdmissionID,urno,admission) {

  AdmissionIDtest = AdmissionID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");

  if (admissionTest.length != 0 && urnotest.length != 0) {
     parent.location.href = "patweb98.pbl?reportno=1&template=001"+
            "&urnumber="+urno+"&admissno="+admission.replace(/ /g,"+");
     return; }

  if (urnotest.length != 0) {
     parent.location.href = "patweb14.pbl?reportno=3&template=001"+
            "&urnumber="+urno+"&admisnid="+AdmissionID;
     return; }

  theURL='patweb90.pbl?reportno=1&template=202&srchtype=1&norecord=5'+
         '&admisnid='+UpdateForm.admisnid.value.replace(/ /g,"+");
  if (UpdateForm.srchsnam!=null) theURL+='&srchsnam='+UpdateForm.srchsnam.value.toUpperCase()
  if (UpdateForm.srchgnam!=null) theURL+='&srchgnam='+UpdateForm.srchgnam.value.toUpperCase()
  if (UpdateForm.srchpsex!=null) theURL+='&srchpsex='+UpdateForm.srchpsex.value
  if (UpdateForm.srchpdob!=null) {
 
     var dob = UpdateForm.srchpdob.value;
     var yr = dob.substring(0,4)
     var mth = dob.substring(4,6);
     var day = dob.substring(6,8);

     mthArray = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
     
     var dateOfBirth = day+" "+mthArray[(parseInt(mth,10))]+" "+yr;
     theURL+='&srchpdob='+dateOfBirth;

  }
  if (UpdateForm.srchpage!=null) theURL+='&srchpage='+UpdateForm.srchpage.value

  location.href=theURL
}

function UpdatePending() {
  var admisnid = document.getElementById('admisnid');

  if(admisnid != null) {
    var xhr = createHttpObject();
    var url = "patweb14.pbl?reportno=07&websrvno=2"
              +"&statcode=1&admisnid="+admisnid.value.replace(/ /g,'+');
    xhr.open('GET',url,false);
    xhr.send("statcode=1");
    setTimeout(function(){ DFrameExitRefresh()},100);
  }
}

function UpdateProcessing() {
  var admisnid = document.getElementById('admisnid');

  if(admisnid != null) {
    var xhr = createHttpObject();
    var url = "patweb14.pbl?reportno=07&websrvno=2"
              +"&statcode=2&admisnid="+admisnid.value.replace(/ /g,'+');
    xhr.open('GET',url,false);
    xhr.send("statcode=1");
    setTimeout(function(){ DFrameExitRefresh()},100);
  }
}

function UpdateIgnore() {
  var admisnid = document.getElementById('admisnid');

  if(admisnid != null) {
    var xhr = createHttpObject();
    var url = "patweb14.pbl?reportno=07&websrvno=2"
              +"&statcode=5&admisnid="+admisnid.value.replace(/ /g,'+');
    xhr.open('GET',url,false);
    xhr.send();
    setTimeout(function(){ DFrameExitRefresh()},100);
  }
}
function unlinkURNO() {
  var admisnid = document.getElementById('admisnid');

  if(admisnid != null) {
    var xhr = createHttpObject();
    var url = "patweb14.pbl?reportno=07&websrvno=5"
              +"&admisnid="+admisnid.value.replace(/ /g,'+');
    xhr.open('GET',url,false);
    xhr.send();
    setTimeout(function(){ DFrameExitRefresh()},100);
  }
}
function unlinkVisit() {
  var admisnid = document.getElementById('admisnid');

  if(admisnid != null) {
    var xhr = createHttpObject();
    var url = "patweb14.pbl?reportno=07&websrvno=6"
              +"&admisnid="+admisnid.value.replace(/ /g,'+');
    xhr.open('GET',url,false);
    xhr.send();
    setTimeout(function(){ DFrameExitRefresh()},100);
  }
}
