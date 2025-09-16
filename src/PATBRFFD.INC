.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PATBRFFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Patient            *
.  *                     Billing Referral                               *
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : patbrfaf.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 8                                          *
.  *                                                                    *
.  *     Modifications :                                                *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATBRFA1  IFILE     SQL, FIXED=88, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPTBRBIL   DIM       8        8           1       Visit number
PTBRDOCT   DIM       6        6           9       Other board referring doctor
PTBRONUM   DIM       8        8          15       Order number
PTBRAUTH   DIM       15       15         23       Authority
PTBRTYPE   DIM       3        3          38       Board referral type (Cat BR)
PTBRFDOC   DIM       20       20         41       Referring doctor, free format
PTBRSPAR   DIM       27       27         61       Spare variable
.
.End of Record                           88 
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PTBRBILL    FORM       8          1       Admission number
