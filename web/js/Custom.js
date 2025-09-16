function ButtonLink(URL) {
 var s=document.createElement("select")
 var x=document.createElement("option")
 x.value=URL+"|content";
 s.appendChild(x)
 EMenuLinkTo(s);
}
function EMenuLinkTo(SelectItem) {
  if (top.CloseOverlayFrames) {
    top.CloseOverlayFrames();  // close all overlayed (opened) DFrames first
  }
  MenuLinkTo(SelectItem);
  ShowContent();
}

