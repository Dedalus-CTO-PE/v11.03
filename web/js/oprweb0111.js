//jsVersion  : V11.03.00
function validateMBSCode(OptionNumber,ReturnCode,ReturnName,Casekeys) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=5; i < validateMBSCode.arguments.length; i++) {
    if (typeof(validateMBSCode.arguments[i]) == 'function') {
      ReturnFunction=validateMBSCode.arguments[i] }
    else {
      validateMBSCode.arguments[i].value="";
    }
  }
  if (isWhitespace(ReturnCode.value)) return;;

  if(validateMBSCode.arguments[4] != undefined){
    var serverURL = "../cgi-bin/oprweb01.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&casekeys=" + Casekeys.value +
                    "&valdedat=" +
                    validateMBSCode.arguments[4].value.replace(/ /g,"+")

  }
  else {
    var serverURL = "../cgi-bin/oprweb01.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&casekeys=" + Casekeys.value
  }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=5; i < validateMBSCode.arguments.length; i++) {
      if (typeof(validateMBSCode.arguments[i]) != 'function') {
        j++
        validateMBSCode.arguments[i].value=ReturnValue[j]
      }
    }

    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction()
    }
    return true;
  }
  else {
    ReturnCode.value="";
    ReturnCode.focus();
    ReturnCode.select();
    return false;
  }
}
