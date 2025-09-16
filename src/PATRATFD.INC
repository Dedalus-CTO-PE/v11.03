. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATRATFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Rates Table                                     *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patratef.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12                                          *
.  *                                                                    *
.  **********************************************************************
.
PATRATE1   IFILE SQL, FIXED=84, KEY="U1-3,4-6,7-9,10-12"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
RCOMPN      DIM      3           3          1      COMPENSATION ELIGIBILITY
RCLASS      DIM      3           3          4      PATIENT CLASSIFICATION
RTYPE       DIM      3           3          7      PATIENT TYPE
RCSTAT      DIM      3           3         10      CHARGEABLE STATUS
RTCPDAY     FORM  12.2           8         13      CHARGE PER DAY
RCPDES      DIM     20          20         21      RATE CHARGE PER DAY DESCRIP
RTCEDAY     FORM  12.2           8         41      EXTRAS PER DAY
RCEDES      DIM     20          20         49      RATE CHRGE EXTRA PER DAY DESC.
RHB21       FORM     1           2         69      PRINT ON HB21
.                                                  0 = No
.                                                  1 = Yes
RCSPARE     DIM     13          13         71      SPARE VARIABLE
.
.End of Record
.
SRCOMPN      DIM         3             1      COMPENSATION ELIGIBLITY
SRCLASS      DIM         3             4      PATIENT CLASSIFICATION
SRTYPE       DIM         3             7      PATIENT TYPE
SRCSTAT      DIM         3            10      CHARGEABLE STATUS
SRCPDAY      FORM     12.2            13      CHARGE PER DAY
SRCPDES      DIM        20            21      RATE CHARGE PER DAY DESCRIPTION
SRCEDAY      FORM     12.2            41      EXTRAS PER DAY
SRCEDES      DIM        20            49      RATE CHARGE EXTRA PER DAY DESC.
SRHB21       FORM        1            69      PRINT ON HB21
.
RCPDAY      FORM   8.2  
RCEDAY      FORM   8.2   
