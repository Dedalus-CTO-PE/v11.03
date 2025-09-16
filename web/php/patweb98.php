<?php
/*
.----------------------------------------------------------------------
. Program       : patweb98.php
.
. Function      : Patient Information Service
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
. V10.03.01  14.11.2013  B.G.Ackland
.                        Changes to use bind in SQL to aviod SQL Injection
.----------------------------------------------------------------------
PRGID     INIT      "patweb98.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Patient Information Service"
.----------------------------------------------------------------------
*/
require "setup.php";

/*****************************************************************************
 *	patweb98 object instantiation
 ****************************************************************************/
$patweb98 = new Patweb98($conn);
$patweb98->getQueryByReportNumber();
$patweb98->closeConnection();


/*******************************************************************************
 *	Patweb98 - common web class 
 *******************************************************************************/
class Patweb98{ 
  // Instance variables
  private $reply = "";
  private $secureid = null;
  private $conn = null;
  private $reportno = "";
  private $admissno = "";
  private $urnumber = "";

  // Constructor
  public function __construct($connection) {
    $this->secureid = $_SERVER['REMOTE_USER'];
    if (isset($_GET['reportno'])) { $this->reportno = $_GET['reportno']; }
    if (isset($_GET['admissno'])) { $this->admissno = $_GET['admissno']; }
    if (isset($_GET['urnumber'])) { $this->urnumber = $_GET['urnumber']; }

    if ($connection != NULL) {
      $this->conn = $connection;
    }
  }
  
  /****************************************************************************
   * Executes a query (based on report number) and returns the result
   ****************************************************************************/
  public function getQueryByReportNumber() {
    switch($this->reportno) {
      case 1: 
        $qry = "SELECT count(*) 
                FROM patvisaf 
                WHERE dpvibill = :admissno ";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':admissno', $this->admissno);
        $this->getScalarValue($stmt);
        break;

      case 2: //observation,document,theatre,vists
        $qry = "SELECT
                 (SELECT count(*) 
                    FROM obsdetaf 
                    WHERE obdevist = :admissno
                 ) AS observations,
                 (SELECT count(*) 
                    FROM obspcoaf 
                    WHERE obpcurno = :urnumber  
                    AND obpcmdel = '0'
                 ) AS clinicalDocuments,
                 (SELECT count(*) 
                    FROM bokrc1af a
                    LEFT JOIN patcodes b ON b.tcode = 'BK' AND b.acode = a.bkretype
                    LEFT JOIN oprdetaf c ON a.dbkreboo = c.opdaadmn
                    WHERE  a.bkreurno = :urnumber
                    AND c.opdadate IS NOT NULL 
                 ) AS theatre,
                 (SELECT count(*) 
                    FROM patvisaf 
                    WHERE dpvibill=:admissno 
                 ) AS visits,
                 (SELECT count(*) 
                    FROM obsmdtaf 
                    WHERE obmdurno=:urnumber and obmddelt='0' 
                 ) AS history,
                 (SELECT 
		    DISTINCT count(*)
                    FROM obscnaaf 
                    LEFT JOIN obscncaf ON obcctyp=obcatyp
                    WHERE obcavis = :admissno
                    AND obcctyp in (select obcctyp from obscncaf where obcctyp = 'Y')
                 ) AS discharge,
                 (SELECT
                    count(*)
                    FROM obscncaf 
                    WHERE obcctyp = 'Y'
                 ) AS dischargeAmount,
                 (SELECT count(*) 
                    FROM emrvcdaf 
                    WHERE emvcvist=:admissno and emvctype='004'
                 ) AS billing,
                 (SELECT count(*) 
                    FROM emrvcdaf 
                    WHERE emvcvist=:admissno and emvctype='005' 
                 ) AS diagnosis,
                 (SELECT count(*)
                    FROM obscnaaf 
                    WHERE obcavis = :admissno
                 ) AS notes,
                 (SELECT count(*)
                    FROM vismdtaf 
                    WHERE vsmdvisn = :admissno
                 ) AS emergencynotes,
                 (SELECT count(*)
                    FROM pmsprbaf 
                    WHERE pmpburno = :urnumber
                 ) AS problems
               FROM dual";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':urnumber', $this->urnumber);
        oci_bind_by_name($stmt, ':admissno', $this->admissno);
        $this->getObject($stmt);
        break;

      default:
       	break;
    }
  }

  /****************************************************************************
   * Returns a scalar value
   ****************************************************************************/
  function getScalarValue($stmt) {
    if ($stmt){
      if (oci_execute($stmt)) {
        $numcols = oci_num_fields($stmt);
        while ($row  = oci_fetch_row($stmt)) {
             $this->reply .= $row[0];
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $this->reply;
  }

  /****************************************************************************
   * Returns comma-separated int values
   ****************************************************************************/
  function getObject($stmt) {
    $urnumber = trim($this->urnumber);
    $medications = "0";

    $i =0;
     if ($stmt) {
      if ( oci_execute($stmt) ) {
        $this->reply .= "[";
        while ($row = oci_fetch_row($stmt)) {
          $observation = $row[0];
          $clincalDoc = $row[1];
          $theatre = $row[2];
          $visits = $row[3];
          $history = $row[4];
          $discharge = $row[5];
          $dischargeAmount = $row[6];
          $billing = $row[7];
          $diagnosis = $row[8];
          $notes = $row[9]+$row[10];
          $problems = $row[11];

          $this->reply .= "{\"observation\":\"".$observation."\","
                   ."\"medications\":\"".$medications."\","
                   ."\"clinicalDoc\":\"".$clincalDoc."\","
                   ."\"diagnosis\":\"".$diagnosis."\","
                   ."\"billing\":\"".$billing."\","
                   ."\"history\":\"".$history."\","
                   ."\"theatre\":\"".$theatre."\","
                   ."\"visits\":\"".$visits."\","
                   ."\"notes\":\"".$notes."\","
                   ."\"problems\":\"".$problems."\","
                   ."\"dischargeAmount\":\"".$dischargeAmount."\","
                   ."\"discharge\":\"".$discharge."\"},";
          $i++;
        }
        if ($i > 0 ) {
          $this->reply = substr_replace($this->reply,"",-1);
          $this->reply .= "]";
        } else {
          $this->reply = "";
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $this->reply;
  }

  /****************************************************************************
  * Close current connection
  ****************************************************************************/
  public function closeConnection() {
    if ($this->conn != NULL) {
      oci_close($this->conn);
    }
  }

} //end class
?>
