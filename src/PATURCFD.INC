.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATURCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    U/R Number Changes Audit                        *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : paturcaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 24                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      02/04/2016  Steve Armstrong  TSK 0324703                      *
.  *                  Added PTURTIME to FD and Indexes.                 *
.  **********************************************************************
.
PATURCA1  IFILE  SQL, FIXED=48, KEY="U1-8,9-16,17-24"
PATURCA2  IFILE  SQL, FIXED=48, KEY="U9-16,17-24,1-8"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DPTURADM  DIM       8         8          1   Admission Number Affected
PTURDATE  DIM       8         8          9   Date of Alteration (ccyymmdd)
PTURTIME  DIM       8         8         17   Time of Alteration (hh:mm:ss)
PTUROURN  DIM       8         8         25   Old U/R number
PTURSPAR  DIM      15        15         33   Spare variable
.
.End of Record                          48
.
. redefine form fields in key
. ---------------------------
PTURADMN  FORM      8         8          1   Admission number
