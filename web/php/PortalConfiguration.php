<?php
/*
.----------------------------------------------------------------------
. Program       : PortalConfiguration.php
.
. Function      : Portal Configuration 
.
. Options      : 1 - Edit/Update Authentication Email Message
.                2 - Edit/Update Password Recovery Email Message
.                3 - Edit/Update Terms and Data Usage Policy
.                4 - Edit/Update Concent for Collection of Health Data
.                5 - Edit User Properties
.
. Modifications :
. V10.14.01 26/07/2019 Richa Phogat   TSK 0877960
.           Updated UpdateUserProfile to save changes done to Surname, Firstname
.           & Dateofbirth
. V10.13.01 26.07.2017 B.G.Ackland    Task 0858635 
.           Added MultiHospitalEmail function with HospitalName in Merge
. V10.10.01 04/08/2017 Jill Parkinson Task 0300328
.           Added google_api_key
. V10.06.01 01.04.2015 B.G.Ackland
.           Added New Parameter Security Token for Printing/PDF Integration
.----------------------------------------------------------------------
PRGID     INIT      "PortalConfiguration.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Portal Configuration"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $portal_config_path = $ini["portal_path"]."configuration/";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;

 switch (strtolower($ini['portal_type'])) {
   case "oracle_env":
     $conn = oci_pconnect(GetEnv($ini['portal_uid_env']),
                          GetEnv($ini['portal_pwd_env']),
                          GetEnv($ini['portal_sid_env']));
      if (!$conn) { die("oracle_env: can't get a connection to Oracle"); } 
      break;
   case "oracle":
      $conn = oci_connect($ini['portal_uid'],$ini['portal_pwd'],$ini['portal_sid']);
      if (!$conn) { die("oracle: can't get a connection to Oracle");
      } 
      break;
   default:
      die("unknown database type");
}

switch($reportno) {
 case 1:
   ConfigureEmail("RegistrationEmail");
   break;
 case 2:
   ConfigureEmail("AuthenticationEmail");
   break;
 case 3:
   ConfigureTerms();
   break;
 case 4:
   ConfigureConsent();
   break;
 case 5:
   ConfigureSettings();
   break;
 case 6:
   ConfigureRegistration();
   break;
 case 7:
   ConfigureCodes();
   break;
 case 8:
   ConfigureUsers();
   break;
 case 9:
   UpdateUserProfile();
   break;
 case 10:
   UpdateTable();
   break;
 case 11:
   UpdateCode();
   break;
 case 12:
   ConfigureFinalConsent();
   break;
 case 13:
   ConfigureEmail("AdmissionEmail");
   break;
 case 14:
   MultiHospitalEmail("AdmissionEmail");
   break;
}
/*
   Configuration Users 
*/
function ConfigureUsers() {
  $option = (isset($_REQUEST["option"])) ? $_REQUEST["option"] : null;
  $UserProfileID = (isset($_REQUEST["UserProfileID"])) ? $_REQUEST["UserProfileID"] : null;
  switch($option) {
   case 1:
    UserList();
    break;
   case 2:
    UserUpdate($UserProfileID);
    break;
  }
}
function UpdateTable() {
  global $conn;
  $TableID = (isset($_REQUEST["TableID"])) ? $_REQUEST["TableID"] :null; 
  $Description = (isset($_REQUEST["Description"])) ? $_REQUEST["Description"] :null; 
  $Active = (isset($_REQUEST["Active"])) ? $_REQUEST["Active"] :'N'; 
  if ($TableID == null) {
    $SQL="INSERT INTO WPT_Tables (Description,Active)
          VALUES (:Description,:Active)";
    $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':Description', $Description);
    oci_bind_by_name($rs, ':Active', $Active);
    if (!oci_execute($rs)) { echo oci_error($rs); exit();}
    echo "COMPLETE";
    return;
  } else {
    $SQL="SELECT * from WPT_Tables 
          WHERE TableID=:TableID";
    $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':TableID', $TableID);
    if (!oci_execute($rs)) { echo oci_error($rs); exit();}
    $numrows=0;
    while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { 
      $rsUserProfile=$row;
      $numrows++; 
    }
    if ($numrows==1) {
      $SQL="UPDATE WPT_Tables SET Description=:Description,Active=:Active
            WHERE TableID=:TableID";
      $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
      oci_bind_by_name($rs, ':TableID', $TableID);
      oci_bind_by_name($rs, ':Description', $Description);
      oci_bind_by_name($rs, ':Active', $Active);
      if (!oci_execute($rs)) { echo oci_error($rs); exit();}
      echo "COMPLETE";
      return;
    } 
  } 
  echo "ERROR: Invalid Table ID.$TableID";
  return;
}
function UpdateUserProfile() {
  global $conn;
  $UserProfileID = (isset($_REQUEST["UserProfileID"])) ? $_REQUEST["UserProfileID"] :null; 
  $Surname   = (isset($_REQUEST["Surname"])) ? $_REQUEST["Surname"] :null;
  $FirstName = (isset($_REQUEST["FirstName"])) ? $_REQUEST["FirstName"] :null;
  $DateOfBirth   = (isset($_REQUEST["DateOfBirth"])) ? $_REQUEST["DateOfBirth"] :null;
  $Password1 = (isset($_REQUEST["Password1"])) ? $_REQUEST["Password1"] :null; 
  $Password2 = (isset($_REQUEST["Password2"])) ? $_REQUEST["Password2"] :null; 
  $UserEmail = (isset($_REQUEST["UserEmail"])) ? $_REQUEST["UserEmail"] :null; 
  $UserEmail = strtolower($UserEmail);
  $Activated = (isset($_REQUEST["Activated"])) ? $_REQUEST["Activated"] :null; 
  $SQL="SELECT * from WPT_UserProfile 
        WHERE UserProfileID=:UserProfileID";
  $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':UserProfileID', $UserProfileID);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  $numrows=0;
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $rsUserProfile=$row;$numrows++; }
  if ($numrows == 0) {
    echo "Error: User Profile Not Found.";
    return;
  }
  if ($Password1==null&&$rsUserProfile["USEREMAIL"]==$UserEmail&&$rsUserProfile["SURNAME"]==$Surname&&$rsUserProfile["FIRSTNAME"]==$FirstName&&$rsUserProfile["DATEOFBIRTH"]==$DateOfBirth) {
    $SQL="UPDATE WPT_UserProfile SET Activated=:Activated
          WHERE UserProfileID=:UserProfileID";
    $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':UserProfileID', $UserProfileID);
    oci_bind_by_name($rs, ':Activated', $Activated);
    if (!oci_execute($rs)) { echo oci_error($rs); exit();}
    echo "COMPLETE";
    return;
  } else {
    if ($Password1==null) {
      echo "ERROR: A New Passwords Must be Entered.";
      return;
    }
    if ($Password1==$Password2) {
      $SQL="UPDATE WPT_UserProfile
SET UserKey=dbms_obfuscation_toolkit.md5(input=>utl_i18n.string_to_raw(:UserEmail||:Password)),
UserEmail=:UserEmail, Surname=:Surname, FirstName=:FirstName, DateOfBirth=:DateOfBirth, Activated=:Activated
        WHERE UserProfileID=:UserProfileID";
      $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
      oci_bind_by_name($rs, ':UserProfileID', $UserProfileID);
      oci_bind_by_name($rs, ':Surname', $Surname);
      oci_bind_by_name($rs, ':FirstName', $FirstName);
      oci_bind_by_name($rs, ':DateOfBirth', $DateOfBirth);
      oci_bind_by_name($rs, ':UserEmail', $UserEmail);
      oci_bind_by_name($rs, ':Password', $Password1);
      oci_bind_by_name($rs, ':Activated', $Activated);
      if (!oci_execute($rs)) { echo oci_error($rs); exit();}
      echo "COMPLETE";
      return;
    } else {
      echo "ERROR: Passwords Do Not Match.";
    }
  } 
}
function UserList() {
  global $conn;
  $NameSearch = (isset($_REQUEST["NameSearch"])) ? $_REQUEST["NameSearch"] : "XXXXXXXXX";
  $EmailSearch = (isset($_REQUEST["EmailSearch"])) ? $_REQUEST["EmailSearch"] : "XXXXXXXXX";
  $SQL="SELECT * from WPT_UserProfile 
        WHERE UPPER(UserEmail) like UPPER(:EmailSearch)
           OR UPPER(Surname) like UPPER(:NameSearch)
      ";
  if ($EmailSearch=='') $EmailSearch='~~~~~~';
  if ($NameSearch=='')  $NameSearch='~~~~~~';
  $EmailSearch=preg_replace('/%/','~',$EmailSearch);
  $NameSearch=preg_replace('/%/','~',$NameSearch);
  $EmailSearch="$EmailSearch%";
  $NameSearch="$NameSearch%";
  $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':EmailSearch', $EmailSearch);
  oci_bind_by_name($rs, ':NameSearch', $NameSearch);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  $numrows=0;
  $jsonResult="";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { 
    $numrows++; 
    $jsonResult.="{\"userProfileId\":\"$row[USERPROFILEID]\",
                   \"userEmail\":\"$row[USEREMAIL]\",
                   \"firstName\":\"$row[FIRSTNAME]\",
                   \"secondName\":\"$row[SECONDNAME]\",
                   \"surname\":\"$row[SURNAME]\",
                   \"gender\":\"$row[GENDER]\",
                   \"dateOfBirth\":\"$row[DATEOFBIRTH]\",
                   \"activated\":\"$row[ACTIVATED]\"},";
  }
  $jsonResult=substr($jsonResult,0,-1);
  echo "[$jsonResult]";
}
/*
   Configuration Code Sets
*/
function ConfigureCodes() {
  $option = (isset($_REQUEST["option"])) ? $_REQUEST["option"] : null;
  $TableID = (isset($_REQUEST["TableID"])) ? $_REQUEST["TableID"] : null;
  switch($option) {
   case 1:
    TableList();
    break;
   case 2:
    TableCodeList($TableID);
    break;
  }
}
function TableList() {
  global $conn;
  $SQL="SELECT * from WPT_Tables";
  $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  $numrows=0;
  $jsonResult="";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { 
    $numrows++; 
    $jsonResult.="{\"tableId\":\"".$row["TABLEID"]."\",
                   \"description\":\"".$row["DESCRIPTION"]."\",
                   \"active\":\"".$row["ACTIVE"]."\"},";
  }
  $jsonResult=substr($jsonResult,0,-1);
  echo "[$jsonResult]";
}
function TableCodeList($TableID) {
  global $conn;
  $SQL="SELECT * from WPT_Codes WHERE TableID=:TableID order by Sequence";
  $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':TableID', $TableID);
  if (!oci_execute($rs)) { echo oci_error($rs); exit();}
  $numrows=0;
  $jsonResult="";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { 
    $numrows++; 
    $jsonResult.="{\"codeId\":\"$row[CODEID]\",
                   \"tableId\":\"$row[TABLEID]\",
                   \"code\":\"$row[CODE]\",
                   \"description\":\"$row[DESCRIPTION]\",
                   \"shortDescription\":\"$row[SHORTDESCRIPTION]\",
                   \"hdpEquivalentCode\":\"$row[HDPEQUIVALENTCODE]\",
                   \"indicators\":\"$row[INDICATORS]\",
                   \"sequence\":\"$row[SEQUENCE]\",
                   \"active\":\"$row[ACTIVE]\"},";
  }
  $jsonResult=substr($jsonResult,0,-1);
  echo "[$jsonResult]";
}
/*
   Get/Put Configuration Setting 
*/
function ConfigureSettings() {
  global $portal_config_path;
  $config_html=$portal_config_path."Settings.html";
  $config_php=$portal_config_path."Settings.php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $heading = (isset($_REQUEST["heading"])) ? $_REQUEST["heading"] : null;
    $db_server = (isset($_REQUEST["db_server"])) ? $_REQUEST["db_server"] : null;
    $db_username = (isset($_REQUEST["db_username"])) ? $_REQUEST["db_username"] : null;
    $db_password = (isset($_REQUEST["db_password"])) ? $_REQUEST["db_password"] : null;
    $security_token = (isset($_REQUEST["security_token"])) ? $_REQUEST["security_token"] : null;
    $multi_hospital_database = (isset($_REQUEST["multi_hospital_database"])) ? 
                               $_REQUEST["multi_hospital_database"] : null;
    $master_hospital_code = (isset($_REQUEST["master_hospital_code"])) ? 
                               $_REQUEST["master_hospital_code"] : null;
    $site_domain = (isset($_REQUEST["site_domain"])) ? $_REQUEST["site_domain"] : null;
    $site_url = (isset($_REQUEST["site_url"])) ? $_REQUEST["site_url"] : null;
    $site_name = (isset($_REQUEST["site_name"])) ? $_REQUEST["site_name"] : null;
    $site_email = (isset($_REQUEST["site_email"])) ? $_REQUEST["site_email"] : null;
    $site_logo = (isset($_REQUEST["site_logo"])) ? $_REQUEST["site_logo"] : null;
    $site_timeout = (isset($_REQUEST["site_timeout"])) ? $_REQUEST["site_timeout"] : 3600;
    $google_api_key = (isset($_REQUEST["google_api_key"])) ? $_REQUEST["google_api_key"] : null;
    $file_content="<?php
  define('DB_PERSISTENCY','true');
  define('DB_SERVER','$db_server');
  define('DB_USERNAME','$db_username');
  define('DB_PASSWORD','$db_password');
  define('SECURITY_TOKEN','$security_token');
  define('MULTI_HOSPITAL_DATABASE','$multi_hospital_database');
  define('MASTER_HOSPITAL_CODE','$master_hospital_code');
  define('SITE_DOMAIN','$site_domain');
  define('SITE_URL','$site_url');
  define('SITE_NAME','$site_name');
  define('SITE_EMAIL','$site_email');
  define('SITE_LOGO','$site_logo');
  define('SITE_TIMEOUT',$site_timeout);
  define('GOOGLE_API_KEY','$google_api_key');
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"db_server\":\"$db_server\",
                     \"db_username\":\"$db_username\",
                     \"db_password\":\"$db_password\",
                     \"security_token\":\"$security_token\",
                     \"multi_hospital_database\":\"$multi_hospital_database\",
                     \"master_hospital_code\":\"$master_hospital_code\",
                     \"site_domain\":\"$site_domain\",
                     \"site_url\":\"$site_url\",
                     \"site_name\":\"$site_name\",
                     \"site_email\":\"$site_email\",
                     \"site_logo\":\"$site_logo\",
                     \"site_timeout\":\"$site_timeout\",
                     \"google_api_key\":\"$google_api_key\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}
/*
   Get/Put Registration Success
*/
function ConfigureRegistration() {
  global $portal_config_path;
  $config_html=$portal_config_path."RegistrationSuccess.html";
  $config_php=$portal_config_path."RegistrationSuccess.php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $heading = (isset($_REQUEST["heading"])) ? $_REQUEST["heading"] : null;
    $content = (isset($_REQUEST["content"])) ? $_REQUEST["content"] : null;
    $content=preg_replace("/\"/","'",$content);
    $file_content="<?php
function RegistrationText() {
  \$msgBody = \"$content\";
  return \$msgBody;
}
function RegistrationHeading() {
  return \"$heading\";
}
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"heading\":\"$heading\",\"content\":\"$content\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}
/*
   Get/Put Consent Policy
*/
function ConfigureConsent() {
  global $portal_config_path;
  $config_html=$portal_config_path."ConsentPolicy.html";
  $config_php=$portal_config_path."ConsentPolicy.php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $heading = (isset($_REQUEST["heading"])) ? $_REQUEST["heading"] : null;
    $content = (isset($_REQUEST["content"])) ? $_REQUEST["content"] : null;
    $content=preg_replace("/\"/","'",$content);
    $file_content="<?php
function ConsentText() {
  \$msgBody = \"$content\";
  return \$msgBody;
}
function ConsentHeading() {
  return \"$heading\";
}
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"heading\":\"$heading\",\"content\":\"$content\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}
/*
   Get/Put Terms and Data Usage Policy
*/
function ConfigureTerms() {
  global $portal_config_path;
  $config_html=$portal_config_path."TermsPolicy.html";
  $config_php=$portal_config_path."TermsPolicy.php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $heading = (isset($_REQUEST["heading"])) ? $_REQUEST["heading"] : null;
    $content = (isset($_REQUEST["content"])) ? $_REQUEST["content"] : null;
    $content=preg_replace("/\"/","'",$content);
    $file_content="<?php
function TermsText() {
  \$msgBody = \"$content\";
  return \$msgBody;
}
function TermsHeading() {
  return \"$heading\";
}
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"heading\":\"$heading\",\"content\":\"$content\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}

function ConfigureEmail($filename) {
  global $portal_config_path;
  $config_html=$portal_config_path.$filename.".html";
  $config_php=$portal_config_path.$filename.".php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $from = (isset($_REQUEST["from"])) ? $_REQUEST["from"] : null;
    $subject = (isset($_REQUEST["subject"])) ? $_REQUEST["subject"] : null;
    $content = (isset($_REQUEST["content"])) ? $_REQUEST["content"] : null;
    $content=preg_replace("/\"/","'",$content);
    $file_content="<?php
function MessageBody(\$FirstName,\$Surname,\$Email,\$Password,\$LoginURL,\$ActivateURL,\$EmailLogo) {
  \$msgBody = \"$content\";
  return \$msgBody;
}
function MessageSubject() {
  return \"$subject\";
}
function MessageFrom() {
  return \"$from\";
}
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"from\":\"$from\",\"subject\":\"$subject\",\"content\":\"$content\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}
function MultiHospitalEmail($filename) {
  global $portal_config_path;
  $config_html=$portal_config_path.$filename.".html";
  $config_php=$portal_config_path.$filename.".php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $from = (isset($_REQUEST["from"])) ? $_REQUEST["from"] : null;
    $subject = (isset($_REQUEST["subject"])) ? $_REQUEST["subject"] : null;
    $content = (isset($_REQUEST["content"])) ? $_REQUEST["content"] : null;
    $content=preg_replace("/\"/","'",$content);
    $file_content="<?php
function MessageBody() {
   global \$FirstName,\$Surname,\$Email,\$Password,\$LoginURL,\$ActivateURL,\$EmailLogo,\$HospitalName;
  \$msgBody = \"$content\";
  return \$msgBody;
}
function MessageSubject() {
  return \"$subject\";
}
function MessageFrom() {
  return \"$from\";
}
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"from\":\"$from\",\"subject\":\"$subject\",\"content\":\"$content\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}
function UpdateCode() {
  global $conn;
  $TableID = (isset($_REQUEST["TableID"])) ? $_REQUEST["TableID"] :null; 
  $CodeID = (isset($_REQUEST["CodeID"])) ? $_REQUEST["CodeID"] :null; 
  $Code = (isset($_REQUEST["Code"])) ? $_REQUEST["Code"] :null; 
  $Description = (isset($_REQUEST["Description"])) ? $_REQUEST["Description"] :null; 
  $ShortDescription = (isset($_REQUEST["ShortDescription"]))?$_REQUEST["ShortDescription"] :null; 
  $Indicators = (isset($_REQUEST["Indicators"]))?$_REQUEST["Indicators"] :null; 
  $Sequence = (isset($_REQUEST["Sequence"])) ? $_REQUEST["Sequence"] :null; 
  $HDPEquivalentCode=(isset($_REQUEST["HDPEquivalentCode"]))?$_REQUEST["HDPEquivalentCode"]:null; 
  $Active = (isset($_REQUEST["Active"])) ? $_REQUEST["Active"] :'N'; 
  if ($CodeID == null) {
    $SQL="INSERT INTO WPT_Codes 
          ( Code, TableID, Description, ShortDescription, Indicators, Sequence,
            HDPEquivalentCode, Active)
          VALUES 
          (:Code,:TableID,:Description,:ShortDescription,:Indicators,:Sequence,
           :HDPEquivalentCode,:Active)";
    $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':Code', $Code);
    oci_bind_by_name($rs, ':TableID', $TableID);
    oci_bind_by_name($rs, ':Description', $Description);
    oci_bind_by_name($rs, ':ShortDescription', $ShortDescription);
    oci_bind_by_name($rs, ':Indicators', $Indicators);
    oci_bind_by_name($rs, ':Sequence', $Sequence);
    oci_bind_by_name($rs, ':HDPEquivalentCode', $HDPEquivalentCode);
    oci_bind_by_name($rs, ':Active', $Active);
    if (!oci_execute($rs)) { echo oci_error($rs); exit();}
    echo "COMPLETE";
    return;
  } else {
    $SQL="SELECT * from WPT_Codes WHERE CodeID=:CodeID";
    $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':CodeID', $CodeID);
    if (!oci_execute($rs)) { echo oci_error($rs); exit();}
    $numrows=0;
    while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { 
      $rsUserProfile=$row;
      $numrows++; 
    }
    if ($numrows==1) {
      $SQL="UPDATE WPT_Codes SET 
              Code=:Code,
              Description=:Description,
              ShortDescription=:ShortDescription,
              Indicators=:Indicators,
              Sequence=:Sequence,
              HDPEquivalentCode=:HDPEquivalentCode,
              Active=:Active
            WHERE CodeID=:CodeID";
      $rs=oci_parse($conn,$SQL) or die ("Error Query [".$SQL."]");
      oci_bind_by_name($rs, ':CodeID', $CodeID);
      oci_bind_by_name($rs, ':Code', $Code);
      oci_bind_by_name($rs, ':Description', $Description);
      oci_bind_by_name($rs, ':ShortDescription', $ShortDescription);
      oci_bind_by_name($rs, ':Indicators', $Indicators);
      oci_bind_by_name($rs, ':Sequence', $Sequence);
      oci_bind_by_name($rs, ':HDPEquivalentCode', $HDPEquivalentCode);
      oci_bind_by_name($rs, ':Active', $Active);
      if (!oci_execute($rs)) { echo oci_error($rs); exit();}
      echo "COMPLETE";
      return;
    } 
  } 
  echo "ERROR: Invalid Code ID.$CodeID";
  return;
}
/*
   Get/Put Final Consent Policy
*/
function ConfigureFinalConsent() {
  global $portal_config_path;
  $config_html=$portal_config_path."ConsentFinal.html";
  $config_php=$portal_config_path."ConsentFinal.php";
  if ($_SERVER['REQUEST_METHOD']=="POST") {
    $heading = (isset($_REQUEST["heading"])) ? $_REQUEST["heading"] : null;
    $content = (isset($_REQUEST["content"])) ? $_REQUEST["content"] : null;
    $content=preg_replace("/\"/","'",$content);
    $file_content="<?php
function ConsentFinalText() {
  \$msgBody = \"$content\";
  return \$msgBody;
}
function ConsentFinalHeading() {
  return \"$heading\";
}
?>";
    file_put_contents($config_php,$file_content);
    $html_content="[{\"heading\":\"$heading\",\"content\":\"$content\"}]";
    file_put_contents($config_html,$html_content);
    echo "COMPLETE";
    return;
  }
  echo preg_replace("/\n/","",file_get_contents($config_html));
}
?>
