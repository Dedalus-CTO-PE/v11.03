//jsVersion  : V11.03.00
//============================================================
// Function     : TimeSelectOptions
//
// Purpose      : Create Drop Down List for Time Selection
//
// Parameters   : Increment Minutes 
//                Current Time (selected)
//                Hour Type (12 or 24 Hour Clock)
//                Start Time (24 hour Clock)
//                End Time (24 hour Clock)
// Usage Example :  
// <select>
// <script language=javascript> 
// {TimeSelectOptions(10,"10:16",24,"09:00","17:00")} 
// </script>
// </select>
//
//============================================================
function TimeSelectOptions(Increment,CurrentTime,HourType,StartTime,EndTime) {
var AmPmArray = new Array("am","am","am","am","am","am", 
                          "am","am","am","am","am","am", 
                          "pm","pm","pm","pm","pm","pm", 
                          "pm","pm","pm","pm","pm","pm")
var Hours12Array = new Array("12","01","02","03","04","05", 
                             "06","07","08","09","10","11", 
                             "12","01","02","03","04","05", 
                             "06","07","08","09","10","11")
var Hours24Array = new Array("00","01","02","03","04","05",
                             "06","07","08","09","10","11",
                             "12","13","14","15","16","17",
                             "18","19","20","21","22","23")
var MinArray = new Array("00","01","02","03","04","05","06","07","08","09",
                         "10","11","12","13","14","15","16","17","18","19",
                         "20","21","22","23","24","25","26","27","28","29",
                         "30","31","32","33","34","35","36","37","38","39",
                         "40","41","42","43","44","45","46","47","48","49",
                         "50","51","52","53","54","55","56","57","58","59",
                         "60")
CurrentHour = CurrentTime.substring(0,2) ;
CurrentMin  = CurrentTime.substring(3,5) ;
EndHour = EndTime.substring(0,2);
EndMin  = EndTime.substring(3,5);
Hour = parseInt(StartTime.substring(0,2),10);
Min = parseInt(StartTime.substring(3,5),10); 
do { do {
   document.write("<option value="+Hours24Array[Hour]+":"+MinArray[Min])
   if (CurrentHour==Hours24Array[Hour] && (CurrentMin==MinArray[Min])) {
     document.write(" selected")}
   document.write(">")
   if (HourType==12) {
     document.write(Hours12Array[Hour]+":"+MinArray[Min]+" "+AmPmArray[Hour]) }
   else {
     document.write(Hours24Array[Hour]+":"+MinArray[Min]) }
   document.write("</option>") 
   if (CurrentHour==Hours24Array[Hour] ) {
     if ((CurrentMin>MinArray[Min]) && (CurrentMin<MinArray[Min+Increment])) {
       document.write("<option value=")
       document.write(Hours24Array[CurrentHour]+":"+MinArray[CurrentMin])
       document.write(" selected>")
       if (HourType==12) {
         document.write(Hours12Array[CurrentHour]+":"+MinArray[CurrentMin]) 
         document.write(" "+AmPmArray[CurrentHour]) }
       else {
         document.write(Hours24Array[CurrentHour]+":"+MinArray[CurrentMin]) }
       document.write("</option>") } 
   } 
   if ((Hour==EndHour) && (Min>=EndMin)){ break } 
   Min=Min+Increment }
  while (Min<60)
  Hour=Hour+1
  Min=0 }
while (Hour<=EndHour)
}
