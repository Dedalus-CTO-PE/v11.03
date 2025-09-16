<?php
/*
.----------------------------------------------------------------------
. Program       : preadm01-oracle.php
.
. Function      : Preadmission Portal Interface - Oracle
.
. Requirements  : PHP Orcale Configuration
.
. Modifications :
. V10.13.01 Richa Phogat   TSK  0863354
.           Updated code to use 10 digit userid instead of long name
. V10.10.01 Jill Parkinson Task 0300328
.           Added use of facility for multi-hospital sites (not just from ini)
. V10.06.03 B.G.Ackland  CAR317390
.           Change Hospital Codes File Name
. V10.06.02 B.G.Ackland  CAR312482
.           Process Online Admission Printing
. V10.06.01 B.G.Ackland 
.           Separate MSSQL/Oracle Configuration
.----------------------------------------------------------------------
PRGID     INIT      "preadm01-oracle.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Preadmission Portal Interface"
.----------------------------------------------------------------------
*/
switch (strtolower($ini['portal_type'])) {
// Get the Oracle database credentials from the apache environment variables named in the pasphp.ini file
  case "oracle_env":
    $portal_conn = oci_pconnect(GetEnv($ini['portal_uid_env']),GetEnv($ini['portal_pwd_env']),GetEnv($ini['portal_sid_env']));
    if (!$portal_conn) { die("oracle_env: can't get a connection to Oracle"); } 
    break;
// Get the Oracle database credentials from the variables named in the pasphp.ini file
  case "oracle":
    $portal_conn = oci_connect($ini['portal_uid'],$ini['portal_pwd'],$ini['portal_sid']);
    if (!$portal_conn) { die("oracle: can't get a connection to Oracle"); } 
    break;
}
switch (strtolower($ini['dbtype'])) {
// Get the Oracle database credentials from the apache environment variables named in the pasphp.ini file
  case "oracle_env":
    $conn = oci_pconnect(GetEnv($ini['oracle_uid_env']),GetEnv($ini['oracle_pwd_env']),GetEnv($ini['oracle_sid_env']));
    if (!$conn) {
      error_log("oracle_env: can't get a connection to Oracle");exit(1);
    }
    break;
// Get the Oracle database credentials from the variables named in the pasphp.ini file
    case "oracle":
      $conn = oci_connect($ini['oracle_uid'],$ini['oracle_pwd'],$ini['oracle_sid']);
      if (!$conn) {
        error_log("oracle: can't get a connection to Oracle");exit(1);
      }
    break;
}
$admissionid = (isset($_REQUEST["admissionid"])) ? $_REQUEST["admissionid"] : null;
$reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
$admissdt = (isset($_REQUEST["admissdt"])) ? $_REQUEST["admissdt"] : null;
$admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
$urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
$keywords = (isset($_REQUEST["keywords"])) ? $_REQUEST["keywords"] : null;
$frstdate = (isset($_REQUEST["frstdate"])) ? $_REQUEST["frstdate"] : null;
$lastdate = (isset($_REQUEST["lastdate"])) ? $_REQUEST["lastdate"] : null;
$doctcode = (isset($_REQUEST["doctcode"])) ? $_REQUEST["doctcode"] : null;
$comments = (isset($_REQUEST["comments"])) ? $_REQUEST["comments"] : null;
$hospitalstate = (isset($_REQUEST["hospitalstate"])) ? $_REQUEST["hospitalstate"] : null;
$hospitalcode = (isset($_REQUEST["hospitalcode"])) ? $_REQUEST["hospitalcode"] : null;
$hospitalname = (isset($_REQUEST["hospitalname"])) ? $_REQUEST["hospitalname"] : null;
$callproc = (isset($_REQUEST["callproc"])) ? $_REQUEST["callproc"] : null;
$status = (isset($_REQUEST["status"])) ? $_REQUEST["status"] : null;
$portal_url = $ini['portal_url'];
$portal_security_token = $ini['portal_security_token'];
$facility = $ini['portal_facility'];
if (isset($_GET['facility'])) { $facility = $_GET['facility'];}
/* $secureid = $_SERVER['REMOTE_USER']; */
$securenm = "";
$secureid = "";
$remoteUser=$_SERVER['REMOTE_USER'];
$qry = "SELECT wbseuid, wbsenam FROM websecaf WHERE wbselogn=:remoteUser";
$stmt = oci_parse($conn,$qry);
oci_bind_by_name($stmt, ':remoteUser', $remoteUser);
if (!oci_execute($stmt)) return false;
if ($row = oci_fetch_array($stmt,OCI_NUM+OCI_RETURN_NULLS)) {
 $secureid=$row[0];
 $securenm=$row[1];
}
if ($reportno==1) {
  $sql = "begin Portalinterface.webPASList(:facility,:status,:frstdate,:lastdate,:doctcode,:cursor); end;";
  $curs=oci_new_cursor($portal_conn);
  $rs=oci_parse($portal_conn,$sql) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':facility', $facility);
  oci_bind_by_name($rs, ':status', $status);
  oci_bind_by_name($rs, ':frstdate', $frstdate);
  oci_bind_by_name($rs, ':lastdate', $lastdate);
  oci_bind_by_name($rs, ':doctcode', $doctcode);
  oci_bind_by_name($rs, ":cursor", $curs, -1, OCI_B_CURSOR);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  if (!oci_execute($curs)) { echo oci_error($rs); exit();}
  $c=0;
  $reply="function AddRows() {\n";
  $numcols = oci_num_fields($curs);
  while($row = oci_fetch_array($curs,OCI_BOTH+OCI_RETURN_NULLS)) { 
   $reply.= "t.addRow(\"".$row[0];
   for($i=1;$i<$numcols;$i++) {        
     $reply.= "\",\"".$row[$i];         
   }
   $reply.= "\",\"$c\");\n";
   $c=$c+1;
  } 
  $reply.= "\n}";
  echo $reply;
  oci_free_statement($rs);
  oci_free_statement($curs);
  oci_close($portal_conn);
}
if ($reportno==2) {
  AdmissionJSON("begin PortalInterface.webPASAdmission(:admissionid,:cursor); end;");
}
if ($reportno==3) {
  $sql = ("begin 
   PortalInterface.webPASUpdate(:admissionid,:status,:secureid,:securenm,:urnumber,:admissno,:comments); 
   end;");
  $rs=oci_parse($portal_conn,$sql) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':admissionid', $admissionid);
  oci_bind_by_name($rs, ':status', $status);
  oci_bind_by_name($rs, ':secureid', $secureid);
  oci_bind_by_name($rs, ':securenm', $securenm);
  oci_bind_by_name($rs, ':urnumber', $urnumber);
  oci_bind_by_name($rs, ':admissno', $admissno);
  oci_bind_by_name($rs, ':comments', $comments);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  oci_free_statement($rs);
  oci_close($portal_conn);
  echo "";
}

if ($reportno==4) {
  AdmissionJSON("begin PortalInterface.webPASDefaultReg(:admissionid,:cursor); end;");
}

if ($reportno==5) {
  AdmissionJSON("begin PortalInterface.webPASDefaultNok(:admissionid,:cursor); end;");
}

if ($reportno==6) {
  AdmissionJSON("begin PortalInterface.webPASDefaultAdm(:admissionid,:cursor); end;");
}

if ($reportno==7) {
  AdmissionJSON("begin PortalInterface.webPASDefaultThr(:admissionid,:cursor); end;");
}

if ($reportno==8) {
  AdmissionJSON("begin PortalInterface.$callproc(:admissionid,:cursor); end;");
}
if ($reportno==9) {
  $AutoPrint = (isset($_REQUEST["AutoPrint"])) ? $_REQUEST["AutoPrint"] : null;
  $SaveFile = (isset($_REQUEST["SaveFile"])) ? $_REQUEST["SaveFile"] : null;
  $printURL="$portal_url/webPASView.php?SecurityToken=$portal_security_token".
            "&AutoPrint=$AutoPrint".
            "&UserFormID=$admissionid";
  $ch = curl_init();
  curl_setopt($ch, CURLOPT_URL, $printURL);
  curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
  curl_setopt($ch, CURLOPT_HEADER, 0);
  curl_setopt($ch, CURLOPT_USERAGENT, "WEBPASREQUEST");
  if ($response = curl_exec($ch)) {
    if ($SaveFile=="Y") {
      $filename = "/tmp/".substr(uniqid(),0,8).".pdf";
      $success = file_put_contents($filename, $response);
      if ($success) {
        echo "FILE:$filename";
        exit;
      } else {
        echo "ERROR:Unable to save the file. ";
        exit;
      }
    } else {
      header('Content-type: application/pdf');
      echo $response;
    }
  } else {
    echo "ERROR : URL (".$portal_url."integration/webPASView.php) returned ".curl_error($ch);
  }
  exit();
}
if ($reportno==10) {
  $sql = ("begin PortalInterface.webPASUpdateHospital(".
          ":admissionid,:secureid,:securenm,:hospitalstate,".
          ":hospitalcode,:hospitalname,:comments); end;");
  $rs=oci_parse($portal_conn,$sql) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':admissionid', $admissionid);
  oci_bind_by_name($rs, ':secureid', $secureid);
  oci_bind_by_name($rs, ':securenm', $securenm);
  oci_bind_by_name($rs, ':hospitalstate', $hospitalstate);
  oci_bind_by_name($rs, ':hospitalcode', $hospitalcode);
  oci_bind_by_name($rs, ':hospitalname', $hospitalname);
  oci_bind_by_name($rs, ':comments', $comments);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  oci_free_statement($rs);
  oci_close($portal_conn);
  echo "";
  exit();
}
if ($reportno==11) {
  $hospitalJSON  = file_get_contents('/opt/csc/etc/HospitalCodes.json');
  echo $hospitalJSON;
  exit();
}
 
function AdmissionJSON($sql) {
  global $portal_conn,$admissionid;
  $curs=oci_new_cursor($portal_conn);
  $rs=oci_parse($portal_conn,$sql) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':admissionid', $admissionid);
  oci_bind_by_name($rs, ":cursor", $curs, -1, OCI_B_CURSOR);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  if (!oci_execute($curs)) { echo oci_error($rs); exit();}
  $numcols = oci_num_fields($curs);
  $c=0;
  $reply = "[";
  while($row = oci_fetch_array($curs,OCI_BOTH+OCI_RETURN_NULLS)) { 
   if ($c>0) $reply .= ",";
   $reply .= "{";
   for($i=0;$i<$numcols;$i++) {    
     if ($i>0) { $reply .= ",";} else {  $reply .= "\"cscportal\":\"1\",";}
     $reply .= "\"".oci_field_name($curs, $i+1)."\":\"".$row[$i]."\"";             
   }   
   $reply .= "}";
   $c=$c+1;
  }   
  $reply .= "]";
  echo $reply;
  oci_free_statement($rs);
  oci_free_statement($curs);
  oci_close($portal_conn);
}
?>
