<?php
/*
.----------------------------------------------------------------------
. Program       : EmpiWebservice.class.php
.
. Function      : WA Health EMPI Webservice class
.
. Modifications :
.----------------------------------------------------------------------
. V11.01.01 28/10/2021  Don Nguyen     TSK 0911685
.           Merged changes from site (WA Health)
. V11.00.01 30/06/2020  Jill Parkinson Task 0888767
.           Implemented changes as per wa request
. V10.03.02 14/01/2012  Saroeun Soeur CAR 276912
.           check if exception->detail is set 
. V10.03.01 17/11/2011  Saroeun Soeur CAR 254018
.           removing non-caching of wsdl
. V10.02.05 16/11/2011  Saroeun Soeur CAR 254018
.           check all return field object for null, object or array
. V10.02.04 11/11/2011  Saroeun Soeur CAR 254018
.           Fixed setting of IsConfirmed
. V10.02.03 07/11/2011  Saroeun Soeur CAR XXXXXX
.           check if response object exist
. V10.02.02 02/11/2011  Saroeun Soeur CAR 254054
.           trap code for when web serivce is down
. V10.02.01 06/09/2011  Saroeun Soeur CAR XXXXXX
.           Fixed exception to match WA HEALTH changes
. V10.02.00 25/07/2011  Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "EmpiWebservice.class.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "WA Health EMPI Webservice class"
.
.----------------------------------------------------------------------
*/

/******************************************************************************
 * file includes
 *****************************************************************************/
require_once "EmpiStruct.class.php"; // complex type class mapping from wsdl
require_once "EmpiConfiguration.include.php"; // configuration parameters
require_once "Standard.class.php";
require_once "WsseAuthHeader.class.php";

class EmpiWebservice{
  /****************************************************************************
   * instance variables
   ****************************************************************************/
  private $username = null;
  private $title = null;
  private $familyName = null;
  private $givenName = null;
  private $furtherGivenName = null;
  private $gender = null;
  private $dateOfBirth = null;
  private $medicareNumber = null;
  private $addressLine1 = null;
  private $addressLine2 = null;
  private $addressLine3 = null;
  private $addressLine4 = null;
  private $postCode = null;
  private $referenceId = null;
  private $isNewborn = false;
  private $isUnknown = false;
  private $isConfirmed = false;
  private $matchCount = 0;
  private $registrationContext = null;
  private $registrationResponse = null;
  private $client = null;

  /****************************************************************************
   * constructor
   ****************************************************************************/
  public function __construct(){
    if (isset($_SERVER['REMOTE_USER'])) {
     $this->username = $_SERVER['REMOTE_USER'];
    }

    if (isset($_GET['Title'])){
      $this->title = $_GET['Title'];
    }

    if (isset($_GET['FamilyName'])) {
      $this->familyName = $_GET['FamilyName'];
    }

    if (isset($_GET['GivenName'])) {
      $this->givenName  = $_GET['GivenName'];
    }

    if (isset($_GET['FurtherGivenName'])){
      $this->furtherGivenName  = $_GET['FurtherGivenName'];
    }
 
    if (isset($_GET['Gender'])){
      $this->gender  = $_GET['Gender'];
    }

    if (isset($_GET['DateOfBirth'])){
      $this->dateOfBirth  = $_GET['DateOfBirth'];
    }

    if ( isset($_GET['MedicareNumber']) ){
      $this->medicareNumber = $_GET['MedicareNumber'];

      if($this->medicareNumber == ""){
        $this->medicareNumber = null;
      }
    }

    if (isset($_GET['AddressLine1'])) {
      $this->addressLine1 = $_GET['AddressLine1'];
    }
   
    if (isset($_GET['AddressLine2'])) {
      $this->addressLine2 = $_GET['AddressLine2'];
    }

    if (isset($_GET['AddressLine3'])) {
      $this->addressLine3 = $_GET['AddressLine3'];
    }
   
    if (isset($_GET['AddressLine4'])) {
      $this->addressLine4 = $_GET['AddressLine4'];
    }

    if (isset($_GET['PostCode'])) {
      $this->postCode = $_GET['PostCode'];
    }

    if (isset($_GET['IsNewBorn'])) {
      $this->isNewborn = $_GET['IsNewBorn'];
      $this->isNewborn = Standard::QueryStringToBool($this->isNewborn);
    }

    if (isset($_GET['IsUnknown'])) {
      $this->isUnknown = $_GET['IsUnknown'];
      $this->isUnknown = Standard::QueryStringToBool($this->isUnknown);
    }

    if (isset($_GET['IsConfirmed'])){
      $this->isConfirmed = $_GET['IsConfirmed'];
      $this->isConfirmed = Standard::QueryStringToBool($this->isConfirmed);
    }
  }

  /****************************************************************************
   *  access & mutator methods
   ****************************************************************************/
  public function getTitle() {
    return $this->title;
  }

  public function setTitle($value) {
    $this->title = $value;
  }  
  
  public function getFamilyName() {
    return $this->familyName;
  }
  
  public function setFamilyName($value) {
    $this->familyName = $value;
  }

  public function getGivenName() {
    return $this->givenName;
  }
  
  public function setGivenName($value) {
    $this->givenName = $value;
  }

  public function getFurtherGivenName() {
    return $this->furtherGivenName;
  }
 
  public function setFurtherGivenName($value) {
    $this->furtherGivenName = $value;
  }
 
  public function getGender() {
    return $this->gender;
  }
 
  public function setGender($value) {
    $this->gender = $value;
  }
 
  public function getDateOfBirth() {
    return $this->dateOfBirth;
  }

  public function setDateOfBirth($value) {
    $this->dateOfBirth = $value;
  }

  public function getMedicareNumber() {
    return $this->medicareNumber;
  }

  public function setMedicareNumber($value) {
    $this->medicareNumber = $value;
  }

  public function getAddressLine1() {
    return $this->addressLine1;
  }
 
  public function setAddressLine1($value) {
    $this->addressLine1 = $value;
  }

  public function getAddressLine2() {
    return $this->addressLine2;
  }
 
  public function setAddressLine2($value) {
    $this->addressLine2 = $value;
  }
  
  public function getAddressLine3() {
    return $this->addressLine3;
  }
 
  public function setAddressLine3($value) {
    $this->addressLine3 = $value;
  }

  public function getAddressLine4() {
    return $this->addressLine4;
  }
 
  public function setAddressLine4($value) {
    $this->addressLine4 = $value;
  }

  public function getPostCode() {
    return $this->postCode;
  }

  public function setPostCode($value) {
    $this->postCode = $value;
  } 

  public function getReferenceId() {
    return $this->referenceId;
  } 

  public function setReferenceId($value) {
    $this->referenceId = $value;
  }

  public function getIsNewborn(){
    return $this->isNewborn;
  }

  public function setIsNewborn($bool) {
    $this->isNewborn = $bool;
  }

  public function getIsUnknown() {
    return $this->isUnknown;
  }

  public function setIsUnknown($bool) {
    $this->isUnknown = $bool;
  }

  public function getIsConfirmed(){
    return $this->isConfirmed;
  }

  public function setIsConfirmed($bool) {
    $this->isConfirmed = $bool;
  }

  /****************************************************************************
   * request to execute the remote procedure call on the web service 
   * @param    : N/A
   * @return   : returns the result as an JSON object
   * @exception: returns a string list of exceptions message
   ***************************************************************************/
  public function executeRemoteProcedureCall(){
    try {

      $contextOptions = array(
        'ssl' => array(
        'verify_peer' => false,
        'verify_peer_name' => false,
        'allow_self_signed' => true
        ));

      $sslContext = stream_context_create($contextOptions);

      // parameter settings used in soap client
      $param = array('trace' => 1,
                     'soap_version' => SOAP_1_1,
                     'location' => WEB_SERVICE_URI,
                     'exceptions' => true,
                     'verifypeer' => false,
                     'verifyhost' => false,
                     'stream_context' => $sslContext,
                     'cache_wsdl' => WSDL_CACHE_NONE
                    );

      //instantiate the soap object with param settings
      try {
        $this->client = new SoapClient(WEB_SERVICE_URI,$param);
      } catch (Exception $exception) {
        $exceptionString = $exception->getMessage()."\n\n";
        if($exceptionString !== ""){
          return "\n" . $exceptionString . $exception;
        }
      }

      //create the soap header
      $wsse_header = new WsseAuthHeader(USERNAME,PASSWORD);

      //set the soap header for authentication
      $this->client->__setSoapHeaders(array($wsse_header));

      //setup the registration context 
      $this->setupRegistrationContext();
      //executing the web service request to register patient

      //subtract the ?wsdl to set the actual web service url
      $actualWebServiceURL = (explode("?",WEB_SERVICE_URI))[0];
      $this->client->__setLocation($actualWebServiceURL);

      $this->registrationResponse = $this->client->Register($this->registrationContext);
      return $this->buildJSONResponse();
     
    }catch(Exception $exception) {

      $todaysDate = (new DateTime('NOW'))->format("yyyymmdd");
      $now = "[" . (new DateTime('NOW'))->format("y:m:d h:i:s") . "]";
      $logEntry = "REQUEST:\n" . $this->client->__getLastRequestHeaders() . "\n" . $this->client->__getLastRequest() . "\n";
      $logEntry = $logEntry . "RESPONSE:\n" . $this->client->__getLastResponseHeaders() . "\n" . $this->client->__getLastResponse() . "\n";

      $logFileName = SOAP_LOG_LOCATION . $todaysDate . "_" . 'soapLog.txt';

      if ($handle = fopen($logFileName, 'a'))
      {
        fwrite($handle, $now);
        fwrite($handle, PHP_EOL);
        fwrite($handle, $logEntry);
        fwrite($handle, PHP_EOL);
      }
      fclose($handle);

      // setup the exception message for webPAS user interface
      $exceptionString = "";
      $exceptionString = $exception->getMessage()."\n\n";
      $detailException = null;

      if( preg_match("/SOAP-ERROR/i",$exceptionString) ) {
          return $exceptionString;
      }

      if(isset($exception->detail)) {
        if($exception->detail != null) {
          if($exception->detail->ServiceFault != null) {
            if(is_object($exception->detail->ServiceFault->ServiceFaultItemList)) {
              $detailException = $exception->detail->ServiceFault->ServiceFaultItemList->ServiceFaultItem;
            }else {
              if($exception->detail->ServiceFault->ServiceFaultItemList[0] != null) {
                $detailException = $exception->detail->ServiceFault->ServiceFaultItemList[0]->ServiceFaultItem;
              }
            }
          }
        }
      }

      if($detailException != null) {
        // only one exception message 
        if(is_object($detailException)){
          $exceptionString .= $detailException->Key." - ";
          $exceptionString .= $detailException->ServiceFaultType." - ";
          $exceptionString .= $detailException->Message."\n\n";
        }else if ( $detailException != null){
           // collection of exception messages
          foreach($detailException as $item){
            $exceptionString .= $detailException->Key." - ";
            $exceptionString .= $detailException->ServiceFaultType." - ";
            $exceptionString .= $item->Message."\n\n";
          }
        }
        return $exceptionString;
      }

      if($exceptionString !== ""){
        return "\n" . $exceptionString . $exception;
      }
    }
  }
  /****************************************************************************
   * setup the registration context object for submission to the web service
   * @param : N/A
   * @return: N/A
   ***************************************************************************/
  private function setupRegistrationContext() {
    $this->registrationContext->context = new RegistrationContext();
    $this->registrationContext->context->GivenName = $this->givenName;
    $this->registrationContext->context->FurtherGivenName = $this->furtherGivenName;
    $this->registrationContext->context->FamilyName = $this->familyName;
    $this->registrationContext->context->Gender = $this->gender;
    $this->registrationContext->context->DateOfBirth = $this->dateOfBirth;
    $this->registrationContext->context->MedicareNumber = $this->medicareNumber;;
    $this->registrationContext->context->AddressLine1 = $this->addressLine1;
    $this->registrationContext->context->AddressLine2 = $this->addressLine2;
    $this->registrationContext->context->AddressLine3 = $this->addressLine3;
    $this->registrationContext->context->AddressLine4 = $this->addressLine4;
    $this->registrationContext->context->PostCode = $this->postCode;
    $this->registrationContext->context->ReferenceId = $this->referenceId;
    $this->registrationContext->context->IsNewborn = (bool)$this->isNewborn;
    $this->registrationContext->context->IsUnknown =  (bool)$this->isUnknown;
    $this->registrationContext->context->IsConfirmed = (bool)$this->isConfirmed;
    $this->registrationContext->context->Title = $this->title;
    $this->registrationContext->context->ApplicationIdentifier = APPLICATION_ID;
    $this->registrationContext->context->ApplicationName = APPLICATION_NAME;
    $this->registrationContext->context->ApplicationVersion = APPLICATION_VERSION;
    $this->registrationContext->context->ConsumerIdentity = CONSUMER_ID;
    $this->registrationContext->context->CurrentApplicationIdentifier = CURRENT_APPLICATION_ID;
    $this->registrationContext->context->CurrentAssemblyName = CURRENT_ASSEMBLY_NAME;
    $this->registrationContext->context->CurrentAssemblyVersion = CURRENT_ASSEMBLY_VERSION;
    $this->registrationContext->context->DeviceApplicationIdentifier = DEVICE_APPLICATION_ID;
    $this->registrationContext->context->DeviceIdentifier =DEVICE_ID;
    $this->registrationContext->context->DeviceType = DEVICE_TYPE;
    $this->registrationContext->context->Hostname = HOSTNAME;
    $this->registrationContext->context->MessageHeaders = MESSAGE_HEADERS;
    $this->registrationContext->context->TransactionIdentifier = TRANSACTION_ID;
  }

  /****************************************************************************
   * builds the JSON Object
   * @param : N/A
   * @return: returns a JSON Object string representation for use in javascript 
   ****************************************************************************/
  private function buildJSONResponse() {
    $registResponse = null;
    $refId = "";
    $refUMRN = "";

    $registResponse = $this->registrationResponse;
    if($registResponse != null) {
      $registResponse = $registResponse->RegisterResult;
      if($registResponse != null) {
            $refId = $registResponse->ReferenceId;
            $refUMRN = $registResponse->UMRN;
      }
    }

    $responseString =   
        "{\"ReferenceId\":\"".$refId.
        "\",\"UMRN\":\"".$refUMRN.
        "\",\"Matches\":[";

    // store matches in modelCollection object
    $modelCollection = null;
    $modelCollection = $this->registrationResponse;

    if($modelCollection != null) {
      $modelCollection = $modelCollection->RegisterResult; 
      if( $modelCollection != null) {
         $modelCollection = $modelCollection->Matches;
         if($modelCollection != null) {
           $modelCollection = $modelCollection->Client;
         }
      }   
    }

    // check if response object contains a client object or an array
    if( is_object($modelCollection) ) {
      $responseString .= $this->formatJSONObject($modelCollection);
      $this->matchCount++;
    }else if ( $modelCollection != null){
    // response object is an array
      foreach($modelCollection as $model) {
        $responseString .= $this->formatJSONObject($model);
        $this->matchCount++;
      }
    }

    // there is a match, set NewUMRN to false
    if($this->matchCount > 0 ) {
      $pos = strripos($responseString,',');
      $responseString = substr_replace($responseString,'',$pos-1,$pos);
      $responseString .= "}],\"NewUMRN\":false}";
    }else {
      $responseString .= "],\"NewUMRN\":true}";
    }

    return $responseString;
  }

  /****************************************************************************
   *  formats the JSON Object with the right attributes and values
   *  @param : $model - Client object
   *  @return: returns a string formated in JSON 
   ****************************************************************************/
  private function formatJSONObject($model){
    $tempString = "";
    $modelAddress = null;
    $modelAddressLine = null;
    $modelSuburb = null;
    $modelPostCode = null;
    $modelMedicare = null;
    $modelDateOfBirth = null;
    $modelGender = null;
    $modelGivenName = null;
    $modelFamilyName = null;
    $modelTitle = null;
    $modelMURN = null;
    //store address data in modelAddress 
    if($model->AddressList != null) {
      if(is_object($model->AddressList)) {
        if($model->AddressList->Address != null) {
          $modelAddress = $model->AddressList->Address->AustralianAddress;
        }
      }else {
        if($model->AddressList[0]->Address != null) {
         $modelAddress = $model->AddressList[0]->Address->AustralianAddress;
        }
      }
    }

    if($modelAddress != null) {
     $modelAddress =  $modelAddress->SemiStructuredAustralianAddress;
    }

    //model data
    if($modelAddress->AustralianAddressLine != null) {
      if(is_object($modelAddress->AustralianAddressLine)) {
        if($modelAddress->AustralianAddressLine->string != null) {
          if(is_object($modelAddress->AustralianAddressLine->string)) {
           $modelAddressLine = $modelAddress->AustralianAddressLine->string;
          }
        }
      }else {
        if($modelAddress->AustralianAddressLine[0] != null) {
          if(is_object($modelAddress->AustralianAddressLine[0])) {
            $modelAddressLine = $modelAddress->AustralianAddressLine[0]->string;
          }else {
            $modelAddressLine = $modelAddress->AustralianAddressLine[0]->string[0];
          }
        }
      }
    }

    if($modelAddress->SuburbPlaceLocality != null) {
      $modelSuburb = $modelAddress->SuburbPlaceLocality;
    }

    if($modelAddress->Postcode != null) {
      $modelPostCode = $modelAddress->Postcode;
    }

    if($model->MedicareNumberList != null) {
      if(is_object($model->MedicareNumberList)) {
        if( $model->MedicareNumberList->MedicareNumber != null) {
          $modelMedicare = $model->MedicareNumberList->MedicareNumber->IRN;
        }
      }else{
        if($model->MedicareNumberList[0]->MedicareNumber != null) {
          $modelMedicare = $model->MedicareNumberList[0]->MedicareNumber->IRN;
        }
      }
    }

    if($model->DateOfBirth != null) {
      $modelDateOfBirth = $model->DateOfBirth;
    }

    if($model->Gender != null) {
      $modelGender = $model->Gender;
    }

    if($model->RegisteredName != null) {
      if(is_object($model->RegisteredName)) {
          if($model->RegisteredName->GivenName != null) {
            $modelGivenName = $model->RegisteredName->GivenName;
          }

          if($model->RegisteredName->FamilyName != null) {
                $modelFamilyName = $model->RegisteredName->FamilyName;
          }
      }else {
         if($model->RegisteredName[0] != null) {
            if($model->RegisteredName[0]->GivenName != null) {
               $modelGivenName = $model->RegisteredName->GivenName;
            }
            if($model->RegisteredName[0]->FamilyName != null) {
               $modelFamilyName = $model->RegisteredName->FamilyName;
            }
         }
      }
    }

    if($model->RegisteredName->TitleList != null) {
      if(is_object($model->RegisteredName->TitleList)) {
        $modelTitle = $model->RegisteredName->TitleList->Title;
      }else {
        $modelTitle = $model->RegisteredName->TitleList[0]->Title;
      }
    }
    
    if($model->PrimaryHealthIdentifier != null) {
      if( $model->PrimaryHealthIdentifier->Designation != null) {
        $modelMURN = $model->PrimaryHealthIdentifier->Designation;
      }
    }
    
    // core body of the JSON object
    $tempString .= "{\"UMRN\":\"".$modelMURN."\",".
                    "\"Title\":\"".$modelTitle."\",".
                    "\"Surname\":\"".$modelFamilyName."\",".
                    "\"GivenName1\":\"".$modelGivenName."\",".
                    "\"Gender\":\"".$modelGender."\",".
                    "\"DateOfBirth\":\"".$modelDateOfBirth."\",".
                    "\"CurrentAddress\":\"".$modelAddressLine." ".
                                            $modelSuburb." ".
                                            $modelPostCode."\",".
                    "\"MedicareNumber\":\"".$modelMedicare."\"},";

    return $tempString;

  }
}

?>
