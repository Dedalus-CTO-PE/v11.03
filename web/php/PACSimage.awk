BEGIN    {  seriesCount=0
            imageTotal=0
            hrefLink = ""
         }
/viewing_inline_jpeg.html/               { next }
/InteleBrowser.css/                      { next }
/InlineJpegs.css/                        { next }
/<HEAD>/ {  print "<head>"
            print "<script type='text/javascript' src='../html/ipad/iPACS.js'></script>"
            print "<link   rel='stylesheet' href='../html/ipad/ipad.css' type='text/css'>"
            print "<link   rel='stylesheet' href='../html/ipad/iPACS.css' type='text/css'>"
            print "<title>"
            next
         }
/IMG SRC="\/JpegServlet\/getJpeg/ {
  sub(/\/JpegServlet\/getJpeg/,"PACSjpeg.php",$0)
  print $0
  next
         }
/img src="\/JpegServlet\/getJpeg/ {
  sub(/\/JpegServlet\/getJpeg/,"PACSjpeg.php",$0)
  print $0
  next
         }
/a href="\/JpegServlet\/getJpeg/ {
  next
         }
/A HREF="\/JpegServlet\/getJpeg/ {
  next
         }
/InteleBrowser.js/ { next }
/InlineJpegs.js/   { next }
         {
           print $0
         }
