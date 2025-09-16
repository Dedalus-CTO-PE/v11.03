.******************************************************************************
.* System         : Outpatient and NSM                                        *
.*                                                                            *
.* Include name   : OUTBOOKG.INC                                              *
.*                                                                            *
.* Name           : Variables and FD's for OUTBOOKG                           *
.*                    This will be used by IBAOUT66 and IBAPOE32              *
.*                                                                            *
.* Date           : 02/05/1995                                                *
.*                                                                            *
.* Author         : Justin Coates                                             *
.*                                                                            *
.* Function       : To contain the variables and FD's for OUTBOOKG.PBL        *
.*                                                                            *
.* Modifications  :                                                           *
.*                                                                            *
.******************************************************************************
.
. ------- FD's required -------
.
          INC       OUTBOCFD/INC
          INC       OUTSIPFD/INC
          INC       OUTXSCFD/INC
          INC       OUTXWPFD/INC
          INC       PATCT1FD/INC
          INC       PMSHCLFD/INC
          INC       PATKWCFD/INC
          INC       PATVCHFD/INC
.
. ------- variables required -------
.
ABORT     FORM      1
ACCEPT    FORM      1
ATCHAR    DIM       1
AUDIFLAG  FORM      1
CFNAMET   DIM       8
CFNAMEW   DIM       8
CHG       FORM      1
CHGCMN    FORM      1
CHGDIA    FORM      1
CHGPMI    FORM      1
CKACTIVE  FORM      1
CKLINKED  FORM      2
CMNTFILE  FILE      ASCII, FIXED=256
COUNT     FORM      2
CURDATE   DIM       8
DETNFILE  DIM       5
DIM10     DIM       10
DIM40COM  DIM       40
DIM6      DIM       6
DIM8      DIM       8
DIM80     DIM       80
DOCCODE   DIM       6
DOSTAT6   DIM       20
FIELDNO   FORM      5 
FNAMEB    DIM       8
FNAMER    DIM       8
FORM3     FORM      3 
FORM5     FORM      5 
FORM6     FORM      6
HASCMNS   DIM       3
KEYFIELD  DIM       127
MODE      DIM       1
NOEXTRA   FORM      1
NUMPMISC  FORM      1
.>>>>>NZIBVNEW  FORM      1
ORIGVISI  FORM      4         * original visits charged
OUTEXIST  FORM      1         * 1=OP details exist
PMIORBOK  FORM      1
PTCRDFLG  FORM      1         * Card details entered flag
SCCOL     FORM      3
SELECT    FORM      2
SUPRSQST  FORM      1
SVERT     FORM      2
TEMP1     FILE      ASCII, FIXED=256
TOTAL     FORM      6
VCLIN     DIM       6                   * Working Clinic Id
VCSES     DIM       6                   * Working clinic Session (dudley)
VCTYP     DIM       6                   * Working Clinic Type
VDATE     DIM       8                   * Working Clinic Date
VDAY      FORM      1                   * Working Clinic Day
VSITE     DIM       6                   * Working Site
WORDFLAG  FORM      2
XCOMMT    FILE      ASCII, FIXED=70         * tempory temp file
XCOMMW    FILE      ASCII, FIXED=70         * working temp file
YESDFLTS  FORM      1
.
. ------- constants required -------
.
BLTOZERO  INIT      " 0"
CODEAC    INIT      "AC"
CODEC     INIT      "C "
CODET     INIT      "T "
CODEXM    INIT      "XM"
KWCFIL    INIT      "patkwc"
PAGELIMT  FORM      "55"
SP25      INIT      "                         "
Z15       INIT      "zzzzzzzzzzzzzzz"
.
