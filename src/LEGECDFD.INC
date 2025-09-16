.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : LEGECDFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for LEGACY                    *
.  *                    Patient Episode Disease Coding                        *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : legecdaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY12 KEY14 KEY23                                     *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *          V9.03.00  04/05/2004  Sylvek Litewka  CAR 49209                 *
.  *                    Created FD.                                           *
.  *                                                                          *
.  ****************************************************************************
.
LEGECDA1  IFILE     SQL, FIXED=100, KEY="U1-8,9-10,11-12"
LEGECDA2  IFILE     SQL, FIXED=100, KEY="U1-8,23-24,9-10,11-12"
LEGECDA3  IFILE     SQL, FIXED=100, KEY="U13-21,1-8,23-24,9-10,11-12"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DLPTEDAD  DIM       8        8         1      Admin no
DLPTEDEP  DIM       2        2         9      Episode no
DLPTEDCN  DIM       2        2        11      Episode unique counter
LPTEDCOD  DIM       9        9        13      Disease code
LPTEDTYP  DIM       1        1        22      Disease type (P,S,C,A,L)
DLPTEDUN  DIM       2        2        23      Unique no/patmdisf record no
LPTEDDTC  DIM       8        8        25      Date of coding (ccyymmdd)
LPTEDOPE  DIM       4        4        33      Operator
LPTEDSPA  DIM      63       63        37      Spare variable
.
.End of Record                       100
.
.Redefined Variables
.-------------------
LPTEDADM  FORM      8
LPTEDEPN  FORM      2
LPTEDCNT  FORM      2
LPTEDUNQ  FORM      2
.
LSPTEDCO  DIM       8
.
LECDFLAG  FORM      1
LSECDKEY  DIM       14
+
.
