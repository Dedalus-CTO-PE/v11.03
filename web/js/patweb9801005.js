//jsVersion  : V11.03.00
//----------------------------------------------------------------------
// patweb9801005 - Clinical Notes display functions
//----------------------------------------------------------------------
var clientOffsetTime;
var notesViewAll = false;
var filterColumns = new Array();
var filterValues = new Array();
var filterIds = new Array();
var filterBlock;
var SortSequence;
function init() {
  if (typeof defaultProgressNoteType == "undefined") {
    alert("Error:Default Note Type Has Not Been Configured in Custom.js");
  }
  if (notesViewAll) {  
     ViewAll();
     return
  }
  t=document.getElementById("PageTitle")
  if (isWhitespace(PatientVIS)) {
     t.innerHTML="Clinical Notes - All Visits"
     t=document.getElementById("AddNotes")
     t.style.display="none";
     t=document.getElementById("PreviousVisits")
     t.style.display="none";
  }
  else t.innerHTML = "Clinical Notes - Current Visit"
  wurl="cliweb06.pbl?reportno=1&template=17"+
       "&urnumber=" + document.NewNote.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.NewNote.admissno.value.replace(/ /g,"+") +
       "&httprand=" + Math.random();
  var h = document.getElementsByTagName("head")[0];
  var s = document.createElement("script");
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", wurl, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    NoteInitTable();
  }
  else {
    alert("Notes Web Service Not available cliweb06.pbl");
  }
  setTimeout(fitToContent,200);
}
function ShowDeleted() {
  t=document.getElementById("DeletedComments")
  if (t.value=="Hide Deleted") {
      t.value="Show Deleted";
      showdltd="0";
  } else {
      t.value="Hide Deleted";
      showdltd="1";
  }
  t=document.getElementById("PreviousVisits")
  if (t.value=="Show All Visits") {
    template="17";
  } else {
    template="16";
  }
  CallServer();
}
function CallServer() {
  wurl="cliweb06.pbl?reportno=1&template="+template+
       "&urnumber=" + document.NewNote.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.NewNote.admissno.value.replace(/ /g,"+") +
       "&showdltd=" + showdltd +
       "&httprand=" + Math.random();
  var h = document.getElementsByTagName("head")[0];
  var s = document.createElement("script");
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", wurl, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    s.type="text/javascript";
    h.appendChild(s);
    s.text=xmlHttp.responseText;
    NoteInitTable();
  }
  else {
    alert("Notes Web Service Not available cliweb06.pbl");
  }
  setTimeout(fitToContent,200);
}
function ViewAll() {
  t=document.getElementById("PageTitle")
  t.innerHTML="Clinical Notes - All Visits"
  t=document.getElementById("PreviousVisits")
  if (t.value=="Show All Visits") {
    template="16";
    t.value="Current Visit";
  } else {
    template="17";
    t.value="Show All Visits";
  }
  t=document.getElementById("DeletedComments")
  if (t.value=="Hide Deleted") {
      showdltd="1";
  } else {
      showdltd="0";
  }
  CallServer();
}
function AddNote() {
   if(NewNote.notetype.value.substr(0,3)=="006" && NewNote.clinsumm.value=="1"){
      alert("Clinical Summary already exists")
      return;}
   if(NewNote.notetype.value.substr(0,3)=="007" && NewNote.hospsumm.value=="1"){
      alert("In Hospital Summary already exists")
      return;}
   if(NewNote.notetype.value.substr(0,3)=="008" && NewNote.dischmed.value=="1"){
      alert("Discharge Medication details already exist")
      return;}

   if (NewNote.notetype.value.substr(0,3)=="009") {
     if (NewNote.nurssumm.value=="1") {
       alert("Nursing Diagnosis already exists")
       return;
     }
     else {
       var serverURL = "../cgi-bin/comweb81.pbl?reportno=27" +
           "&valdtype=V" +
           "&valdurno=" + document.NewNote.urnumber.value.replace(/ /g,"+") +
           "&valdadmn=" + document.NewNote.admissno.value.replace(/ /g,"+")
       var returnValue = RSExecute(serverURL);
       if (returnValue.status==0) {
         ReturnValue = returnValue.return_value.split("|")
         if (trim(ReturnValue[0])=="1") {  
           edituser = trim(ReturnValue[1]);
           editdati = trim(ReturnValue[2]);
           alert('The Nursing Diagnosis record is currently ' +
                 'being edited by:\n' +
                 '  User: ' + edituser + "\n" +
                 '  Date: ' + editdati);
           location.reload();
           return;
         }
       }
     }
   }

   if(NewNote.webstlev.value < NewNote.notetype.value.substr(6,2)){
      alert("Invalid Security Level for this Note Type")
      return;}

      ltemplate=NewNote.notetype.value.substr(3,3);
      linkurl="cliweb06.pbl?reportno=01&template="+ltemplate.replace(/ /g,"+")+
          "&urnumber=" + document.NewNote.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + document.NewNote.admissno.value.replace(/ /g,"+") +
          "&clnot001=" + document.NewNote.notetype.value.replace(/ /g,"+")
      location.href=linkurl;
}
function NoteInitTable() {
 t = new Table();
 try{
   AddNoteRows();
 }
 catch(e){
   alert("No notes to display: Null or Invalid Patient Visit Number");
 }
 SortOrderBy=0;
 SortSequence=0;
 t.rows.sort(RevStringSort);
 filterBlock = "<span class=ntWho style='width:145px;'>Filter Notes </span>" + 
               makeFilter(t,"filterWho","Everyone","1")+
               makeFilter(t,"filterGroup","All Groups","4")+
               makeFilter(t,"filterType","All Types","9")+
               "&nbsp;<input type=button value=Sort onclick=sortList() class=button>";
 NoteShowTable();
}
function NoteShowTable() {
 OS='';
 if (!isWhitespace(PatientVIS)) {
 OS+='<ul class=ListNote>'+
    '<li class=ItemNote>'+
    '<form name="NewNote2" id="NewNote2" action="cliweb06.pbl" method="post" onsubmit="return false;">' +
    '<input type="hidden" name="reportno" value="1">' +
    '<input type="hidden" name="template" value="1">' +
    '<input type="hidden" name="urnumber" value="'+PatientURN+'">' +
    '<input type="hidden" name="admissno" value="'+PatientVIS+'">' +
    '<input type="hidden" name="formactn" id="formactn" value="A">' +
    '<input type="hidden" name="clnot001" id="clnot001" value="'+ defaultProgressNoteType+'">' +
    '<input type="hidden" name="nextpage" value="2">' +
    '<input type="hidden" id="dummy" name="dummy" value="">' +
    '<span class=ntWho>'+UserName+'</span>' +
    '<textarea placeholder="Progress Note/Comment..." name=notetext class=ntTextarea' +
    ' rows=1 cols=50 id=notetext onfocus="this.rows=5" onblur="this.rows=1"></textarea>'+
    '<input type=button onclick="SubmitNote(this.form);" value="Add Note" class=button>'+
    '</form></li>'
 }
 else{
   OS+="<br><br>";
 }
 OS += "<li class=ItemFilter>" + filterBlock + "</li>"
 for(var i = 0; i < t.rows.length; i++) {
   if (listFilter(t.rows[i])) {
     setClass=""
     deletedBy = ""
     if((t.rows[i][15].replace(/(^[\s]+|[\s]+$)/g, '')!="")&&(t.rows[i][14]!="0")){
        deletedBy = "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"+
        "Deleted By: "+t.rows[i][15].replace(/(^[\s]+|[\s]+$)/g, '');
     }
     if (t.rows[i][2]!=PatientVIS) setClass="OldNotes"
     if (t.rows[i][14]=="0") {
       OS += "<li class='ItemNote "+setClass+"' onclick=\"LinkNote('"+PatientURN +
             "','"+t.rows[i][2]+
             "','"+t.rows[i][3]+
             "','"+t.rows[i][11]+
             "','"+t.rows[i][9]+"');\">";

       OS += "<div class=ntRow><span class=ntWho>"+t.rows[i][1]+"</span>" +
             "<span class=ntWho>"+deletedBy+"</span>"+
             "<span class=ntType>"+t.rows[i][9]+"</span></div><br>"
       OS += "<span class=ntWhat>"
       if (!isWhitespace(t.rows[i][5]))  OS += t.rows[i][5]+"<br>";
       if (!isWhitespace(t.rows[i][6]))  OS += t.rows[i][6]+"<br>";
       if (!isWhitespace(t.rows[i][7]))  OS += t.rows[i][7]+"<br>";
       if (!isWhitespace(t.rows[i][8]))  OS += t.rows[i][8]+"<br>";
       if (!isWhitespace(t.rows[i][10])) OS += t.rows[i][10];
       OS += "</span><br>"  +
             "<div class=ntRow><span class=ntTimeframe>"+FormatCommentAge(t.rows[i][0])+"</span>"  +
             "<span class=ntWhen>"+FormatDateTime(t.rows[i][0])+"</span></div>"
       OS += "</li>"

     } else { 
       OS += "<li class='ItemNote "+setClass+"'>";
       OS += "<div class=ntRow><span class=ntWho><del>"+t.rows[i][1]+"</del></span>" +
             "<span class=ntWho>"+deletedBy+"</span>"+
             "<span class=ntType><del>"+t.rows[i][9]+"</del></span></div><br>"
       OS += "<span class=ntWhat><del>"
       if (!isWhitespace(t.rows[i][5]))  OS += t.rows[i][5]+"<br>";
       if (!isWhitespace(t.rows[i][6]))  OS += t.rows[i][6]+"<br>";
       if (!isWhitespace(t.rows[i][7]))  OS += t.rows[i][7]+"<br>";
       if (!isWhitespace(t.rows[i][8]))  OS += t.rows[i][8]+"<br>";
       if (!isWhitespace(t.rows[i][10])) OS += t.rows[i][10];
       OS += "</del></span><br>"  +
             "<div class=ntRow><span class=ntTimeframe><del>"+FormatCommentAge(t.rows[i][0])+"</del></span>"  +
             "<span class=ntWhen><del>"+FormatDateTime(t.rows[i][0])+"</del></span></div>"
       OS += "</li>"
     }
   }
 }
 OS+='</ul>'
 ListLocation = document.getElementById("TableLocation");
 ListLocation.innerHTML = OS;
 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListNote>" +
               "<li class=ItemNote style='text-align:center;'>" + 
               "No Notes Recorded for this Patient Visit</li><li class=ItemRes></li></ul>"
 }
}
function ShowAudit(){
  url="cliweb06.pbl?reportno=1&template=17"+
      "&urnumber=" + document.NewNote.urnumber.value.replace(/ /g,"+") +
      "&admissno=" + document.NewNote.admissno.value.replace(/ /g,"+") +
      "&formactn=V0";
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", url, false);
  xmlHttp.send();
  if(xmlHttp.responseText!=""&&xmlHttp.status == 200) {
     ReturnValue=xmlHttp.responseText.split("|");
     PopulateBlankPopup(ReturnValue[1],400,500);
  }
}
function PopulateBlankPopup(htmlContent,FrameWidth,FrameHeight) {
  PopUpFrame.document.open();
  PopUpFrame.document.write('' +
  '<html style="overflow:auto" scrolling="yes" scrollbars="yes">' +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<script type="text/javascript" src="../js/Standard.js"></script>' +
  '<meta name="ServerID" id="ServerID" content="PATWEB98">' +
  '<meta name="ServerVersion" id="ServerVersion" content="V11.01.00">' +
  '<meta name="ServerName" id="ServerName" content="Patient Enquiries Template Server">' +
  '<meta name="TemplateFile" id="TemplateFile" content="patweb9801005.html">' +
  '<meta name="TemplateVersion" content="V11.01.00">' +
  '<meta name="TemplateHome" content="standard">' +
  '<body style="margin:0;">' +
  '<span class=DFrameTitleBar id="titlebar" style="cursor:default">' +
  '<div class="x-tool x-tool-close" title="Close" onclick="DFrameExit();"></div>Clinical Notes Audit</span>' +
  '<span><div style="overflow:auto; height:412px">' +
  '<table width=100% border=1>' +
  '<tr><td class=HeadingCell>User</td><td class=HeadingCell>Date / Time</td>' +
  '<td class=HeadingCell>Visit Number</td></tr>' + htmlContent +
  '</table></div><br>' +
  '<center><input type=button value="Close" style="cursor:pointer" onclick="DFrameExit();"></center>' +
  '<br></span></body></html>');

   PopUpFrame.document.close();

   MaxWidth=document.body.clientWidth;
   MaxHeight=document.body.clientHeight;

   if (FrameWidth > MaxWidth) {
     PopUpScreen.style.width=MaxWidth;
   }
   else {
     PopUpScreen.style.width=FrameWidth;
   }

   if (FrameHeight > MaxHeight) {
     PopUpScreen.style.height=MaxHeight;
   }
   else {
     PopUpScreen.style.height=FrameHeight;
   }

   PopUpScreen.style.top=(document.body.clientHeight - FrameHeight)/2 + "px";
   PopUpScreen.style.left=(document.body.clientWidth - FrameWidth)/2 + "px";

   PopUpScreen.style.display="";
}

function listFilter(el) {
  for(var f = 0; f < filterValues.length; f++) {
    if (filterValues[f]!='') {
      if (filterValues[f]!=el[filterColumns[f]]) {
        return false;
      }
    }
  }
  return true;
}
function sortList() {
  if (SortSequence==0) {
    SortSequence=1
    t.rows.sort(StringSort);
  }
  else {
    SortSequence=0
    t.rows.sort(RevStringSort);
  }
  NoteShowTable();
  setFilters();
}
function filterList(el,filterId,filterNo) {
  saveIndex=el.selectedIndex
  filterValues[filterNo]=el.options[el.selectedIndex].value;
  NoteShowTable();
  setFilters();
}
function setFilters() {
  for(var f = 0; f < filterValues.length; f++) {
    if (filterValues[f]!='') {
      el=document.getElementById(filterIds[f]);
      for (g = 1; g < el.length ; g++) {
        if (el.options[g].value==filterValues[f]) el.selectedIndex=g;
      }
    }
  }
}
function makeFilter(t,filterId,titleFilter,ColumnNo) {
 var FilterList = new Array();
 filterColumns[filterColumns.length]=ColumnNo;
 filterValues[filterValues.length]='';
 filterIds[filterIds.length]=filterId;
 for(var i = 0; i < t.rows.length; i++) {
   if (!isWhitespace(t.rows[i][ColumnNo])) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (t.rows[i][ColumnNo]==FilterList[j]) addItem=false;
     }
     if (addItem) FilterList[FilterList.length]=t.rows[i][ColumnNo];
   }
 }
 FilterList.sort();
 RS='<select title=Filter id='+filterId+' onchange=filterList(this,"'+filterId+'","'+(filterValues.length-1)+'") class=listFilter>';
 RS+="<option value=''>"+titleFilter+"</option>";
 for(var j = 0; j < FilterList.length; j++) {
   RS+="<option value=\""+FilterList[j]+"\">"+FilterList[j]+"</option>";
 }
 RS+="</select>"
 return RS;
}
function fitToContent() {
 tas=document.getElementsByTagName("TEXTAREA");
 for (i=0;i<tas.length;i++) {
   if (tas[i].className=='ntWhat') {
     tas[i].style.height = tas[i].scrollHeight+"px";
     tas[i].style.overflow = "hidden";
   }
 }
}
function setServerDateTime() {
   clientOffsetTime=GetCookieData("clientOffsetTime");
   if (isWhitespace(clientOffsetTime)||clientOffsetTime=='unknown')
   {
     var serverURL   = "../cgi-bin/patweb80.pbl?reportno=1"
     var returnValue = RSExecute(serverURL);
     if (returnValue.status==0) {
       ReturnValue=returnValue.return_value.split("|");
       serverDate=trim(ReturnValue[0]);
       serverTime=trim(ReturnValue[1]);
       serverDateTime=new Date(serverDate+' '+serverTime);
       clientDateTime=new Date();
       clientOffsetTime = serverDateTime.getTime() - clientDateTime.getTime();
       SetCookie("clientOffsetTime",clientOffsetTime,"10")
     }
   }
   serverDateTime=new Date();
   serverDateTime.setTime(serverDateTime.getTime() + parseInt(trim(clientOffsetTime),10));
}
function FormatCommentAge(datetime) {
 yyyy = datetime.substr(0,4);
 mm = datetime.substr(4,2);
 dd = datetime.substr(6,2);
 hh = datetime.substr(8,2);
 mi = datetime.substr(11,2);
 var thisDate= new Date(yyyy,parseInt(mm,10)-1,dd,hh,mi);
 var today= new Date();
 if (isWhitespace(clientOffsetTime)) { setServerDateTime(); }
 today.setTime(today.getTime() + parseInt(trim(clientOffsetTime),10));
 var one_min=1000*60
 var one_hour=1000*60*60
 var one_day=1000*60*60*24
 var one_week=1000*60*60*24*7
 var one_month=1000*60*60*24*30
 mid=Math.ceil((today.getTime()-thisDate.getTime())/(one_min))
 hrd=Math.ceil((today.getTime()-thisDate.getTime())/(one_hour))
 dyd=Math.ceil((today.getTime()-thisDate.getTime())/(one_day))
 wkd=Math.ceil((today.getTime()-thisDate.getTime())/(one_week))
 mtd=Math.ceil((today.getTime()-thisDate.getTime())/(one_month))
 if (mtd>2) return mtd+' months ago';
 if (wkd>2) return wkd+' weeks ago';
 if (dyd>2) return dyd+' days ago';
 if (hrd>2) return hrd+' hours ago';
 return mid+' minutes ago';
}
function FormatDateTime(datetime) {
   yyyy = datetime.substr(0,4);
   mm = datetime.substr(4,2);
   dd = datetime.substr(6,2);
   time = datetime.substr(8,5);
   mth3=mth3Name(mm);
   if (isWhitespace(time)) {
      return(dd + " " + mth3 + " " + yyyy); }
   else {
     return(dd + " " + mth3 + " " + yyyy + " at " + time); }
}

function FormatDate(date) {
   yyyy = date.substr(0,4)
   mm = date.substr(4,2)
   dd = date.substr(6,2)
   mth3=mth3Name(mm);
   return(dd + " " + mth3 + " " + yyyy  );
}

function mth3Name(mm) {
   switch(mm) {
     case "01": mth3="Jan"; break;
     case "02": mth3="Feb"; break;
     case "03": mth3="Mar"; break;
     case "04": mth3="Apr"; break;
     case "05": mth3="May"; break;
     case "06": mth3="Jun"; break;
     case "07": mth3="Jul"; break;
     case "08": mth3="Aug"; break;
     case "09": mth3="Sep"; break;
     case "10": mth3="Oct"; break;
     case "11": mth3="Nov"; break;
     case "12": mth3="Dec"; break;
   }
  return mth3;
}
function Table() {
   this.rows      = new Array();
   this.addRow    = _addTableRow;
}
function _addTableRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++)
     row[row.length] = arguments[i];
}
function NumericSort(a,b) {
  return a[SortOrderBy] - b[SortOrderBy];
}

function StringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = -1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = 1  }
  return x ;
}

function RevNumericSort(a,b) {
  return b[SortOrderBy] - a[SortOrderBy];
}

function RevStringSort(a,b) {
  if (a[SortOrderBy] < b[SortOrderBy] ) { x = 1 }
  if (a[SortOrderBy] == b[SortOrderBy] ) { x = 0  }
  if (a[SortOrderBy] > b[SortOrderBy] ) { x = -1  }
  return x ;
}
//------------------------------------------------------------
// Clinical Notes
//------------------------------------------------------------
function SubmitNote(el) {
  if (isWhitespace(el.notetext.value)) {
    return;
  }
  if (isWhitespace(el.admissno.value)) {
    alert('Patient Visit Must be Selected First');
    return;
  }
  var theURL = el.action;
  var postStr = AJAXPostString(el);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status == "200") {
    if ( xmlHttp.responseText.match(/location.href/i) ){
      location.reload()
    }
    else{
      alert( xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,"") );
    }
  }
  else{
    alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
//========================================================================
// Format POST String for AJAX Form Post
//========================================================================
function AJAXPostString(el) {
  parameters="";
  for (i=0;i<el.length;i++) {
    switch (el[i].type) {
     case 'radio': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'checkbox': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+el[i].value+"&";
       }
       break; }
     case 'hidden': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
     case 'select-one': {
       parameters+=el[i].name+"="+el[i].options[el[i].selectedIndex].value +"&";
       break; }
     case 'text': {
       parameters+=el[i].name+"="+el[i].value+"&";
       break; }
     case 'textarea': {
       textareaValue=""
       lines=el[i].value.split("\n")
       for (j=0;j<lines.length;j++) {
         if (lines[j].length>el[i].cols) {
           textareaValue+=setLinefeeds(lines[j],el[i].cols);
         }
         else {
           textareaValue+=lines[j]+"\n";
         }
       }
       textareaValue=encodeURIComponent(textareaValue);
       parameters+=el[i].name+"="+textareaValue+"&";
       break; }
    }
  }
  parameters+='1=1';
  return parameters;
}
function setLinefeeds(textValue,colLength) {
  returnValue="";
  while (textValue.length>colLength) {
    if (textValue.lastIndexOf(" ",colLength)>0) {
      returnValue+=textValue.substr(0,textValue.lastIndexOf(" ",colLength)) +"\n";
      textValue=textValue.substr(textValue.lastIndexOf(" ",colLength)+1);
    }
    else {
      returnValue+=textValue.substr(0,colLength) +"\n";
      textValue=textValue.substr(colLength+1);
    }
  }
  returnValue+=textValue
  return returnValue;
}
//------------------------------------------------------------
// Note Functions (Show, Add, Select Filter)
//------------------------------------------------------------
function LinkNote(urnumber,admissno,noteno,template,title) {
  if (template == "EMR") {
    theURL = 'cliweb06.pbl?reportno=6&template=012'+
             '&urnumber='+urnumber.replace(/ /g,"+") +
             '&admissno='+admissno.replace(/ /g,"+") +
             '&notetype=001'+
             '&notenumb='+noteno.replace(/ /g,"+") +
             '&httprand='+Math.random();
    Left=(document.body.clientWidth-900)/2;
    DFrameLink(theURL,0,Left,900,450);
    return;
  }

  if (template == "REF") {
    theURL = 'cliweb06.pbl?reportno=6&template=012'+
             '&urnumber='+urnumber.replace(/ /g,"+") +
             '&admissno='+admissno.replace(/ /g,"+") +
             '&notetype=008'+
             '&notenumb='+noteno.replace(/ /g,"+") +
             '&httprand='+Math.random();
    Left=(document.body.clientWidth-900)/2;
    DFrameLink(theURL,0,Left,900,450);
    return;
  }

  if (template == "015") {
    var serverURL =
          "../cgi-bin/comweb81.pbl?reportno=27" +
          "&valdtype=V" +
          "&valdurno=" + urnumber.replace(/ /g,"+") +
          "&valdadmn=" + admissno.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue = returnValue.return_value.split("|")
      if (trim(ReturnValue[0])=="1") {
        edituser = trim(ReturnValue[1]);
        editdati = trim(ReturnValue[2]);
        alert('The Nursing Diagnosis record is currently ' +
              'being edited by:\n' +
              '  User: ' + edituser + "\n" +
              '  Date: ' + editdati);
        return;
      }
    }
  }

  theURL = 'cliweb06.pbl?reportno=1&template='+template+
           '&urnumber='+urnumber.replace(/ /g,"+") +
           '&admissno='+admissno.replace(/ /g,"+") +
           '&nzteskey='+admissno.replace(/ /g,"+") + noteno.replace(/ /g,"+") +
           '&httprand='+Math.random();
  location.href=theURL;
}
