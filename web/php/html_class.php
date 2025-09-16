<?php
/*   ****  DEPRECATED ?????   ****
.----------------------------------------------------------------------
. Program       : html_class.php
.
. Function      : Include for outputing standard HTML headers
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.----------------------------------------------------------------------
PRGID     INIT      "html_class.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Standard Header Include"
.----------------------------------------------------------------------
*/
class Page  
{
  var $header;
  var $body;
  var $footer;

  function __construct($title="")
  {
    $this->header  = "<html>\n<head>\n<title>".$title."</title>\n";
    $this->header .= "<link rel=\"stylesheet\" href=\"../html/standard.css\" type=\"text/css\">\n";
    $this->header .= "<link rel=\"stylesheet\" href=\"../html/custom.css\" type=\"text/css\">\n";
    $this->header .= "<script type=\"text/javascript\" src=\"../js/Standard.js\"></script>\n";
    $this->header .= "<script type=\"text/javascript\" src=\"../js/Custom.js\"></script>\n";
    $this->header .= "<script type=\"text/javascript\" src=\"../js/PatientSortWidget.js\"></script>\n";
    $this->header .= "<script type=\"text/javascript\" src=\"../js/RecentPatients.js\"></script>\n";
    $this->header .= "<script type=\"text/javascript\" src=\"../menu/stmenu.js\"></script>\n";
    $this->header .= "</head>\n<body>\n";

    $this->body    = "";

    $this->footer  = "</body>\n</html>\n";
  }

  function addHtml($text)
  {
    $this->body .= $text."\n"; 
  }

  function render()
  {
     echo $this->header;
     echo $this->body;
     echo $this->footer;
  }
}  
?>
