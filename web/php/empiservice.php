<?php
/*
.----------------------------------------------------------------------
. Program       : empiservice.php
.
. Function      : WA Health EMPI Interface Service
.
. Modifications :
.----------------------------------------------------------------------
. V10.02.01 12/10/2011  Jill Parkinson CAR 252756
.           Fixed program name
. V10.02.00 25/07/2011 Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "empiservice.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "WA Health EMPI Interface Service"
.
.
*/
  /****************************************************************************
   * This php script will execute a remote procedure call to empi web service 
   ***************************************************************************/
  require_once "lib/EmpiWebservice.class.php";

  Header('Cache-Control: no-cache');
  Header('Pragma: no-cache');

  $rpc = new EmpiWebservice();

  echo $rpc->executeRemoteProcedureCall();

?>
