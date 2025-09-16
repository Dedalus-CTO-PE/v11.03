.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATOPTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Program Option Security                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patoptnf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY                                             * 
.  *                                                                    *
.  *     Modifications: 17/05/90  S. O'Gorman                           *
.  *                              Created FD                            *
.  *                                                                    *
.  **********************************************************************
.
PATOPTN1   IFILE     SQL, FIXED=128, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTOPPROG  DIM        8         8          1       Program Name
PTOPOP1   FORM       1         2          9       Security Level For Option 1
PTOPOP2   FORM       1         2          11      Security Level For Option 2
PTOPOP3   FORM       1         2          13      Security Level For Option 3
PTOPOP4   FORM       1         2          15      Security Level For Option 4
PTOPOP5   FORM       1         2          17      Security Level For Option 5
PTOPOP6   FORM       1         2          19      Security Level For Option 6
PTOPOP7   FORM       1         2          21      Security Level For Option 7
PTOPOP8   FORM       1         2          23      Security Level For Option 8
PTOPOP9   FORM       1         2          25      Security Level For Option 9
PTOPOP10  FORM       1         2          27      Security Level For Option 10
PTOPOP11  FORM       1         2          29      Security Level For Option 11
PTOPOP12  FORM       1         2          31      Security Level For Option 12
PTOPOP13  FORM       1         2          33      Security Level For Option 13
PTOPOP14  FORM       1         2          35      Security Level For Option 14
PTOPOP15  FORM       1         2          37      Security Level For Option 15
PTOPOP16  FORM       1         2          39      Security Level For Option 16
PTOPOP17  FORM       1         2          41      Security Level For Option 17
PTOPOP18  FORM       1         2          43      Security Level For Option 18
PTOPOP19  FORM       1         2          45      Security Level For Option 19
PTOPOP20  FORM       1         2          47      Security Level For Option 20
PTOPOP21  FORM       1         2          49      Security Level For Option 21
PTOPOP22  FORM       1         2          51      Security Level For Option 22
PTOPOP23  FORM       1         2          53      Security Level For Option 23
PTOPOP24  FORM       1         2          55      Security Level For Option 24
PTOPOP25  FORM       1         2          57      Security Level For Option 25
PTOPOP26  FORM       1         2          59      Security Level For Option 26
PTOPOP27  FORM       1         2          61      Security Level For Option 27
PTOPOP28  FORM       1         2          63      Security Level For Option 28
PTOPOP29  FORM       1         2          65      Security Level For Option 29
PTOPOP30  FORM       1         2          67      Security Level For Option 30
PTOPSPAR  DIM       59        59          69
.
.End of Record                           128
.
