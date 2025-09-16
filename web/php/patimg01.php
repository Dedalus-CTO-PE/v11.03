<?php
/*
.----------------------------------------------------------------------
. Program       : patimg01.php
.
. Function      : Patient Photo Image Gallery
.
. Modifications :
. Version         Date        Responsible/Changes Made
. ------------------------------------------------------------------------------
. V10.05.01  06.02.2015 Peter Vela  CAR 305590
.            Added validation for deleted pictures
. V10.04.01  24.03.2014 B.G.Ackland CAR 298934
.            New Patient Image Gallery View
.            Return Javascript Arrays of Image Document properties by Document
.            Document Type
.            Use Base64 encoding to avoid URL encoding issues and
.            mask location of documents.
. 
.----------------------------------------------------------------------
PRGID     INIT      "patimg01.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Patient Photo Image Gallery"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $secureid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
 $admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
 $filtctwi = (isset($_REQUEST["filtctwi"])) ? $_REQUEST["filtctwi"] : null;
 switch($reportno) {
/* All Images for Patient */
 case 1:
   $type_filter="";
   if ($filtctwi!=null) $type_filter=" and a.obpcctyp = :filtctwi ";
   $qry = "
     select case obpccvis 
            when '00000000' 
            then 'UR'||replace(a.obpcurno||'-'||obpccpid||a.obpcfext,' ','0')
            else replace(a.obpccvis||'-'||a.obpccpid||a.obpcfext,' ','0')
            end filename
           ,c.obptsdir filepath
           ,a.obpcctyp filetype
           ,to_char(to_date(a.obpcindt,'YYYYMMDD'),'DD fmMon YYYY') filetitle
           ,a.obpcurno||a.obpccvis||a.obpccpid filekey
          from obspcoaf a
            left join patcodes b on b.tcode='wi' and b.acode=trim(a.obpcctyp)
            left join obspctaf c on c.obptslid= a.obpcslid
          where a.obpcurno = :urnumber $type_filter
            and lower(a.obpcfext) in ('.jpg','.gif','.png','.jpeg')
            and a.obpcmdel<>1
            and ((b.tcform6='0') or (b.tcindc1<>1 and
            ((select nvl(wbstlev,'0') from websteaf 
              where wbstuid=:secureid and wbstprg='CLIWEB08') > b.tcform6)))
           order by obpcindt||obpcintm desc
  ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':secureid', $secureid);
  oci_bind_by_name($stmt, ':urnumber', $urnumber);
  if ($filtctwi!==null) oci_bind_by_name($stmt, ':filtctwi', $filtctwi);
  $item = 1;
  if ($stmt) {
    if (oci_execute($stmt)) { 
      while ($row  = oci_fetch_row($stmt)) {
        echo "imgName[" . ($item) . "] = '" . $row[0] . "';\n";
        echo "imgFile[" . ($item) . "] = '" . urlencode(base64_encode($row[0])) . "';\n";
        echo "imgPath[" . ($item) . "] = '" . urlencode(base64_encode($row[1])) . "';\n";
        echo "imgType[" . ($item) . "] = '" . $row[2] . "';\n";
        echo "imgTitle[" . ($item) . "] = '" . $row[3] . "';\n";
        echo "imgKey[" . ($item) . "] = '" . $row[4] . "';\n";
      	$item++;
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
  }
  oci_close($conn); 
}
?>
