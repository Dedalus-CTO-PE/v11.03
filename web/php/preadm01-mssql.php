<?php
/*
.----------------------------------------------------------------------
. Program       : preadm01-mssql.php
.
. Function      : Preadmission Portal Interface MS-SQL
.
. Requirements  : PHP MSSQL Configuration
.
. Modifications :
.
. V10.14.01  01/07/2019  Don Nguyen      TSK 0876124
.                        Re-wrote code to use prepared statements and binding
.                        to prevent SQL injections. Also Refactored to reduce
.                        duplicate code.
. V10.05.01 B.G.Ackland CAR 302046
.           Separate Include for Preadmission Portal Interface
.----------------------------------------------------------------------
PRGID     INIT      "preadm01-mssql.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Preadmission Portal Interface"
.----------------------------------------------------------------------
*/

try {

  $dbh = new PDO("dblib:host=" . $ini['preadmDB_host'] . ";dbname=" . $ini['preadmDB_database'], $ini['preadmDB_user'], $ini['preadmDB_password']);

} catch (PDOException $e) {

  die("Error: Unable to connect to Online Pre-admission Database at this time;"
      . "\n\n" . $e->getMessage());

}

$admissdt = "";
$admissno = "";
$urnumber = "";
$keywords = "";
$facility = "";
$frstdate = "";
$lastdate = "";
$status   = "";
$doctcode = "";
$comments = "";
$callproc = "";

if (isset($_GET['facility']))    { $facility    = trim($_GET['facility']); }
if (isset($_GET['doctcode']))    { $doctcode    = trim($_GET['doctcode']); }
if (isset($_GET['status']))      { $status      = trim($_GET['status']); }
if (isset($_GET['reportno']))    { $reportno    = trim($_GET['reportno']); }
if (isset($_GET['frstdate']))    { $frstdate    = trim($_GET['frstdate']); }
if (isset($_GET['lastdate']))    { $lastdate    = trim($_GET['lastdate']); }
if (isset($_GET['patientid']))   { $patientid   = trim($_GET['patientid']); }
if (isset($_GET['admissionid'])) { $admissionid = trim($_GET['admissionid']); }
if (isset($_GET['admissno']))    { $admissno    = $_GET['admissno']; }
if (isset($_GET['urnumber']))    { $urnumber    = $_GET['urnumber']; }
if (isset($_GET['comments']))    { $comments    = $_GET['comments']; }
if (isset($_GET['callproc']))    { $callproc    = $_GET['callproc']; }

if ($reportno == 1) {
  $sql = "EXEC webPASList :facility, :status, :frstdate, :lastdate, :doctcode";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':facility', $facility, PDO::PARAM_STR);
  $sth->bindParam(':status', $status, PDO::PARAM_STR);
  $sth->bindParam(':frstdate', $frstdate, PDO::PARAM_STR);
  $sth->bindParam(':lastdate', $lastdate, PDO::PARAM_STR);
  $sth->bindParam(':doctcode', $doctcode, PDO::PARAM_STR);

  if ($sth->execute()) {
    $c = 0;  // row count

    echo "function AddRows() {";
    while ($row = $sth->fetch(PDO::FETCH_NUM))
    {
      echo "t.addRow(\"";
      foreach ($row as $val)
      {
        echo $val . "\",\"";
      }
      echo "$c\");";
      ++$c;
    }
    echo "}";

    $sth->closeCursor();
  }
}

if ($reportno == 2) {
  $sql = "EXEC webPASAdmission :admissionid";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR); 

  GetJSON($sth);
}

if ($reportno == 3) {
  $sql = "EXEC webPASUpdate :admissionid, :status, :urnumber, :admissno, :comments";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR); 
  $sth->bindParam(':status', $status, PDO::PARAM_STR);
  $sth->bindParam(':urnumber', $urnumber, PDO::PARAM_STR);
  $sth->bindParam(':admissno', $admissno, PDO::PARAM_STR);
  $sth->bindParam(':comments', $comments, PDO::PARAM_STR);
  
  if ($sth->execute()) {
    $reply = "";

    while ($row = $sth->fetch(PDO::FETCH_NUM))
    {
      foreach ($row as $val)
      {
        $reply .= $val;
      }
    }

    echo $reply;

    $sth->closeCursor();
  }
}

if ($reportno == 4) {
  $sql = "EXEC webPASDefaultReg :admissionid";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR);

  GetJSON($sth);
}

if ($reportno == 5) {
  $sql = "EXEC webPASDefaultNok :admissionid";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR);

  GetJSON($sth);
}

if ($reportno == 6) {
  $sql = "EXEC webPASDefaultAdm :admissionid";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR);

  GetJSON($sth);
}

if ($reportno == 7) {
  $sql = "EXEC webPASDefaultThr :admissionid";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR);

  GetJSON($sth);
}

if ($reportno == 8) {
  $sql = "EXEC $callproc :admissionid";

  $sth = $dbh->prepare($sql);
  $sth->bindParam(':admissionid', $admissionid, PDO::PARAM_STR);

  GetJSON($sth);
}

// Returns a JSON object (using the prepared statement handle)
function GetJSON($sth) {
  if (is_null($sth)) return;

  if ($sth->execute()) {
    $c = 0;  // row count

    $reply = "[";
    while ($row = $sth->fetch(PDO::FETCH_ASSOC))
    {
      if ($c > 0) $reply .= ",";

      $i = 0;  // column count

      $reply .= "{";
      foreach ($row as $key => $val)
      {
        if ($i > 0) $reply .= ",";

        $reply .= "\"" . $key . "\":\"" . $val . "\"";

        ++$i;
      }
      $reply .= "}";
      ++$c;
    }
    $reply .= "]";
    echo $reply;

    $sth->closeCursor();
  }
}

?>
