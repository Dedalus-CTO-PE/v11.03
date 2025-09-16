<?php
/*
.----------------------------------------------------------------------
. Program       : EmpiConfiguration.include.php
.
. Function      : WA Health EMPI Interface Config Details
.
. Modifications :
.----------------------------------------------------------------------
. V11.01.01 28/10/2021  Don Nguyen    TSK 0911685
.           Redefined WEB_SERVICE_URI, USERNAME, and PASSWORD.
.           Added SOAP_LOG_LOCATION.
. V10.02.00 25/07/2011  Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "EmpiConfiguration.include.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "WA Health EMPI Interface Config Details"
.
.----------------------------------------------------------------------
*/
    define("WEB_SERVICE_URI",
           "https://uat-hih01.hdwa.health.wa.gov.au/csp/healthshare/wahisb/WAHISB.UMRN.v010.AllocationService.cls?wsdl");

#    define("WEB_SERVICE_URI",
#           "https://uat-dataservices.hdwa.health.wa.gov.au/Client/EMPI/services/1/0/EmpiService.svc?wsdl");

    define("USERNAME","HIN-WebPASApp-UAT");
    define("PASSWORD","TAU-ppASAPbeW-NIH");

    define("SOAP_LOG_LOCATION","/tmp/");

    /**************************************************************************
     *	consumer identification constants
     *************************************************************************/
    define("APPLICATION_ID","adfdfdad-eeDe-Aede-dafe-adedfeadfedd");
    define("APPLICATION_NAME","webPAS");
    define("APPLICATION_VERSION","11.01.01");
    define("CONSUMER_ID","Jay");
    define("CURRENT_APPLICATION_ID","adfdfdad-eeDe-Aede-dafe-adedfeadfedd");
    define("CURRENT_ASSEMBLY_NAME","NA");
    define("CURRENT_ASSEMBLY_VERSION","NA");
    define("DEVICE_APPLICATION_ID","adfdfdad-eeDe-Aede-dafe-adedfeadfedd");
    define("DEVICE_ID","IE9");
    define("DEVICE_TYPE","web");
    define("HOSTNAME","jay");
    define("MESSAGE_HEADERS","NA");
    define("TRANSACTION_ID","NA");
?>
