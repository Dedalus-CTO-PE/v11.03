//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9603707.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//

function SubmitTransfer() {
  if (validateMandatory(pat96btf)) {
    if(pat96btf.ptcnbedm.value=="1") {
      WardbedreqUpdate(pat96btf.admissno,pat96btf.trntowrd,pat96btf.trntobed)
    }
    SetHousekeeping();
    theURL=document.pat96btf.action;
    var postStr=AJAXPostString2(document.pat96btf)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/location.href/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function ShowHouse() {
  if(document.pat96btf.ptcnchot.value=="1") {
    Housekeeping.outerHTML=Displayhousekeeping.innerHTML;
  }
}
function HouseMandatory() {
  if(document.pat96btf.notifyhs.value=="1") {
     document.pat96btf.pmhrd006.className="Mandatory"
     document.pat96btf.pmhrd006.disabled=false;
  } else {
     document.pat96btf.pmhrd006.selectedIndex=0;
     document.pat96btf.pmhrd006.className="Readonly"
     document.pat96btf.pmhrd006.disabled=true;
  }
}   
function SetHousekeeping() {
  if(document.pat96btf.ptcnchot.value=="1" &&
    document.pat96btf.notifyhs.value=="1") {
    i=document.pat96btf.trandate.selectedIndex;
    document.pat96btf.pmhrd004.value=document.pat96btf.trandate.options[i].text;
    document.pat96btf.pmhrd005.value=document.pat96btf.trantime.value;
  }
}
function days_between(date1, date2) {
    date1=new Date(date1);
    date2=new Date(date2);

    // The number of milliseconds in one day
    var ONE_DAY = 1000 * 60 * 60 * 24

    // Convert both dates to milliseconds
    var date1_ms = date1.getTime()
    var date2_ms = date2.getTime()

    // Calculate the difference in milliseconds
    var difference_ms = Math.abs(date1_ms - date2_ms)

    // Convert back to days and return
    return Math.round(difference_ms/ONE_DAY)

}
//-----------------------------------------------------------------
// Check for outstanding ward/bed requests. Update the status to
// completed and prompt any mismatch warnings
//-----------------------------------------------------------------
function WardbedreqUpdate(adm,ward,bed) {
  ReturnFunction="" ;
  for (var i=1; i < WardbedreqUpdate.arguments.length; i++) {
   if (typeof(WardbedreqUpdate.arguments[i]) == 'function') {
     ReturnFunction=WardbedreqUpdate.arguments[i] } }
  var serverURL = "../cgi-bin/patweb10.pbl?reportno=10&remoteno=1" +
                  "&admissno="+adm.value.replace(/ /g,"+") +
                  "&validwrd="+ward.value.replace(/ /g,"+") +
                  "&validbed="+bed.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(ReturnValue[0]=="1") {
      alertify.alert("Ward/Bed request mismatch - Please notify the" +
            " bed allocator");
    }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction()
    }
  }
}
function setButtons() {
 var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
         checkBedStatus(pat96btf.trntowrd.value,pat96btf.trntobed.value,
                        pat96btf.trandate.value,pat96btf.expdleos.value,
                        pat96btf.trantime.value,pat96btf.ptrgm001.value,
                        pat96btf.ptrgm002.value,pat96btf.ptrgm003.value,
                        SubmitTransfer);
     }

  }
}
function checkBedStatus(wardcode,beddcode) {
  admissno=PatientLinks.admissno.value.replace(/ /g,"+")
//  if (isWhitespace(wardcode)) return;;
  ReturnFunction="" ;
  var admisdte="";
  var staydays="0";
  var admistme="";
  var ptrgm001="";
  var ptrgm002="";
  var ptrgm003="";
  var x="";
  var y="0";
  var z;
  var z1;
  var staydays="";
  for (var i=2; i < checkBedStatus.arguments.length; i++) {
   if (typeof(checkBedStatus.arguments[i]) == 'function') {
     ReturnFunction=checkBedStatus.arguments[i] } }

  // Receive optional parameters
  if (checkBedStatus.arguments.length >= 9) {
    admisdte=checkBedStatus.arguments[2].replace(/ /g,"+");

//    staydays=checkBedStatus.arguments[3].replace(/ /g,"+");
   
    if (pat96btf.trandate.value.substring(4,6)=="01") mon="Jan"
    if (pat96btf.trandate.value.substring(4,6)=="02") mon="Feb"
    if (pat96btf.trandate.value.substring(4,6)=="03") mon="Mar"
    if (pat96btf.trandate.value.substring(4,6)=="04") mon="Apr"
    if (pat96btf.trandate.value.substring(4,6)=="05") mon="May"
    if (pat96btf.trandate.value.substring(4,6)=="06") mon="Jun"
    if (pat96btf.trandate.value.substring(4,6)=="07") mon="Jul"
    if (pat96btf.trandate.value.substring(4,6)=="08") mon="Aug"
    if (pat96btf.trandate.value.substring(4,6)=="09") mon="Sep"
    if (pat96btf.trandate.value.substring(4,6)=="10") mon="Oct"
    if (pat96btf.trandate.value.substring(4,6)=="11") mon="Nov"
    if (pat96btf.trandate.value.substring(4,6)=="12") mon="Dec"
    pat96btf.convdate.value=pat96btf.trandate.value.substring(6,8) + " " +
                            mon + " " +
                            pat96btf.trandate.value.substring(0,4)
    z=days_between(pat96btf.trindate.value,pat96btf.convdate.value);
    z1=days_between(pat96btf.admndate.value,pat96btf.trindate.value);
    staydays=checkBedStatus.arguments[3]-z-z1;
    if (staydays<0) {
      staydays="0";
    }
    admistme=checkBedStatus.arguments[4].replace(/ /g,"+");
    ptrgm001=checkBedStatus.arguments[5].replace(/ /g,"+");
    ptrgm002=checkBedStatus.arguments[6].replace(/ /g,"+");
    ptrgm003=checkBedStatus.arguments[7].replace(/ /g,"+");
    prnxindi="0";
  }
  var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=1" +
                  "&wardcode="+wardcode.replace(/ /g,"+") +
                  "&beddcode="+beddcode.replace(/ /g,"+") +
                  "&admissno="+admissno.replace(/ /g,"+") +
                  "&admisdte="+x.replace(/ /g,"+") +
                  "&admistme="+admistme.replace(/ /g,"+") +
                  "&staydays="+y.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {

    if (isWhitespace(document.pat96btf.trntowrd.options[document.pat96btf.trntowrd.selectedIndex].value)) {
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction()
        return;
      }
    }

    if (isWhitespace(document.pat96btf.trntobed.options[document.pat96btf.trntobed.selectedIndex].value)) {
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction()
        return;
      }
    }
    if (pat96btf.pswdindc.value==0) {
      var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=5" +
                      "&wardcode="+wardcode.replace(/ /g,"+") +
                      "&beddcode="+beddcode.replace(/ /g,"+") +
                      "&admissno="+admissno.replace(/ /g,"+") +
                      "&admisdte="+admisdte.replace(/ /g,"+") +
                      "&staydays="+staydays+
                      "&admistme="+admistme.replace(/ /g,"+") +
                      "&ptrgm001="+ptrgm001.replace(/ /g,"+") +
                      "&ptrgm002="+ptrgm002.replace(/ /g,"+") +
                      "&ptrgm003="+ptrgm003.replace(/ /g,"+") +
                      "&prnxindi="+prnxindi.replace(/ /g,"+")
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        if (returnValue.return_value==1) {
          confirmMsg="Warning: Pre-Adm/Admission will override a previous bed managment record.";
          alertify.confirm(confirmMsg, function (e) {    
            if (!e) {
              return;
            }
          });
        }
        prevretval=returnValue.return_value;
        prnxindi="1";
        var serverURL = "../cgi-bin/patweb96.pbl?reportno=12&remoteno=5" +
                        "&wardcode="+wardcode.replace(/ /g,"+") +
                        "&beddcode="+beddcode.replace(/ /g,"+") +
                        "&admissno="+admissno.replace(/ /g,"+") +
                        "&admisdte="+admisdte.replace(/ /g,"+") +
                        "&staydays="+staydays+
                        "&admistme="+admistme.replace(/ /g,"+") +
                        "&ptrgm001="+ptrgm001.replace(/ /g,"+") +
                        "&ptrgm002="+ptrgm002.replace(/ /g,"+") +
                        "&ptrgm003="+ptrgm003.replace(/ /g,"+") +
                        "&prnxindi="+prnxindi.replace(/ /g,"+")
        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0) {
          if (returnValue.return_value==1) {
            confirmMsg="Warning: Pre-Adm/Admission will override a previous bed managment record.";
            alertify.confirm(confirmMsg, function (e) {    
              if (!e) {
                return;
              }
            });
          }

          if (prevretval==1 || returnValue.return_value==1) {
            pat96btf.pswdindc.value="1";
            PasswordHead.innerHTML=passwordhd.innerHTML;
            PasswordCode.innerHTML=passwordcd.innerHTML;
            UserNameHead.innerHTML=usernamehd.innerHTML;
            UserNameCode.innerHTML=usernamcd.innerHTML;
            return;
          }
          if (typeof(ReturnFunction) == 'function') {
            ReturnFunction()
          }
        }
      }
    } else {
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction()
      }
    }
  }
}
