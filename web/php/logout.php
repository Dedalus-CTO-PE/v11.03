<?php
/* 
.----------------------------------------------------------------------
. Program       : logout.php
.
. Function      : Unauthorise a user using HTTP headers
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "logout.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Logout"
.----------------------------------------------------------------------
*/
  header('HTTP/1.0 401 Unauthorized');
  echo "<script type=text/javascript>";
  echo "function redirect() {";
  echo " location.href='/logout.pbl'";
  echo "}";
  echo "</script>";
  echo "<body onload=redirect();>";
  echo "<a href=../../index.pbl>Click Here to Login</a>";
  echo "</body>";
?>
