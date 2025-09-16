//jsVersion  : V11.03.00
//--------------------------------------------------------------------------
// Compare function used for our sort in getDiagnosis()
function compare(a,b) {
  if (a == '' || b == '')
    return -1;

  var arrA = a.split(",");
  var arrB = b.split(",");

  if (arrA[1] < arrB[1])
    return -1;

  if (arrA[1] > arrB[1])
    return 1;

  return 0;
}

// Get the Primary Diagnosis code/descriptions from the server
function getDiagnosis(SearchField,ReturnSelect,DescField) {
  var ReturnFunction=null;

  for (var i=3; i < getDiagnosis.arguments.length; i++) {
    if (typeof(getDiagnosis.arguments[i]) == 'function') {
      ReturnFunction=getDiagnosis.arguments[i];
    }
  }

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=1" +
                    "&valdcode=" + SearchField.value.replace(/ /g,"+");

  var ReturnValue = null;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnSelect.options.length=0
      if (DescField != undefined) {
        DescField.value="";
      }
      ReturnValue=returnValue.return_value.split("|");

      // sort our array of returned code/desc by ascending description order
      ReturnValue.sort(compare);

      // now we build our selection list
      for (var j=0; j < ReturnValue.length; j++) {
        if (!isWhitespace(ReturnValue[j])) {
          SelectValue=ReturnValue[j].split(",");
          ReturnSelect.options[ReturnSelect.options.length]=
            new Option(SelectValue[1],SelectValue[0] + " " + SelectValue[1]);
          if (ReturnSelect.options.length=="1") {
            if (DescField != undefined) {
              DescField.value=SelectValue[1];
            }
          }
        }
      }
    }

    if (typeof(ReturnFunction) == 'function') {
      ReturnFunction();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnSelect.options.length=0
          if (DescField != undefined) {
            DescField.value="";
          }
          ReturnValue=returnValue.return_value.split("|");

          // sort our array of returned code/desc by ascending description order
          ReturnValue.sort(compare);

          // now we build our selection list
          for (var j=0; j < ReturnValue.length; j++) {
            if (!isWhitespace(ReturnValue[j])) {
              SelectValue=ReturnValue[j].split(",");
              ReturnSelect.options[ReturnSelect.options.length]=
                new Option(SelectValue[1],SelectValue[0] + " " + SelectValue[1]);
              if (ReturnSelect.options.length=="1") {
                if (DescField != undefined) {
                  DescField.value=SelectValue[1];
                }
              }
            }
          }

          if (typeof(ReturnFunction) == 'function') {
            ReturnFunction();
          }
        }
      }
    );
  }
}
