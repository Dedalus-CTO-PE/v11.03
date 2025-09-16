.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : ALLLETFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Referrals (Allied Health) *
.  *                    LETTER                                                *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : allletaf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 5,                                                *
.  *                                                                          *
.  *       V11.00.01 16/03/2020  Peter Vela      TSK 0889143                  *
.  *                 Increased Line Number to 3 characters                    *
.  *      V10.07.01 16/10/2015  Ebon Clements CAR 321253                      *
.  *                Added ALLTACTV                                            *
.  *      V9.05.B01 09/01/2006  Mike Laming   CAR 76341                       *
.  *                Added Letters to Allied Health                            *
.  *                                                                          *
.  ****************************************************************************
.
ALLLETR1  IFILE     SQL, FIXED=148, KEY="U1-3,4-6"
ALLLETR2  IFILE     SQL, FIXED=148, KEY="U4-6,1-3"
.
. NAME    TYPE      LENGTH  PHYS  START  DECRIPTION
. ----    ----      ------  ----  -----  ----------
DALLTLTN  DIM       3        3        1  LETTER NUMBER
DALLTLIN  DIM       3        3        4  LINE NUMBER
ALLTTEXT  DIM       70       70       7  LINE OF TEXT
ALLTLVAR  FORM      1        2       77  VARIABLE PRESENT
ALLTPBOT  FORM      2        2       79  LETTER BOTTOM MARGIN SIZE
ALLTPTOP  FORM      2        2       81  LETTER TOP MARGIN SIZE
ALLTPPAG  FORM      3        3       83  PHYSICAL PAPER LENGTH
ALLTPTAB  FORM      2        2       86  LEFT MARGIN
ALLTMMFN  DIM       8        8       88  Mail Merge File Name
ALLTTYPE  DIM       1        1       96  Letter Type
.                                        R - Referral Letter
ALLTACTV  DIM       1        1       97  Active 
.                                        Blank or 0 = Active, 1 = Inactive
ALLTSPAR  DIM       50       50      98  SPARE VARIABLE 
.End of Record                      148
.
.    redifines form fields from key
.    ------------------------------
.
. NAME      TYPE     LENGTH  PHYSICAL  START LOC. DESCRIPTION
. ----      ----     ------  --------  ---------- -----------
ALLTLTNO    FORM       3        3           1     LETTER NUMBER
ALLTLINO    FORM       3        3           4     LINE NUMBER
.
.
