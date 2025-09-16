<?php
/*
.----------------------------------------------------------------------
. Program       : sendeml.php
.
. Function      : Generic Send Email Service
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "sendeml.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Send Email"
.----------------------------------------------------------------------
*/
 $messageSubject = "";
 $messageText = "";
 $urnumber = "";
 $admissno = "";
 $username = "";
 $sendto = "";
 if (isset($_GET['sendto'])) $sendto = $_GET['sendto'];
 if (isset($_GET['admissno'])) $admissno = $_GET['admissno'];
 if (isset($_GET['fromuser'])) $fromuser = $_GET['fromuser'];
 if (isset($_GET['messageText'])) $messageText = $_GET['messageText'];
 if (isset($_GET['messageSubject'])) $messageSubject = $_GET['messageSubject'];
 $header  = "MIME-Version: 1.0\n";
 $header .= "Content-type: text/html; charset=iso-8859-1\n";
 $header .= "From: $fromuser  <iba@webpasdemo.healthhost.net>\n"; //optional headerfields 
 mail($sendto, $messageSubject, $messageText, $header); //mail command :)
?>
