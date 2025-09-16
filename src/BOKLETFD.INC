.  **********************************************************************
.  *                                                                    *
.  *     Include Name : BOKLETFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Booking             *
.  *                    BOOKING LETTER                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : bokletrf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY6                                            *
.  *                                                                    *
.  *     Modification :                                                 *
.  **********************************************************************
.  *       V11.02.01 11/03/2021  Thanh T      TSK 0911895               *
.  *                 Added Added Communication Method (BLETCOMM)        * 
.  **********************************************************************
.  *       V10.07.01 21/10/2015  Ebon Clements   CAR 320819             *
.  *                 Added BLETACTV                                     *
.  *                    03/12/91 J.Tan   SRF 111890                     *
.  *                    Extend line number from DIM2 to DIM3            *
.  *                                                                    *
.  **********************************************************************
.
BOKLETR1  IFILE     SQL, FIXED=101, KEY="U1-3,4-6"
BOKLETR2  IFILE     SQL, FIXED=101, KEY="U4-6,1-3"
.
. NAME      TYPE    LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----      ----    ------  --------  ----------  -----------
DBLETNO     DIM       3        3           1      Letter Number
DBLINNO     DIM       3        3           4      Line Number
BLTEXT      DIM       70       70          7      Line of Text
BLVAR       FORM      1        2          77      Variable Present
BLETPBOT    FORM      2        2          79      Letter Bottom Margin Size
BLETPTOP    FORM      2        2          81      Letter Top Margin Size
BLETPPAG    FORM      3        3          83      Physical Paper Length
BLETPTAB    FORM      2        2          86      Left Margin
BLETACTV    DIM       1        1          88      Active
.                                                 Blank or 0=Active, 1=Inactive
BLETCOMM    DIM       1        1          89      Communication Method
.                                                 Blank or 0=Printed Letter
.                                                 1=SMS Notification
BLETSPAR    DIM       11       11         90      Spare 
.
.End of Record                           101
.
.
.    redefines form fields from key
.    ------------------------------
.
. NAME      TYPE     LENGTH  PHYSICAL  START LOC. DESCRIPTION
. ----      ----     ------  --------  ---------- -----------
BLETNO      FORM       3        3           1     Letter Number
BLINNO      FORM       3        3           4     Line Number
