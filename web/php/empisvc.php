<?php
/*
.---------------------------------------------------------------------- 
. Program       : empisvc.php
.
. Function      : WA Health EMPI Interface Service
.
. Modifications :
.----------------------------------------------------------------------
. V10.03.01 14/01/2013 Saroeun Soeur CAR 276912
.                      Check if $exception->detail is set
. V10.02.00 25/07/2011 Saroeun Soeur CAR 240712
.                      New Program
.----------------------------------------------------------------------
.
.     Call Parameters
.     ================
.     Title	                The clients title
.     FamilyName	        The clients family name
.     GivenName	                The clients given name
.     FurtherGivenName          The clients further given (middle) name (Optional)
.     Gender	                The clients gender (Optional, no value = not known)
.     DateOfBirth	        The clients date of birth
.     Address	                The clients address
.     MedicareNumber	        The clients medicare number
.
.
PRGID     INIT      "empisvc.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "WA Health EMPI Interface Service"
.
.  
*/
   require_once "empistruc.php";   /* complex type class mapping from wsdl */
   require_once "empicfg.php";     /* Configuration Parameters */
   require_once "lib/Standard.class.php";

   $Title = null;
   $FamilyName = "";
   $GivenName = "";
   $FurtherGivenName = "";
   $Gender = null;
   $DateOfBirth = "";
   $MedicareNumber = null;
   $AddressLine1 = "";
   $AddressLine2 = "";
   $AddressLine3 = "";
   $AddressLine4 = "";
   $PostCode = "";
   $ReferenceId = "";
   $IsNewBorn = FALSE;
   $IsUnknown = FALSE;
   $IsConfirmed = FALSE;
   $matchCount = 0;

/* 
       Setup Request parameters 
*/
   if (isset($_SERVER['REMOTE_USER']))   $username   = $_SERVER['REMOTE_USER'];
   if (isset($_GET['Title']))            $Title      = $_GET['Title'];
   if (isset($_GET['FamilyName']))       $FamilyName = $_GET['FamilyName'];
   if (isset($_GET['GivenName']))        $GivenName  = $_GET['GivenName'];
   if (isset($_GET['FurtherGivenName'])) $FurtherGivenName  = $_GET['FurtherGivenName'];
   if (isset($_GET['Gender']))           $Gender  = $_GET['Gender'];
   if (isset($_GET['DateOfBirth']))      $DateOfBirth  = $_GET['DateOfBirth'];

   if ( isset($_GET['MedicareNumber']) ){
  
     $MedicareNumber = $_GET['MedicareNumber'];

     if($MedicareNumber == ""){
       $MedicareNumber = null;
     }

   }

   if (isset($_GET['AddressLine1']))     $AddressLine1  = $_GET['AddressLine1'];
   if (isset($_GET['AddressLine2']))     $AddressLine2  = $_GET['AddressLine2'];
   if (isset($_GET['AddressLine3']))     $AddressLine3  = $_GET['AddressLine3'];
   if (isset($_GET['AddressLine4']))     $AddressLine4  = $_GET['AddressLine4'];
   if (isset($_GET['PostCode']))         $PostCode      = $_GET['PostCode'];
 
   if (isset($_GET['IsNewBorn'])){       
     $IsNewBorn = $_GET['IsNewBorn'];
     $IsNewBorn = Standard::QueryStringToBool($IsNewBorn);

   }

   if (isset($_GET['IsUnknown'])) {
       $IsUnknown = $_GET['IsUnknown'];
       $IsUnknown = Standard::QueryStringToBool($IsUnknown);
   }

   if (isset($_GET['IsConfirmed'])){
       $IsConfirmed = $_GET['IsConfirmed'];
       $IsConfirmed = Standard::QueryStringToBool($IsConfirmed);
   }

/* 
Can probably use the PHP SOAP Function to do the call
*/
	Header('Cache-Control: no-cache');
	Header('Pragma: no-cache');

	$client = "";
	$registrationContext = new Register();

	try {
		$param = array('trace' => 1,
		   'soap_version'   => SOAP_1_1,
		   'location' => WEB_SERVICE_URI,
                   'exceptions' => true,
                   'cache_wsdl' => WSDL_CACHE_NONE,
		   'classmap' => $classmapping
		   );

		$username = USERNAME;
		$password = PASSWORD;

		$wsse_header = new WsseAuthHeader($username, $password); 
		$client = new SoapClient(WEB_SERVICE_URI,$param);
		$client->__setSoapHeaders(array($wsse_header));

		//create a RegistrationContext object - 
		//         request parameter for web service based on wsdl contract

    		$registrationContext->context = new RegistrationContext();
		$registrationContext->context->GivenName = $GivenName;
		$registrationContext->context->FurtherGivenName = $FurtherGivenName;
		$registrationContext->context->FamilyName = $FamilyName;
		$registrationContext->context->Gender = $Gender;
		$registrationContext->context->DateOfBirth = $DateOfBirth;
		$registrationContext->context->MedicareNumber = $MedicareNumber;;
		$registrationContext->context->AddressLine1 = $AddressLine1;
		$registrationContext->context->AddressLine2 = $AddressLine2;
		$registrationContext->context->AddressLine3 = $AddressLine3;
		$registrationContext->context->AddressLine4 = $AddressLine4;
		$registrationContext->context->PostCode = $PostCode;
		$registrationContext->context->ReferenceId = $ReferenceId;
		$registrationContext->context->IsNewborn = (bool)$IsNewBorn;
		$registrationContext->context->IsUnknown =  (bool)$IsUnknown;
		$registrationContext->context->IsConfirmed = (bool)$IsConfirmed;
		$registrationContext->context->Title = $Title;	
		$registrationContext->context->ApplicationIdentifier = APPLICATION_ID;
		$registrationContext->context->ApplicationName = APPLICATION_NAME;
		$registrationContext->context->ApplicationVersion = APPLICATION_VERSION;
		$registrationContext->context->ConsumerIdentity = CONSUMER_ID;
		$registrationContext->context->CurrentApplicationIdentifier = CURRENT_APPLICATION_ID;
		$registrationContext->context->CurrentAssemblyName = CURRENT_ASSEMBLY_NAME;
		$registrationContext->context->CurrentAssemblyVersion = CURRENT_ASSEMBLY_VERSION;
		$registrationContext->context->DeviceApplicationIdentifier = DEVICE_APPLICATION_ID;
		$registrationContext->context->DeviceIdentifier =DEVICE_ID;
		$registrationContext->context->DeviceType = DEVICE_TYPE;
		$registrationContext->context->Hostname = HOSTNAME;
		$registrationContext->context->MessageHeaders = MESSAGE_HEADERS;
		$registrationContext->context->TransactionIdentifier = TRANSACTION_ID;

	
		//web service method <register> returns a RegistrationResponse object - 
		//           response parameter for web service
 
  		$registrationResponse = $client->Register($registrationContext);
			
		//start building JSON object
	  	$responseString =
         		"{\"ReferenceId\":\"".$registrationResponse->RegisterResult->ReferenceId.
         		"\",\"UMRN\":\"".$registrationResponse->RegisterResult->UMRN."\"".
			",\"Matches\":[";

	        /**
		 * Check if response object contains a client object or an array
		 */
		if( is_object($registrationResponse->RegisterResult->Matches->Client) ) {
		   $model = $registrationResponse->RegisterResult->Matches->Client;
		   $responseString .= formatJSONObject($model);
		   $matchCount++;
		}else {
		  /**
                   * response object is an array
                   */
		  foreach($registrationResponse->RegisterResult->Matches->Client as $model) {
		   $responseString .= formatJSONObject($model);
		   $matchCount++; 
		  }
	        }

		/**
                 * there is a match, set NewUMRN to false
                 */
		if($matchCount > 0 ) {
	   		$pos = strripos($responseString,',');
     			$responseString = substr_replace($responseString,'',$pos-1,$pos);
     			$responseString .= "}],\"NewUMRN\":false}";
    		}else {
			$responseString .= "],\"NewUMRN\":true}";
		}

		/**
                 * Output the JSON object to be consumed by javascript 
                 */
		echo $responseString; 

	}catch(Exception $e) {
		echo $e->getMessage()."\n\n";

                if(isset($e->detail)) {
		  $detailException = $e->detail->ServiceFault->ServiceFaultItemList->ServiceFaultItem;
		  if(is_object($detailException)){
		    echo $detailException->Message."\n\n";
		  }else{
		    foreach($detailException as $item){
		      echo $item->Message."\n\n";
		    }
		  }
                }
       }

       function formatJSONObject($model){
	$tempString = "";
        $modelAddress = $model->AddressList->Address->AustralianAddress->SemiStructuredAustralianAddress;
        $tempString .= "{\"UMRN\":\"".$model->PrimaryHealthIdentifier->Designation."\",".
                        "\"Title\":\"".$model->Title."\",".
                        "\"Surname\":\"".$model->RegisteredName->FamilyName."\",".
                        "\"GivenName1\":\"".$model->RegisteredName->GivenName."\",".
                        "\"Gender\":\"".$model->Gender."\",".
                        "\"DateOfBirth\":\"".$model->DateOfBirth."\",".
                        "\"CurrentAddress\":\"".$modelAddress->AustralianAddressLine->string[0]." ".
                                                $modelAddress->SuburbPlaceLocality." ".
                                                $modelAddress->Postcode.
                        "\",".
                        "\"MedicareNumber\":\"".$model->MedicareNumberList->MedicareNumber->IRN."\"},";
        return $tempString;
       }
?>
