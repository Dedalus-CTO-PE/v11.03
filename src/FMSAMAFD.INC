. **************************************************************************
. *                                                                        *
. *  Include Name    :   FMSAMAFD.INC                                      *
. *                                                                        *
. *  Function        :   File Def'n Include for Financial Management
. *                      Account Master Details                            *
. *                                                                        *
. *  File Type       :   SQL                                               *
. *                                                                        *
. *  File Name       :   fmsamaaf.dat                                      *
. *  Audit Name      :   fmsaudam.dat                                      *
. *                                                                        *
. *  Keys            :   KEY14                                             *
. *                                                                        *
. *  Modifications   :                                                     *
. **************************************************************************
.
.Audit File Definition
.---------------------
.
FMSAUDAM   IFILE SQL, FIXED=371, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMAMAUDD   DIM      8      8        1     Date of Change
FMAMAUDT   DIM      8      8        9     Time of Change
FMAMAUDP   DIM      2      2        17    Port Doing Change
FMAMAUDR   DIM      1      1        19    Record Type    
.                                            A = Added Record
.                                            B = Before Change Record
.                                            C = After Change Record
.                                            D = Deleted Record
FMAMAUDS   FORM     1      2        20    Record Status
.                                            1 = Not Printed
.                                            2 = Printed
FMAMAUDO   DIM      4      4        22    Operator ID
.
.Data File Definition
.---------------------
FMSAMAA1  IFILE  SQL, FIXED=345, KEY="U1-2,3-14"               * by Code
FMSAMAA2  IFILE  SQL, FIXED=345, KEY="U1-2,53-53,3-14"         * by Type
FMSAMAA3  IFILE  SQL, FIXED=345, KEY="U1-2,53-53,15-49,3-14"   * by Name
FMSAMAA4  IFILE  SQL, FIXED=345, KEY="U53-53,310-312,1-2,3-14" * Calculation
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMAMLEDG  DIM       2      2        1     Ledger
FMAMACCT  DIM       12     12       3     Account
FMAMDESC  DIM       35     35       15    Account Description
FMAMSEC   DIM       3      3        50    Security Code
FMAMTYPE  DIM       1      1        53    Type 1 = Income  2 = Expense
.                                              3 = Asset   4 = Liability
.                                              5 = Equity  6 = Total
.                                              7 = Heading 8 = stat posting
.                                              9 = stat total
FMAMREF1  DIM       25     25       54    User defined reference
FMAMREF2  DIM       25     25       79    User defined reference
FMAMREF3  DIM       25     25       104   User defined reference
FMAMREF4  DIM       25     25       129   User defined reference
FMAMDAT1  DIM       8      8        154   User Defined Date
FMAMDAT2  DIM       8      8        162   User Defined Date
FMAMDAT3  DIM       8      8        170   User Defined Date
FMAMDAT4  DIM       8      8        178   User Defined Date
FMAMCOD1  DIM       3      3        186   User Defined Code
FMAMCOD2  DIM       3      3        189   User Defined Code
FMAMCOD3  DIM       3      3        192   User Defined Code
FMAMCOD4  DIM       3      3        195   User Defined Code
FMAMAMT1  FORM      12.6   10       198   User Defined Amount
FMAMAMT2  FORM      12.6   10       208   User Defined Amount
FMAMAMT3  FORM      12.6   10       218   User Defined Amount
FMAMAMT4  FORM      12.6   10       228   User Defined Amount
.
. Normal Account Fields Only
.
FMAMSTAT  FORM      2      2        238   Status 0=Open,1=Journals Only,2=Closed
FMAMCTRL  FORM      1      2        240   Bank Account            0=No 1=Yes
FMAMASST  FORM      1      2        242   Asset Register Account  0=No 1=Yes
FMAMPPT   FORM      1      2        244   Prescribed Payments Tax 0=No 1=Yes
FMAMONC   FORM      1      2        246   Oncost Indicator        0=No 1=Yes
FMAMONCC  DIM       3      3        248   Oncost Code
.
. Bank Account Fields
.
FMAMCHEQ  DIM       10     10       251   Cheque Account Number
FMAMOBAL  FORM      12.2   8        261   Opening Balance
FMAMBDAT  DIM       8      8        269   Date of Opening Balance
.
. Stat Account Details
.
FMAMDPLA  DIM       1      1        277   Decimal Places
FMAMUNIT  DIM       20     20       278   Statistical Units
FMAMAYTD  FORM      1      2        298   Av YTD (1=yes)
FMAMMULT  FORM      6.2    5        300   Constant Mult
FMAMDIV   FORM      6.2    5        305   Constant Div 
.
. Total Account Calculation Fields
.
FMAMCLEV  DIM       3      3        310   Calculation level ("000" for post)
FMAMDPRO  DIM       3      3        313   Default Budget Profile
.
FMAMSPAR  DIM       27     27       316   Spare
FMAMLOCK  DIM       2      2        343   Record Lock
.
.End of Record                      345
.
