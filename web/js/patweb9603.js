//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb9603.js
//
// Function  : Standard Functions Used in patweb9603 templates
//
// Version   : 
//             V9.02.02 17/01/2003  Jill
//                                  Fixed error on page
//             V9.02.01 15/01/2003  Jill
//                                  Added check for mhcnkler
//             V9.02.00 09/10/2002  Jill
//                                  Created include
//========================================================================
function diffDate(){
if (document.pat96ret.mehvisfl.value != "1"){
   return;}
if (document.pat96ret.leavtype.value != "H" && document.pat96ret.leavtype.value != "T"){
   return;}

  if(document.pat96ret.leavtype.value == "H"){
     mindays=document.pat96ret.mhminhol.value}
  else{
     mindays=document.pat96ret.mhmintri.value}
  Input=document.pat96ret.tranin.value
  day= Input.substring(0,2)
  year= Input.substring(7,11)
  monstr= Input.substring(3,6)
  if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=00
  if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=01
  if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=02
  if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=03
  if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=04
  if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=05
  if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=06
  if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=07
  if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=08
  if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=09
  if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=10
  if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=11

  Fday = new Date();
  Fday.setFullYear(year);
  Fday.setMonth(mon);
  Fday.setDate(day);
  Input=document.pat96ret.trandate.value
  day= Input.substr(6,2)
  year= Input.substr(0,4)
  monstr= Input.substr(4,2)
  if (monstr=="01") mon=00
  if (monstr=="02") mon=01
  if (monstr=="03") mon=02
  if (monstr=="04") mon=03
  if (monstr=="05") mon=04
  if (monstr=="06") mon=05
  if (monstr=="07") mon=06
  if (monstr=="08") mon=07
  if (monstr=="09") mon=08
  if (monstr=="10") mon=09
  if (monstr=="11") mon=10
  if (monstr=="12") mon=11
  Tday = new Date();
  Tday.setFullYear(year);
  Tday.setMonth(mon);
  Tday.setDate(day);
  difference = "0";

  if (Tday.getTime() >= Fday.getTime()) {
    difference = Tday.getTime() - Fday.getTime();
    difference = Math.floor(difference / (1000 * 60 * 60 * 24));
  }
  if (difference < mindays){
    STLTHeading.innerHTML=stltheading.innerHTML;
    STLT.innerHTML=stlt.innerHTML;
    if(document.pat96ret.leaveend.value=="1"){
    LEHeading.innerHTML=leheading.innerHTML;
    LE.innerHTML=le.innerHTML;}
  } else {
    STLT.innerHTML=leaveblank.innerHTML;
    STLTHeading.innerHTML="";
    LE.innerHTML=leaveblank.innerHTML;
    LEHeading.innerHTML="";
//    document.pat96ret.trnlvtyp.value="";
  }
}
