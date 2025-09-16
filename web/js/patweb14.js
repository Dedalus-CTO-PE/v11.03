//jsVersion  : V11.03.01
//==============================================================================
  var mthArray = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];
//==============================================================================
//  patweb1403001 functions
//==============================================================================
//
function linkVisit(bktype,expdate,exptime,urno,admiss,clin,stat,bcase,uniq,book_typee,bhosp) {

  if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
    linkVisitNonEpisoft(bktype,expdate,exptime,urno,admiss,
                        clin,stat,bcase,uniq,book_type,bhosp);
    return;
  }

  var casekeys=bhosp+expdate+exptime+clin+stat+bcase;

  switch(bktype) {
    case 'THE':
      document.PatientLinks.admissno.value=admiss;
      document.PatientLinks.urnumber.value=urno;
      var link = "oprweb01.pbl?reportno=11&template=1"
                 +"&admissno="+admiss+"&urnumber="
                 +urno+"&admisnid="+getQueryString('admisnid')
                 +"&casekeys="+casekeys;
      break;
    case 'IP':
      document.PatientLinks.admissno.value=admiss;
      document.PatientLinks.urnumber.value=urno;
      var link = "patweb89.pbl?reportno=1&template=39"
                 +"&admissno="+admiss+"&urnumber="
                 +urno+"&admisnid="+getQueryString('admisnid');
      break;
    default:
      document.PatientLinks.admissno.value=admiss;
      document.PatientLinks.urnumber.value=urno;
      var link = "oprweb01.pbl?reportno=07&template=1"
                 +"&admissno="+admiss+"&urnumber="
                 +urno+"&admisnid="+getQueryString('admisnid')
                 +"&casekeys="+casekeys;
      break;
  }
  link = link.replace(/ /g,"+");
  location.href = link;
}
function linkVisitNonEpisoft(bktype,expdate,exptime,urno,admiss,clin,stat,bcase,uniq,book_type,bhosp) {
  var casekeys=bhosp+expdate+exptime+clin+stat+bcase;

  switch(trim(book_type)) {
    case 'THE':
    case 'MED':
    case 'CHE':
    case 'NOR':
      document.PatientLinks.admissno.value=admiss;
      document.PatientLinks.urnumber.value=urno;
      var link = "patweb89.pbl?reportno=01&template=020"
                 +"&admissno="+admiss+"&urnumber="
                 +urno+"&admisnid="+getQueryString('admisnid')
                 +"&casekeys="+casekeys;
      break;
    default:

      if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
        SetCookie("sjogwaPortalCOOKIE","");
      }

      document.PatientLinks.admissno.value=admiss;
      document.PatientLinks.urnumber.value=urno;
      var link = "patweb89.pbl?reportno=03&template=1"
                 +"&admissno="+admiss+"&urnumber="
                 +urno+"&admisnid="+getQueryString('admisnid');
      break;
  }
  if(trim(bktype)=='IP'){

      if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
        SetCookie("sjogwaPortalCOOKIE","");
      }

      document.PatientLinks.admissno.value=admiss;
      document.PatientLinks.urnumber.value=urno;
      var link = "patweb89.pbl?reportno=1&template=32"
                 +"&admissno="+admiss+"&urnumber="
                 +urno+"&admisnid="+getQueryString('admisnid');
   }
  link = link.replace(/ /g,"+");
  location.href = link;
}

//             --------------------------------------------
function createNewPreadmission() {

  if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
    SetCookie("sjogwaPortalCOOKIE","");
  }

   location.href = "patweb89.pbl?reportno=03&template=001"+
                   "&urnumber="+SelectCode.urnumber.value.replace(/ /g,"+")+
                   "&admisnid="+SelectCode.admisnid.value.replace(/ /g,"+");
}
//             --------------------------------------------
function createNewBooking() {

  if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
    SetCookie("sjogwaPortalCOOKIE","");
  }

  linkurl="watweb01.pbl?reportno=02&template=007"+
          "&urnumber="+SelectCode.urnumber.value.replace(/ /g,"+")+
          "&admisnid="+SelectCode.admisnid.value.replace(/ /g,"+");
  DFrameLink(linkurl,100,50,document.body.clientWidth-150,600);
}
//             --------------------------------------------
function cancel() {
  eAdmCookie=GetContentCookie("eAdmission");
  if (eAdmCookie!="unknown") {
      ExpireCookiePath("eAdmission");
      getTop().content.location.href=eAdmCookie; }
  else
  {
   theURL="patweb14.pbl?reportno=04&template=002&viewtype=1";
   eAdmDVCookie=GetContentCookie("eAdmissionDefaultView");
   if (eAdmDVCookie!="unknown") {
     theURL+="&deftview=" + eAdmDVCookie;
   }
   location.href = theURL; }
}
//==============================================================================
//  patweb1404002 functions
//==============================================================================
//
function SelectSubmit() {
  document.SelectPeriod.submit();
}
//             --------------------------------------------
function PageLoadExtended() {
  PageLoad();
  setupFilters();
}
//             --------------------------------------------
function setupFilters() {
   var filtflag = getQueryString('filtflag').replace(/\+/g," ");
   var hospflag = getQueryString('hospflag').replace(/\+/g," ");
   var showflag="";
       try { showflag=getQueryString('showflag').replace(/\+/g," ")
           } catch(err){};
   if(showflag!="1") {
     hospflag = document.SelectPeriod.wbsehosp.value;
   }
   var prioflag = getQueryString('prioflag').replace(/\+/g," ");
   var surname = getQueryString('filtsnam').replace(/\+/g,"");
   if(document.getElementById('filtsnam')) {
     document.getElementById('filtsnam').value=surname;
   }

   var filterflag = document.getElementById('filtflag');
   var hospitalflag = document.getElementById('hospflag');
   var priorityflag = document.getElementById('prioflag');

   defaultSelectionField(filterflag,filtflag);
   defaultSelectionField(hospitalflag,hospflag);
   defaultSelectionField(priorityflag,prioflag);
}
//             --------------------------------------------
function defaultSelectionField(selection,data) {
  if (selection != null && data != null) {
     for (var i = 0;i < selection.length;i++){
         if (selection[i].value == data) {
            selection.selectedIndex = i;
            break; }
     }
  }
}
//             --------------------------------------------
function forward() {
  var filtflag = getQueryString('filtflag');
  var hospflag = getQueryString('hospflag');
  var prioflag = getQueryString('prioflag');
  var showflag = getQueryString('showflag');
  if(showflag!="1") {
    hospflag=SelectPeriod.hospflag.value;
  }
  var surname = getQueryString('filtsnam');
  if(document.getElementById("d_pmilevel")) {
    filtflag = document.SelectPeriod.filtflag.value;
    surname = document.SelectPeriod.filtsnam.value;
  }
  if (isWhitespace(filtflag)) { filtflag = "+"; }
  if (isWhitespace(hospflag)) { hospflag = "+"; }
  if (isWhitespace(prioflag)) { prioflag = "+"; }
  if (isWhitespace(surname)) { surname = "+"; }
  location.href=FORWARD+"&filtflag="+filtflag
                       +"&hospflag="+hospflag
                       +"&prioflag="+prioflag
                       +"&showflag=1"
                       +"&filtsnam="+surname
}
function nextYear() {
  var filtflag = getQueryString('filtflag');
  var hospflag = getQueryString('hospflag');
  var prioflag = getQueryString('prioflag');
  var showflag = getQueryString('showflag');
  if(showflag!="1") {
    hospflag=SelectPeriod.hospflag.value;
  }
  var surname = getQueryString('filtsnam');
  if(document.getElementById("d_pmilevel")) {
    filtflag = document.SelectPeriod.filtflag.value;
    surname = document.SelectPeriod.filtsnam.value;
  }
  if (isWhitespace(filtflag)) { filtflag = "+"; }
  if (isWhitespace(hospflag)) { hospflag = "+"; }
  if (isWhitespace(prioflag)) { prioflag = "+"; }
  if (isWhitespace(surname)) { surname = "+"; }
  location.href=NEXT_YEAR+"&filtflag="+filtflag
                       +"&hospflag="+hospflag
                       +"&prioflag="+prioflag
                       +"&showflag=1"
                       +"&filtsnam="+surname
}
//             --------------------------------------------
function previous() {
  var filtflag = getQueryString('filtflag');
  var hospflag = getQueryString('hospflag');
  var prioflag = getQueryString('prioflag');
  var showflag = getQueryString('showflag');
  if(showflag!="1") {
    hospflag=SelectPeriod.hospflag.value;
  }
  var surname = getQueryString('filtsnam');
  if(document.getElementById("d_pmilevel")) {
    filtflag = document.SelectPeriod.filtflag.value;
    surname = document.SelectPeriod.filtsnam.value;
  }
  if (isWhitespace(filtflag)) { filtflag = "+"; }
  if (isWhitespace(hospflag)) { hospflag = "+"; }
  if (isWhitespace(prioflag)) { prioflag = "+"; }
  if (isWhitespace(surname)) { surname = "+"; }
  location.href=PREVIOUS+"&filtflag="+filtflag
                        +"&hospflag="+hospflag
                        +"&prioflag="+prioflag
                        +"&showflag=1"
                        +"&filtsnam="+surname
}
function previousYear() {
  var filtflag = getQueryString('filtflag');
  var hospflag = getQueryString('hospflag');
  var prioflag = getQueryString('prioflag');
  var showflag = getQueryString('showflag');
  if(showflag!="1") {
    hospflag=SelectPeriod.hospflag.value;
  }
  var surname = getQueryString('filtsnam');
  if(document.getElementById("d_pmilevel")) {
    filtflag = document.SelectPeriod.filtflag.value;
    surname = document.SelectPeriod.filtsnam.value;
  }
  if (isWhitespace(filtflag)) { filtflag = "+"; }
  if (isWhitespace(hospflag)) { hospflag = "+"; }
  if (isWhitespace(prioflag)) { prioflag = "+"; }
  if (isWhitespace(surname)) { surname = "+"; }
  location.href=PREVIOUS_YEAR+"&filtflag="+filtflag
                        +"&hospflag="+hospflag
                        +"&prioflag="+prioflag
                        +"&showflag=1"
                        +"&filtsnam="+surname
}
//             --------------------------------------------
function printDocument(urno,visn,admisnid) {
  SetCookiePath("eAdmission");
  location.href = "patweb14.pbl?&reportno=03"+
                  "&admisnid="+admisnid.replace(/ /g,"+")+
                  "&template=101&urnumber="+urno.replace(/ /g,"+")+
                  "&admissno="+visn.replace(/ /g,"+");
}
//             --------------------------------------------
function openDocument(file,path) {
  LinkUrl= "patweb14.pbl?reportno=3&template=103&path="+path+"&admisnid="+file;
  Left=(document.body.clientWidth-810)/2
  DFrameLink(LinkUrl,0,Left,810,820)
}
//             --------------------------------------------
function LinkTo(AdmissionID,urno,admission) {
  var t  = 50;
  var h  = document.body.clientHeight-150;
  var w = getClientWidth() - 400;
  var l = (getClientWidth()/2) - w/2;

  AdmissionIDtest = AdmissionID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");

  SetCookie("AdmissionID",AdmissionID);
  SetCookiePath("eAdmission");
  DFrameLink("patweb14.pbl?reportno=6&template=102&urnumber="+urno+
             "&admissno="+admission+"&admisnid="+AdmissionID,t,l,w,h);
}
//             --------------------------------------------
function LinkToBook(AdmissionID,urno,admission) {

  AdmissionIDtest = AdmissionID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");

  SetCookiePath("eAdmission");
  location.href = "patweb89.pbl?reportno=1&template=020&urnumber="+urno+
                  "&admissno="+admission.replace(/ /g,"+")+
                  "&admisnid="+AdmissionID;
}
//==============================================================================
//  patweb1406102 functions
//==============================================================================
//
function Process(AdmissionID,urno,admission) {

  AdmissionIDtest = AdmissionID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");

  if (admissionTest.length != 0 && urnotest.length != 0) {
     linkURL = "patweb98.pbl?reportno=1&template=001"+
               "&urnumber="+urno+
               "&admissno="+admission.replace(/ /g,"+");
     if(parent.document.getElementById('d_pmilevel')) {
       top.content.location.href=linkURL;
     } else {
       parent.location.href=linkURL;
     }
     return; }

  if (urnotest.length != 0) {
     linkURL = "patweb14.pbl?reportno=3&template=001"+
               "&urnumber="+urno+"&admisnid="+AdmissionID;
     if(parent.document.getElementById('d_pmilevel')) {
       top.content.location.href=linkURL;
     } else {
       parent.location.href=linkURL;
     }
     return; }

  if(parent.document.getElementById('d_pmilevel')) {
    if (typeof sjogprtl != 'undefined' && sjogprtl == "1") {
       SetCookie("sjogwaPortalCOOKIE","");
    }
    if(top.content.PatientLinks.urnumber!==undefined) {
      urno = top.content.PatientLinks.urnumber.value.replace(/ /g,"+");
    } else {
      alert("No patient in context.");
      return;
    }
    setTimeout(function() {
    top.content.location.href = "patweb89.pbl?reportno=1&template=2"
                                +"&urnumber="+urno
                                +"&admisnid="+AdmissionID; }, 100);
    return;
  }
  srchtyp1=1;  
  if (UpdateForm.cwebpsty!=null) {
      srchtyp1=UpdateForm.cwebpsty.value; 
  } 
  theURL='patweb90.pbl?reportno=1&template=202&srchtype='+srchtyp1+'&norecord=5'+
         '&admisnid='+UpdateForm.admisnid.value.replace(/ /g,"+");

  if (UpdateForm.srchsnam!=null) {
      theURL+='&srchsnam='+UpdateForm.srchsnam.value.toUpperCase(); }
  if (UpdateForm.srchgnam!=null) {
      theURL+='&srchgnam='+UpdateForm.srchgnam.value.toUpperCase(); }
//if (UpdateForm.srchpsex!=null) {
//    theURL+='&srchpsex='+UpdateForm.srchpsex.value; }
  if (UpdateForm.srchpdob!=null) {
      var dob = UpdateForm.srchpdob.value;
      var yr = dob.substring(0,4);
      var mth = dob.substring(4,6);
      var day = dob.substring(6,8);
      var dateOfBirth = day+" "+mthArray[(parseInt(mth,10))]+" "+yr;
      theURL+='&srchpdob='+dateOfBirth; }
  if (UpdateForm.srchpage!=null) {
      theURL+='&srchpage='+UpdateForm.srchpage.value; }
  location.href=theURL;
}
//             --------------------------------------------
function UpdatePending() {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=2"
               +"&statcode=1&admisnid="+admisnid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send("statcode=1");
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
//             --------------------------------------------
function UpdateProcessing() {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=2"
               +"&statcode=2&admisnid="+admisnid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send("statcode=1");
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
//             --------------------------------------------
function UpdateIgnore() {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=2"
               +"&statcode=5&admisnid="+admisnid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
//             --------------------------------------------
function unlinkURNO() {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=5"
               +"&admisnid="+admisnid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
//             --------------------------------------------
function unlinkVisit() {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=6"
               +"&admisnid="+admisnid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
//             ---------------------------------------------
function linkVisitUR(expdate,exptime,admiss,urno) {
var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=7"
               +"&admisnid="+admisnid.value.replace(/ /g,'+')
               +"&urnumber="+urno+"&admissno="+admiss;
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ CloseFrame(); },100);}
}
//             --------------------------------------------
function CloseFrame() {
    parent.parent.location.reload(); 
}
//             --------------------------------------------
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,400)
}
//==============================================================================
//  patweb1403101 functions
//==============================================================================
//
  var documentCollection = new Array();
//             --------------------------------------------
  function staging() {
    if (eAdmCookie!="unknown") {
       location.href=eAdmCookie; }
    else {
       theURL="patweb14.pbl?reportno=04&template=002";
       eAdmDVCookie=GetContentCookie("eAdmissionDefaultView");
       if (eAdmDVCookie!="unknown") {
         theURL+="&deftview=" + eAdmDVCookie;
       }
       location.href=theURL; }
  }
//             --------------------------------------------
  function ViewDoc(linkurl) {
     var admisnid = getQueryString('admisnid');
     linkurl += "&admisnid="+admisnid;
     Left=(document.body.clientWidth-480)/2
     DFrameLink(linkurl,0,Left,480,400)
   }
//             --------------------------------------------
   function print() {
     var form = document.getElementById('AddForm');
     for (var i =0;i< documentCollection.length;i++) {
         var prtel = document.createElement('input');
         var docel = document.createElement('input');
         prtel.type = "hidden";
         prtel.name = documentCollection[i].items[0].name;
         prtel.value = documentCollection[i].items[0].value;
         docel.type = "hidden";
         docel.name = documentCollection[i].items[1].name;
         docel.value = documentCollection[i].items[1].value;
         form.appendChild(prtel);
         form.appendChild(docel);
     }
     if (documentCollection.length > 0) {
        form.submit(); }
     else {
        alert("nothing to print!"); }
   }
//             --------------------------------------------
   function add(el) {
     var num = el.id.substr(5,8);
     var prtid = document.getElementById('prtid'+num);
     var docid = document.getElementById('docid'+num);
     var len = documentCollection.length;
     var id = 100;
     var item = { "id":num,
                  "items":[ {"name":"printrid",
                             "value":prtid[prtid.selectedIndex].value },
                            {"name":"docmntid",
                             "value":docid.value.replace(/\+/g," ") }
                          ]
                };
     documentCollection.push(item);
   }
//             --------------------------------------------
   function changePrinter(el) {
     var num = el.id.substr(5,8);
     for (var i = 0; i < documentCollection.length;i++) {
       if (documentCollection[i].id == num) {
         documentCollection[i].items[0].value = el[el.selectedIndex].value;
         break;
       }
     }
   }
//             --------------------------------------------
   function remove(el) {
     var num = el.id.substr(5,8);
     for (var i = 0; i < documentCollection.length;i++) {
       if (documentCollection[i].id == num) {
         documentCollection.splice(i,1);
         break;
       }
     }
   }
function linkVisitWaitList(admiss,urno,casek) {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=7"
               +"&admisnid="+admisnid.value.replace(/ /g,'+')
               +"&urnumber="+urno+"&admissno="+admiss;
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ WLRedirect(casek); },100);}
}
function WLRedirect(casek) {
 if(casek==undefined) {
    cancel();
 } else {
   linkurl="watweb01.pbl?reportno=02&template=001"+
          "&casekeys="+casek.replace(/ /g,"+");
   getTop().content.location.href=linkurl;
 }
}
function closeButton() {
    if(parent.document.getElementById("d_pmilevel")) {
      parent.DFrameExit();   // Close process and search frames
    } else {
      DFrameExit();
    }
}
function linkVisitCurrAdm(admiss,urno) {
  var admisnid = document.getElementById('admisnid');

  if (admisnid != null) {
     var xhr = createHttpObject();
     var url = "patweb14.pbl?reportno=07&websrvno=7"
               +"&admisnid="+admisnid.value.replace(/ /g,'+')
               +"&urnumber="+urno+"&admissno="+admiss;
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ cancel(); },100);}
}
function HDocLink(doclink) {
 if(isWhitespace(doclink)) {
   return;
 }
 NewWindow=window.open(doclink,"NewWindow",
 "width=1024,height=768,top=10,left=10,location=no,toolbar=yes,scrollbars=yes,resizable=yes");
}
function SetMenuDefaultView() {
  if(!document.getElementById("deftview")) {
    return;
  }
  SetCookie("eAdmissionDefaultView",document.getElementById("deftview").value);
}
