<?php
/*
.----------------------------------------------------------------------
. Program       : nhiesam.php
.
. Function      : Standard call interface from webPAS to New Zealand
.                 Ministry of Health eSAM (address validation) interface
.
. Note:  This program is called vi an ajax call. It is important that the
.        resolution of the MoH is done by the hospital server because the 
.        server will have tha VPN to the MoH. This may not be true at the   
.        client (browser) end, so a direct ajax call to the MoH address
.        may not work.
.
. Modifications :
. V11.01.01  18/11/2021   Don Nguyen      TSK 0913178
.                         Modified sendReq() to allow secure (https) endpoint
. V10.14.01  28/08/2019   Don Nguyen      TSK 0877049
.                         Removed extra URL encoding of 'REMOTE_USER'
. V10.12.01  21.05.2018   Ania P          TSK 0856959
.                         Corrected var myhosp to myHosp
. V10.10.00  30.05.2017   Peter McMullen  TSK 0826408
.                         Original
.
.----------------------------------------------------------------------
PRGID     INIT      "nhiesam.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "NZ MoH eSAM Interface"
.----------------------------------------------------------------------
*/

  //error_reporting(E_ALL); 

  $approot=dirname(dirname($_SERVER['SCRIPT_FILENAME']));
  // search for ini file
  $inifile = "$approot/etc/pasphp.ini";
  if (!(file_exists($inifile) && is_readable($inifile))) {
    $inifile = "$approot/php/pasphp.ini";
    if (!(file_exists($inifile) && is_readable($inifile))) {
      $inifile = "pasphp.ini" ;
      if (!(file_exists($inifile) && is_readable($inifile))) {
        error_log("error","FATAL: the $inifile file doesn't seem to exist or is not readable\n!");
        exit(1);
      }
    }
  }

  $ini = parse_ini_file($inifile,true);

  $msg = "Incoming request query: ".$_SERVER['QUERY_STRING'];
  trace($msg);

  // Service requested  
  if (!isset($_GET['svc'])) errorResponse("No search service specified"); 

  // eSAM service endpoint 
  if (isset($ini['nhiesam']['esam_endpoint'])) 
    $ep = $ini['nhiesam']['esam_endpoint'];
  else
    errorResponse("no Endpoint for ESAM request in pasphp.ini"); 
 
  // organisation code 
  if (($org = getOrgCode()) === false)
    errorResponse("Unique Organisation Code (eSAM client code) not specified"); 

  // get the userid 
  $uid="unknown";

  if (isset($_SERVER['REMOTE_USER'])) $uid = $_SERVER['REMOTE_USER'];
 
  //if a generic uid has been set, use it instead
  if (isset($ini['nhiesam']['esam_user'])) $uid = $ini['nhiesam']['esam_user'];
    
  
  // build the common part of the query 
  $qry  = "&UniqueOrganisationCode=".trim($org);
  $qry .= "&UniqueUserId=".rawurlencode(trim($uid));
  $qry .= "&UniqueApplicationId=HSAPP0021";

  switch (strtolower($_GET['svc'])) {
  case "suggest"        : 
  case "suggestaddress" : SuggestAddress($ep,$qry);  break; 
  case "find"           : 
  case "findaddress"    : FindAddress($ep,$qry);     break; 

  }  
  exit(0); 

function SuggestAddress($ep,$qry) {

  global $ini;
  trace("Suggest Address a=".$_GET['a']);

  $max_res = 20;
  if (isset($ini['nhiesam']['esam_max'])) $max_res = trim($ini['nhiesam']['esam_max']);

  $type = "B";
  if (isset($_GET['t'])) $type = $_GET['t'];

  if (!isset($_GET['a'])) errorResponse("No search address supplied"); 

  $url = $ep."SuggestAddress?SearchType=$type&MaxResults=$max_res";
  $url .= "&SearchFor=".rawurlencode($_GET['a']); 
  $url .= $qry;

  sendReq($url);
}

function FindAddress($ep,$qry) {

  global $ini;
  trace("Find Address a1=".$_GET['a1']);
  $textlen = 0;
  $a1=""; $a2=""; $a3=""; $a4=""; $a5=""; 

  $max_res = 20;
  if (isset($ini['nhiesam']['esam_max'])) $max_res = trim($ini['nhiesam']['esam_max']);

  $type = "B";
  if (isset($_GET['t'])) $type = $_GET['t'];

  $url = $ep."FindAddress?SearchType=$type&MaxResults=$max_res";

  if (isset($_GET['a1'])) $a1 = trim($_GET['a1']);
  if (isset($_GET['a2'])) $a2 = trim($_GET['a2']);
  if (isset($_GET['a3'])) $a3 = trim($_GET['a3']);
  if (isset($_GET['a4'])) $a4 = trim($_GET['a4']);
  if (isset($_GET['a5'])) $a5 = trim($_GET['a5']);

  if (strlen($a1)) {
    $url .= "&AddressText1=".rawurlencode($a1);
    $textlen++;
  }
  if (strlen($a2)) {
    $url .= "&AddressText2=".rawurlencode($a2);
    $textlen++;
  }
  if (strlen($a3)) {
    $url .= "&AddressText3=".rawurlencode($a3);
    $textlen++;
  }
  if (strlen($a4)) {
    $url .= "&AddressText4=".rawurlencode($a4);
    $textlen++;
  }
  if (strlen($a5)) {
    $url .= "&AddressText5=".rawurlencode($a5);
    $textlen++;
  }

  if ($textlen == 0) errorResponse("No search address supplied"); 

  $url .= $qry;

  sendReq($url);
}

function sendReq($url) {

  global $ini;
  $emsg = "";

  trace("send request, url = $url");

  $ch  = curl_init();

  curl_setopt($ch, CURLOPT_URL,$url);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

  if (isset($ini['nhiesam']['esam_ssl_verifypeer']) &&
      $ini['nhiesam']['esam_ssl_verifypeer']) {
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER,true);

    if (isset($ini['nhiesam']['esam_ssl_cainfo'])) {
      curl_setopt($ch, CURLOPT_CAINFO,$ini['nhiesam']['esam_ssl_cainfo']);
    }
  }
  else {
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER,false);
  }

  $result = curl_exec($ch);
  curl_close($ch);
  trace($result);

  // The result may not be a JSON package if the request did
  // not make it past the ministry firewall. In this case it will 
  // probably  be a simple html error page 

  if (!validateResponse($result)) {
    errorResponse(strip_tags($result));
  }


  trace("End of request - Normal");

  echo $result;
}

function validateResponse($result) {

  // the inbuilt JSON functions are included in 
  // PHP 5.2 but we still have clients using 
  // versions, so this is a very simple check
  // Here's the code we should use:
  //  $r = json_decode($result);
  //  $jsonrc = json_last_error();
  //  trace("decode result=$jsonrc");
  //  if (json_last_error() == JSON_ERROR_NONE) {
  //    return true;
  // }
 
  // simple check for the ext we expect
  if (substr($result,0,14) == "{\"ResultCode\":\"") 
    return true;
  else if (substr($result,0,1) == "{")
    return true;
  
  return false;
}

function getOrgCode() {
  global  $ini; 

  // This function searches in 3 places for the UniqueOrganisationCode
  // required by the protocl: These places are (in order of precedence)
  // 1. the value passed in from the web page. 
  // 2. the pasphp.ini file in the hospital specific section
  // 3. the pasphp.ini file in the [nhiesam] section

  $org    = false;
  $myHosp = false;
 
  // do we have a hospital cookie?  
  if (isset($_COOKIE['IBAUserHosp']))  
    $myHosp = $_COOKIE['IBAUserHosp']; 

  $org = false;

  if (isset($ini['nhiesam']['esam_org_code']))
    $org = $ini['nhiesam']['esam_org_code'];

  if ($myHosp && isset($ini[$myHosp]['esam_org_code'])) 
    $org = $ini[$myHosp]['esam_org_code'];
     
  if (isset($_GET['org'])) {
    $org = trim($_GET['org']);
  }  

  return $org;
}


function errorResponse($msg) {

  // something is wrong - return s JSON 
  // structure with an error message. We do this
  // the literally for omplementations of PHP
  // that don;t support JSON (< 5.2)
  $msg = "Protocol error: $msg";
  $badresp = "{\"ResultCode\":\"E9999\",\"ErrorMessage\":\"Protocol error: $msg\"}"; 

  logError("error",$msg);
  trace($badresp);
  trace("End of request - Error");
  echo $badresp;
  exit(0);
}


function logError($severity,$msg) {

  $emsg  =  "[".date('D M d H:i:s Y')."] [$severity] [client ";
  $emsg .= $_SERVER["REMOTE_ADDR"]."] ".$_SERVER['REQUEST_URI']." ";

  $emsg .= $msg;
  error_log($emsg); 
}

function trace($msg) {
  global $ini;
  if (!isset($ini['nhiesam']['esam_log'])) return;

  $file = $ini['nhiesam']['esam_log'];
  $emsg = date('Ymd H:i:s')." ".$_SERVER['REMOTE_ADDR']." $msg";
  $file = $ini['nhiesam']['esam_log'];
  file_put_contents($file,$emsg."\n",FILE_APPEND);
}
?>
