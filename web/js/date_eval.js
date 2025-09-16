//jsVersion  : V11.03.00
<head>
<title>Date Validation</title>
<SCRIPT LANGUAGE="JavaScript">
<SCRIPT LANGUAGE="JavaScript">
<!--
function checkdate(){
	var err=0
	var day=0
	var mon=0
	var year=0
	var dateEntry = new Date()
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
	datevalue=document.frm.dat.value
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
                var ccyy = dateEntry.getFullYear();
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
            var ccyy = dateEntry.getFullYear();
            cent=ccyy.toString().substr(0,2);
            }
          }
        if (flag==0) {
          if (datelength==6) {
            day = datevalue.substring(0,2)   
            mon = datevalue.substring(2,4)   
            year= datevalue.substring(4,6)   
            var ccyy = dateEntry.getFullYear();
            cent=ccyy.toString().substr(0,2);
            }
          else {
            if (datelength==8) {
              day = datevalue.substring(0,2)   
              mon = datevalue.substring(2,4)   
              cent= datevalue.substring(4,6)   
              year= datevalue.substring(6,8)   
              }
            }
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
              var g=parseInt(year/4,10)
	      if (isNaN(g)) err=1
	      if (day>29) err=1
 	      if (day==29 && ((year/4)!=parseInt(year/4,10))) err=1
	      }

          } 
  	if (err==1) {
          alert('Invalid Date Input');
          }
        else {
          if (year<10) year="0" + year
          if (day<10)  day ="0" + day
          dateValue=day + " " + monthname[mon-1] + " " + cent + year
          document.frm.dat.value=dateValue ;
  	  }
  }
//-->
</script>
</head>

<body>
<H1>Date Validation Javascript</H1>
<hr>
<p>Enter a date</p>
<form name="frm">
  <p><input type="text" name="dat" size="30" onchange="checkdate(dat)"> </p>
  <p><input type="text" name="dat1" size="30" onchange="checkdate(dat1)"> </p>
</form>
<hr>
</body>
</html>
