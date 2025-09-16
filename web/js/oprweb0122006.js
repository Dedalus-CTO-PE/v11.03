//jsVersion  : V11.03.00
//========================================================================
// Program   : oprweb0122006.js
//
// Written   : 26.02.2014
//
// Function  : Standard Functions Used in oprweb0122006.html 
//
// Version   : V10.04.00
//
// Modifications :
//        V10.04.00 26.02.2014  Peter Vela         218689
//                  Created js
//========================================================================
//----------------------------------------------------------------------
// Cross browser method of finding the Height of the client or a
// named element object
//----------------------------------------------------------------------
function parentgetClientHeight(element_object) {
  var h;
  if (arguments.length == 1) {    // Height of a named element
     h=element_object.clientHeight;
  } else {                        // Height of the viewport
    if (parent.document.innerHeight) {
      h=parent.document.innerHeight;
    } else if (parent.document.documentElement.clientHeight) {
      h=parent.document.documentElement.clientHeight;
    } else if (parent.document.body) {
      h=parent.document.body.clientHeight;
    }
  }
  return h;
}
function parentgetClientWidth()
{
  // Cross browser method of finding the Width of the client are
  var w;
  if (parent.document.innerWidth)
    w=parent.document.innerWidth;
  else if (parent.document.documentElement.clientWidth)
    w=parent.document.documentElement.clientWidth;
  else if (parent.document.body)
    w=parent.document.body.clientWidth;

  return w;
}
//------------------------------------------------------------------------
// Get addressability to PopUpFrame or PopUpFrame1
//------------------------------------------------------------------------
function ParentibaGetIframeDoc(iframe)
{

  var context = null;   // parameter 2 (optonal) defaults to curent doc.

  // get the arguments
  if (arguments.length == 2) context  = arguments[1];
  if (context == null) context = parent.document;  // default to current document

  var iFrameDoc = null;

  // find the PopUpFrame
  var PopUpFrame = ibaGetElement(iframe,context);
  if (PopUpFrame)
  {
    if (PopUpFrame.contentDocument)                // W3C standards compliant
    {
      iFrameDoc = PopUpFrame.contentDocument;
    }
    else
    {
      iFrameDoc = PopUpFrame.contentWindow.document; // IE only
    }
  }
  return iFrameDoc;
}
//----------------------------------------------------------------------
// Function : Open a Dynamic Frame to a URL
//----------------------------------------------------------------------
function ParentDFrameLink(LinkToUrl,FrameTop,FrameLeft,FrameWidth,FrameHeight)
{
  var PopUpFrameDoc = ParentDFrameStart();
  var PopUpScreen = parent.document.getElementById('PopUpScreen');

  PopUpFrameDoc.location.href = LinkToUrl;
  var MaxWidth  = parentgetClientWidth() - FrameLeft;
  var MaxHeight = parentgetClientHeight() - FrameTop;

  var w   = (MaxWidth  > FrameWidth ) ? FrameWidth  : MaxWidth ;
  var h   = (MaxHeight > FrameHeight) ? FrameHeight : MaxHeight;
  var top = FrameTop + parent.document.body.scrollTop;

  PopUpScreen.style.top     = top + 'px';
  PopUpScreen.style.left    = FrameLeft + 'px';
  PopUpScreen.style.width   = w + 'px';
  PopUpScreen.style.height  = h + 'px';
  PopUpScreen.style.display = "";
}
//------------------------------------------------------------
// Function : Start Frame
//------------------------------------------------------------
function ParentDFrameStart()
{
  var PopUpFrameDoc  = ParentibaGetIframeDoc('PopUpFrame');
  PopUpFrameDoc.open();
  PopUpFrameDoc.write( "" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' +
  '<script language="javascript">' +
  '  document.onunload = parent.PopUpScreen.style.display="none";'+
  '</script>' +
  '<body>' +
  '<span class="DFrameTitleBar">' +
  '<img border="0" align="right" src="../images/ExitIcon.gif" ' +
  ' onclick=parent.PopUpScreen.style.display="none";>' +
  'Loading Document...' +
  '</span>');
   PopUpFrameDoc.close();
   return PopUpFrameDoc;
}
