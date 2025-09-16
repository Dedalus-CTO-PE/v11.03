// jsVersion  : V11.01.00
//
// Source Code:  ./ipad/AutoSuggestionPopup/AutoSuggestionPopup.class.js
//
// Modification 
//
// Version         Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.01.00       13/04/2012                   Version change
// V10.00.00       13/04/2012                   Created for Mobility Suite
//
/******************************************************************************
 *	Auto suggestion onkeyup
 *****************************************************************************/
autoSearchParam = new Object();
autoSearchParam.reportno = 1;
autoSearchParam.returnId = null;
autoSearchParam.returnFn = null;
autoSearchParam.returnCode = null;
autoSearchParam.inputField = null;
autoSearchParam.searchType = null;
autoSearchParam.timeoutId = null;
autoSearchParam.suggestionObj = null;

function AutoSuggest(e) {
  var delayTime = 150; //delay 0.15 seconds
  if(!e){e = window.event;}
  if (e.srcElement)
    autoSearchParam.inputField = e.srcElement;
  else if (e.target)
    autoSearchParam.inputField = e.target;
  else { return; }
  
  autoSearchParam.returnCode = autoSearchParam.inputField.getAttribute('returnCode');
  autoSearchParam.returnId   = autoSearchParam.inputField.getAttribute('returnId');
  autoSearchParam.returnFn   = autoSearchParam.inputField.getAttribute('returnFn');
  autoSearchParam.searchType = autoSearchParam.inputField.getAttribute('searchType');
  clearTimeout(autoSearchParam.timeoutId);
  if (e.keyCode==9) {
    if (autoSearchParam.returnFn!=null) { eval(autoSearchParam.returnFn); }
  }
  if(autoSearchParam.inputField.value.length > 2) {
        if(e.keyCode == 8 || e.keyCode == 46) {
                autoSearchParam.timeoutId = setTimeout( function() {
                  getList();
                },delayTime);
        }else if(e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 56) ||
                (e.keyCode >= 112 && e.keyCode <= 123)) {
                //ignore these ascii character
                return;
        }else {
           autoSearchParam.timeoutId = setTimeout(function() {
                getList();
           },delayTime);
        }
   }
}
function populate(code,value,subtext) {
  if (autoSearchParam.returnId.split("|").length>1) {
    document.getElementById(autoSearchParam.returnId.split("|")[0]).value = code.split("|")[0];
    document.getElementById(autoSearchParam.returnId.split("|")[1]).value = code.split("|")[1];
    document.getElementById(autoSearchParam.returnCode.split("|")[0]).value = value;
    document.getElementById(autoSearchParam.returnCode.split("|")[1]).value = subtext;
  }
  else {
    autoSearchParam.inputField.value = value;
    document.getElementById(autoSearchParam.returnId).value = code;
  }
  var div = document.getElementById("-suggestion-panel-wrapper");
  div.style.display="none";
  content = document.getElementById("-suggestion-table");	
  content.innerHTML="";
  if (autoSearchParam.returnFn!=null) { eval(autoSearchParam.returnFn); }
}
function getList() {
  switch (autoSearchParam.searchType) {
    case "6": 
       autoSearchParam.url = "../cgi-bin/patweb94.pbl?reportno=03&template=005&norecord=10&keywords=";
       break;
    case "10": 
       autoSearchParam.url = "../cgi-bin/priweb05.pbl?reportno=2&template=11&itemtype=+0"+ 
                          "&norecord=10&keywords=";
       break;
    default :
       autoSearchParam.url = "../cgi-bin/AutoSuggest.php?reportno="+ autoSearchParam.searchType +
                          "&rowcount=10&keywords=";
  }
  if(autoSearchParam.suggestionObj == null) {
    autoSearchParam.suggestionObj = new AutoSuggestionPopup();
  }
  autoSearchParam.suggestionObj.setPositionOffSet(autoSearchParam.inputField);
  autoSearchParam.suggestionObj.getListRemotely(autoSearchParam.inputField,autoSearchParam.url);
}
/******************************************************************************
 *	Auto suggestion popup class
 *****************************************************************************/
function AutoSuggestionPopup() {
  this.contentPlaceHolder = null;
  this.suggestionPanel = null;
  this.autoSuggest = this.create();
  this.xmlObject = new XMLHttpRequest();

  this.findPos = function (obj) {
    var curleft = 0;
    var curtop = 0;
		
    if (obj.offsetParent) {
      curleft = obj.offsetLeft
      curtop = obj.offsetTop

      while (obj = obj.offsetParent) {
        curleft += obj.offsetLeft
        curtop += obj.offsetTop
      }
    }
    return [curleft,curtop];
  }	
}

/******************************************************************************
 *	create - creates the suggestion popup and attaches it to the DOM
 *****************************************************************************/
AutoSuggestionPopup.prototype.create = function (id,title) {
  var div = document.getElementById("-suggestion-panel-wrapper");
  this.contentPlaceHolder = document.getElementById("-suggestion-table");	
  this.suggestionPanel    = document.getElementById("-suggestion-panel-wrapper2");
  div.style.display="none";
  return div;
}
/*******************************************************************************
 *
 ******************************************************************************/
AutoSuggestionPopup.prototype.getListRemotely = function(el,stringURL) {
  var url = stringURL+el.value;
  var autoSuggest = this.autoSuggest;
  var suggestionPanel = this.suggestionPanel;
  var contentPlaceHolder = this.contentPlaceHolder;
  var xml = this.xmlObject;
  xml.open('GET',url,true);
  if (el.value.replace(/ /g,"").length == 0) {
    autoSuggest.style.display="none";
    return;
  }

  xml.send();

  xml.onreadystatechange = function() {
    if (xml.readyState == 4 && xml.status == 200) {
      if (xml.responseText.replace(/ /g,"").length <= 1 ) {
        autoSuggest.style.display="none";
      }else {

         var myObj = eval("("+xml.responseText+")");

         contentString = "";

         for (var i = 0; i < myObj.length; i++) {
           if (myObj[i]["code"]) {
             contentString += "<li onclick=\"populate('"+
                                         myObj[i]["code"]+"','"+
                                         myObj[i]["value"]+"','"+
                                         myObj[i]["subtext"]+"');\">"+
                                         myObj[i]["value"];
             if (!isWhitespace(myObj[i]["subtext"])) {
               contentString += "<span class=subText>"+
                                               myObj[i]["subtext"]+"</span>";
             }
             contentString += "</li>";
           }
         }

         if (contentString == "" ) {
           autoSuggest.style.display="none";
         }else {
           contentPlaceHolder.innerHTML = contentString;
           autoSuggest.style.display="";
         }
      }
   }
 }
}
/******************************************************************************
 *	setPositionOffSet
 *****************************************************************************/
AutoSuggestionPopup.prototype.setPositionOffSet = function(el) {
     var arr = findPos(el);
     this.autoSuggest.style.position = "absolute";
     this.autoSuggest.style.width = (el.offsetWidth) + "px";
     this.autoSuggest.style.top = (arr[1]+el.offsetHeight) + "px";
     this.autoSuggest.style.left = (arr[0]) + "px";
}
