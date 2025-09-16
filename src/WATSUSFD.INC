. *****************************************************************************
. *                                                                           *
. * Include Name  : WATSUSFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Waiting List                       *
. *                 Procedure Suspension                                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : watsusaf.dat                                              *
. *                                                                           *
. * Keys          : KEY21                                                     *
. *                                                                           *
. * I/O Include   : WATSUSIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 11/02/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
WATSUSA1  IFILE     SQL, FIXED=60, KEY="U1-8,9-17,18-19,20-21"
WATSUSA2  IFILE     SQL, FIXED=60, KEY="U1-8,9-17,18-19,22-29,20-21"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
WTSUURNO  DIM       8           8      1  U/R Number
WTSUCODE  DIM       9           9      9  Procedure code
DWTSUCNT  DIM       2           2     18  Procedure count
DWTSUSCN  DIM       2           2     20  Suspension count
WTSUFDAT  DIM       8           8     22  From date
WTSUTDAT  DIM       8           8     30  To   date
WTSUREAS  DIM       3           3     38  Suspension reason  (Cat WN)
WTSULSTS  DIM       3           3     41  Listing Status (Cat VL)
WTSUUSER  DIM       10         10     44  Web User ID (websecaf) 
WTSUAUTO  DIM       1           1     54  Auto Update of Listing Status
.                                         0 = No
.                                         1 = Yes
WTSUSPAR  DIM       5           5     55  Spare variable
.End of Record                        60
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
WTSUCNT   FORM      2       Procedure count
WTSUSCNT  FORM      2       Suspension count
.
