<?php
/*
.----------------------------------------------------------------------
. Program       : Standard.class.php
.
. Function      : Standard library that contains helper functions
.
. Modifications :
.----------------------------------------------------------------------
. V10.02.00 25/07/2011  Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "Standard.class.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Standard Library"
.
.----------------------------------------------------------------------
*/

class Standard {
  private function __construct(){} //prevent class from instantiating an object

  /*********************************************************************
   * converts a query string bool value to bool value 0 || 1 
   * @param :  $value = the querystring value
   * @return:  bool value
   ********************************************************************/
  public static function QueryStringToBool($value) {
    $temp = $value;
    if($temp == "" || $temp == false ){
      return 0;
    }else{
      return 1;
    }
  }
}

?>
