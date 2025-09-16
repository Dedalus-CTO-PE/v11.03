//jsVersion  : V11.03.00
<!--
//========================================================================
// Program   : emr_entry.js
//
// Written   : 07/04/1999 Nicole Harrington
//
// Function  : Validate Time and Date Input - not allowing future dates 
//             getURL
//
// Version   : 
//             V9.03.01 17.11.2011 Ebon Clements      CAR 255507
//                      Added return true and false to return statements
//             V9.02.03 23.04.2002 Bronkoo
//                      Mods for StV golive
//             V9.02.02 31/01/2002 Bronko
//                      Changes to functionality of Map View
//             V9.02.01 20/12/2001 Bronko
//             changes for St.V. with emr
//             V1.00 07/04/1999 Nicole Harrington
//             Modified checkDate routine in iba_form_entry.js
//
//========================================================================
// Function  : checkTime
//
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm    
//                      hh mm      
//                      hh:mm    
//                      hh.mm     
//                      hhmmss  
//                      hh mm ss  
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm:ss format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Time 
// Example   : 
//             <input type="text" name="patbtime" size="12" 
//                      onfocus="prompt('Enter Patients Time of Birth')"
//                      onchange="checkTime(this,'Time of Birth')"> </p>
//========================================================================
function checkTime(theField, labelString)
{       
 if(theField.value=="") { return true; }
 if(theField.value=="00000000000") { return true; }
 var err=0 
	var hour=0 
	var min=0 
	var sec=0 
	var Today = new Date()
	timevalue=theField.value
        timelength=timevalue.length
        position=0
        start=0
        flag=0
        while (position < timelength) {
          chr = timevalue.substring(position, position+1)
          if (chr==" " || chr==":" || chr==".") {
            if (flag==2) {
              if (position-start>2) {
  	              sec = timevalue.substring(start+2, position)// seconds
                }
              else {
                sec = timevalue.substring(start, position)   
                }
              flag = 3
              }
            if (flag==1) {
                min = timevalue.substring(start, position)   
              flag = 2
              start=position+1
              }
            if (flag==0) {
              hour  = timevalue.substring(start, position)   
              flag = 1
              start=position+1
              }
            }
          position++
        } //End While
        if (flag==2) {
          if (position-start>2) {
            sec = timevalue.substring(start+2, position)// seconds
            }
          else {
            sec = timevalue.substring(start, position)   
            }
          }
        if (flag==1) {
          if (timelength==8) {
            min = timevalue.substring(3,5)   
            sec = timevalue.substring(6,8)   
            }
          else {
            if (timelength==5) {
              min = timevalue.substring(3,5)   
              sec = 0
              }
            }
          }
        if (flag==0) {
          if (timelength==6) {
            hour = timevalue.substring(0,2)   
            min = timevalue.substring(2,4)   
            sec = timevalue.substring(4,6)   
            }
          else {
            if (timelength==4) {
              hour = timevalue.substring(0,2)   
              min = timevalue.substring(2,4)   
              sec = "00"
              }
            }
          }    
        if ((hour=="") || (hour=="  ")) {
           hour=Today.getHours();
           min=Today.getMinutes();
           sec=Today.getSeconds();
           }
        if ((min=="") || (min=="  ")){
           min=Today.getMinutes();
           sec=Today.getSeconds();
           }
        if ((sec=="") || (sec=="  ")){
           sec="0"
           }
 	      hour=parseInt(hour,10)
        if (isNaN(hour))  err=1
        min=parseInt(min,10)
        if (isNaN(min))  err=1
        sec=parseInt(sec,10)
        if (isNaN(sec)) err=1
        if (err==0) { 
            //basic error checking 
      	     if (min<0 || min>59) err = 1
	           if (hour<0 || hour>23) err = 1
	           if (sec<0 || sec>59) err = 1
            }
	
	       //advanced error checking
  	     if (err==1) {
           alert('Invalid '+labelString)
           theField.focus()
           return false;
           }
        else {
          if (sec<10) sec="0" + sec
          if (hour<10)  hour ="0" + hour
          if (min<10)  min ="0" + min
          timeValue=hour + ":" + min + ":" + sec
          theField.value=timeValue 
          return true;
  	       }
  return true;
}
//========================================================================
// Function  : checkDate
//
// Operation : Validate Date Input
//             Date May be entered in any of the following formats
//                      ddmmyy
//                      ddmmccyy
//                      dd.mm.yy
//                      dd.mm.ccyy
//                      dd/mm/yy
//                      dd/mm/ccyy
//                      dd mm yy
//                      dd mm ccyy
//                      dd mmm yy
//                      dd mmm ccyy
//             The field will be checked and display in a dd mmm ccyy format.
//
// Parameters: theField    - The item on the form ie this
//             labelString - Description of Date
// Example   :
//             <input type="text" name="patbdate" size="12"
//                      onfocus="prompt('Enter Patients Date of Birth')"
//                      onchange="checkdate(this,'Date of Birth')"> </p>
//========================================================================
function checkDate(theField, labelString) {
        if(theField.value=="") { return true; }
        if(theField.value=="00000000000") { return true; }
        var err=0
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
        position=0
        start=0
        flag=0
        while (position < datelength) {
          chr = datevalue.substring(position, position+1)
          if (chr==" " || chr=="/" || chr==".") {
            if (flag==2) {
              if (position-start>2) {
                 year = datevalue.substring(start+2, position)// year
                 cent = datevalue.substring(start, start+2)// Century
                }
              else {
                year = datevalue.substring(start, position)
                var ccyy = Today.getFullYear();
                cent=ccyy.toString().substr(0,2);
                }
              flag = 3
              }
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
                if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12
                }
              else {
                mon = datevalue.substring(start, position)
                }
              flag = 2
              start=position+1
              }
            if (flag==0) {
              day  = datevalue.substring(start, position)
              flag = 1
              start=position+1
              }
            }
          position++
        } //End While

        if (flag==2) {
          if (position-start>2) {
            cent = datevalue.substring(start, start+2)// Century
            year = datevalue.substring(start+2, position)// year
            }
          else {
            year = datevalue.substring(start, position)
            var ccyy = Today.getFullYear();
            cent=ccyy.toString().substr(0,2);
            }
          }
        if (flag==0) {
          if (datelength==6) {
            day = datevalue.substring(0,2)
            mon = datevalue.substring(2,4)
            year= datevalue.substring(4,6)
            var ccyy = Today.getFullYear();
            cent=ccyy.toString().substr(0,2);
            }
          else {
            if (datelength==8) {
              day = datevalue.substring(0,2)
              mon = datevalue.substring(2,4)
              cent= datevalue.substring(4,6)
              year= datevalue.substring(6,8)
              }
            else {
              if (datelength==4) {
                day = datevalue.substring(0,2)
                mon = datevalue.substring(2,4)
                var ccyy = Today.getFullYear();
                cent=ccyy.toString().substr(0,2);
                year = Today.getYear();
                }
              else {
                if ((datelength==2) || (datelength==1)) {
                  day = datevalue.substring(0,2)
                  mon = Today.getMonth();
                  mon = mon + 1
                  var ccyy = Today.getFullYear();
                  cent=ccyy.toString().substr(0,2);
                year = Today.getYear();
                  }
            }}}
          }
        if (day=="") {                                                        
           day=Today.getDate();
           }
        if (mon=="") {                                                         
           mon=Today.getMonth();
           mon=mon + 1 
           }
        if (cent=="") {
           var ccyy=Today.getFullYear();
           cent=ccyy.toString().substr(0,2);
           }
        if (year=="") {
           year=Today.getYear();
           }
        day=parseInt(day,10)
        if (isNaN(day))  err=1
        mon=parseInt(mon,10)
        if (isNaN(mon))  err=1
        year=parseInt(year,10)
        if (isNaN(year)) err=1
        if (err==0) {
            //basic error checking
           if (mon<1 || mon>12) err = 1
     if (day<1 || day>31) err = 1
     if (year<0 || year>99) err = 1

     //advanced error checking

     // months with 30 days
     if (mon==4 || mon==6 || mon==9 || mon==11) {
              if (day==31) err=1
       }

 // february, leap year
     if (mon==2) {
       if (day>29) err=1
       if (day==29 && year % 4 !=0 ) err=1
              if (day==29 && year==0 && cent % 4 !=0 ) err=1
       }

          }
   if (err==1) {
          alert('Invalid '+labelString)
          theField.focus()
          return false;
          }
        else {
          if (year<10) year="0" + year
          if (day<10)  day ="0" + day
          dateValue=day + " " + monthname[mon-1] + " " + cent + year
          theField.value=dateValue
          return true;
     }
  return true;
}

function defDateTime(dateField,dateString,timeField,timeString) {
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
  var n=new Date();
  var day=n.getDate();
  var mon=n.getMonth();
  mon=mon + 1
  var ccyy=n.getFullYear();
  if (day<10)  day ="0" + day
  var dateValue=day + " " + monthname[mon-1] + " " + ccyy
  dateField.value=dateValue;
  timeField.value="          ";
  checkDate(dateField,dateString);
  checkTime(timeField,timeString);
}
//
function dummySubmit(admissno,urnumber,formactn,updttype,question,username,password) {
  if (!confirm(question)){ 
      return;
   }
  else {
      document.dummy.admissno.value=admissno;
      document.dummy.urnumber.value=urnumber;
      document.dummy.formactn.value=formactn;
      document.dummy.username.value=username;
      document.dummy.password.value=password;
      document.dummy.updttype.value=updttype;
      document.dummy.submit();
   }
}
//
function clrDoc(code,name) {
  code.value="";
  name.value="";
}
//-->
