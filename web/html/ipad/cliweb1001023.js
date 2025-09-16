//jsVersion  : V11.03.00
//
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
var count = 0;
function init() {
 if (!isWhitespace(document.getElementById("LinkResult").rxlink.value)) {
    document.getElementById("pacslink").style.display="";
 }
 var actionBtn = parent.document.getElementById('actionButton');
 if(actionBtn) {
   actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
   actionBtn.className = actionBtn.className.replace(/Blue/g,"");
   actionBtn.className += " SpanButton";
   actionBtn.innerText = "Link Result";
   actionBtn.onclick = function() {
      LinkResult();
      parent.frames['PatFrame'].refreshScreen();
      parent.CloseDocument();
   }
 }
 ListLocation=document.getElementById("sectionList");
 el=document.getElementById("RawListData");
 ListOutput="<ul class=sectionList>";
 var titleText=""
 var commentText=""
 var trows=el.getElementsByTagName("tr");
 for (i=0;i<trows.length;i++) {
   if (!isWhitespace(trows[i].innerHTML)) {
     tcells=trows[i].getElementsByTagName("td")
     if (tcells[0].colSpan=="6") {
       if (tcells[0].className=="HeadingCell") {
         titleText=tcells[0].innerHTML;
       }
       else {
        commentText= tcells[0].innerHTML.replace(/\n/g,"<br>")
        commentText=commentText.replace(/\<pre\>/i,"")
        commentText=commentText.replace(/\<\/pre\>/i,"")
        commentText=commentText.replace(/\<br\>\<br\>/gi,"<br>")
        commentText=commentText.replace(/\<br\>$/i,"")
       }
       if (commentText!="") {
         ListOutput+="<li class=sectionItem >"+titleText +
                      "<br><span class=resultText>"+commentText +
                      "</span></li>"
         commentText=""
         titleText=""
       }
     }
     else {
       if (tcells[0].className!="HeadingCell") {
         ListOutput+="<li class=ItemRes onclick='openResultChartTemplate("+count+");'"
         count++;
         bgcolor=tcells[1].getAttribute("bgcolor")
         if (!isWhitespace(bgcolor)) ListOutput+="style='background-color:#"+bgcolor+"' "
         ListOutput+="><span class=ResultLine>"+tcells[0].innerHTML+"</span>" 
         if (!isWhitespace(tcells[5].innerHTML)) {
           ListOutput+="<span class=ResultFlag>" + tcells[5].innerHTML + "</span>" 
         }
         else {
           ListOutput+="<span class=ResultFlag>&nbsp;</span>" 
         }
         if (isWhitespace(tcells[3].innerHTML)) {
           ListOutput+="<span class=ResultRefRan>&nbsp;<br>" +
                       "<span class=ResultLabel>&nbsp;</span></span>" 
         }
         else {
           ListOutput+="<span class=ResultRefRan>"+tcells[3].innerHTML + "<br>" +
                       "<span class=ResultLabel>Ref. Range</span></span>" 
         }
         ListOutput+="<span class=ResultValue>"+tcells[1].innerHTML + "<br>" 
         if (isWhitespace(tcells[2].innerHTML)) {
           ListOutput+="<span class=ResultLabel>&nbsp;</span></span></li>"
         }
         else {
           ListOutput+="<span class=ResultLabel>"+tcells[2].innerHTML+"</span></span></li>"
         }
       }
     }
   }
 }
 ListOutput+="</ul>";
 ListLocation.innerHTML=ListOutput;

 NoteLocation=document.getElementById("sectionNotes");
 el=document.getElementById("RawNoteData");
 NotesOutput="<ul class=sectionList>";
 titleText="Comments";
 commentText=el.innerHTML.replace(/\<br\>/g," ")
 NotesOutput+="<li class=sectionItem>"+titleText+"<br>"
 NotesOutput+="<span class=resultText>"+commentText
 NotesOutput+="</span></li>"
 NotesOutput+="</ul>";
 if (!isWhitespace(commentText)) NoteLocation.innerHTML=NotesOutput;
}
function LinkResult() {
  var xmlHttp = createHttpObject();
  var theURL   = "cliweb10.pbl"
  parameters  ="reportno="+encodeURIComponent(document.LinkResult.reportno.value)
  parameters+="&template="+encodeURIComponent(document.LinkResult.template.value)
  parameters+="&urnumber="+encodeURIComponent(getQueryString('urnumber'))
  parameters+="&admissno="+encodeURIComponent(getQueryString('admissno'))
  parameters+="&fpatname="+encodeURIComponent(getQueryString('fpatname'))
  parameters+="&resultky="+encodeURIComponent(document.LinkResult.resultky.value)
  parameters+="&auditkey="+encodeURIComponent(document.LinkResult.auditkey.value)
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(parameters);
  resultText=xmlHttp.responseText 
  if (resultText.match(/Invalid/i)) {
   alertify.alert(resultText.replace(/.*alert\(\"/i,"").replace(/\".*/,""));
  } 
}
function openResultChartTemplate(chartNumber) {
  var resultky = document.getElementById('resultky');
  var linkURL = CGIPath+"cliweb10.pbl?reportno=03&template=711"+
                "&resultky="+resultky.value.replace(/ /g,"+")+
                "&chart="+chartNumber;
  openDocument(linkURL,'Results Chart');                
}
function ShowImage(Folio,LabRef) {
  var xmlHttp = createHttpObject();
  theURL = "IntelePACS.pbl?username="+trim(PatientLinks.username.value);
  theURL = theURL + "&patientId="+Folio;
  theURL = theURL + "&accessionNumber="+LabRef
  theURL = theURL + '&httprand='+Math.random();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText.match(/FAIL/i)) {
    alertify.alert("Link to IntelePACS Not Available"); }
  else {
    openDocument(xmlHttp.responseText,"IntelePACS Viewer");
  }
}
