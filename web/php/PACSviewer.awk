BEGIN    {  seriesCount=0
            imageTotal=0
            hrefLink = ""
            pacsHost="https://pacs.miavictoria.com.au/"
         }
/viewing_inline_jpeg.html/               { next }
/InteleBrowser.css/                      { next }
/InlineJpegs.css/                        { next }
/<div style="font-size:9px;">Brightness/ { next }
/<HEAD>/ {  print "<head>"
            print "<script type='text/javascript' src='../html/ipad/iPACS.js'></script>"
            print "<link   rel='stylesheet' href='../html/ipad/ipad.css' type='text/css'>"
            print "<link   rel='stylesheet' href='../html/ipad/iPACS.css' type='text/css'>"
            print "<title>"
            next
         }
/table class='header'/ { 
           seriesCount++
           imageCount=0
          }
/Ref. Phys./           {
           print $0
           print "</tr>"
           next
          }
/IntelePACSbanner.jpg/ { 
           print "<div class=subMenu>"
           print "<span style='float:left;margin:auto 0px;'>"
           print "<span class=SpanButton style='width:120px;' "
           print " onclick=\"ShowSeries(this,'Series1');\">Show Images</span>"
           print "<span class=SpanButton style='width:120px;' "
           print " id='PlayButton' onclick=\"PlayPause(this,'Series1');\">Play</span>"
           print "<span style='display:none;width:120px;' class=SpanButton "
           print " id='NextButton' onclick=\"NextImage(this,'Series1');\">Next</span>"
           print "<span style='display:none;width:120px;'  class=SpanButton "
           print " id='PrevButton' onclick=\"PreviousImage(this,'Series1');\">Previous</span>"
           print "</span>"
           print "<span class=MenuLogo</span>"
           print "</div>"
           next 
          }
/<\/A>/  { 
           next
         }
/FORM ACTION=/ {
           print "<FORM ACTION='../cgi-bin/PACSviewer.php' METHOD=GET>"
           next
         }
/arrowleft.gif/ {
           print "Brightness</td><td align=left>"
           sub(/src="images/,"class=Arrow src=\"../images",$0)
           sub(/onmouseover/,"nmover",$0)
           sub(/onmouseout/,"nmout",$0)
           print $0
           next
         }
/arrowright.gif/ {
           sub(/src="images/,"class=Arrow src=\"../images",$0)
           sub(/onmouseover/,"nmover",$0)
           sub(/onmouseout/,"nmout",$0)
           print $0
           next
         }
/brightnessDisplay_idx/ {
           sub(/style=/,"nostyle=",$0)
           print $0
           next
         }
/presetController_idx0/ { next }
/shortcut icon/ { next }
/A HREF="\/JpegServlet\/getJpeg/ {
           sub(/.*JpegServlet\/getJpeg/,"PACSimage.php",$0)
           sub(/">/,"",$0)
           hrefLink = $0
           next
          }
/IMG SRC="\/JpegServlet\/getJpeg/ {
  if (imageCount>2||(seriesCount>1&&imageTotal>2)) {
    imgsrc="class=Series" seriesCount " name=Series" seriesCount " SRC=../images/film.png imageSRC=\"" 
    sub(/JpegServlet\/getJpeg/,"PACSjpeg.php",$0)
    sub(/SRC="\//,imgsrc,$0)
    sub(/ height=/," sheight=",$0)
  } else {
    imageCount++
    imageTotal++
    imgsrc="class=Series" seriesCount " name=Series" seriesCount " SRC=\"" 
    sub(/JpegServlet\/getJpeg/,"PACSjpeg.php",$0)
    sub(/SRC="\//,imgsrc,$0)
  }
  sub(/border=1/,"border=0 onclick=ImageShow(this,'hrefLink');",$0)
  gsub(/&/,"\\\\&",hrefLink)
  sub(/hrefLink/,hrefLink,$0)
  print $0
  next
         }
/Unable to convert to jpeg. SR not supported/  {
           print "<p style='width:100%;text-align:center;color:white'>Images Not Available for this Series</p>"
           next
         }
/Error Launching InteleViewer/ {
           print "<p style='margin-top:50px;width:100%;text-align:center;color:white;font-size:17px'>Images Not Available for this Study</p>"
           next
         }
/Error details: Invalid request/ { next }
/Please contact your PACS administrator for assistance./ { next }
/InteleBrowser.js/ { next }
/InlineJpegs.js/   { next }
         {
           print $0
         }
END      { print "<div id=imgDiv2 class=ShowImage>"
           print "<iframe border=0 style='border:0px;background-color:black;' id=imgFrame2 width=100%/></div>"
           print "</div>"
         }
