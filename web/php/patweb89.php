<?php
/*
.----------------------------------------------------------------------
. Program       : patweb89.php
.
. Function      : General Patient Information Service
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
. V10.06.01  23.06.2015  B.G.Ackland CAR 312621
.                        Fix Concession Card Display
. V10.03.01  14.11.2013  B.G.Ackland
.                        Changes to use bind in SQL to aviod SQL Injection
.----------------------------------------------------------------------
PRGID     INIT      "patweb89.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "General Patient Information Service"
.----------------------------------------------------------------------
*/
require "setup.php";
$patweb89 = new Patweb89($conn);
$patweb89->getQueryByReportNumber();
$patweb89->closeConnection();
/*******************************************************************************
 * patweb98 - common web class
 *******************************************************************************/
class Patweb89 {
   //instance variables
   private $reply = "";
   private $secureid = null;
   private $reportno = "";
   private $conn = null;
   private $urnumber = "";
   private $gname = "";
   private $sname = "";
   private $dob = "";
   private $sex = "";
   //Patweb89 constructor
   public function __construct($connection) {
    $this->secureid = $_SERVER['REMOTE_USER'];
    if (isset($_GET['reportno'])) { $this->reportno = $_GET['reportno']; }
    if (isset($_GET['urnumber'])) { $this->urnumber = $_GET['urnumber']; }
    $this->conn = $connection;
   }

  /****************************************************************************
   *    getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getQueryByReportNumber() {
    switch($this->reportno) {
      case 1: //alias for patient urnumber
        $qry = "SELECT gsrsnam,gsrgnam,gsrdob,gsrsex
                FROM   patgsrnf
                WHERE  gsrurno = :urnumber ";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':urnumber', $this->urnumber);
       	$this->getAliasList($stmt);
        break;
      case 2: //concession cards
        $qry = "SELECT pat.tdesc, pms.pmcdcnum,pms.pmcdexdt       
                FROM pmsccdaf pms 
                LEFT JOIN patcodes pat on pat.tcode = 'ct' and pat.acode = pms.pmcdctyp
                WHERE pms.PMCDURNO = :urnumber ";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':urnumber', $this->urnumber);
        $this->getConcessionList($stmt);
        break;

      default:
        break;
    }
  }

/****************************************************************************
* display Concession List
****************************************************************************/
  private function getConcessionList($stmt) {
    if ($stmt) {
      if (oci_execute($stmt)) {
         $numcols = oci_num_fields($stmt);
         $this->reply .= "<span style='font-size:15px;color:#324F85;display:inline-block;'>
                         <table border='0' cellspacing='0' cellpadding='0'>";
         $found = true;
         while ($row  = oci_fetch_row($stmt)) {
           $year = substr($row[2],0,4);
           $month = substr($row[2],4,2);
           $day = substr($row[2],6,2);
           $this->reply .= "<tr style='padding-bottom:2px;'><td>".$row[0]."</td>".
                           "<td style='padding-left:5px;min-width:140px;'>".$row[1]."</td>".
                           "<td style='padding-left:5px;min-width:140px;'>".
                           date('d M Y',mktime(0,0,0,$month,$day,$year))."</td></tr>\n";
         }
         $this->reply .= "</table></span>";
       }
      echo $this->reply;
    }
  }
/****************************************************************************
* display alias
****************************************************************************/
  private function getAliasList($stmt) {
    if ($stmt) {
      if (oci_execute($stmt)) {
         $numcols = oci_num_fields($stmt);
         $this->reply .= "<span style='color:#324F85;display:inline-block;'><table  border='0' cellspacing='0' cellpadding='0'>";
         $found = true;
         while ($row  = oci_fetch_row($stmt)) {
           $year = substr($row[2],0,4);
           $month = substr($row[2],4,2);
           $day = substr($row[2],6,2);
           $sex = str_replace(" ","",$row[3]);
           $dob = str_replace(" ","",$row[2]);
           $gname = str_replace(" ","",$row[1]);
           $sname = str_replace(" ","",$row[0]);
	   //setup comparison string of current name,dob and sex  with alias details
	   $str1 = $sex."".$gname."".$sname."".$dob;
           $str2 = strtoupper(substr($this->sex,0,1))."".$this->gname."".$this->sname."".$this->dob;
	   if ($str1 != $str2) { 
             if ($found) {
               $this->reply .= "<tr  style='display:block;text-align:left;'><td>".strtoupper($row[0])."</td>";
             } else{
               $this->reply .= "<tr  class='dynamicRowAlias' style='display:none;text-align:left;'><td>".strtoupper($row[0])."</td>";
             }
             $this->reply .= "<td  style=';min-width:160px;text-transform:capitalize;'>,".strtolower($row[1])."</td>".
                               "<td  style='min-width:100px;text-transform:capitalize;'>,"
                               .date('d M Y',mktime(0,0,0,$month,$day,$year));
               if($sex != "") {
                  $this->reply .=  "</td><td style='text-transform:capitalize;width:30px;'>,"
                                   .strtolower($row[3])."</td></tr>\n";
               }else {
                 $this->reply .= "</td></tr>\n";
               }
             $found = false;
           }
         }
         $this->reply .= "</table></span>";
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

