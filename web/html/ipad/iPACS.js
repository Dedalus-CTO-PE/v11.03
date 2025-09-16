//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/iPACS.js
//
// Modification 
//
// Version         Date          Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.02       13.09.2013    B.G.Ackland Align tran and Work Scripts
// V10.01.00       13/04/2012                MSIE 10 Compatibility
// V10.03.01       02.07.2013    B.G.Ackland Align tran and Work Scripts
// V10.01.00       13/04/2012                Version change
// V10.00.00       13/04/2012                Created for Mobility Suite
//

var current;
var imageStack = new Array();
var imageIndex;
var imageCount;
var imagePlaying=0;
var theStack;
window.top.document.getElementById("viewport").setAttribute('content',
       'user-scalable=yes, initial-scale = 1.0, minimum-scale = 0.25, maximum-scale = 10.0');
function ImageShow(el,theURL) {
  if (el.src.search(/film/)>0) {
     el.src=el.getAttribute('imageSRC');
     el.height=el.getAttribute('sheight');
  }
  else {
     setTimeout(function(){ top.scrollTo(0,0); }, 100); 
     imageDiv=document.getElementById("imgDiv2")
     imgFrame=document.getElementById("imgFrame2")
     imgFrame.src=theURL;
     imgFrame.height='1024px';
     imageDiv.style.display='block';
     imageDiv.style.width='100%';
  }
}
function PlayPause(theButton,ImageSeries) {
 if (theButton.innerHTML=="Play") {
   theButton.innerHTML="Pause"
   el=document.getElementById("NextButton"); 
   el.style.display="none";
   el=document.getElementById("PrevButton"); 
   el.style.display="none";
   
   if (imagePlaying==2) {
     imagePlaying=1;
     setTimeout(function () { ShowNext(); },100);
   }
   else {
     imagePlaying=1;
     theTable=document.getElementsByTagName("TABLE"); 
     for (i = 0; i < theTable.length; i++) { 
       if (theTable[i].className=="controls") {
         theTable[i].style.display="none"; 
       }
     }
     theImages=document.getElementsByName(ImageSeries); 
     imageIndex=0
     for (i = 0; i < theImages.length; i++) { 
       imageCount=i;
       if (theImages[i].src.search(/film/)>0) {
         imageStack[i]=theImages[i].getAttribute('imageSRC');
       }
       else {
         imageStack[i]=theImages[i].src;
       }
       if (i==0) {
         theStack=theImages[i];
         theImages[i].setAttribute("sheight",theImages[i].getAttribute("height"));
         theImages[i].className="CTStack";
       }
       else {
         theImages[i].style.display="none";
       }
    }
     theStack.onclick=null;
     setTimeout(function () { ShowNext(); },100);
   }
 }
 else {
   theButton.innerHTML="Play"
   imagePlaying=2;
   el=document.getElementById("NextButton"); 
   el.style.display="";
   el=document.getElementById("PrevButton"); 
   el.style.display="";
 }
}
function SeriesLink(theButton,SeriesValue,ImageSeries,imageCount) {
  imageDiv=document.getElementById("imgDiv1")
  imgFrame=document.getElementById("imgFrame1")
  imgFrame.height='1024px';
  theButton.form.series.value=SeriesValue
  theButton.form.maxImagesPerPage0.value=imageCount;
  theButton.form.target=imgFrame.name;
  theButton.form.submit();
  imageDiv.style.display='block';
  imageDiv.style.width='100%';
}
function ShowSeries(theButton,ImageSeries) {
 imagePlaying=0;
 theImages=document.getElementsByName(ImageSeries); 
 el=document.getElementById("PlayButton"); 
 el.innerHTML="Play"
 el=document.getElementById("NextButton"); 
 el.style.display="none";
 el=document.getElementById("PrevButton"); 
 el.style.display="none";
 for (i = 0; i < theImages.length; i++) { 
   if (theImages[i].src.search(/film/)>0) {
     theImages[i].src=theImages[i].getAttribute('imageSRC');
     theImages[i].height=theImages[i].getAttribute('sheight');
    }
   if (theImages[i].className=="CTStack") {
    theImages[i].className="Series1";
    theImages[i].setAttribute("height",theImages[i].getAttribute("sheight"));
   }
   theImages[i].style.display="";
  }
// theButton.style.display='none';
 theTable=document.getElementsByTagName("TABLE"); 
 for (i = 0; i < theTable.length; i++) { 
   if (theTable[i].className=="controls") {
     theTable[i].style.display=""; 
   }
 }
}
function PreviousImage() {
   imageIndex--
   if (imageIndex==0) {
      imageIndex=imageCount-1;
   }
   theStack.src = imageStack[imageIndex];
}
function NextImage() {
   imageIndex++
   if (imageIndex>imageCount) {
      imageIndex=0;
   }
   theStack.src = imageStack[imageIndex];
}
function ShowNext() {
  if (imagePlaying==1)  {
   imageIndex++
   if (imageIndex>imageCount) {
      imageIndex=0;
   }
   theStack.src = imageStack[imageIndex];
   theStack.onload=function () { setTimeout( function () { ShowNext(); },100); } 
  }
}
