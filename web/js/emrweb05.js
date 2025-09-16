//jsVersion  : V11.03.00
//========================================================================
//   Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-550)/2;
  DFrameLink(linkurl,0,Left,550,450);
}
function SubmitForm01() {
  UpdateWin=window.open("","HideUpdateWindow",
  "width=10,height=10,top=1024,directories=no,location=no" +
  ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
  document.AddForm.target="HideUpdateWindow";
  document.AddForm.submit();
}
function EditLookup01() {
  SelectCode.template.value=3
  SelectCode.emsit001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-550)/2
  DFrameSubmit(SelectCode,0,Left,550,450)
}
function setFormactn(type) {                                                  
document.UpdateForm.updttype.value=type;                                       
if (type=="U") { document.UpdateForm.submit(); }                               
if (type=="D") {                                                               
   ans=confirm("Are you sure you want to Delete ?")                            
   if (ans) { document.UpdateForm.submit() }                                   
   }                                                                           
if (type=="C") {                                                               
   DFrameCloseRefresh();                                                       
   }                                          
}
//========================================================================
//   Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,230)
}
function EditLookup02() {
  SelectCode.template.value=3
  SelectCode.emupt001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,230)
}
//========================================================================
//   Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,450,230)
}
function EditLookup03() {
  SelectCode.template.value=3
  SelectCode.emdoc001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,230)
}
//========================================================================
//   Report 4
//========================================================================
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkurl,0,Left,395,290)
}
function EditLookup04() {
  SelectCode.template.value=3
  NewSK=" ";
  if(SelectCode.startkey.value!="") {
    LenSK=SelectCode.startkey.value.length
    switch(LenSK) {
      case 1: NewSK="    " + SelectCode.startkey.value;break;
      case 2: NewSK="   " + SelectCode.startkey.value;break;
      case 3: NewSK="  " + SelectCode.startkey.value;break;
      case 4: NewSK=" " + SelectCode.startkey.value;break;
      case 5: NewSK=SelectCode.startkey.value;break;
    }
  }
  SelectCode.startkey.value=NewSK
  SelectCode.emman001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-495)/2
  DFrameSubmit(SelectCode,0,Left,495,290)
}
function SetStartKey04() {
  var NewSK="    0";
  if(SelectCode.startkey.value!="") {
    LenSK=SelectCode.startkey.value.length
    switch(LenSK) {
      case 1: NewSK="    " + SelectCode.startkey.value;break;
      case 2: NewSK="   " + SelectCode.startkey.value;break;
      case 3: NewSK="  " + SelectCode.startkey.value;break;
      case 4: NewSK=" " + SelectCode.startkey.value;break;
      case 5: NewSK=SelectCode.startkey.value;break;
    }
  }
  SelectCode.startkey.value=NewSK
  document.SelectCode.submit()
}
//========================================================================
//   Report 5
//========================================================================
function ShowDetail05(linkurl) {
  Left=(document.body.clientWidth-450)/2
//  DFrameLink(linkurl,0,Left,450,280)
  DFrameLink(linkurl,0,Left,550,320)
}
function EditLookup05() {
  SelectCode.template.value=3
  SelectCode.emloc001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
//  DFrameSubmit(SelectCode,0,Left,450,230)
  DFrameSubmit(SelectCode,0,Left,550,320)
}

//========================================================================
//   Report 6
//========================================================================
function ShowDetail06(linkurl) {
  Left=(document.body.clientWidth-650)/2
  DFrameLink(linkurl,0,Left,880,400)
}
function EditLookup06() {
  SelectCode.template.value=3
  SelectCode.emrpr001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-900)/2
  DFrameSubmit(SelectCode,0,Left,900,400)
}
//========================================================================
//   Report 9
//========================================================================
function ShowDetail09(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,0,Left,400,200)
}
function EditLookup09() {
  SelectCode.template.value=3
  SelectCode.emreg001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(SelectCode,0,Left,400,200)
}
