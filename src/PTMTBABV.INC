.******************************************************************************
.* System         : Patient and Maternity                                     *
.*                                                                            *
.* Include name   : PTMTBABV.INC                                              *
.*                                                                            *
.* Name           : Variables and FD's for PTMTBABY                           *
.*                    This will be used by IBAHOS73 and IBAMAT02              *
.*                                                                            *
.* Date           : 09/05/1995                                                *
.*                                                                            *
.* Author         : Justin Coates                                             *
.*                                                                            *
.* Function       : To contain the variables and FD's for PTMTBABY.PBL        *
.*                                                                            *
.* Modifications  :                                                           *
.*        V9.07.01  13/07/2006  Mike Laming       CAR 111521                  *
.*                  Change all Bed Fee & Theatre Fee work areas to FORM 8.2   *
.*        V9.03.01  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2      *
.*                  - Change SAVSEX from 6 to 8                               *
.*       V5.07.B02  17/11/1998  Jim Stathopoulos                              *
.*                  Removed the HCS Admission Data Audit Files                *
.                   08/10/1998  Glenn Berry      5.07 changes
.******************************************************************************
.*                                                                            *
.******************************************************************************
.
. ------- FD's required -------
.
          INC       PATAA1FD/INC            * admission audit file
          INC       PATALWFD/INC
          INC       PATBFEFD/INC
          INC       PATCUNFD/INC
          INC       PATFN1FD/INC
          INC       PATIPEFD/INC
          INC       PATNOBFD/INC
          INC       PATNUMFD/INC
          INC       PATONLFD/INC            * on leave file 
          INC       PATRCAUD/INC
          INC       PATSTAFD/INC
          INC       PATTRDAT/INC
          INC       PATVKCFD/INC
          INC       PATWMAFD/INC
          INC       PATWR1FD/INC            * ward/bed file
.
BDATE     DIM       10
BFAMT     FORM      8.2
BFCOL     FORM      1
BFEND1    FORM      3
BFEND2    FORM      3
BFEND3    FORM      3
BFEND4    FORM      3
BFEND5    FORM      3
BFEND6    FORM      3
CALDAYS   FORM      3
CALLWRD   FORM      1
CBFLAG    FORM      1
CODEA     INIT      "A "
CODEBT    INIT      "BT"
CODECL    INIT      "CL"
CODEUNK   INIT      "UNK"
COLNUM    FORM      1
COMFLAG   FORM      1
DANS1     DIM       20
DANS2     DIM       20
DANS3     DIM       20
DANS4     DIM       20
DANS5     DIM       4
DANS6     DIM       11
DEFCOL    FORM      1
DEFLAG    FORM      1
DIM19A    DIM       19
DNETTOT   DIM       11
DOLLAR    INIT      "$"
DPSTAT    DIM       25
DSPONLY   FORM      1
FIELD     FORM      2
FORM62    FORM      6.2
FORM82    FORM      8.2
FROMDATE  DIM       8
HFPORT    FORM      8.2
JYEAR     FORM      2
MAXDISC   FORM      6.2
MAXNUM    FORM      1
MODE      DIM       2
NADM      FORM      3
NBED      DIM       3             * save bed
NBRDAYS   FORM      4
NETTOT    FORM      6.2
NHOSP     DIM       2
NOFEE     FORM      "0"
NOHOSP    FORM      3
NUMBER    FORM      3
NWARD     DIM       3             * save ward
PNAME     DIM       20
SAVADAT   DIM       6
SAVADMNO  FORM      8
SAVATIME  DIM       8
SAVATYP   DIM       3
SAVAUSR7  DIM       3
SAVBTYP   DIM       3
SAVBWGHT  DIM       4
SAVCOL    FORM      1
SAVDNAM   DIM       30
SAVDOC    DIM       6
SAVDTYP   DIM       30
SAVEND    FORM      3
SAVEXTR   FORM      8.2
SAVHF     FORM      8.2
SAVLOC    DIM       30
SAVNOTE   DIM       3
SAVPAT    FORM      8.2
SAVSEX    DIM       8                                         * was 6  *C-49016
SAVTNAM   DIM       25
SAVTOT    FORM      8.2
SAVURNO   DIM       8
STAT1     INIT      "Patient is pre-admitted "
STAT10    INIT      "A.W.O.L.                "
STAT11    INIT      "Discharged              "
STAT2     INIT      "Patient is admitted     "
STAT3     INIT      "Patient is discharged   "
STAT4     INIT      "Patient is on leave     "
STAT5     INIT      "Patient is cancelled    "
STAT6     INIT      "In Hospital             "
STAT7     INIT      "On Short Term Leave     "
STAT8     INIT      "On Trial Leave          "
STAT9     INIT      "On Holiday Leave        "
TODATE    DIM       8
TOTAL     FORM      8.2
WDATE1    DIM       8
WDATE2    DIM       8
.
