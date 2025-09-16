.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATALTFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    Pre-Admission Alert Codes                             *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : pataltaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY16   KEY24   KEY24                                 *
.  *                                                                          *
.  *     Modification :                                                       *
.  *                                                                          *
.  *         V10.09.01  04/01/2017  Davin             TSK 0818645             *
.  *                    Added index 2,index 3 and PTALCPAC,PTALUCPF,PTALDCPU  *
.  *         V10.04.01  06/01/2014  Don Nguyen        CAR 294399              *
.  *                    Increased record size for new spare variable size.    *
.  *         V10.01.01  08/03/2011  DS                CAR 239539              *
.  *                    Added new fields ICDC to UUID                         *
.  *                    02/01/2001  Pat Dirito                                *
.  *                    Modified for changes to PATALRFD                      *
.  ****************************************************************************
.
PATALTT1   IFILE    SQL, FIXED=218, KEY="U1-8,9-10,11-13,14-16"
PATALTT2   IFILE    SQL, FIXED=218, KEY="U93-100,1-8,9-10,11-13,14-16"
PATALTT3   IFILE    SQL, FIXED=218, KEY="U85-92,1-8,9-10,11-13,14-16"
.
. Same format as PATALRFD but UR Number is replaced by Admission Number
