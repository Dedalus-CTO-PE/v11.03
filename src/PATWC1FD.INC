.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATWC1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Workers Compensation Claim Details              *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patwc1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                 V9.02.01 20/02/03 J.Tan     SRF 20178              *
.  *                          Added index 2,3,U/R and visit date        *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change Admission to 8 characters          *
.  *                    V5.02 20.11.92 Whirlpool                        *
.  *                          DUDLEY CHANGES                            *
.  *                    V5.03 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
PATWC1A1   IFILE SQL, FIXED=345, KEY="U1-8"
PATWC1A2   IFILE SQL, FIXED=345, KEY="U323-330,1-8"
PATWC1A3   IFILE SQL, FIXED=345, KEY="U223-242,323-330,1-8,331-338"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.  DESCRIPTION
. ----     ----   ------   --------   ----------  -----------
DWCADMNO   DIM       8           8          1     ADMISSION NUMBER
WCENAME    DIM      30          30          9     EMPLOYER NAME
WCEADD1    DIM      35          35         39     EMPLOYER ADDRESS LINE 1
WCEADD2    DIM      35          35         74     EMPLOYER ADDRESS LINE 2
WCEADD3    DIM      35          35        109     EMPLOYER ADDRESS LINE 3
WCEADD4    DIM      35          35        144     EMPLOYER ADDRESS LINE 4
WCEPOST    DIM       8           8        179     EMPLOYER POSTCODE
WCETELE    DIM      20          20        187     EMPLOYER TELEPHONE
WCACDAT    DIM       8           8        207     DATE OF ACCIDENT (YYMMDD)
WCACCPT    FORM      1           2        215     ACCEPTED BY INSURANCE COMPANY
.                                                 0 = NO
.                                                 1 = YES
WCICODE    DIM       6           6        217     INSURANCE COMPANY CODE
WCCLMNO    DIM      20          20        223     INSURANCE CLAIM NUMBER 
WCCOMN1    DIM      40          40        243     COMMENTS
WCCOMN2    DIM      40          40        283     COMMENTS
PTWCURNO   DIM       8           8        323     UR Number
PTWCVDAT   DIM       8           8        331     Visit Date
PTWCSPAR   DIM       6           6        339     SPARE
.
.End of Record                            345
.  redefine form fields for key
.  ----------------------------
.NAME     TYPE   LENGTH   START LOC.   DESCRIPTION
.----     ----   ------   ----------   -----------
WCADMNO   FORM       8           1     ADMISSION NUMBER
.
.
