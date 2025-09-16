.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PATILTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File definition include for Patient           *
.  *                        Letters                                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   patletrf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   Key 6                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *       V10.08.01 20/07/2016  Don Nguyen       TSK 0294154             *
.  *                 Changed PTLECONF - (NO LONGER IN USE)                *
.  *       V10.07.02 02/11/2015  Steve Armstrong  CAR 294154              *
.  *                 Added PTLECOMM & PTLECONF                            *
.  *       V10.07.01 21/10/2015  Ebon Clements CAR 320819                 *
.  *                 Added PTLEACTV                                       *
.  *       V5.03.01  25/10/1995    Justin Coates  (SUHT mods)             *
.  *                 added PTLEMMFN                                       *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PATLETR1  IFILE     SQL, FIXED=100, KEY="U1-3,4-6"
PATLETR2  IFILE     SQL, FIXED=100, KEY="U4-6,1-3"
.
.Name     Type      Length  Phys  Start  Description
.----     ----      ------  ----  -----  -----------
DPTLELNO  DIM       3       3         1  Letter Number
DPTLELIN  DIM       3       3         4  Line number for letter
PTLETEXT  DIM       70      70        7  Line of letter
PTLELVAR  FORM      1       2        77  Variable present
.                                            1 = Yes
.                                            2 = No
PTLEPBOT  FORM      2       2        79  Letter bottom margin
PTLEPTOP  FORM      2       2        81  Letter top margin
PTLEPPAG  FORM      3       3        83  Physical paper length (no. of lines)
PTLEPTAB  FORM      2       2        86  Letter left margin
PTLEMMFN  DIM       8       8        88  Mail Merge File Name
PTLEACTV  DIM       1       1        96  Active
.                                        Blank or 0 = Active, 1 = Inactive
PTLECOMM  DIM       1       1        97  Communication Method
.                                          0 or Blank = Printed Letter
.                                          1 = SMS Notification
PTLECONF  DIM       1       1        98  (NO LONGER IN USE)
PTLESPAR  DIM       1       1        99  Spare variable
.
.End of record                      100
.
. Redefine form fields from key
. -----------------------------
PTLELTNO  FORM        3
PTLELINO  FORM        3
.
