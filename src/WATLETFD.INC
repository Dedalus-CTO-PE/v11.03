. *****************************************************************************
. *                                                                           *
. * Include Name : WATLETFD.INC                                               *
. *                                                                           *
. * Function     : File Definition include for Waiting List                   *
. *                Letters                                                    *
. *                                                                           *
. * File Type    : SQL                                                        *
. *                                                                           *
. * File Name    : watletrf.dat                                               *
. *                                                                           *
. * Keys         : KEY5, KEY5                                                 *
. *                                                                           *
. * Modifications:                                                            *
. *       V11.00.01 16/03/2020  Peter Vela      TSK 0889143                   *
. *                 Increased Line Number to 3 characters                     *
. *       V10.07.01 02/11/2015  Steve Armstrong CAR 294154                    *
. *                 Added WLETCOMM & WLETCONF.                                *
. *       V10.04.01 31/12/2013  Don Nguyen      CAR 294389                    *
. *                 Changed file size to accommodate new spare varible size.  *
. *                 Moved WLETACTV out of spare variable.                     *
. *       V10.03.01 01/03/2012    Ebon Clements CAR 261063                    *
. *                 Added WLETACTV                                            *
. *       V9.08.01  06/02/2007    Jill Habasque CAR 127559                    *
. *                 Added index 3                                             *
. *       V5.03.01  25/10/1995    Justin Coates  (SUHT mods)                  *
. *                 added WLETMMFN and WLETVALD                               *
. *                                                                           *
. *****************************************************************************
.
WATLETR1  IFILE     SQL, FIXED=148, KEY="U1-3,4-6"
WATLETR2  IFILE     SQL, FIXED=148, KEY="U4-6,1-3"
WATLETR3  IFILE     SQL, FIXED=148, KEY="U4-6,7-76,1-3"
.
. NAME    TYPE      LENGTH  PHYS  START   DESCRIPTION
. ----    ----      ------  ----  -----   -----------
DWLETNO   DIM       3        3        1   Letter Number
DWLINNO   DIM       3        3        4   Line Number
WLTEXT    DIM       70       70       7   Line of Text
WLVAR     FORM      1        2       77   Variable Present
WLETPBOT  FORM      2        2       79   Letter Bottom Margin Size
WLETPTOP  FORM      2        2       81   Letter Top Margin Size
WLETPPAG  FORM      3        3       83   Physical Paper Length
WLETPTAB  FORM      2        2       86   Left Margin
WLETMMFN  DIM       8        8       88   Mail Merge File Name
WLETVALD  DIM       1        1       96   Validation Letter (Y/N)
WLETAUDL  DIM       1        1       97   Audit Letter (A = Yes)
WLETACTV  DIM       1        1       98   Active
.                                         Blank or 0 = Active, 1 = Inactive
WLETCOMM  DIM       1        1       99   Communication Method
.                                          0 or Blank = Printed Letter
.                                          1 = SMS Notification
WLETCONF  DIM       1        1      100   Process Confirmation
.                                          0 or Blank = No
.                                          1 = Yes
WLETSPAR  DIM       47       47     101   Spare 
.End of Record                      148
.
.
.    redefines form fields from key
.    ------------------------------
. NAME      TYPE    LENGTH  PHYSICAL   START   DESCRIPTION
. ----      ----    ------  --------   -----   -----------
WLETNO      FORM      3        3           1   Letter Number
WLINNO      FORM      3        3           4   Line Number
