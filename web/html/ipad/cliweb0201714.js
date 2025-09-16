//jsVersion  : V11.03.00
//
function init() {
  var TableLocation=document.getElementById("TableLocation");
  t = new Table();
  if(typeof AddObservationRows != 'undefined') {
    AddObservationRows();
  }
  else {
    TableLocation.innerHTML = "<ul class=ListRes>" +
                              "<li class=ItemRes style='text-align:center;'>" +
                              "No Observations Recorded for this Patient</li>"+
                              "<li class=ItemRes></li></ul>"
    return;;
  }
  SortOrderBy=1;
  t.rows.sort(StringSort);
  OS='<table class="CumulativeResults">';
  var startRow=t.rows.length-10;
  if (startRow<0) startRow=0
  var  tableRowClass="TableRowEven"
  for(var j = 1; j < t.rows[0].length; j++) {
    if (tableRowClass=="TableRowEven") { tableRowClass="TableRowOdd"; }
                                  else { tableRowClass="TableRowEven"; }
    switch (j) {
       case 1: OS+="<tr class="+tableRowClass+"><td>Date<br>Time</td>";break
       case 4: OS+="<tr class="+tableRowClass+"><td>Pulse</td>";break
       case 5: OS+="<tr class="+tableRowClass+"><td>Temperature</td>";break
       case 6: OS+="<tr class="+tableRowClass+"><td>Respiration</td>";break
       case 7: OS+="<tr class="+tableRowClass+"><td>Blood Pressure</td>";break
       case 8: OS+="<tr class="+tableRowClass+"><td>Oxygen Saturation</td>";break
       case 9: OS+="<tr class="+tableRowClass+"><td>Oxygen Flow</td>";break
//       case 23: OS+="<tr class="+tableRowClass+"><td>Entered By</td>";break
       case 28: OS+="<tr class="+tableRowClass+"><td>Blood Sugar</td>";break
       case 29: OS+="<tr class="+tableRowClass+"><td>4hr Urine</td>";break
       case 30: OS+="<tr class="+tableRowClass+"><td>Level</td>";break
       case 31: OS+="<tr class="+tableRowClass+"><td>Pain with Movement</td>";break
       case 36: OS+="<tr class="+tableRowClass+"><td>Pain at Rest</td>";break
       case 37: OS+="<tr class="+tableRowClass+"><td>CVP</td>";break
       case 38: OS+="<tr class="+tableRowClass+"><td>BMI</td>";break
       case 39: OS+="<tr class="+tableRowClass+"><td>BSA</td>";break
       case 40: OS+="<tr class="+tableRowClass+"><td>Weight</td>";break
       case 41: OS+="<tr class="+tableRowClass+"><td>Height</td>";break
       default :
      }
    for(var i = startRow; i < t.rows.length; i++) {
      switch (j) {
       case 1: OS+="<td align=right class=HeadingCell>"+FormatDateTime(t.rows[i][j])+"</td>";break
       case 4: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 5: OS+="<td style='text-align:right'>"+t.rows[i][j]+"&deg;C</td>";break
       case 6: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 7: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 8: OS+="<td style='text-align:right'>"+t.rows[i][j]+"&#37;</td>";break
       case 9: OS+="<td style='text-align:right'>"+t.rows[i][j]+" l/min</td>";break
//       case 23: OS+="<td>"+t.rows[i][j]+"</td>";break
       case 28: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 29: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 30: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 31: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 36: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 37: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 38: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 39: OS+="<td style='text-align:right'>"+t.rows[i][j]+"</td>";break
       case 40: OS+="<td style='text-align:right'>"+t.rows[i][j]+" kg</td>";break
       case 41: OS+="<td style='text-align:right'>"+t.rows[i][j]+" cm</td>";break
       default :
      }
    }
    OS+="</tr>"
  }
  OS+="</table>"
  TableLocation.innerHTML=OS;
  return
  for(var i = 0; i < t.rows.length; i++) {

    var template = t.rows[i][0].indexOf("template");
    template = t.rows[i][0].substr(template,12);
    template = template.replace(/template=/g,"");
    template = parseInt(template,10) + 510;  //template number: 711,712,713
    if (template==614) template=704;
    OS += "<li class=ItemRes style='clear:right' onclick=\""+
          t.rows[i][0].replace(/javascript:/i,"").replace(/template=...&/i,"template="+
          template+"&")+";\">" +
         "<span class=ntTimeframe style='font-weight:bold;font-size:17px'>"+FormatDateTime(t.rows[i][1])+"</span>"  +
         "<span class=ntWhen style='line-height:20px;vertical-align:top'>"+
         "<span class='showResultStatus"+ t.rows[i][3]+"' style='display:inline-block'></span>" +
          t.rows[i][2]+" "  +
         "</span>";

    if(t.rows[i][25].replace(/ /g,"") == "B") {
       OS += "<span class=subscriptCenter><table border='0'>"+
           "<tr style='font-weight:bold;color:black;'><td>"+t.rows[i][4]+"</td><td>"+t.rows[i][5]+
	   "</td><td>"+t.rows[i][6]+"</td><td>"+t.rows[i][7]+"</td>"+
	   "<td>"+t.rows[i][8]+"</td><td>"+t.rows[i][9]+"</td></tr>"+
           "<tr><td>Pulse</td><td>Temp.</td><td>Resp.</td><td>BP</td>"+
	   "<td>SaO<sub>2</sub></td><td>F<sub>1</sub>O<sub>2</sub></td></tr>"+
	   "</table></span>";
     }else if(t.rows[i][25].replace(/ /g,"") == "N") {
         OS += "<span class=subscriptCenter><table border='0'>"+
           "<tr style='font-weight:bold;color:black;'><td>"+t.rows[i][15]+"</td><td>"+t.rows[i][16]+
           "</td><td>"+t.rows[i][17]+"</td><td>"+t.rows[i][18]+"</td>"+
           "<td>"+t.rows[i][21]+"</td><td>"+t.rows[i][22]+"</td></tr>"+
           "<tr><td>Eye</td><td>Verbal</td><td>Motor</td><td>Total</td>"+
           "<td>Pupil</td><td>Limbs</td></tr>"+
           "</table></span>" ;
     }else if(t.rows[i][25].replace(/ /g,"") == "P") {
         con=""
         switch (trim(t.rows[i][27])) {
         case "1": con = "Voice"; break;
         case "2": con = "Agitation/Confusion"; break;
         case "3": con = "Pain"; break;
         case "8": con = "Unresponsive"; break; }
         nfr=""
         nfma=""
         if (t.rows[i][32]=="1") nfma ="Not For Med Alert";
         if (t.rows[i][33]=="1") nfr = "Not For Resusitation";
         OS += "<span class=subscriptCenter><table width='100%' border='0'>"+
           "<tr style='font-weight:bold;color:black;'>" +
           "<td align=center>"+t.rows[i][28].replace(/\.00/,"")+" to "+t.rows[i][29].replace(/\.00/,"")+"</td>"+
           "<td align=center>"+t.rows[i][7].replace(/\//," to ")+"</td>"+
           "<td align=center>"+t.rows[i][30].replace(/\.00/,"")+" to "+t.rows[i][31].replace(/\.00/,"")+"</td>"+
           "<td align=center>"+t.rows[i][14]+"</td><td>"+con+"</td>"+
           "<td style='font-weight:bold;color:blue;text-align:right'>&nbsp;"+nfma+"</td></tr>"+
           "<tr><td align=center>Resp</td><td align=center>BP</td>"+
           "<td align=center>Pulse</td><td align=center>Urine</td>"+
           "<td>Consciousness</td>     "+
           "<td style='font-weight:bold;color:blue;text-align:right'>&nbsp;"+nfr+"</td></tr>"+
           "</table></span>" ;
    }else if(t.rows[i][25].replace(/ /g,"") == "F") {
         OS += "<span class=subscriptCenter><table width='100%' border='0'>"+
           "<tr style='font-weight:bold;color:black;'>";

           if(t.rows[i][14].replace(/ /g,"") != "") {
             OS += "<td style='width:20%;'>&nbsp;</td><td style='width:20%;'>" +
                    t.rows[i][13] +"</td><td style='font-weight:bold;width:20%'>" +
                    t.rows[i][14]+" mL</td>";
           }
           else {
             OS += "<td style='width:20%;'>&nbsp;</td><td style='width:20%;'>&nbsp;</td><td style='width:20%;'>&nbsp;</td>";
           }

           if(t.rows[i][12].replace(/ /g,"") != "") {
             OS += "<td style='font-weight:bold;color:red;width:20%'>" + t.rows[i][11] +
                   "</td><td style='font-weight:bold;color:red;width:20%'>"+t.rows[i][12]+" mL</td>";
           }
           else {
             OS += "<td style='width:20%;'>&nbsp;</td><td style='width:20%;'>&nbsp;</td>";
           }

          if(t.rows[i][19].replace(/ /g,"") != "") {
             OS += "<tr><td>Action Taken: </td><td>" + t.rows[i][19] +"</td></tr>";
           }

           OS += "</table></span>";

     }

     OS += "<span class=subscriptCenter>Comment : "+t.rows[i][20]+"</span>" +
           "<span class=ntTimeframe>"+FormatCommentAge(t.rows[i][1])+"</span>"  +
           "<span class=ntWhen>"+t.rows[i][23]+"</span>"  +
           "</span></li>";

  }

  OS +=   "</ul>";
  TableLocation.innerHTML=OS;
  
  if (t.rows.length == 0) {
      TableLocation.innerHTML += "<ul class=ListRes>" +
                                "<li class=ItemRes style='text-align:center;'>" +
                                "No Observations Recorded for this Patient</li>"+
                                "<li class=ItemRes></li></ul>"
  }

}
