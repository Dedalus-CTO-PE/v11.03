.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATDSTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Doctor Statistics                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patdstat.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 13                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    V5.09.B02 Ebon Clements                         *
.  *                              509 Doctors mods for periods          *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                              Change include heading                *
.  *                                                                    *
.  ********************************************************************** 
.
PATDSTA1   IFILE SQL, FIXED=58, KEY="U1-4,5-6,7-7,8-13"
PATDSTA2   IFILE SQL, FIXED=58, KEY="U8-13,7-7,1-4,5-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTDSYEAR   DIM       4           4        1        YEAR OF STATISTICS CCYY
PTDSPERD   DIM       2           2        5        PERIOD OF STATISTICS-patdrgaf
PTDSTYPE   DIM       1           1        7        A = ATTENDING DOCTOR
.                                                  R = REFERRING DOCTOR
PTDSCODE   DIM       6           6        8        DOCTORS CODE
PTDSADMS   FORM      4           3        14       NUMBER OF ADMISSIONS         
PTDSBEDD   FORM      4           3        17       NUMBER OF BED DAYS           
PTDSOPRS   FORM      4           3        20       NUMBER OF OPERATIONS         
PTDSMBSC   FORM      4           3        23       NUMBER OF MBS CODES          
PTDSBADM   FORM      4           3        26       BUDGET FOR ADMISSIONS
PTDSBBED   FORM      4           3        29       BUDGET FOR BED DAYS  
PTDSBOPR   FORM      4           3        32       BUDGET FOR OPERATIONS
PTDSBMBS   FORM      4           3        35       BUDGET FOR MBS CODES
PTDSSPAR   DIM      20          20        38       SPARE VARIABLE
.
.End of Record                            58
