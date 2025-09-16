.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : LEGECOFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for LEGACY                    *
.  *                    Patient Episode Operation Coding                      *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : legecoaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY12 KEY14 KEY23                                     *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *          V9.03.00  04/05/2004  Sylvek Litewka  CAR 49209                 *
.  *                    Created FD.                                           *
.  *                                                                          *
.  ****************************************************************************
.
LEGECOA1  IFILE     SQL, FIXED=100, KEY="U1-8,9-10,11-12"
LEGECOA2  IFILE     SQL, FIXED=100, KEY="U1-8,23-24,9-10,11-12"
LEGECOA3  IFILE     SQL, FIXED=100, KEY="U13-21,1-8,23-24,9-10,11-12"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DLPTEOAD  DIM       8        8         1      Admin no
DLPTEOEP  DIM       2        2         9      Episode no
DLPTEOCN  DIM       2        2        11      Episode unique counter
LPTEOCOD  DIM       9        9        13      Operation code
LPTEOTYP  DIM       1        1        22      Operation type (O,I,N,X)
DLPTEOUN  DIM       2        2        23      Unique no/patmoprf record no
LPTEODTC  DIM       8        8        25      Date of coding (ccyymmdd)
LPTEOOPE  DIM       4        4        33      Operator id
LPTEODAT  DIM       8        8        37      Operation date (ccyymmdd)
LPTEOSTT  DIM       5        5        45      Operation start time
LPTEOEDT  DIM       5        5        50      Operation end time
LPTEOSPA  DIM      45       45        55      Spare variable
.
.End of Record                       100
.
.Redefined Variables
.-------------------
LPTEOADM  FORM      8
LPTEOEPN  FORM      2
LPTEOCNT  FORM      2
LPTEOUNQ  FORM      2
.
LSPTEOCO  DIM       9
.
LECOFLAG  FORM      1
LSECOKEY  DIM       14
