. ************************************************************************
. *                                                                      *
. *  Include Name      :   PATCLCFD.INC                                  *
. *                                                                      *
. *  Function          :   Patient Certificate Line Comments             *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   patclcaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY22                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V9.06.01  09/05/2006  Peter Vela    CAR 104252                  *
. *                Removed redefine field PTCLURNO                       *
. *                Renamed DPTCLURN to PTCEURNO                          *
. *      V9.03.00  15/11/2005  Mike Lamine   CAR 88460                   *
. *                Port from V6.13
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PATCLCA1   IFILE SQL, FIXED=83, KEY="U1-8,9-11,12-19,20-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCLURNO  DIM       8         8       1   U/R Number
PTCLTYPE  DIM       3         3       9   Certificate Type (Category cr)
PTCLFDAT  DIM       8         8      12   Date From (ccyymmdd)
DPTCLLCN  DIM       3         3      20   Comment Line Count
PTCLTEXT  DIM       50        50     23   Comment Text Line
PTCLSPAR  DIM       10        10     73   Spare Variable
.
.End of Record                       83
.
. Redefine FORM fields from key
. -----------------------------
PTCLLCNT  FORM      3
