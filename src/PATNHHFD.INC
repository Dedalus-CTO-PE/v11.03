. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PATNHHFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Patient            *
.  *                     Nursing Home/Hostel Additional Charging        *
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : patnhhaf.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 6                                          *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATNHHA1  IFILE     SQL, FIXED=95, KEY="U1-3,4-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTNHCLAM    DIM      3         3           1      Claim Code        (Cat CL)
PTNHATYP    DIM      3         3           4      Admission Type    (Cat A )
PTNHMXDC    FORM  12.2         8           7      Maximum Daily Charge
PTNHPAIC    FORM  12.2         8          15      % of Annual Income to charge
PTNHCDES    DIM     30        30          23      Extra Charge Description
PTNHSPAR    DIM     42        42          53      Spare Variable
.
.End of Record                            95
.
PTNHMAXD    FORM   8.2  
PTNHPERC    FORM   3.2 
