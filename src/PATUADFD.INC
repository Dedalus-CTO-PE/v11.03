.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATUADFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    U/R Number Change Audit                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patuadaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 24                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
PATUADA1  IFILE  SQL, FIXED=90, KEY="U1-8,9-16,17-24"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DPTUAADM  DIM       8         8          1   Admission Number Affected
PTUADATE  DIM       8         8          9   Date of Alteration
PTUATIME  DIM       8         8         17   Time of Alteration
PTUAOUR   DIM       8         8         25   Old U/R number
PTUANUR   DIM       8         8         33   New U/R number
PTUAOPR   DIM      30        30         41   Operator ID
PTUASPAR  DIM      19        19         71   Spare variable
.End of Record                          90
.
. redefine form fields in key
. ---------------------------
PTUAADMN  FORM      8         8          1   Admission number
