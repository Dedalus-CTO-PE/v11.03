....      INC       STD001FD
....      INC       PATMWSFD/INC
....      INC       PATALRFD/INC
....      INC       PATCODFD/INC
....      INC       PATMA1FD/INC
....      INC       PATCONFD/INC
.
ALRDISP   DIM       4[26]
ALRTSEC   FORM      1                       * Insufficient Alert Security
                                              1 = Yes, 0 = No
ASRHTEXT  DIM       17
ASRHCODE  DIM       3
ASRHCAT   DIM       1
ASRHDATE  DIM       8
BMWALEM   FORM      1
CHGALR    FORM      1
CHNGSEV   FORM      1
CCOLB     FORM      2
. CMDLINE   DIM       80
. CODE      DIM       2
. COUNT1    FORM      2
DCODSYS0  INIT      "No coding system"
DCODSYS1  INIT      "ICD-9"
DCODSYS2  INIT      "ICD-9-CM"
DCODSYS3  INIT      "RCC5 (READ)"
DCODSYS4  INIT      "ICPC"
DCODSYS5  INIT      "PAXUS AMR Codes"
DLIFE     FORM      2
DOBCC     DIM       2
DOBYY     DIM       2
DOBMM     DIM       2
DOBDD     DIM       2
COUNT2    FORM      2
COUNTER   FORM      2
CURSPOS   FORM      2
CVERT1    FORM      2
CVERT2    FORM      2
DESC55    DIM       55
DIMA      DIM       1
ENQMAIN   FORM      1
FHDR2     INIT      "mwalrb"        * temp file B
FHDR1     INIT      "mwalra"        * temp file A
FNAMEA    DIM       8
FNAMEB    DIM       8
INSEARCH  FORM      1
MORERECS  FORM      1
MWDSPALL  FORM      1
MWTODAY   DIM       8
NUMRECS   FORM      2
NUMRECS1  FORM      2
NUMRECS2  FORM      2
. SAVCVERT  FORM      2
SAVCVERT  FORM      2
SAVKEY14  DIM       14
SAVCODE   DIM       3
SAVCAT    DIM       2
SAVSEV    DIM       3
SEVDISP   DIM       6[13]
SEVINDIC  DIM       1
. SP70      INIT      "                                   ":
.                     "                                   "
SAXSEV    DIM       3
SAXDATE   DIM       8
SAXWDESC  DIM       60
TMPQUE    DIM       2
WINDOW    FORM      1
XPSTALR   FORM      1
ZED6      INIT      "zzzzzz"
.
AXSEV     DIM       3      1
DAXCNT    DIM       3      4
AXWDESC   DIM       60    15
AXAPDATE  DIM       8     75
AXCODSYS  FORM      2     83
AXCODWAR  DIM       9     85
.    End of record        94
AXCNT     FORM      3
.
. Temp file definition (Alerts)
TEMPFILB  IFILE     SQL, FIXED=32, KEY="U1-2,3-5"
AXCAT     DIM       2      1
AXCODE    DIM       3      3
AXADESC   DIM      17      6
AXDATE   DIM       8     23
AXLIFE    DIM      1      31
.   End of record         32

. Temp file definition (Medical Warnings)
TEMPFILA  IFILE     SQL, FIXED=143, KEY="U1-3,4-6"
.
.Record structure for TEMPFILA
.PTMWCLSS  DIM       3      3        1     Severity of Warning (Cat xx)
.DPTMWCNT  DIM       3      3        4     Unique counter
.PTMWDATE  DIM       8      8        7    Date of onset
.PTMWTEXT  DIM       70     70       15    Text description
.PTMWMARC  DIM       8      8        85    MARC approval date (Danger only)
.PTMWHOSP  DIM       20     20       93   Facility who reported warning
.PTMWDOCT  DIM       5      5        113   National Doctor code (Doctor only)
.PTMWSYS   FORM      2      2        118   Coding system being used
.PTMWCODE  DIM       9      9        120   Code for warning (danger only)
.PTMWLUPD  DIM       14     14       129   Date/Time last updated CCYYMMDDHHMMSS
.End of Record                       143  
.
