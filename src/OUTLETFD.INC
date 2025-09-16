.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTLETFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    LETTER                                          *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outletrf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 5,                                          *
.  *                                                                    *
.  *       V11.00.01 16/03/2020  Peter Vela      TSK 0889143            *
.  *                 Increased Line Number to 3 characters              *
.  *       V10.07.02 02/11/2015  Steve Armstrong CAR 294154             *
.  *                 Added OTLTCOMM & OTLTCONF                          *
.  *       V10.07.01 21/10/2015  Ebon Clements   CAR 320819             *
.  *                 Added OTLTACTV                                     *
.  *       V9.03.01  09/02/2004  Sylvek Litewka  CAR 47000              *
.  *                 Added Letter Type field                            *
.  *       V5.03.01  25/10/1995    Justin Coates  (SUHT mods)           *
.  *                 added OTLTMMFN                                     *
.  *                                                                    *
.  **********************************************************************
.
OUTLETR1  IFILE     SQL, FIXED=150, KEY="U1-3,4-6"
OUTLETR2  IFILE     SQL, FIXED=150, KEY="U4-6,1-3"
.
. NAME    TYPE      LENGTH  PHYS  START  DECRIPTION
. ----    ----      ------  ----  -----  ----------
DOTLTLTN  DIM       3        3        1  LETTER NUMBER
DOTLTLIN  DIM       3        3        4  LINE NUMBER
OTLTTEXT  DIM       70       70       7  LINE OF TEXT
OTLTLVAR  FORM      1        2       77  VARIABLE PRESENT
OTLTPBOT  FORM      2        2       79  LETTER BOTTOM MARGIN SIZE
OTLTPTOP  FORM      2        2       81  LETTER TOP MARGIN SIZE
OTLTPPAG  FORM      3        3       83  PHYSICAL PAPER LENGTH
OTLTPTAB  FORM      2        2       86  LEFT MARGIN
OTLTMMFN  DIM       8        8       88  Mail Merge File Name
OTLTTYPE  DIM       1        1       96  Letter Type
.                                        R - Referral Letter
OTLTACTV  DIM       1        1       97  Active
.                                        Blank or 0 = Active, 1 = Inactive
OTLTCOMM  DIM       1        1       98  Communication Method
.                                          0 or Blank = Printed Letter
.                                          1 = SMS Notification
OTLTCONF  DIM       1        1       99  Process Confirmation
.                                          0 or Blank = No
.                                          1 = Yes
OTLTSPAR  DIM       50       50     100  SPARE VARIABLE 
.End of Record                      150
.
.    Redefine FORM fields from key
.    ------------------------------
.
. NAME      TYPE     LENGTH  PHYSICAL  START LOC. DESCRIPTION
. ----      ----     ------  --------  ---------- -----------
OTLTLTNO    FORM       3        3           1     LETTER NUMBER
OTLTLINO    FORM       3        3           4     LINE NUMBER
.
.
