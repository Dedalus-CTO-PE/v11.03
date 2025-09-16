. ************************************************************************
. *                                                                      *
. *  Include Name      :   PATCERFD.INC                                  *
. *                                                                      *
. *  Function          :   Patient Certificates                          *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   patceraf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY19                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V10.04.01 20/02/2014  Steve Armstrong  CAR 295176               *
. *                Added Index 2                                         *
. ************************************************************************
. *      V10.02.01 15/06/2011  Jill Parkinson CAR 240715                 *
. *                Added Certificate Status - Cat FG                     *
. ************************************************************************
. *      V9.06.01  08/05/2006  Peter Vela   CAR 104252                   *
. *                Removed redefine field PTCEURNO                       *
. *                Renamed DPTCEURN to PTCEURNO                          *
. ************************************************************************
. *      V9.03.00  15/11/2005  Mike Laming  CAR 88460                    *
. *                Port from V6.13 - add PTCECSNT                        *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PATCERA1   IFILE SQL, FIXED=76, KEY="U1-8,9-11,12-19"
PATCERA2   IFILE SQL, FIXED=76, KEY="U1-8,12-19,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCEURNO  DIM       8         8       1   U/R Number
PTCETYPE  DIM       3         3       9   Certificate Type (Category cr)
PTCEFDAT  DIM       8         8      12   Date From (ccyymmdd)
PTCETDAT  DIM       8         8      20   Date To   (ccyymmdd)
PTCESDAT  DIM       8         8      28   Date Signed/Issued (ccyymmdd)
PTCEDCOD  DIM       10        10     36   Certifying  Code (patdo1af)
PTCESENT  DIM       1         1      46   Certificate Sent (0=No, 1=Yes)
PTCECSTA  DIM       3         3      47   Certificate Status (Cat FG)
PTCESPAR  DIM       26        26     50   Spare Variable
.
.End of record                       76
.
