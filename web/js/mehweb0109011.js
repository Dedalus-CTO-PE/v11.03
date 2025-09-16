//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0109011.js
//
// Written   : 26.09.2011 Peter Vela
//
// Function  : Functions Used in mehweb0109011
//
// Version   :
//
//========================================================================

var expirydate = "";
var expirytime = "";

function CheckStatus(tcindc4,tcindc5,tcform6,LSStartDate,
                     LSStartTime,precdate,prectime) {

//alert(tcindc4+" "+tcindc5+" "+tcform6+" "+LSStartDate+" "+LSStartTime+" "+precdate+" "+prectime);

  var newExpiryDate = new Date();

  if (tcindc4=="1")
  {
    if (tcindc5=="H")
    {
      if (!isWhitespace(LSStartDate)&&
          !isWhitespace(tcform6)&&
          !isWhitespace(LSStartTime))
      {

        newExpiryDate.setDate(parseInt(LSStartDate.substring(0,2)));

        var varMonth = 0;
        if (LSStartDate.substr(3,3)=="Jan"){varMonth=0;}
        if (LSStartDate.substr(3,3)=="Feb"){varMonth=1;}
        if (LSStartDate.substr(3,3)=="Mar"){varMonth=2;}
        if (LSStartDate.substr(3,3)=="Apr"){varMonth=3;}
        if (LSStartDate.substr(3,3)=="May"){varMonth=4;}
        if (LSStartDate.substr(3,3)=="Jun"){varMonth=5;}
        if (LSStartDate.substr(3,3)=="Jul"){varMonth=6;}
        if (LSStartDate.substr(3,3)=="Aug"){varMonth=7;}
        if (LSStartDate.substr(3,3)=="Sep"){varMonth=8;}
        if (LSStartDate.substr(3,3)=="Oct"){varMonth=9;}
        if (LSStartDate.substr(3,3)=="Nov"){varMonth=10;}
        if (LSStartDate.substr(3,3)=="Dec"){varMonth=11;}
        newExpiryDate.setMonth(parseInt(varMonth));

        newExpiryDate.setFullYear(LSStartDate.substr(7,4));

        newExpiryDate.setHours(LSStartTime.substr(0,2));

        newExpiryDate.setMinutes(LSStartTime.substr(3,2));

        newExpiryDate.setSeconds(LSStartTime.substr(6,2));

        var newHours = newExpiryDate.getHours() +
                      parseInt(tcform6);

        newExpiryDate.setHours(parseInt(newHours));

        varMonth = "   ";
        if (newExpiryDate.getMonth()==0) {varMonth="Jan";}
        if (newExpiryDate.getMonth()==1) {varMonth="Feb";}
        if (newExpiryDate.getMonth()==2) {varMonth="Mar";}
        if (newExpiryDate.getMonth()==3) {varMonth="Apr";}
        if (newExpiryDate.getMonth()==4) {varMonth="May";}
        if (newExpiryDate.getMonth()==5) {varMonth="Jun";}
        if (newExpiryDate.getMonth()==6) {varMonth="Jul";}
        if (newExpiryDate.getMonth()==7) {varMonth="Aug";}
        if (newExpiryDate.getMonth()==8) {varMonth="Sep";}
        if (newExpiryDate.getMonth()==9) {varMonth="Oct";}
        if (newExpiryDate.getMonth()==10) {varMonth="Nov";}
        if (newExpiryDate.getMonth()==11) {varMonth="Dec";}

        expirydate=newExpiryDate.getDate() +" "+
                                           varMonth +" "+
                                           newExpiryDate.getFullYear();

        if(newExpiryDate.getHours().toString().length==1) {
          expirytime="0"+
          newExpiryDate.getHours().toString()+":";
        } else {
          expirytime=
          newExpiryDate.getHours().toString()+":";
        }

        if(newExpiryDate.getMinutes().toString().length==1) {
          expirytime=
          expirytime.toString()+"0"+
          newExpiryDate.getMinutes().toString()+":";
        } else {
          expirytime=
          expirytime.toString()+
          newExpiryDate.getMinutes().toString()+":";
        }

        if(newExpiryDate.getSeconds().toString().length==1) {
          expirytime=
          expirytime.toString()+"0"+
          newExpiryDate.getSeconds().toString();
        } else {
          expirytime=
          expirytime.toString()+
          newExpiryDate.getSeconds().toString();
        }


      }
    }
    else
    {
      if (!isWhitespace(LSStartDate)&&
          !isWhitespace(tcform6))
      {
//    alert("1");
        var serverURL   = "../cgi-bin/patweb80.pbl?reportno=96" +
           "&valdcode=" + LSStartDate.replace(/ /g,"+") +
           tcform6.replace(/ /g,"+") +
           tcindc5.replace(/ /g,"+") +
           LSStartTime.replace(/ /g,"+");


//alert(serverURL);

        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0)
        {
          ReturnValue=returnValue.return_value.split("|")
//alert(ReturnValue);
          expirydate=trim(ReturnValue[0])
          expirytime=LSStartTime;
        }
      }
    }
  }
  else
  {
    if (tcindc4=="2")
    {
      if (tcindc5=="H")
      {
//alert(precdate+" "+tcform6+" "+prectime);
        if (!isWhitespace(precdate)&&
            !isWhitespace(tcform6)&&
            !isWhitespace(prectime))
        {

          newExpiryDate.setDate(parseInt(precdate.substring(0,2)));

          var varMonth = 0;
          if (precdate.substr(3,3)=="Jan"){varMonth=0;}
          if (precdate.substr(3,3)=="Feb"){varMonth=1;}
          if (precdate.substr(3,3)=="Mar"){varMonth=2;}
          if (precdate.substr(3,3)=="Apr"){varMonth=3;}
          if (precdate.substr(3,3)=="May"){varMonth=4;}
          if (precdate.substr(3,3)=="Jun"){varMonth=5;}
          if (precdate.substr(3,3)=="Jul"){varMonth=6;}
          if (precdate.substr(3,3)=="Aug"){varMonth=7;}
          if (precdate.substr(3,3)=="Sep"){varMonth=8;}
          if (precdate.substr(3,3)=="Oct"){varMonth=9;}
          if (precdate.substr(3,3)=="Nov"){varMonth=10;}
          if (precdate.substr(3,3)=="Dec"){varMonth=11;}
          newExpiryDate.setMonth(parseInt(varMonth));

          newExpiryDate.setFullYear(precdate.substr(7,4));

          newExpiryDate.setHours(prectime.substr(0,2));

          newExpiryDate.setMinutes(prectime.substr(3,2));

          newExpiryDate.setSeconds(prectime.substr(6,2));

          var newHours = newExpiryDate.getHours() +
                         parseInt(tcform6);

          newExpiryDate.setHours(parseInt(newHours));

          varMonth = "   ";
          if (newExpiryDate.getMonth()==0) {varMonth="Jan";}
          if (newExpiryDate.getMonth()==1) {varMonth="Feb";}
          if (newExpiryDate.getMonth()==2) {varMonth="Mar";}
          if (newExpiryDate.getMonth()==3) {varMonth="Apr";}
          if (newExpiryDate.getMonth()==4) {varMonth="May";}
          if (newExpiryDate.getMonth()==5) {varMonth="Jun";}
          if (newExpiryDate.getMonth()==6) {varMonth="Jul";}
          if (newExpiryDate.getMonth()==7) {varMonth="Aug";}
          if (newExpiryDate.getMonth()==8) {varMonth="Sep";}
          if (newExpiryDate.getMonth()==9) {varMonth="Oct";}
          if (newExpiryDate.getMonth()==10) {varMonth="Nov";}
          if (newExpiryDate.getMonth()==11) {varMonth="Dec";}

          expirydate=newExpiryDate.getDate() +" "+
                     varMonth +" "+
                     newExpiryDate.getFullYear();

          if(newExpiryDate.getHours().toString().length==1) {
            expirytime="0"+
            newExpiryDate.getHours().toString()+":";
          } else {
            expirytime=
            newExpiryDate.getHours().toString()+":";
          }

          if(newExpiryDate.getMinutes().toString().length==1) {
            expirytime=
            expirytime.toString()+"0"+
            newExpiryDate.getMinutes().toString()+":";
          } else {
            expirytime=
            expirytime.toString()+
            newExpiryDate.getMinutes().toString()+":";
          }

          if(newExpiryDate.getSeconds().toString().length==1) {
            expirytime=
            expirytime.toString()+"0"+
            newExpiryDate.getSeconds().toString();
          } else {
            expirytime=
            expirytime.toString()+
            newExpiryDate.getSeconds().toString();
          }
        }
      }
      else
      {
        if (!isWhitespace(precdate)&&
            !isWhitespace(tcform6))
        {
//      alert("2");
          var serverURL   = "../cgi-bin/patweb80.pbl?reportno=96" +
             "&valdcode=" + precdate.replace(/ /g,"+") +
             tcform6.replace(/ /g,"+") +
             tcindc5.replace(/ /g,"+") +
             prectime.replace(/ /g,"+");


//alert(serverURL);

          var returnValue = RSExecute(serverURL);
          if (returnValue.status==0)
          {
            ReturnValue=returnValue.return_value.split("|");
//alert(ReturnValue);
            expirydate=trim(ReturnValue[0]);
            expirytime=prectime;
          }
        }
      }
    }
//  else
//  {
//    document.UpdateForm.mehvs003.value="";
//  }
  }
  if (expirydate.length==10) {
     expirydate="0"+expirydate;
  }

//  thisform.e_mhdls006.value=thisform.mhdls006.value;
//  thisform.e_mhdls007.value=thisform.mhdls007.value;
}
function getTableHiddenCells(LSTableRows) {

  var LSTableHiddens = LSTableRows.getElementsByTagName("input");


  if (LSTableHiddens.length == 8) {

    if (LSTableHiddens[7].name == "yescalculateitplease") {

      var tcindc4 = LSTableHiddens[0].value;
      var tcindc5 = LSTableHiddens[1].value;
      var tcform6 = LSTableHiddens[2].value;
      var LSStartDate = LSTableHiddens[3].value;
      var LSStartTime = LSTableHiddens[4].value;
      var precdate = LSTableHiddens[5].value;
      var prectime = LSTableHiddens[6].value;

      expirydate = "";
      expirytime = "";

//    if (!isWhitespace(tcindc4)&&
//        !isWhitespace(tcindc5)&&
//        !isWhitespace(tcform6)&&
//        !isWhitespace(LSStartDate)&&
//        !isWhitespace(LSStartTime)) {
        CheckStatus(tcindc4,tcindc5,tcform6,LSStartDate,LSStartTime,precdate,prectime);
//    }

      var LSTableColumns = LSTableRows.getElementsByTagName("td");
      if (!isWhitespace(expirydate)&&!isWhitespace(expirytime)) {
        LSTableColumns[3].innerHTML = expirydate + " at " + expirytime;
      }

    }
  }

}

function getTableRows(LSTableBodies) {

  var LSTableRows = LSTableBodies.getElementsByTagName("tr");

  for (var counter=0; counter < LSTableRows.length; counter++) {
       getTableHiddenCells(LSTableRows[counter]);
  }

}

function getTableBody(LSTables) {

  var LSTableBodies = LSTables.getElementsByTagName("tbody");

  for (var counter=0; counter < LSTableBodies.length; counter++) {
    getTableRows(LSTableBodies[counter]);
  }

}

function calculateExpiryDatesAndTimes() {

  var LSTables = document.getElementsByTagName("table");

  for (var counter=0; counter < LSTables.length; counter++) {
    getTableBody(LSTables[counter]);
  }
}
