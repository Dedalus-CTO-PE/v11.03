<?php
/*
.----------------------------------------------------------------------
. Program       : MedchartServices.php
.
. Function      : Interface to MedChart Web Services
.
. Requirements  : MedChart Implementation including
.                  - MedChart Web Services
.                  - MedChart Secure Invocaton Web Services
.
. Modifications :
.
. V11.03.01 25/01/2023  Don Nguyen     TSK 0893674
.           Modified to allow non-patient functions; i.e. no urnumber passed in
. V10.13.01 B.G.Ackland
.           Add Error Handling for CURL Errors Call to MedChart Web Service
.           Change Error Message to Outage Message
. V10.06.01 B.G.Ackland
.           Change URL to Medchart to user patientID and not externalID
. V10.05.01 B.G.Ackland
.           Enable Medchart Generate Token Method of Invocation for Load Balanced Environment
. V10.04.01 B.G.Ackland
.           Implementation of parameter changes for Secure Invocation to enable path definition
.
.----------------------------------------------------------------------
PRGID     INIT      "MedchartServices.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Interface to MedChart Web Services"
.----------------------------------------------------------------------
  error_reporting(E_ALL);
*/
 require "setup.php";
 $MedchartURL      = $ini['medchart_url'];
 $MedchartServices = $ini['medchart_services'];
 $MedchartSI       = $ini['medchart_si'];
 $MedchartUser     = $ini['medchart_user'];
 $MedchartPass     = $ini['medchart_password'];
 $MedchartPSK      = $ini['medchart_psk'];
 $SIWebService     = $MedchartSI."SetData";
 $MCS              = $MedchartServices."Patients";
 $secureid         = $_SERVER['REMOTE_USER'];
 $MedchartUserMap  = $ini['medchart_user_map'];
 if ($MedchartUserMap=="1") {
   $patterns='/^000(......)/';
   $replacements='\1';
   $secureid = preg_replace($patterns,$replacements,$secureid);
 }
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
 $admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
 $function = (isset($_REQUEST["function"])) ? $_REQUEST["function"] : 'Desktop';
 $hasMedications = "";
 $hasDischargeMeds = "";
 $urnumber = str_replace(" ","",$urnumber);
 $url = $MCS."?format=json&ExternalId=".urlencode($urnumber);
 $ch = curl_init();
 curl_setopt($ch, CURLOPT_URL, $url);
 curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, FALSE);
 curl_setopt($ch, CURLOPT_RETURNTRANSFER, TRUE);
 curl_setopt($ch, CURLOPT_USERPWD, "$MedchartUser:$MedchartPass");
 $episodeid=""; $id="";$surname="";$givenname="";$allergystatus="";
 if ($response = curl_exec($ch)) {
   $response=json_decode($response, true);
   foreach($response['Patients'] as $Patient){
     foreach($Patient['Identifiers'] as $identifier){
       if($identifier['Type']=="HR" && $identifier['Value']==$urnumber) {
         $id = $Patient['Id'];
         $surname   = $Patient['LegalName']['Surname'];
         $givenname = $Patient['LegalName']['GivenName'];
         $allergystatus = $Patient['AllergyStatus'];
         foreach($Patient['Episodes'] as $Episode){
           foreach($Episode['Admissions'] as $Admission){
             if ($Admission["RefCode"]==$admissno) {
               $hasDischargeMeds=$Episode["DischargeMedications"]["Rel"];
               $hasMedications=$Episode["InpatientMedications"]["Rel"];
               $episodeid = $Episode["Id"];
               $admissionid = $Admission["Id"];
             }
           }
         }
       }
     }
   }
 }

 if (curl_errno($ch)!=0) {
   if (curl_errno($ch)==7) {
     echo "ERROR : MedChart is currently unavailable due to system upgrade and will become available again once complete.  \nFor urgent medication orders please contact the patients ward.\n (".curl_errno." - ".curl_error($ch).")";
    exit();
   }
   echo "ERROR : Unable to connect to MedChart Web Services.\nError ".curl_errno($ch)." - ".curl_error($ch);
   exit();
 }

 if (!empty($urnumber)) {
   if ($id=="") {
     echo "ERROR : Patient Does Not Exist - Medication Management System\n($url)";
     exit();
   }
 }


 // 
 // Processing Options:
 //
 switch($reportno) {
/* inpatient medications */
 case 1:
  if ($episodeid=="") {
    echo "ERROR : Patient Visit Does Not Exist - Medication Management System";
    exit();
  } else {
    $url = $MCS."/$id/Episodes/$episodeid/SimpleMedications/Inpatient?format=json";
  }
  break;
/* discharge medications */
 case 2:
  if ($episodeid=="") {
    echo "ERROR : Patient Visit Does Not Exist - Medication Management System";
    exit();
  } else {
    $url = $MCS."/$id/Episodes/$episodeid/SimpleMedications/Discharge?format=json";
  }
  break;
/* medication reconciliation */
 case 3:
  $url = $MCS."/$id/Episodes/$episodeid/MedRec?format=json";
  break;
/* allergies */
 case 4:
  $url = $MCS."/$id/Allergies?format=json";
  break;
/* medchart allergy ststus for patient  */
 case 7:
  echo $allergystatus;
  exit();
  break;
/* flag discharge medciations exist for patient episode */
 case 8:
  $hasMeds="0";
  if (preg_match("/Epsiode-Has-DischargeMedications/i",$hasDischargeMeds)) {
    $hasMeds="1";
  }
  echo $hasMeds;
  exit();
  break;
/* flag inpatient medciations exist for patient episode */
 case 9:
  $hasMeds="0";
  if (preg_match("/Episode-Has-InpatientMedications/i",$hasMedications)) {
    $hasMeds="1";
  }
  echo $hasMeds."|".$allergystatus;
  exit();
  break;
/* secure innvocation - method 2 */
 case 10:
   $poststr = "function=$function&userName=$secureid&patientId=".urlencode($urnumber);
   $ch = curl_init();
   curl_setopt($ch, CURLOPT_URL, $MedchartURL."integration/GenerateToken.asp");
   curl_setopt($ch, CURLOPT_POST, 1);
   curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
   curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
   curl_setopt($ch, CURLOPT_POSTFIELDS, $poststr);
   curl_setopt($ch, CURLOPT_USERAGENT, "WebPasRequest");
   if ($response = curl_exec($ch)) {
     echo $MedchartURL."integration/OpenSession.asp?key=$response";
   } else {
     echo "ERROR : URL (".$MedchartURL."integration/GenerateToken.asp) returned ".curl_error($ch);
   }
   exit();
   break;
/* secure innvocation - method 1 */
 case 11:
   $xml     = "<?xml version='1.0' ?>
               <MedChartLaunchInterface version='1.0' function='$function'>
                 <Application name='webPAS' version='v11.02' />
                 <User userName='$secureid' />
                 <Patient externalId='$urnumber'/>
               </MedChartLaunchInterface>";
   $xml=str_replace("<","&lt;",$xml);
   $xml=str_replace(">","&gt;",$xml);
   $poststr = "<SetData xmlns='SI'><message>".$xml."</message></SetData>";
   $ch = curl_init();
   curl_setopt($ch, CURLOPT_URL, $SIWebService);
   curl_setopt($ch, CURLOPT_POST, 1);
   curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
   curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
   curl_setopt($ch, CURLOPT_POSTFIELDS, $poststr);
   $headers = array(
          "Content-type: application/xml",
          "Authorization: $MedchartPSK",
    );
   curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
   if ($response = curl_exec($ch)) {
     $xml = new SimpleXMLElement($response);
     $key = (string)$xml->SetDataResult;
     echo $MedchartURL."integration/OpenSession.asp?key=$key";
   } else {
     echo "ERROR : URL (".$SIWebService.") returned ".curl_error($ch);
   }
   exit();
   break;

 }

 $ch = curl_init();
 curl_setopt($ch, CURLOPT_URL, $url);
 curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
 curl_setopt($ch, CURLOPT_USERPWD, "$MedchartUser:$MedchartPass");
 if ($response = curl_exec($ch)) {
    echo $response;
 } else {
    echo $url;
 }
?>
