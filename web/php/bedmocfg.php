<?php
/*
.----------------------------------------------------------------------
. Program       : bedmocfg.php
.
. Function      : Phillips Bed Monitor Site Configuration File
.
. Modifications :
. V10.05.01 16.02.2015 B.G.Ackland
.           Additional Parameters for New Philips Monitor Interface.
.           Remove colon from Bed maps and replace space in target with +
.----------------------------------------------------------------------
PRGID     INIT      "bedmocfg.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Bedside Monitor Site Configuration File"
.----------------------------------------------------------------------
*/
$host="vcabldbtest";
$monitorLogin="Philips";
$monitorPassword="Philips";
$monitorLoginPage="Webconnect.aspx";
$monitorTimeout="10";
$monitorApp="GeneralReview";   /* Options - AlarmReview, GeneralReview or Ecg12LeadCaptureReview */

$BedMap["1S 21P"]="122";
$BedMap["1S 221"]="122-1";
$BedMap["1S 222"]="122-2";
$BedMap["1S 231"]="123-1";
$BedMap["1S 232"]="123-2";
$BedMap["1S 241"]="124-1";
$BedMap["1S 242"]="124-2";
$BedMap["1S 26P"]="125";
$BedMap["1S 26P"]="126";
$BedMap["1S 27P"]="127";
$BedMap["1S 28P"]="128";
$BedMap["1S 29P"]="129";
$BedMap["1S 30P"]="130";
$BedMap["1S 311"]="131-1";
$BedMap["1S 312"]="131-2";
$BedMap["1S 321"]="132-1";
$BedMap["1S 322"]="132-2";
$BedMap["1S 331"]="133-1";
$BedMap["1S 332"]="133-2";
$BedMap["1S 333"]="133-3";
$BedMap["1S 334"]="133-4";
$BedMap["1S 341"]="134-1";
$BedMap["1S 342"]="134-2";
$BedMap["1S 343"]="134-3";
$BedMap["1S 344"]="134-4";
$BedMap["1N 40P"]="140";
$BedMap["1N 41P"]="141";
$BedMap["1N 42P"]="142";
$BedMap["ICU001"]="ICU+1";
$BedMap["ICU002"]="ICU+2";
$BedMap["ICU003"]="ICU+3";
$BedMap["ICU004"]="ICU+4";
$BedMap["ICU005"]="ICU+5";
$BedMap["ICU006"]="ICU+6";
$BedMap["ICU007"]="ICU+7";
$BedMap["ICU008"]="ICU+8";
$BedMap["ICU009"]="ICU+9";
$BedMap["ICU010"]="ICU+10";
$BedMap["ICU011"]="ICU+11";
$BedMap["ICU012"]="ICU+12";
$BedMap["CCUC01"]="CCU+1";
$BedMap["CCUC02"]="CCU+2";
$BedMap["CCUC03"]="CCU+3";
$BedMap["CCUC04"]="CCU+4";
$BedMap["CCUC05"]="CCU+5";
$BedMap["CCUC06"]="CCU+6";
$BedMap["CCUC07"]="CCU+7";
$BedMap["CCUC08"]="CCU+8";
$BedMap["CCUC09"]="CCU+9";
$BedMap["CCUC10"]="CCU+10";
$BedMap["CCUC11"]="CCU+11";
$BedMap["CCUC12"]="CCU+12";
$BedMap["CCUC13"]="CCU+13";
$BedMap["CCUC14"]="CCU+14";
$BedMap["CCUC15"]="CCU+15";
$BedMap["CCUC16"]="CCU+16";
$BedMap["CCUC17"]="CCU+17";
$BedMap["CCUC18"]="CCU+18";
$BedMap["ED 03"]="Cub+3";
$BedMap["ED 04"]="Cub+4";
$BedMap["ED 05"]="Cub+5";
$BedMap["ED 06"]="Cub+6";
$BedMap["ED 07"]="Cub+7";
$BedMap["ED 08"]="Cub+8";
$BedMap["ED 09"]="Cub+9";
$BedMap["ED R1"]="Resus1";
$BedMap["ED R2"]="Resus2";

?>
