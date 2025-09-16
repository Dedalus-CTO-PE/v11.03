<?php
/*
.----------------------------------------------------------------------
. Program       : datefilter.php
.
. Function      : Standard Date Filter for List Pages
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "datefilter.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Date Filter Include"
.----------------------------------------------------------------------
*/
  $SelectDate = (isset($_REQUEST["SelectDate"])) ? $_REQUEST["SelectDate"] : null;
  $SelectFormat = (isset($_REQUEST["SelectFormat"])) ? $_REQUEST["SelectFormat"] : null;
  if ($SelectFormat=="") {
    $SelectFormat="1";
  }
  if ($SelectDate=="") {
    $SelectDate  = mktime(0, 0, 0, date("m")  , date("d"), date("Y")); 
  } 
  else {
    $SelectDate  = mktime(0, 0, 0, substr($SelectDate,4,2)  , substr($SelectDate,6,2), substr($SelectDate,0,4)); 
  }
  switch ($SelectFormat) {
    case "1":
      $DailyImage="DayIcon.gif";
      $WeeklyImage="WeekIcon.gif";
      $MonthlyImage="MonthIcon.gif";
      $ListFromDate=$SelectDate;
      $year = date('Y',$SelectDate);
      $month = date('n',$SelectDate);
      $day = date('d',$SelectDate); 
      $ListToDate=mktime(0,0,0,$month,$day+1,$year);
      break;
    case "2":
      $DailyImage="DayIcon.gif";
      $WeeklyImage="WeekIcon.gif";
      $MonthlyImage="MonthIcon.gif";
      $ListToDate=$SelectDate;
      $year = date('Y',$SelectDate);
      $month = date('n',$SelectDate);
      $day = date('d',$SelectDate); 
      $ListFromDate=mktime(0,0,0,$month,$day-7,$year);
      break;
    case "3":
      $DailyImage="DayIcon.gif";
      $WeeklyImage="WeekIcon.gif";
      $MonthlyImage="MonthIcon.gif";
      $year = date('Y',$SelectDate);
      $month = date('n',$SelectDate);
      $day = date('d',$SelectDate); 
      $SelectDate  = mktime(0, 0, 0, $month,1,$year); 
      $ListFromDate=$SelectDate;
      $ListToDate=mktime(0,0,0,$month+1,1,$year);
      break;
  } 

function ListDateFilter() {
  global $SelectFormat, $SelectDate,$DailyImage,$WeeklyImage,$MonthlyImage;
  echo "\n <input type=hidden name=SelectFormat value='".$SelectFormat."'>";
  echo "\n <input type=button class=SmallButton value='<<'";
  echo " onclick='SelectDate.selectedIndex--;SelectPeriod.submit();'>";
  echo "\n <select name=SelectDate onchange='this.form.submit();'>";
  SelectDateOptions($SelectDate,$SelectFormat);
  echo "\n </select>";
  echo "\n <input type=button class=SmallButton value='>>'";
  echo " onclick='SelectDate.selectedIndex++;SelectPeriod.submit();'>";
  echo "\n <img src='../images/FormCalendar.png'";
  echo "\n onclick='DatePopUp(SelectPeriod.SelectDate);' alt='Select Date from Calander'>";
  echo "\n <img src='../images/$DailyImage' border=0";
  echo "\n onclick='SelectPeriod.SelectFormat.value=1;SelectPeriod.submit();' alt='Daily View'>";
  echo "\n <img src='../images/$WeeklyImage' border=0";
  echo "\n onclick='SelectPeriod.SelectFormat.value=2;SelectPeriod.submit();' alt='Weekly View'>";
  echo "\n <img src='../images/$MonthlyImage' border=0";
  echo "\n onclick='SelectPeriod.SelectFormat.value=3;SelectPeriod.submit();' alt='Monthly View'>";
  return;
}
function SelectDateOptions($SelectDate,$SelectFormat) {
  global $SelectFormat, $SelectDate;
  $Today=$SelectDate;
  switch ($SelectFormat) {
    case "1":
      SelectDailyOptions($Today);
      break;
    case "2":
      SelectWeeklyOptions($Today);
      break;
    case "3":
      SelectMonthlyOptions($Today);
      break;
  } 
  return;
} 
function SelectMonthlyOptions($SelectedDate) {
  $t=$SelectedDate;
  $year = date('Y',$SelectedDate);
  $month = date('n',$SelectedDate); // current month
  for ($x = -9; $x < 9; $x++) {
    $s="";
    if ($x==0) $s="selected";
    $v=date('Ymd', mktime(0,0,0,$month + $x,1,$year));
    $n=date('M Y', mktime(0,0,0,$month + $x,1,$year));
    echo "<option value='$v' $s>$n</option>";
  }
}
function SelectDailyOptions($SelectedDate) {
  $year = date('Y',$SelectedDate);
  $month = date('n',$SelectedDate); // current month
  $day = date('d',$SelectedDate); // current month
  for ($x = -9; $x < 9; $x++) {
    $s="";
    if ($x==0) $s="selected";
    $v=date('Ymd', mktime(0,0,0,$month,$day + $x,$year));
    $n=date('d M Y', mktime(0,0,0,$month,$day + $x,$year));
    echo "<option value='$v' $s>$n</option>";
  }
}
function SelectWeeklyOptions($SelectedDate) {
  $year = date('Y',$SelectedDate);
  $month = date('n',$SelectedDate); // current month
  $day = date('d',$SelectedDate); // current month
  for ($x = -9; $x < 9; $x++) {
    $s="";
    if ($x==0) $s="selected";
    $v=date('Ymd', mktime(0,0,0,$month,$day + $x*7,$year));
    $n=date('d M Y', mktime(0,0,0,$month,$day + $x*7,$year));
    echo "<option value='$v' $s>Week Ending $n</option>";
  }
}
function iPadListDateFilter() {
  global $SelectFormat, $SelectDate,$DailyImage,$WeeklyImage,$MonthlyImage;
  $ViewDay="";
  $ViewWeek="";
  $ViewMonth="";
  if ($SelectFormat=="1") $ViewDay="selected";
  if ($SelectFormat=="2") $ViewWeek="selected";
  if ($SelectFormat=="3") $ViewMonth="selected";
  echo "\n <input type=hidden name=SelectFormat value='".$SelectFormat."'>";
  echo "\n <select name=SelectFormat class=selectMenu onchange='this.form.submit();'>";
  echo "\n <option value=1 ".$ViewDay.">View By Day</option>";
  echo "\n <option value=2 ".$ViewWeek.">View By Week</option>";
  echo "\n <option value=3 ".$ViewMonth.">View By Month</option>";
  echo "\n </select>";
  echo "\n <select name=SelectDate class=selectMenu onchange='this.form.submit();'>";
  SelectDateOptions($SelectDate,$SelectFormat);
  echo "\n </select>";
  return;
}
?>
