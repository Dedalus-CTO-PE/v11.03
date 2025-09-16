<?php
/*
.----------------------------------------------------------------------
. Program       : functions.php
.
. Function      : Forms Toolkit Common Functions Include
.
. Modifications : 
.
. V10.12.01  15.02.2018 B.G.Ackland
.            Fixed for Multi Hospital Configuration.
.
. V10.06.01 25.09.2015 B.G.Ackland
.           Revised for long username security model
.           Revised SQL to properly bind parameters
.----------------------------------------------------------------------
PRGID     INIT      "functions.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Common Functions"
.----------------------------------------------------------------------
*/
function CareOutcomeOptionList($SelectedCodeID) {
  $SQL="Select OutcomeID,Description from CPN_Outcomes where Active='T' Order By Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCodeID==$row[0]) {
      print " selected";
    } 
    print " >$row[1]</option>";
  }
  return;
} 
/* Note Type Select option list for Form Class Maintenance */
function CareFrequencyOptionList($SelectedCodeID) {
  $SQL="Select FrequencyID,Description from CPN_Frequencies where Active='T' Order By Sequence";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCodeID==$row[0]) {
      print " selected";
    } 
    print " >$row[1]</option>";
  }
  return;
} 
/* Note Type Select option list for Form Class Maintenance */
function CareDomainOptionList($SelectedCodeID) {
  $SQL="Select DomainID,Description from CPN_Domains where Active='T' Order By Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCodeID==$row[0]) {
      print " selected";
    } 
    print " >$row[1]</option>";
  }
  return;
} 
/* Theaatre Select option list for Form Class Maintenance */
function oprSelectOptionList($SelectedCodeID) {
  global $ibcnmhos,$wbsehosp;
  $SQL="Select oprmroom,oprmdesc from opropraf where oprmstat='0'";
  if ($ibcnmhos=="1") {
    $SQL=$SQL." AND OPRMHOSP=:HOSPITAL ";
  }
  $SQL=$SQL." Order By oprmdesc";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  if ($ibcnmhos=="1") { oci_bind_by_name($rs, ':HOSPITAL', $wbsehosp); }
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCodeID==$row[0]||$SelectedCodeID==$row[1]) {
      print " selected";
    } 
    print " >$row[1]</option>";
  }
  return;
} 
/* Note Type Select option list for Form Class Maintenance */
function otySelectOptionList($SelectedCodeID) {
  $SQL="Select obtytype,obtydesc from obstypaf where obtyactv='1' Order By obtydesc";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCodeID==$row[0]) {
      print " selected";
    } 
    print " >$row[1]</option>";
  }
  return;
} 
function ntySelectOptionList($SelectedCodeID) {
  $SQL="Select obcctyp,obccdes from obscncaf Order By obccdes";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCodeID==$row[0]) {
      print " selected";
    } 
    print " >$row[1]</option>";
  }
  return;
} 
function HosCodeList($Hospital,$SelectedCodeID) {
  $SQL="SELECT PTHSHOSP,PTHSNAME 
        FROM pathspaf 
        Order By PTHSNAME";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  return $rs;
}
function hosCodeDescription($CodeID) {
  if ($CodeID=="") return;
  $SQL="Select PTHSNAME from pathspaf Where PTHSHOSP=:CodeID'";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeID', $CodeID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row[0];
} 
function hosCodeNames($CodeIDs) {
  $NameList="";
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i=$i+1) {
    if ($CodeList[$i]!="") {
      $SQL="Select PTHSNAME from pathspaf Where PTHSHOSP=:CodeID";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
      oci_execute($rs);
      if ($i>0) { $NameList=$NameList.";"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      $NameList=$NameList.$row[0];
    } 
  }
  $function_ret=$NameList;
  return $function_ret;
} 
function hosCodeDescriptions($CodeIDs) {
  if (!isset($CodeIDs)) {
    return;
  } 
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i++) {
    $SQL="Select PTHSNAME from pathspaf Where PTHSHOSP=:CodeID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
    oci_execute($rs);
    if ($i>0) { print "<br>"; } 
    $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    print $row[0];
  }
} 
function hosSelectOptionList($Hospital,$SelectedCodeID) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=HosCodeList($Hospital,$SelectedCodeID);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
      if ($SelectedCodeList[$i]==$row[0]) {
        print " selected";
      } 
    }
    print " >$row[1]</option>";
  }
  return;
} 
function hosRadioButtonList($Hospital,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=HosCodeList($Hospital,$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n<td><input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";
      }
      print ">".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]." <input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";  
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function hosCheckBoxComboList($Hospital,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=HosCodeList($Hospital,$SelectedCodeID);
  $iHeight=21*$iHeight;
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectMultiple($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  }
  print "\n <div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:".$iHeight."px;"."width:".$iWidth."px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "<input type=checkbox name=".$FieldName."[] tabindex=".$TabIndex." value='".$row[0]."'";
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) 
      if ($SelectedCodeList[$i]==$row[0]) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function hosRadioButtonComboList($Hospital,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=HosCodeList($Hospital,$SelectedCodeID);
  $iHeight=21*$iHeight;
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectOne($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  }
  print "\n<div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:$iHeight px;width:$iWidth px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS+OCI_RETURN_NULLS))  {
    print "<input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
    if ($SelectedCodeID==$row[0]) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function hosCheckBoxList($Hospital,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=HosCodeList($Hospital,$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr valign=middle>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n <td>";
      print "<input type=checkbox name=".$FieldName."[] tabindex=$TabIndex. value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";
      }
      print "></td><td>".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]."</td><td><input type=checkbox name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0])  print " checked";
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function CategoryOptionList($SelectedCategory) {
  $SQL="SELECT TCODE,TDESC ||'('||TCODE||')'
        FROM patcodes 
        WHERE PTCOACTV!='I' 
        AND ACODE = ' ' 
        Order By TDESC";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($SelectedCategory==$row[0]) {
      print " selected";
    }
    print " >$row[1]</option>";
  }
  return;
}
function usrCodeDescription($CodeID) {
  if ($CodeID=="") return;
  $SQL="Select WBSENAM  from websecaf Where wbseuid=:CodeID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeID', $CodeID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row[0];
} 
function usrCodeNames($CodeIDs) {
  $NameList="";
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i=$i+1) {
    if ($CodeList[$i]!="") {
      $Category=substr($CodeList[$i],0,2);
      $Code=substr($CodeList[$i],2,3);
      $SQL="Select WBSENAM  from websecaf Where wbseuid=:CodeID";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
      oci_execute($rs);
      if ($i>0) { $NameList=$NameList.";"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      $NameList=$NameList.$row[0];
    } 
  }
  $function_ret=$NameList;
  return $function_ret;
} 
function usrCodeDescriptions($CodeIDs) {
  if (!isset($CodeIDs)) {
    return;
  } 
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i++) {
    $SQL="Select WBSENAM  from websecaf Where wbseuid=:CodeID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
    oci_execute($rs);
    if ($i>0) { print "<br>"; } 
    $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    print $row[0];
  }
} 
function hcpCodeDescription($CodeID) {
  if ($CodeID=="") return;
  $SQL="Select PMHCSNAM||', '||PMHCTITL||' '||PMHCGNAM from pmshcpaf Where PMHCHCPC=:CodeID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeID', $CodeID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row[0];
} 
function hcpCodeNames($CodeIDs) {
  $NameList="";
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i=$i+1) {
    if ($CodeList[$i]!="") {
      $Category=substr($CodeList[$i],0,2);
      $Code=substr($CodeList[$i],2,3);
      $SQL="Select PMHCSNAM||', '||PMHCTITL||' '||PMHCGNAM from pmshcpaf Where PMHCHCPC=:CodeID";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
      oci_execute($rs);
      if ($i>0) { $NameList=$NameList.";"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      $NameList=$NameList.$row[0];
    } 
  }
  $function_ret=$NameList;
  return $function_ret;
} 
function hcpCodeDescriptions($CodeIDs) {
  if (!isset($CodeIDs)) {
    return;
  } 
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i++) {
    $SQL="Select PMHCSNAM||', '||PMHCTITL||' '||PMHCGNAM from pmshcpaf Where PMHCHCPC=:CodeID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
    oci_execute($rs);
    if ($i>0) { print "<br>"; } 
    $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    print $row[0];
  }
} 
function catCodeDescription($CodeID) {
  if ($CodeID=="") return;
  $Category=substr($CodeID,0,2);
  $Code=substr($CodeID,2,3);
  $SQL="Select PTCDLDES from patcodes Where TCODE=:Category AND ACODE=:Code";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':Category"', $Category);
  oci_bind_by_name($rs, ':Code', $Code);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row["PTCDLDES"];
} 
function catCodeNames($CodeIDs) {
  $NameList="";
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i=$i+1) {
    if ($CodeList[$i]!="") {
      $Category=substr($CodeList[$i],0,2);
      $Code=substr($CodeList[$i],2,3);
      $SQL="Select PTCDLDES from patcodes Where TCODE=:Category AND ACODE=:Code";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':Category"', $Category);
      oci_bind_by_name($rs, ':Code', $Code);
      oci_execute($rs);
      if ($i>0) { $NameList=$NameList.";"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      $NameList=$NameList.$row["PTCDLDES"];
    } 
  }
  $function_ret=$NameList;
  return $function_ret;
} 
function catCodeDescriptions($CodeIDs) {
  if (!isset($CodeIDs)) {
    return;
  } 
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i++) {
    $Category=substr($CodeList[$i],0,2);
    $Code=substr($CodeList[$i],2,3);
    $SQL="Select PTCDLDES from patcodes Where TCODE=:Category AND ACODE=:Code";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':Category"', $Category);
    oci_bind_by_name($rs, ':Code', $Code);
    oci_execute($rs);
    if ($i>0) { print "<br>"; } 
    $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    print $row["PTCDLDES"];
  }
} 
function CatCodeList($Category,$SelectedCodeID) {
  global $ibcnmhos,$wbsehosp;
  $SQL="SELECT TCODE||ACODE,PTCDLDES 
        FROM patcodes 
        WHERE TCODE=:TCODE
        AND PTCOACTV!='I' 
        AND ACODE!= ' ' ";
  if ($ibcnmhos=="1") {
    $SQL=$SQL." AND (PTCDHOSS!='1' OR 
            EXISTS (
            SELECT '1' FROM MLTCODAF 
            WHERE MLCOHOSP=:HOSPITAL
            AND MLCOTCOD=TCODE 
            AND MLCOACOD=ACODE ) ) ";
  }
  $SQL=$SQL." Order By PTCDLDES";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':TCODE', $Category);
  if ($ibcnmhos=="1") {
    oci_bind_by_name($rs, ':HOSPITAL', $wbsehosp);
  }
  oci_execute($rs);
  return $rs;
}
function catSelectOptionList($Category,$SelectedCodeID) {
  global $ibcnmhos,$wbsehosp;
  if ($Category=="") return;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=CatCodeList($Category,$SelectedCodeID);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
      if ($SelectedCodeList[$i]==$row[0]) {
        print " selected";
      } 
    }
    print " >$row[1]</option>";
  }
  return;
} 
function catRadioButtonList($Category,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  if ($Category=="") return;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=CatCodeList($Category,$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n<td><input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";
      }
      print ">".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]." <input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";  
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function catCheckBoxComboList($Category,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  if ($Category=="") return;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=CatCodeList($Category,$SelectedCodeID);
  $iHeight=21*$iHeight;
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectMultiple($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  }
  print "\n <div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:".$iHeight."px;"."width:".$iWidth."px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "<input type=checkbox name=".$FieldName."[] tabindex=".$TabIndex." value='".$row[0]."'";
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) 
      if ($SelectedCodeList[$i]==$row[0]) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function catRadioButtonComboList($Category,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  if ($Category=="") return;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=CatCodeList($Category,$SelectedCodeID);
  $iHeight=21*$iHeight;
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectOne($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  }
  print "\n<div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:$iHeight px;width:$iWidth px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS+OCI_RETURN_NULLS))  {
    print "<input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
    if ($SelectedCodeID==$row[0]) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function catCheckBoxList($Category,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  if ($Category=="") return;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=CatCodeList($Category,$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr valign=middle>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n <td>";
      print "<input type=checkbox name=".$FieldName."[] tabindex=$TabIndex. value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";
      }
      print "></td><td>".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]."</td><td><input type=checkbox name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0])  print " checked";
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function FormatDate($DateValue,$DateFormat) {
  $datetime=strtotime($DateValue);
  if ($DateFormat=="mmm yyyy") {
    $function_ret=date("M Y",$datetime);
  } 
  if ($DateFormat=="dd mmm yyyy") {
    $function_ret=date("d M Y",$datetime);
  } 
  if ($DateFormat=="dd mmm yyyy hh:mm") {
    $function_ret=date("d M Y H:i",$datetime);
  } 
  return $function_ret;
} 
function AutotextPageOptionList($SelectedField) {
  $SQL="Select * from FTK_AutotextPages WHERE Active='T' Order by Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "<option value=".$row["PAGEID"];
    if (trim($row["PAGEID"])==trim($SelectedField)) { print " selected>"; }
      else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function GetCommonElement($SelectedElementID) {
  global $urnumber,$admissno,$ParentFormID,$FormTypeID,$FormClassID;
  $SQL="SELECT * FROM FTK_CommonElements WHERE ElementID=:SelectedElementID AND Active='T'";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':SelectedElementID"', $SelectedElementID);
  oci_execute($rs);
  $numrows=0;
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $rsCommonElement=$row;$numrows++; }
  if ($numrows == 0) return;
  $SQL="SELECT * FROM FDT_FormData 
        WHERE PatientUid=:urnumber
        AND ElementID=:SelectedElementID";
  if ($rsCommonElement["PATIENTENCOUNTERIND"]=="T") $SQL=$SQL." AND PatientEncounter=:admissno";
  if ($ParentFormID!=""){
    if ($rsCommonElement["PARENTFORMIND"]=="T") $SQL=$SQL." AND FormID=:ParentFormID";
  }
  else {
    if ($rsCommonElement["FORMCLASSIND"]=="T") {
      $SQL=$SQL." AND FormClassID=:FormClassID";
    } else {
      if ($rsCommonElement["FORMTYPEIND"]=="T") $SQL=$SQL." AND FormTypeID=:FormTypeID";
      else if ($rsCommonElement["PATIENTMASTERIND"]=="F")  return;
    } 
  } 
  $SQL=$SQL." AND ROWNUM <= 1";
  $SQL=$SQL." ORDER BY DataID DESC";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':urnumber"', $urnumber);
  oci_bind_by_name($rs, ':SelectedElementID"', $SelectedElementID);
  if ($rsCommonElement["PATIENTENCOUNTERIND"]=="T") oci_bind_by_name($rs, ':admissno"', $admissno);
  if ($ParentFormID!=""){
    if ($rsCommonElement["PARENTFORMIND"]=="T") oci_bind_by_name($rs, ':ParentFormID"', $ParentFormID);
  }
  else {
    if ($rsCommonElement["FORMCLASSIND"]=="T") { oci_bind_by_name($rs, ':FormClassID"', $FormClassID);
    } else {
      if ($rsCommonElement["FORMTYPEIND"]=="T") oci_bind_by_name($rs, ':FormTypeID"', $FormTypeID);
    } 
  } 
  oci_execute($rs);
  $numrows=0;
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $rsFormData=$row;$numrows++; }
  if ($numrows == 0) return;
  $CommonFormID=$rsFormData["FORMID"];
  $CommonInputID=$rsFormData["INPUTID"];
  $SQL="SELECT * FROM FDT_FormData  WHERE FormID=:CommonFormID AND InputID=:CommonInputID ORDER BY RowNo";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CommonFormID"', $CommonFormID);
  oci_bind_by_name($rs, ':$CommonInputID"', $$CommonInputID);
  oci_execute($rs);
  $function_ret="";
  $cnt=0;
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($cnt>0) $function_ret.="|";
    $function_ret.=$row["INPUTVALUE"];
    $cnt++;
  } 
  return $function_ret;
} 
function ActionTypeDescription($SelectedActionType) {
  switch ($SelectedActionType) {
    case "1":
      print "Save";
      break;
    case "2":
      print "Finalise";
      break;
    case "3":
      print "Allocations";
      break;
    case "4":
      print "Annotations/Comments";
      break;
    case "5":
      print "Accept";
      break;
    case "6":
      print "Reject";
      break;
    case "7":
      print "Cancel (Mark as Deleted)";
      break;
    case "8":
      print "Print";
      break;
    case "9":
      print "Send Notification";
      break;
    case "10":
      print "No Save";
      break;
    case "11":
      print "Delete";
      break;
    case "12":
      print "Complete";
      break;
    case "13":
      print "Update";
      break;
    case "14":
      print "Review";
      break;
    case "15":
      print "Unfinalise (allow edits)";
      break;
    case "16":
      print "Attachment";
      break;
  } 
  return;
} 
function ActionTypeOptionList($SelectedActionType)
{
  print "\n"."<option value=1 ";
  if ($SelectedActionType==1) print "selected";
  print ">Save</option>\n<option value=2 ";
  if ($SelectedActionType==2) print "selected";
  print ">Finalise</option>\n<option value=3 ";
  if ($SelectedActionType==3) print "selected";
  print ">Allocations</option>\n<option value=4 ";
  if ($SelectedActionType==4) print "selected";
  print ">Annotations</option>\n<option value=5 ";
  if ($SelectedActionType==5) print "selected";
  print ">Accept</option>\n<option value=6 ";
  if ($SelectedActionType==6) print "selected";
  print ">Reject</option>\n<option value=7 ";
  if ($SelectedActionType==7) print "selected";
  print ">Cancel (Mark Deleted)</option>\n<option value=8 ";
  if ($SelectedActionType==8) print "selected";
  print ">Print</option>\n<option value=9 ";
  if ($SelectedActionType==9) print "selected";
  print ">Send Notification</option>\n<option value=10 ";
  if ($SelectedActionType==10) print "selected";
  print ">No Save</option>\n<option value=11 ";
  if ($SelectedActionType==11) print "selected";
  print ">Delete</option>\n<option value=12 ";
  if ($SelectedActionType==12) print "selected";
  print ">Complete</option>\n<option value=13 ";
  if ($SelectedActionType==13) print "selected";
  print ">Update</option>\n<option value=14 ";
  if ($SelectedActionType==14) print "selected";
  print ">Review</option>\n<option value=15 ";
  if ($SelectedActionType==15) print "selected";
  print ">Unfinalise (allow edits)</option>\n<option value=16 ";
  if ($SelectedActionType==16) print "selected";
  print ">Attachments</option>";
  return;
} 
function CommonElementOptionList($SelectedElement)
{
  $SQL="Select * from FTK_CommonElements WHERE Active='T' Order by Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["ELEMENTID"];
    if (trim($row["ELEMENTID"])==trim($SelectedElement)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function DatabaseColumnOptionList($TableID,$SelectedField)
{
  $SQL="Select * from FTK_DatabaseColumns WHERE TableID=:TableID and Active='T' Order by Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':TableID', $TableID);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["COLUMNID"];
    if (trim($row["COLUMNID"])==trim($SelectedField)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
}
function DatabaseTableOptionList($SelectedField)
{
  $SQL="Select * from FTK_DatabaseTables WHERE Active='T' Order by Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["TABLEID"];
    if (trim($row["TABLEID"])==trim($SelectedField)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function DefaultFieldOptionList($SelectedField)
{
  $SQL="Select * from FTK_DefaultFields WHERE Active='T' Order by Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["DEFAULTFIELDID"];
    if (trim($row["DEFAULTFIELDID"])==trim($SelectedField)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function FormTypeOptionList($SelectedFormType)
{
  $SQL="Select * from FTK_FormTypes WHERE Active='T'";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["FORMTYPEID"];
    if (trim($row["FORMTYPEID"])==trim($SelectedFormType)) { print " selected>"; }
      else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function FormClassOptionList($SelectedFormType,$SelectedFormClass) {
  if ($SelectedFormType=="") {
    return;
  } 
  $SQL="Select * from FTK_FormClasses WHERE Active='T'";
  if ($SelectedFormType!="ALL") {
    $SQL=$SQL." AND FormTypeID=:SelectedFormType";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':SelectedFormType', $SelectedFormType);
  } else {
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  }
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["FORMCLASSID"];
    if (trim($row["FORMCLASSID"])==trim($SelectedFormClass)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function SectionOptionList($SelectedSectionID) {
  $SQL="Select * from FTK_FormSection WHERE Active='T' ORDER BY Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["SECTIONID"];
    if (trim($row["SECTIONID"])==trim($SelectedSectionID)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function CodeTypeOptionList($SelectedCodeType) {
  $SQL="Select * from FTK_CodeTypes WHERE Active='T' ORDER BY Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["CODETYPE"];
    if (trim($row["CODETYPE"])==trim($SelectedCodeType)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function CodeDescription($CodeID) {
  if ($CodeID=="") return;
  $SQL="Select Description from FTK_Codes Where CodeID=:CodeID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeID', $CodeID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row["DESCRIPTION"];
} 
function FieldDescription($InputID) {
  $SQL="Select Description from FTK_FormField Where InputID=:InputID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':InputID', $InputID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row["DESCRIPTION"];
} 
function CodeDescriptions($CodeIDs) {
  if (!isset($CodeIDs)) {
    return;
  } 
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i++) {
    if (is_numeric($CodeList[$i])) {
      $SQL="Select Description from FTK_Codes Where CodeID=:CodeID";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
      oci_execute($rs);
      if ($i>0) { print "<br>"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      print $row["DESCRIPTION"];
    } 
  }
} 
function CodeNames($CodeIDs) {
  $NameList="";
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i=$i+1) {
    if ($CodeList[$i]!="") {
      $SQL="Select * from FTK_Codes Where CodeID=:CodeID";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
      oci_execute($rs);
      if ($i>0) { $NameList=$NameList.";"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      $NameList=$NameList.$row["DESCRIPTION"];
    } 
  }
  $function_ret=$NameList;
  return $function_ret;
} 
function ParentFormField($theFormID,$FieldName) {
  if ($theFormID=="") {
    $function_ret="";
  }
  else {
    $SQL="SELECT ".$FieldName." FROM FDT_Forms WHERE FormID=:FormID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':FormID', $theFormID);
    oci_execute($rs);
    $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    $function_ret= $row[0];
  } 
  return $function_ret;
} 
function ParentFormDate($theFormID,$FieldName)
{
  return;
} 
function ParentFormTime($theFormID,$FieldName)
{
  return;
} 
function SelectOptionList($CodeType,$SelectedCodeID) {
  if ($CodeType=="") return;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $SQL="Select CodeID,Description from FTK_Codes Where CodeType=:CodeType AND Active='T' Order By Sequence, Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeType', $CodeType);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
      if (intval($SelectedCodeList[$i])==intval($row[0])) {
        print " selected";
      } 
    }
    print " >$row[1]</option>";
  }
  return;
} 
function RadioButtonList($CodeType,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  if (isset($GLOBALS['IPADINTERFACE'])) {
    if ($Columns>2) $Columns=2;
  }
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr>";
  $SQL="Select CodeID,Description from FTK_Codes Where CodeType=:CodeType AND Active='T' Order By Sequence, Description";
  oci_bind_by_name($rs, ':CodeType', $CodeType);
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n<td><input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if (intval($SelectedCodeList[$i])==intval($row[0])) print " checked";
      }
      print ">".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]." <input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if (intval($SelectedCodeList[$i])==intval($row[0])) print " checked";  
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function CheckBoxComboList($CodeType,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $iHeight=21*$iHeight;
  $SQL="Select CodeID,Description from FTK_Codes 
        Where CodeType=:CodeType
        AND Active='T' Order By Sequence, Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeType', $CodeType);
  oci_execute($rs);
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectMultiple($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  } 
  print "\n <div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:".$iHeight."px;"."width:".$iWidth."px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "<input type=checkbox name=".$FieldName."[] tabindex=".$TabIndex." value='".$row[0]."'";
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) 
      if (intval($SelectedCodeList[$i])==intval($row[0])) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function iPadSelectMultiple($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  if ($iWidth<100) $iWidth=150;
  echo "\n <select size=1 multiple name='".$FieldName."[]' style='width:".$iWidth."px;' tabindex=".$TabIndex;
  echo " title='$FieldDescription' ";
  if ($Required=="T") echo " class=Required required";
  echo ">";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    echo "<option  value='".$row[0]."'";
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) 
      if (intval($SelectedCodeList[$i])==intval($row[0])) print " selected";
    echo "> ".$row[1]."</option>";
  }
  echo "</select>";
}
function iPadSelectOne($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  if ($iWidth<100) $iWidth=150;
  echo "\n <select name='$FieldName' style='width:".$iWidth."px;' tabindex=".$TabIndex;
  echo " title='$FieldDescription' ";
  if ($Required=="T") echo " class=Required required";
  echo ">";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    echo "<option  value='".$row[0]."'";
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) 
      if (intval($SelectedCodeList[$i])==intval($row[0])) print " selected";
    echo "> ".$row[1]."</option>";
  }
  echo "</select>";
}
function RadioButtonComboList($CodeType,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  $iHeight=21*$iHeight;
  $SQL="Select CodeID,Description 
        FROM FTK_Codes Where CodeType=:CodeType
        AND Active='T' Order By Sequence, Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeType', $CodeType);
  oci_execute($rs);
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectOne($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  } 
  print "\n<div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:$iHeight px;width:$iWidth px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS+OCI_RETURN_NULLS))  {
    print "<input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
    if (intval($SelectedCodeID)==intval($row[0])) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function CheckBoxList($CodeType,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  if (isset($GLOBALS['IPADINTERFACE'])) {
    if ($Columns>2) $Columns=2;
  }
  $CodeCount=0;
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $SQL="Select CodeID,Description from FTK_Codes Where CodeType=:CodeType 
        AND Active='T' Order By Sequence, Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeType', $CodeType);
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr valign=middle>";
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n <td>";
      print "<input type=checkbox name=".$FieldName."[] tabindex=$TabIndex. value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if (intval($SelectedCodeList[$i])==intval($row[0])) print " checked";
      }
      print "></td><td>".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]."</td><td><input type=checkbox name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if (intval($SelectedCodeList[$i])==intval($row[0]))  print " checked";
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function FormFieldOptionList($FormClassID,$SelectedField) {
  $SQL="SELECT * from FTK_FormField WHERE Active='T' 
        AND SectionID IN (SELECT SectionID FROM FTK_FormClassSection WHERE FormClassID=:FormClassID)
        ORDER BY Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':FormClassID', $FormClassID);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["INPUTID"];
    print " CodeType='".$row["CODETYPE"]."'";
    if ($row["INPUTID"]==$SelectedField) { print " selected>"; }
    else { print " >"; } 
    print substr($row["DESCRIPTION"],0,50)."</option>";
  } 
} 
function SectionFieldOptionList($SelectedField) {
  $SQL="Select a.InputID
             , a.CodeType
             , a.Description FieldName
             , b.Description SectionName
        from FTK_FormField a
        join FTK_FormSection b on b.SectionID=a.SectionID  
        WHERE a.Active='T' and b.Active='T'
        ORDER BY 3,4";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["INPUTID"];
    print " CodeType='".$row["CODETYPE"]."'";
    if ($row["INPUTID"]==$SelectedField) { print " selected>"; }
    else { print " >"; } 
    print substr($row["FIELDNAME"],0,25)." (";
    print substr($row["SECTIONNAME"],0,20).")";
    print "</option>";
  } 
} 
function DateFieldOptionList($SelectedField) {
  $SQL="SELECT * from FTK_FormField 
        WHERE Active='T'
        AND (InputType=4 OR InputType=10)
        ORDER BY Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["INPUTID"];
    print " CodeType='".$row["CODETYPE"]."'";
    if ($row["INPUTID"]==$SelectedField) { print " selected>"; }
    else { print " >"; } 
    print substr($row["DESCRIPTION"],0,50)."</option>";
  } 
} 
function TimeFieldOptionList($SelectedField) {
  $SQL="SELECT * from FTK_FormField 
        WHERE Active='T'
        AND (InputType=5 OR InputType=10)
        ORDER BY Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["INPUTID"];
    print " CodeType='".$row["CODETYPE"]."'";
    if ($row["INPUTID"]==$SelectedField) { print " selected>"; }
    else { print " >"; } 
    print substr($row["DESCRIPTION"],0,50)."</option>";
  } 
} 
function FormActionOptionList($FormClassID,$SelectedField) {
  $SQL="SELECT * from FTK_FormClassActions 
        WHERE Active='T' AND FormClassID=:FormClassID
        ORDER BY Description";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':FormClassID', $FormClassID);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["ACTIONID"];
    if (trim($row["ACTIONID"])==trim($SelectedField)) { print " selected>"; }
    else { print " >"; } 
    print $row["DESCRIPTION"]."</option>";
  } 
} 
function FormLink($ThisFormID) {
  $SQL="SELECT * FROM FDT_Forms WHERE FormID = :FormID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':FormID', $ThisFormID);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if (!isset($row["DTFINALISED"])) {
      $function_ret="Input-".$row["FORMCLASSID"]."-".$row["REVISIONNO"].
                    ".php?FormID=".$row["FORMID"].
                    "&NHI=".trim($row["PATIENTURN"]);
    }
      else {
      $function_ret="Display-".$row["FORMCLASSID"]."-".$row["REVISIONNO"].
         ".php?FormID=".$row["FORMID"].
        "&NHI=".trim($row["PATIENTURN"]);
    } 
  }
  return $function_ret;
} 
function ChildFormStatus($ThisFormID) {
  $SQL="SELECT * FROM FDT_Forms WHERE FormID = :FormID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':FormID', $ThisFormID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  $function_ret=$row["STATUSNAME"];
  return $function_ret;
} 
function TargetOptionList($SelectedID) {
  print "\n"."<option value=1 ";
  if ($SelectedID==1) print "selected";
  print ">User Who Initiated Form</option>";
  print "\n"."<option value=2 ";
  if ($SelectedID==2) print "selected";
  print ">User Who Initiated Action of</option>";
  print "\n"."<option value=3 ";
  if ($SelectedID==3) print "selected";
  print ">All Users Who Did Action of</option>";
  print "\n"."<option value=4 ";
  if ($SelectedID==4) print "selected";
  print ">All Users Who Actioned Form</option>";
  print "\n"."<option value=5 ";
  if ($SelectedID==5) print "selected";
  print ">User Who Initiated Parent Form</option>";
  print "\n"."<option value=6 ";
  if ($SelectedID==6) print "selected";
  print ">User Who Initiated Parent Form Action of</option>";
  print "\n"."<option value=7 ";
  if ($SelectedID==7) print "selected";
  print ">All Users Who Did Parent Form Action of</option>";
  print "\n"."<option value=8 ";
  if ($SelectedID==8) print "selected";
  print ">All Users Who Actioned Parent Form</option>";
  print "\n"."<option value=9 ";
  if ($SelectedID==9) print "selected";
  print ">Patients Clinician</option>";
  print "\n"."<option value=10 ";
  if ($SelectedID==10) print "selected"; 
  print ">Patients Location</option>";
  return;
} 
function DatabaseQuery($SQL) {
  $returnValue="Invalid Query";
  $rs=oci_parse($GLOBALS['conn'],$SQL);   
  oci_execute($rs);
  $returnValue="";
  $numrows=0;
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $rsDatabase=$row;$numrows++; }
  if ($numrows == 0) return $returnValue;
  $returnValue=$rsDatabase[0];
  return $returnValue;
}
function ScriptParameters() {
   global $dtAllocated,$dtAccepted,$dtRejected,$dtCompleted,$dtFinalised,$FormID,$AutoSaveAfter,$AutoSaveActionID;
   echo "\n<form name=ScriptParameters onsubmit='return false;'>";
   echo "\n<input type=hidden name=AutoSaveAfter value='$AutoSaveAfter'>";
   echo "\n<input type=hidden name=AutoSaveActionID value='$AutoSaveActionID'>";
   echo "\n<input type=hidden name=FormID value='$FormID'>";
   echo "\n<input type=hidden name=dtAllocated value='$dtAllocated'>";
   echo "\n<input type=hidden name=dtAccepted value='$dtAccepted'>";
   echo "\n<input type=hidden name=dtRejected value='$dtRejected'>";
   echo "\n<input type=hidden name=dtCompleted value='$dtCompleted'>";
   echo "\n<input type=hidden name=dtFinalised value='$dtFinalised'>";
  if ($FormID!=null) {     
    $SQL="SELECT * FROM FDT_FormData WHERE FormID=:FormID";
    $rsForm=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':FormID', $FormID);
    oci_execute($rsForm);
    while($rsFormData = oci_fetch_array($rsForm,OCI_BOTH+OCI_RETURN_NULLS))  {
      $RowNo=$rsFormData["ROWNO"];
      $InputID=$rsFormData["INPUTID"];
      echo "\n<input type=hidden id='vInput".$InputID."Row".$RowNo."' name='vInput".$InputID."Row".$RowNo."' value='".$rsFormData["INPUTVALUE"]."'>";
      echo "\n<input type=hidden id='vCode".$InputID."Row".$RowNo."' name='vCode".$InputID."Row".$RowNo."' value='".$rsFormData["INPUTCODENAME"]."'>";
    }
  }
   echo "\n</form>";
/*   echo "\n<script type=text/javascript> CheckActionDisplay() </script>";*/
   echo "\n <div id='-suggestion-panel-wrapper' style='display:none; '>";
   echo "\n  <div id='-suggestion-panel-wrapper2' style='width:100%'>";
   echo "\n   <ul id='-suggestion-table' style='width:100%'></ul>";
   echo "\n  </div>";
   echo "\n </div>";
   echo "\n<div id=PopUpDiv style=\"display:none;position:absolute\"></div>";
   echo "\n<div name='PopUpScreen' id='PopUpScreen' style='display: none;'>";
   echo "\n<iframe scrolling='no' width='100%' height='100%' name='PopUpFrame' id='PopUpFrame'></iframe>";
   echo "\n<iframe scrolling='no' style='display: none;' name='PopUpFrame1' id='PopUpFrame1'></iframe>";
   echo "\n</div>";

   echo "\n<div id=HiddenDivision style='display:none;'></div>";
   echo "\n<span id=DisplaySaving class=SavingData>";
   echo "\n<img class=SavingImage src=../images/FormSave.gif>";
   echo "\n<p id=SaveText>Saving Form Data</p></span>";
}
function InsertDefaultActions($FormClassID) {
   $SQL="INSERT INTO FTK_FormClassActions 
         ( FormClassID, TabSequence, Description, ButtonLabel, ActionType, ShowOnDisplay, 
           ShowOnInput, CheckRequiredFields, Active)
   VALUES (:FormClassID,10,'Save','Ok',2,'F','T','T','T')
          returning ACTIONID into :ACTIONID";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':FormClassID', $FormClassID);
   oci_bind_by_name($rs, ':ACTIONID', $ActionID,10);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}

   /* Insert Default Access Rights to Everyone */
   $SQL="INSERT INTO FTK_ActionAccess 
           ( ActionID, TeamID, UserID)
    VALUES ('$ActionID', '0', '')";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}


   $SQL="INSERT INTO FTK_FormClassActions 
         ( FormClassID, TabSequence, Description, ButtonLabel, ActionType, ShowOnDisplay, 
           ShowOnInput, CheckRequiredFields, Active)
   VALUES (:FormClassID,90,'Cancel','Cancel',10,'T','T','F','T')
          returning ACTIONID into :ACTIONID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':FormClassID', $FormClassID);
   oci_bind_by_name($rs, ':ACTIONID', $ActionID,10);
  if (!oci_execute($rs)) {echo oci_error($rs);exit();}

   /* Insert Default Access Rights to Everyone */
   $SQL="INSERT INTO FTK_ActionAccess 
           ( ActionID, TeamID, UserID)
    VALUES (:ActionID, '0', '')";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':ActionID', $ActionID);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}

   $SQL="INSERT INTO FTK_FormClassActions 
         ( FormClassID, TabSequence, Description, ButtonLabel, ActionType, ShowOnDisplay, 
           ShowOnInput, CheckRequiredFields, Active)
   VALUES (:FormClassID,20,'Print','Print',8,'T','F','F','T')
          returning ACTIONID into :ACTIONID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':FormClassID', $FormClassID);
  oci_bind_by_name($rs, ':ACTIONID', $ActionID,10);
  if (!oci_execute($rs)) {echo oci_error($rs);exit();}

   /* Insert Default Access Rights to Everyone */
   $SQL="INSERT INTO FTK_ActionAccess 
           ( ActionID, TeamID, UserID)
    VALUES (:ActionID, '0', '')";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
   oci_bind_by_name($rs, ':ActionID', $ActionID);
   if (!oci_execute($rs)) {echo oci_error($rs);exit();}

  return;
}
function temCodeDescription($CodeID) {
  if ($CodeID=="") return;
  $SQL="Select DESCRIPTION  from FTK_Teams Where TeamID=:CodeID";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':CodeID', $CodeID);
  oci_execute($rs);
  $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
  print $row[0];
} 
function temCodeNames($CodeIDs) {
  $NameList="";
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i=$i+1) {
    if ($CodeList[$i]!="") {
      $Category=substr($CodeList[$i],0,2);
      $Code=substr($CodeList[$i],2,3);
      $SQL="Select DESCRIPTION  from FTK_Teams Where TeamID=:CodeID";
      $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
      oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
      oci_execute($rs);
      if ($i>0) { $NameList=$NameList.";"; } 
      $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
      $NameList=$NameList.$row[0];
    } 
  }
  $function_ret=$NameList;
  return $function_ret;
} 
function temCodeDescriptions($CodeIDs) {
  if (!isset($CodeIDs)) {
    return;
  } 
  $CodeList=explode("|",$CodeIDs);
  for ($i=0; $i<count($CodeList); $i++) {
    $SQL="Select DESCRIPTION  from FTK_Teams Where TeamID=:CodeID";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
    oci_bind_by_name($rs, ':CodeID', $CodeList[$i]);
    oci_execute($rs);
    if ($i>0) { print "<br>"; } 
    $row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS);
    print $row[0];
  }
} 
function TemCodeList($Category,$SelectedCodeID) {
  $SQL="SELECT TEAMID,DESCRIPTION
        FROM FTK_Teams
        WHERE ACTIVE='T'
        ORDER BY DESCRIPTION";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  return $rs;
}
function temSelectOptionList($Category,$SelectedCodeID) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=TemCodeList($Category,$SelectedCodeID);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
      if ($SelectedCodeList[$i]==$row[0]) {
        print " selected";
      } 
    }
    print " >$row[1]</option>";
  }
  return;
} 
function temRadioButtonList($Category,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=TemCodeList($Category,$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n<td><input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";
      }
      print ">".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]." <input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";  
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function temCheckBoxComboList($Category,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=TemCodeList($Category,$SelectedCodeID);
  $iHeight=21*$iHeight;
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectMultiple($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  }
  print "\n <div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:".$iHeight."px;"."width:".$iWidth."px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "<input type=checkbox name=".$FieldName."[] tabindex=".$TabIndex." value='".$row[0]."'";
    for ($i=0; $i<count($SelectedCodeList); $i=$i+1) 
      if ($SelectedCodeList[$i]==$row[0]) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function temRadioButtonComboList($Category,$SelectedCodeID,$TabIndex,$iHeight,$iWidth,$CheckOnLeft,$Required,$FieldName,$FieldDescription) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=TemCodeList($Category,$SelectedCodeID);
  $iHeight=21*$iHeight;
  if (isset($GLOBALS['IPADINTERFACE'])) {
    iPadSelectOne($rs,$FieldName,$iWidth,$TabIndex,$SelectedCodeID,$Required,$FieldDescription);
    return;
  }
  print "\n<div title='$FieldDescription' class='CheckBoxCombo";
  if ($Required=="T") print " Required";
  print "' style='height:$iHeight px;width:$iWidth px;'>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS+OCI_RETURN_NULLS))  {
    print "<input type=radio name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
    if ($SelectedCodeID==$row[0]) print " checked";
    print "> ".$row[1]."<br>";
  }
  print "\n</div>";
  return;
} 
function temCheckBoxList($Category,$SelectedCodeID,$TabIndex,$Columns,$CheckOnLeft,$FieldName) {
  $SelectedCodeList=explode("|",$SelectedCodeID);
  $rs=TemCodeList($Category,$SelectedCodeID);
  $CodeCount=0;
  print "\n<table cellpadding=0 cellspacing=0 border=0>\n<tr valign=middle>";
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    if ($CheckOnLeft=="T") {
      print "\n <td>";
      print "<input type=checkbox name=".$FieldName."[] tabindex=$TabIndex. value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0]) print " checked";
      }
      print "></td><td>".$row[1]."</td>";
    }
    else {
      print "\n<td>".$row[1]."</td><td><input type=checkbox name=$FieldName tabindex=$TabIndex value='".$row[0]."'";
      for ($i=0; $i<count($SelectedCodeList); $i=$i+1) {
        if ($SelectedCodeList[$i]==$row[0])  print " checked";
      }
      print "></td>";
    } 
    $CodeCount=$CodeCount+1;
    if ($CodeCount==$Columns) {
      print "</tr>\n<tr valign=top>";
      $CodeCount=0;
    } 
  }
  print "</tr>\n</table>";
  return;
} 
function SelectPrinterOptions($defpage,$defoptn) {
  global $wbseuid,$webPASRelease;
  if ($webPASRelease<1004) {
    $SQL="select replace(c.qprtcode,' ','0') Printer
              ,c.prtdesc Description
              ,d.ibpdprt DefaultPrint
            from ibacodef a
            join websecaf b on wbsedept=prxcata
            join ibaprtaf c on qprtcode=prxcode
            left join ibapdfaf d on d.ibpduid=b.wbseuid
                                 and ibpdpid=:defpage
                                 and ibpdrep=:defoptn
            where b.wbseuid=:wbseuid
            and prxcode!=' '";
  } else {
    $SQL="select replace(c.qprtcode,' ','0') Printer
              ,c.prtdesc Description
              ,d.ibpdprt DefaultPrint
            from ibapddaf a
            join websecaf b on b.wbsedept=a.ibpddept
            join ibaprtaf c on c.qprtcode=a.ibpdprtr
            left join ibapdfaf d on d.ibpduid=b.wbseuid
                                 and ibpdpid=:defpage
                                 and ibpdrep=:defoptn
            where wbseuid=:wbseuid
            ";
  }
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
  oci_bind_by_name($rs, ':wbseuid', $wbseuid);
  oci_bind_by_name($rs, ':defpage', $defpage);
  oci_bind_by_name($rs, ':defoptn', $defoptn);
  if (!oci_execute($rs)) {echo oci_error($rs);exit();}
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n<option value=".$row[0];
    if ($row[2]!="") {
      print " selected";
    }
    print " >$row[1]</option>";
  }
  return;
}
/* $ImageKey=StorageLocationID|$ImageFileName */
function ShowImageField($ImageKey,$InputName) {
  if ( $ImageKey=="") return;
  $KeyParts= explode("|",$ImageKey);
  if (count($KeyParts)>0) {
    $StorageLocationID=$KeyParts[0];
    $SQL="select * from obspctaf where obptslid=:obptslid";
    $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
    oci_bind_by_name($rs, ':obptslid', $StorageLocationID);
    if (!oci_execute($rs)) {echo oci_error($rs);exit();}
    $row=oci_fetch_array($rs, OCI_BOTH+OCI_RETURN_NULLS);
    echo "<img style='width:300px;' src='".$row["OBPTURLP"].$KeyParts[1]."'>";
    echo "<input type=hidden name='".$InputName."' value='$ImageKey'>";
  }
}
function wsServerOptionList($SelectedServer)
{
  $SQL="Select * from webspgaf order by wbspprg";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["WBSPPRG"];
    if (trim($row["WBSPPRG"])==trim($SelectedServer)) { print " selected>"; }
      else { print " >"; } 
    print "(".$row["WBSPPRG"].")  ".$row["WBSPNAM"]."</option>";
  } 
} 
function wsReportOptionList($SelectedServer,$SelectedReport)
{
  $SQL="Select * from websopaf where wbsoprg=:SelectedServer order by wbsoopt";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':SelectedServer', $SelectedServer);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["WBSOOPT"];
    if (trim($row["WBSOOPT"])==trim($SelectedReport)) { print " selected>"; }
      else { print " >"; } 
    print "(".$row["WBSOOPT"].") ".$row["WBSODES"]."</option>";
  } 
} 
function wsTemplateOptionList($SelectedServer,$SelectedReport,$SelectedTemplate)
{
  $SQL="Select * from webtplaf where wbtpprg=:SelectedServer and wbtpopt=:SelectedReport order by wbtptpl";
  $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");   
  oci_bind_by_name($rs, ':SelectedServer', $SelectedServer);
  oci_bind_by_name($rs, ':SelectedReport', $SelectedReport);
  oci_execute($rs);
  while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
    print "\n"."<option value=".$row["WBTPTPL"];
    if (trim($row["WBTPTPL"])==trim($SelectedTemplate)) { print " selected>"; }
      else { print " >"; } 
    print "(".$row["WBTPTPL"].") ".$row["WBTPDES"]."</option>";
  } 
} 
?>
