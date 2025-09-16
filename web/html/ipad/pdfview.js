//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/pdfview.js
//
// Modification 
//
// Version   Date                         Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.01.01 07.09.2012 B.G.Ackland - Renamed for pdfview
//
var pdfPageNo;
var pdfPages;
var pdfFile;
var pdfThumb;
var pdfThumbStr=1;
function nextPDF() {
 pdfPageNo++;
 if (pdfPageNo>pdfPages) {
   pdfPageNo=pdfPages;
   alertify.alert("End of Document");
 }
 else {
   el=document.getElementById("PageHead")
   el.innerHTML="Page "+pdfPageNo+" of "+pdfPages;
   theImage=document.getElementById("ViewPDFImage");
   theImage.style.display="none";
   theImage.onload=function () { 
     theImage=document.getElementById("ViewPDFImage");
     theImage.style.display=""; };
   theImage.src="pdfpage.php?page="+pdfPageNo+"&path="+pdfFile;
 }
}
function lastPDF() {
 pdfPageNo--;
 if (pdfPageNo==0) {
   pdfPageNo=1;
   alertify.alert("Start of Document");
 }
 else {
   el=document.getElementById("PageHead")
   el.innerHTML="Page "+pdfPageNo+" of "+pdfPages;
   theImage=document.getElementById("ViewPDFImage");
   theImage.style.display="none";
   theImage.onload=function () { 
     theImage=document.getElementById("ViewPDFImage");
     theImage.style.display=""; };
   theImage.src="pdfpage.php?page="+pdfPageNo+"&path="+pdfFile;
 }
}
function openPDF() {
  window.open(pdfFile,'_blank',"menubar=no,status=no,scrollbar=yes,location=no");
}
function openImage(imageFile) {
  window.open(imageFile,'_blank',"menubar=no,status=no,scrollbar=yes,location=no");
}
function thumbPDF() {
 el=document.getElementById("btnNext");
 el.style.display="none";
 el=document.getElementById("btnPrev");
 el.style.display="none";
 el=document.getElementById("btnThumb");
 el.style.display="none";
 theImage=document.getElementById("ViewPDFImage");
 theImage.style.display="none";
 theThumb=document.getElementById("pdfThumbnails");
 theThumb.style.display='block';
 pdfThumb=true;
 if (isWhitespace(theThumb.innerHTML)) {
   theURL='pdfextract.php?path='+pdfFile;
   var xmlHttp = createHttpObject();
   xmlHttp.open("GET", theURL, false);
   xmlHttp.send();
   if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
     pdfPages=xmlHttp.responseText
   }
   if (pdfPages==1) {
     viewPage(1,pdfFile);
     return
   }
   el=document.getElementById("PageHead")
   el.innerHTML="Pages "+pdfPages;
   OS=""
   var sizePage="150"
   if (pdfPages==2) sizePage="500";
   if (pdfPages==3) sizePage="330";
   if (pdfPages==4) sizePage="250";
   for (i=1;i<=pdfPages;i++){
      OS+="<img class=thumb src=pdfthumb.php?page="+i+"&size="+sizePage+"&path="+pdfFile+
          " onclick=\"viewPage('"+i+"','"+pdfFile+"');\">";
   }
   theThumb=document.getElementById("pdfThumbnails");
   theThumb.innerHTML=OS;
   theThumb.style.display='block';
   theThumb.style.backgroundColor='white';
 }
}
function viewPage(page,pdf) {
 if (pdfPages>1) {
   el=document.getElementById("btnNext");
   el.style.display="";
   el=document.getElementById("btnPrev");
   el.style.display="";
   el=document.getElementById("btnThumb");
   el.style.display="";
 }
 el=document.getElementById("PageHead")
 el.innerHTML="Page "+page+" of "+pdfPages;
 pdfFile=pdf;
 theThumb=document.getElementById("pdfThumbnails");
 theThumb.style.display='none';
 pdfPageNo=page;
 theImage=document.getElementById("ViewPDFImage");
 theImage.style.display="block";
 pdfSize=1000;
 theImage.src="pdfpage.php?page="+pdfPageNo+"&path="+pdfFile+"&size="+pdfSize;
}
function viewPDF(pdf) {
 pdfPageNo=1;
 pdfFile=pdf;
 pdfThumbStr=1;
 pdfThumb=false;
 theFrame=document.getElementById("pdfThumbnails");
 theFrame.innerHTML="";
 theImage=document.getElementById("ViewPDFImage");
 theImage.style.display="block";
 theImage.src="pdfpage.php?page="+pdfPageNo+"&path="+pdfFile;
}
function ViewDoc(linkurl) {
    DFrameLink(linkurl,150,150,500,350)
}
