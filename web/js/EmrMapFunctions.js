//jsVersion  : V11.03.00
//
//
//
whichEl = null;
DropEl = null;
var ReturnValue = new Object();
function grabEl() {        
 whichEl = event.srcElement;
 while (whichEl.id.indexOf("Patient") == -1) {
   whichEl = whichEl.parentElement;
   if (whichEl == null) { return }        
   }
 if (whichEl != activeEl) {
   whichEl.style.zIndex = activeEl.style.zIndex + 1;
   activeEl = whichEl;        
   }
 for(var i = 0; i < obj.locations.length; i++) {
   if ( whichEl.offsetTop >= obj.locations[i][3] ) {
    if ( whichEl.offsetTop <= obj.locations[i][5] ) {
     if ( whichEl.offsetLeft >= obj.locations[i][2] ) {
      if ( whichEl.offsetLeft <= obj.locations[i][4] ) {
       originalLocId = i ;
      }}}}
  }
 originalLeft = whichEl.offsetLeft;
 originalTop  = whichEl.offsetTop ;
 whichEl.style.pixelLeft = whichEl.offsetLeft;
 whichEl.style.pixelTop = whichEl.offsetTop;
 currentX = (event.clientX + document.body.scrollLeft);
 currentY = (event.clientY + document.body.scrollTop);
}
function moveEl() { 
  if (whichEl == null) { return };
  newX = (event.clientX + document.body.scrollLeft);
  newY = (event.clientY + document.body.scrollTop);
  distanceX = (newX - currentX);
  distanceY = (newY - currentY);
  currentX = newX;
  currentY = newY;
  whichEl.style.pixelLeft += distanceX;
  whichEl.style.pixelTop += distanceY;
  event.returnValue = false;
}    
function checkEl() {
    if (whichEl!=null) { return false }    
}
function dropEl() {        
  dropOk = 0;
  if (whichEl == null) { return };
  for(var i = 0; i < obj.locations.length; i++) {
   if ( whichEl.style.pixelTop >= obj.locations[i][3] ) {
    if ( whichEl.style.pixelLeft >= obj.locations[i][2] ) {
     if ( whichEl.style.pixelTop <= obj.locations[i][5] ) {
      if ( whichEl.style.pixelLeft <= obj.locations[i][4] ) {
       if  ( i != originalLocId ) {
         NewLocation=obj.locations[i][1];
         whichEl.style.pixelTop = obj.locations[i][7];
         whichEl.style.pixelLeft = obj.locations[i][6];
         obj.locations[i][7] += 25;
         obj.locations[originalLocId][7] -= 25;
         dropOk=1;
        }}}}}}
  if (dropOk==1) {
    if (NewLocation=="OTH") {
      PatientNoArray = whichEl.id.split("-");
      PatientNo = PatientNoArray[1];
      otherLocation(obj.patients[PatientNo][4],NewLocation,
          document.clock.username.value,document.clock.password.value); } 
    else {
      test=confirm("New Location is " + NewLocation) 
      if (test) {
        PatientNoArray = whichEl.id.split("-");
        PatientNo = PatientNoArray[1];
        updateLocation(obj.patients[PatientNo][4],NewLocation,
          document.clock.username.value,document.clock.password.value); }
      else {
        whichEl.style.pixelTop = originalTop;
        whichEl.style.pixelLeft = originalLeft; } } }
    if ( dropOk == 0 ) {
      whichEl.style.pixelTop = originalTop;
      whichEl.style.pixelLeft = originalLeft;
  }
  DropEl = whichEl;
  whichEl = null;    
}    
function otherLocation(admissno,locacode,username,password) {
  UpdateLocation.action='emrweb01.pbl'
  UpdateLocation.reportno.value='3'
  UpdateLocation.template.value='1'
  UpdateLocation.nextpage.value='1'
  UpdateLocation.admissno.value=admissno
  UpdateLocation.username.value=username
  UpdateLocation.password.value=password
  UpdateLocation.updateky.value=obj.patients[PatientNo][15]
  OtherLocation.style.display="";
}

function cursEl() {
    if (event.srcElement.id.indexOf("Patient") != -1) {
        event.srcElement.style.cursor = "move" ;
    }
}
function dblclickEl() {
 ClickEl = event.srcElement;
 while (ClickEl.id.indexOf("Patient") == -1) {
   ClickEl = ClickEl.parentElement;
   if (ClickEl == null) { return }        
   }
  PatientNoArray = ClickEl.id.split("-");
  var url = "emrweb02.pbl?" +
            "reportno=1&template=100" +
            "&urnumber=" + obj.patients[PatientNo][3] +
            "&admissno=" + obj.patients[PatientNo][4]
  openWin=open(url,"SelectPatient", 
  "width=700,height=500,scrollbars=yes,menubar=no,toolbar=no,top=1,left=1");
}
function clickEl() {
 ClickEl = event.srcElement;
 while (ClickEl.id.indexOf("Patient") == -1) {
   ClickEl = ClickEl.parentElement;
   if (ClickEl == null) { return }        
   }
        PatientNoArray = ClickEl.id.split("-");
        PatientNo = PatientNoArray[1];
        ShowPatientDetails(PatientNo);
}
function updateLocation(admissno,locacode,username,password) {
  var linkUrl="emrweb01.pbl?reportno=3&nextpage=2&admissno=" + admissno +
              "&locacode="+ locacode + "&template=1&updttype=MOVEL&username=" +
              username + "&password=" + password + 
              "&updateky=" + obj.patients[PatientNo][15]
  UpdateWin=window.open(linkUrl,"HideUpdateWindow",
  "width=10,height=10,top=1024,directories=no,location=no" +
  ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
  dummy=0
  while (UpdateWin.closed==false) { dummy+=1 }
    test=confirm("Update Details Now") 
    if (test){
      var url="emrweb02.pbl?reportno=1&template=006" +
                "&urnumber=" + obj.patients[PatientNo][3] +
                "&admissno=" + obj.patients[PatientNo][4]
      Left=(document.body.clientWidth-470)/2
      DFrameLink(url,0,Left,470,360) }
    else { 
      location.reload() }
}

    document.onclick = clickEl;
    document.ondblclick = dblclickEl;
    document.onmousedown = grabEl;
    document.onmousemove = moveEl;
    document.onmouseover = cursEl;
    document.onselectstart = checkEl;
//    document.onmouseout = dropEl;
    document.onmouseup = dropEl;
    activeEl = ImageLocation;

