.****************************************************************************
.*
.* Include         :   WATAHSVR
.*
.* Function        :   Defines data variables use in WATAHOCS
.*
.* Author          :   Whirlpool
.*
.* Date            :   10/12/92
.*
.* Modifications  :                                                           
.*        V5.03.02  13/11/1995    Howellsy       (SUHT mods)
.*                  added Temp File        
.*        V5.03.01  09/11/1995    Justin Coates  (SUHT mods)
.*                  added more variables
.******************************************************************************
.*   Modifacations   :   08/04/93  Whirlpool
.*                                 Added more varibles (Obviously)
.*                       11/04/93  Graeme Williams
.*                                 Added DIM8, DIM9, DIM10 back in
.*                       11/05/93  Steve O'Gorman
.*                                 Removed CODET - clash with PMIVARS
.*                                 Changed CODERS from "T " to "RS"
.*                       26/05/93  Whirlpool
.*                                 Added SECCOUNT
.*                       23/03/94  Rob Leonard   SRF 44075
.*                                 Added PRINTOPT
.*
.*********************************************************************
.
ADMINCAT  DIM       3
ANYPRACF  FORM      1
CALCLOW   FORM      6         * calculated length of wait (days)
CFRFROM   DIM       3
CFRTO     DIM       3
CODEA     INIT      "A "          *          A  (patient classification)
CODECG    INIT      "CG"          *          CG (directorate)
CODERS    INIT      "RS"          *          RS (resident status)
CODETP    INIT      "TP"          * catagory TP (priority)
CODEW1    INIT      "W1"          * catagory W1
CODEW2    INIT      "W2"          * catagory W2
CODEW3    INIT      "W3"          * catagory W3
CODEW4    INIT      "W4"          * catagory W4
CODEWS    INIT      "WS"          *          WS (short notice)
CODEWU    INIT      "WU"          * catagory WU (clinic/unit)
COL       FORM      2
COUNT     FORM      2
DATE10    DIM       10           * wmdate1  (dd/mm/ccyy)
DATE20    DIM       10           * wmdate2  (dd/mm/ccyy)
DATE30    DIM       10           * wmdate3  (dd/mm/ccyy)
DCEASEFL  FORM      1
DESCSTAT  DIM       12
DIM10     DIM       10
DIM3      DIM       3
DIM6      DIM       6
DIM8      DIM       8
DIM9      DIM       9
DIMC01    DIM       19
DIMC02    DIM       19
DIMC03    DIM       19
DIMC04    DIM       19
DIMC05    DIM       19
DIMC06    DIM       19
DIMC07    DIM       19
DIMC08    DIM       19
DIMC09    DIM       19
DIMC10    DIM       19
DIMC11    DIM       19
DIMC12    DIM       19
DIMC13    DIM       19
DIMC14    DIM       19
DIMC15    DIM       19
DIMC16    DIM       19
DIMC17    DIM       19
DISOFRES  DIM       3
DOCCODE   DIM       6
DSACNUM   FORM      3
EADMTYPE  DIM       3
ENDATE    DIM       8
ENDCODE   DIM       10
EXTRFLAG  FORM      1
FDATE1    DIM       8            * filedate start ccyymmdd
FDATE2    DIM       8            * filedate end ccyymmdd
FILECODE  DIM       3
FROMAGE   FORM      3
FROMCONS  DIM       6
FROMDDOS  DIM       8
FROMDIR   DIM       3
FROMDNAB  DIM       8
FROMDONL  DIM       8
FROMDREM  DIM       8
FROMDSAD  DIM       8
FROMGADD  DIM       8
FROMLOW   FORM      3
FROMLSTT  DIM       8
FROMPATC  DIM       3
FROMPROC  DIM       9
FROMTIME  FORM      5
FTFLAG    FORM      1
GPPRAC    DIM       6
KCOL2     FORM      3         * second column keyin
KSTATUS1  FORM      1
KSTATUS2  FORM      1
KSTSTAY   FORM      5
KSTUR     DIM       8
KTOSTAY   FORM      5
KTOUR     DIM       8
MATCHF1   FORM      1
MATCHF10  FORM      1
MATCHF11  FORM      1
MATCHF12  FORM      1
MATCHF13  FORM      1
MATCHF14  FORM      1
MATCHF15  FORM      1
MATCHF16  FORM      1
MATCHF17  FORM      1
MATCHF18  FORM      1
MATCHF19  FORM      1
MATCHF2   FORM      1
MATCHF20  FORM      1
MATCHF21  FORM      1
MATCHF22  FORM      1
MATCHF23  FORM      1
MATCHF24  FORM      1
MATCHF25  FORM      1
MATCHF26  FORM      1
MATCHF27  FORM      1
MATCHF28  FORM      1
MATCHF29  FORM      1
MATCHF3   FORM      1
MATCHF30  FORM      1
MATCHF31  FORM      1
MATCHF32  FORM      1
MATCHF4   FORM      1
MATCHF5   FORM      1
MATCHF6   FORM      1
MATCHF7   FORM      1
MATCHF8   FORM      1
MATCHF9   FORM      1
PRINTOPT  FORM      1
PRIORITY  DIM       3
PROPTION  FORM      1
PURCHASR  DIM       5
REFERGP   DIM       8
REFRESH   FORM      1
REGISGP   DIM       8
REMREAS   DIM       3
RESGROUP  DIM       3
RESISTAT  DIM       3
ROW       FORM      2
SCOL      FORM      2
SCRPNTED  FORM      1         * 1 = screen painted
SDATE     DIM       8
SECCOUNT  FORM      3
SHRTSTAY  DIM       3
SPECIALT  DIM       3
STAT1     INIT      "Unscheduled "
STAT2     INIT      "Scheduled   "
STAT3     INIT      "Pre-admitted"
STAT4     INIT      "Admitted    "
STAT5     INIT      "Discharged  "
STAT6     INIT      "Removed     "
STAT7     INIT      "Performed   "
STAT8     INIT      "Not Performd"
STRTCODE  DIM       10
SVERT     FORM      2
TOAGE     FORM      3
TOCONS    DIM       6
TODDOS    DIM       8
TODIR     DIM       3
TODNAB    DIM       8
TODONL    DIM       8
TODREM    DIM       8
TODSAD    DIM       8
TOGADD    DIM       8
TOLOW     FORM      3
TOLSTT    DIM       8
TOPATC    DIM       3
TOPROC    DIM       9
TOTIME    FORM      5
TOTLFLAG  FORM      1
USEINDEX  FORM      1         * which index to use in processing
WRTOTEMP  FORM      1         * write to temp file (1=Yes, 0=No)
WTSPDTCK  DIM       8         * date to check if on suspension at
WTSPSTOP  DIM       8         * suspension end date
WTSPSTRT  DIM       8         * suspension from date
YPOS1     FORM      2
YPOS2     FORM      2
YPOS3     FORM      2
YPOS4     FORM      2
YPOS5     FORM      2
.
.         Temporary File Definition
.         -------------------------
FNAMEX    DIM       8
TEMPXA    IFILE     SQL, FIXED=105, KEY="U1-8,9-17,18-19"
KEYXA     INIT      " 105 U1-8,9-17,18-19" 
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XXXURN    DIM       8           8           1       U/R Number    
XXXPRC    DIM       9           9           9       Procedure Code
XXXCNT    DIM       2           2           18      Procedure Unique Count
XXXCON    DIM       6           6           20      Consultant      
XXXLST    DIM       3           3           26      List Type   
XXXSTA    DIM       1           1           29      Procedure Status
XXXNAM    DIM       25          25          30      Patient Name     
XXXDES    DIM       50          50          55      Procedure description
.                                          105
ISBUILD   INIT      "isbuild "
ISERASE   INIT      "iserase "
...............................................................................
