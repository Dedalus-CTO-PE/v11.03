//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb01.js
//
//========================================================================
//  Report 1
//========================================================================
function CheckRef(Department,CheckBox){
   UpdateValue=0
  if (CheckBox.checked) {
     UpdateValue=1 }
   var serverURL   = "../cgi-bin/allweb01.pbl?reportno=1" +
                    "&aldep001=" + Department +
                    "&aldep002=" + UpdateValue
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    CheckBox.select();  }
}
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-460)/2;
  DFrameLink(linkurl,90,Left,460,235);
}
function ShowDetail21(linkurl) {
  Left=(document.body.clientWidth-400)/2;
  DFrameLink(linkurl,90,Left,400,150);
}
function AddDetails(aldep001) {
  linkurl="allweb01.pbl?reportno=01&template=002&aldep001=" + aldep001 
  Left=(document.body.clientWidth-460)/2
  DFrameLink(linkurl,90,Left,460,235)
}
function EditLookup01() {
  Message="Enter a Department";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.aldep001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,50,Left,700,650)
}
function EditLookup02() {
  Message="Enter a Service";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alser002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,300)
}
function EditLookup03() {
  Message="Enter a Problem";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.alprr002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,100,Left,800,500)
}
function EditLookup04() {
  Message="Enter a Diagnosis";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.aldia002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,100,Left,700,500)
}
function EditLookup05() {
  Message="Enter a Equipment";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alequ001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-750)/2
  DFrameSubmit(SelectCode,40,Left,750,550)
}
function EditLookup07() {
  SelectCode.template.value=3
  SelectCode.albil001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-500)/2
  DFrameSubmit(SelectCode,0,Left,500,300)
}
function EditLookup101() {
  Message="Enter a Reason";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.rdepcode.value=SelectCode.rdepcode.value
  SelectCode.alpdi002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,200)
}
function EditLookup104() {
  Message="Enter a Referring Department";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=1
  SelectCode.rdepcode.value=SelectCode.startkey.value
  SelectCode.submit();
}
function EditLookup18() {
  Message="Enter an Intervention";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alinc002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,100,Left,700,500)
}
function EditLookup19() {
  Message="Enter an Assessment Type";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alats001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,100,Left,700,400)
}
function GoToLookup02() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alser002.value=SelectCode.startkey.value
  SelectCode.submit(); 
}
function GoToLookup03() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alprr002.value=SelectCode.startkey.value
  SelectCode.submit(); 
}
function GoToLookup04() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.aldia002.value=SelectCode.startkey.value
  SelectCode.submit(); 
}
function GoToLookup05() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alequ001.value=SelectCode.startkey.value
  SelectCode.submit(); 
}
function GoToLookup10() {
  SelectCode.rdepcode.value=SelectCode.rdepcode.value
  SelectCode.alpdi002.value=SelectCode.startkey.value
  SelectCode.submit();
}
function GoToLookup18() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alinc002.value=SelectCode.startkey.value
  SelectCode.submit();
}
function GoToLookup19() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alats001.value=SelectCode.startkey.value
  SelectCode.submit(); 
}
function Services(dtcode) {
parent.location.href="allweb01.pbl?reportno=02&template=001&deptcode="+dtcode
DFrameExit()
}
function Problem(dtcode) {
parent.location.href="allweb01.pbl?reportno=03&template=001&deptcode="+dtcode
DFrameExit()
}
function Diagnosis(dtcode) {
parent.location.href="allweb01.pbl?reportno=04&template=001&deptcode="+dtcode
DFrameExit()
}
function Equipment(dtcode) {
parent.location.href="allweb01.pbl?reportno=05&template=001&deptcode="+dtcode
DFrameExit()
}
function Interventions(dtcode) {
parent.location.href="allweb01.pbl?reportno=18&template=001&deptcode="+dtcode
DFrameExit()
}
function Template(dtcode) {
parent.location.href="allweb01.pbl?reportno=06&template=001&deptcode="+dtcode
DFrameExit()
}
function Department(dtcode) {
parent.location.href="allweb01.pbl?reportno=01&template=001&deptcode="+dtcode
DFrameExit()
}
function Assessments(dtcode) {
parent.location.href="allweb01.pbl?reportno=19&template=001&deptcode="+dtcode
DFrameExit()
}
function Procedures(dtcode) {
parent.location.href="allweb01.pbl?reportno=22&template=001&deptcode="+dtcode
DFrameExit()
}

function EditLookup12() {
  Message="Enter a Case Team";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.teamcode.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,200)
}
function GoToLookup12() {
  SelectCode.teamcode.value=SelectCode.startkey.value
  SelectCode.submit();
}
function EditLookup13() {
  Message="Enter a Case Team Member";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.alctm002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(SelectCode,100,Left,600,400)
}
function GoToLookup13() {
  SelectCode.alctm002.value=SelectCode.startkey.value
  SelectCode.submit();
}
function TeamMembers(team) {
parent.location.href="allweb01.pbl?reportno=13&template=001&teamcode="+team
DFrameExit()
}
function Teams() {
  location.href="allweb01.pbl?reportno=12&template=001"
}
//========================================================================
// Report 15
//========================================================================
function AddFormactn15() {
  pagelength = parseInt(AddForm.allet005.value,10);
  bottommargin = parseInt(AddForm.allet003.value,10);
  topmargin = parseInt(AddForm.allet004.value,10);

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     AddForm.allet003.focus();
     return;
  }

  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     AddForm.allet004.focus();
     return;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         AddForm.allet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         AddForm.allet003.focus();
     }
     return;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         AddForm.allet004.focus();
     }
     else {
         AddForm.allet003.focus();
     }
     return;
  }
  if(document.AddForm.d_allet009.checked==true) {
    document.AddForm.allet009.value="0";
  } else {
    document.AddForm.allet009.value="1";
  }
  if (validateMandatory(AddForm)) {

     if (document.getElementById('allet005').value==0) {
       alert("Paper Length must be greater than 1 and less then 999");
       document.getElementById('allet005').value="";
       document.getElementById('allet005').focus();
       checkOtherMargins();
       return;
     }

     if (document.getElementById('allet004').value==0) {
       alert("Top Margin must be greater than 1 and less then 99");
       document.getElementById('allet004').value="";
       document.getElementById('allet004').focus();
       checkOtherMargins();
       return;
     }

     if (document.getElementById('allet003').value==0) {
       alert("Bottom Margin must be greater than 1 and less then 99");
       document.getElementById('allet003').value="";
       document.getElementById('allet003').focus();
       checkOtherMargins();
       return;
     }

     if (document.getElementById('allet006').value==0) {
       alert("Left Margin must be greater than 1 and less then 99");
       document.getElementById('allet006').value="";
       document.getElementById('allet006').focus();
       checkOtherMargins();
       return;
     }

     AddForm.submit();
  }
}

function updateFormactn15() {
  pagelength = parseInt(UpdateForm.allet005.value,10);
  bottommargin = parseInt(UpdateForm.allet003.value,10);
  topmargin = parseInt(UpdateForm.allet004.value,10);

  if (pagelength < bottommargin) {
     alert("Bottom Margin must be less than Page Length");
     UpdateForm.allet003.focus();
     return;
  }

  if (pagelength < topmargin) {
     alert("Top Margin must be less than Page Length");
     UpdateForm.allet004.focus();
     return;
  }
  if (pagelength < (topmargin+bottommargin)) {
     if  (topmargin > bottommargin) {
         alert("Top Margin is too big");
         UpdateForm.allet004.focus();
     }
     else {
         alert("Bottom Margin is too big");
         UpdateForm.allet003.focus();
     }
     return;
  }
  if (pagelength == (topmargin+bottommargin)) {
     alert("Invalid Top and Bottom Margin combination");
     if  (topmargin > bottommargin) {
         UpdateForm.allet004.focus();
     }
     else {
         UpdateForm.allet003.focus();
     }
     return;
  }
  if(document.UpdateForm.d_allet009.checked==true) {
    document.UpdateForm.allet009.value="0";
  } else {
    document.UpdateForm.allet009.value="1";
  }
  if (validateMandatory(UpdateForm)) {

     if (document.getElementById('allet005').value==0) {
       alert("Paper Length must be greater than 1 and less then 999");
       document.getElementById('allet005').value="";
       document.getElementById('allet005').focus();
       checkOtherMargins();
       return;
     }

     if (document.getElementById('allet004').value==0) {
       alert("Top Margin must be greater than 1 and less then 99");
       document.getElementById('allet004').value="";
       document.getElementById('allet004').focus();
       checkOtherMargins();
       return;
     }

     if (document.getElementById('allet003').value==0) {
       alert("Bottom Margin must be greater than 1 and less then 99");
       document.getElementById('allet003').value="";
       document.getElementById('allet003').focus();
       checkOtherMargins();
       return;
     }

     if (document.getElementById('allet006').value==0) {
       alert("Left Margin must be greater than 1 and less then 99");
       document.getElementById('allet006').value="";
       document.getElementById('allet006').focus();
       checkOtherMargins();
       return;
     }

     setFormactn('U');
  }
}
function AddCode() {
    SelectCode.template.value=2
    Left=(document.body.clientWidth-450)/2
    DFrameSubmit(SelectCode,0,Left,450,300)
}
function MedicationLink(almed001) {
  linkurl="allweb01.pbl?reportno=17&template=003&almed001=" + almed001
  Left=(document.body.clientWidth-700)/2
  DFrameLink(linkurl,0,Left,700,450)
}
function StartList() {
  location.href="allweb01.pbl?reportno=17&template=001"
}
function VinahMap(dtcode) {
parent.location.href="allweb01.pbl?reportno=20&template=001&deptcode="+dtcode
DFrameExit()
}
function EditLookup22() {
  Message="Enter a Procedure";
   if (isWhitespace(SelectCode.startkey.value)) {
         alert(Message);
         return;
   }
  SelectCode.template.value=3
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.aldia002.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-700)/2
  DFrameSubmit(SelectCode,100,Left,700,500)
}
function GoToLookup22() {
  SelectCode.deptcode.value=SelectCode.deptcode.value
  SelectCode.alpro002.value=SelectCode.startkey.value
  SelectCode.submit();
}
function checkOtherMargins() {
  if (document.getElementById('allet005').value==0) {
    document.getElementById('allet005').value=""; 
  }
  if (document.getElementById('allet004').value==0) {
    document.getElementById('allet004').value="";
  } 
  if (document.getElementById('allet003').value==0) {
    document.getElementById('allet003').value="";
  }
  if (document.getElementById('allet006').value==0) {
    document.getElementById('allet006').value="";
  }
}
