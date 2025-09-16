. *****************************************************************************
. *                                                                           *
. *       Include Name : PATQMHFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      QLD HDP mental health                                *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patqmhaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY8                                                 *
. *                                                                           *
. *       Modifications:                                                      *
. *                 V6.06.00 28/05/99 Andrew Peel                             *
. *                          Added new variable PTQMPSNT                      *
. *                 V6.05.00 28/04/98 J.Tan                                   *
. *                          Changed Adm. to be F8                            *
. *                                                                           *
. *****************************************************************************
.
PATQMHA1  IFILE SQL, FIXED=40, KEY="U1-8"
.
.Name     Type    Length   Physical   Start Loc.   Description
.----     ----    ------   --------   ----------   -----------
DPTQMADM  DIM       8         8           1        Admission number
PTQMTOUA  DIM       1         1           9        Type of usual accomodation
PTQMEMPS  DIM       1         1           10       Employment status
PTQMPSNS  DIM       1         1           11       Pension status
PTQMPRMS  DIM       1         1           12       Problem status
PTQMRTFC  DIM       2         2           13       Referral to further care
PTQMMLSI  DIM       1         1           15       MH legal staus indicator
PTQMPSNT  DIM       1         1           16       Previous specialised
.                                                  nonadmitted treatment
PTQMSPAR  DIM       23        23          17       Spare variable
.
.End of Record                            40
.
.Redefine form field from key
.----------------------------
.Name     Type    Length   Start Loc.   Description
.----     ----    ------   ----------   -----------
PTQMADMN  FORM      8          1        Admission number
QPTQMADM  FORM      8          1        Admission number
+
.
