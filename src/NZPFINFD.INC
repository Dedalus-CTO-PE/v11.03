. V9.08.001 29/01/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   NZPFINFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Priv Financial Summary          
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpfinaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPFINA1   IFILE    SQL, FIXED=194, KEY="U4-4,5-10,11-14,15-15,16-28,1-3"       
NZPFINA2   IFILE    SQL, FIXED=194, KEY="U1-3,4-4,5-10,11-14,15-15,16-28"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZFIHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
NZFISYST  DIM       1      1        4     System Indicator                   
.                                         1 = A + E
.                                         2 = Outpatient
.                                         3 = Inpatient
NZFISITE  DIM       6      6        5     Outpatient Site                    
NZFIYEAR  DIM       4      4        11    Financial Year                     
NZFITYPE  DIM       1      1        15    Financial Type                     
.                                         A - FEES GENERATED
.                                         B - CASH RECEIVED
.                                         C - JOURNALS
.                                         D - MERCHANT CARDS - CLAIMED
.                                         E - MERCHANT CARDS - PAID
.                                         F - MERCHANT CARDS - COMMIS
.                                         G - MERCHANT CARDS - JOUR
NZFICODE  DIM       13     13       16    Finance Code                       
.                                         FOR FEES INVOICED
.                                         FFS - Accommodation 
.                                         -------------------
.                                         AXXXYYY  - I/P ACCOMMODATION
.                                         NXXXYYY  - Credit Note Accm.
.                                          XXX - ADMISS TYPE or WARD 
.                                          YYY - BLANK  or CLAIM TYPE
.
.                                         AXXXXXX  - O/P CHARGE
.                                         NXXXXXX  - Credit Note O/P
.                                          XXXXXX - CLINIC
.
.                                         Patient Fixed Fee
.                                         ------------------------------------
.                                         BXXXXXXYYYYYYYYY
.                                         PXXXXXXYYYYYYYYY - Credit Note
.                                          XXXXXX   - Contract/HF
.                                          YYYYYYYY - Contract Proc.
.
.                                         Co-Payment
.                                         ------------------------------------
.                                         DXXXXXXYYYYYYYYY
.                                         RXXXXXXYYYYYYYYY - Credit Note
.                                          XXXXXX   - Contract/HF
.                                          YYYYYYYY - Contract Proc.
.
.                                         Funder Co-Payment Adjustment
.                                         ------------------------------------
.                                         GXXXXXXYYYYYYYYY
.                                         UXXXXXXYYYYYYYYY - Credit Note
.                                          XXXXXX   - Contract/HF
.                                          YYYYYYYY - Contract Proc.
.
.                                         From Funder Contribution
.                                         ------------------------
.                                         CXXXXXXYYYYYYYYY
.                                         OXXXXXXYYYYYYYYY - Credit Note
.                                          XXXXXX   - Contract/HF
.                                          YYYYYYYY - Contract Proc.
.
.                                         Funder Contribution
.                                         -------------------
.                                         FXXXXXXYYYYYYYYY
.                                         SXXXXXXYYYYYYYYY - Credit Note
.                                          XXXXXX   - Contract/HF
.                                          YYYYYYYY - Contract Proc.
.
.                                         Miscellaneous/Theatre Fee
.                                         -------------------------
.                                         MXXXYYYYYYYYY - MISC ITEMS
.                                         QXXXYYYY - Credit Note Misc.
.                                          XXX - MIS ITM GRP
.                                          YYYYYYYYY - MIS ITM CDE
.
.                                         MXXXYYY - MISC ITEMS (CL)
.                                         QXXXYYY - Credit Note
.                                          XXX - CLAIM CODE
.                                          YYYY - MIS GRP CDE
.
.                                         FOR RECEIPTS
.                                         -------------
.                                         A        - FROM PATIENT
.                                         BXXXXXX  - FROM HEALTH FUND
.                                         C        - FROM GOVT SUBSIDY
.                                         DXXX     - DEPOSITS
.                                         IXXXXXX  - FROM INSURANCE CO
.
.                                         MXXX     - FROM PATIENT
.                                                    VIA MERC CARDS
.                                         FOR  JOURNALS
.                                         -------------
.                                         XX       - JOURNAL CODE
.                                         XXXYY    - JOURNAL CODE (CL)
.                                         XXX - CLAIM CODE
.                                         YY - JOURNAL CODE
.                                         WCXXX    - MERCHANT COMMISS
.                                           XXX - MERC CODE
.                                         WJXXX    - MERCHANT JOURNAL
.                                           XXX - MERC CODE
.                                         FOR  MERCHANT CARDS
.                                         -------------------
.                                         XXX       - MERCHANT CODE
NZFIPERD  FORM      14.2   9        29    Period Amount                      
NZFIMTH1  FORM      14.2   9        38    Amount for Month 1                 
NZFIMTH2  FORM      14.2   9        47    Amount for Month 2                 
NZFIMTH3  FORM      14.2   9        56    Amount for Month 3                 
NZFIMTH4  FORM      14.2   9        65    Amount for Month 4                 
NZFIMTH5  FORM      14.2   9        74    Amount for Month 5                 
NZFIMTH6  FORM      14.2   9        83    Amount for Month 6                 
NZFIMTH7  FORM      14.2   9        92    Amount for Month 7                 
NZFIMTH8  FORM      14.2   9        101   Amount for Month 8                 
NZFIMTH9  FORM      14.2   9        110   Amount for Month 9                 
NZFIMT10  FORM      14.2   9        119   Amount for Month 10                
NZFIMT11  FORM      14.2   9        128   Amount for Month 11                
NZFIMT12  FORM      14.2   9        137   Amount for Month 12                
NZFIMT13  FORM      14.2   9        146   Amount for Month 13                
NZFILSYR  FORM      14.2   9        155   Last Year amount since Last Year   
NZFISPAR  DIM       30     30       164   Spare variable                     
.
.End of Record                      194  
.
