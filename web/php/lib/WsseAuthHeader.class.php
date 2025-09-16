<?php
/*
.----------------------------------------------------------------------
. Program       : WsseAuthHeader.class.php
.
. Function      : SoapClient WCF Authentication header
.
. Modifications :
.----------------------------------------------------------------------
. V10.02.00 25/07/2011  Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "WsseAuthHeader.class.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "SoapClient WCF Authentication header"
.
.----------------------------------------------------------------------
*/

/**************************************************************
* needed for WCF authentication
* header for SOAP communication that passes username and password
***************************************************************/
class WsseAuthHeader extends SoapHeader{
  private $wss_ns = 'http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd';

  public function __construct($user, $pass, $ns = null) {
    if ($ns){
      $this->wss_ns = $ns;
    }

    $auth = new stdClass();
    $auth->Username = new SoapVar($user, XSD_STRING, NULL, $this->wss_ns, NULL, $this->wss_ns);
    $auth->Password = new SoapVar($pass, XSD_STRING, NULL, $this->wss_ns, NULL, $this->wss_ns);
    $username_token = new stdClass();
    $username_token->UsernameToken = new SoapVar($auth, SOAP_ENC_OBJECT, NULL,
                                                 $this->wss_ns, 'UsernameToken', $this->wss_ns);
    $security_sv = new SoapVar(
                                new SoapVar($username_token, SOAP_ENC_OBJECT, NULL,
                                $this->wss_ns, 'UsernameToken', $this->wss_ns),
                                SOAP_ENC_OBJECT, NULL, $this->wss_ns, 'Security', $this->wss_ns);

    parent::__construct($this->wss_ns, 'Security', $security_sv, true);
  }
}
?>
