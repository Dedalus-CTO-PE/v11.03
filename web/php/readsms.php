<?php
/*
.----------------------------------------------------------------------
. Program       : readsms.php
.
. Function      : Read SMS Response Messages from Message Media Service
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "readsms.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Read SMS Response Messages from Message Media Service"
.----------------------------------------------------------------------
*/
  require "setup.php";
  require "html_class.php";
  require "SmsInterface.inc";
 
  $Page = new Page();
 
  $si   = new SmsInterface();
 
  $html = "";
  $emsg = "";
 

  if (!$si->connect("iSOFTHealth004", "chrisapi", true, false))
  {
    $emsg = "Unable to connect to the SMS server";
  }
  else if (($srl = $si->checkReplies ()) == NULL) 
  {
    $emsg = "Unable to read messages from the SMS server.";
    if ( $si->getResponseMessage() != NULL)
      $emsg .= "<br />Reason: " . $si->getResponseMessage();
  }
 
  if ($emsg == "")
  {
     $html = count($srl) ? getMessages() : "<p>No messages waiting on the SMS server</p>" ;
  }
  else
  {
     $html = "<p>Error: ". $emsg . "</p>";
  }
  
  $Page->addHtml($html);
  $Page->render(); 
  oci_close($conn);
 

function getMessages()
{
  global $conn, $si, $srl;

  $html  = "<table><tr><td class=\"HeadingCell\">Message ID</td>";
  $html .= "<td class=\"HeadingCell\">Phone No.</td>";
  $html .= "<td class=\"HeadingCell\">Message</td></tr>\n";

  foreach ($srl as $sr) 
  {

    $messageID = $sr->messageID;
    $mobileNo  = $sr->phoneNumber;

    $html .= "<tr><td>". $sr->messageID ."</td><td>" . $sr->phoneNumber ."</td><td>";

    if ($sr->status == MessageStatus::none()) 
    {
      $messageText = $sr->message;
      $html .= "$sr->message"; 
    }
    else if ($sr->status == MessageStatus::pending()) 
    {
      $messageText = "Message delivery pending";
      $html .= "Message delivery pending"; 
    }
    else if ($sr->status == MessageStatus::delivered()) 
    {
      $messageText = "Message successfully delivered";
      $html .=  "Message successfully delivered";
    }
    else 
    { 
       $messageText = "Message delivery failed";
       $html .= "Message delivery failed"; 
    }

    $html .= "</td></tr>\n";

    // prepare for smsrecaf row insert

    $date = date("Ymd");
    $time = date("H:i");  
    $messageTextA = substr($messageText,0,160);
    $messageTextB = " ";
    $messageTextC = " ";
    $messageTextD = " ";
    $messageTextE = " ";
    $messageTextF = " ";
    if (strlen($messageText)>160) $messageTextB = substr($messageText,160,160);
    if (strlen($messageText)>320) $messageTextC = substr($messageText,320,160);
    if (strlen($messageText)>480) $messageTextD = substr($messageText,480,160);
    if (strlen($messageText)>640) $messageTextE = substr($messageText,640,160);
    if (strlen($messageText)>800) $messageTextF = substr($messageText,800,160);


    $qry = "insert into smsrecaf (smrephn,smremid,smredat,smretim,
                               smremsa,smremsb,smremsc,smremsd,smremse,smremsf,smrespa,lf)
            values('" . $mobileNo . "','"
            .$messageID."','"
            .$date."','"
            .$time."','"
            .$messageTextA."','"
            .$messageTextB."','"
            .$messageTextC."','"
            .$messageTextD."','"
            .$messageTextE."','"
            .$messageTextF."','"
            ." ',' ')";

    $stmt = oci_parse($conn,$qry);
    oci_execute($stmt);

  }
  $html .= "</table>\n";
  return $html;
}

