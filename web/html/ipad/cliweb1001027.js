//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb1001027.js
//
// Function   : View Result that has Attached Document 
//              Open Document when page is loaded
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
//
function PageLoad() {
  init();
  var docSection=document.getElementById("DocumentSection");
  var docTable=document.getElementById("DocumentTable");
  var docRegex= new RegExp("(.+OpenDocument..)(.+)(..;.+)","g");
  if (typeof docTable.rows[1] == "undefined") { 
    docSection.style.display="none";
  } else {
    if (typeof docTable.rows[1].cells[0] != "undefined") {
      OpenDocument(docTable.rows[1].cells[0].innerHTML.replace(docRegex,"$2"));
    }
  }
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.innerText = "Mark as Read";
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.onclick = function() {
      MarkResult();
      parent.frames['PatFrame'].refreshScreen();
      parent.CloseDocument();
    }
  }
}
function OpenDocument(theURL) {
  imageDiv=document.getElementById("imgDiv")
  imgFrame=document.getElementById("imgFrame")
  imgFrame.style.backgroundColor="white";
  imgFrame.style.height="1024px";
  imgFrame.style.width="100%";
  imgFrame.src=theURL;
  allowZoom();
  imageDiv.style.display='block';
  imageDiv.style.width='100%';
  imageDiv.style.position='absolute';
  imageDiv.style.top='0px';
  imageDiv.style.left='0px';
}
function MarkResult() {
  var xmlHttp = createHttpObject();
  var theURL   = "cliweb10.pbl"
  parameters  ="reportno="+encodeURIComponent(document.MarkSeen.reportno.value)
  parameters+="&template="+encodeURIComponent(document.MarkSeen.template.value)
  parameters+="&markalll="+encodeURIComponent(document.MarkSeen.markalll.value)
  parameters+="&auditkey="+encodeURIComponent(document.MarkSeen.auditkey.value)
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(parameters);
  resultText=xmlHttp.responseText
  if (resultText.match(/Invalid/i)) {
    alertify.alert(resultText.replace(/.*alert\(\"/i,"").replace(/\".*/,""));
  } else {
    top.CloseDocument();
  }
}
function openResultChartTemplate(chartNumber) {
  var resultkey = document.getElementById('resultkey');
  var linkURL = CGIPath+"cliweb10.pbl?reportno=03&template=711"+
                "&resultky="+resultkey.value.replace(/ /g,"+")+
                "&chart="+chartNumber;
  openDocument(linkURL,'Results Chart');
}
function init() {
 var count = 0;
 ListLocation=document.getElementById("sectionList");
 el=document.getElementById("RawListData");
 CommentOutput="";
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
        commentText= tcells[0].innerHTML;
        ImageSiteURL=commentText.match(urlRegex);
        commentText=commentText.replace(urlRegex, "<a target='_blank' href='$1'>$1</a>");
       }
       if (commentText!="") {
         if (commentText.replace(/ /g,"").length<30) {
           commentText=commentText.replace(/\<pre\>/i,"")
           commentText=commentText.replace(/\<\/pre\>/i,"")
           commentText=commentText.replace(/\<br\>\<br\>/gi,"<br>")
           commentText=commentText.replace(/\<br\>$/i,"")
           CommentOutput+="<li class=sectionItem>"+
                        "<span class=ResultLine>"+titleText +"</span>" +
                        "<span class=ResultRefRan>&nbsp;</span>" +
                        "<span class=ResultValue>"+commentText + "</span></li>"
         } else {
           CommentOutput+="<li class=sectionItem >"+titleText +
                        "<span class=resultText id=resultText>"+commentText +
                        "</span></li>"
         }
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

         var index = tcells[2].innerHTML.indexOf('^');
         if(index != -1) {
            tcells[2].innerHTML = tcells[2].innerHTML.substring(0,index);
         }

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
 ListOutput+=CommentOutput;
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
