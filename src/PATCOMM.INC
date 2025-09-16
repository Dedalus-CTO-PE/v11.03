. *****************************************************************************
. *                                                                           *
. * Include Name :  PATCOMM.INC                                               *
. *                                                                           *
. * Function     :  Data Definition Include for                               *
. *                 PATCOMN.PBL Patient standard library                      *
. *                                                                           *
. * Modifications:                                                            *
. *       V10.02.02 09/07/2011  Steve Armstrong  CAR 240722                   *
. *                 Changed CPOLD70 to CPOLD115 for PATGSRFD key change       *
. *       V10.02.01 21/04/2011  Jill Parkinson  CAR 240721                    *
. *                 Added URWAARARY                                           *
. *       V5.08.03  01/06/2001  Steve Armstrong                               *
. *                 Added ACTPCNTY, ACTNCNTY & ACTECNTY                       *
. *       V5.08.02  20/02/2001  Greg Horvat                                   *
. *                 Added ACTTMP1 & ACTURNO                                   *
. *       V5.08.01  17/11/2000  Davin                                         *
. *                 Added ACTFLAG & ACTSRFLG                                  *
. *       V5.01.01  18/04/89 Graeme Williams                                  *
. *                 Added CPSYSRG, CPSYSTEM                                   *
. *       V5.01.02  08/05/89 Graeme Williams                                  *
. *                 Added CPTDATE                                             *
. *       V5.01.03  14/07/89 Darren Jones                                     *
. *                 Added CMPURNO, C8PURNO, C6PURNO                           *
. *       V5.01.04  31/07/89 Graeme Williams                                  *
. *                 Added CPNXTU, CPMAXU                                      *
. *       V5.01.05  04/08/1992  Justin Coates  (HONG KONG changes)            *
. *                 Added C12URNO, C17URNO, CSCCOL, CPNMPICK, C12DIM          *
. *       V5.01.06  19/03/1993  Justin Coates  (DUDLEY)                       *
. *                 Added CREGOPT                                             *
. *****************************************************************************
.
ACTPCNTY  DIM       8         * ACT country code for patient address
ACTNCNTY  DIM       8         * ACT country code for NoK address
ACTECNTY  DIM       8         * ACT country code for Emerg. Contact address
ACTLOCAL  DIM       8
ACTSRFLG  FORM      "0"       * default to no ACT search
ACTTMP1   FILE      ASCII, FIXED=1
ACTURNO   DIM       8
NAMEFLAG  FORM      1             * ACT Alias flag
.                                      0 = no name change
.                                      1 = save name change as alias
.                                      2 = don't save name change as alias
.
CMPURNO   DIM       20        * Medical record input MURN
C6PURNO   FORM      6         * Temp for MURN
C8PURNO   DIM       8         * Used in MURN
C12URNO   DIM       12        * for hong kong NMPI
C17URNO   DIM       17        * for pommies   NMPI
C12DIM    DIM       12        * dummy var
CPMAXU    DIM       8         * Maximum U/R number for GNXTUR
CPNXTU    DIM       9         * Next U/R number for GNXTUR
CPNURNO   FORM      9         * Next U/R number for GNXTUR (Aust)
CPOLD115  DIM       115       * Save copy of KEY115 for UPDSUR
CPPURNO   DIM       8         * Keyin U/R number for KURN
CPSYSRG   FORM      1         * Range of U/R's for current system
CPSYSTEM  FORM      1         * System Indicator for Next U/R
.                             * 1=A+E, 2=Outp, 3=Inp, 4=Newborn
CPTDATE   DIM       8         * Date parameter for GPERD
CSCVERT   FORM      2         * Save variable for CVERT in KURN
CSCCOL    FORM      3         * Save variable for CCOL  in KURN
.
CPURHD    DIM       3         * Header portion of next U/R numbers for N.Z.
CPURPAD   DIM       1         * Padding character in N.Z U/R numbers
CPURA1    DIM       1         * First character in N.Z. U/R numbers
CPURA2    DIM       1         * Second character in N.Z. U/R numbers
CPURA3    DIM       1         * Third character in N.Z. U/R numbers
CPURNNN   DIM       3         * Numeric portion of N.Z. U/R numbers as a dim
CPURNNNN  DIM       4         * Numeric portion of Southland U/R No.s as a dim
CPURF3    FORM      3         * Numeric portion of N.Z. U/R numbers as a form
CPURF4    FORM      4         * Numeric portion of Southland U/R No.s as a form
CPURCHK   DIM       1         * Check digit for N.Z. U/R numbers
CREGOPT   FORM      1         * have the (R)egister option in Kurn
.
CPNMPICK  FORM      1         * same as PTCNNMPI - NMPI usage
.
.         The following are variables used to calculate N.Z U/R check digits
.
CPNZNXTC  INIT      "ABBCCDDEEFFGGHHJJKKLLMMNNPPQQRRSSTTUUVVWWXXYYZZA"
CPNZVALA  INIT      "ABCDEFGHJKLMNPQRSTUVWXYZ"
CPNZCS1   FORM      3         * N.Z. U/R Check sum variable
CPNZCS2   FORM      3         * N.Z. U/R Check sum variable
NZHISMOD  FORM      1         * NZHIS change mode indicator
FILNHIAF  FILE      ASCII, FIXED=256       * tmp save file for forking
.
URWAARAY  INIT      "ABCDEFGHJKL"
.
