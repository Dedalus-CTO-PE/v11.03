//jsVersion  : V11.03.00
//========================================================================
function PatientSearch() {
  url= "patweb90.pbl?reportno=01&template=060" 
  if (top.menu.EmergencyFrameLink) {
    if (parent.menu.document.readyState=="complete") {
      top.menu.EmergencyFrameLink(url,0,0,1008,521)
    }
  } else {
    DFrameLink(url,0,0,1008,521);
  }
}
function PatientSearchWA() {
  SetCookie("PatientSearch2Cookie","1");
  url= "patweb90.pbl?reportno=01&template=060"
  if (top.menu.EmergencyFrameLink) {
    if (parent.menu.document.readyState=="complete") {
      top.menu.EmergencyFrameLink(url,0,0,1008,521)
    }
  } else {
    DFrameLink(url,0,0,1008,521);
  }
}
function PatientReturn() {

  detailsArray = [UpdateForm.emexp002,UpdateForm.emexp003,
                  UpdateForm.emexp004,UpdateForm.emexp005];
 
  validateUrMerge(8,
                  UpdateForm.emexp018,
                  UpdateForm.gname,
                  UpdateForm.selsex,
                  UpdateForm.emexp005,
                  UpdateForm.deceased,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.dummy,
                  UpdateForm.gname,
                  UpdateForm.sname);

  if(UpdateForm.deceased.value=="1"){
     alert("Patient Deceased");
     UpdateForm.emexp018.value="";
     UpdateForm.gname.value="";
     UpdateForm.selsex.value="";
     UpdateForm.emexp005.value="";
     UpdateForm.emexp005.value="";
     ToggleDetails(UpdateForm.emexp018,detailsArray);
     return false; 
  }

  checkExpectedPat(UpdateForm.emexp018.value);

  if(!CheckEmrVisit(UpdateForm.emexp018.value,UpdateForm.emvis001.value)) {
     UpdateForm.emexp018.value="";
     UpdateForm.gname.value="";
     UpdateForm.emexp002.value="";
     UpdateForm.emexp003.value="";
     UpdateForm.emexp004.selectedIndex=0;
     UpdateForm.selsex.value="";
     UpdateForm.emexp005.value="";
     UpdateForm.emexp005.value="";
     ToggleDetails(UpdateForm.emexp018,detailsArray);
     return;
   }

  UpdateForm.emexp002.value=UpdateForm.gname.value.replace(/,/g,"");
  UpdateForm.emexp003.value=UpdateForm.sname.value.replace(/,/g,"");
  dispsex();
  ToggleDetails(UpdateForm.emexp018,detailsArray);
  return true;
}

function PatientReturnWA() {
             validateUrMerge(8,
               UpdateForm.emexp018,
               UpdateForm.gname,
               UpdateForm.selsex,
               UpdateForm.emexp005,
               UpdateForm.deceased,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.dummy,
               UpdateForm.gname,
               UpdateForm.sname);
  if (UpdateForm.deceased.value=="1") {
    alert("Patient Deceased")
    UpdateForm.emexp002.value="";
    UpdateForm.emexp003.value="";
    UpdateForm.emexp004.value="";
    UpdateForm.d_emexp004.value="";
    UpdateForm.emexp018.value="";
    UpdateForm.gname.value="";
    UpdateForm.selsex.value="";
    UpdateForm.emexp005.value="";
    UpdateForm.emexp005.value="";
    return false; }
//
   checkExpectedPat(UpdateForm.emexp018.value)
//
   if(!CheckEmrVisit(UpdateForm.emexp018.value,UpdateForm.emvis001.value)) {
       UpdateForm.emexp018.value="";
       UpdateForm.gname.value="";
       UpdateForm.emexp002.value="";
       UpdateForm.emexp003.value="";
       UpdateForm.emexp004.value="";
       UpdateForm.d_emexp004.value="";
       UpdateForm.selsex.value="";
       UpdateForm.emexp005.value="";
       UpdateForm.emexp005.value="";
       return;
   }
//
  UpdateForm.emexp002.value=UpdateForm.gname.value.replace(/,/g,"")
  UpdateForm.emexp003.value=UpdateForm.sname.value.replace(/,/g,"")
  dispsexWA();
  if (!isWhitespace(document.UpdateForm.emexp002.value)) {
    document.UpdateForm.emvis001.focus();
  }
  return true;

}
function dispsex(){
 for (var i =0 ; i < document.UpdateForm.emexp004.length; i++) {
  if (trim(UpdateForm.emexp004.options[i].innerHTML)==
      trim(UpdateForm.selsex.value)) {
       UpdateForm.emexp004.selectedIndex=i } 
  }
}
function dispsexWA(){
  UpdateForm.emexp004.value=UpdateForm.selsex.value.substr(0,1);
  if (UpdateForm.selsex.value.substr(0,1)=="R") {
    UpdateForm.d_emexp004.value="Intersex"
    return;
  }
  if (UpdateForm.selsex.value.substr(0,1)=="U") {
    UpdateForm.d_emexp004.value="Unknown"
    return;
  }
  if (UpdateForm.selsex.value.substr(0,1)=="I") {
    UpdateForm.d_emexp004.value="Indeterminate"
    return;
  }
  if (UpdateForm.selsex.value.substr(0,1)=="M") {
    UpdateForm.d_emexp004.value="Male"
    return;
  }
  if (UpdateForm.selsex.value.substr(0,1)=="F") {
    UpdateForm.d_emexp004.value="Female"
    return;
  }
  UpdateForm.d_emexp004.value="";
}
function setFormactn() {
  if (validateMandatory(UpdateForm)) {
    document.UpdateForm.formactn.value="AE"
    document.UpdateForm.updttype.value="REGIS"
    document.UpdateForm.target="PopUpFrame";
    document.UpdateForm.submit()
    }
}
function validateLocation(SearchField,SearchName) {
  if (isWhitespace(SearchField.value)) {
      SearchName.value="";
      return;;
  }
  if(SearchField.type!="select-one") {
    SearchField.value=SearchField.value.toUpperCase()
  }
  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=2" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    SearchName.value=trim(ReturnValue[1]);
    SearchField.value=ReturnValue[0].substr(0,3);
  }
  else {
     document.UpdateForm.emvis006.focus();
     document.UpdateForm.emvis006.value="";
     document.UpdateForm.name_emvis006.value="";
  }

}
function UpdateVisit() {
  if (validateMandatory(UpdateForm)) {
     document.UpdateForm.formactn.value="N3"
     document.UpdateForm.updttype.value="REGIS"
     document.UpdateForm.urnumber.value=document.UpdateForm.emexp018.value;
     UpdateWin=window.open("","HideUpdateWindow",
     "width=10,height=10,top=1024,directories=no,location=no" +
     ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")
     document.UpdateForm.target="HideUpdateWindow";
     if (isWhitespace(document.UpdateForm.emvis006.value)){
       document.UpdateForm.emvis006.value="WR"; }
       document.UpdateForm.submit();
     }
}
function refreshTop() {
    if (parent.menu.document.readyState=="complete") {
      parent.menu.location.reload(); }
}
//-----------------------------------------------------------------
// Function to check for any visits for this ur on a date
//-----------------------------------------------------------------
function CheckEmrVisit(urnum,chkdat) {
  if (isWhitespace(urnum)) { 
     return true;
  }
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=17" +
                  "&valddate=" + chkdat.replace(/ /g,"+") +
                  "&valdurno=" + urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    if(!isWhitespace(ReturnValue[0])) {
      if(!confirm("Patient has already presented on.\n" +
                 "Date - \t" + ReturnValue[1] + "\n" +
                 "U/R - \t" + ReturnValue[0].replace(/ /g,"") + "\n" +
                 "Visit - \t" + ReturnValue[2].replace(/ /g,"") + "\n" +
                 "Select OK to continue with registration.\n" +
                 "Select Cancel to abort registration.")) {
         return false;
      }
    }
  }
  return true;
}
//-----------------------------------------------------------------
// Function to check for expected patients with the same name or ur
//-----------------------------------------------------------------
function checkExpectedPat(urnum) {
  if (isWhitespace(urnum)) return false;;
  var serverURL = "../cgi-bin/emrweb08.pbl?reportno=16" +
                  "&valdcode="+urnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

    if(!isWhitespace(ReturnValue[0])) {
      if(confirm("Possible Expected Patient Match.\n" +
                 "U/R - \t\t" + ReturnValue[1].replace(/ /g,"") + "\n" +
                 "Surname - \t" + ReturnValue[2] + "\n" +
                 "Given Name - \t" + ReturnValue[3] + "\n" +
                 "Select OK to register U/R - " + urnum.replace(/ /g,"")  +
                 " using Expected Patient details \n" +
                 "Select Cancel to continue with this registration.")) {
         // Unique no
         top.content.UpdateForm.emexp001.value=ReturnValue[0]
         // Location
         top.content.UpdateForm.emvis006.value=ReturnValue[4]
         top.content.UpdateForm.emvis006.focus();
         top.content.UpdateForm.emvis006.blur();
         // Attendance source
         for (var i=0; i < top.content.UpdateForm.emvis061.length; i++) {
          if (top.content.UpdateForm.emvis061.options[i].value==ReturnValue[5]){
              top.content.UpdateForm.emvis061.selectedIndex=i;
          }
         }
         // Amb Case no
         if(!isWhitespace(ReturnValue[6])) {
           top.content.UpdateForm.emvis034.value=ReturnValue[6]
         }
         // Flag to default presenting complaint
         top.content.UpdateForm.pcomdeft.value="1";
         if(!isWhitespace(ReturnValue[7])) {
           top.content.UpdateForm.emexp007.value=ReturnValue[7]
         }
         if(!isWhitespace(ReturnValue[8])) {
           top.content.UpdateForm.emexp008.value=ReturnValue[8]
         }
         if(!isWhitespace(ReturnValue[9])) {
           top.content.UpdateForm.emexp009.value=ReturnValue[9]
         }
         if(!isWhitespace(ReturnValue[10])) {
           top.content.UpdateForm.emexp010.value=ReturnValue[10]
         }
         if(!isWhitespace(ReturnValue[11])) {
           top.content.UpdateForm.emexp011.value=ReturnValue[11]
         }
         if(!isWhitespace(ReturnValue[12])) {
           top.content.UpdateForm.emexp012.value=ReturnValue[12]
         }
         if(!isWhitespace(ReturnValue[13])) {
           top.content.UpdateForm.emexp013.value=ReturnValue[13]
         }
         return true;
      }
    }
  }
  return false;
}
