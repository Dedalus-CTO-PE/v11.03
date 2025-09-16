<?php
/*
.----------------------------------------------------------------------
. Program       : PACSconfig.php
.
. Function      : PACS Interface Configuration Include
.
. Modifications :
.  V10.06.01       15.02.2016  B.G.Ackland
.                  Added signatureKey and Separate Client and Server Host Parameters
.                  This is to enable the launch of InteleConnent for Cabrini
.  V10.03.01       05.06.2013  Saroeun Soeur CAR 286325
.                  remove hard code from param
.  V10.01.00       20.03.2013  B.G.Ackland 
.                              Revised PACS Interface
.----------------------------------------------------------------------
PRGID     INIT      "PACSconfig.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "PACS Interface Configuration Include"
.----------------------------------------------------------------------
*/
 $ServerHost="https://10.3.155.81";
 $ClientHost="https://cahweb1.cabrini.com.au";
 $host=$ServerHost;
 $signatureKey="44d988e5b92d096e05dab712c8705dd5";
 $authToken="ea14d1651fb169a70f8a79fddb44d0d9";
 $pacsUser="isoftcahsigtest";
 $clientId="Cabrini_WEBPASv10";

 $wgetCMD="wget --ignore-length  -q --no-check-certificate --no-proxy -O -  ";
 if (isset($_SERVER['REMOTE_USER']))    $username = $_SERVER['REMOTE_USER'];
 if (isset($_GET['accessionNumber']))   $accessionNumber = $_GET['accessionNumber']; 
 if (isset($_GET['reportno']))          $rept = $_GET['reportno']; 
 if (isset($_GET['patientId']))         $patientId = $_GET['patientId'];
 if (isset($_GET['UserName']))          $UserName = $_GET['UserName'];
 if (isset($_GET['SID']))               $SID = $_GET['SID'];
 if (isset($_GET['SessionHost']))       $SessionHost = $_GET['SessionHost'];
 if (isset($_GET['Action']))            $Action = $_GET['Action'];
 if (isset($_GET['study']))             $study = $_GET['study'];
 if (isset($_GET['maxImagesPerPage0'])) $maxImagesPerPage0 = $_GET['maxImagesPerPage0'];
 if (isset($_GET['series']))            $series = $_GET['series'];
?>
