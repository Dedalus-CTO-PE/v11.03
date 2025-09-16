//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0109001.js
//========================================================================
var RecordCount=0;
function CheckLocType() {
 if (document.AddForm.superlev.value=="2") {
  if (!isWhitespace(document.AddForm.mrtme003.value))
  {
    var locationfield = document.getElementById("locationtype");
    var locationdata = document.getElementById("locationdesc");
    var locationbox = document.getElementById("clearlocation");

    var serverURL = "../cgi-bin/mrtweb04.pbl?reportno=4" +
            "&updttype=1" +
            "&desthosp=" + document.AddForm.mrtme019.value.replace(/ /g,"+") +
            "&location=" + document.AddForm.mrtme003.value.replace(/ /g,"+")

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|")
     if((!isWhitespace(ReturnValue[0]))) {
        locationfield.innerHTML=trim(ReturnValue[0]);
        if(trim(ReturnValue[1])=="V") {
          locationbox.innerHTML=InputClear.innerHTML;
          locationdata.innerHTML=InputVol.innerHTML;
          document.AddForm.locatype.value="V";
        } else {
          if(trim(ReturnValue[1])=="M") {
          locationbox.innerHTML=InputClear.innerHTML;
            locationdata.innerHTML=InputFilm.innerHTML;
            document.AddForm.locatype.value="M";
          } else {
            locationbox.innerHTML="";
            locationdata.innerHTML="";
            document.AddForm.locatype.value="";
          }
        }
        ClearTable();
        return;
     }
    }
  locationbox.innerHTML="";
  locationfield.innerHTML="";
  locationdata.innerHTML="";
  document.AddForm.locatype.value="";
  ClearTable();
  }
 }
}


function AddOutputArray(MKey,Name,Locn,Date,Desc,Vols,LinkVolm,LocType) {
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

  // LinkVolm <> Spaces, when Visit number is entered, default volume to
  // the link visit volume
  if (!isWhitespace(LinkVolm)) {
    savol=LinkVolm;
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

  if (LocType != undefined) {
    OutputArray[OutputArray.length] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" +  OutputArray.length + "');>" +
    MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu id=volumenu" + OutputArray.length +
    " onChange=\"SetVolNum(this.value,'" +
    OutputArray.length + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + Name + "</td>" +
        "<td>" + Locn + "</td>" +
        "<td>" + Date + "</td>" +
        "<td id=volcom" + OutputArray.length + " >" + LocType + "&nbsp;</td>" +
        "<td>" + Desc + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        MKey + "'></tr>"
  } else {
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

  RecordCount++;
}
function AddOutputArrayReq(MKey,Name,Locn,Date,Desc,Vols,Req,
                           ReqClas,LinkVolm,LocType) 
{
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

  // LinkVolm <> Spaces, when Visit number is entered, default volume to
  // the link visit volume
  if (!isWhitespace(LinkVolm)) {
    savol=LinkVolm;
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

  if (LocType != undefined){

  OutputArray[OutputArray.length] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecordReq('" +  OutputArray.length + "');>" +
    MKey.replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu id=volumenu" + OutputArray.length +
    " onChange=\"SetVolNum(this.value,'" +
    OutputArray.length + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + Name + "</td>" +
        "<td class=" + ReqClas.value + ">" + Req.value + "</td>" +
        "<td>" + Locn + "</td>" +
        "<td>" + Date + "</td>" +
        "<td id=volcom" + OutputArray.length + " >" + LocType + "&nbsp;</td>" +
        "<td>" + Desc + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        MKey + "'></tr>"
  } else {
    OutputArray[OutputArray.length] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecordReq('" +  OutputArray.length + "');>" +
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

  RecordCount++;
}

function OutputDivisionReq() {
  if (document.AddForm.locatype.value == 'V') {

  OutputString="<table width=100% align=center cellspacing=0 border=0>" +
    "<tr><td colspan=8 class=HeadingCell>Count: " + RecordCount + "</td></tr>" +
    "<tr><td class=HeadingCell>Delete U/R</td>" +
    "    <td class=HeadingCell align=center>Volume</td>" +
    "    <td class=HeadingCell>Patient Name</td>" +
    "    <td class=HeadingCell>Outstanding Requests</td>" +
    "    <td class=HeadingCell>Current Location</td>" +
    "    <td class=HeadingCell>Last Movement</td>" +
    "    <td class=HeadingCell>Volume Comments</td>" +
    "    <td class=HeadingCell>Description</td></tr>"
  } else {
    if (document.AddForm.locatype.value == 'M') {
      OutputString="<table width=100% align=center cellspacing=0 border=0>" +
    "<tr><td colspan=8 class=HeadingCell>Count: " + RecordCount + "</td></tr>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Outstanding Requests</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Microfilm</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
    } else {
        OutputString="<table width=100% align=center cellspacing=0 border=0>" +
    "<tr><td colspan=7 class=HeadingCell>Count: " + RecordCount + "</td></tr>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Outstanding Requests</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
    }
  }

  for (i=OutputArray.length-1;i>=0;i--) {
    OutputString+=OutputArray[i]
  }
  OutputString+="</table>"
  Results.innerHTML=OutputString
  for (i=OutputArray.length-1;i>=0;i--) {
    if(document.getElementById('volumenu' + i)) {
      if(document.getElementById('volumenu' + i).value=="99") {
        ClearVolComment(i);
      }
    }
  }
}

function OutputDivision() {
  if (document.AddForm.locatype.value == 'V') {
    OutputString="<table width=100% align=center cellspacing=0 border=0>" +
    "<tr><td colspan=7 class=HeadingCell>Count: " + RecordCount + "</td></tr>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Volume Comments</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
  } else {
    if (document.AddForm.locatype.value == 'M') {
      OutputString="<table width=100% align=center cellspacing=0 border=0>" +
    "<tr><td colspan=7 class=HeadingCell>Count: " + RecordCount + "</td></tr>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Microfilm</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
    } else {
      OutputString="<table width=100% align=center cellspacing=0 border=0>" +
    "<tr><td colspan=6 class=HeadingCell>Count: " + RecordCount + "</td></tr>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
     }
  }

  for (i=OutputArray.length-1;i>=0;i--) {
    OutputString+=OutputArray[i]
  }
  OutputString+="</table>"
  Results.innerHTML=OutputString
  for (i=OutputArray.length-1;i>=0;i--) {
    if(document.getElementById('volumenu' + i)) {
      if(document.getElementById('volumenu' + i).value=="99") {
        ClearVolComment(i);
      }
    }
  }
}

function ClearTable() {

 if(parseInt(AddForm.mrcntday.value,10)>0) {
  if (document.AddForm.locatype.value == 'V') {

  OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Outstanding Requests</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Volume Comments</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
  } else {
    if (document.AddForm.locatype.value == 'M') {
      OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Outstanding Requests</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Microfilm</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
    } else {
        OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Outstanding Requests</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
    }
  }
 } else {
  if (document.AddForm.locatype.value == 'V') {
    OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Volume Comments</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
  } else {
    if (document.AddForm.locatype.value == 'M') {
      OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Microfilm</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
    } else {
      OutputString="<table width=100% align=center cellspacing=0 border=0>" +
            "<tr><td class=HeadingCell>Delete U/R</td>" +
            "    <td class=HeadingCell align=center>Volume</td>" +
            "    <td class=HeadingCell>Patient Name</td>" +
            "    <td class=HeadingCell>Current Location</td>" +
            "    <td class=HeadingCell>Last Movement</td>" +
            "    <td class=HeadingCell>Description</td></tr>"
     }
  }
 }
 OutputArray = new Array();  // Create Array to Store Rows of Table
 OutputString+="</table>"
 Results.innerHTML=OutputString
 for (i=OutputArray.length-1;i>=0;i--) {
   if(document.getElementById('volumenu' + i)) {
     if(document.getElementById('volumenu' + i).value=="99") {
       ClearVolComment(i);
     }
   }
 }
}

function SetVolNum(volume,position,ur) {
  if (volume=="99") {
    OldArray=OutputArray
    OutputArray = new Array();  // Create Array to Store Rows of Table
    ItemCnt--;
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
      ClearVolComment(position);
    }
    return;
  }
   VolumeList(volume,position,ur);
}
function ClearVolComment(position) {
  if(document.getElementById('volcom' + position)) {
     document.getElementById('volcom' + position).innerHTML="";
  }
}
function VolumeList(volume,position,ur) {

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
    DisplayTable();
}

function DisplayTable() {
 if((document.AddForm.locatype!=undefined) &&
     (document.AddForm.locatype.value=="V")) {

   if(parseInt(AddForm.mrcntday.value,10)>0) {
    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu id=volumenu" + position +
    " onChange=\"SetVolNum(this.value,'" +
    position + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + AddForm.osreqcls.value + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td id=volcom" + position + " >" + ReturnValue[28] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
   } else {
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
        "<td id=volcom" + position + " >" + ReturnValue[28] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
   }

 } else {

  if((document.AddForm.locatype!=undefined) &&
     (document.AddForm.locatype.value=="M")) {

   if(parseInt(AddForm.mrcntday.value,10)>0) {

    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
    position + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + AddForm.osreqcls.value + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[29] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
   } else {
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
        "<td>" + ReturnValue[29] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
   }

 } else {

   if(parseInt(AddForm.mrcntday.value,10)>0) {
    OutputArray[position] = "<tr>" +
    "<td><img src=../images/DeleteIcon.gif class=Icon " +
    " onclick=RemoveRecord('" + position + "');>" +
    ReturnValue[0].replace(/\+/g," ").substr(0,8) + "</td>" +
    "<td align=center><select name=volumenu onChange=\"SetVolNum(this.value,'" +
    position + "','" + urnum + "');\">" +
    "<option value='99'>All</option>" +
        dropList + "</select></td>" +
        "<td>" + ReturnValue[1] + "</td>" +
        "<td>" + AddForm.osreqcls.value + "</td>" +
        "<td>" + ReturnValue[2] + "</td>" +
        "<td>" + ReturnValue[3] + "</td>" +
        "<td>" + ReturnValue[4] + "&nbsp;</td>" +
        "<input type=hidden name=mrkeyarr value='" +
        ReturnValue[0] + "'></tr>"
   } else {
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
   }
  }
 }
//
// Note CheckLoc accepts first parameter as an object so using obj mrtkey!!
//
    var mrtkey=new Object();
    mrtkey.value=ReturnValue[0].replace(/\+/g," ");
    filreqed=ReturnValue[18];

    if(parseInt(AddForm.mrcntday.value,10)>0) {
     OutputDivisionReq()
    } else {
     OutputDivision()
    }
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

function ClearComm() {
 if(document.AddForm.clearcom.checked==true){
  if(document.AddForm.volmcomm!=undefined) {
    document.AddForm.volmcomm.value="";
  }
  if(document.AddForm.micrfilm!=undefined) {
    document.AddForm.micrfilm.value="";
  }
 }
}

function Clearbox() {
  document.AddForm.clearcom.checked=false;
}
function RemoveRecord(RecordNo){
  OldArray=OutputArray 
  OutputArray = new Array();  // Create Array to Store Rows of Table
  ItemCnt--;

  if (RecordCount > 0) RecordCount--;

  j=0;
  for (i=0;i<OldArray.length;i++) {
    if (i!=RecordNo) {
      repStr=new RegExp("RemoveRecord.'" + i + "'.;>")
      repStr1=new RegExp("SetVolNum.this.value.'" + i + "'.");
      newStr="RemoveRecord('" + j + "');>"
      newStr1="SetVolNum(this.value,'" + j + "',";
      OldArray[i]=OldArray[i].replace(repStr,newStr);
      OutputArray[j]=OldArray[i].replace(repStr1,newStr1);
      j++
    }
  }
  OutputDivision()
}
function RemoveRecordReq(RecordNo){
  OldArray=OutputArray;
  OutputArray = new Array();  // Create Array to Store Rows of Table
  ItemCnt--;

  if (RecordCount > 0) RecordCount--;

  j=0;
  for (i=0;i<OldArray.length;i++) {
    if (i!=RecordNo) {
      repStr=new RegExp("RemoveRecordReq.'" + i + "'.;>")
      repStr1=new RegExp("SetVolNum.this.value.'" + i + "'.");
      newStr="RemoveRecordReq('" + j + "');>"
      newStr1="SetVolNum(this.value,'" + j + "',";
      OldArray[i]=OldArray[i].replace(repStr,newStr);
      OutputArray[j]=OldArray[i].replace(repStr1,newStr1)
      j++
    }
  }
  OutputDivisionReq()
}
