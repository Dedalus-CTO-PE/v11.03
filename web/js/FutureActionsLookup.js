//jsVersion  : V11.03.00
//========================================================================
// Program   :  FutureActionsLookup.js
//
// Written   : 10.01.2012 Brian Ackland
//
// Function  : Enable Icon on Furture Actions Page
//
// Version   :
//
// V10.03.01 01.03.2012 Saroeun Soeur  CAR 261071
//           added SetFutureActionPrivatePractice function
// V10.03.00 19.01.2012 Brian Ackland  CAR 256546
//           Created js
//
var listSC;
function init() {
  listSC = new ShortCuts();
  FutureActionShortCuts();
  ShowShortCuts();
}
function SetFutureAction(daysOffset,typeCode,commentText) {
  for (i=0;i<parent.UpdateForm.factcode.options.length;i++) {
    if (typeCode==parent.UpdateForm.factcode.options[i].value.substr(0,3)) {
       parent.UpdateForm.factcode.selectedIndex=i
    }
  }
  parent.UpdateForm.factcomm.value=commentText;
  var theDate = new Date();
  theDate.setDate(theDate.getDate()+daysOffset);
  var DD   = theDate.getDate();
  var MM   = theDate.getMonth();
  var YYYY = theDate.getFullYear();
  var monthname = new Array("Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec");
  parent.UpdateForm.factdate.value=DD + " " + monthname[MM] + " " + YYYY
  DFrameExit()
}

function SetFutureActionPrivatePractice(daysOffset,typeCode,commentText,medicalType) {
  // future action type
  for (i=0;i<parent.AddForm.prifa004.options.length;i++) {
    if (typeCode==parent.AddForm.prifa004.options[i].value.substr(0,3)) {
       parent.AddForm.prifa004.selectedIndex=i;
       break;
    }
  }

  //medical Typ
  for (i=0;i<parent.AddForm.prifa006.options.length;i++) {
    if (medicalType == parent.AddForm.prifa006.options[i].value.substr(0,3)) {
       parent.AddForm.prifa006.selectedIndex=i;
       break;
    }
  }

  parent.AddForm.prifa005.value=commentText;

  var theDate = new Date();
  theDate.setDate(theDate.getDate()+daysOffset);
  var DD   = theDate.getDate();
  var MM   = theDate.getMonth();
  var YYYY = theDate.getFullYear();
  var monthname = new Array("Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec");
  parent.AddForm.prifa001.value=DD + " " + monthname[MM] + " " + YYYY
  DFrameExit()
}

function ShortCuts() {
   this.SC = new Array();
   this.addSC = _addShortCut;
}

function _addShortCut() {
  var serverName = parent.document.getElementById('server');
  this.SC[this.SC.length] = new Array();
  var row = this.SC[this.SC.length-1];


  for(var i = 0; i < arguments.length; i++) {
    if(i == 4 || i == 2) {
     row[row.length] = arguments[i];
    }else {
     row[row.length] = arguments[i].replace(/\s*$/,"");
    }
  }
}

function ShowShortCuts() {

 var serverName = parent.document.getElementById('server');

 OS  = "<ul class=scList>";

 if (serverName == null) {
   for (i=0;i<listSC.SC.length;i++) {
     OS += "<li class=scItem onclick=\"SetFutureAction("+listSC.SC[i][1]+",'" +
                                      listSC.SC[i][2]  +"','" +
                                      listSC.SC[i][3] + "');\">" +
                                      listSC.SC[i][0] + "</li>";

    }
 }else if (serverName.value.replace(/ /g,"").value = "PRIWEB") {
   for (i=0;i<listSC.SC.length;i++) {
     OS += "<li class=scItem onclick=\"SetFutureActionPrivatePractice("+listSC.SC[i][1]+",'" +
                                      listSC.SC[i][2]  +"','" +
                                      listSC.SC[i][3]  +"','" +
                                      listSC.SC[i][4] + "');\">" +
                                      listSC.SC[i][0] + "</li>";
    }
 }

 OS += "</ul>"
 el=document.getElementById("ListShortCuts")
 el.innerHTML = OS;
}

