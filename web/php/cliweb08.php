<?php
/*
.----------------------------------------------------------------------
. Program       : cliweb08.php
.
. Function      : Clinical Document Services
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
. V10.09.01 17.01.2017 B.G.Ackland
.                      Fix filter03 to be % when empty
. V10.06.03 04.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
. V10.06.02 09.02.2015 B.G.Ackland  CAR 312435
.                      Fix Past Medical history call to getList2()
. V10.06.01 09.02.2015 B.G.Ackland  CAR 307632
.                      Add Filter By Indicator 3 Document Group
.----------------------------------------------------------------------
PRGID     INIT      "cliweb08.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Clinical Document Services"
.----------------------------------------------------------------------
*/
/******************************************************************************
 *      includes
 *****************************************************************************/
require "setup.php";
/*****************************************************************************
 *      cliweb08 object instantiated
 ****************************************************************************/
$cliweb08 = new Cliweb08($conn);
$cliweb08->getQueryByReportNumber();
$cliweb08->closeConnection();
/*******************************************************************************
 *      Cliweb08 - clinical documents
 *******************************************************************************/
class Cliweb08 {
  
   private $reply = "";
   private $dl =  "\",\"";
   private $conn = null;
   private $secureid = null;
   private $reportno = "";
   private $admissno = "";
   private $detailky = "";
   
   public function __construct($connection) {
     $this->secureid = $_SERVER['REMOTE_USER'];
     $this->filter03 = '%';
     if (isset($_GET['reportno'])) { $this->reportno = $_GET['reportno']; }
     if (isset($_GET['template'])) { $this->template = $_GET['template']; }
     if (isset($_GET['urnumber'])) { $this->urnumber = $_GET['urnumber']; }
     if (isset($_GET['detailky'])) { $this->detailky = $_GET['detailky']; }
     if (isset($_GET['notetype'])) { $this->notetype = $_GET['notetype']; }
     if (isset($_GET['docttype'])) { $this->docttype = $_GET['docttype']; }
     if (isset($_GET['filter03'])) { $this->filter03 = $_GET['filter03']; }
     if (empty($this->filter03)) $this->filter03 = "%";
     if (isset($_GET['admissno'])) { 
        $this->admissno = $_GET['admissno'];
        if (trim($this->admissno) == "") {
          $this->template = 1;
        }
     } else {
       $this->template = 1;
     }
     $this->conn = $connection;
   }

/****************************************************************************
*    getQueryByReportNumber - assigns a query based on report number
****************************************************************************/
  public function getQueryByReportNumber() {
    switch($this->reportno) {
      case 1: //clinic documents
        $qry = "
          select 
            case obpccvis 
            when '00000000' then obpturlp||'UR'||replace(obpcurno||'-'||obpccpid||obpcfext,' ','0')
            else obpturlp||replace(obpccvis||'-'||obpccpid||obpcfext,' ','0')
            end linkdoc
            ,case obpccvis 
            when '00000000' then obptsdir||'UR'||replace(obpcurno||'-'||obpccpid||obpcfext,' ','0')
            else obptsdir||replace(obpccvis||'-'||obpccpid||obpcfext,' ','0')
            end linkdoc
            ,replace(a.obpcurno||obpccvis||a.obpccpid,' ','+')
            ,a.obpcindt||a.obpcintm dattime
            ,a.obpcctyp
            ,a.obpcinus
            ,a.obpccom1
            ,a.obpccom2
            ,replace(replace(a.obpccfrm,'<',' '),'>',' ')
            ,a.obpcctoo
            ,b.tdesc
            ,c.tdesc
            ,nvl(d.wbsenam,' ')
            ,(select nvl(wbstlev,'0') from websteaf 
              where wbstprg='CLIWEB08'
              and   wbstuid=(select wbseuid from websecaf where wbselogn=:secureid )) UseSec
            ,c.tcform6
            ,c.tcindc1
            ,a.obpcmdel
          from obspcoaf a
            left join patcodes b on b.tcode=a.obpcacat and b.acode=a.obpcacod
            left join patcodes c on c.tcode='wi' and c.acode=trim(a.obpcctyp)
            left join websecaf d on d.wbseuid = a.obpcinus
            left join obspctaf e on e.obptslid= a.obpcslid
          where a.obpcurno = :urnumber
            and (c.tcindc3 like :filter03 or c.tcindc3=' ')
            and ((c.tcform6='0') or (c.tcindc1<>1 and
            ((select nvl(wbstlev,'0') from websteaf 
              where wbstprg='CLIWEB08'
              and   wbstuid=(select wbseuid from websecaf where wbselogn=:secureid )) > c.tcform6)))
               order by dattime desc";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':secureid', $this->secureid);
        oci_bind_by_name($stmt, ':urnumber', $this->urnumber);
        oci_bind_by_name($stmt, ':filter03', $this->filter03);
       	$this->reply .= "function AddDocRows() {";
        $this->getList($stmt);
        break;
      case 2: //notes 
       if ($this->template==1) {
          $qry2 = "SELECT obcbcid as cid,obcbvis as vis ,obcbldt as cmt 
                     FROM  obscnbaf, obscnaaf 
                     WHERE obcbvis=obcavis 
                     AND   obcbcid=obcacid 
                     AND   obcbvis IN ( select dpvibill from patvisaf where pviurno = :urnumber )
                   UNION 
                   SELECT vsmdtype||vsmdnote as cid,vsmtvisn as vis,vsmtcmnt as cmt
                     FROM vismdtaf,vismtxaf
                     WHERE vsmtvisn=vsmdvisn 
                     AND vsmtnote = vsmdnote
                     AND vsmdtype in ('001','008')
                     AND vsmtvisn IN (select dpvibill from patvisaf where pviurno = :urnumber)
                   ORDER BY vis,cid,cmt ASC
                   ";
        $stmt2 = oci_parse($this->conn,$qry2) or die('cant parse query');
        oci_bind_by_name($stmt2, ':urnumber', $this->urnumber);
        $qry1 = "select concat(obcadte,obcatme) datetime, wbsenam, obcavis, obcacid, nvl(tdesc,' ')
                   , case obcap1d
                     when '0' then obcapt1
                     when '1' then concat('<strike>',concat(obcapt1,'</strike>'))
                     end Note1
                   , case obcap2d
                     when '0' then obcapt2
                     when '1' then concat('<strike>',concat(obcapt2,'</strike>'))
                     end Note2
                   , case obcap3d
                     when '0' then obcapt3
                     when '1' then concat('<strike>',concat(obcapt3,'</strike>'))
                     end Note3
                   , case obcap4d
                     when '0' then obcapt4
                     when '1' then concat('<strike>',concat(obcapt4,'</strike>'))
                     end Note4
                   , obccdes
                   , obcctmo tempout
                   , obcctmi tempin
                   , ':urnumber' urnumber
      from obscnaaf
      left join websecaf on wbseuid=obcauid
      left join obscncaf on obcctyp=obcatyp
      left join patcodes on tcode='w0' and acode=obcaocg and not(trim(nvl(obcaocg,' '))=' ')
      where obcamdl='0'
      and  (obcavis in (select dpvibill from patvisaf where pviurno = :urnumber ) 
            or obcavis = :admissno )
      union
      select concat(vsmddate,vsmdtime) datetime, wbsenam ,vsmdvisn ,vsmdtype||vsmdnote, nvl(tdesc,' ')
            , '' Note1 , '' Note2 , '' Note3 , '' Note4 , 'Emergency' , 'EMG' tempout , 'EMG' tempin
            , ':urnumber' urnumber
      from vismdtaf
      left join websecaf on wbseuid=vsmduser
      left join patcodes on tcode='w0' and acode=vsmdoccg and not(trim(nvl(vsmdoccg,' '))=' ')
      where vsmddelt='0'
      and   vsmdtype in ('001','008')
      and ((vsmdvisn in (select dpvibill from patvisaf where pviurno = :urnumber ) )
            or ('0'=trim(':urnumber') and vsmdvisn = :admissno ))
      ";
        $stmt1 = oci_parse($this->conn,$qry1) or die('cant parse query');
        oci_bind_by_name($stmt1, ':urnumber', $this->urnumber);
        oci_bind_by_name($stmt1, ':admissno', $this->admissno);
     } else {
       $qry2 = "SELECT obcbcid as cid,obcbvis as vis ,obcbldt as cmt 
                    FROM   obscnbaf, obscnaaf 
                    WHERE  obcbvis=obcavis 
                    AND    obcbcid=obcacid 
                    AND    obcbvis= :admissno
                    UNION 
                    SELECT vsmdtype||vsmdnote as cid,vsmtvisn as vis,vsmtcmnt as cmt
                    FROM   vismdtaf,vismtxaf
                    WHERE  vsmtvisn= :admissno
                    AND    vsmtvisn=vsmdvisn 
                    AND    vsmdtype in ('001','008')
                    AND    vsmtnote = vsmdnote
                    ORDER BY vis,cid,cmt ASC";
        $stmt2 = oci_parse($this->conn,$qry2) or die('cant parse query');
        oci_bind_by_name($stmt2, ':admissno', $this->admissno);
       $qry1 = "select concat(obcadte,obcatme) datetime,wbsenam,obcavis,obcacid,nvl(tdesc,' ')
                    ,case obcap1d
                     when '0' then obcapt1
                     when '1' then concat('<strike>',concat(obcapt1,'</strike>'))
                     end Note1
                    ,case obcap2d
                     when '0' then obcapt2
                     when '1' then concat('<strike>',concat(obcapt2,'</strike>'))
                     end Note2
                    ,case obcap3d
                     when '0' then obcapt3
                     when '1' then concat('<strike>',concat(obcapt3,'</strike>'))
                     end Note3
                    ,case obcap4d
                     when '0' then obcapt4
                     when '1' then concat('<strike>',concat(obcapt4,'</strike>'))
                     end Note4
                    ,obccdes
                    ,obcctmo tempout
                    ,obcctmi tempin
                    ,':urnumber' urnumber
                  from obscnaaf
                  left join websecaf on wbseuid=obcauid
                  left join obscncaf on obcctyp=obcatyp
                  left join patcodes on tcode='w0' and acode=obcaocg 
                      and not(trim(nvl(obcaocg,' '))=' ')
                  where 2=:template and obcavis = :admissno
                  and obcamdl='0'
                union
                 select concat(vsmddate,vsmdtime) datetime
                  ,wbsenam
                  ,vsmdvisn
                  ,vsmdtype||vsmdnote
                  ,nvl(tdesc,' ')
                  ,'' Note1
                  ,'' Note2
                  ,'' Note3
                  ,'' Note4
                  ,'Emergency'
                  ,'EMG' tempout
                  ,'EMG' tempin
                  ,':urnumber}' urnumber
                 from vismdtaf
                 left join websecaf on wbseuid=vsmduser
                 left join patcodes on tcode='w0' and acode=vsmdoccg 
                      and not(trim(nvl(vsmdoccg,' '))=' ')
                 where vsmddelt='0'
                 and   vsmdtype in ('001','008')
                 and   vsmdvisn = ':admissno'
            ";
        }
        $stmt1 = oci_parse($this->conn,$qry1) or die('cant parse query');
        oci_bind_by_name($stmt1, ':urnumber', $this->urnumber);
        oci_bind_by_name($stmt1, ':admissno', $this->admissno);
        oci_bind_by_name($stmt1, ':template', $this->template);
        $this->reply .= "function AddNoteRows() {";
	//we want to append the $qry2 result in the 9th position
        $this->getList2($stmt1,$stmt2,9,3,2);
    	break;

     case 9: // medical history notes
        $qry2 ="select obmtnote ,obmturno ,obmtcmnt 
                from  obsmtxaf,obsmdtaf 
                where obmturno=obmdurno 
                and   obmdurno = :urnumber
                and   obmtnote=obmdnote 
                and   ROWNUM < 50 
                ORDER BY obmturno,obmtnote,obmtuniq";
        $stmt2 = oci_parse($this->conn,$qry2) or die('cant parse query');
        oci_bind_by_name($stmt2, ':urnumber', $this->urnumber);
        $qry1 = "select obmddate||obmdtime datetime
                      ,wbsenam
                      ,obmdurno
                      ,obmdnote
                from obsmdtaf
                left join websecaf on wbseuid=obmduser
                where obmdurno = :urnumber
                and   ROWNUM < 50 
                and   obmddelt='0'
            ";
        $stmt1 = oci_parse($this->conn,$qry1) or die('cant parse query');
        oci_bind_by_name($stmt1, ':urnumber', $this->urnumber);
        $this->reply .= "function AddNoteRows() {";
        $this->getList2($stmt1,$stmt2,3,3);
        break;

    default:
        echo "Invalid Web Service Call No Longer in Use.";
        exit();
        break;
    }
  }
 /****************************************************************************
   *display a list format in t.addRow
   ****************************************************************************/
  function getList($stmt) {
    if ($stmt){
      if (oci_execute($stmt)) { 
        $numcols = oci_num_fields($stmt);
        while ($row  = oci_fetch_row($stmt)) {
          $this->reply .= "t.addRow(\"".$row[0];
          for ($i = 1; $i < $numcols; $i++) {
             $this->reply .= $this->dl.str_replace("\"","\\\"",$row[$i]);
          }
       
          $this->reply .= "\");\n";
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    $this->reply .= "}";
    echo $this->reply;
  }
  function getList2($stmt1,$stmt2,$numToAppend,$id,$vist=null){
    $str = array();
    $rowid = array();
    $count = 0;
    if($stmt2) {
      if (oci_execute($stmt2)) {
        $numcols = oci_num_fields($stmt2);
        while ($row  = oci_fetch_row($stmt2)) {
	   $rowid[$count] = $row[0];
      	   $rowvist[$count] = $row[1];
      	   $str[$count] = $row[2];
      	   $count++;
      	 }
      }
    } else {
      $e = oci_error($stmt2);
      echo $e['message'];
    }
    if ($stmt1){
      if (oci_execute($stmt1)) { 
        $numcols = oci_num_fields($stmt1);
        while ($row  = oci_fetch_row($stmt1)) {
          $this->reply .= "t.addRow(\"".$row[0];
          for ($i = 1; $i < $numcols; $i++) {
             $this->reply .= $this->dl.str_replace("\"","\\\"",$row[$i]);
             if ($i == $numToAppend) {
                $this->reply .= $this->dl;
                for ($j = 0; $j < count($str); $j++) {
                  if ($vist != null) {    
                    if ($rowid[$j] == $row[$id] && $rowvist[$j] == $row[$vist]) { 
		                    $this->reply .= $str[$j]."<br />";	
                    }
                  } else {
                    if ($rowid[$j] == $row[$id]) {
		                    $this->reply .= $str[$j]."<br />";	
                    }
                  }
                }
             }
          }
          $this->reply .= "\");\n";
        }
      }else {
        $e = oci_error($stmt1);
        echo $e['message'];
      }
    }
    $this->reply .= "}";
    echo $this->reply;
  }
/****************************************************************************
* close current connection
****************************************************************************/
  public function closeConnection() {
     oci_close($this->conn);
  }
}//end class
?>
