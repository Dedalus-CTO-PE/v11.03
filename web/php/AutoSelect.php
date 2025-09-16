<?php
/*
.----------------------------------------------------------------------
. Program       : AutoSelect.php
.
. Function      : General AJAX Select List JSON Generation
.
. Modifications :
. V10.03.01  29/10/2013  B.G.Ackland
.                        Changes to use bind in SQL to aviod SQL Injection
.----------------------------------------------------------------------
PRGID     INIT      "AutoSelect.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "AJAX Select List"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $rowcount = 100;
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $deptcode = (isset($_REQUEST["deptcode"])) ? $_REQUEST["deptcode"] : null;
 $reply = "";
 switch($reportno) {
/* HCPs Active Referrals by Department */
 case 1:
  $qry = "SELECT distinct pmhchcpc  code
                ,pmhcsnam||', '||pmhctitl||' '||pmhcgnam value
          FROM   pmshcpaf
          JOIN   allrefaf a on a.alrehcp=pmhchcpc 
          WHERE  a.alredept = :deptcode and a.alrestat='1'
          ORDER BY 2
                 ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':deptcode', $deptcode);
  break;

/* Case Team Active Referrals by Department*/
 case 2:
  $qry = "SELECT distinct alcateam  code
                ,alcadesc value
          FROM   allcasaf
          JOIN   allrefaf a on a.alreuhc4=alcateam 
          WHERE  a.alredept = :deptcode and a.alrestat='1'
          ORDER BY 2
                 ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':deptcode', $deptcode);
  break;

 default:
  oci_close($conn); 
  exit();
  break;
 }
 $reply .= "[";
 if ($stmt) {
   if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        $reply .= "{\"code\":\"$row[0]\",
                    \"value\":\"$row[1]\"},";
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
 }
 $reply .= "]";
 echo $reply;
 oci_close($conn); 

?>
