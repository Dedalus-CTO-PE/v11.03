<?php
/*
.----------------------------------------------------------------------
. Program       : setup.php
.
. Function      : Standard PHP Page Include for Parameters and Database
.
. Modifications :
. V10.08.02  30.05.2016   Peter McMullen  TSK 0820566
.                         Use standard method to get/find pasphp.ini file
. V10.08.01  25.05.2016   Steve Armstrong
.                         Restored original code from V10.04 for
.                              finding pasphp.ini
. V10.07.01  01.02.2016   Peter Vela
.                         Fixed unexpected ":" to ";" in line 49
. V10.06.01  18.08.2015   B.G.Ackland
.                         Add preadm01.php to be enabled on CISAM
.
. V10.05.01  15/07/2014   B.G.Ackland
.                         Adoption of WA Health Environment Variables
.                         for Oracle Connection
. V10.03.01  29/07/2013   B.G.Ackland  
.                         Remove Black Lines to avoid header setting issue 
.                         for Calendar Subscription
.----------------------------------------------------------------------
PRGID     INIT      "setup.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Standard Include"
.----------------------------------------------------------------------
//  FOR DEBUGGING OCI
//      error_reporting(E_ALL|E_STRICT);
//      ini_set('display_errors', 'On');
//      oci_internal_debug(1);
//      phpinfo();
*/

  $approot=dirname(dirname($_SERVER['SCRIPT_FILENAME']));
  // look in web implementation etc directory 
  $inifile = "$approot/etc/pasphp.ini" ;
  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  } else {
    // look in php directory 
    $inifile = "$approot/php/pasphp.ini" ;
    if (file_exists($inifile) && is_readable($inifile)) {
      $ini = parse_ini_file($inifile);
    } else {
      // look in current directory
      $inifile = "pasphp.ini" ;
      if (file_exists($inifile) && is_readable($inifile)) {
        $ini = parse_ini_file($inifile);
      } else {
        error_log("FATAL: the $inifile file doesn't seem to exist or is not readable\n!");
        exit(1);
      }
    }
  }

  $secureid=false;

  switch (strtolower($ini['dbtype'])) {
// Get the Oracle database credentials from the apache environment variables named in the pasphp.ini file
    case "oracle_env":
      $conn = oci_pconnect(GetEnv($ini['oracle_uid_env']),GetEnv($ini['oracle_pwd_env']),GetEnv($ini['oracle_sid_env']));
      if (!$conn) {
        error_log("oracle_env: can't get a connection to Oracle");exit(1);
      } 
      $secureid = getWBSEUID($conn);
      break;
// Get the Oracle database credentials from the variables named in the pasphp.ini file
    case "oracle":
      $conn = oci_connect($ini['oracle_uid'],$ini['oracle_pwd'],$ini['oracle_sid']);
      if (!$conn) {
        error_log("oracle: can't get a connection to Oracle");exit(1);
      } 
      $secureid = getWBSEUID($conn);
    break;
// CISAM Fall Back for Specific Functions 
    case "cisam":
      $available = false;
      $continue = false;
      $phpfilen=basename($_SERVER["SCRIPT_NAME"]);
      if ($phpfilen == 'ipharmacy.php')  { $continue=true; }
      if ($phpfilen == 'preadm01.php')  { $continue=true; }
      if ($phpfilen == 'patientPhoto.php')  { $continue=true; }
      if ($phpfilen == 'GalleryView.php')   { $continue=true; }
      if ($phpfilen == 'CanvasGallery.php') { $continue=true; }
      if ($phpfilen == 'CanvasToImage.php') { $continue=true; }
      if ($phpfilen == 'DocumentView.php')  { $continue=true; }
      if ($phpfilen == 'MedchartServices.php')  { $continue=true; }
      if ($phpfilen == 'comweb01.php') { $available = true;$TBLserv="./phpweb01.pbl"; }
      if ($phpfilen == 'cliweb08.php') { $available = true;$TBLserv="./phpweb01.pbl"; }
      if ($phpfilen == 'cliweb02.php') { $available = true;$TBLserv="./phpweb01.pbl"; }
      if ($phpfilen == 'patweb98.php') { $available = true;$TBLserv="./phpweb01.pbl"; }
      if ($phpfilen == 'patweb89.php') { $available = true;$TBLserv="./phpweb01.pbl"; }
      if ($phpfilen == 'oprweb01.php') { $available = true;$TBLserv="./phpweb02.pbl"; }
      if ($phpfilen == 'patweb93.php') { $available = true;$TBLserv="./phpweb02.pbl"; }
      if ($phpfilen == 'AutoSuggest.php') { $available = true;$TBLserv="./phpweb03.pbl"; }
      if ($available) {
        putenv("REQUEST_METHOD=" .$_SERVER["REQUEST_METHOD"]);
        putenv("REMOTE_USER=" .$_SERVER["REMOTE_USER"]);
        putenv("QUERY_STRING=" .$_SERVER["QUERY_STRING"]."&phpfilen=$phpfilen");
        $out = array();
        exec($TBLserv,$out); 
        if(isset($out[0])) header($out[0]);
        if(isset($out[1])) header($out[1]);
        $html="";
        for($i = 2; $i < sizeof($out); ++$i) {
          $html .= "$out[$i]\n";
        }
        echo $html;
        exit;
      } 
      if (!$continue) {
        echo "PHP Call Not Available for CISAM : ".$phpfilen; // Not Available
        exit;
      }
    break;
    default:
      die("unknown database type");
  }

function getWBSEUID($conn=false) {

  /* get the WBSEUID field from WEBSECAF for this login name */
  $secureid = false;

  if ($conn === false) {
    if (isset($GLOBALS['conn']))
      $conn = $GLOBALS['conn'];
    else
      return false;
  }

  if (!isset($_SERVER['REMOTE_USER']))
    return false;

  $qry = "SELECT wbseuid FROM websecaf WHERE wbselogn='".$_SERVER['REMOTE_USER']."'";
  $stmt = oci_parse($conn,$qry);
  if (!oci_execute($stmt)) return false;
  if ($row = oci_fetch_array($stmt,OCI_NUM+OCI_RETURN_NULLS)) {
   $secureid=$row[0];
  }
  oci_free_statement($stmt);
  return $secureid;

}
?>
