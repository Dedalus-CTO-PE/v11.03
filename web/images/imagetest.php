<?php

  $row = 0;
  $col = 0;
  $img = 0;
  $maxcols = 6;
  
  $html = "<!DOCTYPE html>\n<html>\n<head>\n<title>Test of current Icons in this directory</title>\n";
  $html .= "<style type=\"text/css\">\n";
  $html .= "html, body {\n";
  $html .= "  color: #ffffff;\n  background-color: #333333;\n  font-family:sans-serif;\n";
  $html .= "}\n";
  $html .= "table {\n";
  $html .= "  border-collapse: collapse;\n";
  $html .= "  font-size: 8pt;\n";
  $html .= "  border: 1px double white;\n";
  $html .= "}\n";
  $html .= "td {\n";
  $html .= " padding: 5px; border: 1px solid white;\n";
  $html .= "}\n";
  $html .= "</style>\n</head>\n<body>\n";


  $thisDir = realpath(pathinfo($_SERVER['SCRIPT_FILENAME'],PATHINFO_DIRNAME));
  $html .= "<h1>Icons in $thisDir</h1>\n";
  $html .= "<table>\n";
  
  $images = array(); 
  $dh = opendir($thisDir);
  $trc = "Opened dir $thisdir hand is $dh<br />\n";
  while (($file = readdir($dh)) !== false) {
    $trc .= "read entry $file<br />\n";
    if (is_dir($file)) continue;
    $suffix = strtolower(pathinfo($file,PATHINFO_EXTENSION));
    $trc .= "suffix is $suffix<br>\n"; 
    if (!($suffix == "gif" || $suffix == "png" || $suffix == "jpg")) continue;
    $images[] = $file;
  }

  asort($images); 

  foreach ($images as $file) {

    $imginfo = getimagesize($file); 
    $w = $imginfo[0];
    $h = $imginfo[1];
    
    //if ($imginfo[0] > 150) continue;
    if ($col == $maxcols) {
      $html .= "</tr>\n";
      $col = 0;
    } 
    if ($col == 0) $html .= "<tr>";
    $html .= "<td>";
    if ($w < 100 && $h < 100) 
      $html .= "<img src=$file />";
    $html .= "<br />$file ($w x $h)</td>\n";
    $col++;
    $img++;
    
  }

  $html .= "</table>\n";
  //$html .= $trc;
  $html .="</body>\n</html>\n";
  echo $html;


?>
