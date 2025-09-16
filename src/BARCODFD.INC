.******************************************************************************
.*                               BARCODFD.INC                                 *
.*                               ------------                                 *
.* This include defines all variables required for the printing of Bar Codes. *
.*                                                                            *
.* Author   :  DIG  13/09/89                                                  *
.*                                                                            *
.* Modifications                                                              *
.*        V10.04.01 28/05/2014  Steve Armstrong  CAR 301697                   *
.*                  Extended HP1ID & TEMPHPID from DIM 20 to DIM22 to handle  *
.*                  long format of barcode.                                   *
.******************************************************************************
.*        V10.03.01 07/11/2011  Mike Laming      CAR 253086                   *
.*                  Mods for WA Health Zebra Bar Code labels added ZEBFNAME   *
.*        V10.02.02 25/08/2011  Mike Laming      CAR 248541                   *
.*                  Correct Zebra format - now 22 chars using ZEBBAR22        *
.*        V10.02.01 14/07/2011  Mike Laming   CAR 240724                      *
.*                  Added ZEBBAR20 - DIM 20 (contains Hospital Id.)           *
.*                  Changed BARSTRNG to DIM 22, added LFPREFIX                *
.*        V9.12.01  31/07/2009  Ebon Clements CAR 202737                      *
.*                  Added ZEBBAR17 - DIM 17 zebra barcode                     *
.*        V9.07.01  14/09/2006  Ebon Clements CAR 107236                      *
.*                  Added IBAPREFX for use with MRCNIBAP - Allegra barcodes   *
.*        V9.04.04  16/09/2005  Mike Laming   CAR 68672                       *
.*                  Added variables for Datamax E-class                       *
.*        V9.04.03  14/06/2005  Steve Armstrong  CAR 62213                    *
.*                  Added ZEBSNAME, ZEBGNAME & ZEBURNO                        *
.*        V9.04.02  07/06/2005  Sandra Barcham   CAR 60350                    *
.*                  Change definition of ZEBRABAR from 20 to 8                *
.*        V9.04.01  07/04/2005  Steve Armstrong  CAR 60350                    *
.*                  Added ZEBRABAR for Zebra printer                          *
.******************************************************************************
.*        V5.08.01  07/08/2000  Steve Armstrong                               *
.*                  Added variables for SATO - CX200      (BARSTRNG & LABNUM) *
.******************************************************************************
.*        V5.07.01  05/02/1999  Steve Armstrong                               *
.*                  Added variables for Epson DLQ-3000+                       *
.******************************************************************************
.*        V5.01     07/02/90  D.Di.Paola   SRF 103876                         *
.*                  Changed labcount variable to a form3.                     *
.*        V5.01.02  26/11/92  DIG                                             *
.*                  Added some variables for the changes to                   *
.*                  BARCODEL for H.R.H.                                       *
.*        V5.01.03  29/01/93  DWJ                                             *
.*                  HRH layout (Quote : 7561)                                 *
.*        V5.01.03  21/07/1993    Lofty the Pom       (Dudley changes)        *
.*                  Added LCI and BSL for Dongle/Epson printers               *
.*        V5.01.04  11/03/1994    Justin Coates  (Hawkes bay Changes)         *
.*                  added $BON3, $BON4 & $BON5 for their printer              *
.*        V5.01.05  22/04/1994  Steve Armstrong  (Taranaki mods)              *
.*                  added $BON6 for their printer                             *
.*        V5.01.06  10/05/1994  Steve Armstrong                               *
.*                  Added $BON7 for extra Taranaki line                       *
.******************************************************************************
.
.------ Octal variables etc needed in the actual print statements ------
.
$BON1     DIM       3
$BON2     DIM       5
$BON3     DIM       15
$BON4     DIM       15
$BON5     DIM       15
$BON6     DIM       15
$BON7     DIM       15
$BOFF1    DIM       3
AAA       INIT      0141
AMP       INIT      046
AST       INIT      052
BARFMAT   DIM       7                                                  *I-68672
BARSTRNG  DIM       22                      * (was DIM 17)            *C-240724
BLEN      INIT      100
BSL       INIT      0134
CAN       INIT      030
CODE39    INIT      05
DBON      INIT      033,"W",01
DBOFF     INIT      033,"W",00
DPI       INIT      002
EEE       INIT      0105
ESC       INIT      033
ETB       INIT      027
ETX       INIT      03
FIV       INIT      065
FOR       INIT      064
GT        INIT      076
HHH       INIT      0150
IBAPREFX  INIT      "IBA"
LFPREFIX  INIT      "LF"                    * "Long Format"           *I-240724
LABNUM    DIM       3
LABFONT   DIM       1                                                  *I-68672
LBLLEFT1  DIM       40
LBLRGHT1  DIM       40
LBLLEFT2  DIM       40
LBLRGHT2  DIM       40
LBLLEFT3  DIM       40
LBLRGHT3  DIM       40
LBLLEFT4  DIM       40
LBLRGHT4  DIM       40
LBR       INIT      050
LCC       INIT      0143
LCI       INIT      "i"
LCS       INIT      "s"
LEN       INIT      027
LT        INIT      074
MINUS3    EQU       253
NULL      INIT      000
ONNE      INIT      061
QQQ       INIT      0161
RET       INIT      015
RRR       INIT      0162
RS        INIT      036
SSS       INIT      0163
STX       INIT      02
TXTFMAT   DIM       7                                                  *I-68672
TXTSIZE   DIM       8                                                  *I-68672
THR       INIT      063
TTT       INIT      0164
TWWO      INIT      062
UCB       INIT      0102
UCC       INIT      0103
UHH       INIT      0110
UQQ       INIT      0121
UUU       INIT      0165
UZZ       INIT      0132
VVV       INIT      0166
VOLNO     DIM       6
ZEBSNAME  DIM       15
ZEBGNAME  DIM       15
ZEBURNO   DIM       8
ZEBFNAME  DIM       60                      * Zebra Surname, First name, Second
ZEBRABAR  DIM       8
ZEBBAR17  DIM       17
ZEBBAR22  DIM       22
ZER       INIT      060
ZZZ       INIT      0172
LOWCASE   INIT      "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"
.
.------ Constants ------
.
FRTY2     FORM      "42"
FRTY5     FORM      "45"
.
.------ Global Variables ------
.
DIM16     DIM       16
.
FLAGDOUB  FORM       1
.
HP1ID     DIM       22                                                *C-240724
HP1LINE1  DIM       40
HP1LINE2  DIM       40
HP1LINE3  DIM       40
HP1LINE4  DIM       40
HP1LINE5  DIM       40
HRHLINE1  DIM       20
HRHLINE2  DIM       20
.
LABCOUNT  FORM      3
LABID     DIM       80
LABLINE1  DIM       80
LABLINE2  DIM       80
LABLINE3  DIM       80
LABLINE4  DIM       80
LABLINE5  DIM       80
LABLINE6  DIM       80
LABLINE7  DIM       80
LABLINE8  DIM       80
LABLINE9  DIM       80
LABLNE10  DIM       80
.
REP1ID1   DIM       4
REP1ID2   DIM       4
REP2ID1   DIM       6
REP2ID2   DIM       6
REP3ID1   DIM       4
REP3ID2   DIM       4
REPDESC1  DIM       40
REPDESC2  DIM       40
REPFILE   FORM      2
REPID1    DIM       20
REPID2    DIM       20
.
TEMPHPID  DIM       22                                                *C-240724
.
. ---- for repat label only ----
.
TEMPURNO  DIM        8
TEMPSURN  DIM       17
TEMPGIVN  DIM       20
TEMPDOB   DIM        8
TEMPVOL   DIM        3
TEMPLABL  DIM       20                                                *C-240724
.
