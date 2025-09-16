//jsVersion  : V11.03.01
//
// Recent Patients
//
var ShowImagesInList=false;
//var ShowImagesInList=true;
function RecentPatients() {
  if (getTop().content.document.getElementById("DivSearchResult")==null) {
    getTop().content.document.body.insertAdjacentHTML('BeforeEnd','<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  dSearchResult=getTop().content.document.getElementById("DivSearchResult");
  getTop().content.document.body.style.overflow='hidden';
  if (dSearchResult.style.visibility=="visible"){ 
    getTop().content.document.body.style.overflow='auto';
    dSearchResult.style.visibility="hidden";return false; }
 
  var theURL        = "../../cgi-bin/patweb07.pbl?reportno=2&template=3";
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  dSearchResult.style.right = "0px";
  dSearchResult.style.top   = "0px";
  dSearchResult.innerHTML   = xmlHttp.responseText;
  if (ShowImagesInList) {
    sTable="<table class=RecentList style='margin:0' cellpadding=2 border=0 cellspacing=0 width=100%>"
    var trows=dSearchResult.getElementsByTagName("tr")
    for (i=0;i<trows.length;i++) {
      sTable+="<tr "
      var tcells=trows[i].getElementsByTagName("td")
      for (j=0;j<tcells.length;j++) {
        switch (j) {
        case 0:
            $ur=tcells[j].innerHTML
            $ur=tcells[j].innerHTML.replace(/.*\'\>/,"")
            $ur=$ur.replace(/\<.*/,"");
            $lnk=tcells[j].innerHTML.replace(/.*Show/,"Show")
            $lnk=$lnk.replace(/"\).*/,"\"\)");
            ImageFile = "../images/patients/" + $ur.replace(/ /g,"") + ".jpg"
            sTable+=" onclick='"+$lnk+";'>"
            sTable+='<td style="padding:0;border:0;width:50px;height:50px;border-bottom:1px solid lightgrey">' +
                    '<img name="patimage" height="50" border=0 src="' + ImageFile + '" ' +
                    ' alt="Patient U/R ' + $ur + '" style="display:none" onload="showImage(this);"></td>' 
            break;
        case 1:
            //alert(tcells[j].innerHTML.replace(/\&nbsp\;/,""))
            pName=tcells[j].innerHTML.replace(/\&nbsp\;/,"")
            pAge=pName.replace(/.*\(/,"")
            pAge=pAge.replace(/,.*/,"")
            pSex=pName.replace(/.*\(/,"")
            pSex=pSex.replace(/\)/,"")
            pSex=pSex.split(",")[1]
            pURN=pName.replace(/.*\(/,"")
            pName=pName.replace(/\(.*/,"")
            pName=pName.replace(/\<b\>/i,"")
            pName=pName.replace(/\<\/b\>/i,"")
            sTable+="<td style='padding:0;border:0;border-bottom:1px solid lightgrey'>"+
                    "<span style='font-weight:bold;'>"+pName+ "</span>" +
                    "<br>Age: "+pAge+ 
                    "<br>Gender: "+pSex+ "</td>" 
            break;
          }
        } 
        sTable+="</tr>"
      } 
    sTable+="</table>"
    tdiv=dSearchResult.getElementsByTagName("div")
    for (i=0;i<tdiv.length;i++) {
      if (tdiv[i].id=="DisplayList") {
        tdiv[i].innerHTML=sTable }
    }
    dSearchResult.style.width = "320px";
    dSearchResult.style.height = "480px";
  }
  else {
    dSearchResult.style.width = "400px";
    dSearchResult.style.height = "480px";
    tdiv=dSearchResult.getElementsByTagName("div")
    for (i=0;i<tdiv.length;i++) {
      if (tdiv[i].id=="DisplayList") {
        tdiv[i].style.display="none" }
      if (tdiv[i].id=="PatientList") {
        tdiv[i].style.display="" }
    }
  }
  dSearchResult.style.visibility="visible";
}
function RecentClose() {
    dSearchResult=getTop().content.document.getElementById("DivSearchResult");
    dSearchResult.innerHTML="";
    dSearchResult.style.visibility="hidden";
}
//
//
//
if (typeof HTMLElement != "undefined" && !HTMLElement.prototype.insertAdjacentElement)
{
    HTMLElement.prototype.insertAdjacentElement = function(where,parsedNode)
    {
        switch (where){
        case 'beforeBegin':
        this.parentNode.insertBefore(parsedNode,this)
        break;
        case 'afterBegin':
        this.insertBefore(parsedNode,this.firstChild);
        break;
        case 'beforeEnd':
        this.appendChild(parsedNode);
        break;
        case 'afterEnd':
        if (this.nextSibling)
        this.parentNode.insertBefore(parsedNode,this.nextSibling);
        else this.parentNode.appendChild(parsedNode);
        break;
        }
    }

    HTMLElement.prototype.insertAdjacentHTML = function(where,htmlStr)
    {
        var r = this.ownerDocument.createRange();
        r.setStartBefore(this);
        var parsedHTML = r.createContextualFragment(htmlStr);
        this.insertAdjacentElement(where,parsedHTML);
    }


    HTMLElement.prototype.insertAdjacentText = function(where,txtStr)
    {
        var parsedText = document.createTextNode(txtStr);
        this.insertAdjacentElement(where,parsedText);
    }
}
//------------------------------------------------------------
// Manage Patient Favourites
//------------------------------------------------------------
function ManagePatientFavorites() {
  var doc = ibaGetIframeDoc('content',getTop().document); 
  var PopUpFrameDoc  = ibaGetIframeDoc('PopUpFrame',doc);
  var PopUpScreen    = ibaGetElement('PopUpScreen',doc);
  PopUpFrameDoc.innerHTML=''
  var webpd002=GetFirst();
  var theURL        = "../../cgi-bin/patweb02.pbl?reportno=2&template=4&webpd002="+webpd002;
  getTop().content.document.body.style.overflow='hidden';
  PopUpScreen.style.overflow = "";
  PopUpScreen.style.top     =  '0px';
  PopUpScreen.style.right   =  '10px';  
  PopUpScreen.style.left    =  '';  
  PopUpScreen.style.width   =  '640px';
  PopUpScreen.style.height  =  '480px';
  PopUpFrameDoc.location.href = theURL;
  PopUpScreen.style.display = "";
}
function GetFirst() {
  theURL = "../../cgi-bin/patweb02.pbl?reportno=2&template=5";
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  var $str=xmlHttp.responseText.replace(/\n/,"")
  $str=$str.replace(/<\/option>/g,"|")
  $arr=$str.split("|")
  return $arr[0].replace(/.*value=\"/,"").replace(/\".*/,"");
}
//------------------------------------------------------------
// Manage Widget Layout
//------------------------------------------------------------
function ManageLayout() {
 if (getTop().content.document.getElementById("DivSearchResult")==null) {
  getTop().content.document.body.insertAdjacentHTML('BeforeEnd',
        '<div id=DivSearchResult name=DivSearchResult class=DivSearchResult></div>')
  }
  dSearchResult=getTop().content.document.getElementById("DivSearchResult");
  if (dSearchResult.style.visibility=="visible"){ dSearchResult.style.visibility="hidden";return false; }
  var loc=getTop().content.location.href
  var re=/cgi-bin.*pbl/gi
  if (loc.search(re)>0) {
    theURL = "../../html/bga/ManageLayout.html?1=1";
  }
  else {
    theURL = "ManageHomeLayout.html?1=1";
  }
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  dSearchResult.style.right = "0px";
  dSearchResult.style.width = "280px";
  dSearchResult.style.height = "160px";
  dSearchResult.style.top   = "0px";
  dSearchResult.innerHTML = xmlHttp.responseText
  dSearchResult.style.visibility="visible";
}
