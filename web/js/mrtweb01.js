//jsVersion  : V11.03.01
//========================================================================
// Program   : mrtweb01.js
//
// Written   : 28.02.2000 Pat Dirito
//
// Function  : Standard Functions Used in mrtweb01 templates 
//
//========================================================================
//  Report 1
//========================================================================
function ShowDetail01(linkurl) {
  Left=(document.body.clientWidth-550)/2
  DFrameLink(linkurl,0,Left,550,450)
}
function EditLookup01() {
  if (isWhitespace(SelectCode.startkey.value)) {
    alert("Must enter Location first.");
    SelectCode.startkey.focus();
    return;
  }
  SelectCode.template.value=3
  if (SelectCode.ibcnmhos.value=="1") {
     SelectCode.mrtlc009.value=SelectCode.filthosp.value
  } else {
     SelectCode.mrtlc009.value="   "
  }
  SelectCode.mrtlc001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-550)/2
  DFrameSubmit(SelectCode,0,Left,550,450)
}
//========================================================================
//  Report 2
//========================================================================
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-380)/2
  DFrameLink(linkurl,0,Left,380,255)
}
function EditLookup02() {
  SelectCode.template.value=3
  SelectCode.mrtmv001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-380)/2
  DFrameSubmit(SelectCode,0,Left,380,255)
}
//========================================================================
//  Report 3
//========================================================================
function ShowDetail03(linkurl) {
  Left=(document.body.clientWidth-360)/2
  DFrameLink(linkurl,0,Left,360,450)
}
function EditID03() {
  SelectCode.template.value=3
  SelectCode.mrtst001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-360)/2
  DFrameSubmit(SelectCode,0,Left,360,450)
}
//========================================================================
//  Report 4
//========================================================================
function EditLookup04() {
  SelectCode.template.value=3
  SelectCode.baycd001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-350)/2
  DFrameSubmit(SelectCode,0,Left,350,200)
}
function ShowDetail04(linkurl) {
  Left=(document.body.clientWidth-350)/2
  DFrameLink(linkurl,0,Left,350,200)
}
function URdigits04(type) {
document.SpecForm.updttype.value=type;
if (type=="A") { document.SpecForm.submit(); }
if (type=="D") {
 if(document.SpecForm.baycd002.value==""){
    alert("No digits selected to delete.")
    return;}
 else {
   document.SpecForm.submit() }
 }
}

function AddReport(urnumber,home,doc,vol) {
  SelectCode.reportno.value=5
  SelectCode.template.value=2
  SelectCode.urnumber.value=urnumber
  SelectCode.mrtms001.value=home
  SelectCode.mrtms002.value=doc
  SelectCode.mrtms003.value=vol
  Left=(document.body.clientWidth-650)/2
  DFrameSubmit(SelectCode,0,Left,650,380)
}
//========================================================================
//  Report 9
//========================================================================
var ItemCnt=0;
OutputArray = new Array();  // Create Array to Store Rows of Table
OldArray = new Array();  // Create Array to Store Rows of Table
var c=0
function OutputTable(ReturnCode) {
  if (isWhitespace(AddForm.mrtme003.value)) {
    c=c+1
    if (c==1) {
    alert("Destination is required !");
    c=c+1
    }
    AddForm.mrtme003.focus();
    AddForm.URNumber.value="";
    return;
  }  
  if (ItemCnt>=99) {
    alert("Page Limit Reached");
    return;
  }
  if (isWhitespace(ReturnCode.value)) return;;
  var MrKeyRecord="";
  var PatientName="";
  var CurrentHosp="";
  var CurrentLoct="";
  var LastMovDate="";
  var Description="";
//
  var patname=new Object();
  var Merged=new Object();
  var Mergedur=new Object();
  var mrrecord=new Object();
  var mrtscanur=new Object();
  mrtscanur.value=ReturnCode.value.substring(0,8);
  validateCodeMerge(28,mrtscanur,patname,Merged,Mergedur,mrrecord);
  if (patname.value!="") {
    if (Merged.value=="1") {
      alert("Warning : This U/R Number is merged with " + Mergedur.value);
      ReturnCode.value="";
      return
    }
  }
//
  
  var Flag=0;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.mrtme020.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme017.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    ItemCnt++
//
//  Check for an already entered U/R
//
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
      enterur=ReturnValue[0].substring(0,8);
      checkey=document.AddForm.elements[i].value.substring(0,8);
      if (enterur == checkey) {
        alert("Warning: U/R already entered!"); 
        document.AddForm.URNumber.value="";
        document.AddForm.URNumber.focus();
        break; } } }
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();     
    mrtkey.value=ReturnValue[0].replace(/\+/g," "); 
    filreqed=ReturnValue[18];   
    
    AddOutputArray(ReturnValue[0],ReturnValue[1],ReturnValue[2],
                   ReturnValue[3],ReturnValue[4],ReturnValue[5])
    OutputDivision()
    AlertErrors(ReturnValue[6],ReturnValue[8],ReturnValue[9],ReturnValue[10],
                ReturnValue[11],ReturnValue[12],ReturnValue[13],ReturnValue[14],
                ReturnValue[15],ReturnValue[16],ReturnValue[0],ReturnValue[17],
                ReturnValue[20],ReturnValue[21],ReturnValue[22],ReturnValue[23],
                ReturnValue[24],ReturnValue[25],ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
    ReturnCode.value="";
    ReturnCode.focus();
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
  }
  else {
    ReturnCode.focus();
    ReturnCode.value="";
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
    ReturnCode.select();  }
}
function OutputTableKids(ReturnCode) {
  if (isWhitespace(AddForm.mrtme003.value)) {
    c=c+1
    if (c==1) {
    alert("Destination is required !");
    c=c+1
    }
    AddForm.mrtme003.focus();
    AddForm.URNumber.value="";
    return;
  }  
  if (ItemCnt>=99) {
    alert("Page Limit Reached");
    return;
  }
  if (isWhitespace(ReturnCode.value)) return;;
  var MrKeyRecord="";
  var PatientName="";
  var CurrentHosp="";
  var CurrentLoct="";
  var LastMovDate="";
  var Description="";
  var Flag=0;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.mrtme020.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme017.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    ItemCnt++
//
//  Check for an already entered U/R
//
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
      enterur=ReturnValue[0].substring(0,8);
      checkey=document.AddForm.elements[i].value.substring(0,8);
      if (enterur == checkey) {
        alert("Warning: U/R already entered!"); 
        document.AddForm.URNumber.value="";
        document.AddForm.URNumber.focus();
        break; } } }
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();     
    mrtkey.value=ReturnValue[0].replace(/\+/g," "); 
    filreqed=ReturnValue[18];   
    AddOutputArray(ReturnValue[0],ReturnValue[1],ReturnValue[2],
                   ReturnValue[3],ReturnValue[4],ReturnValue[5])
    OutputDivision()
    AlertErrors(ReturnValue[6],ReturnValue[8],ReturnValue[9],ReturnValue[10],
                ReturnValue[11],ReturnValue[12],ReturnValue[13],ReturnValue[14],
                ReturnValue[15],ReturnValue[16],ReturnValue[0],ReturnValue[17],
                ReturnValue[20],ReturnValue[21],ReturnValue[22],ReturnValue[23],
                ReturnValue[24],ReturnValue[25],ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
    ReturnCode.value="";
    ReturnCode.focus();
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
  }
  else {
    ReturnCode.focus();
    ReturnCode.value="";
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
    ReturnCode.select();  }
}
function OutputTableHom(ReturnCode) { 
    if (isWhitespace(AddForm.mrtme003.value)) {
    c=c+1
    if (c==1) {
    alert("Destination is required !");
    c=c+1
    }
    AddForm.mrtme003.focus();
    AddForm.URNumber.value="";
    return;
  }  
  if (ItemCnt>=99) {
    alert("Page Limit Reached");
    return;
  }
  if (isWhitespace(ReturnCode.value)) return;;
  var MrKeyRecord="";
  var PatientName="";
  var CurrentHosp="";
  var CurrentLoct="";
  var LastMovDate="";
  var Description="";
  var Flag=0;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.mrtme020.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme017.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    ItemCnt++
//
//  Check for an already entered U/R
//
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
      enterur=ReturnValue[0].substring(0,8);
      checkey=document.AddForm.elements[i].value.substring(0,8);
      if (enterur == checkey) {
        alert("Warning: U/R already entered!"); 
        document.AddForm.URNumber.value="";
        document.AddForm.URNumber.focus();
        break; } } }
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();     
    mrtkey.value=ReturnValue[0].replace(/\+/g," "); 
    filreqed=ReturnValue[18];   
    OutputArrayHom(ReturnValue[0],ReturnValue[1],ReturnValue[2],
                   ReturnValue[3],ReturnValue[4],ReturnValue[5],ReturnValue[19])
    OutputDivisionHom()
    AlertErrors(ReturnValue[6],ReturnValue[8],ReturnValue[9],ReturnValue[10],
                ReturnValue[11],ReturnValue[12],ReturnValue[13],ReturnValue[14],
                ReturnValue[15],ReturnValue[16],ReturnValue[0],ReturnValue[17],
                ReturnValue[20],ReturnValue[21],ReturnValue[22],ReturnValue[23],
                ReturnValue[24],ReturnValue[25],ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
    ReturnCode.value="";
    ReturnCode.focus();
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
  }
  else {
    ReturnCode.focus();
    ReturnCode.value="";
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
    ReturnCode.select();  }
}
function OutputTableHomKids(ReturnCode) {
  if (isWhitespace(AddForm.mrtme003.value)) {
    c=c+1
    if (c==1) {
    alert("Destination is required !");
    c=c+1
    }
    AddForm.mrtme003.focus();
    AddForm.URNumber.value="";
    return;
  }  
  if (ItemCnt>=99) {
    alert("Page Limit Reached");
    return;
  }
  if (isWhitespace(ReturnCode.value)) return;;
  var MrKeyRecord="";
  var PatientName="";
  var CurrentHosp="";
  var CurrentLoct="";
  var LastMovDate="";
  var Description="";
  var Flag=0;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + AddForm.mrtme011.value.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    ItemCnt++
//
//  Check for an already entered U/R
//
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/mrkeyarr/)) {
      enterur=ReturnValue[0].substring(0,8);
      checkey=document.AddForm.elements[i].value.substring(0,8);
      if (enterur == checkey) {
        alert("Warning: U/R already entered!"); 
        document.AddForm.URNumber.value="";
        document.AddForm.URNumber.focus();
        break; } } }
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();     
    mrtkey.value=ReturnValue[0].replace(/\+/g," "); 
    filreqed=ReturnValue[18];   
    OutputArrayHomKids(ReturnValue[0],ReturnValue[1],ReturnValue[2],
                   ReturnValue[3],ReturnValue[4],ReturnValue[5],ReturnValue[19])
    OutputDivisionHom()
    AlertErrorsKids(ReturnValue[6],ReturnValue[8],ReturnValue[9],
                    ReturnValue[10],ReturnValue[11],ReturnValue[12],
                    ReturnValue[13],ReturnValue[14],ReturnValue[15],
                    ReturnValue[16],ReturnValue[0],ReturnValue[17],
                    ReturnValue[20],ReturnValue[21],ReturnValue[22],
                    ReturnValue[23],ReturnValue[24],ReturnValue[25],
                    ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
    ReturnCode.value="";
    ReturnCode.focus();
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
  }
  else {
    ReturnCode.focus();
    ReturnCode.value="";
    if (!isWhitespace(document.AddForm.mrtme011.value)){
      document.AddForm.mrtme011.value=""; }
    ReturnCode.select();  }
}
function AlertErrors(Alert,Incp,Merg,Mergur,Move,Mdate,RFlag,disdate,disdest,
                     pdtdest,medkey,visitno,ReqstDate,ReqstTime,ReqstLoc,
                     ReqstLocD,Requestor,ReqstReas,ReqstReasD) {
  if (Alert=="1"){
    if (document.AddForm.mrcnwnhl.value==1) {
      alert("Warning: Moving record to a home location other than its own");
    }
  }
  if (Incp=="1") {
    if (document.AddForm.ignorcod.checked != true) {
 // Note this Error will only display if Record is moving to or from an 
 // internal location. Following remote script checks for an internal movement!
      medkey=medkey.replace(/\+/g," ");
      var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=3" +
                  "&valdcode=" + medkey.replace(/ /g,"+") +
                  "&desthosp=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme003.value.replace(/ /g,"+")
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        moveflag=ReturnValue[0];
//
        if(ReturnValue[3] != undefined ) { // Only returned by valdtype=3 if NZ
          disdate=ReturnValue[3];
        }
//
        if ((moveflag >= "1") && (moveflag <= "3")) { 
          if (!isWhitespace(disdate)) { 
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno + "\nDisch Date= " + disdate +
                  "\nDisch Dest= " + disdest +
                  "\nPost Disch Status= " + pdtdest); }
          else {
          // This must be a long term admission as no discharge info found! 
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno);
          }
        }
      }
    }
  }
//  if (Merg=="1") {
//    alert("Warning : This U/R Number is merged with " + Mergur);     
//  }
//  if (Move=="1") {
//    alert("Warning : Movement date is before last movement date " +
//          Mdate + "\nAll movements after the entered date will be " +
//          "be removed!");
//  }
  if (RFlag=="1") {
    alert("Warning : Unfilled requests exist for this record!\n" +
          "Next Request Due= " + ReqstDate + "@" + ReqstTime +
          "\nRequest Location= " + trim(ReqstLoc) + " - " + ReqstLocD +
          "\nRequestor= " + Requestor +
          "\nMovement Reason= " + trim(ReqstReas) + " - " + ReqstReasD);
  }
}
function AlertErrorsKids(Alert,Incp,Merg,Mergur,Move,Mdate,RFlag,disdate,
                         disdest,pdtdest,medkey,visitno,ReqstDate,ReqstTime,
                         ReqstLoc,ReqstLocD,Requestor,ReqstReas,ReqstReasD) {
                     
  if (Incp=="1") {
    if (document.AddForm.ignorcod.checked != true) {
 // Note this Error will only display if Record is moving to or from an 
 // internal location. Following remote script checks for an internal movement!
      medkey=medkey.replace(/\+/g," ");
      var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=2" +
                  "&valdcode=" + medkey.replace(/ /g,"+") +
                  "&desthosp=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme003.value.replace(/ /g,"+")
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        moveflag=ReturnValue[0];
        if ((moveflag >= "1") && (moveflag <= "3")) { 
          if (!isWhitespace(disdate)) { 
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno + "\nDisch Date= " + disdate +
                  "\nDisch Dest= " + disdest +
                  "\nPost Disch Status= " + pdtdest); }
          else {
          // This must be a long term admission as no discharge info found! 
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno);
          }
        }
      }
    }
  }
//  if (Merg=="1") {
//    alert("Warning : This U/R Number is merged with " + Mergur);     
//  }
//  if (Move=="1") {
//    alert("Warning : Movement date is before last movement date " +
//          Mdate + "\nAll movements after the entered date will be " +
//          "be removed!");
//  }
  if (RFlag=="1") {
    alert("Warning : Unfilled requests exist for this record!\n" +
          "Next Request Due= " + ReqstDate + "@" + ReqstTime +
          "\nRequest Location= " + trim(ReqstLoc) + " - " + ReqstLocD +
          "\nRequestor= " + Requestor +
          "\nMovement Reason= " + trim(ReqstReas) + " - " + ReqstReasD);
  }
}
function OutputArrayHom(MKey,Name,Locn,Date,Desc,Vols,HomLoc) {

  var dropList="";  
//  Vols=Vols.substr(1,100);
  VolList=Vols.split(",");
//
// Get Highest Volume Number
//
  var savol=0;
  for (i=VolList.length-2;i>=0;i--) {
    if (parseInt(VolList[i]) > savol) {
      savol=VolList[i];    // Set Highest Volume No.
    }
  }
 
  for (i=VolList.length-2;i>=0;i--) {
    a=savol;
    b=VolList[i];
    justifyRight(a);
    justifyRight(b); 
    if (trim(a) == trim(b)) {
      test="<option value='" + VolList[i] +
           "' selected>" + VolList[i] + "</option>"
    }
    else {
      test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
    }
    dropList=dropList + test
  }
  urnum=MKey.replace(/\+/g," ").substr(0,8);
  OutputArray[OutputArray.length] = "<tr>" +
  "<td><img src=../images/DeleteIcon.gif class=Icon " +
  " onclick=RemoveRecord('" +  OutputArray.length + "');>" +
  MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
  "<td align=center><select name=volumenu onChange=\"VolNumHom(this.value,'" +
  OutputArray.length + "','" + urnum + "');\">" +
  "<option value='99'>All</option>" +
      dropList + "</select></td>" +
      "<td>" + Name + "</td>" +
      "<td>" + HomLoc + "</td>" +
      "<td>" + Locn + "</td>" +
      "<td>" + Date + "</td>" +
      "<td>" + Desc + "&nbsp;</td>" +
      "<input type=hidden name=mrkeyarr value='" +
      MKey + "'></tr>"
}
function OutputArrayHomKids(MKey,Name,Locn,Date,Desc,Vols,HomLoc) {
  var dropList="";
//  Vols=Vols.substr(1,100);
  VolList=Vols.split(",");
//
// Get Highest Volume Number
//
  var savol=0;
  for (i=VolList.length-2;i>=0;i--) {
    if (parseInt(VolList[i]) > savol) {
      savol=VolList[i];    // Set Highest Volume No.
    }
  }

  for (i=VolList.length-2;i>=0;i--) {
    a=savol;
    b=VolList[i] ;
    justifyRight(a);
    justifyRight(b);
    if (trim(a) == trim(b)) {
      test="<option value='" + VolList[i] +
           "' selected>" + VolList[i] + "</option>"
    }
    else {
      test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
    }
    dropList=dropList + test
  }
  urnum=MKey.replace(/\+/g," ").substr(0,8);
  OutputArray[OutputArray.length] = "<tr>" +
  "<td><img src=../images/DeleteIcon.gif class=Icon " +
  " onclick=RemoveRecord('" +  OutputArray.length + "');>" +
  MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
  "<td align=center><select name=volumenu onChange=\"VolNumHomKids(" +
  "this.value,'" +
  OutputArray.length + "','" + urnum + "');\">" +
  "<option value='99'>All</option>" +
      dropList + "</select></td>" +
      "<td>" + Name + "</td>" +
      "<td>" + HomLoc + "</td>" +
      "<td>" + Locn + "</td>" +
      "<td>" + Date + "</td>" +
      "<td>" + Desc + "&nbsp;</td>" +
      "<input type=hidden name=mrkeyarr value='" +
      MKey + "'></tr>"
}
function AddOutputArray(MKey,Name,Locn,Date,Desc,Vols) {
  var dropList="";
  //Vols=Vols.substr(1,100);
  VolList=Vols.split(",");
  
  // Get Highest Volume Number
  var savol=0;
  for (i=VolList.length-2;i>=0;i--) {
    if (parseInt(VolList[i]) > savol) {
      savol=VolList[i];    // Set Highest Volume No.
    }
  }

  if(document.AddForm.fullflag!=undefined){
    j=MKey.replace(/\+/g," ").substr(18,2);
    savol=j;
  }

  for (i=VolList.length-2;i>=0;i--) {
    a=savol;
    b=VolList[i] ;
    justifyRight(a);
    justifyRight(b);
    if (trim(a) == trim(b)) {
      test="<option value='" + VolList[i] +
           "' selected>" + VolList[i] + "</option>"
    }
    else {
      test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
    }
    dropList=dropList + test
  }
  urnum=MKey.replace(/\+/g," ").substr(0,8);
  OutputArray[OutputArray.length] = "<tr>" +
  "<td><img src=../images/DeleteIcon.gif class=Icon " +
  " onclick=RemoveRecord('" +  OutputArray.length + "');>" +
  MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
  "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
  OutputArray.length + "','" + urnum + "');\">" +
  "<option value='99'>All</option>" +
      dropList + "</select></td>" +
      "<td>" + Name + "</td>" +
      "<td>" + Locn + "</td>" +
      "<td>" + Date + "</td>" +
      "<td>" + Desc + "&nbsp;</td>" +
      "<input type=hidden name=mrkeyarr value='" +
      MKey + "'></tr>"
}
function AddOutputArrayReq(MKey,Name,Locn,Date,Desc,Vols,Req,ReqClas) {
  var dropList="";
  //Vols=Vols.substr(1,100);
  VolList=Vols.split(",");
      
  // Get Highest Volume Number
  var savol=0;
  for (i=VolList.length-2;i>=0;i--) {
    if (parseInt(VolList[i]) > savol) {
      savol=VolList[i];    // Set Highest Volume No.
    }
  }

  if(document.AddForm.fullflag!=undefined){
    j=MKey.replace(/\+/g," ").substr(18,2);
    savol=j;
  }

  for (i=VolList.length-2;i>=0;i--) {
    a=savol;
    b=VolList[i] ;
    justifyRight(a);
    justifyRight(b);
    if (trim(a) == trim(b)) {
      test="<option value='" + VolList[i] +
           "' selected>" + VolList[i] + "</option>"
    }
    else {
      test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
    }
    dropList=dropList + test
  }
  urnum=MKey.replace(/\+/g," ").substr(0,8);
  OutputArray[OutputArray.length] = "<tr>" +
  "<td><img src=../images/DeleteIcon.gif class=Icon " +
  " onclick=RemoveRecord('" +  OutputArray.length + "');>" +
  MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
  "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
  OutputArray.length + "','" + urnum + "');\">" +
  "<option value='99'>All</option>" +
      dropList + "</select></td>" +
      "<td>" + Name + "</td>" +
      "<td class=" + ReqClas.value + ">" + Req.value + "</td>" +
      "<td>" + Locn + "</td>" +
      "<td>" + Date + "</td>" +
      "<td>" + Desc + "&nbsp;</td>" +
      "<input type=hidden name=mrkeyarr value='" +
      MKey + "'></tr>"
}
function OutputDivisionHom() {
  OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Home Location</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
  for (i=OutputArray.length-1;i>=0;i--) {
    OutputString+=OutputArray[i]
  }
  OutputString+="</table>"
  Results.innerHTML=OutputString
//  alert(Results.innerHTML);
}
function OutputDivision() {
  OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
  for (i=OutputArray.length-1;i>=0;i--) {
    OutputString+=OutputArray[i]
  }
  OutputString+="</table>"
  Results.innerHTML=OutputString
//  alert(Results.innerHTML);
}
function OutputDivisionReq() {
  OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Outstanding Requests</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
  for (i=OutputArray.length-1;i>=0;i--) {
    OutputString+=OutputArray[i]
  }
  OutputString+="</table>"
  Results.innerHTML=OutputString
//  alert(Results.innerHTML);
}
function RemoveRecord(RecordNo){
  OldArray=OutputArray
  OutputArray = new Array();  // Create Array to Store Rows of Table
  ItemCnt--
  j=0;
  for (i=0;i<OldArray.length;i++) {
    if (i!=RecordNo) {
      repStr=new RegExp("RemoveRecord.'" + i + "'.;>");
      repStr1=new RegExp("VolNumHom.this.value.'" + i + "'.");
      newStr="RemoveRecord('" + j + "');>";
      newStr1="VolNumHom(this.value,'" + j + "',";
      OldArray[i]=OldArray[i].replace(repStr,newStr);
      OutputArray[j]=OldArray[i].replace(repStr1,newStr1);
      j++
    }
  }
  OutputDivision()
}
function DueDate(ReturnCode){
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                    "&mrtme005=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.AddForm.mrtme007.value=returnValue.return_value }
  else {
    ReturnCode.select();  }
}
function DueDateMand(ReturnCode){
  if(ReturnCode.value.substr(4,1) == "0" &&
     ReturnCode.value.substr(5,1) == "1"){          // Ordinary and other
    document.AddForm.mrtme007.className="Mandatory";
  } else {
    document.AddForm.mrtme007.className="";
  }
  if(trim(ReturnCode.value.substr(7,3)) == "0") {  // Borrowing period = 0
    document.AddForm.mrtme007.value="";
    return;
  }
  var serverURL   = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                    "&mrtme005=" + ReturnCode.value.replace(/ /g,"+") +
                    "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.AddForm.mrtme007.value=returnValue.return_value }
  else {
    ReturnCode.select();  }
}

function ValidateMRTS() {
  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=6" +
                  "&valdmrts=" + AddForm.mrtsecno.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    AddForm.mrtsecid.value=ReturnValue[0];
    return true;
  } else {
    AddForm.mrtsecno.select();
    return false }
}

function CheckMRTS() {
  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=6" +
                  "&valdmrts=" + UpdateForm.mrtsecno.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    UpdateForm.mrtsecid.value=ReturnValue[0];
    return true;
  } else {
    UpdateForm.mrtsecno.select();
    return false }
}

function AddMovRecord() {

    if (AddForm.mrtsecno!=undefined) {
      ans=ValidateMRTS();
      if (ans==false) { return; }
    }

  document.AddForm.nextpage.value="0";
  document.AddForm.updttype.value="A";
  document.AddForm.movebutn.disabled=true; 
  setTimeout('document.AddForm.movebutn.disabled=false',3000);
  SubmitHidden(AddForm);
}
function AddMovReqRecord() {

    if (AddForm.mrtsecno!=undefined) {
      ans=ValidateMRTS();
      if (ans==false) { return; }
    }

  document.AddForm.nextpage.value="0";
  document.AddForm.updttype.value="F";
  SubmitHidden(AddForm);
}
function ConMovRecord() {

    if (AddForm.mrtsecno!=undefined) {
      ans=ValidateMRTS();
      if (ans==false) { return; }
    }

  document.AddForm.nextpage.value="6";
  document.AddForm.updttype.value="A";
  SubmitHidden(AddForm);
  OutputArray = new Array();  // Create Array to Store Rows of Table
  OutputDivision()
}
function ChangeHome() {

  if (AddForm.mrtsecno!=undefined) {
    ans=ValidateMRTS();
    if (ans==false) { return; }
  }

  document.AddForm.nextpage.value="0";
  document.AddForm.updttype.value="H";
  SubmitHidden(AddForm);
}
function ConChangeHome() {

  if (AddForm.mrtsecno!=undefined) {
    ans=ValidateMRTS();
    if (ans==false) { return; }
  }

  document.AddForm.nextpage.value="6";
  document.AddForm.updttype.value="H";
  SubmitHidden(AddForm);
  OutputArray = new Array();  // Create Array to Store Rows of Table
  OutputDivisionHom()
}
function SetVolNum(volume,position,ur) { 
  if (volume=="99") { 
    OldArray=OutputArray
    OutputArray = new Array();  // Create Array to Store Rows of Table
    ItemCnt--
    j=0;
    for (i=0;i<OldArray.length;i++) {
      if (i==position) {
        repStr=new RegExp(" selected>")
        newStr=">"
        OutputArray[j]=OldArray[i].replace(repStr,newStr)
        repStr=new RegExp("value='" + volume + "'>")
        newStr="value='" + volume + "' selected>"
        OutputArray[j]=OutputArray[j].replace(repStr,newStr)
        j++
      }
      if (i!=position) {
        OutputArray[j]=OldArray[i]
        j++
      }
    }
    return;
  }
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ur.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + volume.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.mrtme020.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme017.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    var dropList="";
//    Vols=ReturnValue[5].substr(1,100);
    Vols=ReturnValue[5];
    VolList=Vols.split(",");
    for (i=VolList.length-2;i>=0;i--) {
      a=volume;
      b=VolList[i] ;
      justifyRight(a);
      justifyRight(b);
      if (a==b) {
        test="<option value='" + VolList[i] +
             "' selected>" + VolList[i] + "</option>"
      }
      else {
        test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
      }
      dropList=dropList + test
    }
    urnum=ReturnValue[0].replace(/\+/g," ").substr(0,8);
    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
    position + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();
    mrtkey.value=ReturnValue[0].replace(/\+/g," ");
    filreqed=ReturnValue[18];
    OutputDivision()
    AlertErrors(ReturnValue[6],ReturnValue[8],ReturnValue[9],ReturnValue[10],
                ReturnValue[11],ReturnValue[12],ReturnValue[13],ReturnValue[14],
                ReturnValue[15],ReturnValue[16],ReturnValue[0],ReturnValue[17],
                ReturnValue[20],ReturnValue[21],ReturnValue[22],ReturnValue[23],
                ReturnValue[24],ReturnValue[25],ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
  }
}
function VolNumHom(volume,position,ur) {      
  if (volume=="99") { 
    OldArray=OutputArray
    OutputArray = new Array();  // Create Array to Store Rows of Table
    ItemCnt--
    j=0;
    for (i=0;i<OldArray.length;i++) {
      if (i==position) {
        repStr=new RegExp(" selected>")
        newStr=">"
        OutputArray[j]=OldArray[i].replace(repStr,newStr)
        repStr=new RegExp("value='" + volume + "'>")
        newStr="value='" + volume + "' selected>"
        OutputArray[j]=OutputArray[j].replace(repStr,newStr)
        j++
      }
      if (i!=position) {
        OutputArray[j]=OldArray[i]
        j++
      }
    }
    return;
  }
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ur.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + volume.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.mrtme020.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme017.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    var dropList="";
//    Vols=ReturnValue[5].substr(1,100);
    Vols=ReturnValue[5];
    VolList=Vols.split(",");
    for (i=VolList.length-2;i>=0;i--) {
      a=volume;
      b=VolList[i] ;
      justifyRight(a);
      justifyRight(b);
      if (a==b) {
        test="<option value='" + VolList[i] +
             "' selected>" + VolList[i] + "</option>"
      }
      else {
        test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
      }
      dropList=dropList + test
    }
    urnum=ReturnValue[0].replace(/\+/g," ").substr(0,8);
    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu onChange=\"VolNumHom(this.value,'" +
    position + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + ReturnValue[19] + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();
    mrtkey.value=ReturnValue[0].replace(/\+/g," ");
    filreqed=ReturnValue[18];
    OutputDivisionHom()
    AlertErrors(ReturnValue[6],ReturnValue[8],ReturnValue[9],ReturnValue[10],
                ReturnValue[11],ReturnValue[12],ReturnValue[13],ReturnValue[14],
                ReturnValue[15],ReturnValue[16],ReturnValue[0],ReturnValue[17],
                ReturnValue[20],ReturnValue[21],ReturnValue[22],ReturnValue[23],
                ReturnValue[24],ReturnValue[25],ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
  }
}
function VolNumHomKids(volume,position,ur) {      
  if (volume=="99") { 
    OldArray=OutputArray
    OutputArray = new Array();  // Create Array to Store Rows of Table
    ItemCnt--
    j=0;
    for (i=0;i<OldArray.length;i++) {
      if (i==position) {
        repStr=new RegExp(" selected>")
        newStr=">"
        OutputArray[j]=OldArray[i].replace(repStr,newStr)
        repStr=new RegExp("value='" + volume + "'>")
        newStr="value='" + volume + "' selected>"
        OutputArray[j]=OutputArray[j].replace(repStr,newStr)
        j++
      }
      if (i!=position) {
        OutputArray[j]=OldArray[i]
        j++
      }
    }
    return;
  }
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=14" +
                  "&mrkeyarr=" + ur.replace(/ /g,"+") +
                  "&docmtype=" + AddForm.mrtme010.value.replace(/ /g,"+") +
                  "&volumeno=" + volume.replace(/ /g,"+") +
                  "&mrtme001=" + AddForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + AddForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme019=" + AddForm.mrtme019.value.replace(/ /g,"+") +
                  "&mrtme003=" + AddForm.mrtme003.value.replace(/ /g,"+") +
                  "&homehosp=" + AddForm.mrtme020.value.replace(/ /g,"+") +
                  "&location=" + AddForm.mrtme017.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    var dropList="";
//    Vols=ReturnValue[5].substr(1,100);
    Vols=ReturnValue[5];
    VolList=Vols.split(",");
    for (i=VolList.length-2;i>=0;i--) {
      a=volume;
      b=VolList[i] ;
      justifyRight(a);
      justifyRight(b);
      if (a==b) {
        test="<option value='" + VolList[i] +
             "' selected>" + VolList[i] + "</option>"
      }
      else {
        test="<option value='" + VolList[i] + "'>" + VolList[i] + "</option>"
      }
      dropList=dropList + test
    }
    urnum=ReturnValue[0].replace(/\+/g," ").substr(0,8);
    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu onChange=\"VolNumHomKids(" +
    "this.value,'" +
    position + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + ReturnValue[19] + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();
    mrtkey.value=ReturnValue[0].replace(/\+/g," ");
    filreqed=ReturnValue[18];
    OutputDivisionHom()
    AlertErrorsKids(ReturnValue[6],ReturnValue[8],ReturnValue[9],
                ReturnValue[10],ReturnValue[11],ReturnValue[12],ReturnValue[13],
                ReturnValue[14],ReturnValue[15],ReturnValue[16],ReturnValue[0],
                ReturnValue[17],ReturnValue[20],ReturnValue[21],ReturnValue[22],
                ReturnValue[23],ReturnValue[24],ReturnValue[25],ReturnValue[26])

    if (filreqed=="Y") {
      CheckLoc(mrtkey,AddForm);   // Check for Outstanding Filing?
    }
  }
}
//========================================================================
//  Report 9 template 001 & 005
//========================================================================
function SetUrEvent()
{
  if (event.keyCode == 13)
  {  // Carriage Return

    document.AddForm.URNumber.value = document.AddForm.URNumber.value.toUpperCase();

    FormatURScan(document.AddForm.URNumber);
    FormatURScanMrtLf(document.AddForm.URNumber);
    if(document.AddForm.URNumber.value.length > 8) {
      AddForm.URNumber.value=AddForm.URNumber.value.substr(0,8);
    }

    validateRecordID();
  } 
  else if (event.keyCode == 9) 
  {  // Tab

    if(isWhitespace(document.AddForm.URNumber.value))
    {

      (document.AddForm.RecordKey.focus);

      return;
    }

    document.AddForm.URNumber.value = document.AddForm.URNumber.value.toUpperCase();

    FormatURScan(document.AddForm.URNumber);
    FormatURScanMrtLf(document.AddForm.URNumber);

    if(document.AddForm.URNumber.value.length > 8) {
      AddForm.URNumber.value=AddForm.URNumber.value.substr(0,8);

    }
    

    validateRecordID();

    setTimeout('document.AddForm.URNumber.focus()',100);
  } 
}


function SetUrEventKids() {
  if (event.keyCode == 13) {  // Carriage Return
    validateRecordIDKids();
  } else if (event.keyCode == 9) {  // Tab
    validateRecordIDKids();
    setTimeout('document.AddForm.URNumber.focus()',100);
  }
}
function SetUrEventHom() {
  if (event.keyCode == 13) {  // Carriage Return
    FormatURScan(document.AddForm.URNumber);
    validateHomLoc();
  } else if (event.keyCode == 9) {  // Tab
    FormatURScan(document.AddForm.URNumber);
    validateHomLoc();
    setTimeout('document.AddForm.URNumber.focus()',100);
  }
}
function SetUrEventHomKids() {
  if (event.keyCode == 13) {  // Carriage Return
    validateHomLocKids();
  } else if (event.keyCode == 9) {  // Tab
    validateHomLocKids();
    setTimeout('document.AddForm.URNumber.focus()',100);
  }
}
function SetMedEvent() {
  if (event.keyCode == 13) {  // Carriage Return
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="1";}
    CheckIBAPrefix(document.AddForm.RecordKey);    // IBA and Alegra
    CheckKeyFormat(document.AddForm.RecordKey);    // change Key17 to Key20
    OutputTable(document.AddForm.RecordKey);
    CheckMaxLength(document.AddForm.RecordKey);
  } else if (event.keyCode == 9) {  // Tab
    if(document.AddForm.fullflag!=undefined){
      document.AddForm.fullflag.value="1";}
    CheckIBAPrefix(document.AddForm.RecordKey);    // IBA and Alegra
    CheckKeyFormat(document.AddForm.RecordKey);    // change Key17 to Key20
    OutputTable(document.AddForm.RecordKey);
    setTimeout('document.AddForm.RecordKey.focus()',100);
    CheckMaxLength(document.AddForm.RecordKey);
  }
}
function CheckIBAPrefix(barcode) {
  if(document.AddForm.mrcnibap.value!="1") { // Using IBA prefix
    return;
  }
  if(typeof(HospitalStateforHDPExtracts!=undefined)) {
    if(HospitalStateforHDPExtracts=="1") { // NZ
      CheckIBAPrefixNZ(barcode);
      return;
    }
  }
  if(barcode.value.substr(0,2)=="LF") {
    return; }                                // don't process new format
  if(barcode.value.substr(0,3)=="IBA") {
    barcode.value=barcode.value.substr(3);                 // Remove IBA prefix
  } else {
    ur=" " + barcode.value.substr(0,7)
    homeloc=barcode.value.substr(7,4)
    doctype=barcode.value.substr(11,3)
    var volume = new Object();
    volume.maxLength=2
    if(barcode.value.substr(17,1)=="0"){
      volume.value=barcode.value.substr(18,1)
    } else {
      volume.value=barcode.value.substr(17,2)
    }
    trim(volume.value)
    justifyRight(volume);
    barcode.value= ur + homeloc + doctype + volume.value
  }
  barcode.maxLength=17;
}
function CheckIBAPrefixNZ(barcode) {
  if(document.AddForm.mrcnibap.value!="1") { // Using IBA prefix
    return;
  }
  checkur=barcode.value.substr(2,1).search('[a-zA-Z]');  // NZ U/R ABC1234
  if(barcode.value.substr(0,2)=="LF" && checkur<0) {
    return; }                                // don't process new format
  if(barcode.value.substr(0,3)=="IBA") {
    barcode.value=barcode.value.substr(3);                 // Remove IBA prefix
  } else {
    ur=" " + barcode.value.substr(0,7)
    homeloc=barcode.value.substr(7,4)
    doctype=barcode.value.substr(11,3)
    var volume = new Object();
    volume.maxLength=2
    if(barcode.value.substr(17,1)=="0"){
      volume.value=barcode.value.substr(18,1)
    } else {
      volume.value=barcode.value.substr(17,2)
    }
    trim(volume.value)
    justifyRight(volume);
    barcode.value= ur + homeloc + doctype + volume.value
  }
  barcode.maxLength=17;
}
function CheckKeyFormat(barcode) {    // Convert MRMAKEY from 17 to 20 chars
  homehos = "   ";
  if(typeof(HospitalStateforHDPExtracts!=undefined)) {
    if(HospitalStateforHDPExtracts=="1") { // NZ
      CheckKeyFormatNZ(barcode);
      return;
    }
  }
  if(barcode.value.substr(0,2)=="LF") {
    barcode.value=barcode.value.substr(2);
  } else {
    barcode.maxLength=17;
    justifyRightKey(barcode);
    ur=barcode.value.substr(0,8)
    homeloc=barcode.value.substr(8,4)
    doctype=barcode.value.substr(12,3)
    volno=barcode.value.substr(15,2)
    barcode.value= ur + homehos + homeloc + doctype + volno
  }
  barcode.maxLength=20;
}
function CheckKeyFormatNZ(barcode) {    // Convert MRMAKEY from 17 to 20 chars
  homehos = "   ";
  checkur=barcode.value.substr(2,1).search('[a-zA-Z]');  // NZ U/R ABC1234
  if(barcode.value.substr(0,2)=="LF" && checkur<0) {
    barcode.value=barcode.value.substr(2);
  } else {
    barcode.maxLength=17;
    justifyRightKey(barcode);
    ur=barcode.value.substr(0,8)
    homeloc=barcode.value.substr(8,4)
    doctype=barcode.value.substr(12,3)
    volno=barcode.value.substr(15,2)
    barcode.value= ur + homehos + homeloc + doctype + volno
  }
  barcode.maxLength=20;
}
function CheckMaxLength(barcode) {
  document.AddForm.RecordKey.maxLength=22;
}
function AlertDate(date) {
  if (checkDate(date)) {; // following var InputDate comes from checkDate()!
    if ((CheckPast(InputDate)) && (!CheckFuture(InputDate))) {
      alert("You are backdating this movement." +
            "\nAll movements after this date will be removed!");
    }
  }
}
//========================================================================
//  Report 9 template 002 & 004
//========================================================================
function DueDateSngl(ReturnCode){
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                  "&mrtme005=" + ReturnCode.value.replace(/ /g,"+") +
                  "&mrtme001=" + UpdateForm.mrtme001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.UpdateForm.mrtme007.value=returnValue.return_value }
  else {
    ReturnCode.select();  }
}
function DueDateSnglMand(ReturnCode){
  if(ReturnCode.value.substr(4,1) == "0" &&
     ReturnCode.value.substr(5,1) == "1"){          // Ordinary and other
    document.UpdateForm.mrtme007.className="Mandatory";
  } else {
    document.UpdateForm.mrtme007.className="";
  }
  if(trim(ReturnCode.value.substr(7,3)) == "0") {  // Borrowing period = 0
    document.UpdateForm.mrtme007.value="";
    return;
  }
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                  "&mrtme005=" + ReturnCode.value.replace(/ /g,"+") +
                  "&mrtme001=" + UpdateForm.mrtme001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.UpdateForm.mrtme007.value=returnValue.return_value }
  else {
    ReturnCode.select();  }
}
function reSend() {
  document.UpdateForm.updttype.value="";
  document.UpdateForm.submit()
}
function CheckMov() {
  p=document.UpdateForm
  if (validateMandatory(UpdateForm)) {
    if(!ValidateRetention(p.urnumber,p.mrtme019,p.mrtme003)){
       document.UpdateForm.mrtme003.value="";
       document.UpdateForm.mrtme003.focus();
       return;
    }
    if (UpdateForm.mrtsecno!=undefined) {
      ans=CheckMRTS();
      if (ans==false) { return; }
    }
    ans=CheckRecDetails();
    if (ans==false) { return; }
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/mrkeyarr/)) {
        if (document.UpdateForm.elements[i].checked) {
          ChkRecord(document.UpdateForm.elements[i]);
          if (UpdateForm.filreqed.value=="Y") {
            CheckLoc(document.UpdateForm.elements[i],UpdateForm);
          }
        }
      }
    }
    UpdateForm.target="PopUpFrame"
    UpdateForm.submit();
  }
}
function MoveRecord(){
  if (validateMandatory(UpdateForm)) {
    ans=CheckRecDetails();
    if (ans==false) { return; }
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/mrkeyarr/)) {
        if (document.UpdateForm.elements[i].checked) {
          ChkRecord(document.UpdateForm.elements[i]);
          if (UpdateForm.filreqed.value=="Y") {
            CheckLoc(document.UpdateForm.elements[i],UpdateForm);
          }
        }
      }
    }
    document.UpdateForm.redirect.value="patweb98.pbl?reportno=1&template=043" +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
    UpdateForm.target="PopUpFrame"
    if(document.UpdateForm.admissno.value==""){
     document.UpdateForm.redirect.value="patweb98.pbl?reportno=1&template=001" +
     "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")}
    UpdateForm.target="PopUpFrame"
    if(document.UpdateForm.regiflag!=undefined){
    if(document.UpdateForm.regiflag.value=="1"){
     document.UpdateForm.redirect.value="patweb98.pbl?reportno=1&template=001" +
     "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")}}
    if(document.UpdateForm.transflg!=undefined){
    if(document.UpdateForm.transflg.value=="1"){
     document.UpdateForm.redirect.value="patweb96.pbl?reportno=3&template=004" +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     }}
    if(document.UpdateForm.dischflg!=undefined){
    if(document.UpdateForm.dischflg.value=="1"){
     document.UpdateForm.redirect.value="patweb98.pbl?reportno=1&template=001" +
      "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+") +
      "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
     }}
    UpdateForm.submit();
  }
}
function ChkRecord(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=16" +
                  "&mrkeyarr=" + ReturnCode.value.replace(/ /g,"+") +
                  "&mrtme001=" + UpdateForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + UpdateForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme003=" + UpdateForm.mrtme003.value.replace(/ /g,"+")
  
  if (UpdateForm.mrtme019 != undefined) {
    serverURL += "&mrtme019=" + UpdateForm.mrtme019.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    volno=ReturnCode.value.substring(18,20)
    ReturnValue=returnValue.return_value.split("|");
    if (returnValue.status==0) {
      if (ReturnValue[0]==1) {
        alert("Volume no " + volno + " is moving to a Home Location that " +
              "is not its own !");
      }
      if (ReturnValue[4]==1) {
        ReqstDate=ReturnValue[9];
        ReqstTime=ReturnValue[10];
        ReqstLoc=trim(ReturnValue[11]);
        ReqstLocD=ReturnValue[12];
        Requestor=ReturnValue[13];
        ReqstReas=trim(ReturnValue[14]);
        ReqstReasD=ReturnValue[15];
        alert("Unfilled requests exist for volume no " + volno +
            "\nNext Request Due= " + ReqstDate + "@" + ReqstTime +
            "\nRequest Location= " + ReqstLoc + " - " + ReqstLocD +
            "\nRequestor= " + Requestor +
            "\nMovement Reason= " + ReqstReas + " - " + ReqstReasD);
      }
    }
  } 
}
function CheckLoc(medrecod,FormName) {
  if (isWhitespace(medrecod.value)) return;;
  var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=2" +
              "&valdcode=" + medrecod.value.replace(/ /g,"+") +
              "&location=" + FormName.mrtme003.value.replace(/ /g,"+")

  if (FormName.mrtme019 != undefined) {
    serverURL += "&desthosp=" + FormName.mrtme019.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    moveflag=ReturnValue[0];
    volno=medrecod.value.substring(18,20)
    if (moveflag=="1"){
//      alert("Outstanding Filing exists for this patient.\n" +
//            "Volume no " + volno + " is moving to an Internal Location!");
      alert("Outstanding Filing exists for this patient. Volume no ("
            + volno + ").");
    }
    if (moveflag=="2"){
//      alert("Outstanding Filing exists for this patient.\n" +
//            "Volume no " + volno +" is moving from an Internal Location!");
      alert("Outstanding Filing exists for this patient. Volume no ("
            + volno + ").");
    }
    if (moveflag=="3"){
//      alert("Outstanding Filing exists for this patient.\n" +
//            "Volume no " + volno +" is moving between Internal Locations!");
      alert("Outstanding Filing exists for this patient. Volume no ("
            + volno + ").");
    }
  }
}
function CheckRecDetails() {
//
// Only Need the selected mrkeyarr found as it contians useful UR info!
//

  for (var i=0; i < document.UpdateForm.length; i++) {
    if ((document.UpdateForm.elements[i].name.match(/mrkeyarr/)) && (document.UpdateForm.elements[i].checked)) {
      medrecod=document.UpdateForm.elements[i];
      break;
    }
  }
  if (!window.medrecod) { return; }
  if (isWhitespace(medrecod.value)) return;;
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=16" +
                  "&mrkeyarr=" + medrecod.value.replace(/ /g,"+") +
                  "&mrtme001=" + UpdateForm.mrtme001.value.replace(/ /g,"+") +
                  "&mrtme002=" + UpdateForm.mrtme002.value.replace(/ /g,"+") +
                  "&mrtme003=" + UpdateForm.mrtme003.value.replace(/ /g,"+")

  if (UpdateForm.mrtme019 != undefined) {
    serverURL += "&mrtme019=" + UpdateForm.mrtme019.value.replace(/ /g,"+")
  }

  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if (returnValue.status==0) {
    Incomp=ReturnValue[1];   // Note must save returned variable here as
    Movdte=ReturnValue[2];   // following remote script will whipe these
    Lastdte=ReturnValue[3];
    disdate=ReturnValue[5];
    disdest=ReturnValue[6];
    pdtdest=ReturnValue[7];
    visitno=ReturnValue[8];

    //Checks to see if the Ignore Code exists, and has been checked.
    //ignores the Incomp value if that is the case.
    if ((document.UpdateForm.ignorcod != undefined) &&
       (document.UpdateForm.ignorcod.checked == true)) {

       Incomp = 0;

    }

    if (Incomp==1) {
 // Note this Error will only display if Record is moving to or from an
 // internal location. Following remote script checks for an internal movement!
      var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=3&valdtype=3" +
                  "&valdcode=" + medrecod.value.replace(/ /g,"+") +
                  "&location=" + UpdateForm.mrtme003.value.replace(/ /g,"+")

      if (UpdateForm.mrtme019 != undefined) {
        serverURL += "&desthosp=" + UpdateForm.mrtme019.value.replace(/ /g,"+")
      }

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        moveflag=ReturnValue[0];
//
        if(ReturnValue[1] != undefined ) {
          visitno=ReturnValue[1];      // Only returned by valdtype=3 if NZ
          disdest=ReturnValue[2];
          disdate=ReturnValue[3];
        }
//
        if ((moveflag >= "1") && (moveflag <= "3")) {
          if (!isWhitespace(disdate)) {
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno + "\nDisch Date= " + disdate +
                  "\nDisch Dest= " + disdest +
                  "\nPost Disch Status= " + pdtdest); }
          else {
          // This must be a long term admission as no discharge info found!
            alert("Warning : Patient has an admission with Incomplete Coding!" +
                  "\nVisit No= " + visitno);
          }
        }
      }
    }
    if (Movdte==1) {
      ans=confirm("Warning : Movement date is before last movement date " +
                  Lastdte + "\nAll movements after the entered date will be " +
                  "be removed!");
      if (!ans) { return false; }
    }
  }
}
function SetRecord() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mrkeyarr/)) {
      document.UpdateForm.elements[i].checked=true;
      break;         // Only set the first one found which is latest volume!
    }
  }
}
function SetRecordDef(MrKey) {
  if (isWhitespace(MrKey.value)) {
    SetRecord();
    return;
  }
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/mrkeyarr/)) {
      if(document.UpdateForm.elements[i].value==MrKey.value) {
        document.UpdateForm.elements[i].checked=true;
        break;         // Only set the first one found which is latest volume!
      }
    }
  }
}
function DueDateAdm(){  
  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=13" +
                  "&mrtme005=" + UpdateForm.mrtme005.value.replace(/ /g,"+") +
                  "&mrtme001=" + UpdateForm.mrtme001.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    document.UpdateForm.mrtme007.value=returnValue.return_value 
  }
}
//========================================================================
//  Report 5
//========================================================================
function UpdateReport(UrNo,hos,loc,doc,vol) {       
  LinkUrl="mrtweb01.pbl?reportno=5&template=3" +
          "&urnumber=" + UrNo.replace(/ /g,"+") + 
          "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
          "&mrtms008=" + hos.replace(/ /g,"+") +
          "&mrtms001=" + loc.replace(/ /g,"+") +
          "&mrtms002=" + doc.replace(/ /g,"+") +
          "&mrtms003=" + vol.replace(/ /g,"+") +
          "&superlev=" + PatientLinks.superlev.value.replace(/ /g,"+")
  location.href=LinkUrl
}                      
function MedMove(doc) {
    if(doc.checked==true){
      LinkUrl="mrtweb01.pbl?reportno=9&template=2" +
              "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+") +
              "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
              "&mrtme010=" + doc.value.substr(0,3).replace(/ /g,"+") +
              "&selectky=" + doc.value.substr(3,20).replace(/ /g,"+") +
              "&superlev=" + PatientLinks.superlev.value.replace(/ /g,"+")
      Left=(document.body.clientWidth-700)/2
      DFrameLink(LinkUrl,0,Left,700,400)
    }
}
function SetHospital(p) {
   if(p.ibcnmhos.value=="1") {
    HospitalTitle.innerHTML=ShowHospitalTitle.innerHTML;
    Hospital.innerHTML=ShowHospital.innerHTML;
  } else {
    HospitalTitle.innerHTML="";
    Hospital.innerHTML=ShowNoHospital.innerHTML;;
  }
}

function SetDestination(p) {
  if (!isWhitespace(p.mrtme019.value)) {
       p.desthosp.value = p.mrtme019.value; }
  if (!isWhitespace(p.mrtme003.value)) {
       p.defllocn.value = p.mrtme003.value; }

  p.mrtme003.options.length=0;
  p.mrtme003.options[p.mrtme003.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
    MrtMultiLocations(p.mrtme003,p.d_mrtme003.value,p.desthosp.value);
    if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(p.mrtme003);
    }
  } else {
    MrtLocations(p.mrtme003,p.d_mrtme003.value);
    if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(p.mrtme003);
    }
  }
}

function sortMrtLocation(selElem) {
    var tmpAry = new Array();
    var ad = selElem[selElem.selectedIndex].text;
    var selectedIndex = 0;
     
    for (var i=0;i<selElem.options.length;i++) {
        tmpAry[i] = new Array();
        tmpAry[i][1] = selElem.options[i].text;
        //ignore case
        tmpAry[i][0] = selElem.options[i].text.toUpperCase();
        tmpAry[i][2] = selElem.options[i].value;
    }
    
    tmpAry.sort();

    while (selElem.options.length > 0) {
        selElem.options[0] = null;
    }
    
    for (var i=0;i<tmpAry.length;i++) {
        if(ad == tmpAry[i][1]) {
           selectedIndex = i;
        }

        var op = new Option(tmpAry[i][1], tmpAry[i][2]);
        selElem.options[i] = op;
    }

    selElem.selectedIndex = selectedIndex;
    
    return;
}

//========================================================================
//  Report 9 
//========================================================================
function SetOrigHosp(p) {
  if((p.ibcnmhos.value=="1") && (p.superlev.value=="1")) {
    OrigHospTitle.innerHTML=ShowOrigHospTitle.innerHTML;
    OrigHosp.innerHTML=ShowOrigHosp.innerHTML;
  } else {
    OrigHospTitle.innerHTML="";
    OrigHosp.innerHTML=ShowNoOrigHosp.innerHTML;;
  }
}
function validateRecordID() {
  if (validateMandatory(AddForm)) {
    p=document.AddForm
    if(p.URNumber.value!="") {
    LenUR=p.URNumber.value.length
    if (LenUR < 9) {
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.URNumber.value=Blanks + p.URNumber.value }
      validateCodeMerge(28,p.URNumber,p.d1,p.Merged,p.Mergedur,p.mrrecord) }
      if (p.d1.value!="") {
        if (p.Merged.value=="1") {
          if (p.mrrecord.value!="1") {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value);
            if (p.wahealth == undefined ) {
              p.URNumber.value=p.Mergedur.value;
              validateRecordID()  // Load U/R that this U/R is merged with!
            } else { p.URNumber.value = "" }
            return; 
          } else {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value +
                  "\nU/R - " + p.URNumber.value + 
                  " still has a medical record, " +
                  "please merge all medical records for this UR!");
            p.URNumber.value="";
            p.URNumber.focus();
            return;
          }
        }
        OutputTable(AddForm.URNumber);
      }
  }
}
function validateRecordIDKids() {
  if (validateMandatory(AddForm)) {
    p=document.AddForm
    if(p.URNumber.value!="") {
    LenUR=p.URNumber.value.length
    if (LenUR < 8) {
      Count= 7 - LenUR ;
      Zero=""
      Blanks=" ";
      for (i=0; i < Count;i++) { Zero+="0";}
      p.URNumber.value=Blanks + Zero + p.URNumber.value }
      validateCodeMerge(28,p.URNumber,p.d1,p.Merged,p.Mergedur,p.mrrecord) }
      if (p.d1.value!="") {
        if (p.Merged.value=="1") {
          if (p.mrrecord.value!="1") {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value);
            p.URNumber.value=p.Mergedur.value;
            validateRecordIDKids()  // Load U/R that this U/R is merged with!
            return; 
          } else {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value +
                  "\nU/R - " + p.URNumber.value + 
                  " still has a medical record, " +
                  "please merge all medical records for this UR!");
            p.URNumber.value="";
            p.URNumber.focus();
            return;
          }
        }
        OutputTableKids(AddForm.URNumber);
      }
  }
}
function validateHomLoc() {    // Called from mrtweb0109005.html 
  if (validateMandatory(AddForm)) {
    p=document.AddForm
    if(p.URNumber.value!="") {
    LenUR=p.URNumber.value.length
    if (LenUR < 9) {
      Count= 8 - LenUR ;
      Blanks="";
      for (i=0; i < Count;i++) { Blanks+=" ";}
      p.URNumber.value=Blanks + p.URNumber.value }
      validateCodeMerge(28,p.URNumber,p.d1,p.Merged,p.Mergedur,p.mrrecord) }
      if (p.d1.value!="") {
        if (p.Merged.value=="1") {
          if (p.mrrecord.value!="1") {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value);
            p.URNumber.value=p.Mergedur.value;
            validateHomLoc()  // Load U/R that this U/R is merged with!
            return; 
          } else {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value +
                  "\nU/R - " + p.URNumber.value + 
                  " still has a medical record, " +
                  "please merge all medical records for this UR!");
            p.URNumber.value="";
            p.URNumber.focus();
            return;
          }
        }
        OutputTableHom(AddForm.URNumber);
      }
  }
}
function validateHomLocKids() {   // Called from mrtweb0109005.html 
  if (validateMandatory(AddForm)) {
    p=document.AddForm
    if(p.URNumber.value!="") {
    LenUR=p.URNumber.value.length
    if (LenUR < 8) {
      Count= 7 - LenUR ;
      Zero=""
      Blanks=" ";
      for (i=0; i < Count;i++) { Zero+="0";}
      p.URNumber.value=Blanks + Zero + p.URNumber.value }
      validateCodeMerge(28,p.URNumber,p.d1,p.Merged,p.Mergedur,p.mrrecord) }
      if (p.d1.value!="") {
        if (p.Merged.value=="1") {
          if (p.mrrecord.value!="1") {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value);
            p.URNumber.value=p.Mergedur.value;
            validateHomLocKids()  // Load U/R that this U/R is merged with!
            return; 
          } else {
            alert("Warning : This U/R Number is merged with " + 
                   p.Mergedur.value +
                  "\nU/R - " + p.URNumber.value + 
                  " still has a medical record, " +
                  "please merge all medical records for this UR!");
            p.URNumber.value="";
            p.URNumber.focus();
            return;
          }
        }
        OutputTableHomKids(AddForm.URNumber);
      }
  }
}
function SearchPatient() {
  if (validateMandatory(AddForm)) {
    PatientSearchFrame(AddForm.d1,AddForm.URNumber,AddForm.d2,SendFormWait);
  }
}
function SendFormWait() {
//  setInterval('OutputTable(AddForm.URNumber)',600);
  OutputTable(AddForm.URNumber);
}
function SearchPatientHom() {
  if (validateMandatory(AddForm)) {
    PatientSearchFrame(AddForm.d1,AddForm.URNumber,AddForm.d2,WaitHom);
  }
}
function WaitHom() {
  OutputTableHom(AddForm.URNumber);
}
function SearchPatientHomKids() {
  if (validateMandatory(AddForm)) {
    PatientSearchFrame(AddForm.d1,AddForm.URNumber,AddForm.d2,WaitHomKids);
  }
}
function WaitHomKids() {
  OutputTableHom(AddForm.URNumber);
}
//========================================================================
//  Report 12
//========================================================================
function MoveRec12(tempno,type,oldseqnc,moveswap) {
  document.MoveForm.mrttd001.value=tempno;
  document.MoveForm.mrttd002.value=type;
  document.MoveForm.mrttd003.value=oldseqnc;
  document.MoveForm.moveswap.value=moveswap;
  if (document.MoveForm.newseqnc.value == ""){
    document.MoveForm.newseqnc.value=oldseqnc; }
  UpdateWin=window.open("","HideUpdateWindow",                                 
  "width=10,height=10,top=1024,directories=no,location=no" +                   
  ",scrollbars=no,status=no,toolbar=no,menubar=no,resizeable=no")              
  document.MoveForm.target="HideUpdateWindow";                                 
  document.MoveForm.submit();         
}
function ShowDetail12(linkurl) {
  Left=(document.body.clientWidth-850)/2
  DFrameLink(linkurl,0,Left,850,160)
}
function validateICD(FormName) {
  if (isWhitespace(FormName.mrttd005.value)) {
     return; }
  FormName.mrttd005.value=FormName.mrttd005.value.toUpperCase()
  FormName.mrttd005.value=FormName.mrttd005.value.replace(/ /g,"")
  setfo=FormName.mrttd005.value.search('[A-Z]')
  if (setfo == "0") {
    Codelen=FormName.mrttd005.value.length;
    findot=FormName.mrttd005.value.search('[.]')
    findslash=FormName.mrttd005.value.search('[/]')
    if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
      // Check whether a "/" has been entered for this Procedure code
      // If code not in format M0000/0
      if (findslash != "5") {
        a=FormName.mrttd005.value.substr(0,5);
        b=FormName.mrttd005.value.substr(5,5);
        FormName.mrttd005.value= a + "/" + b;      // Add slash to string
      }
      if (FormName.mrttd004.value != FormName.morpre.value) {
        alert("Error Disease code must have a '" + FormName.morpre.value +
              "' prefix!");
        FormName.mrttd004.focus();
        return;
      }
    } else {
      // Check whether a "." has been entered if not format with a "." 
      // If code not in format A00.0 or Code is > 3 characters 
      if ((findot != "3") && (FormName.mrttd005.value.length != "3")) {
        a=FormName.mrttd005.value.substr(0,3);  // Then must be in format A000 
        b=FormName.mrttd005.value.substr(3,3);
        FormName.mrttd005.value= a + "." + b;     // Add full stop to string
      }
    }
    validateCode(6,FormName.mrttd005,FormName.mrttd006); // Val Diagnosis
    SetDisPrefix(FormName);  
  }
  else {
    // Check whether a "-" has been entered for this Procedure code 
    findash=FormName.mrttd005.value.search('[-]')
    // If code not in format 00000-00
    if (findash != "5") {
      a=FormName.mrttd005.value.substr(0,5);
      b=FormName.mrttd005.value.substr(5,5);
      FormName.mrttd005.value= a + "-" + b;     // Add dash to string
    }
    validateCode(7,FormName.mrttd005,FormName.mrttd006); // Val Procedure
    SetPrefix(FormName);
  }
}
// Set defualt Disease Prefix if already set to Operation Prefix
function SetDisPrefix(FormName) {  
  if ((FormName.mrttd004.value==FormName.oprpre.value) ||
     (FormName.mrttd004.value=="I")||(FormName.mrttd004.value=="N")) {
    for (var i =0 ; i < FormName.mrttd004.length; i++) {
      if (FormName.mrttd004.options[i].value==FormName.pripre.value) {
          FormName.mrttd004.selectedIndex=i; } }
  }
}
function SetPrefix(FormName) {
  for (var i =0 ; i < FormName.mrttd004.length; i++) {
    if (FormName.mrttd004.options[i].value==FormName.oprpre.value) {
        FormName.mrttd004.selectedIndex=i; } }
}
function CheckPrefix(indicator,FormName) {
  if (FormName.mrttd005.value != "") {
    findslash=FormName.mrttd005.value.search('[/]')
    if (findslash == "5") {  // Have a  Morphology Code
      if (indicator.value != FormName.morpre.value) {
        alert("Error Disease code must be a Morphology Code or have " +
              "a " + FormName.morpre.value + " prefix!");
        FormName.mrttd004.focus();
        return;
      }
    }
    if ((indicator.value == FormName.morpre.value) && (findslash != "5")) {
      alert("Error Disease code must be a Morphology Code or have " +
            "a " + FormName.morpre.value + " prefix!");
      FormName.mrttd004.focus();
      return;
    }
    validateICD(FormName);
  }
}
//========================================================================
// Function : JustifyRight
//            Right Justification  of a input field to maxLength
//========================================================================
function justifyRightKey(theField) {
  if (theField.maxLength==undefined) { return }
//  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  Count=theField.maxLength - theField.value.length
  Blanks=""
  for (i=0; i < Count;i++) { Blanks+=" ";}
  theField.value=Blanks+theField.value
}
//
function DisplayTrackingAlert(DestHosp,Location,UR,Req,ReqClas) {
  if(isWhitespace(Location.value) || isWhitespace(UR.value)) { return ; }

  var serverURL = "../cgi-bin/mrtweb01.pbl?reportno=19" +
                  "&desthosp=" + DestHosp.value.replace(/ /g,"+") +
                  "&location=" + Location.value.replace(/ /g,"+") +
                  "&urnumber=" + UR.value.substr(0,8).replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);
  var alertdisplay = document.getElementById("recordalert");
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     if(alertdisplay) {
       alertdisplay.innerHTML=trim(ReturnValue[0]);
       alertdisplay.className=trim(ReturnValue[1]);
     }
     if(Req!=undefined && ReqClas!=undefined) {
       Req.value=trim(ReturnValue[0]);
       ReqClas.value=trim(ReturnValue[1]);
     }
  } else {
     if(alertdisplay) {
       alertdisplay.innerHTML="";
       alertdisplay.className="";
     }
     if(Req!=undefined && ReqClas!=undefined) {
       Req.value=trim(ReturnValue[0]);
       ReqClas.value=trim(ReturnValue[1]);
     }
  }
}
function CancelRedirect() {
  if(document.UpdateForm.transflg.value=="1"){
     PatientLinkTo('patweb96.pbl',3,4,0);
     return;
  }
  if(document.UpdateForm.dischflg.value=="1"){
     PatientLinkTo('patweb98.pbl',1,1,0);
     return;
  }
  if(document.UpdateForm.admissno.value==""){
     PatientLinkTo('patweb98.pbl',1,1,0);
     return;
  }
  if(document.UpdateForm.regiflag!=undefined){
    if(document.UpdateForm.regiflag.value=="1"){
     PatientLinkTo('patweb98.pbl',1,1,0);
     return;
    }
  }
  PatientLinkTo('patweb98.pbl',1,43,0);
}
// ---------------------------------------------------------
// Verify that due date is not before movement date         
// ---------------------------------------------------------
function verifyDueDate()                                                 
{
  var theForm;                                                                      
  if      (typeof document.forms['AddForm'] != "undefined")
    theForm = document.forms['AddForm'];
  else if (typeof document.forms['UpdateForm'] != "undefined")
    theForm = document.forms['UpdateForm'];
  else
    return true; 

  if (!isWhitespace(theForm.mrtme007.value))                  
  {                                                                    
    var d1 = new Date(theForm.mrtme001.value);                
    var d7 = new Date(theForm.mrtme007.value);                
    if (d7 < d1)                                                       
    {                                                                  
      alert("Due Date cannot be earlier than \n Movement  Date: "      
            + theForm.mrtme001.value);                        
      theForm.mrtme007.focus();                               
      return false;                                                    
    }                                                                  
  }                                                                    
  return true;                                                                     
} 

function ValidateRetention(ReturnMR,ReturnHHos,ReturnHLoc) {
  var serverURL   = "../cgi-bin/patweb85.pbl?reportno=9&updatety=R" +
                    "&mrkeyarr=" + ReturnMR.value.replace(/ /g,"+") +
                    "&recvhosp=" + ReturnHHos.value.replace(/ /g,"+") +
                    "&recvlocn=" + ReturnHLoc.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    return true;
  } else {
   return false;
  }
}

function ValidateRecStatus(ReturnMR,ReturnStat) {
  var serverURL   = "../cgi-bin/patweb85.pbl?reportno=9&updatety=S" +
                    "&mrkeyarr=" + ReturnMR.value.replace(/ /g,"+") +
                    "&recdstat=" + ReturnStat.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    return true;
  } else {
   return false;
  }
}

