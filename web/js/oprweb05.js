//jsVersion  : V11.03.01
//========================================================================
// Program   : oprweb05.js
//
// Written   : 29.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in oprweb05 templates 
//========================================================================
//  Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-650)/2
  DFrameLink(linkurl,0,Left,650,500);
}
function Addschdl01(session) {
  SelectCode.template.value=2
  Left=(document.body.clientWidth-650)/2
  DFrameSubmit(SelectCode,0,Left,650,500)
}
function SessionMtce01(session) {
    location.href="oprweb05.pbl?reportno=02&template=001&opses003="+session
}
function OpenSess01(clinicid,indctday,startime,hospital,theatre) {
parent.location.href="oprweb05.pbl?reportno=03&template=001&opsem001="+clinicid+
"&opsem002="+indctday+"&opsem003="+startime+"&opsem007="+theatre+"&opsem019="+hospital
DFrameExit()
}
function DelSess01(clinicid,indctday,startime,hospital,theatre) {
parent.location.href="oprweb05.pbl?reportno=03&template=002&opsem001="+clinicid+
"&opsem002="+indctday+"&opsem003="+startime+"&opsem007="+theatre+"&opsem019="+hospital
DFrameExit()
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-525)/2 
  DFrameLink(linkurl,25,Left,620,600)   
}
function Addschdl02(session) {
  SelectMonth.template.value=2
  Left=(document.body.clientWidth-525)/2
  DFrameSubmit(SelectMonth,0,Left,525,600)
}
function selectMonth02(yearMonthValue) {
document.SelectMonth.vyearmth.value=yearMonthValue
document.SelectMonth.submit()
}
function Sessions02(session) {
    location.href="oprweb05.pbl?reportno=01&template=001&opsem001="+session
}
//========================================================================
//  Report 3
//========================================================================
function setFormactn03(type) {
document.OpenSession.updttype.value=type;
if (type=="A") { document.OpenSession.submit(); }
if (type=="D") {
   ans=confirm("Are you sure you want to Delete ?")
   if (ans) { document.OpenSession.submit() }
   }
}
function Schedule03(clinicid) {
  location.href="oprweb05.pbl?reportno=01&template=001&opsem001="+clinicid
self.close();
}
function UpdateCol03(SetColumn) {
for (var i=0; i < document.OpenSession.length; i++) {
  var Item = document.OpenSession.elements[i];
  var MatchStr = "date.." + SetColumn
  if (Item.name.match(MatchStr)){
    if (Item.id=="") {
       if (Item.checked==false) { Item.checked=true }
                           else { Item.checked=false } } }
  }
}
function UpdateClear03() {
for (var i=0; i < document.OpenSession.length; i++) {
  var Item = document.OpenSession.elements[i];
  var MatchStr = "date...."
  if (Item.id !="checked") {
    if (Item.name.match(MatchStr)){ Item.checked=false } }
  }
}
function Update4Weeks03() {
for (var i=document.OpenSession.length-1; i >= 0; i--) {
  var FirstWeek=0
  var Item = document.OpenSession.elements[i];
  var MatchStr = "date...."
  if (Item.name.match(MatchStr)){
    if(Item.checked==true) {
      FirstWeek=Item.name
      i=0 }
  }
 }
if (FirstWeek==0) { FirstWeek="date0101" }
StartFlag=0
WeekCount=0
for (var i=0; i < document.OpenSession.length; i++) {
  var Item = document.OpenSession.elements[i];
  if (Item.name.match(FirstWeek)){
     StartFlag=1
     Item.checked=true }
  else {
     Check4WeekItem(Item)   }
  }
}
function DeleteCol03(SetColumn) {
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date.." + SetColumn
    if (Item.name.match(MatchStr)){
      if (Item.id=="checked" && Item.disabled == false) {
         if (Item.checked==true) { Item.checked=false } } } }
}
function DeleteClear03() {
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date...."
    if (Item.id=="checked" && Item.disabled == false) {
      if (Item.name.match(MatchStr)){ Item.checked=false } } }
}
function Check4WeekItem(Item) {
 if (StartFlag==1) {
    var MatchStr = "date...."
    if (Item.name.match(MatchStr)){
       if(Item.type=="checkbox") {
         WeekCount++;
         if (WeekCount==4) {
           Item.checked=true
           WeekCount=0
         }
       }
    }
  }
}

function UpdateRow03(SetRow) {
  SetRow=""+SetRow
  if (SetRow.length!=2) {
    SetRow="0"+SetRow.substring(0)
  }
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date" + SetRow
    if (Item.name.match(MatchStr)){
      if (Item.id=="") {
         if (Item.checked==false) { Item.checked=true }
                             else { Item.checked=false } } }
  }
}
function DeleteRow03(SetRow) {
  SetRow=""+SetRow
  if (SetRow.length!=2) {
    SetRow="0"+SetRow.substring(0)
  }
  for (var i=0; i < document.OpenSession.length; i++) {
    var Item = document.OpenSession.elements[i];
    var MatchStr = "date" + SetRow
    if (Item.name.match(MatchStr)){
      if (Item.id=="checked" && Item.disabled == false) {
         if (Item.checked==true) { Item.checked=false } } }
  }
}
function CheckOvernight(startime,endtime,duration){
  CalcDura(startime,endtime,duration);
  var difference=duration.value
  if (difference<0){
    if(confirm("Session end time is before start time, Ok to go overnight")) {
       ReCalcDura(startime,endtime,duration);
       }
   else {
       duration.value=""
    }
 }
}
function ReCalcDura(startime,endtime,duration){
   if (startime.value=="") { return; }
   if (endtime.value=="") { return; }
   stime = new Date();
   etime = new Date();
   stime.setHours(startime.value.substr(0,2));
   stime.setMinutes(startime.value.substr(3,2));
   stime.setSeconds(startime.value.substr(6,2));
   etime.setHours(endtime.value.substr(0,2));
   etime.setMinutes(endtime.value.substr(3,2));
   etime.setSeconds(endtime.value.substr(6,2));
   difference =86400000-(stime.getTime()-etime.getTime());
   difference = Math.floor(difference / (1000 * 60));
   duration.value = difference;
}
function SessCookiePath(fieldName) {
  Path=GetContentCookie(fieldName);
  if (Path=="unknown") {
    top.content.location.href="../cgi-bin/oprweb04.pbl?reportno=7&template=1"
 }
  else {
    top.content.location.href=Path }
}


