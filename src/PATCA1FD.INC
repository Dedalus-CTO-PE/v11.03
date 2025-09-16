
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCA1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Current Address                                 *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patca1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *  Modifications: V5.01.01 16/08/90 Steve O'Gorman                   *
.  *                          Include Created                           *
.  *                 V5.01.02 11/10/90 Glen Hobby                       *
.  *                          Changed LGA code to DIM4                  *
.  *                 V5.01.03 17/10/92 Whirlpool                        *
.  *                          Dudley Change                             *
.  *                 V5.01.04 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                                                                    *
.  **********************************************************************
.
PATCA1A1   IFILE SQL, FIXED=295, KEY="U1-8"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
PTCAADMN  DIM      8         8          1      Patient Admission Number
PTCAADD1  DIM     35        35          9      Current Address Line 1
PTCAADD2  DIM     35        35         44      Current Address Line 2
PTCASUB   DIM     35        35         79      Current Suburb
PTCAADD4  DIM     35        35        114      Current Address Line 4
PTCAPCOD  DIM      8         8        149      Current Post Code
PTCALGA   DIM      4         4        157      Current LGA Code
PTCAHPH   DIM     20        20        161      Current Home Phone Number
PTCABPH   DIM     20        20        181      Current Business Phone Number
PTCASPAR  DIM     94        94        201      Filler Number 1
.
.End of Record                        295
.
