.
. Temp Variables
.
. Variable                         Used by
.------------------                ------------
FDESCRP   DIM       30
TDESCRP   DIM       30
FCATALOG  DIM       7
TCATALOG  DIM       7
FRACKSH   DIM       8
TRACKSH   DIM       8
FWAREHS   DIM       5
TWAREHS   DIM       5
FSUPP     DIM       5
TSUPP     DIM       5
FCOST     DIM       5
TCOST     DIM       5
FPRODGP   DIM       5
TPRODGP   DIM       5
FCOMMOD   DIM       5
TCOMMOD   DIM       5
FDATE     DIM       8
TDATE     DIM       8
.
.
LQTYYRDT  FORM      8.2           * IBASUB10* Last YTD Figure
LQTYYRMT  FORM      8.2           * IBASUB10* Last Year Figure
CQTYYRDT  FORM      8.2           * IBASUB10* Current YTD Figure
CQTYYRMT  FORM      8.2           * IBASUB10* Current Month Figure
.
LASTYRDT  FORM      8.2           * IBASUB10* Last YTD Figure
LASTYRMT  FORM      8.2           * IBASUB10* Last Year Figure
PERCEN1A  FORM      4.1           * IBASUB10* % Variance for Month
PERCEN1B  FORM      4.1           * IBASUB10* % Variance for Year
CURRYRDT  FORM      8.2           * IBASUB10* Current YTD Figure
CURRYRMT  FORM      8.2           * IBASUB10* Current Month Figure
FOUNDX    FORM      1
SOSFLAG   FORM      1             * IBASIN50* 1=SOS interface active
.
SUPNAM70  DIM       70
SUPADD90  DIM       90
DAT6      DIM       6
SKEY1     DIM       1
SKEY2     DIM       2
SKEY3     DIM       3
SKEY4     DIM       4
SKEY5     DIM       5
SKEY6     DIM       6
SKEY7     DIM       7
SKEY8     DIM       8
SKEY9     DIM       9 
SKEY10    DIM       10
SKEY11    DIM       11
SKEY12    DIM       12
SKEY13    DIM       13
SKEY14    DIM       14
SKEY15    DIM       15
SKEY16    DIM       16
SKEY17    DIM       17
SKEY18    DIM       18
SKEY19    DIM       19
SKEY20    DIM       20
SKEY35    DIM       35
.
PGTLYRMT  FORM      8.2           * IBASUB12
PGTLYRDT  FORM      8.2           * IBASUB12
PGTCYRMT  FORM      8.2           * IBASUB12
PGTCYRDT  FORM      8.2           * IBASUB12
.
TOTLYRMT  FORM      8.2           * IBASUB10
TOTLYRDT  FORM      8.2           * IBASUB10
TOTCYRMT  FORM      8.2           * IBASUB10
TOTCYRDT  FORM      8.2           * IBASUB10
LASTYEAR  DIM     4               * IBASUB10
VARIAN1A  FORM      8.2                     * $ Variance for the Month
VARIAN1B  FORM      8.2                     * $ Variance for the Year
.
DEFTCST   DIM     5               * IBASIN07
ADDFLAG   FORM    1               * IBASIN50, IBASIN12
SAVEYEAR  DIM     2               * IBASIN57
SAVEPER   DIM     2               * IBASIN57
NEXTREC   DIM     2               * IBASIN57
ORDERNO   FORM    7               * IBASIN53, IBASIN50
ORDFACT   FORM    4               * IBASIN57
FORMSOH   DIM     12              * IBASIN52
FORMSOO   DIM     12              * IBASIN52
FORMROQ   DIM     12              * IBASIN52
FORMROL   DIM     12              * IBASIN52
FORMSOB   DIM     12              * IBASIN52
TOTALOUT  FORM    12.2            * IBASIN57
TOTALREC  FORM    12.2            * IBASIN57
TOTALSOB  FORM    12.2            * IBASIN52
TOTALSOO  FORM    12.2            * IBASIN52
TOTALSOH  FORM    12.2            * IBASIN52
TOTALVAL  FORM    12.6            * IBASIN52
FIRSTQTY  FORM    12.2            * IBASIN57
BACKQTY   FORM    12.2            * IBASIN41
CONTQTY   FORM    12              * IBASIN52, IBASIN53
F12X4     FORM    12.4            * IBASIN53
F12P5     FORM    12.5            * IBASIN53
F9P4      FORM    9.4             * IBASIN53
F12P2     FORM    12.2            * IBASIN52
F8P2      FORM    8.2             * IBASIN53
LASTSUPP  DIM     5               * IBASIN52
CURRDATE  DIM     8               * IBASIN52
SUPNM100  DIM     100             * IBASIN52
SUPAD100  DIM     100             * IBASIN52
TOTALORD  FORM    12.2            * IBASIN52
.
QTYFORM8  FORM    8               * IBASIN31, IBASIN34
DEFTWAR   DIM     5               * IBASIN31, IBASIN34
DEFWDESC  DIM     40              * IBASIN31, IBASIN34
SAVKEY15  DIM     15              * IBASIN31, IBASIN34
COUNT     FORM    5               * IBASIN31, IBASIN34
SIDAT80   DIM     80              * IBASIN31, IBASIN34
SIATT80   DIM     80              * IBASIN31, IBASIN34
.
SAVCAT    DIM       7             * IBASIN02
.
REQNUMB   DIM       7             * IBASIN31, IBASIN32, IBASIN34, IBASIN35
REQTSTAT  FORM      1             * IBASIN31, IBASIN32, IBASIN34, IBASIN35
SAVECAT   DIM       7             * IBASIN32, IBASIN35
SAVEWAR   DIM       5             * IBASIN32, IBASIN35
SEQNUMB   DIM       7             * IBASIN32, IBASIN35
SEQTYPE   DIM       1             * IBASIN32, IBASIN35
SSIRBRQT  FORM      12.2          * IBASIN32, IBASIN35
SSIRBIQT  FORM      12.2          * IBASIN32, IBASIN35
SSIRBAMT  FORM      12.2          * IBASIN32, IBASIN35
SSIIESOH  FORM      12.2          * IBASIN32
FORM12    FORM      12            * IBASIN38
FORM12A   FORM      12            * IBASIN38 IBASUB33
FORM12B   FORM      12            * IBASIN38 IBASUB33
FORM12C   FORM      12            * IBASIN38 IBASUB33
FORM12D   FORM      12            * IBASIN38 IBASUB33
FORM12E   FORM      12            * IBASIN38 IBASUB33
FORM12F   FORM      12            * IBASIN38 IBASUB33
FORM12G   FORM      12            * IBASIN38 IBASUB33
FORM12H   FORM      12            * IBASIN38 IBASUB33
FORM12I   FORM      12            * IBASIN38 IBASUB33
FORM12J   FORM      12            * IBASIN38 IBASUB33
FORM12K   FORM      12            * IBASIN38 IBASUB33
FORM12L   FORM      12            * IBASIN38 IBASUB33
FORM12M   FORM      12            * IBASIN38 IBASUB33
.
RACKSHEL  DIM       8             * IBASIN44
.
. ---- IBASIN70..80, 53, 54 ----
.
A4SIZE    FORM      1
CATFLAG   FORM      1             * IBASIN53
CODEME    INIT      "ME "
CURCOD3   DIM       3
CURCOD7   DIM       7
CURCODE   DIM       7
DESC1     DIM       40
DESC2     DIM       40
DETAIL    FORM      1
DETAILED  DIM       1
END       INIT      "End       "
FROMDATE  DIM       8
FROMCODE  DIM       6                                                  *C-59696
FROMCOD3  DIM       3
FROMCOD7  DIM       7
FROMCO15  DIM       15
LASTCODE  DIM       5
LASTCOD3  DIM       3
LASTCOD7  DIM       7
LASTCO15  DIM       15
TOCODE    DIM       6                                                  *C-59696
TOCOD3    DIM       3
TOCOD7    DIM       7
TOCO15    DIM       15
TODATE    DIM       8
PRDFCOD   DIM       5
PRDTCOD   DIM       5
COSFCOD   DIM       5
COSTCOD   DIM       5
SUPFCOD   DIM       5
SUPTCOD   DIM       5
STAFCOD   DIM       3
STATCOD   DIM       3
OPTIONR   FORM      4
PDESC1    DIM       40
PDESC2    DIM       40
RANGETYP  DIM       1
SEL       DIM       35
SEL1      DIM       35
SEL2      DIM       35
SEL3      DIM       35
SEL4      DIM       35
SEL5      DIM       35
SEL6      DIM       35
SEL7      DIM       35
SEL8      DIM       35
SEL9      DIM       35
SPACING   DIM       1
SRDIM30   DIM       30
START     INIT      "Start     "
TITLE     INIT      "CAT"
OPTIONA   FORM      2
TYPE1     DIM       6
TYPE2     DIM       6
TYPE3     DIM       6
.
HEADESC1  DIM       25            * IBASIN43
LASTITEM  DIM       60            * IBASIN43
F7P2A     FORM      7.2           * IBASIN43 IBASIN54
F7P2B     FORM      7.2           * IBASIN43 IBASIN54
F7P2C     FORM      7.2           * IBASIN54
F7P4A     FORM      7.4           * IBASIN54
F10P2     FORM      10.2          * IBASIN43, IBASIN53
.
DIMUNIT   DIM       17            * SINORDPR
ENDPRT    FORM      1             * SINORDPR
F2A       FORM      2             * SINORDPR
F2B       FORM      2             * SINORDPR
F8P4      FORM      8.4           * SINORDPR
F7P2      FORM      7.2           * SINORDPR
TF7P2     FORM      7.2           * SINORDPR
MAXITEMS  FORM      3             * SINORDPR
NOPRINT   FORM      "0"           * SINORDPR
COUNTFL1  FORM      1             * SINORDPR
COUNTFL2  FORM      1             * SINORDPR
SCLNO     FORM      3             * SINORDPR
SCPAGENO  FORM      3             * SINORDPR
LINE1     DIM       60            * SINORDPR
LINE2     DIM       60            * SINORDPR
LINE3     DIM       60            * SINORDPR
LINE4     DIM       60            * SINORDPR
LINE5     DIM       60            * SINORDPR
LINE6     DIM       60            * SINORDPR
LINE7     DIM       60            * SINORDPR
PRTFLAG   FORM      1             * SINORDPR
.
CALFORM7  FORM      7             * SINCIAKY
CKEYTYPE  FORM      1             * SINCIAKY
CKEYSTCK  DIM       1             * SINCIAKY
SHTOP     FORM      2             * SINCIAKY
SHBOT     FORM      2             * SINCIAKY
SHLEF     FORM      3             * SINCIAKY
SHRIG     FORM      3             * SINCIAKY
SST1      DIM       67            * SINCIAKY
SST2      DIM       67            * SINCIAKY
SST3      DIM       67            * SINCIAKY
SST4      DIM       67            * SINCIAKY
SST5      DIM       67            * SINCIAKY
SST6      DIM       67            * SINCIAKY
SST7      DIM       67            * SINCIAKY
SST8      DIM       67            * SINCIAKY
SST9      DIM       67            * SINCIAKY
SST10     DIM       67            * SINCIAKY
SST11     DIM       67            * SINCIAKY
SST12     DIM       67            * SINCIAKY
SST13     DIM       67            * SINCIAKY
SST14     DIM       67            * SINCIAKY
SST15     DIM       67            * SINCIAKY
SST16     DIM       67            * SINCIAKY
SST17     DIM       67            * SINCIAKY
XTOP      FORM      2             * SINCIAKY
XBOT      FORM      2             * SINCIAKY
XLEF      FORM      3             * SINCIAKY
XRIG      FORM      3             * SINCIAKY
.
F9P2      FORM    9.2             * IBASIN90
.
ATOTAL00  FORM    12.2            * IBASIN85 
ATOTAL01  FORM    12.2            * IBASIN85 
ATOTAL02  FORM    12.2            * IBASIN85 
ATOTAL03  FORM    12.2            * IBASIN85 
ATOTAL04  FORM    12.2            * IBASIN85 
ATOTAL05  FORM    12.2            * IBASIN85 
ATOTAL06  FORM    12.2            * IBASIN85 
ATOTAL07  FORM    12.2            * IBASIN85 
ATOTAL08  FORM    12.2            * IBASIN85 
ATOTAL09  FORM    12.2            * IBASIN85 
ATOTAL10  FORM    12.2            * IBASIN85 
ATOTAL11  FORM    12.2            * IBASIN85 
ATOTAL12  FORM    12.2            * IBASIN85 
ATOTAL13  FORM    12.2            * IBASIN85 
ATOTAL14  FORM    12.2            * IBASIN85 
ATOTAL15  FORM    12.2            * IBASIN85 
.
QTOTAL00  FORM    12.2            * IBASIN85 
QTOTAL01  FORM    12.2            * IBASIN85 
QTOTAL02  FORM    12.2            * IBASIN85 
QTOTAL03  FORM    12.2            * IBASIN85 
QTOTAL04  FORM    12.2            * IBASIN85 
QTOTAL05  FORM    12.2            * IBASIN85 
QTOTAL06  FORM    12.2            * IBASIN85 
QTOTAL07  FORM    12.2            * IBASIN85 
QTOTAL08  FORM    12.2            * IBASIN85 
QTOTAL09  FORM    12.2            * IBASIN85 
QTOTAL10  FORM    12.2            * IBASIN85 
QTOTAL11  FORM    12.2            * IBASIN85 
QTOTAL12  FORM    12.2            * IBASIN85 
QTOTAL13  FORM    12.2            * IBASIN85 
QTOTAL14  FORM    12.2            * IBASIN85 
QTOTAL15  FORM    12.2            * IBASIN85 
.
EXPQTY    FORM    12.2            * IBASIN57 
EXPDAT    DIM     8               * IBASIN57
EXPREF    DIM     20              * IBASIN57
EXPQTY1   FORM    12.2            * IBASIN57 
EXPDAT1   DIM     8               * IBASIN57
EXPREF1   DIM     20              * IBASIN57
EXPQTY2   FORM    12.2            * IBASIN57 
EXPDAT2   DIM     8               * IBASIN57
EXPREF2   DIM     20              * IBASIN57
EXPQTY3   FORM    12.2            * IBASIN57 
EXPDAT3   DIM     8               * IBASIN57
EXPREF3   DIM     20              * IBASIN57
EXPQTY4   FORM    12.2            * IBASIN57 
EXPDAT4   DIM     8               * IBASIN57
EXPREF4   DIM     20              * IBASIN57
EXPQTY5   FORM    12.2            * IBASIN57 
EXPDAT5   DIM     8               * IBASIN57
EXPREF5   DIM     20              * IBASIN57
.
.---- IBASIN60 ----
.
.
ISBUILD   INIT      "isbuild "         * define temp file variables
ISERASE   INIT      "iserase "
TMP0ADAT  INIT      " 29 UC1-20"
NEZTMP0A  IFILE     SQL, FIXED=29, KEY="U1-20"
NAMEA     INIT      "sin60A"
FILENAMA  DIM       8
KILLTMPA  DIM       80
MAKETMPA  DIM       80
.                            * temp file definition
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NEZAWAR   DIM       5      5        1     warehouse
NEZARAS   DIM       8      8        6     rack & shelf
NEZACAT   DIM       7      7        14    catalog
NEZASOH   FORM      12.2   8        21    stock on hand
.
.End of file                        29
.
.---- IBASIN14 ----
.
NEZTMP0B  IFILE     SQL, FIXED=112, KEY="U11-15,16-23,1-1,2-8"
TMP0BDAT  INIT      " 112 UC11-15,16-23,1-1,2-8"
NAMEB     INIT      "sin14B"
FILENAMB  DIM       8
KILLTMPB  DIM       80
MAKETMPB  DIM       80
.
.---- IBASUB38 ----
.
NEZTMP1C  IFILE     SQL, FIXED=153, KEY="U1-1,9-23,2-8"
NEZTMP2C  IFILE     SQL, FIXED=153, KEY="U2-8,9-23,1-1"
TMP0CDAT  INIT      " 153 UC1-1,9-23,2-8 UC2-8,9-23,1-1"
NAMEC     INIT      "sub39C"
FILENAMC  DIM       8
KILLTMPC  DIM       80
MAKETMPC  DIM       80
.
.Name     Type      Length Start Description
.----     ----      ------ ----- -----------
.SIIEABC   DIM      1        1    KEY1a  KEY2c
.SIIACAT   DIM      7        2    KEY1c  KEY2a
.FORM12A   DIM     15        9    KEY1b  KEY2b
.ATOTAL01  DIM     12       24
.SIIADES   DIM     60       36
.SKEY1     DIM      1       96
.SEQTYPE   DIM      1       97
.SKEY35    DIM     35       98
.Spare     DIM     20      133
.
.  End                     153
.
.---- Cost centre security ----
.
KEEPCC    FORM      1
SICSSEC   FORM      1                  * security flag
.                                        0 = none, 1 = 1 cc, 2 = >1 cc, 3 = all
.
.---- variables for old subjective keyin ----
.
CSTRING   DIM       35       * keyed in string (routine GSTR)
CSTRLEN   FORM      2        * string length   (routine GSTR)
CSUBJIND  FORM      "6"      * FMSSBAKY ind.
.                 CSUBJIND 0=all subj, 1=total, 2=non total, 3=non head
.                          4=stat-tot subj, 5=posting subj, 6=norm post subj
HELPSRCH  DIM       35       * help search string
HELPOPTN  FORM      1
.
ABORTNOW  FORM      1
COUNTDAT  FORM      1
BACKDEL   DIM       50       * back order delivery details
.
.DMON      INIT      "Monday"
.DTUE      INIT      "Tuesday"
.DWED      INIT      "Wednesday"
.DTHU      INIT      "Thursday"
.DFRI      INIT      "Friday"
.DSAT      INIT      "Saturday"
.DSUN      INIT      "Sunday"
CONFDESK  DIM       30
MESSDESK  DIM       30
DELDT1    DIM       15
DELDT2    DIM       15
DELDT3    DIM       15
DELDT4    DIM       15
DELDT5    DIM       15
DELDT6    DIM       15
DELDT7    DIM       15
DELDT8    DIM       15
DELDT9    DIM       15
DELDT10   DIM       15
DEL181    DIM       15
