<?php
/*
.----------------------------------------------------------------------
. Program       : cliweb03.php
.
. Function      : Clinical Result Services
.
. Modifications :
.
. V11.03.01  05/09/2023  Don Nguyen    TSK 0934402
.            Replaced class named constructor declaration with __construct
.            for PHP 8+ compliance.
.
. V10.06.01 04.08.2015 B.G.Ackland CAR 320105
.                      Changed wbseuid to wbselogn
. V10.04.01 B.G.Ackland
.           Refine Quick List Results to Ignore the DSS of ZZ for Order items
.----------------------------------------------------------------------
PRGID     INIT      "cliweb03.php"
VERSION   INIT      "V11.03.01"
PRGNAM    INIT      "Clinical Result Services"
.----------------------------------------------------------------------
*/
require "setup.php";
/*****************************************************************************
 *	cliweb03 object instantiated
 ****************************************************************************/
$cliweb02 = new Cliweb03($conn);
$cliweb02->getQueryByReportNumber();
$cliweb02->closeConnection();
/*******************************************************************************
 *	Cliweb03  
 *******************************************************************************/
class Cliweb03{ 
   //instance variables
   private $reply = "";
   private $secureid = null;
   private $reportno = "";
   private $conn = null;
   private $admissno = "";
   private $urnumber = "";
   private $typflter= "";
   private $filtrdss = "";
   private $labflter = "";
   private $keyword = "";
   private $rowcount = "10";
   private $sex ="";
   private $dob = "";
   private $firstName="";
   private $lastName="";

   //Comweb03 constructor
   public function __construct($connection) {
    $this->secureid = $_SERVER['REMOTE_USER'];
    $this->reportno = (isset($_REQUEST["reportno"])) ? $_REQUEST["reportno"] : null;
    $this->urnumber = (isset($_REQUEST["urnumber"])) ? $_REQUEST["urnumber"] : null;
    $this->admissno = (isset($_REQUEST["admissno"])) ? $_REQUEST["admissno"] : null;
    $this->keyword =  (isset($_REQUEST["keyword"]))  ? $_REQUEST["keyword"] : null;
    $this->rowcount = (isset($_REQUEST["numrow"]))   ? $_REQUEST["numrow"] : null;
    $this->typflter = (isset($_REQUEST["typflter"])) ? $_REQUEST["typflter"] : null;
    $this->labflter = (isset($_REQUEST["labflter"])) ? $_REQUEST["labflter"] : null;
    $this->filtrdss = (isset($_REQUEST["filtrdss"])) ? $_REQUEST["filtrdss"] : null;
    $this->wardcode = (isset($_REQUEST["wardcode"])) ? $_REQUEST["wardcode"] : null;
    $this->sex = (isset($_REQUEST["sex"])) ? $_REQUEST["sex"] : null;
    $this->dob = (isset($_REQUEST["dob"])) ? $_REQUEST["dob"] : null;
    $this->firstName = (isset($_REQUEST["fname"])) ? $_REQUEST["fname"] : null;
    $this->secondName = (isset($_REQUEST["sname"])) ? $_REQUEST["sname"] : null;
    $this->conn = $connection;
   }
  
  /****************************************************************************
   *	getQueryByReportNumber - assigns a query based on report number
   ****************************************************************************/
  public function getQueryByReportNumber() {
    $currentDate = getDate();
    $currentYear = $currentDate['year'];
    $previousYear = $currentDate['year'] - 1;
    switch($this->reportno) {
      case 1: 
        $qry =  "SELECT * FROM (
                 SELECT refldss,rectcod,rectdes,rectlab,relbdes,reflvst
                 FROM resflnaf
                 JOIN reslabaf ON relblcd=refllab
                 JOIN resctaaf ON rectlab=refllab
                 AND  rectcod=reflusc
                 AND  rectseg='OBR'
                 AND  rectfld='04'
                 AND  rectsys=reflucs
                 JOIN hl7codaf ON hlcotid='0074' AND hlcocod=refldss
                 WHERE refllty=03
                 AND   refldss not in ('ZZ')
                 AND  refllky = (SELECT wbsedoc from websecaf
                 WHERE wbselogn = :secureid )
                 ORDER by reflcnt desc)
                 WHERE ROWNUM <=  :rowcount  ";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':secureid', $this->secureid );
        oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
        $this->getQuickList($stmt);
        break;
      case 2:
        $qry =  "SELECT distinct refldss,rectcod,rectdes,rectlab,relbdes,reflvst,reflcnt
                 FROM resctaaf 
                   JOIN reslabaf ON relblcd=rectlab
                   JOIN resflnaf ON refllty='00' and refllab=rectlab 
                                and reflucs=rectsys and reflusc=rectcod 
                 WHERE rectseg='OBR'
                  AND  rectfld='04'
                  AND  upper(rectdes) LIKE upper('%'||:keyword||'%')
                  AND  ROWNUM <=  :rowcount
                 ORDER by reflcnt desc";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':keyword', $this->keyword );
        oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
        $this->getQuickList($stmt); //keyword search
        break;
      case 3:
        $qry = "SELECT hlcocod, hlcodes
                FROM   hl7codaf
                WHERE  hlcotid ='0074'";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        $this->getServiceType($stmt);
        break;
      case 4:
          $qry = "SELECT * FROM
                 (SELECT refldss,rectcod,rectdes,rectlab, relbdes,reflvst
                 FROM resflnaf
                 JOIN reslabaf ON relblcd = refllab
                 JOIN resctaaf ON rectlab=refllab
                 AND  rectcod=reflusc
                 AND  rectseg='OBR'
                 AND  rectfld='04'
                 AND  rectsys=reflucs
                 JOIN hl7codaf ON hlcotid='0074' AND hlcocod=refldss
                 WHERE refllty=03
                 AND  refllky = (SELECT wbsedoc from websecaf
                 WHERE wbselogn = :secureid)
                 AND refldss = :typflter 
                 ORDER by reflcnt desc)
                 WHERE ROWNUM <=  :rowcount ";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':secureid', $this->secureid );
        oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
        oci_bind_by_name($stmt, ':typflter', trim($this->typflter) );
        $this->getQuickList($stmt); //keyword search
        break;
      case 5:
        $qry =  "SELECT distinct refldss,rectcod,rectdes,rectlab,relbdes,reflvst,reflcnt
                 FROM resctaaf
                   JOIN reslabaf ON relblcd=rectlab
                   JOIN resflnaf ON refllty='00' and refllab=rectlab 
                                and reflucs=rectsys and reflusc=rectcod
                 WHERE rectseg='OBR'
                  AND  rectfld='04'
                  AND  upper(rectdes) LIKE upper('%'||:keyword||'%')
                  AND  ROWNUM <=  :rowcount
                  AND refldss = :typflter
                 ORDER by reflcnt desc";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':keyword', $this->keyword );
        oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
        oci_bind_by_name($stmt, ':typflter', trim($this->typflter) );
        $this->getQuickList($stmt); //keyword search
        break;
      case 6:
         $qry ="SELECT distinct relndss,relnusc,rectdes,relnlab,relbdes,
                       replace(redavst,'Tests Completed:'),count(*)
                FROM (SELECT relnlab,relndss, relnucs, relnusc, redavst
                     FROM reln{$currentYear}
                     left join reda{$currentYear} on redardt=relnrdt
                                                 and redartm=relnrtm
                                                 and redarun=relnrun
                                                 and redavst like 'Tests Completed:%'
                                                 and rownum=1
                     WHERE relnlty='01'
                     AND relnlky= :urnumber
                     AND relndss= :typflter
                     UNION
                     SELECT relnlab,relndss, relnucs, relnusc, redavst
                     FROM reln{$previousYear}
                     left join reda{$previousYear} on redardt=relnrdt
                                                 and redartm=relnrtm
                                                 and redarun=relnrun
                                                 and redavst like 'Tests Completed:%'
                                                 and rownum=1
                     WHERE relnlty='01'
                     AND relnlky= :urnumber
                     AND relndss= :typflter
                     GROUP BY relnlab,relndss, relnucs, relnusc, redavst)
               JOIN reslabaf ON relblcd = relnlab
               JOIN resctaaf ON rectlab = relnlab AND rectseg='OBR'
                    AND rectfld='04'
                    AND rectsys=relnucs
                    AND rectcod=relnusc
                    AND ROWNUM <=  :rowcount
               GROUP BY relndss,relnusc,rectdes,relnlab,relbdes, redavst
               ORDER BY 7 desc";
         $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
         oci_bind_by_name($stmt, ':urnumber', $this->urnumber );
         oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
         oci_bind_by_name($stmt, ':typflter', trim($this->typflter) );
         $this->getQuickList($stmt);
         break;
       case 7:
         $qry ="SELECT distinct relndss,relnusc,rectdes,relnlab,relbdes,
                       replace(redavst,'Tests Completed:'),count(*)
                FROM (SELECT relnlab,relndss, relnucs, relnusc, redavst
                     FROM reln{$currentYear}
                     left join reda{$currentYear} on redardt=relnrdt
                                                 and redartm=relnrtm
                                                 and redarun=relnrun
                                                 and redavst like 'Tests Completed:%'
                                                 and rownum=1
                     WHERE relnlty='01'
                     AND relnlky= :urnumber
                     UNION
                     SELECT relnlab,relndss, relnucs, relnusc, redavst
                     FROM reln{$previousYear}
                     left join reda{$previousYear} on redardt=relnrdt
                                                 and redartm=relnrtm
                                                 and redarun=relnrun
                                                 and redavst like 'Tests Completed:%'
                                                 and rownum=1
                     WHERE relnlty='01'
                     AND relnlky= :urnumber
                     GROUP BY relnlab,relndss, relnucs, relnusc, redavst)
               JOIN reslabaf ON relblcd = relnlab
               JOIN resctaaf ON rectlab = relnlab AND rectseg='OBR'
                    AND rectfld='04'
                    AND rectsys=relnucs
                    AND rectcod=relnusc
                    AND ROWNUM <=  :rowcount
               GROUP BY relndss,relnusc,rectdes,relnlab,relbdes, redavst
               ORDER BY 7 desc";
         $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
         oci_bind_by_name($stmt, ':urnumber', $this->urnumber );
         oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
         $this->getQuickList($stmt);
        break;
      case 9:
        $qry ="SELECT relnrdt,relnrtm,relnrun,reermsg,relndss, rectdes, relnnor 
               FROM reserraf, reln{$currentYear}, reha{$currentYear},respidaf,resctaaf
               WHERE relnrdt=reerrdt
               AND relnrtm=reerrtm
               AND relnrun=reerrun
               AND rehardt=relnrdt
               AND rehartm=relnrtm
               AND reharun=relnrun
               AND rehapid = repipid
               AND repignm LIKE  ':firstName%'
               AND repisnm LIKE  ':secondName%'
               AND repidob= :dob
               AND repisex= :sex
               AND  relnlab= rectlab
	       AND rectseg='OBR'
               AND rectfld='04'
               AND relnucs=rectsys
               AND relnusc=rectcod
               AND rehardt > to_char(sysdate-90,'YYYYMMDD') 
               UNION 
               SELECT relnrdt,relnrtm,relnrun,reermsg, relndss, rectdes, relnnor 
               FROM reserraf, reln{$previousYear}, reha{$previousYear},respidaf,resctaaf
               WHERE relnrdt=reerrdt
               AND relnrtm=reerrtm
               AND relnrun=reerrun
               AND rehardt=relnrdt
               AND rehartm=relnrtm
               AND reharun=relnrun
               AND rehapid = repipid
               AND repignm LIKE  :firstName||'%'
               AND repisnm LIKE  :secondName||'%'
               AND repidob= :dob
               AND repisex= :sex
               AND relnlab= rectlab
               AND rectseg='OBR'
               AND rectfld='04'
               AND relnucs=rectsys
               AND relnusc=rectcod
               AND rehardt > to_char(sysdate-90,'YYYYMMDD') 
               ORDER BY relnrdt DESC";
         $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
         oci_bind_by_name($stmt, ':firstName', $this->firstName );
         oci_bind_by_name($stmt, ':secondName', $this->secondName );
         oci_bind_by_name($stmt, ':dob', $this->dob );
         oci_bind_by_name($stmt, ':sex', $this->sex );
         $this->getUnlinkedResults($stmt);
        break;
      case 10:
        $qry =  "SELECT * from (SELECT refldss,rectcod,rectdes,rectlab,relbdes,reflvst
                 FROM resflnaf
                 LEFT JOIN reslabaf ON relblcd=refllab
                 LEFT JOIN resctaaf ON rectlab=refllab
                 AND  rectcod=reflusc
                 AND  rectseg='OBR'
                 AND  rectfld='04'
                 AND  rectsys=reflucs
                 LEFT JOIN hl7codaf ON hlcotid='0074' AND hlcocod=refldss
                 WHERE refllty=04
                 AND   refldss not in ('ZZ')
                 AND  refllky = :wardcode
                 ORDER by reflcnt desc)
                 WHERE ROWNUM <=  :rowcount ";
         $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
         oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
         oci_bind_by_name($stmt, ':wardcode', trim($this->wardcode) );
        $this->getQuickList($stmt);
        break;
      case 11:
        $qry =  "SELECT * FROM (
                 SELECT refldss,rectcod,rectdes,rectlab,relbdes,reflvst
                 FROM resflnaf
                 JOIN reslabaf ON relblcd=refllab
                 JOIN resctaaf ON rectlab=refllab
                 AND  rectcod=reflusc
                 AND  rectseg='OBR'
                 AND  rectfld='04'
                 AND  rectsys=reflucs
                 JOIN hl7codaf ON hlcotid='0074' AND hlcocod=refldss
                 WHERE refllty=04
                 AND  refllky = :wardcode
                 AND hlcocod  = :typflter
                 ORDER by reflcnt desc)
                 WHERE ROWNUM <= :rowcount ";
         $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
         oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
         oci_bind_by_name($stmt, ':wardcode', trim($this->wardcode) );
         oci_bind_by_name($stmt, ':typflter', trim($this->typflter) );
        $this->getQuickList($stmt);
        break;
      case 12:
        $filterString="";
        if (isset($_GET['labflter'])) {
          $filterString=" AND refllab = :labflter ";
        }
        $qry =  "SELECT * FROM (
                   SELECT refldss,rectcod,rectdes,rectlab,relbdes,reflvst
                   FROM resflnaf
                   JOIN reslabaf ON relblcd=refllab
                   JOIN resctaaf ON rectlab=refllab
                   AND  rectcod=reflusc
                   AND  rectseg='OBR'
                   AND  rectfld='04'
                   AND  rectsys=reflucs
                   JOIN hl7codaf ON hlcotid='0074' AND hlcocod=refldss
                   WHERE refllty='00'
                   AND   refldss not in ('ZZ')
                   AND   refllky='0000000000' $filterString
                   ORDER by reflcnt desc)
                 WHERE ROWNUM <=  :rowcount  ";
         $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
         oci_bind_by_name($stmt, ':rowcount', $this->rowcount );
         if (isset($_GET['labflter'])) {
           oci_bind_by_name($stmt, ':labflter', trim($this->labflter) );
         }
         $this->getQuickList($stmt);
        break;
      case 13:
        $qry = "SELECT count(*), rehdrci FROM (
                 SELECT rehdrci
                 FROM reln{$currentYear}
                 JOIN rehd{$currentYear} on rehdrdt=relnrdt and rehdrtm=relnrtm and rehdrun=relnrun
                 WHERE relnlty = '01'
                 AND   relnlky = :urnumber
                 UNION
                 SELECT rehdrci
                 FROM reln{$previousYear}
                 JOIN rehd{$previousYear} on rehdrdt=relnrdt and rehdrtm=relnrtm and rehdrun=relnrun
                 WHERE relnlty = '01'
                 AND   relnlky = :urnumber )
                group by rehdrci order by 1";
        $stmt = oci_parse($this->conn,$qry) or die('cant parse query');
        oci_bind_by_name($stmt, ':urnumber', $this->urnumber );
        $this->getServiceType($stmt);
        break;

      default:
        echo "Query Not Used/Available";
        break;
    }
  }
  function getUnlinkedResults($stmt) {
    $i =0;
     if ($stmt) {
      if ( oci_execute($stmt) ) {
        $this->reply .= "[";
        while ($row = oci_fetch_row($stmt)) {
          $date = $row[0];
          $time = $row[1];
          $run = $row[2];
          $errmsg = $row[3];  
          $dss = $row[4];
          $description= $row[5];
          $status = $row[6];
          $this->reply .= "{\"date\":\"".$date."\",".
                            "\"time\":\"".$time."\",".
                            "\"run\":\"".$run."\",".
                            "\"errmsg\":\"".$errmsg."\",".
                            "\"dss\":\"".$dss."\",".
                            "\"description\":\"".$description."\",".
                            "\"status\":\"".$status."\"},";
          $i++;
        }

        if ($i > 0 ) {
          $this->reply = substr_replace($this->reply,"",-1);
          $this->reply .= "]";
        } else {
          $this->reply = "";
        }

      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $this->reply;
  }
  /****************************************************************************
   *display a list format in json.
   *  example: [{"code":"FBC","description":"Full Blood Count"}]   
   *  
   *    usage in front end javascript: 
   *    
   *    var obj = eval('('+<php output here>+')') 
   *
   *    alert(obj[0].code)              output: FBC
   *    alert(obj[0].description)       output: Full Blood Count
   ****************************************************************************/
  function getQuickList($stmt) {
    $i =0;
     if ($stmt) {
      if ( oci_execute($stmt) ) {
        $this->reply .= "[";
        while ($row = oci_fetch_row($stmt)) {
          $type = str_pad($row[0],5);
          $code = str_pad($row[1],10);
          $description = $row[2];
          $labcode = $row[3];
          $labname = $row[4];
          $testsets = $row[5];
          $this->reply .= "{\"type\":\"".$type."\",".
                            "\"code\":\"".$code."\",".
                            "\"labcode\":\"".$labcode."\",".
                            "\"labname\":\"".$labname."\",".
                            "\"testsets\":\"".$testsets."\",".
                            "\"description\":\"".$description."\"},";
          $i++;
        }

        if ($i > 0 ) {
          $this->reply = substr_replace($this->reply,"",-1);
          $this->reply .= "]";
        } else {
          $this->reply = "";
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
    echo $this->reply;
  }
  function getServiceType($stmt) {
    $i =0;
    if ($stmt) {
      if ( oci_execute($stmt) ) {
        $this->reply .= "[";
        while ($row = oci_fetch_row($stmt)) {
          $code = str_pad($row[0],5);
          $description = $row[1];
          $this->reply .= "{\"code\":\"".$code."\",".
                            "\"description\":\"".$description."\"},";
          $i++;
        }
        if ($i > 0 ) {
          $this->reply = substr_replace($this->reply,"",-1);
          $this->reply .= "]";
        } else {
          $this->reply = "";
        }
      } else {
        $e = oci_error($stmt);
        echo $e['message'];
      }
    }
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
