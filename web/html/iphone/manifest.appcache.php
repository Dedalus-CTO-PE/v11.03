<?php
header('Content-type: text/cache-manifest'); 
header("Cache-Control: max-age=0, no-cache, no-store, must-revalidate");
header("Pragma: no-cache");
header("Expires: Thu, 01 Jan 1970 00:00:01 GMT");
$Version="V10.03.15";
$javascript="";
$css="";
$html="";
$images="";
$imagesSub="";
$javascriptSub="";
$htmlSub="";
$css="";
$cssSub="";
$all="";
$LastUpdate=filemtime(".");
if ($handle = opendir('.')) {
  while (false !== ($entry = readdir($handle))) {
    if( "." == $entry || ".." == $entry ){ continue; }
    $extn=strtolower(preg_replace("/.*\./",".",$entry));
    switch ($extn) {
      case ".png":
      case ".jpg":  { $images .= "$entry\n"; break; }
      case ".js":   { $javascript .= "$entry\n"; break; }
      case ".html": { $html .= "$entry\n"; break; }
      case ".css":  { $css .= "$entry\n"; break; }
      default :
       if (is_dir($entry)) {
         if ($sub = opendir($entry)) {
           while (false !== ($subFile = readdir($sub))) {
             $extn=strtolower(preg_replace("/.*\./",".",$subFile));
             switch ($extn) {
               case ".png":
               case ".jpg":  { $imagesSub .= "$entry/$subFile\n"; break; }
               case ".js":   { $javascriptSub .= "$entry/$subFile\n"; break; }
               case ".html": { $htmlSub .= "$entry/$subFile\n"; break; }
               case ".css":  { $cssSub .= "$entry/$subFile\n"; break; }
             }
           }
           closedir($sub);
         }
       }
    }
  }
  closedir($handle);
}
$reply="CACHE MANIFEST
#
# Verson : $Version.$LastUpdate
#
CACHE: 
$css$cssSub$javascript$javascriptSub$html$htmlSub$images$imagesSub

NETWORK:
# Request everything from server
*

FALLBACK:
# Nothing

";
echo $reply;
?>
