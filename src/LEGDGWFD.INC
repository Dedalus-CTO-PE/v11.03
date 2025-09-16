.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : LEGDGWFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for LEGACY Patient            *
.  *                    DRG Description and Weighting Details                 *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : legdgwaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 7, KEY 11, KEY 67       (C-168959)                *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *      V9.10.01  22/05/2008  Mike Laming   CAR 168959                      *
.  *                Added LPTDWCLS (Clincal Speciality) as added to V5 - note *
.  *                LPTDWCLS is positioned BEFORE "LPTDWDGV"                  *
.  *      V9.03.00  05/05/2004  Sylvek Litewka  CAR 49209                     *
.  *                Created FD.                                               *
.  *                                                                          *
.  ****************************************************************************
.
LEGDGWA1   IFILE SQL, FIXED=109, KEY="U1-4,85-87"
LEGDGWA2   IFILE SQL, FIXED=109, KEY="U5-8,1-4,85-87"
LEGDGWA3   IFILE SQL, FIXED=109, KEY="U9-68,1-4,85-87"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
LPTDWDRG   DIM      4         4        1        DRG Number
LPTDWMDC   DIM      4         4        5        MDC Number
LPTDWDES   DIM      60        60       9        DRG Description
LPTDWLOW   FORM     3.2       4       69        Low Trim
LPTDWHIG   FORM     3.2       4       73        High Trim
LPTDWRWG   FORM     3.6       6       77        Resource Weight
LPTDWCLS   DIM      2         2       83        Clincal Speciality
LPTDWDGV   DIM      3         3       85        DRG Version (format "051" = 5.1)
LPTDWSPA   DIM      21        21      88        Spare Variable
.End of Record                       ----
                                     109 
.

