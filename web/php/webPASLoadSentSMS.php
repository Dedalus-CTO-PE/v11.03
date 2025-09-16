<?php
/*
.----------------------------------------------------------------------
. Program       : webPASLoadSentSMS.php
.
. Function      : Load SMS sent details.
.
. Modifications :
.                 V10.08.01 29/08/2016 Ebon Clements  TSK 0294154
.                           Open all target files with .sms extension
.                 V10.08.00 04/05/2016 Ebon Clements  TSK 0294154
.                           Created
.----------------------------------------------------------------------
*/

  $approot = $argv[1];
  $inifile = $approot . "/etc/smsphp.ini";

 if (file_exists($inifile) && is_readable($inifile)) {
    $ini = parse_ini_file($inifile);
 } else {
    error_log("FATAL: the $inifile file doesn't seem to exist or is not readable\n!");
    exit(1);
  }

  $cd_dir = $ini['webpas_tmp_dir'];
  $target = $ini['sms_target_dir'];
  $processed = $ini['sms_processed_dir'];

  $ignore = array('.', '..');
  $filetype = '.sms';
  $directories = array_diff(scandir($target), $ignore);
  $file_name=$cd_dir."sentsms1.txt";
  $fh = fopen($file_name, 'w');
  if(!$fh) {
    error_log("can't open sms sent file ".$cd_dir."sentsms1.txt");
    exit(1);
  }
   
  foreach($directories as $value)
  {
     if(is_file($target.$value) and strpos($value, $filetype))
     {
        fwrite($fh, $value."\n");
        copy($target.$value, $processed.$value);
        rename($target.$value, $cd_dir.$value);
     }
  }
?>
