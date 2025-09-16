. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PATEXBFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Patient            *
.  *                     Management Analysis Generation Extract B       *
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : patexbNN.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 17                                         *
.  *                                                                    *
.  *     Modifications :                                                *
.  *           V9.04.01  03/08/05 J.Tan    CAR 62750                    *
.  *                     Removed redefined amount variables             *
.  *                     V5.07.01 27/04/99 J.Tan                        *
.  *                     Added lumpsum variables                        *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATEXTB1  IFILE     SQL, FIXED=200, KEY="U1-8,9-16,17-17"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPTXBADM   DIM       8        8           1       Admission number
PTXBTDAT   DIM       8        8           9       Transfer date (CCYYMMDD)
PTXBTYPE   DIM       1        1          17       Transfer type
.                                                  - "A" = Admission details
.                                                  - "B" = Details at start of
.                                                          period
.                                                  - "C" = Change of details
.                                                  - "L" = Date patient went 
.                                                          on-leave
.                                                  - "R" = Return from leave 
.                                                          details
.                                                  - "Z" = Discharge details
PTXBNDAY   FORM      4        3          18       Number of days with this info
.                                                  - "Z" records will be zero
.                                                  - Day cases will be zero
PTXBTWRD   DIM       3        3          21       Ward
PTXBTBED   DIM       3        3          24       Bed
PTXBTTYP   DIM       3        3          27       Admission type - (Cat A)
PTXBTCRE   DIM       3        3          30       Care class - (Cat CC)
PTXBTDPT   DIM       3        3          33       Account classification
.                                                   - (Cat AC)
PTXBTADC   DIM       6        6          36       Attending doctor
PTXBTADT   DIM       3        3          42       Attending doctor type 
.                                                   - (Cat DT)
PTXBACCM   FORM     12.2      8          45       Accomodation charge for this
.                                                 information
PTXBACCP   FORM     12.2      8          53       Accomodation charge - patient
.                                                 portion
PTXBACCR   FORM     12.2      8          61       Accomodation charge - rebate
.                                                 portion
PTXBDISC   FORM     12.2      8          69       Discount amount - already 
.                                                 included in accom. charge
PTXBALLW   FORM     12.2      8          77       Allowance amount - already 
.                                                 included in accom. charge
PTXBTHET   FORM     12.2      8          85       Theatre charges for this 
.                                                 information
PTXBTHTP   FORM     12.2      8          93       Theatre charges - patient 
.                                                 portion
PTXBTHTR   FORM     12.2      8         101       Theatre charges - rebate 
.                                                 portion
PTXBMISC   FORM     12.2      8         109       Miscellaneous charges for 
.                                                 this information
PTXBMISP   FORM     12.2      8         117       Miscellaneous charges - 
.                                                 patient portion
PTXBMISR   FORM     12.2      8         125       Miscellaneous charges - 
.                                                 rebate portion
PTXBLSPT   FORM     12.2      8         133       Lumpsum - patient portion
.                                                 included in accom.charge
PTXBLSRB   FORM     12.2      8         141       Lumpsum - rebate portion
.                                                 included in accom.charge
PTXBSPAR   DIM        51      51        149       Spare variable
.
.End of Record                          200 
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PTXBADMN    FORM       8          1       Admission number
.
