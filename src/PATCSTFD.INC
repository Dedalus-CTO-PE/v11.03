.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCSTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Catchment Summary                               *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patcstsf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATCSTS1   IFILE SQL, FIXED=82, KEY="U1-3,4-9"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
CCCODE     DIM       3           3        1       CATCHMENT CODE
CCCYYMM    DIM       6           6        4       DATE  (CCYYMM)
CCADMN     FORM      8           5       10       NUMBER OF ADMISSIONS
CCABDAY    FORM      8           5       15       NUMBER OF BED DAYS ADMITTED
CCSAMED    FORM      8           5       20       NUMBER OF SAMEDAY PATIENTS
CCSMDAY    FORM      8           5       25       NUMBER OF BED DAYS FOR SAMEDAY
CCBOARD    FORM      8           5       30       NUMBER OF BOARDERS
CCBRDAY    FORM      8           5       35       NUMBER OF BED DAYS BOARDER
CCSPARE    DIM      42          42       40       SPARE VARIABLE
.
.End of Record
