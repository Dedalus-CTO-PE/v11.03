. 20/04/1994  RKS Added Audit Vars for the new audit file 'fmsaudbu'
. **************************************************************************
. *                                                                        *
. *  Include Name    :   FMSBUDFD.INC                                      *
. *                                                                        *
. *  Function        :   File Def'n Include for Financial Management
. *                      Account Budgets By Period                         *
. *                                                                        *
. *  File Type       :   SQL                                               *
. *                                                                        *
. *  File Name       :   fmsbxxxx.dat                                      *
. *                      Where xxx = Budget Type                           *
. *                                                                        *
. *  Audit Name      :   fmsaudbu.dat                                      *
. *                                                                        *
. *  Keys            :   KEY4                                              *
. *                                                                        *
. *  Modifications   :                                                     *
. **************************************************************************
.
.Audit File Definition
.---------------------
.
FMSAUDBU   IFILE SQL, FIXED=337, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBUAUDD   DIM      8      8        1     Date of Change
FMBUAUDT   DIM      8      8        9     Time of Change
FMBUAUDP   DIM      2      2        17    Port Doing Change
FMBUAUDR   DIM      1      1        19    Record Type    
.                                            A = Added Record
.                                            B = Before Change Record
.                                            C = After Change Record
.                                            D = Deleted Record
FMBUAUDS   FORM     1      2        20    Record Status
.                                            1 = Not Printed
.                                            2 = Printed
FMBUAUDO   DIM      4      4        22    Operator ID
.                                  ----
.                                   26
.Data
.
FMSBUDA1  IFILE SQL, FIXED=311, KEY="U1-2,3-14"        * for current year
FMSBUDA2  IFILE SQL, FIXED=311, KEY="U15-17,1-2,3-14"  * Profile Update
FMSBUDA3  IFILE SQL, FIXED=311, KEY="U1-2,3-14"        * for last year
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBUCULD  DIM       2      2        1     Ledger
FMBUCUAC  DIM       12     12       3     Account
FMBUCUPR  DIM       3      3        15    Budget Profile
.
FMBUCA01  FORM      12.2   8        18    Budget Period 1
FMBUCA02  FORM      12.2   8        26    Budget Period 2
FMBUCA03  FORM      12.2   8        34    Budget Period 3
FMBUCA04  FORM      12.2   8        42    Budget Period 4
FMBUCA05  FORM      12.2   8        50    Budget Period 5
FMBUCA06  FORM      12.2   8        58    Budget Period 6
FMBUCA07  FORM      12.2   8        66    Budget Period 7
FMBUCA08  FORM      12.2   8        74    Budget Period 8
FMBUCA09  FORM      12.2   8        82    Budget Period 9
FMBUCA10  FORM      12.2   8        90    Budget Period 10
FMBUCA11  FORM      12.2   8        98    Budget Period 11
FMBUCA12  FORM      12.2   8        106   Budget Period 12
FMBUCA13  FORM      12.2   8        114   Budget Period 13
.
. Budgets in dollars Only
.
FMBUCB01  FORM      12     7        122   Budget Period 1
FMBUCB02  FORM      12     7        129   Budget Period 2
FMBUCB03  FORM      12     7        136   Budget Period 3
FMBUCB04  FORM      12     7        143   Budget Period 4
FMBUCB05  FORM      12     7        150   Budget Period 5
FMBUCB06  FORM      12     7        157   Budget Period 6
FMBUCB07  FORM      12     7        164   Budget Period 7
FMBUCB08  FORM      12     7        171   Budget Period 8
FMBUCB09  FORM      12     7        178   Budget Period 9
FMBUCB10  FORM      12     7        185   Budget Period 10
FMBUCB11  FORM      12     7        192   Budget Period 11
FMBUCB12  FORM      12     7        199   Budget Period 12
FMBUCB13  FORM      12     7        206   Budget Period 13
.
. Budgets in Thousands Only
.
FMBUCC01  FORM      9      6        213   Budget Period 1
FMBUCC02  FORM      9      6        219   Budget Period 2
FMBUCC03  FORM      9      6        225   Budget Period 3
FMBUCC04  FORM      9      6        231   Budget Period 4
FMBUCC05  FORM      9      6        237   Budget Period 5
FMBUCC06  FORM      9      6        243   Budget Period 6
FMBUCC07  FORM      9      6        249   Budget Period 7
FMBUCC08  FORM      9      6        255   Budget Period 8
FMBUCC09  FORM      9      6        261   Budget Period 9
FMBUCC10  FORM      9      6        267   Budget Period 10
FMBUCC11  FORM      9      6        273   Budget Period 11
FMBUCC12  FORM      9      6        279   Budget Period 12
FMBUCC13  FORM      9      6        285   Budget Period 13
.
FMBUCUSP  DIM       20     20       291   Spare
.
.End of Record                      311
.
