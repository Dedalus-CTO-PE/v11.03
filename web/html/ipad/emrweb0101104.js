//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0101104.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 26.08.2013 B.G.Ackland   CAR 289383
//                      New
//
var FilterColumn = new Array();
var FilterValue = new Array();
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
}
function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 obj=PatientRecords;
 t=PatientRecords;
 PatientList();
 SortOrderBy=5;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 MaxRowNo=t.rows.length;
 ShowFilter("doctorFilter","11");
 ShowFilter("unitFilter","32");
 ShowFilter("genderFilter","8");
 ShowFilter("triageFilter","6");
}
function FilterList(el,ColumnNo) {
  for(var f = 0; f < FilterColumn.length; f++) {
    if (FilterColumn[f]==ColumnNo) {
       FilterValue[f]=el.options[el.selectedIndex].value;
    }
  }
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 RemovePatDiv();
}
function ListFilter(el) {
  for(var f = 0; f < FilterValue.length; f++) {
    if (FilterValue[f]!='') {
      if (FilterValue[f]!=el[FilterColumn[f]]) { 
        return false; 
      }
    }
  }
  return true;
}
function ShowFilter(FilterName,ColumnNo) {
 var FilterList = new Array();
 var FilterCount = new Array();
 FilterColumn[FilterColumn.length]=ColumnNo;
 FilterValue[FilterValue.length]='';
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   if (!isWhitespace(PatientRecords.rows[i][ColumnNo])) {
     addItem=true;
     for(var j = 0; j < FilterList.length; j++) {
       if (PatientRecords.rows[i][ColumnNo]==FilterList[j]) {
         addItem=false;
         FilterCount[j]++
       }
     }
     if (addItem) {
       FilterList[FilterList.length]=PatientRecords.rows[i][ColumnNo];
       FilterCount[FilterCount.length]=1;
     }
   }
 }
 el=document.getElementById(FilterName)
 for(var j = 0; j < FilterList.length; j++) {
   FilterList[j]=FilterList[j]+"("+FilterCount[j]+")";
 }
 FilterList.sort();
 for(var j = 0; j < FilterList.length; j++) {
   optionVal=FilterList[j].replace(/\(.\)$/,"").replace(/\(..\)$/,"").replace(/\(...\)$/,"");
   el.options[el.options.length] = new Option(FilterList[j],optionVal);
 }
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   PatientRecords.rows[i][0]=PatientRecords.rows[i][3]
   PatientRecords.rows[i][1]=PatientRecords.rows[i][4]
   if (PatientRecords.rows[i][5].substring(0,1)==" "){ PatientRecords.rows[i][5]="0"}
   if (ListFilter(PatientRecords.rows[i])) {
     arrvdttm=PatientRecords.rows[i][7];
     ClassString= TriageTime(PatientRecords.rows[i][5],PatientRecords.rows[i][12],arrvdttm,immediate,emergency,urgent,semi,non,PatientRecords.rows[i][25],PatientRecords.rows[i][26]);
     OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
           "<span class='triage "+ClassString+"'>"+
           PatientRecords.rows[i][5].substring(0,1).replace(/0/,"?")+ "</span>" +
           "<span style='width:56%;display:inline-block'>"+PatientRecords.rows[i][39] +"</span>"+
           "<span class=subscriptRight style='position:absolute;right:2%;'>"+
           PatientRecords.rows[i][2] + "</span>" +
           "<br><span class=ntTimeframe>Problem: "+PatientRecords.rows[i][34] + "</span>" +
           "<span class=ntWhen>"+PatientRecords.rows[i][43] + "</span>" +
           "<br><span class=ntTimeframe>Arrival: "+
           FormatCommentAge(PatientRecords.rows[i][7]) + " " +
           FormatDateTime(PatientRecords.rows[i][7]) + "</span>" +
           "<span class=ntWhen>"+ PatientRecords.rows[i][19] + " " +
           FormatDateTime(PatientRecords.rows[i][47]).substr(-5) + "</span>" +
           "<br><span class=ntTimeframe>"+PatientRecords.rows[i][11] +"&nbsp;</span>"+
           "<span class=ntWhen>"+PatientRecords.rows[i][44] +"</span>"+
           "</li>";
   }
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function TriageTime(triagecode,doctdttm,arrvdttm,immediate,emergency,urgent,semi,non,status,dest) {
  if (status=="2  ") {
    if (dest=="2") {
      theclass = "AdmitIcon"; } 
    else {
      theclass = "HomeIcon"; }
    return(theclass);
   }
   tcode= new String(triagecode)
   if ((doctdttm == "                ")||(doctdttm == "")) {
     datetime = arrvdttm;
     CalcTime(datetime);
     if ((triagecode == 1) & (difference >= immediate)) {
       theclass = "triage1 flash";
     }
     else { 
       if ((triagecode == 2) & (difference >= emergency)) {
         theclass = "triage2 flash";
       }
       else { 
         if ((triagecode == 3) & (difference >= urgent)) {
           theclass = "triage3 flash";
         }
         else { 
           if ((triagecode == 4) & (difference >= semi)) {
             theclass = "triage4 flash";
           }
           else { 
             if ((triagecode == 5) & (difference >= non)) {
               theclass = "triage5 flash";
             }
             else { 
               if (triagecode == 6) {
                 theclass = "triage6";
               }
               else {
                 theclass = "triage" + tcode.substr(0,1);
               }
             }
           }
         }
       }
     }
   }
   else {
      theclass = "triage" + tcode.substr(0,1);
   }
   return(theclass);
}
function CalcTime(datetime) {
   today = new Date();
   yyyy = datetime.substr(0,4)
   mm = datetime.substr(4,2)
   mm = mm - 1
   dd = datetime.substr(6,2)
   hh = datetime.substr(8,2)
   mi = datetime.substr(11,2)
   ss = datetime.substr(14,2)
   cdate = new Date(yyyy,mm,dd,hh,mi,ss);
   difference = today.getTime() - cdate.getTime();
   difference = Math.floor(difference / (1000 * 60));
   return(difference);
}

