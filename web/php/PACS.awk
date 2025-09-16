BEGIN    {  seriesCount=0
            imageTotal=0
            hrefLink = ""
            pacsHost="https://cahweb1.cabrini.com.au/"
         }
/viewing_inline_jpeg.html/               { next }
/InteleBrowser.css/                      { next }
/InlineJpegs.css/                        { next }
/<div style="font-size:9px;">Brightness/ { next }
/<HEAD>/ {  print "<head>"
            print "<script type='text/javascript' src='../html/ipad/iPACS.js'></script>"
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
           print "<input value='Show Images' class=MenuShowButton type=button "
           print " onclick=ShowSeries(this,'Series1');>"
           print "<input value='Play' class=MenuShowButton type=button "
           print " id='PlayButton' onclick=PlayPause(this,'Series1');>"
           print "<input value='Next' style='display:none' class=MenuShowButton type=button "
           print " id='NextButton' onclick=NextImage(this,'Series1');>"
           print "<input value='Previous'style='display:none'  class=MenuShowButton type=button "
           print " id='PrevButton' onclick=PreviousImage(this,'Series1');>"
           print "</span>"
           print "   <img class=MenuLogo src='../html/ipad/logo.png'>"
           print "</div>"
           next 
          }
/<\/A>/  { 
           next
         }
/FORM ACTION=/ {
           print "<FORM ACTION='../cgi-bin/PACSviewer.pbl' METHOD=GET>"
           next
         }
/arrowleft.gif/ {
           print "Brightness</td><td align=left>"
           sub(/src="images/,"class=Arrow src=\"https://cahweb1.cabrini.com.au/InteleBrowser/images",$0)
           sub(/onmouseover/,"nmover",$0)
           sub(/onmouseout/,"nmout",$0)
           print $0
           next
         }
/arrowright.gif/ {
           sub(/src="images/,"class=Arrow src=\"https://cahweb1.cabrini.com.au/InteleBrowser/images",$0)
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
/A HREF="\/JpegServlet\/getJpeg/ {
           sub(/.*HREF="\//,"https://cahweb1.cabrini.com.au/",$0)
           sub(/">/,"",$0)
           hrefLink = $0
           next
          }
/IMG SRC="\/JpegServlet\/getJpeg/ {
           if (imageCount>2||(seriesCount>1&&imageTotal>2)) {
             imgsrc="class=Series" seriesCount " name=Series" seriesCount " SRC=../images/film.png imageSRC=\"" pacsHost
             sub(/SRC="\//,imgsrc,$0)
             sub(/ height=/," sheight=",$0)
           }
           else {
             imageCount++
             imageTotal++
             imgsrc="class=Series" seriesCount " name=Series" seriesCount " SRC=\"" pacsHost
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
         {
           sub(/href='css/,"href='https://cahweb1.cabrini.com.au/InteleBrowser/css",$0)
           sub(/src="css/,"src=\"https://cahweb1.cabrini.com.au/InteleBrowser/css",$0)
           sub(/src="images/,"src=\"https://cahweb1.cabrini.com.au/InteleBrowser/images",$0)
           sub(/src='js/,"src='https://cahweb1.cabrini.com.au/InteleBrowser/js",$0)
           sub(/src="\/InteleBrowser\/js/,"src=\"https://cahweb1.cabrini.com.au/InteleBrowser/js",$0)
           print $0
         }
END      { print "<div id=imgDiv2 class=ShowImage>"
           print "<iframe border=0 style='border:0px;background-color:black;' id=imgFrame2 width=100%/></div>"
           print "</div>"
         }
