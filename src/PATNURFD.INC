.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATNURFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Nursing Station Details                         *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patnursm.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *   10.02.01 11.07.2001 Peter McMullen  CAR 246389                   *
.  *            Increase size of NSEXTN,  add spare                     *
.  *   V5.00    31.03.89 J.Clark     (IBA)                              *
.  *                     Change include heading                         *
.  *                                                                    *
.  **********************************************************************
.
PATNURS1   IFILE SQL, FIXED=128, KEY="U1-3,4-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
NSTAT      DIM       3           3         1      NURSING STATION NUMBER
NWARD      DIM       3           3         4      NURSING WARD NUMBER
NSDESC     DIM       30         30         7      NURSING STATION DESCRIPTION
NSIST      DIM       30         30        37      SISTER IN CHARGE
NSEXTN     DIM       20         20        67      NURSING EXTENSION NUMBER
NSSPARE    DIM       41         41        87                  
.
.End of Record                           128
.
.    SPARE VARIABLES
.
SNSTAT      DIM          3  
SNWARD      DIM          3 
SNSDESC     DIM          30
SNSIST      DIM          30
SNSEXTN     DIM          4 
