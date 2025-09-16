//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      Use createHttpObject in place of xmlHttpRequest
//
function UnlinkRes(url,DSS,Panel,title) {
  theURL = CGIPath+url + '&httprand='+Math.random();
  theURL += "&urnumber="+PatientURN.replace(/ /g,"+")+
            "&admissno="+PatientVIS.replace(/ /g,"+")+
            "&fpatname="+PatientGName;
  openDocument(theURL,title+" Results");
}
function init() {
  var unlinkedResult = document.getElementById("unlinkedResults");
  var xmlHttp = createHttpObject();
  var dob = PatientDOB.substr(7,4)+""+
            Mth3Num(PatientDOB.substr(3,3))+
            ""+PatientDOB.substr(0,2);

  var url = "cliweb03.php?reportno=9"+
            "&sex="+PatientSex.substr(0,1)+
            "&dob="+dob+
            "&fname="+PatientGName.replace(/\s+\S*$/g,"")+
            "&sname="+PatientSName.replace(/\s+\S*$/g,"");
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if(xmlHttp.responseText.replace(/ /g,"").length > 0) {
        var obj = eval("("+xmlHttp.responseText+")");
        for(var i = 0;i< obj.length; i++) {
          var link = "cliweb10.pbl?reportno=01&template=023";
          link += "&resultky="+obj[i].date+""+obj[i].time+""+obj[i].run.replace(/ /g,"+");
          unlinkedResult.innerHTML += '<li class="ItemRes" onclick="UnlinkRes(\''+link+
            '\',\''+obj[i].dss+'\',\''+obj[i].date+''
            +obj[i].time+'\',\''+obj[i].description+'\')"; >'+
            '<span class="showResultIcon'+obj[i].dss.substr(0,2)+
            '" style="float:left;"></span>'+obj[i].description+
            ' <span style="float:right" class="showResultStatus'+
            obj[i].status.replace(/ *$/,"")+'"></span><br />'+
            '<span class=subscriptLeft >'+FormatDateTime(obj[i].date+''+obj[i].time)+
                                      ' (Status:'+obj[i].errmsg+')</span></li>';
        }
      } else {
        unlinkedResult.innerHTML += "<li class='ItemRes' style='text-align:center;'>"+
                                    "No Matched Results for this Patient</li>"+
                                    "<li class='ItemRes'></li>";
      }
    }
  }
}
