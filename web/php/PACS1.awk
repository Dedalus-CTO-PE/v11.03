BEGIN    {  seriesCount=0
            imageTotal=0
            hrefLink = ""
            headerFlag=0
            outputFlag=1
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
/HIDDEN NAME=series/ { 
           print "<input type=hidden name=maxImagesPerPage0>"
           print $0
           seriesStr=substr($0,1,length($0)-1)
           sub(/.*VALUE="/,"",seriesStr)
           sub(/">/,"",seriesStr)
           split(seriesStr,seriesValues,"|")
           next
          }
/table class='header'/ { 
           seriesCount++
           imageCount=0
           headerFlag=1
           cellCount=0
           studyDate=""
           studyDescription=""
           seriesDescription=""
           imagesCount=0
          }
/<td>/    {
            if (headerFlag==1) {
              cellCount++
              cellValue=$0
              sub(/<td>/,"",cellValue)
              sub(/<\/td>/,"",cellValue)
              if (cellCount==1) { print "<tr>" $0 }
              if (cellCount==2) { print }
              if (cellCount==3) { print }
              if (cellCount==4) { print }
              if (cellCount==5) { 
                imageCount=cellValue
                sub(/:.*/,"",imageCount)
                print }
              if (cellCount==6) { 
                print $0 
                print "<td><input value='Show Series' class=ShowButton type=button "
                print " onclick=SeriesLink(this,'" seriesValues[seriesCount] "','Series" seriesCount "'," imageCount ");></td></tr>"
               }
             }
             next
          }
/<\/table>/ { 
           headerFlag=2
          }
/Ref. Phys./           {
           if (outputFlag==1) {
             print $0
             print "<th></th></tr>"
           }
           outputFlag=0
           next
          }
/IntelePACSbanner.jpg/ { 
           print "<div class=subMenu>"
           print "   <img class=MenuLogo src='../html/ipad/logo.png'>"
           print "</div>"
           next 
          }
/FORM ACTION=/ {
           print "<FORM ID=SERIESLINK NAME=SERIESLINK ACTION='../cgi-bin/PACSviewer.pbl' METHOD=GET>"
           next
         }
/Unable to convert to jpeg. SR not supported/  {
 #          print "<p style='width:100%;text-align:center;color:white'>Images Not Available for this Series</p>"
           next
         }
/Error Launching InteleViewer/ {
           print "<p style='margin-top:50px;width:100%;text-align:center;color:white;font-size:17px'>Images Not Currently Available for this Study</p>"
           next
         }
/Error details: Invalid request/ { next }
/Please contact your PACS administrator for assistance./ { next }
         { if (outputFlag==1) {
             sub(/href='css/,"href='https://cahweb1.cabrini.com.au/InteleBrowser/css",$0)
             sub(/src="css/,"src=\"https://cahweb1.cabrini.com.au/InteleBrowser/css",$0)
             sub(/src="images/,"src=\"https://cahweb1.cabrini.com.au/InteleBrowser/images",$0)
             sub(/src='js/,"src='https://cahweb1.cabrini.com.au/InteleBrowser/js",$0)
             sub(/src="\/InteleBrowser\/js/,"src=\"https://cahweb1.cabrini.com.au/InteleBrowser/js",$0)
             print $0
           }
         }
END      { 
           print "</table>"
           print "</form>"
           print "<div id=imgDiv1 class=ShowImage>"
           print "<iframe border=0 style='border:0px;background-color:black;' name=imgFrame1 id=imgFrame1 width=100%/></div>"
           print "</div>"
         }
