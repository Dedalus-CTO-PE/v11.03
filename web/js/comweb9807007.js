//jsVersion  : V11.03.00
//========================================================================
//
function checkMandDatRng() {
  if (document.UpdateForm.datvar1a!=undefined) {
    if (!isWhitespace(document.UpdateForm.datvar1a.value)||
        !isWhitespace(document.UpdateForm.datvar1b.value)) {
      document.UpdateForm.datvar1a.className="Mandatory PastDate";
      document.UpdateForm.datvar1b.className="Mandatory PastDate";
    } else {
      document.UpdateForm.datvar1a.className="PastDate";
      document.UpdateForm.datvar1b.className="PastDate";
    }
  }
  if (document.UpdateForm.datvar2a!=undefined) {
    if (!isWhitespace(document.UpdateForm.datvar2a.value)||
        !isWhitespace(document.UpdateForm.datvar2b.value)) {
      document.UpdateForm.datvar2a.className="Mandatory PastDate";
      document.UpdateForm.datvar2b.className="Mandatory PastDate";
    } else {
      document.UpdateForm.datvar2a.className="PastDate";
      document.UpdateForm.datvar2b.className="PastDate";
    }
  }
  if (document.UpdateForm.datvar3a!=undefined) {
    if (!isWhitespace(document.UpdateForm.datvar3a.value)||
        !isWhitespace(document.UpdateForm.datvar3b.value)) {
      document.UpdateForm.datvar3a.className="Mandatory PastDate";
      document.UpdateForm.datvar3b.className="Mandatory PastDate";
    } else {
      document.UpdateForm.datvar3a.className="PastDate";
      document.UpdateForm.datvar3b.className="PastDate";
    }
  }
  if (document.UpdateForm.datvar4a!=undefined) {
    if (!isWhitespace(document.UpdateForm.datvar4a.value)||
        !isWhitespace(document.UpdateForm.datvar4b.value)) {
      document.UpdateForm.datvar4a.className="Mandatory PastDate";
      document.UpdateForm.datvar4b.className="Mandatory PastDate";
    } else {
      document.UpdateForm.datvar4a.className="PastDate";
      document.UpdateForm.datvar4b.className="PastDate";
    }
  }
  if (document.UpdateForm.datvar5a!=undefined) {
    if (!isWhitespace(document.UpdateForm.datvar5a.value)||
        !isWhitespace(document.UpdateForm.datvar5b.value)) {
      document.UpdateForm.datvar5a.className="Mandatory PastDate";
      document.UpdateForm.datvar5b.className="Mandatory PastDate";
    } else {
      document.UpdateForm.datvar5a.className="PastDate";
      document.UpdateForm.datvar5b.className="PastDate";
    }
  }
  if (document.UpdateForm.datvar6a!=undefined) {
    if (!isWhitespace(document.UpdateForm.datvar6a.value)||
        !isWhitespace(document.UpdateForm.datvar6b.value)) {
      document.UpdateForm.datvar6a.className="Mandatory PastDate";
      document.UpdateForm.datvar6b.className="Mandatory PastDate";
    } else {
      document.UpdateForm.datvar6a.className="PastDate";
      document.UpdateForm.datvar6b.className="PastDate";
    }
  }
}
function onblurReqCodeVal(theField,theTitle,fromto,assignTo) {
  var mon = " ";
  var dummy = null;

  if(checkDateCOMWEB98(theField,theTitle,dummy,fromto)) {
    day=theField.value.substring(0,2);
    monstr=theField.value.substring(3,6);
    if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
    if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
    if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
    if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
    if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
    if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
    if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
    if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
    if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
    if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
    if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
    if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
    year=theField.value.substring(9,11);
    cent=theField.value.substring(7,9);
    assignTo.value=cent+year+mon+day;
//alert(assignTo.value);
  }
}
function onblurReqCodeRng(theField,theTitle,fromto,assignTo,rngType,prevField) {
  var mon = " ";
  var dummy = null;

  if(checkDateCOMWEB98(theField,theTitle,dummy,fromto)) {
    monstr=theField.value.substring(3,6);
    if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
    if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
    if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
    if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
    if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
    if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
    if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
    if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
    if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
    if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
    if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
    if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
    year=theField.value.substring(9,11);
    cent=theField.value.substring(7,9);
    if (rngType==1) {
      assignTo.value=cent+year+mon+assignTo.value.substring(6,12);
//alert(assignTo.value);
    } else {
//alert(cent+year+mon);
      if (cent+year+mon==" ") {
        assignTo.value="";
      } else {
//alert(prevField.value);
        if (prevField.value=="") {
          assignTo.value="";
        } else {
          assignTo.value=assignTo.value.substring(0,6)+cent+year+mon;
        }
      }
    }
//alert(assignTo.value);
  }
}
function checkDateCOMWEB98() {
fromto = 0;
switch (checkDateCOMWEB98.arguments.length) {
  case 0: {
     theField=this;
     labelString=this.title;
     hiddenField=null
     break; }
  case 1: {
     theField=checkDateCOMWEB98.arguments[0]
     labelString=theField.title;
     hiddenField=null
     break; }
  case 2: {
     theField=checkDateCOMWEB98.arguments[0]
     labelString=checkDateCOMWEB98.arguments[1]
     hiddenField=null
     break; }
  case 3: {
     theField=checkDateCOMWEB98.arguments[0]
     labelString=checkDateCOMWEB98.arguments[1]
     hiddenField=checkDateCOMWEB98.arguments[2]
     break; }
  case 4: {
     theField=checkDateCOMWEB98.arguments[0]
     labelString=checkDateCOMWEB98.arguments[1]
     hiddenField=null
     fromto=checkDateCOMWEB98.arguments[3]
     break; }
   }
if(theField.value=="") { return true; }
 var ErrorFound;
 ErrorFound=false ;
 var day=0
 var mon=0
 var year=0
 var cent=0
 var Today = new Date()
 var monthname = new Array(12)
 monthname[0]="Jan"
 monthname[1]="Feb"
 monthname[2]="Mar"
 monthname[3]="Apr"
 monthname[4]="May"
 monthname[5]="Jun"
 monthname[6]="Jul"
 monthname[7]="Aug"
 monthname[8]="Sep"
 monthname[9]="Oct"
 monthname[10]="Nov"
 monthname[11]="Dec"
 datevalue=theField.value
 datelength=datevalue.length
//alert(datelength);
 position=0
 start=0
 flag=0
 if (datevalue.match(/^\s+/)) {
   chr = datevalue.substring(position, position+1)
   while (chr == " ") {
     datevalue = datevalue.substring(position+1,datevalue.length)
     chr = datevalue.substring(position, position+1)
   }
   position=0
   datelength=datevalue.length
 }
                                             // I CAR 40916
 if (datelength==5 || datelength==7) {       // checks for mm(/. )yy
   if (datevalue.substring(1,2)!='/' &&
       datevalue.substring(1,2)!=' ' &&
       datevalue.substring(1,2)!='.') {
     if (datevalue.substring(4,5)!='/' &&
         datevalue.substring(4,5)!=' ' &&
         datevalue.substring(4,5)!='.') {
       if (datevalue.substring(5,6)!='/' &&
           datevalue.substring(5,6)!=' ' &&
           datevalue.substring(5,6)!='.') {
         flag = 1;                               // and mm(/. )ccyy
         if (datevalue.substring(0,2) == 1 ||    // depending on what month was
             datevalue.substring(0,2) == 3 ||    // entered, the javascript will
             datevalue.substring(0,2) == 5 ||    // default the last day of that
             datevalue.substring(0,2) == 7 ||    // month, into the day
             datevalue.substring(0,2) == 8 ||
             datevalue.substring(0,2) == 10 ||
             datevalue.substring(0,2) == 12 ) {
          if (fromto==1) {
            day = 1
          } else {
            day = 31
          }
         } else {
           if (datevalue.substring(0,2) == 4 ||
               datevalue.substring(0,2) == 6 ||
               datevalue.substring(0,2) == 9 ||
               datevalue.substring(0,2) == 11 ) {
             if (fromto==1) {
               day = 1
             } else {
               day = 30
             }
           } else {
             if (datelength==7 &&
                 datevalue.substring(5,7) % 4 == 0 ) {  // calculates for leap y
               if (fromto==1) {
                 day = 1
               } else {
                 day = 29
               }
             } else {
               if (datelength==5 &&
                   datevalue.substring(3,5) % 4 == 0 ) {// calculates for leap y
                 if (fromto==1) {
                   day = 1
                 } else {
                   day = 29
                 }
               } else {
                 if (fromto==1) {
                   day = 1
                 } else {
                   day = 28
                 }
               }
             }
           }
         }
       }
     }
   }
 }

 if (datelength==6 || datelength==8) {     // checks for mmm(/. )yy
   if (datevalue.substring(3,4)=='/' ||    // and mmm(/. )ccyy
       datevalue.substring(3,4)==' ' ||
       datevalue.substring(3,4)=='.') {
     if (datevalue.substring(1,2)!='/' &&
         datevalue.substring(1,2)!=' ' &&
         datevalue.substring(1,2)!='.') {
       flag = 1;
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 } }
//     else {
//     mon = datevalue.substring(start, position)   }
     if (mon == 1 ||      // depending on what month was
         mon == 3 ||      // entered, the javascript will
         mon == 5 ||      // default the last day of that
         mon == 7 ||      // month, into the day
         mon == 8 ||
         mon == 10 ||
         mon == 12 ) {
          if (fromto==1) {
            day = 1
          } else {
            day = 31
          }
     } else {
       if (mon == 4 ||
           mon == 6 ||
           mon == 9 ||
           mon == 11 ) {
          if (fromto==1) {
            day = 1
          } else {
            day = 30
          }
       } else {
         if (datelength==8 &&
             datevalue.substring(6,8) % 4 == 0 ) {     // calculates for leap y
           if (fromto==1) {
             day = 1
           } else {
             day = 29
           }
         } else {
           if (datelength==6 &&
               datevalue.substring(4,6) % 4 == 0 ) {   // calculates for leap y
             if (fromto==1) {
               day = 1
             } else {
               day = 29
             }
           } else {
             if (fromto==1) {
               day = 1
             } else {
               day = 28
             }
           }
         }
       }
     }
   }
 }
                                                      // end I CAR 40916
 while (position < datelength) {
   chr = datevalue.substring(position, position+1)
   if (chr==" " || chr=="/" || chr==".") {
     if (flag==2) {
       if (position-start>2) {
         year = datevalue.substring(start+2, position)
         cent = datevalue.substring(start, start+2) }
       else {
         year = datevalue.substring(start, position)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(year,10) >  parseInt(ThisYear)+3,10 ) { cent="19" } }
     flag = 3 }
     if (flag==1) {
       test=parseInt(datevalue.substring(start, position),10)
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
       else {
         mon = datevalue.substring(start, position)   }
       flag = 2
       start=position+1 }
       if (flag==0) {
         day  = datevalue.substring(start, position)
         flag = 1
         start=position+1 } }
   position++
 } //End While
 if (flag==2) {
   if (position-start>2) {
     cent = datevalue.substring(start, start+2)    // Century
     year = datevalue.substring(start+2, position) }
   else {
     year = datevalue.substring(start, position)
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2)
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(year,10) >  parseInt(ThisYear) + 3,10 ) { cent="19" } } }
 if (flag==0) {
   if (datelength==6) {
     if (datevalue.substring(2,4)>18) {                // I CAR 40916
       mon = datevalue.substring(0,2)
       cent = datevalue.substring(2,4)
       year = datevalue.substring(4,6)
       if (mon == 1 ||      // depending on what month was
           mon == 3 ||      // entered, the javascript will
           mon == 5 ||      // default the last day of that
           mon == 7 ||      // month, into the day
           mon == 8 ||
           mon == 10 ||
           mon == 12 ) {
          if (fromto==1) {
            day = 1
          } else {
            day = 31
          }
       } else {
         if (mon == 4 ||
             mon == 6 ||
             mon == 9 ||
             mon == 11 ) {
           if (fromto==1) {
             day = 1
           } else {
             day = 30
           }
         } else {
           if (year % 4 == 0) {
             if (fromto==1) {
               day = 1
             } else {
               day = 29
             }
           } else {
             if (fromto==1) {
               day = 1
             } else {
               day = 28
             }
           }
         }
       }                                                // end I CAR 40916
     } else {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       year= datevalue.substring(4,6)
       var ccyy = Today.getFullYear();
       cent=ccyy.toString().substr(0,2);
       ThisYear=ccyy.toString().substr(2,2);
       if (parseInt(year,10) >  parseInt(ThisYear) + 3,10 ) { cent="19" } }
     }
   else {
     if (datelength==8) {
       day = datevalue.substring(0,2)
       mon = datevalue.substring(2,4)
       cent= datevalue.substring(4,6)
       year= datevalue.substring(6,8)   }
     else {
       if (datelength==4) {                           // I CAR 40916
         mon = datevalue.substring(0,2)
         year= datevalue.substring(2,4)
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(year,10) >  parseInt(ThisYear) + 3,10 ) { cent="19" }
         if (mon == 1 ||      // depending on what month was
             mon == 3 ||      // entered, the javascript will
             mon == 5 ||      // default the last day of that
             mon == 7 ||      // month, into the day
             mon == 8 ||
             mon == 10 ||
             mon == 12 ) {
          if (fromto==1) {
            day = 1
          } else {
            day = 31
          }
         } else {
           if (mon == 4 ||
               mon == 6 ||
               mon == 9 ||
               mon == 11 ) {
             if (fromto==1) {
               day = 1
             } else {
               day = 30
             }
           } else {
             if (year % 4 == 0) {
               if (fromto==1) {
                 day = 1
               } else {
                 day = 29
               }
             } else {
               if (fromto==1) {
                 day = 1
               } else {
                 day = 28
               }
             }
           }
         }
       }                                              // end I CAR 40916
     }
   }
 }

 day=parseInt(day,10)
 if (isNaN(day))  ErrorFound=true
 mon=parseInt(mon,10)
 if (isNaN(mon))  ErrorFound=true
 year=parseInt(year,10)
 if (isNaN(year)) ErrorFound=true
 if (!ErrorFound) {
   if (mon<1 || mon>12) ErrorFound = true
   if (day<1 || day>31) ErrorFound = true
   if (year<0 || year>99) ErrorFound = true
   if (mon==4 || mon==6 || mon==9 || mon==11) {
     if (day==31) ErrorFound=true }
   if (mon==2) {
     if (day>29) ErrorFound=true
     if (day==29 && year % 4 !=0 ) ErrorFound=true
     if (day==29 && year==0 && cent % 4 !=0 ) ErrorFound=true } }
 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false }
 else {
   if (year<10) year="0" + year
   if (day<10)  day ="0" + day
   if (globalDateType == "DD MMM YYYY") {
     dateValue=day + " " + monthname[mon-1] + " " + cent + year
     theField.value=dateValue  }
   else {
     if (globalDateType == "DD/MM/YYYY") {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=day + "/" + month + "/" + cent + year;
       theField.value=dateValue  } }
   if (hiddenField != null) {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=cent + year + month + day;
       hiddenField.value=dateValue  }
   var InputDay=day
   var InputMth=mon
   var InputYrs=cent + year
   if (InputMth < 10) InputMth="0" + InputMth
   InputDate="";
   InputDate=InputDate.concat(InputYrs,InputMth,InputDay)
   if (theField.className.match(/FutureDate/)) {
     if (!CheckFuture(InputDate)) {
      alert(labelString + " must be in the Future.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/PastDate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " must be in the Past.")
      theField.select()
      theField.value="";
      return false }
    }
   if (theField.className.match(/BackDate/))   {
     if (!CheckPast(InputDate)) {
      alert(labelString + " must be in the Past.")
      theField.select()
      var Sp=" ";
      var Today = new Date()
      var ThisDay=Today.getDate();
      var ThisMth=parseInt(Today.getMonth(),10) +1;
      var ThisYrs=Today.getFullYear();
      if (ThisDay < 10) ThisDay="0" + ThisDay
      if (ThisMth < 10) ThisMth="0" + ThisMth
      ThisMth = ThisMth.toString();
      var MonthName=GetMonthName(ThisMth);
      ThisDate="";
      ThisDate=ThisDate.concat(ThisDay,Sp,MonthName,Sp,ThisYrs)
      theField.value=ThisDate;
      return false }
    }
   if (theField.className.match(/PastMonth/))   {
     if (!CheckPastMonth(InputDate)) {
      alert(labelString + " must be less than current Month.")
      theField.select()
      theField.value="";
      return false }
    }
//HPS Emer Defect 70
   if (theField.className.match(/CurrentDate/)) {
     if (CheckCurrent(InputDate)) {
      alert(labelString + " must be the current date.")
      theField.select()
      theField.value="";
      return false }
    }

// HPS added for Bug no. 72
    ccyy = Today.getFullYear();
    var currentAge=  ccyy-(cent+year);
    if (currentAge >119 ) {
    alert("Warning: Invalid date");
  }
    return true }
}
function displayRepCodeDate() {
  for (var i=1;i<7;i++) {
    switch (i) {
      case 1 : { RepCodeDateOnload(document.UpdateForm.patcn015,i); break; }
      case 2 : { RepCodeDateOnload(document.UpdateForm.patcn017,i); break; }
      case 3 : { RepCodeDateOnload(document.UpdateForm.patcn019,i); break; }
      case 4 : { RepCodeDateOnload(document.UpdateForm.patcn021,i); break; }
      case 5 : { RepCodeDateOnload(document.UpdateForm.patcn023,i); break; }
      case 6 : { RepCodeDateOnload(document.UpdateForm.patcn025,i); break; }
    }
  }
}
function RepCodeDateOnload(reportCode,repCodeFunc) {
  switch (reportCode.value) {
    case ''   : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '01' : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '02' : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '03' : { RepCodeDateValOL(repCodeFunc); return;}
    case '04' : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '05' : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '06' : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '10' : { RepCodeDateValRngOL(repCodeFunc); return;}
    case '13' : { RepCodeDateValOL(repCodeFunc); return;}
  }
}
function RepCodeDate(reportCode,repCodeFunc) {
  switch (reportCode.value) {
    case ''   : { RepCodeDateValRng(repCodeFunc); return;}
    case '01' : { RepCodeDateValRng(repCodeFunc); return;}
    case '02' : { RepCodeDateValRng(repCodeFunc); return;}
    case '03' : { RepCodeDateVal(repCodeFunc); return;}
    case '04' : { RepCodeDateValRng(repCodeFunc); return;}
    case '05' : { RepCodeDateValRng(repCodeFunc); return;}
    case '06' : { RepCodeDateValRng(repCodeFunc); return;}
    case '10' : { RepCodeDateValRng(repCodeFunc); return;}
    case '13' : { RepCodeDateVal(repCodeFunc); return;}
  }
}
function RepCodeDateValRng(repCodeFunc) {
  var dummy;
  switch (repCodeFunc) {
    case 1 : { PRS2Dat1div.innerHTML=PRS2Dat1span1.innerHTML;
               PRS2Dat1diva.innerHTML=PRS2Dat1span4.innerHTML;

               if (isWhitespace(document.UpdateForm.patcn016.value.substring(9,12))) {
                 document.UpdateForm.datvar1a.value="";
                 document.UpdateForm.datvar1b.value="";
               } else {
                 document.UpdateForm.datvar1a.value=
                   document.UpdateForm.patcn016.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn016.value.substring(0,4);
                 checkDateCOMWEB98(document.UpdateForm.datvar1a,
                                   document.UpdateForm.datvar1a.title,
                                   dummy,1);
                 document.UpdateForm.datvar1b.value=
                   document.UpdateForm.patcn016.value.substring(10,12)+"/"+
                   document.UpdateForm.patcn016.value.substring(6,10);
                 checkDateCOMWEB98(document.UpdateForm.datvar1b,
                                   document.UpdateForm.datvar1b.title,
                                   dummy,0);
               }

               document.UpdateForm.datvar1a.focus();
               document.UpdateForm.datvar1a.focus();
               return; }
    case 2 : { PRS2Dat2div.innerHTML=PRS2Dat2span1.innerHTML;
               PRS2Dat2diva.innerHTML=PRS2Dat2span4.innerHTML;

               if (isWhitespace(document.UpdateForm.patcn018.value.substring(9,12))) {
                 document.UpdateForm.datvar2a.value="";
                 document.UpdateForm.datvar2b.value="";
               } else {
                 document.UpdateForm.datvar2a.value=
                   document.UpdateForm.patcn018.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn018.value.substring(0,4);
                 checkDateCOMWEB98(document.UpdateForm.datvar2a,
                                   document.UpdateForm.datvar2a.title,
                                   dummy,1);
                 document.UpdateForm.datvar2b.value=
                   document.UpdateForm.patcn018.value.substring(10,12)+"/"+
                   document.UpdateForm.patcn018.value.substring(6,10);
                 checkDateCOMWEB98(document.UpdateForm.datvar2b,
                                   document.UpdateForm.datvar2b.title,
                                   dummy,0);
               }

               document.UpdateForm.datvar2a.focus();
               document.UpdateForm.datvar2a.focus();
               return; }
    case 3 : { PRS2Dat3div.innerHTML=PRS2Dat3span1.innerHTML;
               PRS2Dat3diva.innerHTML=PRS2Dat3span4.innerHTML;

               if (isWhitespace(document.UpdateForm.patcn020.value.substring(9,12))) {
                 document.UpdateForm.datvar3a.value="";
                 document.UpdateForm.datvar3b.value="";
               } else {
                 document.UpdateForm.datvar3a.value=
                   document.UpdateForm.patcn020.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn020.value.substring(0,4);
                 checkDateCOMWEB98(document.UpdateForm.datvar3a,
                                   document.UpdateForm.datvar3a.title,
                                   dummy,1);
                 document.UpdateForm.datvar3b.value=
                   document.UpdateForm.patcn020.value.substring(10,12)+"/"+
                   document.UpdateForm.patcn020.value.substring(6,10);
                 checkDateCOMWEB98(document.UpdateForm.datvar3b,
                                   document.UpdateForm.datvar3b.title,
                                   dummy,0);
               }

               document.UpdateForm.datvar3a.focus();
               document.UpdateForm.datvar3a.focus();
               return; }
    case 4 : { PRS2Dat4div.innerHTML=PRS2Dat4span1.innerHTML;
               PRS2Dat4diva.innerHTML=PRS2Dat4span4.innerHTML;

               if (isWhitespace(document.UpdateForm.patcn022.value.substring(9,12))) {
                 document.UpdateForm.datvar4a.value="";
                 document.UpdateForm.datvar4b.value="";
               } else {
                 document.UpdateForm.datvar4a.value=
                   document.UpdateForm.patcn022.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn022.value.substring(0,4);
                 checkDateCOMWEB98(document.UpdateForm.datvar4a,
                                   document.UpdateForm.datvar4a.title,
                                   dummy,1);
                 document.UpdateForm.datvar4b.value=
                   document.UpdateForm.patcn022.value.substring(10,12)+"/"+
                   document.UpdateForm.patcn022.value.substring(6,10);
                 checkDateCOMWEB98(document.UpdateForm.datvar4b,
                                   document.UpdateForm.datvar4b.title,
                                   dummy,0);
               }

               document.UpdateForm.datvar4a.focus();
               document.UpdateForm.datvar4a.focus();
               return; }
    case 5 : { PRS2Dat5div.innerHTML=PRS2Dat5span1.innerHTML;
               PRS2Dat5diva.innerHTML=PRS2Dat5span4.innerHTML;

               if (isWhitespace(document.UpdateForm.patcn024.value.substring(9,12))) {
                 document.UpdateForm.datvar5a.value="";
                 document.UpdateForm.datvar5b.value="";
               } else {
                 document.UpdateForm.datvar5a.value=
                   document.UpdateForm.patcn024.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn024.value.substring(0,4);
                 checkDateCOMWEB98(document.UpdateForm.datvar5a,
                                   document.UpdateForm.datvar5a.title,
                                   dummy,1);
                 document.UpdateForm.datvar5b.value=
                   document.UpdateForm.patcn024.value.substring(10,12)+"/"+
                   document.UpdateForm.patcn024.value.substring(6,10);
                 checkDateCOMWEB98(document.UpdateForm.datvar5b,
                                   document.UpdateForm.datvar5b.title,
                                   dummy,0);
               }

               document.UpdateForm.datvar5a.focus();
               document.UpdateForm.datvar5a.focus();
               return; }
    case 6 : { PRS2Dat6div.innerHTML=PRS2Dat6span1.innerHTML;
               PRS2Dat6diva.innerHTML=PRS2Dat6span4.innerHTML;

               if (isWhitespace(document.UpdateForm.patcn026.value.substring(9,12))) {
                 document.UpdateForm.datvar6a.value="";
                 document.UpdateForm.datvar6b.value="";
               } else {
                 document.UpdateForm.datvar6a.value=
                   document.UpdateForm.patcn026.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn026.value.substring(0,4);
                 checkDateCOMWEB98(document.UpdateForm.datvar6a,
                                   document.UpdateForm.datvar6a.title,
                                   dummy,1);
                 document.UpdateForm.datvar6b.value=
                   document.UpdateForm.patcn026.value.substring(10,12)+"/"+
                   document.UpdateForm.patcn026.value.substring(6,10);
                 checkDateCOMWEB98(document.UpdateForm.datvar6b,
                                   document.UpdateForm.datvar6b.title,
                                   dummy,0);
               }

               document.UpdateForm.datvar6a.focus();
               document.UpdateForm.datvar6a.focus();
               return; }
  }
}
function RepCodeDateValRngOL(repCodeFunc) {
  switch (repCodeFunc) {
    case 1 : { PRS2Dat1div.innerHTML=PRS2Dat1span1.innerHTML;
               PRS2Dat1diva.innerHTML=PRS2Dat1span4.innerHTML;
               return; }
    case 2 : { PRS2Dat2div.innerHTML=PRS2Dat2span1.innerHTML;
               PRS2Dat2diva.innerHTML=PRS2Dat2span4.innerHTML;
               return; }
    case 3 : { PRS2Dat3div.innerHTML=PRS2Dat3span1.innerHTML;
               PRS2Dat3diva.innerHTML=PRS2Dat3span4.innerHTML;
               return; }
    case 4 : { PRS2Dat4div.innerHTML=PRS2Dat4span1.innerHTML;
               PRS2Dat4diva.innerHTML=PRS2Dat4span4.innerHTML;
               return; }
    case 5 : { PRS2Dat5div.innerHTML=PRS2Dat5span1.innerHTML;
               PRS2Dat5diva.innerHTML=PRS2Dat5span4.innerHTML;
               return; }
    case 6 : { PRS2Dat6div.innerHTML=PRS2Dat6span1.innerHTML;
               PRS2Dat6diva.innerHTML=PRS2Dat6span4.innerHTML;
               return; }
  }
}
function RepCodeDateValOL(repCodeFunc) {
  switch (repCodeFunc) {
    case 1 : { PRS2Dat1div.innerHTML=PRS2Dat1span2.innerHTML;
               PRS2Dat1diva.innerHTML=PRS2Dat1span3.innerHTML;
               return; }
    case 2 : { PRS2Dat2div.innerHTML=PRS2Dat2span2.innerHTML;
               PRS2Dat2diva.innerHTML=PRS2Dat2span3.innerHTML;
               return; }
    case 3 : { PRS2Dat3div.innerHTML=PRS2Dat3span2.innerHTML;
               PRS2Dat3diva.innerHTML=PRS2Dat3span3.innerHTML;
               return; }
    case 4 : { PRS2Dat4div.innerHTML=PRS2Dat4span2.innerHTML;
               PRS2Dat4diva.innerHTML=PRS2Dat4span3.innerHTML;
               return; }
    case 5 : { PRS2Dat5div.innerHTML=PRS2Dat5span2.innerHTML;
               PRS2Dat5diva.innerHTML=PRS2Dat5span3.innerHTML;
               return; }
    case 6 : { PRS2Dat6div.innerHTML=PRS2Dat6span2.innerHTML;
               PRS2Dat6diva.innerHTML=PRS2Dat6span3.innerHTML;
               return; }
  }
}
function RepCodeDateVal(repCodeFunc) {
  var dummy;
  switch (repCodeFunc) {
    case 1 : { PRS2Dat1div.innerHTML=PRS2Dat1span2.innerHTML;
               PRS2Dat1diva.innerHTML=PRS2Dat1span3.innerHTML;

               if (!isWhitespace(document.UpdateForm.patcn016.value.substring(9,12))) {
                 document.UpdateForm.datvar1.value="";
               } else {
                 if (!isWhitespace(document.UpdateForm.patcn016.value)) {
                   document.UpdateForm.datvar1.value=
                   document.UpdateForm.patcn016.value.substring(6,8)+"/"+
                   document.UpdateForm.patcn016.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn016.value.substring(0,4);
                   checkDateCOMWEB98(document.UpdateForm.datvar1,
                                     document.UpdateForm.datvar1.title,
                                     dummy,1);
                 }
               }

               document.UpdateForm.datvar1.focus();
               document.UpdateForm.datvar1.focus();
               return; }
    case 2 : { PRS2Dat2div.innerHTML=PRS2Dat2span2.innerHTML;
               PRS2Dat2diva.innerHTML=PRS2Dat2span3.innerHTML;

               if (!isWhitespace(document.UpdateForm.patcn018.value.substring(9,12))) {
                 document.UpdateForm.datvar2.value="";
               } else {
                 if (!isWhitespace(document.UpdateForm.patcn018.value)) {
                   document.UpdateForm.datvar2.value=
                   document.UpdateForm.patcn018.value.substring(6,8)+"/"+
                   document.UpdateForm.patcn018.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn018.value.substring(0,4);
                   checkDateCOMWEB98(document.UpdateForm.datvar2,
                                     document.UpdateForm.datvar2.title,
                                     dummy,1);
                 }
               }

               document.UpdateForm.datvar2.focus();
               document.UpdateForm.datvar2.focus();
               return; }
    case 3 : { PRS2Dat3div.innerHTML=PRS2Dat3span2.innerHTML;
               PRS2Dat3diva.innerHTML=PRS2Dat3span3.innerHTML;

               if (!isWhitespace(document.UpdateForm.patcn020.value.substring(9,12))) {
                 document.UpdateForm.datvar3.value="";
               } else {
                 if (!isWhitespace(document.UpdateForm.patcn020.value)) {
                   document.UpdateForm.datvar3.value=
                   document.UpdateForm.patcn020.value.substring(6,8)+"/"+
                   document.UpdateForm.patcn020.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn020.value.substring(0,4);
                   checkDateCOMWEB98(document.UpdateForm.datvar3,
                                     document.UpdateForm.datvar3.title,
                                     dummy,1);
                 }
               }

               document.UpdateForm.datvar3.focus();
               document.UpdateForm.datvar3.focus();
               return; }
    case 4 : { PRS2Dat4div.innerHTML=PRS2Dat4span2.innerHTML;
               PRS2Dat4diva.innerHTML=PRS2Dat4span3.innerHTML;

               if (!isWhitespace(document.UpdateForm.patcn022.value.substring(9,12))) {
                 document.UpdateForm.datvar4.value="";
               } else {
                 if (!isWhitespace(document.UpdateForm.patcn022.value)) {
                   document.UpdateForm.datvar4.value=
                   document.UpdateForm.patcn022.value.substring(6,8)+"/"+
                   document.UpdateForm.patcn022.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn022.value.substring(0,4);
                   checkDateCOMWEB98(document.UpdateForm.datvar4,
                                     document.UpdateForm.datvar4.title,
                                     dummy,1);
                 }
               }

               document.UpdateForm.datvar4.focus();
               document.UpdateForm.datvar4.focus();
               return; }
    case 5 : { PRS2Dat5div.innerHTML=PRS2Dat5span2.innerHTML;
               PRS2Dat5diva.innerHTML=PRS2Dat5span3.innerHTML;

               if (!isWhitespace(document.UpdateForm.patcn024.value.substring(9,12))) {
                 document.UpdateForm.datvar5.value="";
               } else {
                 if (!isWhitespace(document.UpdateForm.patcn024.value)) {
                   document.UpdateForm.datvar5.value=
                   document.UpdateForm.patcn024.value.substring(6,8)+"/"+
                   document.UpdateForm.patcn024.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn024.value.substring(0,4);
                   checkDateCOMWEB98(document.UpdateForm.datvar5,
                                     document.UpdateForm.datvar5.title,
                                     dummy,1);
                 }
               }

               document.UpdateForm.datvar5.focus();
               document.UpdateForm.datvar5.focus();
               return; }
    case 6 : { PRS2Dat6div.innerHTML=PRS2Dat6span2.innerHTML;
               PRS2Dat6diva.innerHTML=PRS2Dat6span3.innerHTML;

               if (!isWhitespace(document.UpdateForm.patcn026.value.substring(9,12))) {
                 document.UpdateForm.datvar6.value="";
               } else {
                 if (!isWhitespace(document.UpdateForm.patcn026.value)) {
                   document.UpdateForm.datvar6.value=
                   document.UpdateForm.patcn026.value.substring(6,8)+"/"+
                   document.UpdateForm.patcn026.value.substring(4,6)+"/"+
                   document.UpdateForm.patcn026.value.substring(0,4);
                   checkDateCOMWEB98(document.UpdateForm.datvar6,
                                     document.UpdateForm.datvar6.title,
                                     dummy,1);
                 }
               }

               document.UpdateForm.datvar6.focus();
               document.UpdateForm.datvar6.focus();
               return; }
  }
}
function appendZero(reportCode,repCodeFunc) {
  justifyRight(reportCode);
  zeroFill(reportCode);

  switch (repCodeFunc) {
    case 1 : { exit=compareReportCode1(); if (exit==1) { return; }}
    case 2 : { exit=compareReportCode2(); if (exit==1) { return; }}
    case 3 : { exit=compareReportCode3(); if (exit==1) { return; }}
    case 4 : { exit=compareReportCode4(); if (exit==1) { return; }}
    case 5 : { exit=compareReportCode5(); if (exit==1) { return; }}
    case 6 : { exit=compareReportCode6(); if (exit==1) { return; }}
  }

  switch (reportCode.value) {
    case ''  : { break; }
    case '01': { break; }
    case '02': { break; }
    case '03': { break; }
    case '04': { break; }
    case '05': { break; }
    case '06': { break; }
    case '10': { break; }
    case '13': { break; }
    default  : { alert("Report Code must have one of the following values: 01,02,03,04,05,06,10,13");
                 reportCode.value="";
                 reportCode.focus();
                 return; }
  }

  RepCodeDate(reportCode,repCodeFunc);
  checkMandDatRng();

}
function compareReportCode1() {
  if (document.UpdateForm.patcn015.value=="") {return 0;}
  if (document.UpdateForm.patcn015.value==document.UpdateForm.patcn017.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn015.value="";
    document.UpdateForm.patcn015.focus();
    return 1;
  }
  if (document.UpdateForm.patcn015.value==document.UpdateForm.patcn019.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn015.value="";
    document.UpdateForm.patcn015.focus();
    return 1;
  }
  if (document.UpdateForm.patcn015.value==document.UpdateForm.patcn021.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn015.value="";
    document.UpdateForm.patcn015.focus();
    return 1;
  }
  if (document.UpdateForm.patcn015.value==document.UpdateForm.patcn023.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn015.value="";
    document.UpdateForm.patcn015.focus();
    return 1;
  }
  if (document.UpdateForm.patcn015.value==document.UpdateForm.patcn025.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn015.value="";
    document.UpdateForm.patcn015.focus();
    return 1;
  }
  return 0;
}
function compareReportCode2() {
  if (document.UpdateForm.patcn017.value=="") {return 0;}

  if (document.UpdateForm.patcn017.value==document.UpdateForm.patcn015.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn017.value="";
    document.UpdateForm.patcn017.focus();
    return 1;
  }
  if (document.UpdateForm.patcn017.value==document.UpdateForm.patcn019.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn017.value="";
    document.UpdateForm.patcn017.focus();
    return 1;
  }
  if (document.UpdateForm.patcn017.value==document.UpdateForm.patcn021.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn017.value="";
    document.UpdateForm.patcn017.focus();
    return 1;
  }
  if (document.UpdateForm.patcn017.value==document.UpdateForm.patcn023.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn017.value="";
    document.UpdateForm.patcn017.focus();
    return 1;
  }
  if (document.UpdateForm.patcn017.value==document.UpdateForm.patcn025.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn017.value="";
    document.UpdateForm.patcn017.focus();
    return 1;
  }
  return 0;
}
function compareReportCode3() {
  if (document.UpdateForm.patcn019.value=="") {return 0;}

  if (document.UpdateForm.patcn019.value==document.UpdateForm.patcn015.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn019.value="";
    document.UpdateForm.patcn019.focus();
    return 1;
  }
  if (document.UpdateForm.patcn019.value==document.UpdateForm.patcn017.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn019.value="";
    document.UpdateForm.patcn019.focus();
    return 1;
  }
  if (document.UpdateForm.patcn019.value==document.UpdateForm.patcn021.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn019.value="";
    document.UpdateForm.patcn019.focus();
    return 1;
  }
  if (document.UpdateForm.patcn019.value==document.UpdateForm.patcn023.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn019.value="";
    document.UpdateForm.patcn019.focus();
    return 1;
  }
  if (document.UpdateForm.patcn019.value==document.UpdateForm.patcn025.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn019.value="";
    document.UpdateForm.patcn019.focus();
    return 1;
  }
  return 0;
}
function compareReportCode4() {
  if (document.UpdateForm.patcn021.value=="") {return 0;}

  if (document.UpdateForm.patcn021.value==document.UpdateForm.patcn015.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn021.value="";
    document.UpdateForm.patcn021.focus();
    return 1;
  }
  if (document.UpdateForm.patcn021.value==document.UpdateForm.patcn017.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn021.value="";
    document.UpdateForm.patcn021.focus();
    return 1;
  }
  if (document.UpdateForm.patcn021.value==document.UpdateForm.patcn019.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn021.value="";
    document.UpdateForm.patcn021.focus();
    return 1;
  }
  if (document.UpdateForm.patcn021.value==document.UpdateForm.patcn023.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn021.value="";
    document.UpdateForm.patcn021.focus();
    return 1;
  }
  if (document.UpdateForm.patcn021.value==document.UpdateForm.patcn025.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn021.value="";
    document.UpdateForm.patcn021.focus();
    return 1;
  }
  return 0;
}
function compareReportCode5() {
  if (document.UpdateForm.patcn023.value=="") {return 0;}

  if (document.UpdateForm.patcn023.value==document.UpdateForm.patcn015.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn023.value="";
    document.UpdateForm.patcn023.focus();
    return 1;
  }
  if (document.UpdateForm.patcn023.value==document.UpdateForm.patcn017.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn023.value="";
    document.UpdateForm.patcn023.focus();
    return 1;
  }
  if (document.UpdateForm.patcn023.value==document.UpdateForm.patcn019.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn023.value="";
    document.UpdateForm.patcn023.focus();
    return 1;
  }
  if (document.UpdateForm.patcn023.value==document.UpdateForm.patcn021.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn023.value="";
    document.UpdateForm.patcn023.focus();
    return 1;
  }
  if (document.UpdateForm.patcn023.value==document.UpdateForm.patcn025.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn023.value="";
    document.UpdateForm.patcn023.focus();
    return 1;
  }
  return 0;
}
function compareReportCode6() {
  if (document.UpdateForm.patcn025.value=="") {return 0;}

  if (document.UpdateForm.patcn025.value==document.UpdateForm.patcn015.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn025.value="";
    document.UpdateForm.patcn025.focus();
    return 1;
  }
  if (document.UpdateForm.patcn025.value==document.UpdateForm.patcn017.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn025.value="";
    document.UpdateForm.patcn025.focus();
    return 1;
  }
  if (document.UpdateForm.patcn025.value==document.UpdateForm.patcn019.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn025.value="";
    document.UpdateForm.patcn025.focus();
    return 1;
  }
  if (document.UpdateForm.patcn025.value==document.UpdateForm.patcn021.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn025.value="";
    document.UpdateForm.patcn025.focus();
    return 1;
  }
  if (document.UpdateForm.patcn025.value==document.UpdateForm.patcn023.value) {
    alert("You Cannot Use the Same Report Code Twice");
    document.UpdateForm.patcn025.value="";
    document.UpdateForm.patcn025.focus();
    return 1;
  }
  return 0;
}
function displayDateType() {
  var dummy;
  if (!isWhitespace(document.UpdateForm.patcn016.value)) {
    if (document.UpdateForm.patcn016.value.substring(8,12)=="    ") {
      document.UpdateForm.datvar1.value=
               document.UpdateForm.patcn016.value.substring(6,8)+"/"+
               document.UpdateForm.patcn016.value.substring(4,6)+"/"+
               document.UpdateForm.patcn016.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar1,
                        document.UpdateForm.datvar1.title,
                        dummy,1);
    } else {
      document.UpdateForm.datvar1a.value=
               document.UpdateForm.patcn016.value.substring(4,6)+"/"+
               document.UpdateForm.patcn016.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar1a,
                        document.UpdateForm.datvar1a.title,
                        dummy,1);
      document.UpdateForm.datvar1b.value=
               document.UpdateForm.patcn016.value.substring(10,12)+"/"+
               document.UpdateForm.patcn016.value.substring(6,10);
      checkDateCOMWEB98(document.UpdateForm.datvar1b,
                        document.UpdateForm.datvar1b.title,
                        dummy,0);
    }
  }

  if (!isWhitespace(document.UpdateForm.patcn018.value)) {
    if (document.UpdateForm.patcn018.value.substring(8,12)=="    ") {
      document.UpdateForm.datvar2.value=
               document.UpdateForm.patcn018.value.substring(6,8)+"/"+
               document.UpdateForm.patcn018.value.substring(4,6)+"/"+
               document.UpdateForm.patcn018.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar2,
                        document.UpdateForm.datvar2.title,
                        dummy,1);
    } else {
      document.UpdateForm.datvar2a.value=
               document.UpdateForm.patcn018.value.substring(4,6)+"/"+
               document.UpdateForm.patcn018.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar2a,
                        document.UpdateForm.datvar2a.title,
                        dummy,1);
      document.UpdateForm.datvar2b.value=
               document.UpdateForm.patcn018.value.substring(10,12)+"/"+
               document.UpdateForm.patcn018.value.substring(6,10);
      checkDateCOMWEB98(document.UpdateForm.datvar2b,
                        document.UpdateForm.datvar2b.title,
                        dummy,0);
    }
  }
  if (!isWhitespace(document.UpdateForm.patcn020.value)) {
    if (document.UpdateForm.patcn020.value.substring(8,12)=="    ") {
      document.UpdateForm.datvar3.value=
               document.UpdateForm.patcn020.value.substring(6,8)+"/"+
               document.UpdateForm.patcn020.value.substring(4,6)+"/"+
               document.UpdateForm.patcn020.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar3,
                        document.UpdateForm.datvar3.title,
                        dummy,1);
    } else {
      document.UpdateForm.datvar3a.value=
               document.UpdateForm.patcn020.value.substring(4,6)+"/"+
               document.UpdateForm.patcn020.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar3a,
                        document.UpdateForm.datvar3a.title,
                        dummy,1);
      document.UpdateForm.datvar3b.value=
               document.UpdateForm.patcn020.value.substring(10,12)+"/"+
               document.UpdateForm.patcn020.value.substring(6,10);
      checkDateCOMWEB98(document.UpdateForm.datvar3b,
                        document.UpdateForm.datvar3b.title,
                        dummy,0);
    }
  }
  if (!isWhitespace(document.UpdateForm.patcn022.value)) {
    if (document.UpdateForm.patcn022.value.substring(8,12)=="    ") {
      document.UpdateForm.datvar4.value=
               document.UpdateForm.patcn022.value.substring(6,8)+"/"+
               document.UpdateForm.patcn022.value.substring(4,6)+"/"+
               document.UpdateForm.patcn022.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar4,
                        document.UpdateForm.datvar4.title,
                        dummy,1);
    } else {
      document.UpdateForm.datvar4a.value=
               document.UpdateForm.patcn022.value.substring(4,6)+"/"+
               document.UpdateForm.patcn022.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar4a,
                        document.UpdateForm.datvar4a.title,
                        dummy,1);
      document.UpdateForm.datvar4b.value=
               document.UpdateForm.patcn022.value.substring(10,12)+"/"+
               document.UpdateForm.patcn022.value.substring(6,10);
      checkDateCOMWEB98(document.UpdateForm.datvar4b,
                        document.UpdateForm.datvar4b.title,
                        dummy,0);
    }
  }

  if (!isWhitespace(document.UpdateForm.patcn024.value)) {
    if (document.UpdateForm.patcn024.value.substring(8,12)=="    ") {
      document.UpdateForm.datvar5.value=
               document.UpdateForm.patcn024.value.substring(6,8)+"/"+
               document.UpdateForm.patcn024.value.substring(4,6)+"/"+
               document.UpdateForm.patcn024.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar5,
                        document.UpdateForm.datvar5.title,
                        dummy,1);
    } else {
      document.UpdateForm.datvar5a.value=
               document.UpdateForm.patcn024.value.substring(4,6)+"/"+
               document.UpdateForm.patcn024.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar5a,
                        document.UpdateForm.datvar5a.title,
                        dummy,1);
      document.UpdateForm.datvar5b.value=
               document.UpdateForm.patcn024.value.substring(10,12)+"/"+
               document.UpdateForm.patcn024.value.substring(6,10);
      checkDateCOMWEB98(document.UpdateForm.datvar5b,
                        document.UpdateForm.datvar5b.title,
                        dummy,0);
    }
  }

  if (!isWhitespace(document.UpdateForm.patcn026.value)) {
    if (document.UpdateForm.patcn026.value.substring(8,12)=="    ") {
      document.UpdateForm.datvar6.value=
               document.UpdateForm.patcn026.value.substring(6,8)+"/"+
               document.UpdateForm.patcn026.value.substring(4,6)+"/"+
               document.UpdateForm.patcn026.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar6,
                        document.UpdateForm.datvar6.title,
                        dummy,1);
    } else {
      document.UpdateForm.datvar6a.value=
               document.UpdateForm.patcn026.value.substring(4,6)+"/"+
               document.UpdateForm.patcn026.value.substring(0,4);
      checkDateCOMWEB98(document.UpdateForm.datvar6a,
                        document.UpdateForm.datvar6a.title,
                        dummy,1);
      document.UpdateForm.datvar6b.value=
               document.UpdateForm.patcn026.value.substring(10,12)+"/"+
               document.UpdateForm.patcn026.value.substring(6,10);
      checkDateCOMWEB98(document.UpdateForm.datvar6b,
                        document.UpdateForm.datvar6b.title,
                        dummy,0);
    }
  }

}
function clearDateVarField(dateVarObj,dateVarNum) {

 switch (dateVarNum) {
 case 1 : { dateVarObj.value=""; document.UpdateForm.patcn016.value=""; break; }
 case 2 : { dateVarObj.value=""; document.UpdateForm.patcn018.value=""; break; }
 case 3 : { dateVarObj.value=""; document.UpdateForm.patcn020.value=""; break; }
 case 4 : { dateVarObj.value=""; document.UpdateForm.patcn022.value=""; break; }
 case 5 : { dateVarObj.value=""; document.UpdateForm.patcn024.value=""; break; }
 case 6 : { dateVarObj.value=""; document.UpdateForm.patcn026.value=""; break; }
  }

}
function reqCodeSubmit() {

  var day="";
  var mon="";
  var year="";
  var cent="";
  var dummy;

  if (document.UpdateForm.datvar1==undefined) {
    if (checkDateCOMWEB98(document.UpdateForm.datvar1a,
                      'PRS2 1st report request date range 1',dummy,1)&&
        checkDateCOMWEB98(document.UpdateForm.datvar1b,
                      'PRS2 1st report request date range 2',dummy,0))
    {
      monstr=document.UpdateForm.datvar1a.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar1a.value.substring(9,11);
      cent=document.UpdateForm.datvar1a.value.substring(7,9); 
      date1=cent+year+mon

      monstr=document.UpdateForm.datvar1b.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar1b.value.substring(9,11);
      cent=document.UpdateForm.datvar1b.value.substring(7,9);
      date2=cent+year+mon
      if(date1>date2) {
        alert("Invalid 1st Request Date Range");
        return;
      } else { 
        document.UpdateForm.patcn016.value=date1+date2;
      }
    } else {
      document.UpdateForm.patcn016.value="";
      return;
    }
  } else {
    if (checkDateCOMWEB98(document.UpdateForm.datvar1,
                          'PRS2 1st report request date'))
    {
      day=document.UpdateForm.datvar1.value.substring(0,2);
      monstr=document.UpdateForm.datvar1.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar1.value.substring(9,11);
      cent=document.UpdateForm.datvar1.value.substring(7,9);
      document.UpdateForm.patcn016.value=cent+year+mon+day;
    } else {
      document.UpdateForm.patcn016.value="";
      return;
    }
  }
//alert(document.UpdateForm.patcn015.value+" "+document.UpdateForm.patcn016.value)

//  if (!isWhitespace(document.UpdateForm.patcn016.value)) {
//    if (document.UpdateForm.patcn016.value.length!="8" &&
//        document.UpdateForm.patcn016.value.length!="12") {
//      alert("PRS2 1st report request date(s) invalid.");
//      return;
//    }
//  }

  day="";mon="";year="";cent="";
  if (document.UpdateForm.datvar2==undefined) {
    if (checkDateCOMWEB98(document.UpdateForm.datvar2a,
                      'PRS2 2nd report request date range 1',dummy,1)&&
        checkDateCOMWEB98(document.UpdateForm.datvar2b,
                      'PRS2 2nd report request date range 2',dummy,0))
    {
      monstr=document.UpdateForm.datvar2a.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar2a.value.substring(9,11);
      cent=document.UpdateForm.datvar2a.value.substring(7,9);
      date1=cent+year+mon

      monstr=document.UpdateForm.datvar2b.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar2b.value.substring(9,11);
      cent=document.UpdateForm.datvar2b.value.substring(7,9);
      date2=cent+year+mon
      if(date1>date2) {
        alert("Invalid 2nd Request Date Range");
        return;
      } else { 
        document.UpdateForm.patcn018.value=date1+date2;
      }
    } else {
      document.UpdateForm.patcn018.value="";
      return;
    }
  } else {
    if (checkDateCOMWEB98(document.UpdateForm.datvar2,
                          'PRS2 2nd report request date'))
    {
      day=document.UpdateForm.datvar2.value.substring(0,2);
      monstr=document.UpdateForm.datvar2.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar2.value.substring(9,11);
      cent=document.UpdateForm.datvar2.value.substring(7,9);
      document.UpdateForm.patcn018.value=cent+year+mon+day;
    } else {
      document.UpdateForm.patcn018.value="";
      return;
    }
  }
//alert(document.UpdateForm.patcn017.value+" "+document.UpdateForm.patcn018.value)

//  if (!isWhitespace(document.UpdateForm.patcn018.value)) {
//    if (document.UpdateForm.patcn018.value.length!="8" &&
//        document.UpdateForm.patcn018.value.length!="12") {
//      alert("PRS2 2nd report request date(s) invalid.");
//      return;
//    }
//  }
  day="";mon="";year="";cent="";
  if (document.UpdateForm.datvar3==undefined) {
    if (checkDateCOMWEB98(document.UpdateForm.datvar3a,
                      'PRS2 3rd report request date range 1',dummy,1)&&
        checkDateCOMWEB98(document.UpdateForm.datvar3b,
                      'PRS2 3rd report request date range 2',dummy,0))
    {
      monstr=document.UpdateForm.datvar3a.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar3a.value.substring(9,11);
      cent=document.UpdateForm.datvar3a.value.substring(7,9);
      date1=cent+year+mon

      monstr=document.UpdateForm.datvar3b.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar3b.value.substring(9,11);
      cent=document.UpdateForm.datvar3b.value.substring(7,9);
      date2=cent+year+mon
      if(date1>date2) {
        alert("Invalid 3rd Request Date Range");
        return;
      } else {
        document.UpdateForm.patcn020.value=date1+date2;
      }
    } else {
      document.UpdateForm.patcn020.value="";
      return;
    }
  } else {
    if (checkDateCOMWEB98(document.UpdateForm.datvar3,
                          'PRS2 3rd report request date'))
    {
      day=document.UpdateForm.datvar3.value.substring(0,2);
      monstr=document.UpdateForm.datvar3.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar3.value.substring(9,11);
      cent=document.UpdateForm.datvar3.value.substring(7,9);
      document.UpdateForm.patcn020.value=cent+year+mon+day;
    } else {
      document.UpdateForm.patcn020.value="";
      return;
    }
  }
//alert(document.UpdateForm.patcn019.value+" "+document.UpdateForm.patcn020.value)

//  if (!isWhitespace(document.UpdateForm.patcn020.value)) {
//    if (document.UpdateForm.patcn020.value.length!="8" &&
//        document.UpdateForm.patcn020.value.length!="12") {
//      alert("PRS2 3rd report request date(s) invalid.");
//      return;
//    }
//  }
  day="";mon="";year="";cent="";
  if (document.UpdateForm.datvar4==undefined) {
    if (checkDateCOMWEB98(document.UpdateForm.datvar4a,
                      'PRS2 4th report request date range 1',dummy,1)&&
        checkDateCOMWEB98(document.UpdateForm.datvar4b,
                      'PRS2 4th report request date range 2',dummy,0))
    {
      monstr=document.UpdateForm.datvar4a.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar4a.value.substring(9,11);
      cent=document.UpdateForm.datvar4a.value.substring(7,9);
      date1=cent+year+mon

      monstr=document.UpdateForm.datvar4b.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar4b.value.substring(9,11);
      cent=document.UpdateForm.datvar4b.value.substring(7,9);
      date2=cent+year+mon
      if(date1>date2) {
        alert("Invalid 4th Request Date Range");
        return;
      } else {
        document.UpdateForm.patcn022.value=date1+date2;
      }
    } else {
      document.UpdateForm.patcn022.value="";
      return;
    }
  } else {
    if (checkDateCOMWEB98(document.UpdateForm.datvar4,
                          'PRS2 4th report request date'))
    {
      day=document.UpdateForm.datvar4.value.substring(0,2);
      monstr=document.UpdateForm.datvar4.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar4.value.substring(9,11);
      cent=document.UpdateForm.datvar4.value.substring(7,9);
      document.UpdateForm.patcn022.value=cent+year+mon+day;
    } else {
      document.UpdateForm.patcn022.value=""; 
      return;
    }
  }
//alert(document.UpdateForm.patcn021.value+" "+document.UpdateForm.patcn022.value)


//  if (!isWhitespace(document.UpdateForm.patcn022.value)) {
//    if (document.UpdateForm.patcn022.value.length!="8" &&
//        document.UpdateForm.patcn022.value.length!="12") {
//      alert("PRS2 4th report request date(s) invalid.");
//      return;
//    }
//  }
  day="";mon="";year="";cent="";
  if (document.UpdateForm.datvar5==undefined) {
    if (checkDateCOMWEB98(document.UpdateForm.datvar5a,
                      'PRS2 5th report request date range 1',dummy,1)&&
        checkDateCOMWEB98(document.UpdateForm.datvar5b,
                      'PRS2 5th report request date range 2',dummy,0)) {
      monstr=document.UpdateForm.datvar5a.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar5a.value.substring(9,11);
      cent=document.UpdateForm.datvar5a.value.substring(7,9);
      date1=cent+year+mon

      monstr=document.UpdateForm.datvar5b.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar5b.value.substring(9,11);
      cent=document.UpdateForm.datvar5b.value.substring(7,9);
      date2=cent+year+mon
      if(date1>date2) {
        alert("Invalid 5th Request Date Range");
        return;
      } else {
        document.UpdateForm.patcn024.value=date1+date2;
      }
    } else {
      document.UpdateForm.patcn024.value="";
      return;
    }
  } else {
    if (checkDateCOMWEB98(document.UpdateForm.datvar5,
                          'PRS2 5th report request date')) {
      day=document.UpdateForm.datvar5.value.substring(0,2);
      monstr=document.UpdateForm.datvar5.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar5.value.substring(9,11);
      cent=document.UpdateForm.datvar5.value.substring(7,9);
      document.UpdateForm.patcn024.value=cent+year+mon+day;
    } else {
      document.UpdateForm.patcn024.value="";
      return;
    }
  }
//alert(document.UpdateForm.patcn023.value+" "+document.UpdateForm.patcn024.value)

//  if (!isWhitespace(document.UpdateForm.patcn024.value)) {
//    if (document.UpdateForm.patcn024.value.length!="8" &&
//        document.UpdateForm.patcn024.value.length!="12") {
//      alert("PRS2 5th report request date(s) invalid.");
//      return;
//    }
//  }
  day="";mon="";year="";cent="";
  if (document.UpdateForm.datvar6==undefined) {
    if (checkDateCOMWEB98(document.UpdateForm.datvar6a,
                      'PRS2 6th report request date range 1',dummy,1)&&
        checkDateCOMWEB98(document.UpdateForm.datvar6b,
                      'PRS2 6th report request date range 2',dummy,0)) {
      monstr=document.UpdateForm.datvar6a.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar6a.value.substring(9,11);
      cent=document.UpdateForm.datvar6a.value.substring(7,9);
      date1=cent+year+mon

      monstr=document.UpdateForm.datvar6b.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar6b.value.substring(9,11);
      cent=document.UpdateForm.datvar6b.value.substring(7,9);
      date2=cent+year+mon
      if(date1>date2) {
        alert("Invalid 6th Request Date Range");
        return;
      } else {
        document.UpdateForm.patcn026.value=date1+date2;
      }
    } else {
      document.UpdateForm.patcn026.value="";
      return;
    }
  } else {
    if (checkDateCOMWEB98(document.UpdateForm.datvar6,
                          'PRS2 6th report request date')) {
      day=document.UpdateForm.datvar6.value.substring(0,2);
      monstr=document.UpdateForm.datvar6.value.substring(3,6);
      if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon="01"
      if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon="02"
      if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon="03"
      if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon="04"
      if (monstr=="May" || monstr=="MAY" || monstr=="may") mon="05"
      if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon="06"
      if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon="07"
      if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon="08"
      if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon="09"
      if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon="10"
      if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon="11"
      if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon="12"
      year=document.UpdateForm.datvar6.value.substring(9,11);
      cent=document.UpdateForm.datvar6.value.substring(7,9);
      document.UpdateForm.patcn026.value=cent+year+mon+day;
    } else {
      document.UpdateForm.patcn026.value="";
      return;
    }
  }
//alert(document.UpdateForm.patcn025.value+" "+document.UpdateForm.patcn026.value)

//  if (!isWhitespace(document.UpdateForm.patcn026.value)) {
//    if (document.UpdateForm.patcn026.value.length!="8" &&
//        document.UpdateForm.patcn026.value.length!="12") {
//      alert("PRS2 6th report request date(s) invalid.");
//      return;
//    }
//  }


  if (document.UpdateForm.d_patcn342.checked == true)
    document.UpdateForm.patcn342.value = "1";
  else
    document.UpdateForm.patcn342.value = "2";

  if (document.UpdateForm.d_patcn343.checked == true)
    document.UpdateForm.patcn343.value = "1";
  else
    document.UpdateForm.patcn343.value = "2";

  if (document.UpdateForm.d_patcn344.checked == true)
    document.UpdateForm.patcn344.value = "1";
  else
    document.UpdateForm.patcn344.value = "2";

  if (document.UpdateForm.d_patcn345.checked == true)
    document.UpdateForm.patcn345.value = "1";
  else
    document.UpdateForm.patcn345.value = "2";

  if (document.UpdateForm.d_patcn346.checked == true)
    document.UpdateForm.patcn346.value = "1";
  else
    document.UpdateForm.patcn346.value = "2";

  if (document.UpdateForm.d_patcn572.checked == true) {
    document.UpdateForm.patcn572.value = "1";
  } else {
    document.UpdateForm.patcn572.value = "2";
  }
  if (document.UpdateForm.d_patcn574.checked == true) {
    document.UpdateForm.patcn574.value = "1";
  } else {
    document.UpdateForm.patcn574.value = "2";
  }
  if (document.UpdateForm.d_patcn576.checked == true) {
    document.UpdateForm.patcn576.value = "1";
  } else {
    document.UpdateForm.patcn576.value = "2";
  }
  if (document.UpdateForm.d_patcn578.checked == true) {
    document.UpdateForm.patcn578.value = "1";
  } else {
    document.UpdateForm.patcn578.value = "2";
  }
  if (document.UpdateForm.d_patcn580.checked == true) {
    document.UpdateForm.patcn580.value = "1";
  } else {
    document.UpdateForm.patcn580.value = "2";
  }
  if (document.UpdateForm.d_patcn582.checked == true) {
    document.UpdateForm.patcn582.value = "1";
  } else {
    document.UpdateForm.patcn582.value = "2";
  }
  if (document.UpdateForm.d_patcn584.checked == true) {
    document.UpdateForm.patcn584.value = "1";
  } else {
    document.UpdateForm.patcn584.value = "2";
  }
  setRERD();
  setFormactn('U');
}
