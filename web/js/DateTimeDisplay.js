//jsVersion  : V11.03.00
//---------------------------------------------------------------------------
// Formatted Current Date Time Display Script
//---------------------------------------------------------------------------
function initArray() {
  for(i=0;i<initArray.arguments.length; i++)
  this[i] = initArray.arguments[i];
}
function DateTimeDisplay() {
  var isnMonths=new initArray("January","February","March","April","May","June","July","August","September","October","November","December");
  var isnDays= new initArray("Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday");
  today=new Date();
  hrs=today.getHours();
  min=today.getMinutes();
  sec=today.getSeconds();
  clckh=""+((hrs>12)?hrs-12:hrs); 
  clckm=((min<10)?"0":"")+min;
  clcks=((sec<10)?"0":"")+sec;
  clck=(hrs>=12)?"p.m.":"a.m.";
  var stnr="";
  var ns="0123456789";
  var a="";
  function getFullYear(d) {
  yr = d.getYear();
  if (yr < 1000)
    yr+=1900;
  return yr;}
  document.write(isnDays[today.getDay()]+", "+isnMonths[today.getMonth()]+" "
  +today.getDate()+", "+getFullYear(today)+" "+clckh+":"+clckm+":"
  +clcks+" "+clck);
}

