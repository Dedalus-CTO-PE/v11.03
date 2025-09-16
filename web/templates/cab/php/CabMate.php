<?php
 /*
 *  17/11/2011 V10.03.01 Saroeun Soeur  CAR 246840
 *             created new server to get list of waiting based on expected date
 */
/******************************************************************************
 *      includes
 *****************************************************************************/
require "setup.php";

/*****************************************************************************
 *      cliweb02 object instantiated
 ****************************************************************************/
$cabMate = new CabMate($conn);
$cabMate->getList();
$cabMate->closeConnection();
/*******************************************************************************
 *      Cliweb02 - common web class
 *******************************************************************************/
class CabMate
{
   //instance variables
   private $reply = "";
   private $dl =  "','";
   private $uid = null;
   private $rept = "";
   private $conn = null;

   private $viewtype = "";
   private $statcode = "";
   private $lastdate = "";
   private $enddate = "";
   private $vyearmth = "";
   private $listcode = "";
   private $catecode = "";
   private $doctcode = "";
   private $unitcode = "";
   private $remstats = "";

   //Comweb01 constructor
   public function CabMate($connection) {
    $this->uid = $_SERVER['REMOTE_USER'];

    if (isset($_GET['reportno'])) {
       $this->rept = $_GET['reportno'];
    }

    if (isset($_GET['lastdate'])) {
       $this->lastdate = $_GET['lastdate'];
    }

    if (isset($_GET['viewtype'])) {
       $this->viewtype = $_GET['viewtype'];
    }

    if (isset($_GET['statcode'])) {
       $this->statcode = $_GET['statcode'];
    }

    if (isset($_GET['vyearmth'])) {
       $this->vyearmth = $_GET['vyearmth'];
    }
    
    if (isset($_GET['listcode'])) {
       $this->listcode = $_GET['listcode'];
    }

    if (isset($_GET['catecode'])) {
       $this->catecode = $_GET['catecode'];
    }

    if (isset($_GET['doctcode'])) {
       $this->doctcode = $_GET['doctcode'];
    }

    if (isset($_GET['unitcode'])) {
       $this->unitcode  = $_GET['unitcode'];
    }

    if (isset($_GET['remstats'])) {
       $this->remstats = $_GET['remstats'];
    }

    if (isset($_GET['enddate'])) {
       $this->enddate = $_GET['enddate'];
    }

    $this->conn = $connection;
   
  }

  /****************************************************************************
   *    getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getList() {
        $qry =  " SELECT distinct
                    '.pbl?reportno=02&template=001&casekeys='||lpad(cast(nvl(wmurno,' ') as varchar(8)),8,'+')||
                    rpad(cast(nvl(wmcode,' ') as varchar (9)),9,'+')||
                    lpad(cast(nvl(dwmcnt,' ') as varchar (2)),2,'+') as htmllink,
                    '<b>'||psname||'</b>, '||initcap(ptitl)||' '||
                    initcap(pgname)||' ( '|| (SELECT  round((sysdate - to_date(pbdate,'YYYYMMDD')) / 365)  diff_years from dual) ||'y,'||psex||', '||wmurno||')' as formatnm,
                    wmurno,
                    case psex when 'F' then 'Female'
                              when 'M' then 'Male' 
                    end as dispsex,psage as psageyrs,wmdate1,wmdate2, wmdate3, wmcode, wmdesc, wmreason, wtwmrank,
                    wmstay, wmdoctor, 
                    (SELECT distinct
                            initcap(dsname)||', '||substr(dgname,1,1)||'. ('||dtitl||')'
                     FROM 
                       patdo1af
                     WHERE
                       patdo1af.dcode = wmdoctor
                    )as docfname, wmpty, ' ', ' ', wttxplst,
                    NVL2(nullif(wtwmsrcr,' '),
                   (SELECT distinct
                        tdesc 
                    FROM 
                       patcodes
                    WHERE     
                       patcodes.tcode = 'S' 
                    AND
                      patcodes.acode = wtwmsrcr
                   ),' ') as srcrdesc,
                    NVL2(nullif(wmunit,' '),
                   (SELECT distinct
                       tdesc 
                    FROM 
                      patcodes 
                    WHERE     
                      patcodes.tcode = 'WU' 
                    AND
                      patcodes.acode = wmunit  
                    ),' ') as unitdesc,
                    (SELECT distinct
                       pmhcgnam||pmhcsnam
                     FROM 
                       pmshcpaf
                     WHERE
                       pmshcpaf.pmhchcpc = wtwmrfgp
                    )as genpname, ' ' as lstdays, ' ' as nrcdays, ' ' as urdgays, wttxadmw, wtwmdabd,
                    NVL2(nullif(wttxpast,' '),
                   (SELECT distinct
                      tdesc 
                    FROM 
                      patcodes, wattx1af 
                    WHERE     
                      patcodes.tcode = 'XG' 
                    AND
                      patcodes.acode = wttxpast
                    AND 
                      wattx1af.wttxurno = wmurno
                    AND 
                      wattx1af.wttxpcod = wmcode
                   AND 
                      wattx1af.wttxpcnt = dwmcnt
                  ),' ') as dim19, '0' as bkrxodte, wttxpowd,
                 (SELECT distinct
                      nvl(nullif(tcindc1,' '),'0')
                  FROM 
                     patcodes, pmspx2af   
                  WHERE
                     patcodes.tcode = 'FS'
                  AND
                     patcodes.acode = pmspx2af.pmpxfldr
                  AND
                     pmspx2af.pmpxurno = wmurno
                 )||(SELECT distinct
                        nvl(nullif(tcindc1,' '),'0')
                     FROM 
                       patcodes, patma1af   
                     WHERE
                       patcodes.tcode = 'T'
                     AND
                       patcodes.acode = ptype
                     AND
                       patma1af.purno = wmurno
                   )||(SELECT distinct
                         nvl(nullif(tcindc1,' '),'0')
                       FROM 
                         patcodes, pmspx2af  
                       WHERE
                         patcodes.tcode = 'PV'
                       AND
                         patcodes.acode = pmspx2af.pmpxprvi
                       AND
                         pmspx2af.pmpxurno = wmurno
                      )as key3, wtwmecnt, wtwmdtad, ' ' as crtdays, wtwmuniq,
              NVL2(nullif(wttxplst,' '),
              (SELECT distinct
                   tdesc 
               FROM 
                   patcodes, wattx1af 
               WHERE     
                   patcodes.tcode = 'VL' 
               AND
                   patcodes.acode = wttxplst
               AND 
                  wattx1af.wttxurno = wmurno
               AND 
                  wattx1af.wttxpcod = wmcode
               AND 
                  wattx1af.wttxpcnt = dwmcnt
             ),' ')as priostat,

             NVL2(nullif(wmremove,' '),
            (SELECT distinct
                tdesc 
             FROM 
                patcodes
             WHERE     
                patcodes.tcode = 'WR' 
             AND
                patcodes.acode = wmremove
            ),' ') as rems,

            NVL2(nullif(wmpty,' '),
           (SELECT distinct
               tdesc 
            FROM 
               patcodes
            WHERE     
               patcodes.tcode = 'TP' 
            AND
               patcodes.acode = wmpty
          ),' ') as priodesc, wtwmgadd,
          (SELECT distinct
             tcindc4 
           FROM 
             patcodes
           WHERE     
             patcodes.tcode = 'WR' 
           AND
             patcodes.acode = wmremove
          )as hlreason,
         (SELECT distinct
             nvl(nullif(tcindc1,' '),'0')
          FROM 
             patcodes,watproaf
          WHERE     
             patcodes.tcode = 'WG' 
          AND
             patcodes.acode = wpgrp
          AND
             watproaf.wpcode = wmcode
         ) as hlturnon
     FROM 
        wattr1af, patma1af,wattx1af,patcodes 
     WHERE 
        wattr1af.wmurno = patma1af.purno
     AND
       wattr1af.wmurno = wattx1af.wttxurno
     AND
       wattr1af.wmcode = wattx1af.wttxpcod
     AND
       wattr1af.dwmcnt = wattx1af.wttxpcnt "; 

    switch($this->viewtype) {
      
      case 0: //check observation number
        $qry .= " AND wattr1af.wmdate3 = '{$this->lastdate}' ";
        break;
      case 1:
      case 4:
        $date1 = $this->lastdate;
        $date2 = $this->enddate;
        if($date2 == "") {
         $date2 = $date1+9;
        }
        $qry .= " AND wattr1af.wmdate3 >= '{$date1}'
                  AND wattr1af.wmdate3 < '{$date2}' ";
        break;
      case 2:
        $date1 = $this->vyearmth.'01';
        $date2 = $this->vyearmth.'31';
        $qry .= " AND wattr1af.wmdate3 >= '{$date1}'
                  AND wattr1af.wmdate3 <= '{$date2}' ";
        break;
      default:
        break;
     }

     if( $this->statcode != "" ) {
        $qry .= " AND wattr1af.dwmstat = '{$this->statcode}' ";
     }

     if( $this->listcode != "" ) {
        $qry .= " AND wattx1af.wttxplst = '{$this->listcode}' ";
     }
     
     if( $this->doctcode != "" ) {
        $qry .= " AND wattr1af.wmdoctor = '{$this->doctcode}' ";
     }

     if( $this->unitcode != "" ) {
        $qry .= " AND wattr1af.wmunit = '{$this->unitcode}' ";
     }

     if( $this->remstats != "" ) {
        $qry .= " AND wattr1af.wmremove = '{$this->remstats}' ";
     }

    if( $this->catecode != "" ) {
        $qry .= " AND wattr1af.wmpty = '{$this->catecode}' ";
     }
     echo "/*".$qry."*/";
     $this->getScalarValue($qry); 
  }

  function getScalarValue($qry) {
    $stmt = oci_parse($this->conn,$qry) or die('cant parse query');

    if ($stmt){
      if (oci_execute($stmt)) {

        $numcols = oci_num_fields($stmt);
        $count = 0;

        while ($row  = oci_fetch_row($stmt)) {
             $count = 0;
             foreach($row as $field) {
                if($count == 0) {
                   $this->reply .= "\tt.addRow(\"watweb01".str_replace(' ','+',$field)."\",";
                }else {
                  $this->reply .= "\"".$field."\",";
                }
                $count++;
             }

             if($count == sizeof($row)) {
                   $this->reply .= "\" \");\n\n";
             }
        }

      }else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    header('Access-Control-Allow-Credentials: true');
    header('Access-Control-Allow-Methods:  OPTIONS, GET, POST');
    header('Cache-control: no-cache');
    header('Access-Control-Allow-Origin: *');
    echo 'function dynamicAddTableRows() {'.$this->reply.'}';
  }
  /****************************************************************************
   *close current connection
   ****************************************************************************/
  public function closeConnection() {
     oci_close($this->conn);
  }

}//end class

?>
