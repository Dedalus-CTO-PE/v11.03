/* 
   jsVersion : V11.03.00

   Purpose   : Generate a Date Selection List

*/

function dateSelectionList(el,StartDate,noDays) {
  var weekday=new Array(7);
  weekday[0]="Sun";
  weekday[1]="Mon";
  weekday[2]="Tue";
  weekday[3]="Wed";
  weekday[4]="Thu";
  weekday[5]="Fri";
  weekday[6]="Sat";
  for (var i=0;i<noDays;i++) {
     var theDay = new Date(StartDate.getTime()+(i*24*60*60*1000));
     dayVal = "0"+theDay.getDate();
     mthVal = "0"+(theDay.getMonth()+1);
     dayVal=dayVal.substr(dayVal.length-2,2);
     mthVal=mth3Name(mthVal.substr(mthVal.length-2,2));
     dateVal = dayVal+' ' + mthVal + ' ' +  theDay.getFullYear();
     dateName=weekday[theDay.getDay()] + ' ' + dateVal;
     el.options[el.options.length]=new Option(dateName,dateVal);
  }
}
