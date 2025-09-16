//jsVersion  : V11.03.02
//------------------------------------------------------------ 
// Function : outweb02.js 
//------------------------------------------------------------ 
counter=0;
var ReturnExitFunction;
var ReturnFunction;
var ReturnUrn;
var ReturnNam;
var ReturnAdm;
var CompatibilityMode = false;  // IE Browser Compatibility Mode
var scrollTableBody = true;     // set option to scroll table body

function Table(Border,Cellspacing,Cellpadding,Width,Align,HHeight,RHeight) { 
   this.Border = Border; 
   this.Cellspacing = Cellspacing; 
   this.Cellpadding = Cellpadding; 
   this.Width = Width; 
   this.Align = Align; 
   this.HeadingHeight = HHeight; 
   this.RowHeight = RHeight; 
   this.rows = new Array(); 
   this.addRow = _addTableRow; 
   this.columns = new Array(); 
   this.addColumn = _addTableColumn; 
   this.sortTable = _sortTable; 
   this.tableTotals = new Array(); 
   this.addTotal = _addTableTotal; 
   AscDsc=1 
} 
function _addTableTotal() { 
  for(var i = 0; i < arguments.length; i++)  
     this.tableTotals[i] = arguments[i]; 
} 
function _sortTable(Column,AscDsc) { 
  SortOrderBy = t.columns[Column][3] 
  if (AscDsc == 1) { 
    switch(t.columns[Column][1]) { 
      case "Date"      :  t.rows.sort(NumericSort); break; 
      case "DateTime"  :  t.rows.sort(StringSort); break; 
      case "Time"      :  t.rows.sort(StringSort); break; 
      case "Number"    :  t.rows.sort(NumericSort); break; 
      case "Image"     :  t.rows.sort(StringSort); break; 
      case "ButtonLink":  t.rows.sort(StringSort); break; 
      case "ButtonLinkWide":  t.rows.sort(StringSort); break; 
      case "StringColor":  t.rows.sort(StringSort); break; 
      case "ButtonLinkText":  t.rows.sort(StringSort); break; 
      case "String"    :  t.rows.sort(StringSort); break; 
      case "StringPatient"    :  t.rows.sort(StringSort); break; 
      case "Comment"    :  t.rows.sort(StringSort); break; 
    } 
  } 
  else { 
    switch(t.columns[Column][1]) { 
      case "Date"      :  t.rows.sort(RevNumericSort); break; 
      case "DateTime"  :  t.rows.sort(RevStringSort); break; 
      case "Time"      :  t.rows.sort(RevStringSort); break; 
      case "Number"    :  t.rows.sort(RevNumericSort); break; 
      case "Image"     :  t.rows.sort(RevStringSort); break; 
      case "ButtonLink":  t.rows.sort(RevStringSort); break; 
      case "ButtonLinkWide":  t.rows.sort(RevStringSort); break; 
      case "StringColor":  t.rows.sort(RevStringSort); break; 
      case "ButtonLinkText":  t.rows.sort(RevStringSort); break; 
      case "String"    :  t.rows.sort(RevStringSort); break; 
      case "StringPatient"    :  t.rows.sort(RevStringSort); break; 
      case "Comment"    :  t.rows.sort(RevStringSort); break; 
    } 
  } 
} 
function NumericSort(a,b) { 
  return a[SortOrderBy] - b[SortOrderBy]; 
} 
function StringSort(a,b) { 
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = -1 } 
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  } 
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = 1  } 
  return x ; 
} 
function RevNumericSort(a,b) { 
  return b[SortOrderBy] - a[SortOrderBy]; 
} 
function RevStringSort(a,b) { 
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = 1 } 
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  } 
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = -1  } 
  return x ; 
} 
function _addTableColumn() { 
  this.columns[this.columns.length] = new Array(); 
  var column = this.columns[this.columns.length-1]; 
  for(var i = 0; i < arguments.length; i++)  
     column[column.length] = arguments[i]; 
  if (column[1] != "Image"  && column[5] != "") { 
    var ImageBuffer = new Image(); 
    ImageBuffer.src = "../images/" + column[5]; 
  } 

} 
function _addTableRow() { 
  this.rows[this.rows.length] = new Array(); 
  var row = this.rows[this.rows.length-1]; 
  for(var i = 0; i < arguments.length; i++)  
     row[row.length] = arguments[i].replace(/\s*$/,""); 
} 
function FormatIcon(i,j) { 
//----------------------HPS CODE STARTS HERE-------------------------------- 
  if (ImgString != "" ) { 
  switch(t.columns[j][1]){ 

      case "String" : 
        if(t.rows[i][5]!=""){       
TableString[TableString.length] = "<img src=\"../images/" + ImgString + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">";} 
      break; 
//
      case "StringPatient" : 
        if(t.rows[i][12]!=undefined && t.rows[i][12]==7) {
        break
        }
        if(t.rows[i][5]!=""){       
          if (typeof(t.rows[i][32]) != "undefined"){
            ImgString = ImgString + t.rows[i][32]
          }
TableString[TableString.length] = "<img src=\"../images/" + ImgString + ".gif" + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">";} 
      break; 
//
      case "Comment" : 
        if(t.rows[i][38]!=undefined && t.rows[i][38]!=1) {
          TableString[TableString.length] = "&nbsp;"
          break
        }
           ImgString = ImgString + t.rows[i][38]
TableString[TableString.length] = "<img src=\"../images/" + ImgString + ".gif" + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">";
      break; 
//
      default : 
TableString[TableString.length] = "<img src=\"../images/" + ImgString + "\" class=ListIcon onclick=\"PatientTableLink(" + i + "," +j + ");\">"; 
        }    
 }  
//--------------------------HPS CODE ENDS HERE------------------------------- 
} 
function PatientTableLink(RowNo,ColNo) { 
//-------------------------HPS CODE HERE-------------------------------------  

 FormattedName=t.rows[RowNo][5];
 Urnumber=t.rows[RowNo][6];
 Admissno=t.rows[RowNo][7];
 Casekeys=t.rows[RowNo][28];
 SlotTimeAlloc=t.rows[RowNo][74];
 SlotDateTime=t.rows[RowNo][1];
 Status=t.rows[RowNo][17];
//
 ReferralNo=t.rows[RowNo][45];
 ReferralDep=t.rows[RowNo][46];
 ClaimNo=t.rows[RowNo][47];
 UsingMedClaims=t.rows[RowNo][48];
 AHDepartment=t.rows[RowNo][49];
 CollectingEnc=t.rows[RowNo][50];
 LinkedEnc=t.rows[RowNo][51];
 VisitType = t.rows[RowNo][3];
 ConfirmPMI=t.rows[RowNo][67];
 UsingCheckInPage=t.rows[RowNo][68];
//
   switch (t.columns[ColNo][6]) { 
    case "Slot" : 
        SlotLink(RowNo,ColNo,Casekeys); break;
    case "Patient" : 
      if (Status==0){ 
location.href="../cgi-bin/outweb02.pbl?reportno=03&template=012&urnumber="+Urnumber;} 
      else if(Status==1 || Status==4 || Status==5){ 
        if(isWhitespace(ReferralNo)) {
          location.href="../cgi-bin/outweb02.pbl?reportno=03&template=001" +
                        "&casekeys="+Casekeys;
        } else {
          if(UsingMedClaims == 1 && CollectingEnc!="1") {
            linkUrl="hicweb01.pbl?reportno=3&template=001" +
                    "&urnumber=" + Urnumber.replace(/ /g,"+") +
                    "&admissno=" + Admissno.replace(/ /g,"+") +
                    "&refrnumb=" + ReferralNo.replace(/ /g,"+") +
                    "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                    "&clmnnumb=" + ClaimNo.replace(/ /g,"+");
          } else {
            linkUrl="allweb02.pbl?reportno=2&template=003" +
                    "&urnumber=" + Urnumber.replace(/ /g,"+") +
                    "&admissno=" + ReferralNo.replace(/ /g,"+") +
                    "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                    "&clmnnumb=" + ClaimNo.replace(/ /g,"+");
          }
          Left=(document.body.clientWidth-1000)/2
          DFrameLink(linkUrl,0,Left,1000,750)
        }
      } else if(Status==7){ 
        alert("This slot is unavailable");}  
      break;       
    case "CheckIn" :  
      if(isWhitespace(ReferralNo) && (CollectingEnc=="2" || CollectingEnc=="1")){
        alert("No referral exists for this clinic.");
      }
      if(ConfirmPMI == "1") {
        alert("Function not available\n" +
               "Confirm PMI date less than clinic date.");
        return;
      }
      CheckIn(Urnumber,Admissno,RowNo,Casekeys); StdPageRefresh(); break;

    case "TimeSeen" :  
    case "TimeSeenOnly" :  

      if(ConfirmPMI == "1") {
        alert("Function not available\n" +
               "Confirm PMI date less than clinic date.");
        return;
      }

      //Alerts the user that the patient did not attend the appointment
      //and returns the user to the main screen 
      if (t.rows[RowNo][31]=="DNA") {
        alert("Time Seen Can't be Entered For DNA");
        return;
      }

      //Checks if there is an issue with the referral 
      if(document.getElementById("show_refxwarn") && t.rows[RowNo][17]=="1") {
        if(document.getElementById("show_refxwarn").value=="1") {
          if(t.rows[RowNo][89] == "RefExpired") {

             //Referral has expired
             var exdat=GetFullDateString(t.rows[RowNo][40]);
             alert("Patient: " + convertFormattedName(FormattedName) + 
                   " (" + Urnumber.replace(/^\s+|\s+$/g, '') + ")\n" +
                   "Referral expired on " + exdat);
          }

          if(t.rows[RowNo][89] == "RefExpiring") {

             //Referral is about to expire
             var exdat=GetFullDateString(t.rows[RowNo][40]);
             alert("Patient: " + convertFormattedName(FormattedName) + 
                   " (" + Urnumber.replace(/^\s+|\s+$/g, '') + ")\n" +
                   "Referral will expire on " + exdat);
          }
        }
      }

      if(!isWhitespace(ReferralNo) && (CollectingEnc=="2" || CollectingEnc=="1")
          && CollectContactOpTimeSeen){
        if(isWhitespace(LinkedEnc)) {
            SetCookie("SlotTimeAllocCookie",SlotTimeAlloc);
            SetCookie("SlotDateTimeCookie",SlotDateTime);
            SetCookie("CheckInTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
            SetCookie("TimeSeenOnlyCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);

           //Are there any contacts
           if (document.SelectPeriod.deprtred != undefined) {
             SetCookie("DeprtRedCookie",Admissno.replace(/ /g,"+"));

//             SetCookie("DepartureTimeCookie",Urnumber + "|" +
//                                       Admissno + "|" +
//                                       RowNo + "|" +
//                                       ColNo + "|" +
//                                       Casekeys);
           }

            //No - open Add Contact DFrame 
            linkUrl="allweb03.pbl?reportno=13&template=001" +
                    "&urnumber=" + Urnumber.replace(/ /g,"+") +
                    "&admissno=" + ReferralNo.replace(/ /g,"+") +
                    "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                    "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
                                   Admissno.replace(/ /g,"+") +
                    "&shwupdat=1&visittyp="+VisitType.replace(/ /g,"+");
          Left=(document.body.clientWidth-900)/2
          DFrameLink(linkUrl,0,Left,930,550)
          break;

        } else {

          //Yes - Queries whether to add any more contacts
          if(confirm("Linked contacts exist for this appointment.\n" +
                     "OK to enter additional contacts, Cancel to attend")) {
            SetCookie("SlotTimeAllocCookie",SlotTimeAlloc);
            SetCookie("SlotDateTimeCookie",SlotDateTime);

            if (document.SelectPeriod.deprtred != undefined) {
//              SetCookie("DepartureTimeCookie",Urnumber + "|" +
//                                         Admissno + "|" +
//                                         RowNo + "|" +
//                                         ColNo + "|" +
//                                         Casekeys);
            }

            //Opens DFrame containing list of contacts
            linkUrl="allweb03.pbl?reportno=1&template=009" +
                    "&urnumber=" + Urnumber.replace(/ /g,"+") +
                    "&admissno=" + ReferralNo.replace(/ /g,"+") +
                    "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                    "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
                                   Admissno.replace(/ /g,"+")
            Left=(document.body.clientWidth-900)/2
            DFrameLink(linkUrl,0,Left,930,550)
            break;

          } else {

           if (document.SelectPeriod.deprtred != undefined) {
             SetCookie("DeprtRedCookie",Admissno.replace(/ /g,"+"));

           }

            TimeSeen(Urnumber,Admissno,RowNo,Casekeys); 
            break;
          }
        }
      }

      if(t.columns[ColNo][6]=="TimeSeenOnly") {
        TimeSeenOnly(Urnumber,Admissno,RowNo,Casekeys); 
      } else {
        TimeSeen(Urnumber,Admissno,RowNo,Casekeys); 
      }
      break; 

    case "Departure" : 
     if(ConfirmPMI == "1") {
       alert("Function not available\n" +
              "Confirm PMI date less than clinic date.");
       return;
     }
     if (t.rows[RowNo][31]=="DNA") {
         alert("Departure Time Can't be Entered For DNA");
         break
     }
     if(document.getElementById("show_refxwarn") && t.rows[RowNo][17]=="1") {
       if(document.getElementById("show_refxwarn").value=="1") {
         if(t.rows[RowNo][89] == "RefExpired") {
            var exdat=GetFullDateString(t.rows[RowNo][40]);
            alert("Patient: " + convertFormattedName(FormattedName) + " (" + Urnumber.replace(/^\s+|\s+$/g, '') + ")\n" +
                  "Referral expired on " + exdat);
         }
         if(t.rows[RowNo][89] == "RefExpiring") {
            var exdat=GetFullDateString(t.rows[RowNo][40]);
            alert("Patient: " + convertFormattedName(FormattedName) + " (" + Urnumber.replace(/^\s+|\s+$/g, '') + ")\n" +
                  "Referral will expire on " + exdat);
         }
       }
     }
      if(!isWhitespace(ReferralNo) && (CollectingEnc=="2" || CollectingEnc=="1")){
        if(isWhitespace(LinkedEnc)) {
            SetCookie("CheckInTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
            SetCookie("TimeSeenOnlyCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
            SetCookie("DepartureTimeCookie",Urnumber + "|" +
                                       Admissno + "|" +
                                       RowNo + "|" +
                                       ColNo + "|" +
                                       Casekeys);
            linkUrl="allweb03.pbl?reportno=13&template=001" +
                    "&urnumber=" + Urnumber.replace(/ /g,"+") +
                    "&admissno=" + ReferralNo.replace(/ /g,"+") +
                    "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                    "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
                                   Admissno.replace(/ /g,"+") +
                    "&shwupdat=1";

           if (document.SelectPeriod.deprtred != undefined) {
             SetCookie("DeprtRedCookie",Admissno.replace(/ /g,"+"));
           }


          Left=(document.body.clientWidth-900)/2
          DFrameLink(linkUrl,0,Left,930,550);
          break;
        } else {
          if(confirm("Linked contacts exist for this appointment.\n" +
                     "OK to enter additional contacts, Cancel to abort")) {

            if (document.SelectPeriod.deprtred != undefined) {
              SetCookie("DepartureTimeCookie",Urnumber + "|" +
                                         Admissno + "|" +
                                         RowNo + "|" +
                                         ColNo + "|" +
                                         Casekeys);
            }

            linkUrl="allweb03.pbl?reportno=1&template=009" +
                    "&urnumber=" + Urnumber.replace(/ /g,"+") +
                    "&admissno=" + ReferralNo.replace(/ /g,"+") +
                    "&deptcode=" + ReferralDep.replace(/ /g,"+") +
                    "&bulkenck=" + ReferralNo.replace(/ /g,"+") +
                                   Admissno.replace(/ /g,"+")
            Left=(document.body.clientWidth-900)/2
            DFrameLink(linkUrl,0,Left,930,550)
            break;
          } else {
            break;
          }
        }
      }
      linkurl="outweb02.pbl?reportno=03&template=003&deptflag=1" +
              "&urnumber=" + Urnumber.replace(/ /g,"+") +
              "&admissno="+Admissno.replace(/ /g,"+"); 
      DFrameLink(linkurl,0,20,930,600);
      break; 
     break; 
    case "FollowUp" :
      if(ConfirmPMI == "1") {
        alert("Function not available\n" +
               "Confirm PMI date less than clinic date.");
        return;
      }
linkurl="outweb02.pbl?reportno=03&template=004&urnumber="+Urnumber.replace(/ /g,"+")+"&admissno="+Admissno.replace(/ /g,"+"); 
DFrameLink(linkurl,0,20,930,650);
      break; 

    case "NonAttend" :
     if (t.rows[RowNo][31]=="Attended") {
         alert("Appointment has been Attended");
         break
     }
     linkurl="outweb02.pbl?reportno=03&template=002" +
             "&urnumber=" + Urnumber.replace(/ /g,"+") +
             "&admissno=" + Admissno.replace(/ /g,"+");
     DFrameLink(linkurl,0,20,930,550);
     break;
    case "commlink" :
        linkurl="hicweb01.pbl?reportno=1&template=009" +
               "&admissno="+Admissno.replace(/ /g,"+") +
               "&urnumber="+Urnumber.replace(/ /g,"+");
        DFrameLink(linkurl,0,20,700,200)
      break;

    case "ConfirmPMI" :
         SetClinicList();
         linkUrl="patweb89.pbl?reportno=1&template=002" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno=" + Admissno.replace(/ /g,"+") +
                 "&cpmiskey=" + Casekeys.substr(0,25);
         location.href=linkUrl;;

      break;

     default : alert(t.columns[ColNo][6]);  
  } 
} 
function PatientSelected() {
  ReturnFunction="";
  UpdateStatus.action="outweb02.pbl"
  UpdateStatus.reportno.value="5"
  UpdateStatus.template.value="1"
  UpdateStatus.submit()
}
function SlotPatientSearch() {
  ReturnFunction=PatientSelected
  ReturnExitFunction=AbortPatientSearch
  ReturnAdm=UpdateStatus.dummyadm
  ReturnNam=UpdateStatus.patfname
  ReturnUrn=UpdateStatus.urnumber
  link ='patweb90.pbl?reportno=1&template=200'
  height=document.body.clientHeight
  width=document.body.clientWidth - 50
  DFrameLink(link,0,25,width,height) 
} 
function AbortPatientSearch () {
     Casekeys=UpdateStatus.casekeys.value
     cancelSlot(Casekeys) 
} 
function SlotLink(RowNo,ColNo,Casekeys){
    SlotStat=t.rows[RowNo][17];
    if (SlotStat==1 || SlotStat==4 || SlotStat==5) {
       location.href="outweb02.pbl?reportno=3&template=1" +
                     "&casekeys=" + Casekeys.replace(/ /g,"+")     }  
    else {
       UpdateStatus.casekeys.value=Casekeys
       reserveSlot(Casekeys,"","","",SlotPatientSearch)
 } 
}

//Function to process the Time Seen column
function TimeSeen(Urnumber,Admissno,RowNo,Casekeys) {

  var TextCheckIn = document.getElementsByName('TextCheckIn');
 
  //Is this the only Row
  if (t.rows.length == 1) {

     //Open Attendance Details update template
     val = TextCheckIn.value; 
     linkurl="outweb02.pbl?reportno=03&template=003" +
             "&urnumber=" + Urnumber.replace(/ /g,"+") +
             "&admissno="+Admissno.replace(/ /g,"+"); 
     DFrameLink(linkurl,0,20,930,600);
  }
  else {

     //Open attendance Details update Template
     val = TextCheckIn[RowNo].value;
     linkurl="outweb02.pbl?reportno=03&template=003" +
             "&urnumber=" + Urnumber.replace(/ /g,"+") +
             "&admissno="+Admissno.replace(/ /g,"+"); 
     DFrameLink(linkurl,0,5,930,600);
  }
} 

//Function for Time Seen only column
function TimeSeenOnly(Urnumber,Admissno,RowNo,Casekeys) {
  var TextCheckIn = document.getElementsByName('TextCheckIn');

  //Checks this is the only row.
  if (t.rows.length == 1) {

     //Opens update/enter attendance DFrame
     val = TextCheckIn.value;
     linkurl="outweb02.pbl?reportno=03&template=023" +
             "&urnumber=" + Urnumber.replace(/ /g,"+") +
             "&admissno="+Admissno.replace(/ /g,"+");
     DFrameLink(linkurl,0,20,730,250);
  }
  else {

     //Opens update/enter attendance DFrame
     val = TextCheckIn[RowNo].value;
     linkurl="outweb02.pbl?reportno=03&template=023" +
             "&urnumber=" + Urnumber.replace(/ /g,"+") +
             "&admissno="+Admissno.replace(/ /g,"+");
     DFrameLink(linkurl,0,5,730,250);
  }
}

function CheckIn(Urnumber,Admissno,RowNo,Casekeys) {
  var TextCheckIn = document.getElementsByName('TextCheckIn');

  if(UsingCheckInPage=="1") {
      if(!isWhitespace(t.rows[RowNo][14])) {
        alert("Error: Patient has already been seen");
        return;
      }
      if(t.rows[RowNo][17]=="5") {
        alert("Error: Appointment has been Non-Attended");
        return;
      }
  }

  if(document.getElementById("show_refxwarn") && t.rows[RowNo][17]=="1") {
    if(document.getElementById("show_refxwarn").value=="1") {
      if(t.rows[RowNo][89] == "RefExpired") {
         var exdat=GetFullDateString(t.rows[RowNo][40]);
         alert("Patient: " + convertFormattedName(FormattedName) + " (" + Urnumber.replace(/^\s+|\s+$/g, '') + ")\n" +
               "Referral expired on " + exdat);
      }
      if(t.rows[RowNo][89] == "RefExpiring") {
         var exdat=GetFullDateString(t.rows[RowNo][40]);
         alert("Patient: " + convertFormattedName(FormattedName) + " (" + Urnumber.replace(/^\s+|\s+$/g, '') + ")\n" +
               "Referral will expire on " + exdat);
      }
    }
  } 

  if(t.rows[RowNo][29]=="DNA") {
    alert("Check In Time Can't be Entered For DNA");
  } else if (t.rows.length == 1) {
     if(UsingCheckInPage=="1") {
         linkurl="outweb02.pbl?reportno=03&template=021" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno="+Admissno.replace(/ /g,"+"); 
         DFrameLink(linkurl,0,20,930,500);
     } else {
       val = TextCheckIn.value;
       TextCheckIn.value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
     }
  } else {
     if(UsingCheckInPage=="1") {
         linkurl="outweb02.pbl?reportno=03&template=021" +
                 "&urnumber=" + Urnumber.replace(/ /g,"+") +
                 "&admissno="+Admissno.replace(/ /g,"+"); 
         DFrameLink(linkurl,0,20,930,500);
     } else {
       val = TextCheckIn[RowNo].value;
       TextCheckIn[RowNo].value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
     }
  }
}
function RemoteCheckIn(Urnumber,Admissno,RowNo,ColNo,Casekeys) {
  var TextCheckIn = document.getElementsByName('TextCheckIn');

  if (!isWhitespace(t.rows[RowNo][15])) {
     return;
  }
  if (t.rows[RowNo][29]=="DNA") {
     alert("Check In Time Can't be Entered For DNA");
  }
  else if (t.rows.length == 1) {
     val = TextCheckIn.value;
     TextCheckIn.value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
  }
  else {
     val = TextCheckIn[RowNo].value;
     TextCheckIn[RowNo].value = updateTimeSlot(Urnumber,Admissno,3,val,Casekeys);
  }
}
function RemoteTimeSeen(Urnumber,Admissno,RowNo,ColNo,Casekeys) {
  var TextTimeSeen = document.getElementsByName('TextTimeSeen');

  if (!isWhitespace(t.rows[RowNo][14])) {
     return;
  }
  else if (t.rows[RowNo][29]=="DNA") {
     alert("Check In Time Can't be Entered For DNA");
  }
  else if (t.rows.length == 1) {
     val = TextTimeSeen.value;
     TextTimeSeen.value = updateTimeSlot(Urnumber,Admissno,4,val,Casekeys);
  }
  else {
     val = TextTimeSeen[RowNo].value;
     TextTimeSeen[RowNo].value = updateTimeSlot(Urnumber,Admissno,4,val,Casekeys);
  }
}
function RemoteDeparture(Urnumber,Admissno,RowNo,ColNo,Casekeys) {
  var TextDeparture = document.getElementsByName('TextDeparture');

  if (!isWhitespace(t.rows[RowNo][16])) {
     return;
  }
  else if (t.rows.length == 1) {
     val = TextDeparture.value;
     TextDeparture.value = updateTimeSlot(Urnumber,Admissno,5,val,Casekeys);
  }
  else {
     val = TextDeparture[RowNo].value;
     TextDeparture[RowNo].value = updateTimeSlot(Urnumber,Admissno,5,val,Casekeys);
  }
}
//------------------------------------------------------------------------
//             Function to Update Check-In,Time Seen
//------------------------------------------------------------------------
function updateTimeSlot(Urnumber,Admissno,Updttime,val,caseKeys)
{
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&urnumber="+
  Urnumber+"&admissno="+Admissno+"&updttime="+Updttime+"&updatety=3"+
  "&casekeys="+caseKeys;
  if (VariableNameExists('SetSMRFlag')) {
    if (SetSMRFlag==true) {
      serverURL += "&scannedm=1";
    }
  }
  serverURL=serverURL.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    j=0;
    for (var i=3; i < updateTimeSlot.arguments.length; i++) {
      if (typeof(updateTimeSlot.arguments[i]) != 'function') {
        updateTimeSlot.arguments[i].value = ReturnValue[j];
        j++;
      }
    }
    return ReturnValue[0];
  }
  else {
    return val;
  }
} 
//---------------------------------------------------------------
//                  Function for updating DNA
//----------------------------------------------------------------
function updateDNA(caseKeys)
{
var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&"+
"&casekeys="+caseKeys+"&updatety=4";
serverURL=serverURL.replace(/ /g,"+")
var returnValue = RSExecute(serverURL);
var flag=returnValue.status
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|"); 
    j=0
    for (var i=3; i < updateDNA.arguments.length; i++) {
       if (typeof(updateDNA.arguments[i]) != 'function') {
         j++
         updateDNA.arguments[i].value=ReturnValue[j]
       }
    }
  }
  else {
//        alert("given parameters are not correct")
  }
  return flag;
}
 
function FormatButton(i,j) {
  slotstatus=t.rows[i][17];
  spc=t.rows[i][t.columns[2][2]];

  if (slotstatus==0 || slotstatus==1 || slotstatus==4 || slotstatus==5) { 
    /*
    var background = "background-image: url('../images/paper.png')";

    if (CompatibilityMode) {
      background = "background: url('../images/paper.png')";
    }
    */
    var background = "background-color:transparent";

    if (spc=="") {
      if(t.columns[j][6]=="TimeSeenOnly") {
        TableString[TableString.length] = "<input type=text size=0 name=Text" + 
                                          t.columns[j][6].substr(0,8);
      } else {
        TableString[TableString.length] = "<input type=text size=0 name=Text" + 
                                          t.columns[j][6]
      }
      TableString[TableString.length] = " readonly" +
        " style=\"border:0;visibility:hidden;" + background + ";\" " +
        " value=\" \">";
    }
    else {
      if (t.rows[i][87] == "4") {
        TableString[TableString.length] = 
        "<input type=button name=in class=CheckButtonGreen " +
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";    
      } else if ((t.rows[i][87] == "5")) {
        TableString[TableString.length] = 
        "<input type=button name=in class=CheckButtonRed " +
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">"; 
      } else {
        TableString[TableString.length] = 
        "<input type=button name=in class=CheckButton " +
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      }

      if(t.columns[j][6]=="TimeSeenOnly") { 
        TableString[TableString.length] = "<input type=text size=3 " +
                                      "name=Text" + t.columns[j][6].substr(0,8);
      } else {
        TableString[TableString.length] = "<input type=text size=3 " +
                                      "name=Text" + t.columns[j][6];
      }
      TableString[TableString.length] = " readonly" +
        " style=\"border:0;" + background + ";vertical-align:middle;" +
        "height:15px;width:35px;\" value="+t.rows[i][t.columns[j][2]]+">";
    }
  }                      
} 
function FormatButtonWide(i,j) {
  slotstatus=t.rows[i][17];
  spc=t.rows[i][t.columns[2][2]];

  if (slotstatus==0 || slotstatus==1 || slotstatus==4 || slotstatus==5) {
    /*
    var background = "background-image: url('../images/paper.png')";

    if (CompatibilityMode) {
      background = "background: url('../images/paper.png')";
    }
    */
    var background = "background-color:transparent";

    if (spc=="") {
      TableString[TableString.length] = "<input type=text size=0 name=Text" +
        t.columns[j][6] + " readonly" +
        " style=\"border:0;visibility:hidden;" + background + ";\"" +
        " value=\" \">";
    }
    else {
      if (t.rows[i][87] == "4") {
        TableString[TableString.length] =
        "<input type=button name=in class=CheckButtonGreen "+
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      } else if ((t.rows[i][87] == "5")) {
        TableString[TableString.length] =
        "<input type=button name=in class=CheckButtonRed "+
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      } else {
        TableString[TableString.length] =
        "<input type=button name=in class=CheckButton "+
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      }

      TableString[TableString.length] = "<input type=text size=3 name=Text" +
        t.columns[j][6] + " readonly" +
        " style=\"border:0;" + background + ";height:15px;width:65px;\"" 
//
     if(t.columns[j][11]!=undefined) {                     // Add a class
       if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
         TableString[TableString.length] = " class=" +
                                           t.rows[i][t.columns[j][11]]  ;
       }
     }
//
       TableString[TableString.length] = " value='" + 
                                       t.rows[i][t.columns[j][2]]+"'>";
    }
  }
}
function FormatStringColor(i,j) {
  slotstatus=t.rows[i][17];
  spc=t.rows[i][t.columns[2][2]];

  var background = "background-color:transparent";
  TableString[TableString.length] = "<input type=text name=Text" +
    t.columns[j][6] + " readonly" +
    " style=\"border:0;" + background + ";height:15px;width:65px;\""

  if(t.columns[j][11]!=undefined) {                     // Add a class
    if(!isWhitespace(t.rows[i][t.columns[j][11]])) {
      TableString[TableString.length] = " class=" +
                                        t.rows[i][t.columns[j][11]]  ;
    }
  }

  TableString[TableString.length] = " value='" +
                                    t.rows[i][t.columns[j][2]]+"'>";
}
function FormatButtonText(i,j) {
  slotstatus=t.rows[i][17];
  spc=t.rows[i][t.columns[2][2]];

  if (slotstatus==0 || slotstatus==1 || slotstatus==4 || slotstatus==5) {
    /*
    var background = "background-image: url('../images/paper.png')";

    if (CompatibilityMode) {
      background = "background: url('../images/paper.png')";
    }
    */
    var background = "background-color:transparent";

    if (spc==""){
      TableString[TableString.length] = "<input type=text size=0 name=Text" +
        t.columns[j][6] + " readonly" +
        " style=\"border:0;visibility:hidden;" + background + ";\"" +
        " value=\" \">";
    }
    else {
      if (t.rows[i][87] == "4") {
        TableString[TableString.length] =
        "<input type=button name=in class=CheckButtonGreen " +
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      } else if ((t.rows[i][87] == "5")) {
        TableString[TableString.length] =
        "<input type=button name=in class=CheckButtonRed " +
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      } else {
        TableString[TableString.length] =
        "<input type=button name=in class=CheckButton " +
        " onclick=\"PatientTableLink(" + i + "," + j + ");\">";
      }

      TableString[TableString.length] = "<input type=text size=3 " +
        "name=Text" + t.columns[j][6] + " readonly" +
        " style=\"border:0;" + background + ";height:15px;width:35px;\"" +
        " value='"+t.rows[i][t.columns[j][2]].substr(0,5)+"'>" +
        "<br>" + t.rows[i][t.columns[j][2]].substr(6);
    }
  }
}

//---------------------------HPS CODE ENDS HERE----------------------------- 
function FormatImage(Value,Name) { 
     return("<img border=0 src='../images/" + Value + "' alt='" + Name + "'" +
            " title='" + Name + "'>"); 
} 
function FormatTime(datetime) { 
   time = datetime.substr(8,5); 
   return(time); 
} 
function FormatDateTime(datetime) { 
   yyyy = datetime.substr(0,4); 
   mm = datetime.substr(4,2); 
   dd = datetime.substr(6,2); 
   time = datetime.substr(8,5); 
   mth3=mm; 
   switch(mm) { 
     case "01": mth3="Jan"; break; 
     case "02": mth3="Feb"; break; 
     case "03": mth3="Mar"; break; 
     case "04": mth3="Apr"; break; 
     case "05": mth3="May"; break; 
     case "06": mth3="Jun"; break; 
     case "07": mth3="Jul"; break; 
     case "08": mth3="Aug"; break; 
     case "09": mth3="Sep"; break; 
     case "10": mth3="Oct"; break; 
     case "11": mth3="Nov"; break; 
     case "12": mth3="Dec"; break; 
   } 
   if (yyyy!="    ") { 
     return(dd + " " + mth3 + " " + yyyy + " at " + time); } 
   else { 
     return(""); } 
} 
function FormatDate(date) { 
   yyyy = date.substr(0,4) 
   mm = date.substr(4,2) 
   dd = date.substr(6,2) 
   mth3=mm 
   switch(mm) { 
     case "01": mth3="Jan"; break; 
     case "02": mth3="Feb"; break; 
     case "03": mth3="Mar"; break; 
     case "04": mth3="Apr"; break; 
     case "05": mth3="May"; break; 
     case "06": mth3="Jun"; break; 
     case "07": mth3="Jul"; break; 
     case "08": mth3="Aug"; break; 
     case "09": mth3="Sep"; break; 
     case "10": mth3="Oct"; break; 
     case "11": mth3="Nov"; break; 
     case "12": mth3="Dec"; break; 
   } 
   return(dd + " " + mth3 + " " + yyyy ); 
} 
function TableOutput(OrderColumn,AscDsc) { 
  var sAgentString = window.navigator.userAgent;

  if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
        sAgentString.indexOf("MSIE 7.0") >= 1)
       && sAgentString.indexOf("compatible") >= 1 )
  {
    CompatibilityMode = true;
  }

  lastOrderColumn=OrderColumn; 

  if (t.rows.length != 0 ) { 
   t.sortTable(OrderColumn,AscDsc); 
   TableHeading(OrderColumn); 
   TableBody(); 
   TableEnding(); 
  } 
} 
function TableHeading(OrderColumn) {
  TableString = [];
  TableString[TableString.length]  = "<div id=HeadingDivision style='overflow-x:hidden'>"; 
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" + 
                 " border=" + t.Border + 
                 " cellspacing=" + t.Cellspacing + 
                 " cellpadding=" + t.Cellpadding + 
                 " width=" + t.Width + 
                 " align=" + t.Align + " >"; 
 
  TableString[TableString.length] = "<tr>" +  
             "<td class=HeadingCell align=left width=80>" +                   
             "Selected : " + t.rows.length + "</td>" +                        
             "<td class=HeadingCell align=center>" + 
             document.title + "</td>" + 
             "<td class=HeadingCell align=right width=30>" + 
             "<a href='javascript:SortTablePrint()'>" + 
             "<img src='../images/PrinterIcon.gif' border=0 align=absmiddle"+ 
             " alt='Print Page' title='Print Page'>"+ 
             "</a>" + 
             "</td></tr></table>" 
 
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" + 
                " border=" + t.Border + 
                " cellspacing=" + t.Cellspacing + 
                " cellpadding=" + t.Cellpadding + 
                " width=" + t.Width + 
                " align=" + t.Align + " >"; 

  TableString[TableString.length] = "<tr height=" + t.HeadingHeight + ">"; 

  for (var i = 0; i < t.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell ";

    if (!isWhitespace(t.columns[i][4])) {
      TableString[TableString.length] = " align=" + t.columns[i][4];
    }

    TableString[TableString.length] = " width=" + t.columns[i][7] +
      " style='overflow:hidden;'>";

    if (t.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</td>";
    }
    else {
      TableString[TableString.length] = "<a href='javascript:onClick=TableSort(" + i + ")'>";
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</a></td>";
    }
  } 
  TableString[TableString.length] = "</tr>"; 
  TableString[TableString.length] = "</table>"; 
  TableString[TableString.length] = "</div>"; 
  TableString[TableString.length] = "<div id=BodyDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border + 
                 " cellspacing=" + t.Cellspacing + 
                 " cellpadding=" + t.Cellpadding + 
                 " width=" + t.Width + 
                 " align=" + t.Align + " >"; 
}
function TableBody() {
 for (var i = 0; i < t.rows.length; i++) { 
   RowClass="TableRowEven"
   if (i%2==1) { RowClass="TableRowOdd" }
        if(t.rows[i][39]!=undefined && t.rows[i][39]=="0") {
          RowClass="TableRowExpired"
        }
        if(t.rows[i][39]!=undefined && t.rows[i][39]=="2") {
          RowClass="TableRowWarning"
        }
        if(t.rows[i][39]!=undefined && t.rows[i][39]=="3") {
          RowClass="TableRowNote"
        }
        if(t.rows[i][62]!=undefined && t.rows[i][62]=="1") {
          RowClass="TableRowChartReview"
        }

   TableString[TableString.length] = "<tr ";

   if (t.RowHeight != undefined && parseInt(t.RowHeight) != NaN) {
     TableString[TableString.length] = " height='" + t.RowHeight + "'";
   }

   TableString[TableString.length] = " class='" + RowClass + "'>";

   for (var j = 0; j < t.columns.length; j++) { 
     TableString[TableString.length] = "<td ";

     if (!isWhitespace(t.columns[j][4])) {
       TableString[TableString.length] = " align=" + t.columns[j][4];
     }

     TableString[TableString.length] = " style='overflow:hidden;text-overflow:ellipsis;";

     if (!CompatibilityMode) {
       TableString[TableString.length] = "padding:0px 5px;";
     }

     TableString[TableString.length] = "' width=" + t.columns[j][7] + ">" ; 
     ImgString = t.columns[j][5]; 
     spc=t.rows[i][t.columns[2][2]];  

     switch(t.columns[j][1]) { 
       case "Date" :   
         FormatIcon(i,j); 
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]); 
         break; 
       case "DateTime" :   
         FormatIcon(i,j); 
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]); 
         break; 
       case "Time" :   
         if(t.columns[j][6]=="Slot") { // Slot time column and referral required
           if(t.rows[i][76]==1 ||      // hide appointment icon
              t.rows[i][86]==1) {      // hide appointment icon if MOSIAQ clinic
             TableString[TableString.length] = "<img " +
             "src='../images/BlankIcon.gif' class=ListIcon>";
           } else {
             FormatIcon(i,j); 
           }
         } else {
           FormatIcon(i,j); 
         }
         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]); 
         break; 
       case "ButtonLink":   
         FormatButton(i,j); 
         break; 
       case "ButtonLinkWide":   
         FormatButtonWide(i,j); 
         break; 
       case "StringColor":
         FormatStringColor(i,j);
         break;
       case "ButtonLinkText":   
         FormatButtonText(i,j); 
         break; 
       case "Comment":   
         FormatIcon(i,j); 
         break; 
       case "Image":   
         if (t.columns[j][5] == "") { 
           ImageString=t.rows[i][t.columns[j][2]]; 
         } 
         else if(t.rows[i][5] != ""){       
           alrtnew1=t.rows[i][64].substr(1,1);
           alrtnew2=t.rows[i][64].substr(2,1);
           alrtnew3=t.rows[i][64].substr(3,1);
           alrtnew4=t.rows[i][64].substr(5,1);
           alrtsprt=t.rows[i][24].substr(0,1);
           resulprt=t.rows[i][24].substr(1,1);
           clinnote=t.rows[i][24].substr(2,1);
           clindocm=t.rows[i][24].substr(3,1);
           spareflg=t.rows[i][24].substr(4,1);
           spearrng=t.rows[i][24].substr(5,1);
           intrfild=t.rows[i][24].substr(6,1);
           privaind=t.rows[i][24].substr(7,1);
           transprt=t.rows[i][24].substr(8,1);
           intrname=t.rows[i][29]
           specname=t.rows[i][30]
           opdmessg=t.rows[i][73]
           opdmessg_ur=t.rows[i][6]
           opdmessg_vis=t.rows[i][7]
           disalert=t.rows[i][81]
           currIP=t.rows[i][82].substr(0,1);
           currED=t.rows[i][82].substr(1,1);
           if (alrtnew1==1){
              ImageString="AlertIconM.gif" 
              TableString[TableString.length] = FormatImage(ImageString,"Med Alerts");
           }
           if (alrtnew2==1){
              ImageString="AlertIconB.gif" 
              TableString[TableString.length] = FormatImage(ImageString,"Micro Alerts");
           }
           if (alrtnew3==1){
              ImageString="AlertIconR.gif" 
              TableString[TableString.length] = FormatImage(ImageString,"Risk Alerts");
           }
           if (alrtnew4==1){
              ImageString="AlertIconC.gif" 
              TableString[TableString.length] = FormatImage(ImageString,"Chronic Alerts");
           }
//
           if (alrtsprt==1){
              ImageString="AlertIcon.gif" 
              TableString[TableString.length] = FormatImage(ImageString,"Alerts");
           } else {
              if (alrtsprt==2){
                ImageString="AlertIconBlack.gif" 
                TableString[TableString.length] = FormatImage(ImageString,"Alerts");
             } else {
               if (alrtsprt==3){
                  ImageString="AlertIconDelete.gif" 
                  TableString[TableString.length] = FormatImage(ImageString,"Alerts");
               } else {
                 if (alrtsprt!=" " && alrtsprt!=""){
                    ImageString="AlertIcon" + alrtsprt + ".gif" 
                    TableString[TableString.length] = FormatImage(ImageString,"Alerts");
               }
             }
           }
          }
           if (resulprt==1) {
              ImageString="ResultIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Results");  
           }                               
           if (clinnote==1) {
              ImageString="NotesIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Notes");  
           }                               
           if (clindocm==1) {
              ImageString="DocumentsIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Documents");  
           }                               
           if (spearrng==1) {
              ImageString="ArrangeIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,specname);
           }
           if (intrfild==1) {
              ImageString="InterpretorIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,intrname);
           }
           if (privaind==1) {
              ImageString="PrivacyIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Privacy");
           }
           if (transprt==1){
              ImageString="Transport.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Transport");
           }
           if (opdmessg==1){
              TableString[TableString.length] = "<a href='javascript:" +
                                                "OPDMessageLink(\"" +
                                                 opdmessg_ur + "\",\"" +
                                                 opdmessg_vis +
                                                 "\");'>" 
              ImageString="Phone.png"
              TableString[TableString.length] = FormatImage(ImageString,"OPD Message");
              TableString[TableString.length] = "</a>"
           }
           if (disalert==1){
              ImageString="AlertIconDIS.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Disability Alerts");
           }
           if(currIP=="1" || currIP=="2") { 
              ImageString="CurrentIP" + currIP + ".png"
              TableString[TableString.length] = FormatImage(ImageString,"Current Inpatient");
           }
           if(currED=="1" || currED=="2") { 
              ImageString="CurrentED" + currED + ".png"
              TableString[TableString.length] = FormatImage(ImageString,"Current Emergency");
           }
         } 
         TableString[TableString.length] = "&nbsp;"
         break; 

       default    :    
         FormatIcon(i,j); 
         TableString[TableString.length] = t.rows[i][t.columns[j][2]]; 
         break; 
     } 
     if (isWhitespace(t.rows[i][t.columns[j][2]])) { 
       TableString[TableString.length] = "&nbsp;" } 
     TableString[TableString.length] = "</td>" ; 
     } 
   TableString[TableString.length] = "</tr>" ; 
   } 
}
function TableEnding() {
  // these are defined in the html
  var TableLocation = document.getElementById('TableLocation');

  TableString[TableString.length] = "</table></div>"; 
 
  if (TableString.join)
    TableLocation.innerHTML = TableString.join("");
  else 
  {
    var TableStringX="";
    for (var i=0; i < TableString.length; i++) TableStringX+=TableString[i];
    TableLocation.innerHTML = TableStringX;
  }

  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  if (!scrollTableBody) {
     HeadingDivision.style.overflow="auto";
     BodyDivision.style.overflow="visible";
     BodyDivision.style.height="";
     return;
  }

  _setListHeight();

  _setVerticalScrollbar();
}
function _setListHeight() {
  var TableLocation = document.getElementById('TableLocation');
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision = document.getElementById('BodyDivision');

  var height = document.body.clientHeight;

  var listHeight = height - TableLocation.offsetTop - HeadingDivision.offsetHeight;

  // Set the height of the table rows section (<div id=BodyDivision>)
  if (window.navigator.userAgent.indexOf("MSIE") != -1) {  // IE11 Compat. Mode
    listHeight -= 1;
  }
  else {  // Other browsers; e.g. Firefox, Chrome, Edge, etc.
    listHeight -= 25;
  }

  if (listHeight > 0) {
    BodyDivision.style.height = listHeight + "px";
  }
}
function _setVerticalScrollbar() {
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  // Show the vertical scrollbar accordingly

  if (BodyDivision.scrollHeight >  BodyDivision.clientHeight) {
    // List overflows (i.e. vertical scrollbar visible)
    HeadingDivision.style.overflowY = 'scroll';  // force vertical scrollbar
                                                 // on list heading section
  }
  else {
    // List does NOT overflow (i.e. no vertical scrollbar in BodyDivision)
    if (window.navigator.userAgent.indexOf("MSIE 7.0") >= 1) {
      // Since IE 8 will always show the vertical scrollbar for the BodyDivision
      // (even when scrolling is not needed) we need to also show the
      // vertical scrollbar for HeadingDivision so columns line up.
      HeadingDivision.style.overflowY = 'scroll';
    }
    else {
      HeadingDivision.style.overflowY = 'hidden';
    }
  }
}

function TableSort(OrderColumn) { 
 if ( lastOrderColumn == OrderColumn ) {  
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} } 
 else {  
   AscDsc=1; } 
 TableOutput(OrderColumn,AscDsc); 
} 
//------------------------------------------------------------
// Print Table from Window
//------------------------------------------------------------
function SortTablePrint() {
  var HeadingDivision = document.getElementById('HeadingDivision');
  var BodyDivision    = document.getElementById('BodyDivision');

  if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
      || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
    // Printing on Internet Explorer version 6 and above
    // And check if running IE11 Compatibility View
    // And check if running IE10 Compatibility View
    // And check if running IE9 Compatibility View
    // And check if running IE8 Compatibility View
    // And check if running IE7 documement mode
    if (window.navigator.userAgent.indexOf("Trident/7.0")>=1
      || window.navigator.userAgent.indexOf("Trident/6.0")>=1
      || window.navigator.userAgent.indexOf("Trident/5.0")>=1
      || window.navigator.userAgent.indexOf("Trident/4.0")>=1
      || (window.navigator.userAgent.indexOf("MSIE 7.0")>=1 &&
          window.navigator.userAgent.indexOf("Trident")==-1)) {
      SaveHeight=BodyDivision.style.height;
      BodyDivision.style.height="auto";
      HeadingDivision.style.overflowY="hidden";
      print();
      BodyDivision.style.height=SaveHeight;
      HeadingDivision.style.overflowY="scroll";
    } else {
      HeadingSection.style.position="relative";
      HeadingDivision.style.overflow="hidden";
      BodyDivision.style.overflow="hidden";
      BodyDivision.style.height="auto";
      print();
      HeadingSection.style.position="absolute";
    }
  }
  else {
    SaveHeight=BodyDivision.style.height;
    BodyDivision.style.height="auto";
    HeadingDivision.style.overflow="hidden";
    print();
    BodyDivision.style.height=SaveHeight;
  }
}
//------------------------------------------------------------
// DFrame Link
//-------------------------------------------------------------
function DFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight) 
{
  var PopUpFrameDoc = DFrameStart();
  var PopUpScreen   = document.getElementById('PopUpScreen');
  var top = FrameTop + document.body.scrollTop;

  PopUpFrameDoc.location.href = LinkToUrl;

  var MaxWidth  = parent.document.width-FrameLeft;
  var MaxHeight = parent.document.height-FrameTop;
  var w =  (FrameWidth>MaxWidth)   ? MaxWidth  : FrameWidth;
  var h =  (FrameHeight>MaxHeight) ? MaxHeight : FrameHeight;

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = FrameLeft + 'px';
  PopUpScreen.style.width   = w   + 'px';
  PopUpScreen.style.height  = h   + 'px';
  PopUpScreen.style.display = "";
}
//========================================================================
// Functions for adding CMBS items
//========================================================================
function TypeDesc1() {
  var p=document.UpdateForm;
  if (p.otbit001.value==" 0") {
    p.otbit001.value="MBS";
  } else {
    p.otbit001.value="AMA";
  }

  if (p.otbit002 != undefined && p.mbsdesc1 != undefined &&
      p.otbit001 != undefined && p.otbit003 != undefined &&
      p.dateclin != undefined && p.mbsamnt1 != undefined) {
    validatePMBS(p.otbit002,p.mbsdesc1,p.otbit001,
                 p.otbit003,p.dateclin,p.mbsamnt1);
  }
}
function TypeDesc2() {
  var p=document.UpdateForm;
  if (p.otbit004.value==" 0") {
    p.otbit004.value="MBS";
  } else {
    p.otbit004.value="AMA";
  }

  if (p.otbit005 != undefined && p.mbsdesc2 != undefined &&
      p.otbit004 != undefined && p.otbit006 != undefined &&
      p.dateclin != undefined && p.mbsamnt2 != undefined) {
    validatePMBS(p.otbit005,p.mbsdesc2,p.otbit004,
                 p.otbit006,p.dateclin,p.mbsamnt2);
  }
}
function TypeDesc3() {
  var p=document.UpdateForm;
  if (p.otbit007.value==" 0") {
    p.otbit007.value="MBS";
  } else {
    p.otbit007.value="AMA";
  }

  if (p.otbit008 != undefined && p.mbsdesc3 != undefined &&
      p.otbit007 != undefined && p.otbit009 != undefined &&
      p.dateclin != undefined && p.mbsamnt3 != undefined) {
    validatePMBS(p.otbit008,p.mbsdesc3,p.otbit007,
                 p.otbit009,p.dateclin,p.mbsamnt3);
  }
}
function TypeDesc4() {
  var p=document.UpdateForm;
  if (p.otbit010.value==" 0") {
    p.otbit010.value="MBS";
  } else {
    p.otbit010.value="AMA";
  }

  if (p.otbit011 != undefined && p.mbsdesc4 != undefined &&
      p.otbit010 != undefined && p.otbit012 != undefined &&
      p.dateclin != undefined && p.mbsamnt4 != undefined) {
    validatePMBS(p.otbit011,p.mbsdesc4,p.otbit010,
                 p.otbit012,p.dateclin,p.mbsamnt4);
  }
}
function TypeDesc5() {
  var p=document.UpdateForm;
  if (p.otbit013.value==" 0") {
    p.otbit013.value="MBS";
  } else {
    p.otbit013.value="AMA";
  }

  if (p.otbit014 != undefined && p.mbsdesc5 != undefined &&
      p.otbit013 != undefined && p.otbit015 != undefined &&
      p.dateclin != undefined && p.mbsamnt5 != undefined) {
    validatePMBS(p.otbit014,p.mbsdesc5,p.otbit013,
                 p.otbit015,p.dateclin,p.mbsamnt5);
  }
}
function DisplayXCmbs() {
  pf = document.UpdateForm;

  if (pf.obacompd != undefined) {
    ind1 = pf.obacompd.value.substring(3,4);
    if (pf.ptcnuebb.value == "1" &&
        pf.clinindc.value == "P" &&
        pf.otmaumci.value == "1" &&
        ind1 == "P") {
      ShowXCmbs.innerHTML = extracmbs.innerHTML;
      if (pf.bulkbill != undefined) {
        pf.bulkbill.value = '1' 
      }  
    } else {
      if (pf.clinindc.value == "P" &&
          pf.ibcnumci.value == "1" &&
          pf.otmaumci.value == "1") {
        ShowXCmbs.innerHTML = extracmbs.innerHTML;
      }
      else {
        ShowXCmbs.innerHTML = "";
      }
    }
  }
  else {
    if (pf.clinindc.value == "P" &&
        pf.ibcnumci.value == "1" &&
        pf.otmaumci.value == "1") {
      ShowXCmbs.innerHTML = extracmbs.innerHTML;
    }
    else {
      ShowXCmbs.innerHTML = "";
    }
  }
}
function DisplayXCmbsAttend() {
  pf = document.UpdateForm;

  var ind12 = pf.obacompd.value.substr(28,1);     //  Indicator 12
  if (pf.cbms_public != undefined) {              //  only for bhs
    if (ind12 != "P") {
       ShowXCmbs.innerHTML = extracmbsLabel.innerHTML;
       ShowXCmbs.innerHTML = extracmbs.innerHTML;
       return;
   }
  }

  if (pf.obacompd != undefined) {
    ind1 = pf.obacompd.value.substring(3,4);
    if (pf.ptcnuebb.value == "1" &&
        pf.clinindc.value == "P" &&
        pf.otmaumci.value == "1" &&
        ind1 == "P") {
      ShowXCmbs.innerHTML = extracmbs.innerHTML;
      if (pf.bulkbill != undefined) {
        pf.bulkbill.value = '1' 
      }  
    }
    else {
      DisplayXCmbsAttend1();
    }
  }
  else {
    DisplayXCmbsAttend1();
  }

  if (pf.ptcnuebb == undefined) {
    if (pf.outbb031 != undefined) {
      pf.outbb031.className = "";
    } 
  } else {
    if (pf.ptcnuebb.value != "1" &&
        pf.outbb031 != undefined) {
      pf.outbb031.className = ""; 
    }
  }

}
function DisplayXCmbsAttend1() {
  pf = document.UpdateForm;
  var ind12 = pf.obacompd.value.substr(28,1);     //  Indicator 12
  if (pf.clinindc.value == "P" &&
      pf.ibcnumci.value == "1" &&     
      pf.otmaumci.value == "1" &&
        ind12 != "P") {
    ShowXCmbs.innerHTML = extracmbs.innerHTML;
  }
  else {
    ShowXCmbs.innerHTML=seenbydoctor.innerHTML;
    if(pf.othekdoc.value=="Y") {
       pf.outbb031.className="Mandatory";
      if(isWhitespace(pf.outbb031.value)) {
        if(pf.s_othedefd.value=="1") {
          alert("Seen By default doctor code on clinic master is invalid. \n"+
                "Clinic Master must be updated.");
          return;
        }
        pf.outbb031.value=pf.c_othedefd.value;
        pf.name_outbb031.value=pf.n_othedefd.value;
      }
    }
  }
}
function TemplateCmbs() {
  if (document.UpdateForm.cmbsload.checked==true) {
    OutputCMBSTemp(UpdateForm.cmbstemp,UpdateForm.dateclin);
  }
}
function CheckBatch() {
  pf = document.UpdateForm;

  if (pf.obacompd != undefined) {
    ind1 = pf.obacompd.value.substring(3,4);
    if (pf.ptcnuebb.value == "1" &&
        pf.clinindc.value == "P" &&
        pf.otmaumci.value == "1" &&
        ind1 == "P") {
      ShowXCmbs.innerHTML = extracmbs.innerHTML;
    }
    else {
      CheckBatch1();
    }
  }
  else {
    CheckBatch1();
  }

  if (pf.btchflag != undefined) {
    if (pf.btchflag.value != "1") {
      if (pf.ptcnuebb == undefined) {
        if (pf.outbb031 != undefined) {
          pf.outbb031.className = "";
        }
      } else {
        if (pf.ptcnuebb.value != "1" &&
            pf.outbb031 != undefined) {
          pf.outbb031.className = "";
        }
      }
    }
  }

}
function CheckBatch1() {
  pf = document.UpdateForm;
  var ind12 = pf.obacompd.value.substr(28,1);     //  Indicator 12
  if (pf.clinindc.value == "P" &&
      pf.ibcnumci.value == "1" &&
      pf.otmaumci.value == "1" &&
      ind12 != "P") {
    ShowXCmbs.innerHTML = extracmbs.innerHTML;
  }
  else {
  // if batched then Actual doctor seen is readonly
    if (pf.btchflag.value == "1") {
      pf.outbb031.readOnly = true;
      pf.outbb031.className = "Readonly";
    }
  }
}
//------------------------------------------------------------------
//  Validate an MBS item from the private practice item file
//------------------------------------------------------------------
function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod,ReturnEfdt,ReturnAmnt) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnAmnt.value="";
  for (var i=6; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) {
    if(!isWhitespace(ReturnScod.value)) {
      alert(ReturnCode.title + " is Mandatory for " + ReturnScod.title);
      ReturnScod.value="";
      ReturnScod.focus();
    }
   return;
  }
  if (isWhitespace(ReturnType.value)) return;;
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=14" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnAmnt.value=(ReturnValue[1])
    j=0
    for (var i=6; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnScod.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//------------------------------------------------------------------
//  Output common CMBS item template (from private practice)
//------------------------------------------------------------------
function OutputCMBSTemp(ReturnCode,ReturnEfdt) {
  ReturnFunction="" ;
  for (var i=2; i < OutputCMBSTemp.arguments.length; i++) {
    if (typeof(OutputCMBSTemp.arguments[i]) == 'function') {
      ReturnFunction=OutputCMBSTemp.arguments[i] }
    else {
      OutputCMBSTemp.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL ="../cgi-bin/priweb05.pbl?reportno=8" +
                    "&valdtype=5" +
                    "&cmbstemp=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnEfdt.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    UpdateForm.otbit001.value=ReturnValue[0];
    UpdateForm.otbit002.value=ReturnValue[1];
    UpdateForm.otbit003.value=ReturnValue[2];
    UpdateForm.mbsdesc1.value=ReturnValue[3];
    UpdateForm.mbsamnt1.value=ReturnValue[4];
    UpdateForm.otbit004.value=ReturnValue[5];
    UpdateForm.otbit005.value=ReturnValue[6];
    UpdateForm.otbit006.value=ReturnValue[7];
    UpdateForm.mbsdesc2.value=ReturnValue[8];
    UpdateForm.mbsamnt2.value=ReturnValue[9];
    UpdateForm.otbit007.value=ReturnValue[10];
    UpdateForm.otbit008.value=ReturnValue[11];
    UpdateForm.otbit009.value=ReturnValue[12];
    UpdateForm.mbsdesc3.value=ReturnValue[13];
    UpdateForm.mbsamnt3.value=ReturnValue[14];
    UpdateForm.otbit010.value=ReturnValue[15];
    UpdateForm.otbit011.value=ReturnValue[16];
    UpdateForm.otbit012.value=ReturnValue[17];
    UpdateForm.mbsdesc4.value=ReturnValue[18];
    UpdateForm.mbsamnt4.value=ReturnValue[19];
    UpdateForm.otbit013.value=ReturnValue[20];
    UpdateForm.otbit014.value=ReturnValue[21];
    UpdateForm.otbit015.value=ReturnValue[22];
    UpdateForm.mbsdesc5.value=ReturnValue[23];
    UpdateForm.mbsamnt5.value=ReturnValue[24];
    j=0
    for (var i=2; i < OutputCMBSTemp.arguments.length; i++) {
       if (typeof(OutputCMBSTemp.arguments[i]) != 'function') {
         j++
         OutputCMBSTemp.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false }
}
//
function validateSDoc(MediPrac,ReturnCode,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    return;
  }

  if (isWhitespace(MediPrac.value)) {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;;  }

  for (var i=3; i < validateSDoc.arguments.length; i++) {
    if (typeof(validateSDoc.arguments[i]) == 'function') {
      ReturnFunction=validateSDoc.arguments[i] }
    else {
      validateSDoc.arguments[i].value=""; }  }

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=63" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mediprac=" + MediPrac.value

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=ReturnValue[0];
    if (ReturnValue[1]==1)  {
       alert("Doctor is Inactive.");
       ReturnCode.select();
       ReturnCode.focus();
       return false; }
    }
  else {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
//
function MPDoctorSearch(MediPrac,ReturnCode,ReturnName) {
  var PopUpFrameDoc = DFrameStart();
  if (isWhitespace(MediPrac.value)) 
  {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;
  }

  window.MediPrac=MediPrac;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href="../cgi-bin/" +
                              "priweb01.pbl?reportno=2&template=7&pridc001="+
                               MediPrac.value + "&norecord=20";
  SearchFrameShow();
}
function DisplayCarer() {
  if (document.UpdateForm.otheccar.value=="1"){
    ShowCarer.innerHTML=sendcarer.innerHTML;
    if(document.UpdateForm.outbb065.value=="1") {
      document.UpdateForm.d_outbb065.checked=true;
    }
  } else {
    ShowCarer.innerHTML="";
  }
}
function SetCare() {
  if(document.UpdateForm.d_outbb065.checked==true) {
    document.UpdateForm.outbb065.value="1";
  } else {
    document.UpdateForm.outbb065.value="0";
  }
}
function DisplayIntrp() {
  if (document.UpdateForm.intrpreq.value=="1") {
    ShowIntrp.innerHTML=dispintrp.innerHTML;
  } else {
    ShowIntrp.innerHTML="";
  }
}

//-----------------------------------------------------------------------------
// table with dynamic rows
//
//-----------------------------------------------------------------------------
function TableOutputDynamicRow(OrderColumn,AscDsc,rowColumn) {
  var sAgentString = window.navigator.userAgent;

  if ( (sAgentString.indexOf("MSIE 6.0") >= 1 ||
        sAgentString.indexOf("MSIE 7.0") >= 1)
       && sAgentString.indexOf("compatible") >= 1 )
  {
    CompatibilityMode = true;
  }

  lastOrderColumn=OrderColumn;

  if (t.rows.length != 0 ) {
    t.sortTable(OrderColumn,AscDsc);
    TableHeadingDynamicRow(OrderColumn,rowColumn);
    TableBodyDynamicRow(rowColumn);
    if (t.tableTotals.length != 0 ) {
      TableTotals();
    }
    TableEnding();
  }
  else {
    TableHeadingDynamicRow(OrderColumn,rowColumn);
    TableEnding();
  }
}
function TableHeadingDynamicRow(OrderColumn,rowColumn) {
  TableString = [];
  TableString[TableString.length]  = "<div id=HeadingDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                 " border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";

  TableString[TableString.length] = "<tr>" +
             "<td class=HeadingCell align=left width=80>" +
             "Selected : " + t.rows.length + "</td>" +
             "<td class=HeadingCell align=center>" +
             document.title + "</td>" +
             "<td class=HeadingCell align=right width=30>" +
             "<a href='javascript:SortTablePrint()'>" +
             "<img src='../images/PrinterIcon.gif' border=0 align=absmiddle"+
             " alt='Print Page' title='Print Page'>"+
             "</a>" +
             "</td></tr></table>"

  TableString[TableString.length] = "<table style=\"table-layout:fixed\"" +
                " border=" + t.Border +
                " cellspacing=" + t.Cellspacing +
                " cellpadding=" + t.Cellpadding +
                " width=" + t.Width +
                " align=" + t.Align + " >";

  TableString[TableString.length] = "<tr height=" + t.HeadingHeight + ">";

  for (var i = 0; i < t.columns.length; i++) {
    TableString[TableString.length] = "<td class=HeadingCell ";

    if (!isWhitespace(t.columns[i][4])) {
      TableString[TableString.length] = " align='" + t.columns[i][4] +  "'";
    }

    TableString[TableString.length] = " width=" + t.columns[i][7] + "" +
      " style='overflow:hidden;'>";

    if (t.columns[i][3] == -1) {
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</td>";
    }
    else {
      TableString[TableString.length] = "<a href='javascript:onClick=TableSortDynamic(" + i + ","+rowColumn+")'>";
      if (OrderColumn == i) { TableString[TableString.length] = "<b>" }
      TableString[TableString.length] = t.columns[i][0] + "</a></td>";
    }
  }

  TableString[TableString.length] = "</tr>";
  TableString[TableString.length] = "</table>";
  TableString[TableString.length] = "</div>";
  TableString[TableString.length] = "<div id=BodyDivision style='overflow-x:hidden'>";
  TableString[TableString.length] = "<table style=\"table-layout:fixed\" border=" + t.Border +
                 " cellspacing=" + t.Cellspacing +
                 " cellpadding=" + t.Cellpadding +
                 " width=" + t.Width +
                 " align=" + t.Align + " >";

}
function TableBodyDynamicRow(height) {
 for (var i = 0; i < t.rows.length; i++) {

   var tmpInteger = parseInt(t.rows[i][height],10);

   var rowHeight = 0;

   if (t.RowHeight != undefined && parseInt(t.RowHeight) != NaN) {
     rowHeight = parseInt(t.RowHeight);

     if (tmpInteger != undefined) {
       if (tmpInteger > 2)
        rowHeight = ((tmpInteger) * 4.5 + t.RowHeight);
     }
   }

   RowClass="TableRowEven";
   if (i%2 == 1) { RowClass="TableRowOdd" }

   if(t.rows[i][39]!=undefined && t.rows[i][39]=="0") {
      RowClass="TableRowExpired"
    }
    if(t.rows[i][39]!=undefined && t.rows[i][39]=="2") {
      RowClass="TableRowWarning"
    }
    if(t.rows[i][39]!=undefined && t.rows[i][39]=="3") {
      RowClass="TableRowNote"
    }
    if(t.rows[i][62]!=undefined && t.rows[i][62]=="1") {
      RowClass="TableRowChartReview"
    }

    TableString[TableString.length] = "<tr ";

    if (rowHeight != 0) {
      TableString[TableString.length] = " height='" + rowHeight + "'";
    }
    
    TableString[TableString.length] = " class='" + RowClass + "'>" ;

   for (var j = 0; j < t.columns.length; j++) {
     TableString[TableString.length] = "<td ";

     if (!isWhitespace(t.columns[j][4])) {
       TableString[TableString.length] = " align='" + t.columns[j][4] + "'";
     }

     TableString[TableString.length] = " style='overflow:hidden;text-overflow:ellipsis;";

     if (!CompatibilityMode) {
       TableString[TableString.length] = "padding:0px 5px;";
     }

     TableString[TableString.length] = "' width=" + t.columns[j][7] + ">" ;
     ImgString = t.columns[j][5];
     spc=t.rows[i][t.columns[2][2]];

     switch(t.columns[j][1]) {
       case "Date" :
         FormatIcon(i,j);
         TableString[TableString.length] = FormatDate(t.rows[i][t.columns[j][2]]);
         break;
       case "DateTime" :
         FormatIcon(i,j);
         TableString[TableString.length] = FormatDateTime(t.rows[i][t.columns[j][2]]);
         break;
       case "Time" :
//       FormatIcon(i,j);

         if(t.columns[j][6]=="Slot") { // Slot time column and referral required
           if(t.rows[i][76]==1) {      // hide appointment icon
             TableString[TableString.length] = "<img " +
             "src='../images/BlankIcon.gif' class=ListIcon>";
           } else {
             FormatIcon(i,j);
           }
         } else {
           FormatIcon(i,j);
         }


         TableString[TableString.length] = FormatTime(t.rows[i][t.columns[j][2]]);
         break;
       case "ButtonLink":
         FormatButton(i,j);
         break;
       case "ButtonLinkWide":
         FormatButtonWide(i,j);
         break;
       case "StringColor":
         FormatStringColor(i,j);
         break;
       case "ButtonLinkText":
         FormatButtonText(i,j);
         break;
       case "Comment":
         FormatIcon(i,j);
         break;
       case "Image":
         if (t.columns[j][5] == "") {
           ImageString=t.rows[i][t.columns[j][2]];
         }
         else if(t.rows[i][5] != ""){
           alrtnew1=t.rows[i][64].substr(1,1);
           alrtnew2=t.rows[i][64].substr(2,1);
           alrtnew3=t.rows[i][64].substr(3,1);
           alrtnew4=t.rows[i][64].substr(5,1);
           alrtsprt=t.rows[i][24].substr(0,1);
           resulprt=t.rows[i][24].substr(1,1);
           clinnote=t.rows[i][24].substr(2,1);
           clindocm=t.rows[i][24].substr(3,1);
           spareflg=t.rows[i][24].substr(4,1);
           spearrng=t.rows[i][24].substr(5,1);
           intrfild=t.rows[i][24].substr(6,1);
           privaind=t.rows[i][24].substr(7,1);
           transprt=t.rows[i][24].substr(8,1);
           intrname=t.rows[i][29]
           specname=t.rows[i][30]
           disalert=t.rows[i][81]
           if (alrtnew1==1){
              ImageString="AlertIconM.gif" 
              TableString[TableString.length] = FormatImage(ImageString,"Med Alerts");
           }
           if (alrtnew2==1){
              ImageString="AlertIconB.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Micro Alerts");
           }
           if (alrtnew3==1){
              ImageString="AlertIconR.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Risk Alerts");
           }
           if (alrtnew4==1){
              ImageString="AlertIconC.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Chronic Alerts");
           }
//
           if (alrtsprt==1){
              ImageString="AlertIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Alerts");
           } else {
              if (alrtsprt==2){
                ImageString="AlertIconBlack.gif"
                TableString[TableString.length] = FormatImage(ImageString,"Alerts");
             } else {
               if (alrtsprt==3){
                  ImageString="AlertIconDelete.gif"
                  TableString[TableString.length] = FormatImage(ImageString,"Alerts");
               } else {
                 if (alrtsprt!=" " && alrtsprt!=""){
                    ImageString="AlertIcon" + alrtsprt + ".gif"
                    TableString[TableString.length] = FormatImage(ImageString,"Alerts");
               }
             }
           }
          }
          if (resulprt==1) {
              ImageString="ResultIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Results");
           }
           if (clinnote==1) {
              ImageString="NotesIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Notes");
           }
           if (clindocm==1) {
              ImageString="DocumentsIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Documents");
           }
           if (spearrng==1) {
              ImageString="ArrangeIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,specname);
           }
           if (intrfild==1) {
              ImageString="InterpretorIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,intrname);
           }
           if (privaind==1) {
              ImageString="PrivacyIcon.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Privacy");
           }
           if (transprt==1){
              ImageString="Transport.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Transport");
           }
           if (disalert==1){
              ImageString="AlertIconDIS.gif"
              TableString[TableString.length] = FormatImage(ImageString,"Disability Alerts");
           }
//
         }
         TableString[TableString.length] = "&nbsp;"
         break;

       default    :
         FormatIcon(i,j);
         TableString[TableString.length] = t.rows[i][t.columns[j][2]];
         break;
     }
     if (isWhitespace(t.rows[i][t.columns[j][2]])) {
       TableString[TableString.length] = "&nbsp;" }
     TableString[TableString.length] = "</td>" ;
     }
   TableString[TableString.length] = "</tr>" ;
   }
}

function TableSortDynamic(OrderColumn,columnRow) {
  if ( lastOrderColumn == OrderColumn ) {
    if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} 
  }
  else {
    AscDsc=1;
  }
  TableOutputDynamicRow(OrderColumn,AscDsc,columnRow);
}
//
function SendLetter(theForm) {
if(theForm.outbb067 != undefined) {
  if(theForm.outbb047.value.substr(10,1) == "C") { // Ind 8 - Chart Only
    theForm.outbb067.selectedIndex=3;              // set send letter to N/A
    theForm.outbb067.className="Readonly";
    theForm.outbb067.disabled=true;
    theForm.outbb036.checked=false;
    theForm.outbb036.disabled=true;
  } else {
    if(theForm.outbb067.disabled==true) {         // Defalut send letter to 
       theForm.outbb067.selectedIndex=0;          // Blank when re enabled
    }
    theForm.outbb067.className="";
    theForm.outbb067.disabled=false;
    theForm.outbb067.className="";
    theForm.outbb036.disabled=false;
  }
  if(SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.currdate.value)) {
    theForm.outbb067.className="Readonly";       // CAR 271432
    theForm.outbb067.disabled=true;
  }
  SendLetterDate(theForm);
}
}
//
function SendLetterDate(theForm) {
  if(SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.currdate.value)) {
    theForm.outbb066.className="Readonly";       // CAR 271432
    theForm.outbb066.disabled=true;
    return;
  }
  if(theForm.outbb067.value=="1") {                // Yes Send Letter
    theForm.outbb066.className="Mandatory FutureDate";
    theForm.outbb066.readOnly=false;
    if(isWhitespace(theForm.outbb066.value)) {     // Calculate Letter Date
      CalculateLetterDate(theForm)
    }
  } else {
    theForm.outbb066.className="Readonly Date";
    theForm.outbb066.value="";
    theForm.outbb066.readOnly=true;
  }
}
//
function CheckLetterDate(theForm) {
if(theForm.outbb067.value=="1") {                // Yes Send Letter
  if(SetDateYYYYMMDD(theForm.clindate.value.substr(4,11)) <
     SetDateYYYYMMDD(theForm.outbb066.value)) {
         alert("Date cannot be greater than appointment date.")
         theForm.outbb066.select()
         theForm.outbb066.value="";
         return false }
  }
}
//
function EnableLetterFields(theForm) {
  theForm.outbb036.disabled=false;
  theForm.outbb067.disabled=false;
}
//
function CalculateLetterDate(theForm) {
  theForm.outbb066.value=theForm.dateclin.value;
  if(isWhitespace(theForm.clindate.value.substr(4,11))) {
    return;
  }
  AddSubtractDate(theForm.outbb066,theForm.othendps.value,"S");
  if(SetDateYYYYMMDD(theForm.outbb066.value) <=
     SetDateYYYYMMDD(theForm.currdate.value)) {
     theForm.outbb066.value=theForm.currdate.value;
//   AddSubtractDate(theForm.outbb066,"1","A");
  }
}
//
function showFundingSource(theForm) {
    i=theForm.outbb002.selectedIndex;
    ind=theForm.outbb002.options[i].value.substring(3,4)
    if (ind=="A") {
      FundingHeading.innerHTML=offdutyhd.innerHTML;
      FundingId.innerHTML=offdutyid.innerHTML;
    } else {
      if (ind=="P") {
        FundingHeading.innerHTML=fundinghd.innerHTML;
        FundingId.innerHTML=fundingid.innerHTML;
        theForm.pmsvx141.className="Mandatory";
      } else {
        FundingHeading.innerHTML=blanklabel.innerHTML;
        FundingId.innerHTML=blanklabel.innerHTML;
      }
    }
}
function OPDMessageLink(ur,vis) {
   linkurl="outweb09.pbl?reportno=02&template=001" +
           "&urnumber=" + ur.replace(/ /g,"+") +
           "&admissno=" + vis.replace(/ /g,"+");
   Left=(document.body.clientWidth-800)/2
   DFrameLink(linkurl,50,Left,800,550)
}
function SetClinicList() {
  document.cookie = "OutpatientClinicList" + "=" + escape(location.href) + ";"
}
function validateLinkedSDoc(MediPrac,ReturnCode,ReturnDesc) {
  if (isWhitespace(ReturnCode.value)) {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    return;
  }

  if (isWhitespace(MediPrac.value)) {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;;  }

  for (var i=3; i < validateLinkedSDoc.arguments.length; i++) {
    if (typeof(validateLinkedSDoc.arguments[i]) == 'function') {
      ReturnFunction=validateLinkedSDoc.arguments[i] }
    else {
      validateLinkedSDoc.arguments[i].value=""; }  }

  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=96" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mediprac=" + MediPrac.value

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnDesc.value=ReturnValue[0];
    if (ReturnValue[1]==1)  {
       alert("Doctor is Inactive.");
       ReturnCode.select();
       ReturnCode.focus();
       return false; }
    }
  else {
    ReturnDesc.value="";       // Clear description (Doctor's name)
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
function MPDoctorSearchRF(MediPrac,ReturnCode,ReturnName,ReturnFunction) {
  var PopUpFrameDoc = DFrameStart();
  if (isWhitespace(MediPrac.value))
  {
     alert("No Medical Practice set up for this clinic.");
     MediPrac.focus();
     return;
  }

  window.MediPrac=MediPrac;
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  window.ReturnFunction=ReturnFunction;
  PopUpFrameDoc.location.href="../cgi-bin/" +
                              "priweb01.pbl?reportno=2&template=7&pridc001="+
                               MediPrac.value + "&norecord=20";
  SearchFrameShow();
}

function DisplayTrnSrc() {
  var obj = document.getElementById('outbb035');  // get Outcome field
  if (obj == undefined)
    return;

  var i = obj.selectedIndex;
  var code = obj.options[i].value.substr(0,3);        // Code (Category 'OZ')
  var ind11 = obj.options[i].value.substr(13,1);      // Indicator 11
  var destypcod = obj.options[i].value.substr(28,1);  // Destination Type
  var admsrc = document.getElementById('admnsrce');
  var dsttyp = document.getElementById('desttype');

  if (ind11 == 'T') {
    ShowTrnSrc();
    if (admsrc) admsrc.value = code;
    if (dsttyp) dsttyp.value = destypcod;
  }
  else {
    HideTrnSrc();
    if (admsrc) admsrc.value = "";
    if (dsttyp) dsttyp.value = "";
  }
}
function ShowTrnSrc() {
  document.getElementById('divTransDestLbl').innerHTML = "Transfer Destination";
  document.getElementById('divTransDestFld').innerHTML =
    document.getElementById('spTransDest').innerHTML;
}
function HideTrnSrc() {
  document.getElementById('divTransDestLbl').innerHTML = "";
  document.getElementById('divTransDestFld').innerHTML =
    document.getElementById('transferblank').innerHTML;
  document.getElementById('trnsfsrc').value = "";
}
function OutcomeChange(obj) {
  if (obj == undefined)
    return;

  DisplayTrnSrc();

  var i = obj.selectedIndex;
  var ind11 = obj.options[i].value.substr(13,1);      // Indicator 11

  if (ind11 == 'T') {
    ClearTrnFlds();
  }
}
function ClearTrnFlds() {
  document.getElementById('trnsfsrc').value = "";
  document.getElementById('trandesc').value = "";

}
//------------------------------------------------------------
// Validate transfer source codes - (patvadaf)
//------------------------------------------------------------
function validateTransSrc(ReturnCode,ReturnDate,ReturnName,DestType) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateTransSrc.arguments.length; i++) {
    if (typeof(validateTransSrc.arguments[i]) == 'function') {
      ReturnFunction=validateTransSrc.arguments[i];
    }
    else {
      validateTransSrc.arguments[i].value="";
    }
  }

  if (isWhitespace(ReturnCode.value)) return;;

  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=9" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&trandate=" + ReturnDate.value.replace(/ /g,"+") +
                    "&filtdtyp=1&desttype=" + DestType.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validateTransSrc.arguments.length; i++) {
      if (typeof(validateTransSrc.arguments[i]) != 'function') {
        j++
        validateTransSrc.arguments[i].value=ReturnValue[j];
      }
    }

    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction();
    }
    return true;
  }
  else {
    ReturnCode.select();
    ReturnCode.focus();
    return false;
  }
}
function RemoteCheckInAH(Urnumber,Admissno,RowNo,ColNo,Casekeys,EncTime) {
  var TextCheckIn = document.getElementsByName('TextCheckIn');

  if (!isWhitespace(t.rows[RowNo][15])) {
     return;
  }
  if (t.rows[RowNo][29]=="DNA") {
     alert("Check In Time Can't be Entered For DNA");
  }
  else if (t.rows.length == 1) {
     val = TextCheckIn.value;
     TextCheckIn.value = updateTimeSlotAH(Urnumber,Admissno,3,val,Casekeys,EncTime);
  }
  else {
     val = TextCheckIn[RowNo].value;
     TextCheckIn[RowNo].value = updateTimeSlotAH(Urnumber,Admissno,3,val,Casekeys,EncTime);
  }
}
function RemoteTimeSeenAH(Urnumber,Admissno,RowNo,ColNo,Casekeys,EncTime) {
  var TextTimeSeen = document.getElementsByName('TextTimeSeen');

  if (!isWhitespace(t.rows[RowNo][14])) {
     return;
  }
  else if (t.rows[RowNo][29]=="DNA") {
     alert("Check In Time Can't be Entered For DNA");
  }
  else if (t.rows.length == 1) {
     val = TextTimeSeen.value;
     TextTimeSeen.value = updateTimeSlotAH(Urnumber,Admissno,4,val,Casekeys,EncTime);
  }
  else {
     val = TextTimeSeen[RowNo].value;
     TextTimeSeen[RowNo].value = updateTimeSlotAH(Urnumber,Admissno,4,val,Casekeys,EncTime);
  }
}
//------------------------------------------------------------------------
//             Function to Update Check-In,Time Seen
//------------------------------------------------------------------------
function updateTimeSlotAH(Urnumber,Admissno,Updttime,val,caseKeys,EncTime)
{
  var serverURL = "../cgi-bin/outweb02.pbl?reportno=9&urnumber="+
  Urnumber+"&admissno="+Admissno+"&updttime="+Updttime+"&updatety=3"+
  "&casekeys="+caseKeys;
  //
  if (Updttime=="3") {
    serverURL+="&outbb032=" + EncTime;   // Set to Encounter time
  }
  if (Updttime=="4") {
    serverURL+="&outbb032=" + EncTime;
    serverURL+="&outbb033=" + EncTime;   // Set to Encounter Time
  }
  if (Updttime=="5") {
    serverURL+="&outbb032=" + EncTime;
    serverURL+="&outbb033=" + EncTime;
    serverURL+="&outbb034=" + EncTime;   // Set to Encounter Time
  }
  if (VariableNameExists('SetSMRFlag')) {
    if(SetSMRFlag==true) {
      serverURL += "&scannedm=1";
    }
  }
  serverURL=serverURL.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    j=0;
    for (var i=3; i < updateTimeSlotAH.arguments.length; i++) {
       if (typeof(updateTimeSlotAH.arguments[i]) != 'function') {
         updateTimeSlotAH.arguments[i].value = ReturnValue[j];
         j++;
       }
    }
    return ReturnValue[0];
  }
  else {
    return val;
  }
}
function claimHF(theForm) {
  if(theForm.outbb002.value.substr(3,1) == "H") {
    theForm.outbb008.className="Mandatory";
  } else {
    theForm.outbb008.className="";
  }
  checkHFTable(theForm);
}
function checkHFTable(theForm) {
  if(!isWhitespace(theForm.outbb008.value)) {
    theForm.outbb009.className="Mandatory";
  } else {
    theForm.outbb009.value="";
    theForm.outbb009.className="";
    theForm.tabldesc.value="";
  }
}
function AddComment() {
  linkurl = "../cgi-bin/cliweb06.pbl?reportno=13&template=007" +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-750)/2;
  DFrameLink(linkurl,100,Left,750,300);
}
function FilterMentalHealth(TheForm) {
  if (TheForm == undefined || TheForm.clincgrp == undefined)
    return;

  if (TheForm.clincgrp != undefined) {
    var indc4 = TheForm.clincgrp.value.substr(6,1);

    if (indc4 == "M") {  // Mental Health Clinic Group
      // strip out Non Mental Health code
      filterCatCodeList(TheForm.outbb001,"13","G","1");  // Referral Source
    }
    else {
      // strip out Mental Health code
      filterCatCodeList(TheForm.outbb001,"13","M","1");  // Referral Source
    }
  }
}
function setScannedMR() {
  if(!VariableNameExists('SetSMRFlag')) {
    return;
  }
  if(SetSMRFlag==true) {
    if(document.getElementById("scannedm")) {
      document.getElementById("scannedm").value="1";
    }
  }
}
function convertFormattedName(formattedName) {
  var formatNameRegex=/<b>(.*)<\/b>, (.*?) .*/;
  var matches = formattedName.match(formatNameRegex);
  return matches[1] + ", " + matches[2].toUpperCase();
}
