.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PATACCFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Patient            *
.  *                     PRS2 Account Status                            *
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : pataccaf.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 9                                          *
.  *                                                                    *
.  *     Modifications : 06/06/94  ROD                                  *
.  *                     Added Previous Year Account Class              *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATACCA1  IFILE     SQL, FIXED=43, KEY="U1-3,4-6,7-9"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTASCLAM   DIM      3         3            1      Claim Code (CL)
PTASATYP   DIM      3         3            4      Admission Type (A)
DPTASDAY   DIM      3         3            7      Highest Day in Period
PTASACCS   DIM      3         3           10      Current Year Account Status
PTASPRAC   DIM      3         3           13      Previous Year Account Status
PTASSPAR   DIM      27        27          16      Spare variable
.
.End of Record                            43
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PTASHDAY    FORM       3          7       Highest Day in Period
.
