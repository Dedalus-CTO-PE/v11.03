. 20/04/1994  RKS Added Audit Vars for the new audit file 'fmsaudst'
. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSBUFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Statistical Account Budgets By Period            *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmscxxxx.dat                                     *
. *                      Where xxxx = Budget Type                         *
. *  Audit Name      :   fmsaudst.dat                                     *
. *                                                                       *
. *  Keys            :   KEY4                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
.Audit File Definition
.---------------------
.
FMSAUDST   IFILE SQL, FIXED=194, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSTAUDD   DIM      8      8        1     Date of Change
FMSTAUDT   DIM      8      8        9     Time of Change
FMSTAUDP   DIM      2      2        17    Port Doing Change
FMSTAUDR   DIM      1      1        19    Record Type    
.                                            A = Added Record
.                                            B = Before Change Record
.                                            C = After Change Record
.                                            D = Deleted Record
FMSTAUDS   FORM     1      2        20    Record Status
.                                            1 = Not Printed
.                                            2 = Printed
FMSTAUDO   DIM      4      4        22    Operator ID
.                                  ----
.                                   26
.Data
.
FMSSBUA1  IFILE SQL, FIXED=168, KEY="U1-2,3-14"        * for current year
FMSSBUA2  IFILE SQL, FIXED=168, KEY="U15-17,1-2,3-14"  * Profile Update
FMSSBUA3  IFILE SQL, FIXED=168, KEY="U1-2,3-14"        * for last year
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSTCULD  DIM       2      2        1     Ledger
FMSTCUAC  DIM       12     12       3     Account
FMSTCUPR  DIM       3      3        15    Budget Profile
.
FMSTCA01  FORM      12.5   10       18    Statistical Budget Period 1
FMSTCA02  FORM      12.5   10       28    Statistical Budget Period 2
FMSTCA03  FORM      12.5   10       38    Statistical Budget Period 3
FMSTCA04  FORM      12.5   10       48    Statistical Budget Period 4
FMSTCA05  FORM      12.5   10       58    Statistical Budget Period 5
FMSTCA06  FORM      12.5   10       68    Statistical Budget Period 6
FMSTCA07  FORM      12.5   10       78    Statistical Budget Period 7
FMSTCA08  FORM      12.5   10       88    Statistical Budget Period 8
FMSTCA09  FORM      12.5   10       98    Statistical Budget Period 9
FMSTCA10  FORM      12.5   10       108   Statistical Budget Period 10
FMSTCA11  FORM      12.5   10       118   Statistical Budget Period 11
FMSTCA12  FORM      12.5   10       128   Statistical Budget Period 12
FMSTCA13  FORM      12.5   10       138   Statistical Budget Period 13
.
FMSTCUSP  DIM       20     20       148   Spare
.
.End of Record                      168
.
