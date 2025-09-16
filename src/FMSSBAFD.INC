. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSBAFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Subjective Master Details                        *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmssbaaf.dat                                     *
. *  Audit Name      :   fmsaudsa.dat                                     *
. *                                                                       *
. *  Keys            :   KEY14                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *                   31.03.05 Peter Vela CAR 59696                       *
. *                   FMSACGRP not used anymore                           *
. *                   06.10.91 Neeriem Dye (who else !!)                  *
. *                   Added level to default acct details for total subj's*
. *                   srf 110702                                          *
. *                                                                       *
. *************************************************************************
.
.Audit File Definition
.---------------------
.
FMSAUDSA   IFILE SQL, FIXED=359, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSAAUDD   DIM      8      8        1     Date of Change
FMSAAUDT   DIM      8      8        9     Time of Change
FMSAAUDP   DIM      2      2        17    Port Doing Change
FMSAAUDR   DIM      1      1        19    Record Type    
.                                            A = Added Record
.                                            B = Before Change Record
.                                            C = After Change Record
.                                            D = Deleted Record
FMSAAUDS   FORM     1      2        20    Record Status
.                                            1 = Not Printed
.                                            2 = Printed
FMSAAUDO   DIM      4      4        22    Operator ID
.
.Data File Definition
.---------------------
FMSSBAA1  IFILE  SQL, FIXED=385, KEY="U1-2,3-14" 
FMSSBAA2  IFILE  SQL, FIXED=385, KEY="U1-2,15-49,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSALEDG  DIM       2      2        1     Ledger
FMSASUBJ  DIM       12     12       3     Subjective Code
FMSADESC  DIM       35     35       15    Subjective Description
FMSACGRP  DIM       5      5        50    Commodity Group (Not used anymore)
.
. Default Normal Account Details
.
FMSAADES  DIM       35     35       55    Abbreviated Description
FMSAPPOS  DIM       5      5        90    Print Position
FMSATYPE  DIM       1      1        95    Type 0 = posting subj type
.                                              1 = Income 2 = Expense
.                                              3 = Asset  4 = Liability
.                                              5 = Equity
FMSASTYP  DIM       1      1        96    Subjective type0=norm,1=total,2=head
.                                                        3=stat post,4=stat tot
FMSADTYP  DIM       1      1        97    Description Type 0=combined,1=sub,2=cc
FMSASEC   DIM       1      1        98    Not used
FMSAREF1  DIM       25     25       99    User defined reference
FMSAREF2  DIM       25     25       124   User defined reference
FMSAREF3  DIM       25     25       149   User defined reference
FMSAREF4  DIM       25     25       174   User defined reference
FMSADAT1  DIM       8      8        199   User Defined Date
FMSADAT2  DIM       8      8        207   User Defined Date
FMSADAT3  DIM       8      8        215   User Defined Date
FMSADAT4  DIM       8      8        223   User Defined Date
FMSACOD1  DIM       3      3        231   User Defined Code
FMSACOD2  DIM       3      3        234   User Defined Code
FMSACOD3  DIM       3      3        237   User Defined Code
FMSACOD4  DIM       3      3        240   User Defined Code
FMSAAMT1  FORM      12.6   10       243   User Defined Amount
FMSAAMT2  FORM      12.6   10       253   User Defined Amount
FMSAAMT3  FORM      12.6   10       263   User Defined Amount
FMSAAMT4  FORM      12.6   10       273   User Defined Amount
.
. Normal Account Fields Only
.
FMSASTAT  FORM      2      2        283   Status
.                                         0=Open 1=Journals Only 2=Closed
FMSACTRL  FORM      1      2        285   Bank Account (Y/N)
.                                         0=No 1=Yes
FMSAASST  FORM      1      2        287   Asset Register Account (Y/N)
.                                         0=No 1=Yes
FMSAPPT   FORM      1      2        289   Prescribed Payments Tax
.                                         0=No 1=Yes
FMSAONC   FORM      1      2        291   Oncost Indicator
.                                         0=No 1=Yes
FMSAONCC  DIM       3      3        293   Oncost Code
.
. Bank Account Fields
.
FMSACHEQ  DIM       10     10       296   Cheque Account Number
.
. New Fields
.
FMSAADDT  DIM       12     12       306   Add to Subjective
.
. Stat Subj Details
.
FMSADPLA  DIM       1      1        318   Decimal Places
FMSAUNIT  DIM       20     20       319   Statistical Units
FMSAAYTD  FORM      1      2        339   Av YTD (1=yes)
FMSAMULT  FORM      6.2    5        341   Constant Mult
FMSADIV   FORM      6.2    5        346   Constant Div 
FMSABLN   DIM       12     12       351   Budget Link Subjective
.
FMSADLEV  DIM       3      3        363   Default Total Account Level
.
FMSASPAR  DIM       17     17       366   Spare
FMSALOCK  DIM       2      2        383   Record Lock
.
.End of Record                      385
.
SASTYPE   INIT      "         "                  * subjective type
SASTYPE0  INIT      "Normal"
SASTYPE1  INIT      "Total"
SASTYPE2  INIT      "Heading"
SASTYPE3  INIT      "Stat-Post"
SASTYPE4  INIT      "Stat-Tot"
.
