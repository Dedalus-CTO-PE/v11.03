.*****************************************************************************
.*  Include    : PABXVARS.INC                                                *
.*  Function   : Variables required for PABX billing                         *
.* Modification: V10.04.01 16/04/2014 J.Tan   CAR 261630                     *
.*               Removed port number from temp file name                     *
.*****************************************************************************
.
          INC       IBACHGFD/INC
          INC       IBAEXTFD/INC
          INC       IBAPBXFD/INC
          INC       CALDURNV/INC
........  INC       PATMCHFD/INC
........  INC       PATTRNFD/INC
........  INC       PATWRDRD/INC
.
ACSSLEVL  DIM       4
CANCINV   FORM      1    * 1=Cancel Invoice (set to 1 in HOS94 only) , else = 0
CALDATE8  DIM       8
CHARGE    FORM      3.2
CLLOC     INIT      "Loc -"
CLSTD     INIT      "STD -"
CLISD     INIT      "ISDN-"
CLLOCLNG  INIT      "Local Phone Calls"
CLSTDLNG  INIT      "STD Phone Calls"
CLISDLNG  INIT      "ISDN Phone Calls"
. CMDLINE   DIM       80
ETDATE8   DIM       8
ETTIME    DIM       6
EXTDATE8  DIM       8
EXTENSN   DIM       4
LEVLHCOD  DIM       4
LVLDHCOD  DIM       4
PBXFNAME  DIM       8
PBXFNAM2  DIM       8
PHLENGTH  FORM      2
PHONHCOD  DIM       4
SAVEXTN   DIM       4
SAVCHRG   DIM       3
SCRPTFIL  INIT      "iba_pabx_control"
SERVICE   DIM       1
SRVLHCOD  DIM       4
STDURN    INIT      "Durn: "
STPHONE   INIT      "Phone: "
. ZED20     INIT      "zzzzzzzzzzzzzzzzzzzz"
.
TMPFILE   IFILE     SQL, FIXED=64, KEY="U1-4,5-5,6-13,14-21"
XEXTN     DIM       4     1     * extension
DXTYPE    DIM       1     5     * type of call 1=local, 2=STD, 3=ISDN
XCALDATE  DIM       8     6     * call date
XCALTIME  DIM       8    14     * call time
XAMOUNT   FORM    3.2    22     * $Amount (charge)
XCDESC    DIM      30    26     * description
XCALDURN  DIM       8    56     * call duration
.     end of record      64
XTYPE     FORM      1
.
TMPFIL2   IFILE     SQL, FIXED=15, KEY="U1-1"
. DXTYPE  DIM       1      1     * type of call 1=Local, 2=STD, 3=ISDN
XTOTCOST  FORM    5.2      2     * Total Cost
. XCALDATE  FORM      8      7     * Call Date (will store Last call for type)
.    end of record        15

