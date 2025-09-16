.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PATLHIFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition Include for Patient           *
.  *                        Financial Letter History                      *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   patlhisf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY 19                                        *
.  *                                                                      *
.  *  Modifications     :   V10.00.01 07/04/2010 J.Tan  CAR 215864        *
.  *                        Added Time and Extract ID                     *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PATLHIS1   IFILE SQL, FIXED=41, KEY="U1-8,9-16,17-19"
PATLHIS2   IFILE SQL, FIXED=41, KEY="U17-19,9-16,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTLHADM  DIM         8       8       1   Billing Number
PTLHDATE  DIM         8       8       9   Date letter printed (CCYYMMDD)
DPTLHLCO  DIM         3       3      17   Letter code printed (from PATFLTFD)
PTLHTIME  DIM         8       8      20   Time letter printed (hh:mm:ss)
PTLHSEID  DIM         4       4      28   Selection/Extract ID
PTLHSPAR  DIM         9       9      32   Spare variable
.
.End of record                       41
.
. Redefine form fields from key
. -----------------------------
PTLHADMN  FORM        8
PTLHLCOD  FORM        3
