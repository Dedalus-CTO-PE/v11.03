. 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBAPRNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    Default Printer Table                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibaprntf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 2                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V10.04.01  11/04/2014  Ebon Clements  CAR 299449              *
.  *                 Increased printer array CPRTARAY to DIM 6          *
.  *                 Increased printer NCURPRT to DIM 6                 *
.  *      V10.02.00  29/03/2011  Jill Parkinson CAR 239574              *
.  *                 Increased printer fields and removed ibaprntf      *
.  *                 C1.00.01 20.05.1997  B.G.Ackland                   *
.  *                          Added SPL variables for new Print Display *
.  *                          Features SPLLINE,SPLPAGE,SPLLAST,SPLSRCH  *
.  *                                   SPLSRCH1,SPLSRCH2,SPLSRCH3       *
.  *                                   SPLSRCHS,SPLSLIN,SPLFPAG         *
.  *                 V6.00.02 21/12/1993  Graeme Williams SRF 125074    *
.  *                          Added IBPRSPLF - Spool file status flag   *
.  *                 V6.00.01 16/08/1993  Gabrielle    SRF 1123850      *
.  *                          Added IBPRRCNT,S1BPRRCN,S2BPRRCN,PRNTNUMB *
.  *                 V5.01.01 07/12/89  E.Phan                          *
.  *                          Removed KEYs & DIMs & redefined in prog.  *
.  *                 V5.00 15.08.89 J.Clark     (IBA)                   *
.  *                          Change include heading                    *
.  **********************************************************************
.
.       These variables & FD's are used by the IBAPRINT include
.
           INCLUDE      IBAPASFD/INC
           INCLUDE      IBAPRTFD/INC
           INCLUDE      IBAPDDFD/INC
           INCLUDE      IBASEQFD/INC
.
BASEDGTS  INIT      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890"
B10NUMB   DIM          10
CDEFPRT   DIM          6
CDISPLN1  DIM          80
CENDLIN   FORM         3
CHARS     FORM         3
CLASTPGE  FORM         1
CMAXCOL   FORM         3
CMESSAGE  DIM          50
CNTRLM    INIT         015
CODEDV    INIT       "DV"               * Printer commands
CODEPR    INIT       "PR"               * Printer description
CODEPT    INIT       "PT"               * Printer Paper types
.
COMMAND   DIM          32
CPRTARAY  DIM          6[2][16]
CPRTFF    INIT         014
CPRTMIN1  FORM         "-1"
CPRTCOL   FORM         3
CPRTROW   FORM         2
CTMPLINE  DIM          80
CURPRROW  FORM         2
CURPRCOL  FORM         3
.
KEY127    DIM          127
.
TBSPOOLD  DIM          400
.
FILEHDR   INIT         "IBA"
FILENAME  DIM          12
.
IBPREXTN  INIT         "/prt"                * standard print file extension
IBPRNODL  FORM         "0"                   * delete spoolfile if nothing done
IBPRPR    INIT         "PR "                 * UNIX print & delete command
IBPRRCNT  FORM         2                     * Display for number of printers
IBPRSPLF  FORM         1                     * Spool file status flag
IBPRSR    INIT         "SR "                 * UNIX print (no delete) command
INDEXF    FORM         3
INDEXT    FORM         3
PRNTNUMB  FORM         2                     * Printer Number
.
MVERT     FORM         2
.
NEWBASE   FORM      2
NEWBNUMB  DIM       10
NCURPRT   DIM          6
NOQING    FORM      "0"
.
OLDNUMB   FORM      21
.
PRT       INIT      ".prt"
.
SPLTFILE  FILE   ASCII, FIXED=256
SPLTEMP   FILE      ASCII, FIXED=250
SPLLINE   FORM         12
SPLLAST   FORM         12
SPLFPAG   FORM         6 
SPLPAGE   FORM         6 
SPLSRCH   DIM          20
SPLSRCH1  DIM          50
SPLSRCH2  DIM          50
SPLSRCH3  DIM          50
SPLSRCHS  DIM          100
SPLSLIN   FORM         12
SPOLFLAG  FORM         1
STRINGP   FORM         3
S1BPRRCN  FORM         2                     * Save the number of printers 1
S2BPRRCN  FORM         2                     * Save the number of printers 2
.
XXCOL     FORM         3
.
           INCLUDE      IBASPOFD/INC
.
.
