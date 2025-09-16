. V10.04.01 26/02/2014 Ania P         CAR 294994
.                      Extended PTXCUNIQ by 1, changed key to KEY12
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PATEXCFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Patient            *
.  *                     Management Analysis Generation Extract C       *
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : patexcNN.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 12                                         *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATEXTC1  IFILE     SQL, FIXED=70, KEY="U1-8,9-9,10-12"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPTXCADM   DIM       8        8           1       Admission number
PTXCTYPE   DIM       1        1           9       Record type
.                                                   - "D" = Diseases (ICD9CM)
.                                                   - "O" = Operations (ICD9CM)
.                                                   - "M" = MBS codes
DPTXCUNQ   DIM       3        3          10       Unique counter
PTXCCTYP   DIM       1        1          13       Code type
.                                                   - Disease type for diseases
.                                                   - "O" for operations
.                                                   - "M" for MBS codes
PTXCCODE   DIM       9        9          14       Disease/Operation/MBS code
PTXCDATE   DIM       8        8          23       Operation/MBS date (CCYYMMDD)
.                                                   - Blank for diseases
PTXCOPCO   FORM     12.2      8          31       Operation cost
.                                                   - Zero for diseases
.                                                   - From ICD9CM record for 
.                                                     Operations
.                                                   - MBS fee for MBS codes.
PTXCMADC   DIM       6        6          39       Attending doctor code
PTXCMADT   DIM       3        3          45       Attending doctor type 
.                                                   -(Cat DT)
PTXCMWRD   DIM       3        3          48       Ward of operation
PTXCMBED   DIM       3        3          51       Bed of operation
PTXCSPAR   DIM       16      16          54       Spare variable
.
.End of Record                           70 
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PTXCADMN    FORM       8          1       Admission number
PTXCUNIQ    FORM       3         10       Unique counter
PTXCCOST    FORM       5
.
