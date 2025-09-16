<?php
/*
.----------------------------------------------------------------------
. Program       : preadm01.php
.
. Function      : Preadmission Portal Interface
.
. Requirements  : PHP MSSQL Configuration
.
. Modifications :
. V10.05.02 B.G.Ackland 
.           Add New CSC Trinity Portal Option
. V10.05.01 B.G.Ackland CAR 302046
.           Add New Parameter for Stored Procedure Name
.           Add New Option to Execute using Stored Procedure Name
.----------------------------------------------------------------------
PRGID     INIT      "preadm01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Preadmission Portal Interface"
.----------------------------------------------------------------------
*/
require "setup.php";
$PortalType=$ini['portal_type'];
if ($PortalType=='oracle') {
   require "preadm01-oracle.php";
} else {
   require "preadm01-mssql.php";
}
?>
