<?php
/*
.----------------------------------------------------------------------
. Program       : MenuSecurity.php
.
. Function      : PHP Menu Security Include
.
. Modifications : WIP
.----------------------------------------------------------------------
PRGID     INIT      "MenuSecurity.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PHP Menu Security Include"
.----------------------------------------------------------------------
*/
  $inifile = "../../cgi-bin/pasphp.ini" ;
  if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
  } else {
    die("FATAL: the $file file doesn't seem to exist or is not readable!");
  }
  $conn = oci_connect($ini['oracle_uid'],$ini['oracle_pwd'],$ini['oracle_sid']);
  if (!$conn) {
    die("can't get a connection to Oracle");
  }
  $requesturl = (isset($_SERVER['REQUEST_URI'])) ? $_SERVER['REQUEST_URI'] : null;
  $secureid = (isset($_SERVER['REMOTE_USER'])) ? $_SERVER['REMOTE_USER'] : null;
  if ($secureid==null) {
    echo '<script type=text/javascript>
          alert("Invalid Access");
          top.location.href="../../cgi-bin/websec01.pbl?reportno=1&template=1";
          </script>
          ';
    exit();
  }
  $qry = "select WBGRSURL from websgpaf 
          left join webgrpaf on WBGRGRPC = WBSGGRPC
          where WBSGUSID=:secureid";
  $ValidURL=false;
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_execute($stmt);
  $rowCount=0;
  while ($row  = oci_fetch_row($stmt)) {
    $rowCount++;
    $GroupURL=preg_replace("/\//","\\/",$row[0]);
    $pattern = "/$GroupURL/";
    if (preg_match($pattern, $requesturl)) {
      echo "Match<br>";
      $ValidURL=true;
    }
  }
  if (!$ValidURL&&!$rowCount==0) {
    echo '<script type=text/javascript>
          alert("Invalid Access");
          top.location.href="../../cgi-bin/websec01.pbl?reportno=1&template=1";
          </script>
          ';
    exit();
  }
?>
