<?php
/*
.----------------------------------------------------------------------
. Program       : security.php
.
. Function      : Forms Toolkit Common Security Include
.
. Validate User ID and get the users security profile in $rsUserSecurity
.
. Modifications : 
.
. V10.12.01 15.02.2018 B.G.Ackland
.           Fixed for Multi Hospital Configuration.
.
. V10.06.01 25.09.2015 B.G.Ackland
.           Revised for long username security model
.----------------------------------------------------------------------
PRGID     INIT      "security.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Security Include"
.----------------------------------------------------------------------
*/
 $secureid = $_SERVER['REMOTE_USER'];
 $SQL="select * from websecaf where wbselogn=:wbselogn";
 $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
 oci_bind_by_name($rs, ':wbselogn', $secureid);
 oci_execute($rs);
 $numrows=0;
 while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $rsUserProfile=$row;$numrows++; }
 if ($numrows == 0) {
     echo "ERROR:Invalid Security Profile";
     exit;
 }
 $wbseuid=$rsUserProfile["WBSEUID"];
 $wbsenam=$rsUserProfile["WBSENAM"];
 $wbsehosp=$rsUserProfile["WBSEHOSP"];
 $ibcnmhos=Parameter(0,43,1);
 
 if (isset($PROGRAM)) {
   $SQL="select * from webtplaf 
         where wbtpprg=:PROGRAM
         and   wbtpopt=:OPTION  
         and   wbtptpl=:TEMPLATE
        ";
   $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
   oci_bind_by_name($rs, ':PROGRAM',  $PROGRAM);
   oci_bind_by_name($rs, ':OPTION',   $OPTION);
   oci_bind_by_name($rs, ':TEMPLATE', $TEMPLATE);
   oci_execute($rs);
   $numrows=0;
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $numrows++; }
   if ($numrows > 0) {
     $SecurityLevel=$row["WBTPLEV"];
     if ($SecurityLevel > 0) {
       $SQL="select * from websteaf 
             where wbstuid=:wbseuid and wbstprg=:PROGRAM ";
       $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
       oci_bind_by_name($rs, ':wbseuid', $wbseuid);
       oci_bind_by_name($rs, ':PROGRAM', $PROGRAM);
       oci_execute($rs);
       $numrows=0;
       $UserSecurityLevel=0;
       while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $numrows++; }
       if ($numrows > 0) { $UserSecurityLevel=$row["WBSTLEV"]; } 
       if ($UserSecurityLevel <  $SecurityLevel) {
         echo "Your Profile does not allow you to perform this action";
         exit();
       }
     }
   }
 }

function GetUserHCP() {
 global $rsUserProfile;
 $ret;
 if ($rsUserProfile["WBSEGPCD"]!="") $ret=$rsUserProfile["WBSEGPCD"];
 if ($rsUserProfile["WBSENURS"]!="") $ret=$rsUserProfile["WBSENURS"];
 if ($rsUserProfile["WBSEDOC"]!="")  $ret=$rsUserProfile["WBSEDOC"];
 return $ret;
}
function Parameter($SECTOR,$POS,$LEN) {
 $SECTOR=str_pad($SECTOR,10," ",STR_PAD_LEFT);
 $SQL="SELECT DATA FROM CONTROLF WHERE SECTOR=:SECTOR";
 $rs=oci_parse($GLOBALS['conn'],$SQL) or die ("Error Query [".$SQL."]");
 oci_bind_by_name($rs, ':SECTOR', $SECTOR);
 oci_execute($rs);
 $numrows=0;
 while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS)) { $rsControl=$row;$numrows++; }
 if ($numrows == 0) {
   echo "ERROR:Invalid Control File Sector";
   exit;
 }
 $DATA=$rsControl["DATA"];
 $VALUE=substr($DATA,$POS-1,$LEN);
 return $VALUE;
}
?>
