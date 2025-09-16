//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/cliweb1001.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.08.01 20.06.2016 B.G.Ackland   TSK 0821137
//                      Declare h in ViewImage for Screen height
// V10.04.01 05.06.2014 B.G.Ackland   CAR 299627
//                      PDF Attachment Review
// V10.03.03 07.04.2014 B.G.Ackland CAR 289383
//                      Revised Linking for Healthscope PDF attachement Views
// V10.03.02 13.11.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
//
var ImageLinkType="";
var ImageLinkURL="";
var ImageSiteURL="";
var urlRegex= new RegExp("(https?://.*)(\\s)","gi");
function PageLoad() {
  var docSection=document.getElementById("DocumentSection");
  var docTable=document.getElementById("DocumentTable");
  var docRegex= new RegExp("(.+OpenDocument..)(.+)(..;.+)","g");
  if (typeof docTable.rows[1] == "undefined") {
    docSection.style.display="none";
  } else {
    if (typeof docTable.rows[1].cells[0] != "undefined") {
      ImageLinkType='DOCS';
      ImageLinkURL=docTable.rows[1].cells[0].innerHTML.replace(docRegex,"$2");
      if (resultOpenDocument) {
        OpenDocument(ImageLinkURL);
      }
    }
  }
  init();
  CurrentDoctor=PatientLinks.doctorcd.value
  OrderedBy=PatientLinks.orderedby.value
  StatusCode=PatientLinks.statuscd.value
  Folio=PatientLinks.labfolio.value
  LabRef=PatientLinks.labrefno.value
  urnumber=PatientLinks.urnumber.value.replace(/ /g,"");
  if (StatusCode.match(/S/)||StatusCode.match(/ZZ/)) {
    ImageLinkType='ORDS';
    ImageLinkURL="ViewOrder.php?ordernum="+LabRef+"&urnumber="+urnumber;
    el = document.getElementById("viewbutton")
    el.style.display="";
    el.innerHTML="View Order";
  } else {
    if (isWhitespace(Folio)||isWhitespace(LabRef)) {
      el = document.getElementById("viewbutton")
      el.style.display="none";
    } else {
      ImageLinkType='PACS';
      el = document.getElementById("viewbutton")
      el.style.display="";
      el.innerHTML="View Image";
    }
  }
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    if (StatusCode.match(/S/)||StatusCode.match(/ZZ/)||StatusCode.match(/X/)) {
      if (CurrentDoctor.value==OrderedBy.value ) {
        actionBtn.innerText = "Cancel";
        actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
        actionBtn.className = actionBtn.className.replace(/Blue/g,"");
        actionBtn.className = actionBtn.className + " SpanButtonBlue";
        actionBtn.onclick = function() {
           CancelOrder();
        }
      }
    } else {
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
function CancelOrder() {
   confirmMsg="This action will cancel all items on this request.<br>"+
              "Click Ok to Continue."
   alertify.confirm(confirmMsg, function (e) {
     if (e) {
       var xmlHttp = createHttpObject();
       var theURL   = "cliweb06.pbl";
       parameters  ="reportno=1";
       parameters+="&template=1";
       parameters+="&formactn=C2";
       parameters+="&urnumber="+encodeURIComponent(document.PatientLinks.urnumber.value);
       parameters+="&admissno="+encodeURIComponent(document.PatientLinks.admissno.value);
       parameters+="&resultky="+encodeURIComponent(document.MarkSeen.resultkey.value);
       xmlHttp.open("POST", theURL, false);
       xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
       xmlHttp.send(parameters);
       resultText=xmlHttp.responseText
       if (resultText.match(/ERROR/i)) {
         alertify.alert(resultText.replace(/.*alert\(\"/i,"").replace(/\".*/,""));
       } else {
         parent.frames['PatFrame'].refreshScreen();
         parent.CloseDocument();
       }
     } 
   } );
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
  }
}
function openResultChartTemplate(chartNumber) {
  var resultkey = document.getElementById('resultkey');

  var linkURL = CGIPath+"cliweb10.pbl?reportno=03&template=711"+
                "&resultky="+resultkey.value.replace(/ /g,"+")+
                "&chart="+chartNumber;

  openDocument(linkURL,'Results Chart');
}
var count = 0;
function init() {
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
function ShowImage() {
  h=document.body.scrollHeight;
  if (ImageLinkType=="PACS") {
    if (PACSLinkType=="1") {
      ViewImages();
      return;
    }
    if (PACSLinkType=="2") {
      OpenImage();
      return;
    }
    if (pacsLinkEmbedded&&!isWhitespace(ImageSiteURL[0])) {
      window.open(ImageSiteURL[0]);
      return;
    } 
  }
  if (ImageLinkType=="DOCS") {
    OpenDocument(ImageLinkURL);
    return;
  }
  if (ImageLinkType=="ORDS") {
    OpenDocument(ImageLinkURL);
    return;
  }
}
//------------------------------------------------------------
// View IntelePACS Images in Frame
//------------------------------------------------------------
function ViewImages() {
  var h=document.body.scrollHeight;
  allowZoom();
  Folio=PatientLinks.labfolio.value
  LabRef=PatientLinks.labrefno.value
  if (isWhitespace(LabRef)) {
    alertify.alert("Images Not Available : Invalid Accession No");
    return;
  }
  if (isWhitespace(Folio)) {
    alertify.alert("Images Not Available : Invalid Patient Identifier (Folio)");
    return;
  }
  theURL = CGIPath+"PACSlist.php?username="+trim(PatientLinks.username.value);
  theURL = theURL + "&reportno=3";
  theURL = theURL + "&patientId="+Folio;
  theURL = theURL + "&accessionNumber="+LabRef.replace(/_.*/,"")
  theURL = theURL + '&httprand='+Math.random();
  setTimeout(function(){ top.scrollTo(0,0); }, 100);
  imageDiv=document.getElementById("imgDiv")
  imgFrame=document.getElementById("imgFrame")
  imgFrame.height=h+'px';
  imgFrame.style.border='0';
  imgFrame.src=theURL;
  imageDiv.style.display='block';
  imageDiv.style.width='100%';
  imageDiv.style.position='absolute';
  imageDiv.style.top='0px';
  imageDiv.style.left='0px';
}
//------------------------------------------------------------
// Get Secure Session from IntelePACS and Launch URL
//------------------------------------------------------------
function OpenImage() {
  Folio=PatientLinks.labfolio.value;
  LabRef=PatientLinks.labrefno.value;
  if (isWhitespace(LabRef)) {
    alertify.alert("Images Not Available : Invalid Accession No");
    return;
  }
  if (isWhitespace(Folio)) {
    alertify.alert("Images Not Available : Invalid Patient Identifier (Folio)");
    return;
  }
  theURL = CGIPath+"PACSsession.php?username="+trim(PatientLinks.username.value);
  theURL = theURL + "&reportno=3";
  theURL = theURL + "&patientId="+trim(Folio);
  theURL = theURL + "&accessionNumber="+trim(LabRef.replace(/_.*/,""))
  theURL = theURL + '&httprand='+Math.random();
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
    var returnStatus=xmlHttp.responseText.split("|")[0];
    var returnContent=xmlHttp.responseText.split("|")[1];
    if (returnStatus=="OK") {
      var a = document.createElement('a');
      a.setAttribute("href", returnContent);
      a.setAttribute("target", "_blank");
      var dispatch = document.createEvent("HTMLEvents");
      dispatch.initEvent("click", true, true);
      a.dispatchEvent(dispatch);
    } else {
      alertify.alert(returnContent);
    }
  }
}
