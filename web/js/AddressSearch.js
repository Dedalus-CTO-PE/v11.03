//jsVersion  : V11.03.00
//========================================================================
// Program   : AddressSearch.js
//
// Written   : 02/04/2020    Don Nguyen  
//
// Function  : Standard functions for Address Validation (using Addressify)
//========================================================================

var APIKey = VariableNameExists('ADDRESSPRO_API_KEY') ? ADDRESSPRO_API_KEY : '';
var maxResults = VariableNameExists('ADDRESSPRO_MAX_RESULTS') ? ADDRESSPRO_MAX_RESULTS : '10';  // default max 10 results
var nthCharSearch = VariableNameExists('ADDRESSPRO_NTH_CHAR_SEARCH') ? ADDRESSPRO_NTH_CHAR_SEARCH : '0';  // search every nth char (default 0 for every char)

function InitAddressSearchFields(SrchAddrRowId) {
  if (document.getElementById('ptcnuadv') != undefined) {  // param value exist?
    var trSearchRow = document.getElementById(SrchAddrRowId);
    if (trSearchRow == undefined) return;

    // Using Address Validation enabled?
    if (document.getElementById('ptcnuadv').value == "1") {
      // Disable any address fields passed to the function
      for (i=1; i < InitAddressSearchFields.arguments.length; i++) {
        ToggleFieldReadOnly(InitAddressSearchFields.arguments[i],true);
      }

      ToggleSearchAddressRow(SrchAddrRowId, true);
    }
  }
}

function ToggleSearchAddressRow(SrchAddrRowId, Show) {
  var trSearchRow = document.getElementById(SrchAddrRowId);
  if (trSearchRow == undefined) return;

  trSearchRow.style.display = (Show)? "" : "none";
}

function ToggleFieldReadOnly(FieldID, ReadOnly) {
  if (FieldID == undefined || ReadOnly == undefined) return;

  var el = document.getElementById(FieldID);
  if (el == undefined) return;

  var className = el.className;

  el.readOnly = ReadOnly;
  if (ReadOnly) {
    if (el.className.indexOf('Readonly') == -1) {
      el.className = trim(className + " Readonly");
    }
  }
  else {
    el.className = trim(className.replace(/Readonly/g,""));
  }
}

function SetFieldValue(FieldID, Value) {
  if (FieldID == undefined || Value == undefined) return;

  var el = document.getElementById(FieldID);
  if (el == undefined) return;

  if (isWhitespace(Value)) {
    el.value = "";
    return;
  }

  var maxlen = (el.maxLength != undefined)? el.maxLength : -1;

  if (maxlen != -1) {
    el.value = Value.substr(0, maxlen);
  }
  else {
    el.value = Value;
  }
}

function OpenAddressSearch(AddressType, SelectAddressCbFn, EnableFieldsCbFn) {
  var LinkURL="patweb90.pbl?reportno=01&template=009&addrtype=" + AddressType;

  if (SelectAddressCbFn != undefined && typeof(SelectAddressCbFn) == 'function')
  {
    window.AddressSelectFunc = SelectAddressCbFn;
  }
  else {
    window.AddressSelectFunc = null;
  }

  if (EnableFieldsCbFn != undefined && typeof(EnableFieldsCbFn) == 'function') 
  {
    window.EnableFieldsFunc = EnableFieldsCbFn;
  }
  else {
    window.EnableFieldsFunc = null;
  }

  var Width = 600;
  var Height = 350;

  var Left = (document.body.clientWidth-Width)/2;

  DFrameLink(LinkURL,10,Left,Width,Height);
}

function AddressNotListed() {
  if (parent.window.EnableFieldsFunc) {
    parent.window.EnableFieldsFunc();
  }

  DFrameExit();
}

function AJAXRequest(URL, ProcSuccessFunc) {
  if (window.XDomainRequest) {  // for older IE versions; Cross-domain Request
    var xdr = new XDomainRequest();

    xdr.open("GET", URL);

    xdr.onload = function() {
      ProcSuccessFunc(xdr.responseText);
    };

    xdr.onerror = function () {
      alert("Unknown API error !");
    };

    xdr.send();
  }
  else {
    xmlHttp = createHttpObject();

    xmlHttp.open("GET", URL, true);  // async = true

    xmlHttp.onreadystatechange = function() {
      if (xmlHttp.readyState == 4) {
        if (xmlHttp.status == 200) {
          ProcSuccessFunc(xmlHttp.responseText);
        }
        else if (xmlHttp.status >= 400) {
          ProcErrorFunc(xmlHttp);
        }
      }
    };

    xmlHttp.send(null);
  }
}

function ProcErrorFunc(XHR) {
  // Error 400 Bad Request | Error 401 Unauthorized
  if (XHR.status == 400 || XHR.status == 401) {  
    var obj = JSON.parse(XHR.responseText);
    alert("API Error \"" + obj['errorCode'] + " - " + obj['errorMessage'] + "\"");
  }
  else if (XHR.status == 404) {
    alert("Error 404 - Invalid API Endpoint");
  }
}

//
// Search address with Addressify API
//
function SearchAddress() {

  //
  // Addressify API Settings should be defined in 'Custom.js'
  //

  // API Endpoint; e.g. "http://api.addressify.com.au/addresspro/autocomplete"
  var APIEndPoint = VariableNameExists('ADDRESSPRO_AUTOCOMPLETE_ENDPOINT') ? ADDRESSPRO_AUTOCOMPLETE_ENDPOINT : "";

  if (APIEndPoint == "") {
    alert("API Endpoint not defined. Please contact your system administrator.");
    return;
  }

  var AddressField = document.getElementById('addrFld');

  var addressType = document.getElementById('filtAddrType').value;
  var state = document.getElementById('filtState').value;
  var postcode = document.getElementById('filtPostcode').value;
  var closeMatches = document.getElementById('chkCloseMatch').checked ? 'true':'false';

  var url = APIEndPoint + "?api_key=" + APIKey +
            "&address_types=" + addressType +
            "&term=" + encodeURIComponent(AddressField.value) + 
            "&close_matches=" + closeMatches +
            "&max_results=" + maxResults +
            "&httprand=" + Math.random();

  if (!isWhitespace(state)) {
    url += "&state=" + state;
  }

  if (!isWhitespace(postcode)) {
    url += "&postcode=" + postcode;
  }

  var srchLen = AddressField.value.length;

  if (srchLen > 0) {
    if (nthCharSearch > 0) {
      if (srchLen % nthCharSearch == 0) {  // only search every nth char entered
        AJAXRequest(url, ProcessResults);
      }
    }
    else {
      AJAXRequest(url, ProcessResults);  // search with every character entered
    }
  }
  else if (srchLen == 0) {  // clear search results
    ClearResults();
  }
}

function ClearResults() {
  document.getElementById('srchReslts').innerHTML = "";
}

function ProcessResults(ResponseText) {
  var obj = JSON.parse(ResponseText);
  var items = "";
  var ua = window.navigator.userAgent;
  var msie = (ua.indexOf("MSIE ") > 0) ? true : false;  // Older IE browsers

  for (i=0; i < obj.length; i++) {
    text = obj[i];
    address = obj[i].replace(/'/g, "\\'");

    if (msie) {  // Older IE browsers (e.g. IE8)
      items += "<li onclick=\"javascript:SelectAddress(\'" + 
               address + "\');\" " +
               "title=\"" + text + "\" >" + 
               " <a href=\"javascript:SelectAddress(\'" + address + "\');\">" +
               text + "</a></li>";
    }
    else {  // Other browsers
      items += "<li onclick=\"javascript:SelectAddress(\'" + 
               address + "\');\" " +
               "title=\"" + text + "\" >" + 
               text + "</li>";
    }
  }
  
  if (document.getElementById('srchReslts') != undefined) {
    document.getElementById('srchReslts').innerHTML = items;
  }
}

//
// This function is called on the selected address.
// It queries Addressify for more detailed info on the selected address.
// A JSON object is returned with address components.
//
function SelectAddress(Address) {
  var APIEndPoint = VariableNameExists('ADDRESSPRO_INFO_ENDPOINT') ? ADDRESSPRO_INFO_ENDPOINT : "";

  if (APIEndPoint == "") {
    alert("API Endpoint not defined. Please contact your system administrator.");
    return;
  }

  var url = APIEndPoint + "?api_key=" + APIKey +
            "&term=" + encodeURIComponent(Address) + 
            "&info=true" +
            "&httprand=" + Math.random();

  AJAXRequest(url, ProcessAddressInfo);
}

//
// This function processes the address info (JSON) returned from Addressify.
// It calls the parent page's PopulateAddress() function (if defined) 
// to populate the relevant address fields on that template.
//
function ProcessAddressInfo(ResponseText) {
  var obj = JSON.parse(ResponseText);

  if (parent.window.AddressSelectFunc != null) {
    var streetline = (obj["StreetLine"] != null) ? obj["StreetLine"] : "";
    var suburb = (obj["Suburb"] != null) ? obj["Suburb"] : "";
    var state = (obj["State"] != null) ? obj["State"] : "";
    var postcode = (obj["Postcode"] != null) ? obj["Postcode"] : "";

    parent.window.AddressSelectFunc(streetline, suburb, state, postcode);
  }

  DFrameExit();
}
