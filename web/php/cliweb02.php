<?php
/*
.----------------------------------------------------------------------
. Program       : cliweb02.php
.
. Function      : Clinical Observation Services
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.----------------------------------------------------------------------
PRGID     INIT      "cliweb02.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Clinical Observation Services"
.----------------------------------------------------------------------
*/
require "setup.php";
/*****************************************************************************
 *	cliweb02 object instantiated
 ****************************************************************************/
$cliweb02 = new Cliweb02($conn);
$cliweb02->getQueryByReportNumber();
$cliweb02->closeConnection();
/*******************************************************************************
 *	Cliweb02 - common web class 
 *******************************************************************************/
class Cliweb02{ 

   //instance variables
   private $reply = "";
   private $secureid = null;
   private $reportno = "";
   private $conn = null;
   private $admissno = "";

   //Comweb01 constructor
   public function __construct($connection) {
     $this->secureid = $_SERVER['REMOTE_USER'];
     $this->reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
     $this->admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
     $this->conn = $connection;
   }
  
  /****************************************************************************
   *	getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getQueryByReportNumber() {
    switch($this->reportno) {
      case 1: //check observation number
        $qry =  "SELECT count(*) FROM obsdetaf 
                 WHERE obdevist = :admissno ";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':admissno', $this->admissno );
        $this->getScalarValue($stmt);
        break;
      case 2: //check Last Observation EWS Record
        $qry =  "SELECT obdeuy1,obdeuy2,
                        obdecom1,
                        obdeun1,obdeun2,
                        obdebpsy,obdebpdi,
                        obdeun3,obdeun4,
                        obdefin,
                        obdeuc2
                 FROM   obsdetaf 
                 WHERE  obdevist = :admissno
                 AND    obdetyp = 'P'
                 AND    rownum = 1
                 ORDER  BY obdedate desc, obdetime desc";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':admissno', $this->admissno );
        $this->setForm($stmt);
        break;
      case 3: //check Last Observation EWS Record
        $qry =  "SELECT obdeuy1,obdeuy2,
                        obdecom1,
                        obdeun1,obdeun2,
                        obdebpsy,obdebpdi,
                        obdeun3,obdeun4,
                        obdefin,
                        obdeuc2
                 FROM   obsdetaf 
                 WHERE  obdevist = :admissno
                 AND    obdetyp = 'P'
                 AND    rownum = 1
                 ORDER  BY obdedate desc, obdetime desc";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':admissno', $this->admissno );
        $this->setCalculation($stmt);
        break;

      default:
     	break;
    }
  }
 /****************************************************************************
   *display a list format in t.addRow
   ****************************************************************************/
  function setCalculation($stmt) {
    if ($stmt){
      if (oci_execute($stmt)) { 
        $this->reply = "function setDefaults() { ";
        while ($row  = oci_fetch_row($stmt)) {
          $this->reply .= "nfmaFlag='$row[0]';
                           nfaFlag='$row[1]';
                           rpLower=$row[3];rpUpper=$row[4];
                           bpLower=$row[5];bpUpper=$row[6];
                           puLower=$row[7];puUpper=$row[8];
                           opLower=$row[9];
                           lcLimit=$row[10];";
        }
      }else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    $this->reply .= "}";
    echo $this->reply;
  }
/****************************************************************************
* Return Javascript Defaults
****************************************************************************/
  function setForm($stmt) {
    if ($stmt){
      if (oci_execute($stmt)) { 
        $this->reply .= "function setDefaults() { ";
        while ($row  = oci_fetch_row($stmt)) {
          $this->reply .= "setCheckbox(AddForm.obdet028,'$row[0]');
                           setCheckbox(AddForm.obdet029,'$row[1]');
                           setText(AddForm.obdet038,'$row[2]');
                           setSelect(AddForm.obdet034,'$row[3]');
                           setSelect(AddForm.obdet035,'$row[4]');
                           setSelect(AddForm.obdet006,'$row[5]');
                           setSelect(AddForm.obdet007,'$row[6]');
                           setSelect(AddForm.obdet036,'$row[7]');
                           setSelect(AddForm.obdet037,'$row[8]');
                           setSelect(AddForm.obdet015,'$row[9]');
                           setSelect(AddForm.obdet033,'$row[10]');";
        }
      }else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    $this->reply .= "}";
    echo $this->reply;
  }
/****************************************************************************
* Return Javascript Defaults
****************************************************************************/
  function getScalarValue($stmt) {
    if ($stmt){
      if (oci_execute($stmt)) {
        $numcols = oci_num_fields($stmt);
        while ($row  = oci_fetch_row($stmt)) {
             $this->reply .= $row[0];
        }
      }else {
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
