<?php
/*
.----------------------------------------------------------------------
. Program       : standard.php
.
. Function      : Forms Toolkit Standard Include
.                 Standard PHP Functions Module 
.
. Modifications :
.----------------------------------------------------------------------
PRGID     INIT      "standard.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "Forms Toolkit Standard Include"
.----------------------------------------------------------------------
*/
$EscapeFields=true;
function ListMainRows($rs,$Link) {
   $lineBreaks = array("\r","\r\n","\n");
   $lineBR="<br>";
   $reply="";
   $rowClass="TableRowEven";
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $numcols = oci_num_fields($rs);
     if ($rowClass=="TableRowEven") $rowClass="TableRowOdd";
     else $rowClass="TableRowEven";
     $reply .= "<tr class='$rowClass' onclick='$Link(\"$row[0]\");'>
               <td><span class=DeleteIcon></span>$row[1]";
     for ($i = 2; $i < $numcols; $i++) {
          $str=str_replace($lineBreaks,'',$row[$i]);
          $reply .= "</td><td>".htmlspecialchars($str,ENT_QUOTES);
     }
     $reply .= "</tr>";
   } 
   echo "$reply";        
}
function ListSortTable($rs) {
   global $EscapeFields;
   $lineBreaks = array("\r","\r\n","\n");
   $lineBR="<br>";
   $reply="";
   $dl    = "','";
   $numcols = oci_num_fields($rs);
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $reply .= "t.addRow('".$row[0];
     for ($i = 1; $i < $numcols; $i++) {
       if ($EscapeFields) {
          $str=str_replace($lineBreaks,'',$row[$i]);
          $reply .= $dl.htmlspecialchars($str,ENT_QUOTES);
       } else {
          $reply.=$dl.$row[$i];
       }
     }
     $reply .= "');\n";
   } 
   echo "$reply";        
}
function AddSortTable($rs) {
   global $EscapeFields;
   $lineBreaks = array("\r","\r\n","\n");
   $lineBR="<br>";
   $reply="";
   oci_execute($rs);
   $numcols = oci_num_fields($rs);
   $dl    = "','";
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $reply .= "t.addRow('".$row[0];
     for ($i = 1; $i < $numcols; $i++) {
       if ($EscapeFields) {
          $str=str_replace($lineBreaks,'',$row[$i]);
          $reply .= $dl.htmlspecialchars($str,ENT_QUOTES);
       } else {
          $reply.=$dl.$row[$i];
       }
     }
     $reply .= "');\n";
   } 
   echo "$reply";        
}
function AddTableRows($rs,$Link) {
   $lineBreaks = array("\r","\r\n","\n");
   $lineBR="<br>";
   $reply="";
   oci_execute($rs);
   $rowClass="TableRowEven";
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $numcols = oci_num_fields($rs);
     if ($rowClass=="TableRowEven") $rowClass="TableRowOdd";
     else $rowClass="TableRowEven";
     $reply .= "<tr class='$rowClass' onclick='$Link(\"$row[0]\");'><td>$row[1]";
     for ($i = 2; $i < $numcols; $i++) {
          $str=str_replace($lineBreaks,'',$row[$i]);
          $reply .= "</td><td>".htmlspecialchars($str,ENT_QUOTES);
     }
     $reply .= "</tr>";
   } 
   echo "$reply";        
}
function AddMainRows($rs,$Link) {
   $lineBreaks = array("\r","\r\n","\n");
   $lineBR="<br>";
   $reply="";
   oci_execute($rs);
   $rowClass="TableRowEven";
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $numcols = oci_num_fields($rs);
     if ($rowClass=="TableRowEven") $rowClass="TableRowOdd";
     else $rowClass="TableRowEven";
     $reply .= "<tr class='$rowClass' onclick='$Link(\"$row[0]\");'>
               <td><span class=DeleteIcon></span>$row[1]";
     for ($i = 2; $i < $numcols; $i++) {
          $str=str_replace($lineBreaks,'',$row[$i]);
          $reply .= "</td><td>".htmlspecialchars($str,ENT_QUOTES);
     }
     $reply .= "</tr>";
   } 
   echo "$reply";        
}
function AddEditRows($rs,$Link) {
   $lineBreaks = array("\r","\r\n","\n");
   $lineBR="<br>";
   $reply="";
   oci_execute($rs);
   $rowClass="TableRowEven";
   while($row = oci_fetch_array($rs,OCI_BOTH+OCI_RETURN_NULLS))  {
     $numcols = oci_num_fields($rs);
     if ($rowClass=="TableRowEven") $rowClass="TableRowOdd";
     else $rowClass="TableRowEven";
     $reply .= "<tr class='$rowClass' onclick='$Link(\"$row[0]\");'>
               <td><span class=MaintenanceIcon></span>$row[1]";
     for ($i = 2; $i < $numcols; $i++) {
          $str=str_replace($lineBreaks,'',$row[$i]);
          $reply .= "</td><td>".htmlspecialchars($str,ENT_QUOTES);
     }
     $reply .= "</tr>";
   } 
   echo "$reply";        
}
?>
