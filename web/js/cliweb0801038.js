//jsVersion  : V11.03.01
//========================================================================
// Program   : cliweb0801030.js
//
// Written   : 09.02.2015 B.G.Ackland
//
// Version   :
//========================================================================
var showAllDocuments = false;
var typeFilter = "";
function init() {
  SetCookie('ClinicalDocument','');
  wurl="cliweb08.pbl?reportno=1&template=29"+
       "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
       "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
       "&filter03=" + document.PatientLinks.filter03.value.replace(/ /g,"+") +
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
    DocumentInitTable();
  } else {
    alert("Clinical Documents Web Service Not available cliweb08.php");
  }
}
function showAll(el) {
  if (showAllDocuments) {
    showAllDocuments = false;
    el.value="Show All";
  } else {
    showAllDocuments = true;
    el.value="Hide";
  }
  DocumentInitTable();
}
function TypeFilter(TypeCode) {
  typeFilter=TypeCode;
  DocumentInitTable();
}
function DocumentInitTable() {
 var markAsDeleted = 1;
 var markAsDraft = 2;
 var markAsCurrentDraft = 3;
 var clinicDocRecordFound = false;
 var filterArray = new Array();
 var newFilter=true;
 t = new Table();
 AddDocRows();
 SortOrderBy=3;
 t.rows.sort(RevStringSort);
 for(var i = 0; i < t.rows.length; i++) {
   if(!(t.rows[i][16] == markAsDeleted||t.rows[i][16] == markAsDraft)||showAllDocuments) {
     newFilter=true;
     for(var j = 0; j<filterArray.length;j++) {
       if (filterArray[j][0]==t.rows[i][4]) {
         filterArray[j][2]++;
         newFilter=false;
       }
     }
     if (newFilter) {
      filterArray[filterArray.length] = new Array();
      filterArray[filterArray.length-1][0] = t.rows[i][4];
      filterArray[filterArray.length-1][1] = t.rows[i][11];
      if (isWhitespace(t.rows[i][11])) filterArray[filterArray.length-1][1] = t.rows[i][4];
      filterArray[filterArray.length-1][2] = 1;
     }
   }
 }
 OS="";
 for(var j = 0; j< filterArray.length;j++) {
   OS+="<input style='font-weight:bold;padding-left:5px;text-align:left;width:150px;height:30px' type=button value='"+
       trim(filterArray[j][1])+" ("+filterArray[j][2]+")'"+
       " onclick=\"TypeFilter('"+filterArray[j][0]+"');\">"
 }
 if (!isWhitespace(typeFilter)) {
   OS+="<input style='font-weight:bold;padding-left:5px;text-align:left;width:150px;height:30px' type=button value='Reset'"+
       " onclick=\"TypeFilter('');\">"
 }
 var FilterLocation = document.getElementById("FilterLocation");
 FilterLocation.innerHTML = OS;
 OS='<ul class=ListNote>'
 for(var i = 0; i < t.rows.length; i++) {
   if(!(t.rows[i][16] == markAsDeleted||t.rows[i][16] == markAsDraft)||showAllDocuments) {
     if(isWhitespace(typeFilter)||t.rows[i][4] == typeFilter) {
       clinicDocRecordFound = true;
       DocType="DEF"
       if (t.rows[i][0].match(/\.pdf/i)) DocType="PDF";
       if (t.rows[i][0].match(/\.gif/i)) DocType="IMG";
       if (t.rows[i][0].match(/\.jpg/i)) DocType="IMG";
       if (t.rows[i][0].match(/\.png/i)) DocType="IMG";
       if (t.rows[i][0].match(/\.doc/i)) DocType="OFF";
       if (t.rows[i][0].match(/\.xls/i)) DocType="OFF";
       OS += "<li class='ItemNote docMarkedAs"+t.rows[i][16]+
             "'><span onclick=\"LinkDoc('"+t.rows[i][0]+"','"+
             t.rows[i][1]+"','"+t.rows[i][16]+"','"+t.rows[i][2]+"');\">" +
             "<span class='showDocumentIcon"+DocType +
             "' style='float:left;' ></span>"+ t.rows[i][11]
       if (t.rows[i][16] == markAsCurrentDraft) OS += "  (Current Draft)"
       if (t.rows[i][16] == markAsDraft) OS += "  (Draft)"
       if (t.rows[i][16] == markAsDeleted) OS += "  (Deleted)"
       OS += "<span class=ntType style='float:right'>"+t.rows[i][12]+"</span><br>"
       if (!isWhitespace(t.rows[i][8]+t.rows[i][9])) {
       OS += "<span class=ntTo>To : "+t.rows[i][9]+"</span>"
       if (!isWhitespace(t.rows[i][8]))
          OS+= "<span class=ntFrom>From : "+t.rows[i][8]+"</span>"
       }
       OS += "</span><br>";
       OS += "<span  class=ntSubject>Subject : "+t.rows[i][6]+"</span>"
       OS += "<span class=ntEdit onclick=\"EditDocument('"+t.rows[i][2]+"');\">View Properties</span></br>"
       OS += "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][3])+"</span>"  +
             "<span class=ntWhen>"+FormatDateTime(t.rows[i][3])+"</span>"  +
             "</li>";
     }
   }
 }
 OS+='</ul>'
 ListLocation = document.getElementById("TableLocation");
 ListLocation.innerHTML = OS;

 if (t.rows.length == 0) {
   ListLocation.innerHTML += "<ul class=ListNote>" +
                             "<li class=ItemNote style='text-align:center;'>" + 
                             "No Documents Recorded for this Patient</li><li class=ItemRes></li></ul>"
 }
}
function FormatCommentAge(datetime) {
 yyyy = datetime.substr(0,4);
 mm = datetime.substr(4,2);
 dd = datetime.substr(6,2);
 hh = datetime.substr(8,2);
 mi = datetime.substr(11,2);
 var thisDate= new Date(yyyy,parseInt(mm,10)-1,dd,hh,mi);
 var today= new Date();
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

function EditDocument(detailky) {
 linkurl="cliweb08.pbl?reportno=1&template=3"+
      "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
      "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") +
      "&detailky=" + detailky
  Left=(document.body.clientWidth-480)/2
  DFrameLink(linkurl,0,Left,480,400)
}

function viewCliDoc(obsaudky) {
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=91" +
                    "&valdcode=" + obsaudky.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
}
function LinkDoc(linkurl1,linkurl2,docStatus,detailky) {
  viewCliDoc(detailky);
  if (docStatus == '3') {
    SetCookie('ClinicalDocument',detailky);
    linkurl="patweb98.pbl?reportno=1&template=320"+
            "&urnumber=" + document.PatientLinks.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + document.PatientLinks.admissno.value.replace(/ /g,"+") 
    location.href=linkurl;
  } else {
    SetCookie('ClinicalDocument','');
    myWin=open(linkurl2,"",
    "left=100,top=100,width=830,height=600,scrollbars=yes,status=no,toolbar=no,menubar=no,resizable=yes");
  }
}

