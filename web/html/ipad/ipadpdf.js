//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/ipadpdf.js
//
// Modification 
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.03 06.08.2013 B.G.Ackland   CAR 289383
//                      Fixed to use createHttpObject() in place of XMLHttpRequest()
// V10.03.02 15.07.2013 B.G.Ackland CAR 288223
//                      Standardise to pdfXXXXX component Names
//                      extractpdf = pdfextract
//                      thumbpdf = pdfthumb
// V10.03.01 02.07.2013 B.G.Ackland Align tran and Work Scripts
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
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
   theImage=document.getElementById("ViewPDFImage");
   theImage.src=CGIPath+"pdfpage.php?page="+pdfPageNo+"&path="+pdfFile;
 }
}
function lastPDF() {
 pdfPageNo--;
 if (pdfPageNo==0) {
   pdfPageNo=1;
   alertify.alert("Start of Document");
 }
 else {
   theImage=document.getElementById("ViewPDFImage");
   theImage.src=CGIPath+"pdfpage.php?page="+pdfPageNo+"&path="+pdfFile;
 }
}
function openPDF() {
  window.open(pdfFile,'_blank',"menubar=no,status=no,scrollbar=yes,location=no");
}
function openImage(imageFile) {
  window.open(imageFile,'_blank',"menubar=no,status=no,scrollbar=yes,location=no");
}
function thumbPDF() {
 el=document.getElementById("pageLeft");
 if(el != null) {
   el.style.top=Math.round((top.window.innerHeight-160)/2)
 }

 
 el=document.getElementById("pageRight");
 if(el != null) {
  el.style.top=Math.round((top.window.innerHeight-160)/2)
 }
 theImage=document.getElementById("ViewPDFImage");
 theImage.src="../images/Blank.gif"
 theImage.style.display="none";
 theThumb=document.getElementById("pdfThumbnails");
 theThumb.style.display='block';
 pdfThumb=true;
 if (isWhitespace(theThumb.innerHTML)) {
   theURL=CGIPath+'pdfextract.php?path='+pdfFile;
   var xmlHttp = createHttpObject();
   xmlHttp.open("GET", theURL, false);
   xmlHttp.send();
   if (xmlHttp.responseText!=""&&xmlHttp.status == 200) {
     pdfPages=xmlHttp.responseText
   }
   OS=""
   for (i=1;i<=pdfPages;i++){
      OS+="<img class=thumb src="+CGIPath+"pdfthumb.php?page="+i+"&size=150&path="+pdfFile+
          " onclick=\"viewPage('"+i+"','"+pdfFile+"');\">";
   }
   theThumb=document.getElementById("pdfThumbnails");
   theThumb.innerHTML=OS;
   theThumb.style.display='block';
   theThumb.style.backgroundColor='white';
 }
}
function viewPage(page,pdf) {
 pdfFile=pdf;
 theThumb=document.getElementById("pdfThumbnails");
 theThumb.style.display='none';
 pdfPageNo=page;
 theImage=document.getElementById("ViewPDFImage");
 theImage.style.display="block";
 pdfSize=1000;
 theImage.src=CGIPath+"pdfpage.php?page="+pdfPageNo+"&path="+pdfFile+"&size="+pdfSize;
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
 theImage.src=CGIPath+"pdfpage.php?page="+pdfPageNo+"&path="+pdfFile;
}
function ViewDoc(linkurl) {
    DFrameLink(linkurl,150,150,500,350)
}
