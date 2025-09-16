<?php
/*
.----------------------------------------------------------------------
. Program       : patweb12.php
.
. Function      : Caching Services for Patient Bed Board
.
. Modifications :
.                 V10.07.01 13/11/2015 Peter Vela CAR 323754
.                           Changed directory paths for patweb12.pbl
.----------------------------------------------------------------------
PRGID     INIT      "patweb12.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Caching Services for Patient Bed Board"
.----------------------------------------------------------------------
*/
 $cacheDir="/tmp/"; /* Cache Directory Location */
 $agecache=120;               /* Number of Seconds Set to 2 minutes */
 $staleage=300;               /* Number of Seconds Set to 5 minutes */
 $secureid=$_SERVER['REMOTE_USER'];
 $reportno="";
 $template="";
 $tomrflag="0";
 $emptonly="0";
 $newcache="false";
 $gencache="false";
 $scriptroot = dirname(dirname($_SERVER['SCRIPT_FILENAME']));
 if (isset($_GET['reportno'])) $reportno = $_GET['reportno'];
 if (isset($_GET['template'])) $template = $_GET['template'];
 if (isset($_GET['tomrflag'])) $tomrflag = $_GET['tomrflag']; 
 if (isset($_GET['hospcode'])) $hospcode = $_GET['hospcode'];
 if (isset($_GET['emptonly'])) $emptonly = $_GET['emptonly'];
 if (isset($_GET['bedboard'])) $bedboard = $_GET['bedboard'];
 if (isset($_GET['newcache'])) $newcache = $_GET['newcache'];
 if (isset($_GET['gencache'])) $gencache = $_GET['gencache'];
 if (isset($_GET['agecache'])) $agecache = $_GET['agecache'];
 $cacheFile="$cacheDir$hospcode.$bedboard.$reportno.$template.$tomrflag$emptonly.cache";
/* Return Cache if exists and less than age (120 sec default) */
 if (file_exists($cacheFile)&& $newcache=="false") {
   if ( ( time() - filemtime($cacheFile) < $staleage )) {
     header('Content-Type: text/html');
     header('Cache-Control: no-cache');
     $response = file_get_contents($cacheFile);
     echo $response;
     exit;
   }
 }
/* Generate Cache without a response*/
 if ($gencache == "true") {
   if (( time() - filemtime($cacheFile) >= $agecache )) {
     putenv("REQUEST_METHOD=" .$_SERVER["REQUEST_METHOD"]);
     putenv("REMOTE_USER=" .$_SERVER["REMOTE_USER"]);
     putenv("QUERY_STRING=" .$_SERVER["QUERY_STRING"]);
     $out = array();
     exec("$scriptroot/cgi-bin/patweb12.pbl",$out);
     header($out[0]);
     header($out[1]);
     $html="";
     for($i = 2; $i < sizeof($out); ++$i)
     {
       $html .= "$out[$i]\n";
     }
     $fh = fopen($cacheFile, 'w') or die("can't open file");
     fwrite($fh, $html);
     fclose($fh);
   }
   exit;
 }
/* No Cache Exists or Forced Cache Refresh */
/* Generate output and cache results */
 putenv("REQUEST_METHOD=" .$_SERVER["REQUEST_METHOD"]);
 putenv("REMOTE_USER=" .$_SERVER["REMOTE_USER"]);
 putenv("QUERY_STRING=" .$_SERVER["QUERY_STRING"]);
 $out = array();
 exec("$scriptroot/cgi-bin/patweb12.pbl",$out);
 if (count($out) > 2) {
 header($out[0]);
 header($out[1]);
 }
 $html="";
 for($i = 2; $i < sizeof($out); ++$i)
 {
   $html .= "$out[$i]\n";
 }
 echo $html;
 $fh = fopen($cacheFile, 'w') or die("can't open file");
 fwrite($fh, $html);
 fclose($fh);
?>
