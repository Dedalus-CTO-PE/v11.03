.  *****************************************************************************
.  *                                                                           *
.  *     Include Name : IBATMDFD.INC                                           *
.  *                                                                           *
.  *     Function     : File Definition include for Common                     *
.  *                    User Defined Stationery Details                        *
.  *                                                                           *
.  *                                                                           *
.  *     File Type    : SQL                                                    *
.  *                                                                           *
.  *     File Name    : ibatmdaf.dat                                           *
.  *                                                                           *
.  *     Keys         : KEY 12                                                 *
.  *                                                                           *
.  *     Modifications:                                                        *
.  *                    V10.04.01  18/12/2013 Ania P      CAR 294304           *
.  *                               Moved IBDTPIND out of SPARE                 *
.  *                    V10.03.01  25/01/2012 J.Tan       CAR 247090           *
.  *                               Added Print Indicator using spare variable  *
.  *                                                                           *
.  *****************************************************************************
.
IBATDET1  IFILE     SQL, FIXED=90, KEY="U1-6,7-9,10-12"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
IBDTSCOD   DIM      6         6          1        Stationary Code
DIBDTROW   DIM      3         3          7        Row for Printing
DIBDTCOL   DIM      3         3         10        Column for Printing
IBDTINDC   FORM     1         2         13        Indicator
.                                                   1 = Text Item
.                                                   2 = Data Item
IBDTPLEN   FORM     3         3         15        Length to Print
IBDTCOLR   FORM     2         2         18        Color
IBDTTXFL   DIM      40        40        20        Text/Field No.
IBDTPIND   DIM      1         1         60        Print Indicator for Multiple Card Type
IBDTSPAR   DIM      29        29        61        Spare Variable
.
.End of Record                          90  
.
.  following field is stored in spare variable
.
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
IBDTROW     FORM       3          7       Row for Printing
IBDTCOL     FORM       3          10      Column for Printing
.
