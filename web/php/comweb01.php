<?php
/*
.----------------------------------------------------------------------
. Program       : comweb01.php
.
. Function      : Common AJAX Services
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
. V10.06.01  24.07.2015  Davin       CAR 308063
.                        Output note security level (obccslv) in 
.                        getQueryByReportNumber(1)
.----------------------------------------------------------------------
PRGID     INIT      "comweb01.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Common AJAX Services"
.----------------------------------------------------------------------
*/
/******************************************************************************
 *	includes
 *****************************************************************************/
require "setup.php";

/*****************************************************************************
 *	comweb01 object instantiated
 ****************************************************************************/
$comweb01 = new Comweb01($conn);
$comweb01->getQueryByReportNumber();
$comweb01->closeConnection();
/*******************************************************************************
 *	Comweb01 - common web class 
 *******************************************************************************/
class Comweb01{ 

   //instance variables
   private $reply = "";
   private $secureid = null;
   private $reportno = "";
   private $conn = null;

   //Comweb01 constructor
   public function __construct($connection) {
    $this->secureid = $_SERVER['REMOTE_USER'];
    $this->reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
    $this->conn = $connection;
   }
  
  /****************************************************************************
   *	getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getQueryByReportNumber() {
    switch($this->reportno) {
      case 1: //notes type list
        $qry = "SELECT obcctyp||obcctmi||obccslv, obccdes
                FROM   obscncaf 
                WHERE  obcctyp <> ' ' and obcdtyp <> 'NA'";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        break;
      case 2: //alert type list
        $qry = "SELECT tcode, tdesc 
                FROM patcodes 
                WHERE tcode in ('H1','H2','H3','H4','H5','H6','H7','H8','H9') 
                AND acode = ' ' 
                ORDER BY tcode" ;
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        break;
      case 3: //observation type list
        $qry = "SELECT obtytmad, obtydesc
                	FROM   obstypaf 
                	WHERE  obtyactv = 1";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        break;

      case 4: //hospital select list
        $qry = "SELECT pthshosp,pthsname 
                FROM pathspaf
                where exists (select 1 from mltsecaf 
                              where mlscusid= :secureid
                              and ( mlschosp=pthshosp or mlschosp=' ' ))
                order by pthsname";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':secureid', $secureid);
        break;
      default:
       	break;
    }
    $this->getSelectionOptions($stmt);
  }
  /****************************************************************************
   *display a list of option tags
   ****************************************************************************/
  private function getSelectionOptions($stmt) {
    if ($stmt) {
      if (oci_execute($stmt)) {
         $numcols = oci_num_fields($stmt);
         while ($row  = oci_fetch_row($stmt)) {
           $this->reply .= "<option value='{$row[0]}'>{$row[1]}</option>\n";
         }
      }
      echo $this->reply;
    }
  }
  /****************************************************************************
   *close current connection
   ****************************************************************************/
  public function closeConnection() {
     oci_close($this->conn);
  }
}//end class
?>
