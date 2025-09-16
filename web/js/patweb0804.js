//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb0804.js
//
// Written   : 18/10/2011
//
// Function  : Standard Functions Used in patweb08
//
// Version   :
//
// V10.03.01  22/02/2012 Jill Parkinson        CAR 260559
//            Mods to right justify linked UR number
// V10.02.00  18/10/2011 Saroeun Soeur         CAR 253304
//=========================================================================
function validateUR(ReturnCode,ReturnDis) {

  if(ReturnCode.value.length == 0 ){
    return;;
  }
  justifyRight(ReturnCode);
  var serverURL ="../cgi-bin/patweb80.pbl?reportno=33" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    var urflag=returnValue.return_value.split("|")
    if (urflag[0]=="1") {
      ReturnDis.value = urflag[1];
      return true;
    } else {
      alert("Invalid Patient U/R - " + ReturnCode.value);
      ReturnCode.value = "";
      ReturnDis.value = "";
      ReturnCode.focus();
      return false;
    }
  }
}

