<?php
/*
.----------------------------------------------------------------------
. Program       : PACSviewer.php
.
. Function      : PACS Image Viewer
.                 Return Images Relating to a Specific Series
.
. Modifications :
.
.  V11.00.01  10/09/2020  Don Nguyen     TSK 0896562
.                         Removed shell command escape on query string; not
.                         needed in the context of usage on site.
.  V10.14.01  28/08/2019  Don Nguyen     TSK 0879581
.                         Escaped query string to prevent command injection
----------------------------------------------------------------------
PRGID     INIT      "PACSviewer.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PACS Viewer"
.----------------------------------------------------------------------
*/
 require "PACSconfig.php";
 $path="/InteleBrowser/ViewImages?";
 $qs=$_SERVER['QUERY_STRING'];
 $WebService="$host$path$qs";
 $dest="cachePACS/iv$series.html";
 passthru("$wgetCMD  '$WebService' | awk -f PACSviewer.awk");

/*
   Server Side Cache Model Not Implemented
   Expire Cache if File Age > X seconds
*/
/*
 if (file_exists($dest)) {
   $FileCreationTime = filemtime($dest);
   $FileAge = time() - $FileCreationTime;
   if ($FileAge>60*5) unlink($dest);
 }

  if (!file_exists($dest)) { 
   exec("$wgetCMD  '$WebService' | awk -f PACSviewer.awk > $dest");
   readfile($dest);
  } else {
   $matchURLField="/&SID=.*&SessionHost/i";
   $replaceURLField="&SID=$SID&SessionHost";
   $matchInputField="/<input type=\"hidden\" name=\"SID\"/i";
   $sessionInputField="<input type='hidden' name='SID' value='$SID'>";
   $fh = fopen($dest, 'r');
   while ( ($line = fgets($fh)) !== false) {
     preg_replace($matchURLField,$replaceURLField,$line);
     if (preg_match($matchInputField,$line)) { echo $sessionInputField; }
     else { echo $line; }
   }
 }
*/
?>
