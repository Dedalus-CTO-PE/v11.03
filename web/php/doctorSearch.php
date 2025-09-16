<?php
/*
.----------------------------------------------------------------------
. Program       : doctorSearch.php
.
. Function      : Keyword Search for Doctor Code
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
.   12/07/2019  Don Nguyen   TSK 0876124
.               Used binding on numberOfRows to prevent SQL injections
.----------------------------------------------------------------------
PRGID     INIT      "doctorSearch.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Keyword Search for Doctor Code"
.----------------------------------------------------------------------
*/
require "setup.php";
/*****************************************************************************
 *	doctor search object instantiated
 ****************************************************************************/
$doctorSearch= new DoctorSearch($conn);
$doctorSearch->getQueryByReportNumber();
$doctorSearch->closeConnection();
/*******************************************************************************
 *   DoctorSearch class
 *******************************************************************************/
class DoctorSearch {

   //instance variables
   private $reply = "";
   private $uid = null;
   private $rept = "";
   private $conn = null;
   private $keyword = "";
   private $numberOfRows = "";

   public function __construct($connection) {
    $this->uid = $_SERVER['REMOTE_USER'];
    $this->reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
    $this->keyword  = (isset($_REQUEST["keyword"])) ? $_REQUEST["keyword"] : null;
    $this->numberOfRows = (isset($_REQUEST["numrow"])) ? $_REQUEST["numrow"] : null;
    if (!is_numeric($this->numberOfRows)) $this->numberOfRows=null;
    $this->conn = $connection;
   }
  
  /****************************************************************************
   *	getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getQueryByReportNumber() {
    $currentDate = getDate();
    $currentYear = $currentDate['year'];
    $previousYear = $currentDate['year'] - 1;

    switch($this->reportno) {
      case 1: 
        $arrKeyword = split(",",$this->keyword);
        $keyword0 = $arrKeyword[0];
        if(count($arrKeyword) == 2) {
          $arrKeyword[0] = ucwords( trim($arrKeyword[0]," "));
          $arrKeyword[1] = ucwords( trim($arrKeyword[1]," "));
          $keyword0 = $arrKeyword[0];
          $keyword1 = $arrKeyword[1];
          
          $qry = "SELECT * FROM (SELECT pmhchcpc, pmhcgnam,
                       pmhcsnam, pmhcgndr,
                       pmhcadr1,pmhcadr2,
                       pmhcadr3,pmhcadr4,pmhcpost
                  FROM  pmshcpaf
                  WHERE  upper(pmhcsnam) LIKE :keyword0||'%'
                  AND upper(pmhcgnam)    LIKE :keyword1||'%')
                  WHERE ROWNUM  <= :numbrows";
          $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
          oci_bind_by_name($stmt, ':keyword0', $keyword0);
          oci_bind_by_name($stmt, ':keyword1', $keyword1);
          oci_bind_by_name($stmt, ':numbrows', $this->numberOfRows);
        } else {
          if( count($arrKeyword) == 1 ){
            $qry = "SELECT * FROM 
                     (SELECT pmhchcpc, pmhcgnam,
                             pmhcsnam, pmhcgndr,
                             pmhcadr1,pmhcadr2,
                             pmhcadr3,pmhcadr4,pmhcpost
                       FROM   pmshcpaf
                       WHERE  upper(pmhcsnam) LIKE :keyword0||'%'
                       OR     upper(pmhcgnam) LIKE :keyword0||'%')
                     WHERE ROWNUM  <= :numbrows";
            $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
            oci_bind_by_name($stmt, ':keyword0', $keyword0);
            oci_bind_by_name($stmt, ':numbrows', $this->numberOfRows);
          }
        }
        $this->getDoctorSearchResults($stmt);
        break;
      default:
        	break;
    }
  }
 
  function getDoctorSearchResults($stmt) {
    $i =0;
     if ($stmt) {
      if ( oci_execute($stmt) ) {
        $this->reply .= "[";

        while ($row = oci_fetch_row($stmt)) {
          $code = $row[0]; //code
          $fname = $row[1]; //fname
          $lname = $row[2]; //lname
          $gender = $row[3]; //gender
          $address1 = $row[4];  //address 1
          $address2 = $row[5];  //address 2
          $address3= $row[6]; //address 3
          $address4 = $row[7];  //address 4
          $postcode = $row[8];  //postcode

          $this->reply .= "{\"code\":\"".$code."\",".
                            "\"fname\":\"".$fname."\",".
                            "\"lname\":\"".$lname."\",".
                            "\"gender\":\"".$gender."\",".
                            "\"addr1\":\"".$address1."\",".
                            "\"addr2\":\"".$address2."\",".
                            "\"addr3\":\"".$address3."\",".
                            "\"addr4\":\"".$address4."\",".
                            "\"postcode\":\"".$postcode."\"},";
          $i++;
        }

        if ($i > 0 ) {
          $this->reply = substr_replace($this->reply,"",-1);
          $this->reply .= "]";
        }else {
          $this->reply = "";
        }

      }else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $this->reply;
  }

  /****************************************************************************
   *close current connection
   ****************************************************************************/
  public function closeConnection() {
     oci_close($this->conn);
  }
}//end class
?>
