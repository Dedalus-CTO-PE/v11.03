.
. IBADLABS.PBL   --  Common Data Include to Print Labels for,
. ------------        In-Patients, Out-Patients & A+E
.
.             These variables are used for printing labels. Other variables
.             required are:
.                              CSIZLAB  FORM  1      from CONTROLF
.                              CONAME   DIM   35     from CONTROLF
.
.             Other INCLUDES required are:
.
.                              PATMISFD - Details of Admission
.                              PATMASFD - Details of Patient
.                              PATDOCFD - Details of Patient's Doctor(s)
.                              PATTRNFD - For determining Ward/Bed
.                              PATSETLB - Subroutine to set the variables
.                              PATVISA  - MAIN VISITORS FILE
.
.                              AAEDETFD - Details of Admission
.                              AAESETLB - Subroutine to set the variables
.
.                              OUTBOKFD - Booking information
.                              OUTPRLAB - Subroutine to print labels
.  Mods :
.  V10.06.01  16/07/2015  Steve Armstrong  CAR 315999
.             Added WLINEZ20 & WLINEZ21 variables
.  V10.05.03  23/09/2014  Steve Armstrong  CAR 294204
.             Further alignment changes to URNOLEFT and VISNLEFT
.  V10.05.02  15/09/2014  Steve Armstrong  CAR 294204
.             Changed URNOLEFT and VISNLEFT to be FORM 3 fields
.  V10.05.01  21/07/2014  Steve Armstrong  CAR 294204 
.             Added new variables for SJOG Geelong labels
.  V10.03.01  25/02/2012  Peter McMullen   CAR 271555 
.             Removed CR and LF constants (now in IBAWEBCD.INC)
.   V9.04.01  24/06/2005  Steve Armstrong  CAR 64477
.             Added WLIN1BHS & WLIN2BHS.
.   C2.09.03  18/04/2002  Tonii
.             Added variable ZPMI for St Vincent's PMI label
.   C2.09.02  05/09/2001  Tonii 
.             Mods for Royal Children's
.              - Added new variables for the RCH labels   
.   C2.09.01  09/08/2001  Tonii 
.             Mods for St Vincent's
.              - Added new variables for the Zebra printer
.   C1.00.01  21/08/1996  Greg Horvat      Quote 8733
.             Added WLINE1D to WLINE8D
.
.********************************************************************
.*                           PATIENT LABELS                         *
.********************************************************************
.
.**** Variables for the SJOG Geelong I/P, O/P and ED labels
.
URLENGL1  FORM      "949"
URLENGL2  FORM      "953"
URLENGL3  FORM      "888"
URLENGL4  FORM      "916"
URLENGL5  FORM      "858"
URLENGL6  FORM      "880"
URLENGL7  FORM      "822"
URLENGL8  FORM      "853"
URLENGR1  FORM      "2149"
URLENGR2  FORM      "2153"
URLENGR3  FORM      "2088"
URLENGR4  FORM      "2116"
URLENGR5  FORM      "2058"
URLENGR6  FORM      "2080"
URLENGR7  FORM      "2022"
URLENGR8  FORM      "2053"
URNOLEFT  FORM      3
URNORIGT  FORM      4
VISNLEFT  FORM      3
VISNRIGT  FORM      4
VSLENGL1  FORM      "891"
VSLENGL2  FORM      "860"
VSLENGL3  FORM      "818"
VSLENGL4  FORM      "825"
VSLENGL5  FORM      "763"
VSLENGL6  FORM      "787"
VSLENGL7  FORM      "722"
VSLENGL8  FORM      "755"
VSLENGR1  FORM      "2091"
VSLENGR2  FORM      "2060"
VSLENGR3  FORM      "2018"
VSLENGR4  FORM      "2025"
VSLENGR5  FORM      "1963"
VSLENGR6  FORM      "1987"
VSLENGR7  FORM      "1922"
VSLENGR8  FORM      "1955"
REMNDER   FORM      3
LOOPCNT   FORM      1
SJOGFLAG  FORM      1             * SJOG label type flag
.                                    1 = ED
.                                    2 = O/P
.                                    3 = I/P
SJOGLIN1  DIM       75
SJOGLIN2  DIM       75
SJOGLN3A  DIM       8
SJOGLN3B  DIM       23
SJOGLIN4  DIM       54
SJOGLN5A  DIM       14
SJOGLN5B  DIM       21
SJOGLN6A  DIM       19
SJOGLN6B  DIM       3
SJOGLN6C  DIM       8
SJOGLIN7  DIM       75
SJOGLIN8  DIM       22
SHTCOUNT  FORM      2
UPPTOLOW  INIT      "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"
.
.***********************
.
.
WLIN1BHS   DIM     30            * BHS triage label - presenting complaint lines
WLIN2BHS   DIM     30
.
.          Small Labels
.
WGLINE1    DIM     33
WGLINE2    DIM     33
WGLINE3    DIM     33
WLINE1     DIM     33
WLINE2     DIM     33
WLINE3     DIM     33
WLINE4     DIM     33
WLINE5     DIM     33
WLINE6     DIM     33
WLINE7     DIM     33
WLINE8     DIM     33
.
WLINE1D    DIM     35
WLINE2D    DIM     35
WLINE3D    DIM     35
WLINE4D    DIM     35
WLINE5D    DIM     35
WLINE6D    DIM     35
WLINE7D    DIM     35
WLINE8D    DIM     35
.
.          Large Labels
.
WLINE1A    DIM     38
WLINE2A    DIM     38
WLINE3A    DIM     38
WLINE4A    DIM     38
WLINE5A    DIM     38
WLINE6A    DIM     38
WLINE7A    DIM     38
WLINE8A    DIM     38
.
WLINE1B    DIM     38
WLINE2B    DIM     38
WLINE3B    DIM     38
WLINE4B    DIM     38
WLINE5B    DIM     38
.
WLINE1C    DIM     38
WLINE2C    DIM     38
WLINE3C    DIM     38
WLINE4C    DIM     38
WLINE5C    DIM     38
.
.**** Variables for the Zebra Printer 
.
WLINEZ1   DIM       25
WLINEZ2   DIM       25
WLINEZ3   DIM       25
WLINEZ4   DIM       25
WLINEZ5   DIM       25
WLINEZ6   DIM       25
WLINEZ7   DIM       25
WLINEZ8   DIM       25
WLINEZ9   DIM       25
WLINEZ10  DIM       25
WLINEZ11  DIM       25
WLINEZ12  DIM       25
WLINEZ13  DIM       25
WLINEZ14  DIM       25
WLINEZ15  DIM       45
WLINEZ16  DIM       25
WLINEZ17  DIM       25
WLINEZ18  DIM       25
WLINEZ19  DIM       25
WLINEZ20  DIM       40
WLINEZ21  DIM       40
.
HPDES      INIT    "HP"
PPDES      INIT    "PP"
.
.    this is an indicator to stop open and close prnts
.    BECAUSE  ibabil84 prints multiple patients 
.    ( ie OPNPRNT AND CLSPRNT IS IN MAIN PROGRAM)
.    1 = STOP OPN & CLS STATEMENT  USED IN INC PATPRLAB
.
STOPQUE    FORM    1
.
.    ( ie OPNPRNT AND CLSPRNT IS IN MAIN PROGRAM)
.       CPRTFLAG =3 STOPS ANY OPENS OR CLOSES
.
SAVEPRT   FORM      2
.
.      TABPOS  FOR SMALL OR WIDE LABELS
.
TABPOS2    FORM    2
TABPOS3    FORM    2
.********************************************************************
.*                      AAE & OUTPATIENT LABELS                     *
.********************************************************************
DESC16    DIM       16
.
.         Normal Labels
.
WFLINE1   DIM       40         AAE uses the First Six Variables Here
WFLINE2   DIM       40
WFLINE3   DIM       40
WFLINE4   DIM       40
WFLINE5   DIM       40
WFLINE6   DIM       40
WFLINE7   DIM       40
WFLINE8   DIM       40
.
.         Mammography X-Ray Labels
.
MXRLINE1  DIM       30
MXRLINE2  DIM       30
MXRLINE3  DIM       30
MXRLINE4  DIM       30
MXRLINE5  DIM       30
MXRLINE6  DIM       30
MXRLINE7  DIM       30
MXRLINE8  DIM       30
.
.
FREETEXT  DIM       60                 * Free Format Text Line for U/R Labels 
.
.         Variables used in PACKNAME to format a name
.
PNTITLE   DIM       4
PNGNAME   DIM       30
PNSNAME   DIM       30
PNFNAME   DIM       30
.--------------------------------------------------
. Following Variables Added for 5.01 Compatibility
.--------------------------------------------------
ACCMSTAT   DIM     12
ADD121     DIM     21
ADD212     DIM     12
ADOC13     DIM     13
ADOCSURN   DIM     16
ADMLINE    DIM     20
.
BOLDSURN   DIM     18
BOLDUR     DIM     16
.
CATA       INIT    "A "
.
CURRDATE   DIM     8
.
LN5DIM30   DIM     30
.
RDOCSURN   DIM     16
RELDESC    DIM     10
.
Z20        INIT    "ZZZZZZZZZZZZZZZZZZZZ"
.
TABPOS4    FORM    2
WFLINE9    DIM     40
WFLINE10   DIM     40
.
LABPRINT   FORM    3
LABCOS     FORM    1
.
.********************************************************************
.*                     Constants for the Zebra Printer              *
.********************************************************************
ZCOPY     DIM       2
ZXA       INIT      "^XA"          * Start print label
ZXZ       INIT      "^XZ"          * End print label
ZPQ       INIT      "^PQ"          * Number of labels to print
ZFD       INIT      "^FD"          * Field Data, defines data string for fld
ZFS       INIT      "^FS"          * Field Separator to end a data string
ZIP       INIT      "IP "          * Inpatient indicator
ZOP       INIT      "OP "          * Outpatients
ZEP       INIT      "EP "          * Emergency patient
ZPMI      INIT      "PMI"          * PMI Labels        
.
. Default Barcode style print for St Vincent's
.
ZBARCOD   INIT      "^FO005,005^BY1,3,080^B3N,N,25,N^FD"

.
. Default Barcode style print for Royal Children's
.
ESC       INIT      ""
MARGIN    INIT      "&l1e68F"
RESET     INIT      "E" 
.
HPA07FNT  INIT      "(8U(s1p7.00v0s3b16602T"    * Arial  7pt font
HPA08FNT  INIT      "(8U(s1p8.00v0s3b16602T"    * Arial  8pt font
HPA10FNT  INIT      "(8U(s1p10.00v0s3b16602T"   * Arial 10pt font
HPA14FNT  INIT      "(8U(s1p14.00v0s3b16602T"   * Arial 14pt font
.----- Column 1
HPLINE1A  INIT      "*p+0X"                   * Starting position
HPLINE2A  INIT      "*p+54X"                  * 54 dots across
HPLINE3A  INIT      "*p+335X"                 * 350 dots across
HPLINE4A  INIT      "*p+375X"                 * 390 dots across
HPLINE5A  INIT      "*p+400X"                 * 400 dots across
HPLINE6A  INIT      "*p+610X"                 * 610 dots across
HPLINE7A  INIT      "*p+665X"                 * 665 dots across
.----- Column 2
HPLINE1B  INIT      "*p+810X"                 * 810 dots across
HPLINE2B  INIT      "*p+864X"                 * 864 dots across
HPLINE3B  INIT      "*p+1150X"                * 1160 dots across
HPLINE4B  INIT      "*p+1200X"                * 1210 dots across
HPLINE5B  INIT      "*p+1240X"                * 1240 dots across
HPLINE6B  INIT      "*p+1440X"                * 1440 dots across
HPLINE7B  INIT      "*p+1505X"                * 1505 dots across
.----- Column 3
HPLINE1C  INIT      "*p+1620X"                * 1620 dots across
HPLINE2C  INIT      "*p+1674X"                * 1674 dots across
HPLINE3C  INIT      "*p+1950X"                * 1970 dots across
HPLINE4C  INIT      "*p+2000X"                * 2020 dots across
HPLINE5C  INIT      "*p+2030X"                * 2030 dots across
HPLINE6C  INIT      "*p+2230X"                * 2230 dots across
HPLINE7C  INIT      "*p+2315X"                * 2315 dots across
.
HPBARCOD  INIT      "(0Y(s0p8.1h12v0s0b0T*"      * Barcode style
.
.------- Special Variables for RCH labels
.
WRCHURNO  DIM       8          
WRCHURNT  DIM       9          
ASTRIX    INIT      "*"
WRCHABOR  DIM       5
WRCHFLAG  DIM       3
LINE      FORM      1
.
POSITION  FORM      "100"
REMAINDR  FORM      1
VALUE     FORM      2
. 
