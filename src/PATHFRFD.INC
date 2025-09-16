.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATHFRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Health Fund Receipts                            *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pathfrec.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATHFRE1   IFILE SQL, FIXED=11, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
HFRINVR     DIM      8           8         1      INVOICE NUMBER
HFRSTAT     FORM     1           2         9      STATUS INDICATOR
.                                                    0 = FREE
.                                                    1 = IN USE 
.                                                    2 = IN USE ABOUT TO PRINT
.
.End of Record
