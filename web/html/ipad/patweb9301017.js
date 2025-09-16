//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9301017.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01       29.05.2013   Saroeun Soeur  CAR 285867
//                              fixed AddTableRows function
// V10.01.01       01.02.2013                   IE Changes
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//

function InitTable() {
 PatientRecords = new Table("patient-list","patient-item");
 t=PatientRecords;
 AddTableRows();
 SortOrderBy=4;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 ShowWardList();
 MaxRowNo=t.rows.length;
}
function SortPatients(el) {
 SortOrderBy=el.options[el.selectedIndex].value;
 PatientRecords.rows.sort(StringSort);
 CurrentDiv=document.getElementById("ListLocation");
 RemovePatDiv();
 ShowWardList();
}
function ShowWardList() {
 var OS = "<div class=sectionDiv>" +
          "<ul class=sectionList>";
//                 0        1      2      3        4       5        6      7     8
//      t.addRow(urnumber,admissno,"",PatientName,WardBed,AdmDate,DisDate,Unit,Doctor) }
 for(var i = 0; i < PatientRecords.rows.length; i++) {
   var BedStr = PatientRecords.rows[i][4].replace(/<img.*>/i,"") 
   if (!isWhitespace(BedStr)) {
     if (!BedStr.match(/Bed/i)) {
       BedStr='Bed : '+BedStr } }
   OS += "<li class=sectionItem onclick='LinkPatient(\""+i+"\");'>" + 
         "<span style='display:inline-block;width:70%;'>" + PatientRecords.rows[i][3]+ 
         "</span>"+
         "<span class=subscriptRight style='width:29%;font-weight:bold;'>" + BedStr +
         "</span>" +
         "<br><span class=subscriptLeft>Admitted :"   +PatientRecords.rows[i][5] + "</span>" +
         "<span class=subscriptRight>Exp. Discharge :"+PatientRecords.rows[i][6] + "</span>" +
         "<br>"+
         "<span class=subscriptLeft>Doctor : "+PatientRecords.rows[i][8] + "</span>" +
         "<span class=subscriptRight>Unit : "+PatientRecords.rows[i][7] + "</span>" +
         "</li>";
 }
 OS += "</ul><div>";
 CurrentDiv.innerHTML=OS;
}
function AddTableRows() {
  elTable=document.getElementById("WardList");
  elRows=elTable.getElementsByTagName("TR");
  var checkBed=true;
  var leaveFlag=false;
  if (elRows[0].innerHTML.match(/>Bed<\/td>/i)) checkBed=false;
  for (i=0;i<elRows.length;i++) {
    var elCols=elRows[i].getElementsByTagName("TD")
    var urnumber=null;
    var admissno="";
    var indicators="";
    var PatientName="";
    var WardBed="";
    var AdmDate="";
    var DisDate="";
    var Doctor="";
    var Unit="";
    for (j = 0; j < elCols.length;j++) {

      if( elCols[j].innerHTML.match(/Patients On Leave/i) ){ 
         leaveFlag = true;
      }

      if (elCols[j].className!="HeadingCell") {
        ColNo = j;
        if (checkBed) ColNo=ColNo+1;
        switch (ColNo) {
          case 0:
 
            if(
               elCols[j].innerHTML.match(/UpdateCondition/i)||
               elCols[j].innerHTML.match(/PatientAlerts/i)) {
               j++;
               break;
            }

            if( leaveFlag ) {
              WardBed = "Onleave (" + elCols[j].innerHTML + ")";
            }else {
              WardBed = elCols[j].innerHTML;
            }

            break; 
          case 1: 
            if(
               elCols[j].innerHTML.match(/UpdateCondition/i)||
               elCols[j].innerHTML.match(/PatientAlerts/i)) {
               j++;
               break;
            }

            if( elCols[j].innerHTML.match(/Empty/i) || 
                elCols[j].innerHTML.match(/On Leave/i) ) { 

            }else {

              PatientName=elCols[j].innerHTML;
              PatientName=PatientName.replace(/.*PatientFolder/i,"<span class=PatientFolder");
              PatientName=PatientName.replace(/.gif.*\<b\>/i,"></span><b>");

              NameSort=elCols[j].innerHTML.replace(/.*\<b\>/i,"").replace(/<.b>/i,"");
              urnumber=elCols[j].innerHTML.replace(/.*urnumber=/,"").replace(/.....admissno.*/,"").replace(/\+/g," ");

              if(urnumber.replace(/\s/g,"").length == 0 ) {
                urnumber = null;
              }

              admissno=elCols[j].innerHTML.replace(/.*admissno=/,"").replace(/";'.*/,"").replace(/\+/g," ");

            }

            break; 
          case 7:

            Unit = elCols[j].innerHTML.replace(/<BR>.*/i,"");
            Doctors = elCols[j].innerHTML.replace(/.*<BR>/i,"").split(" / ");

            if( Doctors[1] != null ){
              Doctor = Doctors[0].replace(/..A>/i,"").replace(/.*>/,"");
              Doctor += " and " + Doctors[1].replace(/..A>/i,"").replace(/.*>/,"");
            }else {
              Doctor = elCols[j].innerHTML.replace(/..A>/i,"").replace(/.*>/,"");
            }

            break;
          case 8:
            if ( elCols[j].innerHTML.match(/<BR>/ig) ) {
              tempStr = elCols[j].innerHTML.replace(/<BR>/gi,"|").split("|");
              AdmDate = tempStr[0].substr(0,11);
              DisDate = tempStr[1].substr(0,11);
            }

            break;
          default:
            break;
        } 
      }
    }

    if (urnumber!=null) {
      t.addRow(urnumber,admissno,"",PatientName,WardBed,AdmDate,DisDate,Unit,Doctor,NameSort) }
    }
}
