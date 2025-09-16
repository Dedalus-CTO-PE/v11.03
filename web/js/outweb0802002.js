//jsVersion  : V11.03.00
//------------------------------------------------------------ 
// Function : outweb0802002.js
//
// Modifications :
//
// V9.03.00   29.07.2003 Ebon Clements       CAR 41801
//                      Created include 
//------------------------------------------------------------ 
function SelectSessions() {
  parent.ShowDates.innerHTML="";
  for (var e = 0; e < ShowDates.elements.length; e++) {
    var el=ShowDates.elements[e] ;
    if(el.name.match(/datesrch/) && el.checked==true) {
    parent.ShowDates.innerHTML+="<input type=hidden name=" +
                       el.name.substr(0,8) + " value='" + el.value + "'>"
    }
  }
  DFrameExit();
  parent.document.SearchForm.submit();
}
function UpdateCol06(SetColumn) {
  for (var i=0; i < document.ShowDates.length; i++) {
    var Item = document.ShowDates.elements[i];
    var MatchStr = "datesrch.." + SetColumn
    if (Item.name.match(MatchStr)){
      if (Item.id=="") {
        if (Item.checked==false) { Item.checked=true }
                            else { Item.checked=false } } } }
}
function UpdateClear06() {
  for (var i=0; i < document.ShowDates.length; i++) {
    var Item = document.ShowDates.elements[i];
    var MatchStr = "datesrch...."
    if (Item.id=="") {
      if (Item.name.match(MatchStr)){ Item.checked=false } } }
}
function Update4Weeks06() {
  for (var i=document.ShowDates.length-1; i >= 0; i--) {
    var Flag=0
    var FirstWeek=0
    var Item = document.ShowDates.elements[i];
    var MatchStr = "datesrch"
    if (Flag==0) {
      FirstDate=Item.name
    }
    if (Item.name.match(MatchStr)){
      if(Item.checked==true) {
        FirstWeek=Item.name
        i=0 } } }
   if (FirstWeek==0) {
     FirstWeek=FirstDate;
   }
   StartFlag=0
   WeekCount=0
   for (var i=0; i < document.ShowDates.length; i++) {
     var Item = document.ShowDates.elements[i];
     if (Item.name.match(FirstWeek)){
       StartFlag=1
       Item.checked=true }
     else {
       Check4WeekItem(Item)   }
    }
}
function Check4WeekItem(Item) {
 if (StartFlag==1) {
    var MatchStr = "datesrch"
    if (Item.name.match(MatchStr)){
       if(Item.type=="checkbox") {
         WeekCount++;
         if (WeekCount==4) {
            if (Item.id=="") {
               Item.checked=true }
           WeekCount=0
         }
       }
    }
  }
}

function Update2Weeks06() {
for (var i=document.ShowDates.length-1; i >= 0; i--) {
  var Flag=0
  var FirstWeek=0
  var Item = document.ShowDates.elements[i];
  var MatchStr = "datesrch"
  if (Flag==0) {
    FirstDate=Item.name
  }
  if (Item.name.match(MatchStr)){
    if(Item.checked==true) {
      FirstWeek=Item.name
      i=0 }
  }
 }
 if (FirstWeek==0) {
   FirstWeek=FirstDate;
 }
 StartFlag=0
 WeekCount=0
 for (var i=0; i < document.ShowDates.length; i++) {
   var Item = document.ShowDates.elements[i];
   if (Item.name.match(FirstWeek)){
     StartFlag=1
     Item.checked=true }
   else {
     Check2WeekItem(Item)   }
  }
}
function Check2WeekItem(Item) {
 if (StartFlag==1) {
    var MatchStr = "datesrch"
    if (Item.name.match(MatchStr)){
       if(Item.type=="checkbox") {
         WeekCount++;
         if (WeekCount==2) {
            if (Item.id=="") {
              Item.checked=true
            }
           WeekCount=0
         }
       }
    }
  }
}
