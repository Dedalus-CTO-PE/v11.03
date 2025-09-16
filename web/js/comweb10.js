//jsVersion  : V11.03.01
//==============================================================================
var mthArray = ["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"];

function setupFilters() {
   var ibcnmhos = document.getElementById('ibcnmhos');
   var hosp_div = document.getElementById('hosp_div'); 
   var show_hosp = document.getElementById('show_hosp'); 
   var no_hosp = document.getElementById('no_hosp'); 
   if(ibcnmhos.value == 1) {
      hosp_div.innerHTML=show_hosp.innerHTML;
   } else {
      hosp_div.innerHTML=no_hosp.innerHTML;
   }
   var filtflag = getQueryString('filtflag').replace(/\+/g," ");
   var hospflag = getQueryString('hospflag').replace(/\+/g," ");
   var showflag="";
       try { showflag=getQueryString('showflag').replace(/\+/g," ")
           } catch(err){};
   if(showflag!="1") {
     hospflag = document.SelectPeriod.wbsehosp.value;
   }
   var prioflag = getQueryString('prioflag').replace(/\+/g," ");
   var filtbtyp = getQueryString('filtbtyp').replace(/\+/g," ");
   var filtclam = getQueryString('filtclam').replace(/\+/g," ");
   var filtdoct = getQueryString('filtdoct').replace(/\+/g," ");

   var filterflag = document.getElementById('filtflag');
   var hospitalflag = document.getElementById('hospflag');
   var priorityflag = document.getElementById('prioflag');
   var bookingtype = document.getElementById('filtbtyp');
   var claimtype = document.getElementById('filtclam');
   var adoctor = document.getElementById('filtdoct');

   defaultSelectionField(filterflag,filtflag);
   defaultSelectionField(hospitalflag,hospflag);
   defaultSelectionField(priorityflag,prioflag);
   defaultSelectionField2(bookingtype,filtbtyp);
   defaultSelectionField2(claimtype,filtclam);
   adoctor.value=filtdoct;
   if(!isWhitespace(adoctor.value)) {
     validateCode(18,SelectPeriod.filtdoct,SelectPeriod.d_filtdoct);
   }
}
function defaultSelectionField(selection,data) {
  if (selection != null && data != null) {
     for (var i = 0;i < selection.length;i++){
         if (selection[i].value == data) {
            selection.selectedIndex = i;
            break; }
     }
  }
}
function defaultSelectionField2(selection,data) {
  if (selection != null && data != null) {
     for (var i = 0;i < selection.length;i++){
         if (trim(selection[i].value.substr(0,3)) == trim(data.substr(0,3))) {
            selection.selectedIndex = i;
            break; }
     }
  }
}
function forward() {
  var filtflag = getQueryString('filtflag');
  var hospflag = getQueryString('hospflag');
  var prioflag = getQueryString('prioflag');
  var showflag = getQueryString('showflag');
  var filtbtyp = getQueryString('filtbtyp');
  var filtclam = getQueryString('filtclam');
  var filtdoct = getQueryString('filtdoct');
  if(showflag!="1") {
    hospflag=SelectPeriod.hospflag.value;
  }
  if (isWhitespace(filtflag)) { filtflag = "+"; }
  if (isWhitespace(hospflag)) { hospflag = "+"; }
  if (isWhitespace(prioflag)) { prioflag = "+"; }
  if (isWhitespace(filtbtyp)) { filtbtyp = "+"; }
  if (isWhitespace(filtclam)) { filtclam = "+"; }
  if (isWhitespace(filtdoct)) { filtdoct = "+"; }
  location.href=FORWARD+"&filtflag="+filtflag
                       +"&hospflag="+hospflag
                       +"&prioflag="+prioflag
                       +"&filtbtyp="+filtbtyp
                       +"&filtclam="+filtclam
                       +"&filtdoct="+filtdoct
                       +"&showflag=1";
}
//             --------------------------------------------
function previous() {
  var filtflag = getQueryString('filtflag');
  var hospflag = getQueryString('hospflag');
  var prioflag = getQueryString('prioflag');
  var showflag = getQueryString('showflag');
  var filtbtyp = getQueryString('filtbtyp');
  var filtclam = getQueryString('filtclam');
  var filtdoct = getQueryString('filtdoct');
  if(showflag!="1") {
    hospflag=SelectPeriod.hospflag.value;
  }
  if (isWhitespace(filtflag)) { filtflag = "+"; }
  if (isWhitespace(hospflag)) { hospflag = "+"; }
  if (isWhitespace(prioflag)) { prioflag = "+"; }
  if (isWhitespace(filtbtyp)) { filtbtyp = "+"; }
  if (isWhitespace(filtclam)) { filtclam = "+"; }
  if (isWhitespace(filtdoct)) { filtdoct = "+"; }
  location.href=PREVIOUS+"&filtflag="+filtflag
                        +"&hospflag="+hospflag
                        +"&prioflag="+prioflag
                        +"&filtbtyp="+filtbtyp
                        +"&filtclam="+filtclam
                        +"&filtdoct="+filtdoct
                        +"&showflag=1";
}
function SelectSubmit() {
  document.SelectPeriod.submit();
}
function LinkTo(ReferralID,urno,admission) {
  var t  = 50;
  var h  = document.body.clientHeight-150;
  var w = getClientWidth() - 400;
  var l = (getClientWidth()/2) - w/2;

  ReferralID = ReferralID.replace(/ /g,"");
  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admission = admission.replace(/ /g,"+");

  SetCookiePath("eReferral");
  DFrameLink("comweb10.pbl?reportno=2&template=001&urnumber="+urno+
             "&admissno="+admission+"&erefrlid="+ReferralID,t,l,w,h);
}
function UpdateIgnore() {
  var erefrlid = document.getElementById('erefrlid');

  if (erefrlid != null) {
     var xhr = createHttpObject();
     var url = "comweb10.pbl?reportno=3&remoteno=1"
               +"&statcode=5&erefrlid="+erefrlid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
function UpdatePending() {
  var erefrlid = document.getElementById('erefrlid');

  if (erefrlid != null) {
     var xhr = createHttpObject();
     var url = "comweb10.pbl?reportno=3&remoteno=1"
               +"&statcode=1&erefrlid="+erefrlid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
function UpdateProcessing() {
  var erefrlid = document.getElementById('erefrlid');

  if (erefrlid != null) {
     var xhr = createHttpObject();
     var url = "comweb10.pbl?reportno=3&remoteno=1"
               +"&statcode=2&erefrlid="+erefrlid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
function unlinkURNO() {
  var erefrlid = document.getElementById('erefrlid');

  if (erefrlid != null) {
     var xhr = createHttpObject();
     var url = "comweb10.pbl?reportno=3&remoteno=2"
               +"&erefrlid="+erefrlid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
function unlinkVisit() {
  var erefrlid = document.getElementById('erefrlid');

  if (erefrlid != null) {
     var xhr = createHttpObject();
     var url = "comweb10.pbl?reportno=3&remoteno=3"
               +"&erefrlid="+erefrlid.value.replace(/ /g,'+');
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ DFrameExitRefresh(); },100); }
}
function linkVisit(bktype,admiss,urno,casek,dept) {
  var waitlist = document.getElementById('waitlist');
  if(isWhitespace(casek) && trim(waitlist.value) == "1") {
    if(confirm("This is not an 'Add to Public Waiting List Function'\n " +
      "Select OK to return to eReferral or Cancel to proceed")){
      return ;
    }
  }
  if(!isWhitespace(casek) && trim(waitlist.value) != "1") {
    if(confirm("This is not an 'Add to Public Waiting List eReferral'\n " +
      "Select OK to return to eReferral or Cancel to proceed")){
      return ;
    }
  }

  switch(bktype) {
    case 'WAT':
      var link = "watweb01.pbl?reportno=02&template=3"
                 +"&admissno="+admiss
                 +"&urnumber="+urno
                 +"&erefrlid="+getQueryString('erefrlid')
                 +"&casekeys="+casek;
      link = link.replace(/ /g,"+");
      location.href = link;
      break;
    case 'REF':
      var link = "allweb02.pbl?reportno=02&template=3"
                 +"&admissno="+admiss
                 +"&urnumber="+urno
                 +"&deptcode="+dept
                 +"&erefrlid="+getQueryString('erefrlid')
      link = link.replace(/ /g,"+");
      Left=(document.body.clientWidth-1000)/2
      DFrameLink(link,10,Left,1000,900)
      break;
    case 'THE':
      var link = "oprweb01.pbl?reportno=11&template=001"
                 +"&admissno="+admiss
                 +"&urnumber="+urno
                 +"&erefrlid="+getQueryString('erefrlid')
                 +"&casekeys="+casek;
      link = link.replace(/ /g,"+");
      location.href = link;
      break;
    case 'BOK':
      var link = "oprweb01.pbl?reportno=7&template=001"
                 +"&admissno="+admiss
                 +"&urnumber="+urno
                 +"&erefrlid="+getQueryString('erefrlid');
      link = link.replace(/ /g,"+");
      location.href = link;
      break;
    default:
      var link = "patweb98.pbl?reportno=01&template=1"
                 +"&admissno="+admiss
                 +"&urnumber="+urno
      link = link.replace(/ /g,"+");
      location.href = link;
      break;
  }
}
function linkVisitUR(admiss,urno,casek) {
  var erefrlid = document.getElementById('erefrlid');
  var waitlist = document.getElementById('waitlist');

  if(isWhitespace(casek) && trim(waitlist.value) == "1") {
    if(confirm("This is not an 'Add to Public Waiting List Function'\n " +
      "Select OK to return to eReferral or Cancel to proceed")){
      return ;
    }
  }
  if(!isWhitespace(casek) && trim(waitlist.value) != "1") {
    if(confirm("This is not an 'Add to Public Waiting List eReferral'\n " +
      "Select OK to return to eReferral or Cancel to proceed")){
      return ;
    }
  }

  if (erefrlid != null) {
     var xhr = createHttpObject();
     var url = "comweb10.pbl?reportno=03&remoteno=5"
               +"&erefrlid="+erefrlid.value.replace(/ /g,'+')
               +"&urnumber="+urno+"&admissno="+admiss
               +"&casekeys="+casek
     xhr.open('GET',url,false);
     xhr.send();
     setTimeout(function(){ CloseFrame(); },100);}
}
function CloseFrame() {
  parent.parent.location.reload();
}
//==============================================================================
//  Process eReferral         
//==============================================================================
function Process(ReferralID,urno,admission) {

  urnotest = urno.replace(/ /g,"");
  urno = urno.replace(/ /g,"+");
  admissionTest = admission.replace(/ /g,"");
  admission = admission.replace(/ /g,"+");

  if (admissionTest.length != 0 && urnotest.length != 0) {
     parent.location.href = "patweb98.pbl?reportno=1&template=001"+
                            "&urnumber="+urno+
                            "&admissno="+admission.replace(/ /g,"+");
     return; }

  if (urnotest.length != 0) {
     parent.location.href = "comweb10.pbl?reportno=4&template=001"+
                            "&urnumber="+urno+"&erefrlid="+ReferralID;
     return; }

  theURL='patweb90.pbl?reportno=1&template=202&srchtype=1&norecord=5'+
         '&erefrlid='+UpdateForm.erefrlid.value.replace(/ /g,"+");
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
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,400)
}
function cancel() {
  eRefCookie=GetContentCookie("eReferral");
  if (eRefCookie!="unknown") {
      ExpireCookiePath("eReferral");
      getTop().content.location.href=eRefCookie; }
  else
  { location.href = "comweb10.pbl?reportno=01&template=001&viewtype=1"; }
}
function createNewReferral() {
  if(isWhitespace(SelectCode.deptcode.value)) {
    alert("Invalid referrals department");
    return;
  }
   
  var xhr = createHttpObject();
  var url = "comweb10.pbl?reportno=03&remoteno=6"
            +"&deptcode="+SelectCode.deptcode.value.replace(/ /g,'+')
  xhr.open('GET',url,false);
  xhr.send();
  if (xhr.responseText != "" && xhr.status == 200) {
    if(xhr.responseText.match(/false/g)) {
      alert("Department not setup for referrals.");
      return;
    }
  } else {
    alert('Error Connecting to Web Service');
    return;
  }
   
  linkurl = "allweb02.pbl?reportno=03&template=001"+
            "&urnumber="+SelectCode.urnumber.value.replace(/ /g,"+")+
            "&erefrlid="+SelectCode.erefrlid.value.replace(/ /g,"+")+
            "&deptcode="+SelectCode.deptcode.value.replace(/ /g,"+")+
            "&allrf001="+SelectCode.deptcode.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,0,Left,900,900)
}
function createNewWaitingList() {
  location.href = "watweb01.pbl?reportno=02&template=002"+
                  "&urnumber="+SelectCode.urnumber.value.replace(/ /g,"+")+
                  "&erefrlid="+SelectCode.erefrlid.value.replace(/ /g,"+");
}
function createNewBooking() {
  linkurl="watweb01.pbl?reportno=02&template=007"+
          "&urnumber="+SelectCode.urnumber.value.replace(/ /g,"+")+
          "&erefrlid="+SelectCode.erefrlid.value.replace(/ /g,"+");
  DFrameLink(linkurl,100,50,document.body.clientWidth-150,600);
}
function printDocument(urno,visn,admisnid) {
  SetCookiePath("eReferral");
  location.href = "patweb14.pbl?&reportno=03"+
                  "&admisnid="+admisnid.replace(/ /g,"+")+
                  "&erefrlid="+admisnid.replace(/ /g,"+")+
                  "&template=101&urnumber="+urno.replace(/ /g,"+")+
                  "&admissno="+visn.replace(/ /g,"+");
}
//             --------------------------------------------
function openDocument(file,path) {
  LinkUrl= "patweb14.pbl?reportno=3&template=103&path="+path+
           "&admisnid="+file.substr(0,20) +
           "&erefrlid="+file.substr(0,20);
  Left=(document.body.clientWidth-810)/2
  DFrameLink(LinkUrl,0,Left,810,880)
}

//==============================================================================
//  comweb1002001 functions
//==============================================================================
//
//             --------------------------------------------
  function ViewDoc(linkurl) {
     var admisnid = getQueryString('admisnid');
     linkurl += "&admisnid="+admisnid;
     Left=(document.body.clientWidth-480)/2
     DFrameLink(linkurl,0,Left,480,400)
   }
//             --------------------------------------------
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
// Executes the printer to print the documents in the queue

   function print() {
     var form = document.getElementById('UpdateForm');
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
// Adds document to the print queue

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
// Changes the printer being used

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
// Removes document from the print queue

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


