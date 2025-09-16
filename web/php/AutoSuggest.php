<?php
/*
.----------------------------------------------------------------------
. Program       : AutoSuggest.php
.
. Function      : AJAX Type Ahead Search Function
.
. Modifications :
.
. V10.11.01 02.11.2017 Davin        Task 0837347
.           Return practice counter (pmhgcntr) in search type 10
. V10.09.01 03.02.2017 B.G.Ackland  Task 0832932
.           Add new search type 10 to return HCP and Practice codes Combined
.           Made as a copy of type 8
. V10.06.02 12.08.2015 B.G.Ackland  CARxxxxxx
.           Change split to preg_split to avoid deprecated warning messages
. V10.06.01 15.06.2015 B.G.Ackland  CARxxxxxx
.           Added User table Keyword Search
. V10.04.01 01.07.2014 B.G.Ackland  CARxxxxxx
.           Added Search Option 8 for HCP Practice Search
.
.----------------------------------------------------------------------
PRGID     INIT      "AutoSuggest.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "AJAX Type Ahead Search Function"
.----------------------------------------------------------------------
*/
 require "setup.php";
 $uid = $_SERVER['REMOTE_USER'];
 $reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
 $keywords = (isset($_REQUEST["keywords"])) ? $_REQUEST["keywords"] : null;
 $rowcount = (isset($_REQUEST["rowcount"])) ? $_REQUEST["rowcount"] :10;
 $keyword1 = $keywords;
 $keyword2 = "";
 $arrKeyword = preg_split("/[\s,]+/",$keywords);
 if (count($arrKeyword) > 1) {
   $keyword1 = $arrKeyword[0];
   $keyword2 = $arrKeyword[1];
 } else {
   $arrKeyword = preg_split("/[\s,]+/",$keywords);
   if (count($arrKeyword) > 1) {
     $keyword1 = $arrKeyword[0];
     $keyword2 = $arrKeyword[1];
   }
 }
 $reply = "";
 $dl    = "','";
switch($reportno) {
/* HCP Search */
 case 1:
  $qry = "SELECT distinct pmhchcpc  code
                ,pmhcsnam||', '||pmhctitl||' '||pmhcgnam||'('||pmhchcpc||')' value
                ,pmhcadr1||' '||pmhcadr2||' '||pmhcadr3||' '||pmhcadr4||' '||pmhcpost subtext
          FROM   pmshcpaf
          join   pmshkiaf a on a.pmhkhcpc=pmhchcpc and a.pmhkkkwd like upper(:keyword1)||'%'
          WHERE  pmhcstts = '0'
          AND    ROWNUM  < :rowcount
          AND    ( nvl(':keyword2','')='' 
                   OR
                   a.pmhkhcpc in (select b.pmhkhcpc from pmshkiaf b 
                                where b.pmhkhcpc = a.pmhkhcpc
                                and b.pmhkkkwd like upper(:keyword2)||'%' ) 
                 )";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  oci_bind_by_name($stmt, ':keyword2', $keyword2);
  break;
/* Transfer Source */
 case 2:
  $qry = "SELECT ptvacode  code
                ,ptvadesc||'('||ptvacode||')' name
                ,'' subtext
          FROM   patvadaf
          WHERE  ROWNUM  < :rowcount
          and    ptvaactv <> 'I'
          and    (ptvadesc like upper(:keyword1||'%')
          or     ptvacode like upper(:keyword1||'%'))";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  break;
/* Doctor Search */
 case 3:
  $qry = "SELECT distinct dcode  code
                ,dsname||', '||dtitl||' '||dgname||'('||dcode||')' value
                ,dsadd1||' '||dsadd2||' '||dsadd3||' '||dsadd4||' '||dspost subtext
          FROM   patdo1af
          join   patdkiaf a on a.ptdkdoc=dcode and a.ptdkkwd like upper(:keyword1||'%')
          WHERE  drstat <> '1'
          AND    ROWNUM  < :rowcount
          AND    ( nvl(':keyword2','')='' 
                   OR
                   dcode in (select b.ptdkdoc from patdkiaf b 
                                where b.ptdkdoc = dcode
                                and b.ptdkkwd like upper(:keyword2||'%') ) 
                 )";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  oci_bind_by_name($stmt, ':keyword2', $keyword2);
  break;
/* Health Fund Search */
 case 4:
  $qry = "SELECT distinct a.pthffun||'|'||a.pthftab  code
                ,a.pthffun||'-'||b.hfname value
                ,a.pthftab||'-'||c.hfname subtext
          FROM   patkhfaf a 
          JOIN   patfn1af b on b.hcode=a.pthffun and b.hftabl='0000'
          JOIN   patfn1af c on c.hcode=a.pthffun and c.hftabl=a.pthftab
          WHERE  a.pthfkwd like upper(:keyword1||'%')
          AND    c.hftabl<>'0000'
          AND    b.dhftact <> '1'
          AND    c.dhftact <> '1'
          AND    ROWNUM  < :rowcount
          AND    ( nvl(':keyword2','')='' 
                   OR
                   exists (select 1 from patkhfaf d 
                                where d.pthffun = a.pthffun
                                and   d.pthftab = a.pthftab
                                and   d.pthfkwd like upper(:keyword2||'%') ) 
                 )
         order by 2";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  oci_bind_by_name($stmt, ':keyword2', $keyword2);
  break;
/* Case Team */
 case 5:
  $qry = "SELECT alcateam  code
                ,alcadesc||'('||alcateam||')' name
                ,'' subtext
          FROM   allcasaf
          WHERE  ROWNUM  < :rowcount
          and    alcaactv = '1'
          and    (upper(alcadesc) like upper('%'||:keyword1||'%')
          or     upper(alcateam) like upper(:keyword1||'%'))";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  break;
/* Diagnosis Current Edition 7 */
 case 6:
  $keyword1 = $keywords;
  $keyword2 = "";
  $arrKeyword = preg_split("/[\s,]+/",$keywords);
  if (count($arrKeyword) > 1) {
    $keyword1 = $arrKeyword[0];
    $keyword2 = $arrKeyword[1];
  }
  $qry = "SELECT distinct dpcode  code
                ,pt0ddesc value
                ,ddesc subtext
          FROM   pat10d7f
          join   patkcd7f a on a.ptcditm=dpcode and a.ptcdkwd like upper(:keyword1||'%')
          WHERE  dflag = 'P'
          AND    ROWNUM  < :rowcount
          AND    ( nvl(':keyword2','')=''
                   OR
                   dpcode in (select b.ptcditm from patkcd7f b
                                where b.ptcditm = dpcode
                                and b.ptcdkwd like upper(:keyword2||'%') )
                 )";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  oci_bind_by_name($stmt, ':keyword2', $keyword2);
  break;
/* User  */
 case 7:
  $keywords=str_replace(" ","%",$keywords);
  $qry = "SELECT distinct wbseuid  code
                ,wbsenam value
                ,(select case acode
                         when ' ' then 'No Occupation Set'
                         else tdesc 
                         end
                  from patcodes where tcode='w0' and acode=wbseocg)||'('||wbseuid||')' subtext
          FROM   websecaf
          WHERE ( upper(wbsenam) like upper('%'||:keywords||'%')
          or     upper(wbseuid) like upper(:keywords||'%'))
          AND    wbseact='1'
          AND    ROWNUM  < :rowcount
         ";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keywords', $keywords);
  break;
/* HCP Practice Search */
 case 8:
  $qry = "SELECT distinct pmhchcpc  code
                ,pmhcsnam||', '||pmhctitl||' '||pmhcgnam||'('||pmhchcpc||')' value
                ,pmhgadd1||' '||pmhgadd2||' '||pmhgadd3||' '||
                 pmhgadd4||' '||pmhgadd5||' '||pmhgadd6||' '||pmhgpost subtext
          FROM   pmshcpaf
          join   pmshclaf l on l.pmhlhcpc=pmhchcpc and l.pmhlstat='0'
          join   pmshcgaf p on p.pmhgprac=l.pmhlhcpr and p.pmhgstts='0'
          join   pmshkiaf a on a.pmhkhcpc=pmhchcpc and a.pmhkkkwd like upper(:keyword1)||'%'
          WHERE  pmhcstts = '0'
          AND    ROWNUM  < :rowcount
          AND    ( nvl(':keyword2','')=''
                   OR
                   pmhchcpc in (select b.pmhkhcpc from pmshkiaf b
                                where b.pmhkhcpc = pmhchcpc
                                and b.pmhkkkwd like upper(:keyword2)||'%' )
                 )";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  oci_bind_by_name($stmt, ':keyword2', $keyword2);
  break;
/* User Table */
 case 9:
  if (strlen($keywords)>2) $keywords="%".$keywords."%";
  else $keywords=$keywords."%";
  $qry = "SELECT WBSEUID  code
                ,WBSENAM  name
                ,'' subtext
          FROM   websecaf
          WHERE  ROWNUM  < :rowcount
          AND   (upper(WBSENAM) like upper(:keywords)
          OR    upper(WBSEUID) like upper(:keywords))
          ORDER BY WBSENAM";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keywords', $keywords);
  break;
/* Search for HCP and Practice Code */
 case 10:
  $qry = "SELECT distinct rpad(pmhchcpc,10,' ')||rpad(pmhgprac,10,' ')||lpad(pmhgcntr,2,' ')  code
                ,pmhcsnam||', '||pmhctitl||' '||pmhcgnam||'('||pmhchcpc||')' value
                ,pmhgadd1||' '||pmhgadd2||' '||pmhgadd3||' '||
                 pmhgadd4||' '||pmhgadd5||' '||pmhgadd6||' '||pmhgpost subtext
          FROM   pmshcpaf
          join   pmshclaf l on l.pmhlhcpc=pmhchcpc and l.pmhlstat='0'
          join   pmshcgaf p on p.pmhgprac=l.pmhlhcpr and p.pmhgstts='0'
          join   pmshkiaf a on a.pmhkhcpc=pmhchcpc and a.pmhkkkwd like upper(:keyword1)||'%'
          WHERE  pmhcstts = '0'
          AND    ROWNUM  < :rowcount
          AND    ( nvl(':keyword2','')=''
                   OR
                   pmhchcpc in (select b.pmhkhcpc from pmshkiaf b
                                where b.pmhkhcpc = pmhchcpc
                                and b.pmhkkkwd like upper(:keyword2)||'%' )
                 )";
  $stmt = oci_parse($conn,$qry) or die('cant parse query');
  oci_bind_by_name($stmt, ':rowcount', $rowcount);
  oci_bind_by_name($stmt, ':keyword1', $keyword1);
  oci_bind_by_name($stmt, ':keyword2', $keyword2);
  break;


 default:
  oci_close($conn); 
  exit();
  break;
 }

 $reply .= "[";
 if ($stmt) {
    if (oci_execute($stmt)) { 
      $numcols = oci_num_fields($stmt);
      while ($row  = oci_fetch_row($stmt)) {
        $reply .= "{\"code\":\"$row[0]\",
                    \"value\":\"$row[1]\",
                    \"subtext\":\"$row[2]\"},";
      }
    } else {
      $e = oci_error($stmt);
      echo $e['message'];
    }
 }
 $reply .= "]";
 echo $reply;
 oci_close($conn); 
?>
