. 20/04/1994 RKS Added Audit Vars for the new audit file 'fmsaudbp'
. 20/05/1992 NEZ Convert file for case tools
. *----------------------------------------------------------------------
. * Include Name  :   FMSBPFFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Budget Profile Table
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsbpfaf.dat
. * Audit Name    :   fmsaudbp.dat
. *
. *----------------------------------------------------------------------
.Audit File Definition
.---------------------
.
FMSAUDBP   IFILE SQL, FIXED=129, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBPAUDD   DIM      8      8        1     Date of Change
FMBPAUDT   DIM      8      8        9     Time of Change
FMBPAUDP   DIM      2      2        17    Port Doing Change
FMBPAUDR   DIM      1      1        19    Record Type    
.                                            A = Added Record
.                                            B = Before Change Record
.                                            C = After Change Record
.                                            D = Deleted Record
FMBPAUDS   FORM     1      2        20    Record Status
.                                            1 = Not Printed
.                                            2 = Printed
FMBPAUDO   DIM      4      4        22    Operator ID
.                                  ----
.                                   26
.Data File Definition
.--------------------
FMSBPFA1   IFILE    SQL, FIXED=103, KEY="U1-2,3-6,7-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBPLEDG  DIM       2      2        1     Ledger                             
FMBPYEAR  DIM       4      4        3     Financial Year                     
FMBPCODE  DIM       3      3        7     Budget Profile Code                
FMBPDESC  DIM       25     25       10    Description                        
FMBPPC1   FORM      4.2    4        35    Period Percentage 01               
FMBPPC2   FORM      4.2    4        39    Period Percentage 02               
FMBPPC3   FORM      4.2    4        43    Period Percentage 03               
FMBPPC4   FORM      4.2    4        47    Period Percentage 04               
FMBPPC5   FORM      4.2    4        51    Period Percentage 05               
FMBPPC6   FORM      4.2    4        55    Period Percentage 06               
FMBPPC7   FORM      4.2    4        59    Period Percentage 07               
FMBPPC8   FORM      4.2    4        63    Period Percentage 08               
FMBPPC9   FORM      4.2    4        67    Period Percentage 09               
FMBPPC10  FORM      4.2    4        71    Period Percentsge 10               
FMBPPC11  FORM      4.2    4        75    Period Percentage 11               
FMBPPC12  FORM      4.2    4        79    Period Percentage 12               
FMBPPC13  FORM      4.2    4        83    Period Percentage 13               
FMBPSPAR  DIM       16     16       87    Spare                               
.
.End of Record                      103  
.
