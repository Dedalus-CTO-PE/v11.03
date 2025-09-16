<?php
/*
   Purpose      : General Auto Suggest Code Search
   Modification :
   25 Jul 2011 B.G.Ackland

   Modifcation          Date            Comments
   Version 10.03.00     12/04/2012      Saroeun Soeur CAR 246840 created for v10.03

*/

   $host="appsvr063";
   $page="cab/cgi-bin/CabMate.php";
   $QueryString=$_SERVER['QUERY_STRING'];
   $WebService="http://$host/$page?$QueryString";

   passthru("wget --user=ibaPROXY --password=dummy123 --timeout=15 -O - '$WebService'");

?>
