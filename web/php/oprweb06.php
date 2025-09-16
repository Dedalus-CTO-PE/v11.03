<?php
/*
.----------------------------------------------------------------------
. Program       : oprweb06.php
.
. Function      : Theatre Web Services
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
. V10.03.01 29/10/2013 B.G.Ackland
.                      Changes to use bind in SQL to aviod SQL Injection
. V10.03.00 13/04/2012 Version change
. V10.01.00 13/04/2012 Version change
. V10.00.00 13/04/2012 Created for Mobility Suite
.----------------------------------------------------------------------
PRGID     INIT      "oprweb06.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Theatre Web Services"
.----------------------------------------------------------------------
*/
require "setup.php";
$oprweb06 = new Oprweb06($conn);
$oprweb06->getQueryByReportNumber();
$oprweb06->closeConnection();
/*******************************************************************************
 *	Oprweb06 - common web class 
 *******************************************************************************/
class Oprweb06{ 
   //instance variables
   private $reply = "";
   private $uid = null;
   private $conn = null;
   private $reportno = "";
   private $admissno = "";
   private $urnumber = "";
   //Comweb01 constructor
   public function __construct($connection) {
    $this->uid = $_SERVER['REMOTE_USER'];
    if (isset($_GET['reportno'])) { $this->reportno = $_GET['reportno']; }
    if (isset($_GET['admissno'])) { $this->admissno = $_GET['admissno']; }
    if (isset($_GET['urnumber'])) { $this->urnumber = $_GET['urnumber']; }
    $this->conn = $connection;
   }
  
  /****************************************************************************
   *	getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getQueryByReportNumber() {
    switch($this->reportno) {
      case 1: //check theatre event exist
        $qry =  "SELECT count(*) from bokrc1af a
              		 LEFT JOIN patcodes b ON b.tcode = 'BK' AND b.acode = a.bkretype 
                 LEFT JOIN oprdetaf c ON a.dbkreboo = c.opdaadmn 
                 WHERE  a.bkreurno = :urnumber
                 AND c.opdadate IS NOT NULL";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':urnumber', $this->urnumber );
        $this->getScalarValue($stmt);
        break;
      default:
      	break;
    }
  }
 
/****************************************************************************
* display a list format in t.addRow
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
* close current connection
****************************************************************************/
  public function closeConnection() {
     oci_close($this->conn);
  }
}//end class
?>
