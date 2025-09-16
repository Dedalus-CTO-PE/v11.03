. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATGO1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Government                                      *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patgo1af.dat                                     *
.  *                                                                    *
.  *     Keys         : KEY 12, KEY 6, KEY 36                           *
.  *                                                                    *
.  **********************************************************************
.
PATGO1A1   IFILE SQL, FIXED=257, KEY="U1-6"
PATGO1A2   IFILE SQL, FIXED=257, KEY="U251-256,1-6"
PATGO1A3   IFILE SQL, FIXED=257, KEY="U7-36,1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
GCODE      DIM       6           6         1      GOVERNMENT NUMBER
GNAME      DIM      30          30         7      GOVERNMENT NAME
GADD1      DIM      35          35        37      GOVERNMENT ADDRESS LINE 1
GADD2      DIM      35          35        72      GOVERNMENT ADDRESS LINE 2
GADD3      DIM      35          35       107      GOVERNMENT ADDRESS LINE 3
GADD4      DIM      35          35       142      GOVERNMENT ADDRESS LINE 4
GCONT      DIM      30          30       177      GOVERNMENT CONTACT
GPOST      DIM       8           8       207      GOVERNMENT POSTCODE
GTELEB     DIM      20          20       215      TELEPHONE - BUSINESS
GVBILL     FORM    12.2          8       235      AMOUNT TO BE BILLED
GVAOUT     FORM    12.2          8       243      AMOUNT OUTSTANDING
GSORT      DIM      6            6       251      SORT KEY
.
.End of Record                           257
.
.           SPARE VARIABLES
.
SGCODE      DIM          6             1      GOVERNMENT NUMBER
SGNAME      DIM         30             7      GOVERNMENT NAME
SGADD1      DIM         35            37      GOVERNMENT ADDRESS LINE 1
SGADD2      DIM         35            67      GOVERNMENT ADDRESS LINE 2
SGADD3      DIM         35            37      GOVERNMENT ADDRESS LINE 1
SGADD4      DIM         35            67      GOVERNMENT ADDRESS LINE 2
SGCONT      DIM         30            97      GOVERNMENT CONTACT
SGPOST      DIM          8           127      GOVERNMENT POSTCODE
SGTELEB     DIM         20           131      TELEPHONE - BUSINESS
SGBILL      FORM       12.2          143      AMOUNT TO BE BILLED
SGAOUT      FORM       12.2          154      AMOUNT OUTSTANDING
SGSORT      DIM         6            165      SORT KEY
.
.
GBILL      FORM     8.2   
GAOUT      FORM     8.2  
.
.
