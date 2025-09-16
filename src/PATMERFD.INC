. V9.04.01  03/08/05 J.Tan    CAR 62750
.           Removed redefined amount variables
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMERFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Merchant Summary                                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patmerch.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15                                          *
.  *                                                                    *
.  **********************************************************************
.
PATMERC1   IFILE SQL, FIXED=56, KEY="U1-3,4-15"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
MERCODE   DIM        3           3        1       MERCHANT CODE (AMX,DIN ETC)
MSUMMNO   DIM       12          12        4       MERCHANT SUMMARY NUMBER
MSUMDATE  DIM        8           8       16       DATE OF SUMMARY (CCYYMMDD)
MAMTCLM   FORM      12.2         8       24       AMOUNT CLAIMED
MAMTPAID  FORM      12.2         8       32       AMOUNT PAID ON CLAIM
MCOMMISS  FORM      12.2         8       40       COMMISSION AMOUNT
MJOURNAL  FORM      12.2         8       48       JOURNAL AMOUNT
.
.End of Record                           56
.
