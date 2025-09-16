//jsVersion  : V11.03.00
//============================================================
// Function     : ChooseDateOptions
//
// Purpose      : Create Drop Down List for Date Selection
//
// Parameters   : Amount of days to advance (x)
//
// Usage Example :  
// <select>
// <script language=javascript> 
//   { DateSelectOptions(x,seldate) } 
// </script>
// </select>
//
//============================================================
function ChooseDateOptions(amount,seldate) {

 DayArray = new Array("Sun","Mon","Tue","Wed","Thu","Fri","Sat")

 MonthArray = new Array("Jan","Feb","Mar","April","May","Jun", 
                        "Jul","Aug","Sep","Oct","Nov","Dec")

 MonNumArray = new Array("01","02","03","04","05","06", 
                         "07","08","09","10","11","12")

 NumDaysArray = new Array("31","28","30","31","31","30", 
                          "31","30","31","31","30","31")

 current = new Date(seldate);
 date = current.getDate();
 day = current.getDay();
 month = current.getMonth();
 fullYear = current.getFullYear();

 //check if current year is a leap year and adjust NumDaysArray for February
 checkLeap();

 //output the current date
 outputDate(fullYear,MonNumArray[month],date,DayArray[day],MonthArray[month]);

 count = 0;
 do{
  date++;                                   //increment the date by one
  if (date <= NumDaysArray[month]){
   checkDay();
   outputDate(fullYear,MonNumArray[month],date,DayArray[day],MonthArray[month]);
  } else {
    checkMonthYear();
  }
  count++;                 
 }
 while (count<amount)

}

//
//  Functions
//
//
function checkLeap() {
  if ((fullYear % 4 == 0 && fullYear % 100 !=0) || fullYear % 400 ==0){
    NumDaysArray[1]="29";
  }else{
    NumDaysArray[1]="28";
  }
}
//
//write the select option to the html file
function outputDate(year,mon,date,day,month) {
  document.write("<option value="+ year + mon + date +"> "
                 + day + " " + date + " " + month + " "
                 + year + "</option>");
}
//
//Increment the day or set it back to the start of the week.
function checkDay() {
  day++;                                    //increment the day
  if (day>6) {                             
    day=0;                                  //reset to the first day of week
  }
}
//
//
function checkMonthYear() {
  month++;                                //increment month 
  date=0;                                 //reset to the first date of month
  if (month>12) {
    fullYear++;                           //increment the year by one
    month=0;                              //reset to the first month
  }
}
