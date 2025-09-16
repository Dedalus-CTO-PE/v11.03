//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb86.js
//
// Written   : 14.05.2002 Pat Dirito  
//
// Function  : Standard Functions Used in patweb86 templates 
//
//=============================================================================
// Report No 2 javascript functions 
//=============================================================================
//
//   NEXT PAGE BUTTON
//
//function PatientLink(link,set) {
//  location.href=link;
//}
function PatientLink(link,lock) {
  var admissno=link.substr(65,8);
  var ur=link.substr(47,8);

  //
  //  If lock = 0 then no Patient Codding, need to lock Record
  //
  if (lock=="0") {
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                    "&urnumber=" + ur.replace(/ /g,"+") +
                    "&admissno=" + admissno.replace(/ /g,"+") +
                    "&valdtype=3";

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);

      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        if (ReturnValue[0]=="1") {
          location.href=link;
        }
      }
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          if (returnValue.status==0) {
            ReturnValue=returnValue.return_value.split("|");
            if (ReturnValue[0]=="1") {
              location.href=link;
            }
          }
        }
      );
    }
  } else {
    location.href=link;
  }
}
function NextRecordSet(key) {
  alert("Limit Reached")
  NextPage.innerHTML="<input type=button class=button value=Next " +
                     "onclick='NextRecords(\"" + key + "\");'>"
}
function NextRecords(Key) {
  document.SelectPeriod.uncodkey.value=Key;
  document.SelectPeriod.submit();
}

//
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function clrHfund(hfund,hfdesc,hftable,hftdesc) {
  hfund.value="";
  hfund.className="";
  hfdesc.value="";
  hftable.value="";
  hftable.className="";
  hftdesc.value="";
  hfund.select();
}
//
