//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9702003.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.01.00       28/06/2012                   New
//
function SetPeriod(el) {
  if (el.vyearmth) el.vyearmth.options[el.vyearmth.selectedIndex].value=' ';
  if (el.lastdate) el.lastdate.options[el.lastdate.selectedIndex].value=' ';
  el.submit();
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowPatientList();
 RemovePatDiv();
}
function InitTable() {
  PatientRecords = new Table("patient-list","patient-item");
  t=PatientRecords;
  PatientList();
  SortOrderBy=2;
  PatientRecords.rows.sort(StringSort);
  CurrentDiv=document.getElementById("ListLocation");
  ShowPatientList();
  MaxRowNo=t.rows.length;
  el=document.getElementById("filterControls");
  el.innerHTML="";
  el.innerHTML+=makeListFilter(t,"wardcode","All Wards",12);
  el.innerHTML+=makeListFilter(t,"typecode","All Types",13);
}
function ShowPatientList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
 var DisplayRow=0;
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   if (listFilter(PatientRecords.rows[i])) {
     DisplayRow++;
     strFolder=FormatPatientIcon(PatientRecords.rows[i][7])
     discDateTime=PatientRecords.rows[i][4];
     OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
           strFolder + PatientRecords.rows[i][2] +
           "<br><span class=ntTimeframe>Admitted:"+FormatDate(PatientRecords.rows[i][3]) + "</span>" +
           "<span class=ntWhen>Doctor: "+PatientRecords.rows[i][8] + "</span>" +
           "<br><span class=ntTimeframe>Type:"+PatientRecords.rows[i][13] + "</span>" +
           "<span class=ntWhen>Ward: "+PatientRecords.rows[i][12] + "</span>" +
           "<br>"+
           "<span class=ntTimeframe>Discharged:"+FormatDateTime(discDateTime)+ "</span>" +
           "<span class=ntWhen>"+FormatCommentAge(discDateTime) + "</span>" +
           "</li>";
   }
 }
 if (DisplayRow==0) {
   OS += "<li class=sectionItem>" + 
         "No Patients Found Matching Selection Criteria." + 
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
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
function FormatPatientIcon(Indicators) {
  ImageStr="<span class=PatientFolder"+ Indicators.substr(0,3) + "></span>"
  return ImageStr;
}
function filterList(el,filterId,filterNo) {
  filterValues[filterNo]=el.options[el.selectedIndex].value;
  ShowPatientList();
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
function makeListFilter(t,filterId,titleFilter,ColumnNo) {
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
 RS='<select title=Filter id='+filterId+
    ' onchange=filterList(this,"'+filterId+
    '","'+(filterValues.length-1)+'") class=selectMenu>';
 RS+="<option value=''>"+titleFilter+"</option>";
 for(var j = 0; j < FilterList.length; j++) {
   RS+="<option value=\""+FilterList[j]+"\">"+FilterList[j]+"</option>";
 }
 RS+="</select>"
 return RS;
}

