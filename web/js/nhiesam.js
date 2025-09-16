//jsVersion  : V11.03.00
//========================================================================
// This file is the javacript for the interface to the New Zealand
// Ministry of Health address verifications system eSAM.
//
// Note: Only New Zealand addreseses are supported.
//
// History:
//
// V10.10.00 2017-05-30 Peter Mc - Original   Task 09262154
//========================================================================

var xhr;
//
// IE < 9 does not have the trim function, so if it's missing, define it.  
//
if(typeof String.prototype.trim !== 'function') {
  String.prototype.trim = function() {
    return this.replace(/^\s+|\s+$/g, ''); 
  };
}

function esamSuggestAddress() {
  var url, org;

  clearEsam();
  if (document.forms["NHIUpdate"].esam0.value.length < 6) return;
  xhr = createHttpObject();
  xhr.onreadystatechange = function() {
    if (xhr.readyState == 4) {
      if ( xhr.status == 200) {
        processSuggestion(xhr);
      }
    }
  }
  
  org = document.forms["NHIUpdate"].esamorg;

  url = "../php/nhiesam.php?svc=suggest&t=" + document.forms["NHIUpdate"].type.value;
  if (org && !isWhitespace(org.value)) {
    url += "&org=" + encodeURI(org.value);
  }
  url += "&a=" + encodeURI(document.forms["NHIUpdate"].esam0.value);
  xhr.open("GET", url, true);
  xhr.send(null);
}

function processSuggestion(xhr) {
  var results, i=0, rlist, panel, panelcode, returncode;
  results = JSON.parse(xhr.responseText);
  clearEsam();

  if (results.ResultCode) {
    returncode  = results.ResultCode;
  }
  if (results["AddressSuggestion"]) {
    panel = document.getElementById('esamPanel');
    panelcode = "<ul>";
    rlist = results["AddressSuggestion"];
    if (rlist.constructor === Array) {
      for (i=0; i< rlist.length; i++) {
        encodedurivar = encodeURI(rlist[i].FullAddress).replace(/'/g, "<sq>");
        panelcode += "<li><a style=\"text-decoration: none\" "+
                     "href=\"javascript:populateAddress(\'"+
                     encodedurivar +"\');\">"+
                     rlist[i].FullAddress +"</a></li>";

      }
    } else {
      encodedurivar = encodeURI(rlist.FullAddress).replace(/'/g, "<sq>");
      panelcode += "<li><a style=\"text-decoration: none\" "+
                     "href=\"javascript:populateAddress(\'"+
                     encodedurivar +"\');\">"+
                     rlist.FullAddress +"</a></li>";
    }
    panelcode += "</li>";
    panel.innerHTML = panelcode;
    calcOffset(i);
    panel.style.display = "block";

  }
}

function esamFindAddress() {

  var url, org, charlen;

  clearEsam();

  charlen  = document.forms["NHIUpdate"].esam1.value.length;
  charlen += document.forms["NHIUpdate"].esam2.value.length;
  charlen += document.forms["NHIUpdate"].esam3.value.length;
  charlen += document.forms["NHIUpdate"].esam4.value.length;
  charlen += document.forms["NHIUpdate"].esam5.value.length;

  if (charlen < 9) return;

  xhr = createHttpObject()
  xhr.onreadystatechange = function() {
    if (xhr.readyState == 4) {
      if ( xhr.status == 200) {
        processFound(xhr);
      }
    }
  }

  org = document.forms["NHIUpdate"].esamorg;

  url  = "../php/nhiesam.php?svc=find&t=" + document.forms["NHIUpdate"].type.value;
  if (org && !isWhitespace(org.value)) {
    url += "&org=" + encodeURI(org.value);
  }
  url += "&a1=" + encodeURI(document.forms["NHIUpdate"].esam1.value);
  url += "&a2=" + encodeURI(document.forms["NHIUpdate"].esam2.value);
  url += "&a3=" + encodeURI(document.forms["NHIUpdate"].esam3.value);
  url += "&a4=" + encodeURI(document.forms["NHIUpdate"].esam4.value);
  url += "&a5=" + encodeURI(document.forms["NHIUpdate"].esam5.value);
  xhr.open("GET", url, true);
  xhr.send(null);
}

function processFound() {

  var i=0,results, panel, rlist, panelcode,returncode; 
  clearEsam();
  results = JSON.parse(xhr.responseText);

  if (results.ResultCode) {
    returncode  = results.ResultCode;
  }
  if (results['FoundAddress']) {
    rlist = results['FoundAddress'];
    panel = document.getElementById('esamPanel');
    panelcode = "<ul>";
    if (rlist.constructor === Array) {
      for (i=0; i< rlist.length; i++) {
        encodedurivar = encodeURI(rlist[i].FullAddress).replace(/'/g, "<sq>");
        panelcode += "<li><a style=\"text-decoration: none\" "+
                     "href=\"javascript:populateAddress(\'"+
                     encodedurivar +"\');\">"+
                     rlist[i].FullAddress +"</a></li>";

      }
    } else {
      encodedurivar = encodeURI(rlist.FullAddress).replace(/'/g, "<sq>");
      panelcode += "<li><a style=\"text-decoration: none\" "+
                     "href=\"javascript:populateAddress(\'"+
                     encodedurivar +"\');\">"+
                     rlist.FullAddress +"</a></li>";
    }
    panelcode += "</li>";
    panel.innerHTML = panelcode;
    calcOffset(i++);
    panel.style.display = "block";
  }
}

function populateAddress(codedaddress) {
  var oneline, bits, max;
  oneline = decodeURI(codedaddress).replace(/<sq>/g, "'");
  bits = oneline.split(',',5);
  max = bits.length; 
  document.NHIUpdate.nhmas006.value = bits[0].trim();
  document.NHIUpdate.nhmas007.value = "";
  document.NHIUpdate.nhmas008.value = "";
  document.NHIUpdate.nhmas009.value = "";
  document.NHIUpdate.nhmas010.value = "NEW ZEALAND";
  document.NHIUpdate.nhmas013.value = "";
  
  if (max == 2) {
    document.NHIUpdate.nhmas009.value = bits[1].trim();
  }
 

  if (max == 3) {
    document.NHIUpdate.nhmas008.value = bits[1].trim();
    document.NHIUpdate.nhmas009.value = bits[2].trim();
  }
 
  if (max == 4) {
    document.NHIUpdate.nhmas007.value = bits[1].trim();
    document.NHIUpdate.nhmas008.value = bits[2].trim();
    document.NHIUpdate.nhmas009.value = bits[3].trim();
  }

  // triger onchange events
  //document.NHIUpdate.nhmas006.onchange();
  //document.NHIUpdate.nhmas007.onchange();
  //document.NHIUpdate.nhmas008.onchange();
  //document.NHIUpdate.nhmas009.onchange();
  //document.NHIUpdate.nhmas010.onchange();
  //document.NHIUpdate.nhmas013.onchange();

  // clear the input
  document.NHIUpdate.esam0.value="";
  document.NHIUpdate.esam1.value="";
  document.NHIUpdate.esam2.value="";
  document.NHIUpdate.esam3.value="";
  document.NHIUpdate.esam4.value="";
  document.NHIUpdate.esam5.value="";
}

function clearEsam() {
  document.getElementById("esamPanel").style.display = "none";
}

function calcOffset(rows) {

  var panel = document.getElementById('esamPanel');
  var rect = document.getElementById('esam0').getBoundingClientRect();
  var pxleft = Math.round(rect.right) + 5;
  var pxtop  = Math.round(rect.top) - (7 * rows); 
  if (pxtop < 15) pxtop = 15;
  panel.style.left = pxleft + 'px';
  panel.style.top = pxtop + 'px';

}

