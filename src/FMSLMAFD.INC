. VF.01.001 21/03/2000 SB  Added Pay as You Go                               
. *----------------------------------------------------------------------
. * Include Name  :   FMSLMAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Ledger Master Details                  
. *
. * File Type     :   SQL
. *
. * File Name     :   fmslmaaf.dat
. * Audit Name    :   fmsaudla.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
FMSAUDLA   IFILE    SQL, FIXED=195, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLAAUDD  DIM       8      8        1     Date of Change
FMLAAUDT  DIM       8      8        9     Time of Change
FMLAAUDP  DIM       2      2        17    Port
FMLAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
FMLAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
FMLAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
FMSLMAA1   IFILE    SQL, FIXED=170, KEY="U1-2"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLALEDG  DIM       2      2        1     Ledger Number                      
FMLADESC  DIM       35     35       3     Description                        
FMLACYRR  DIM       4      4        38    Current Financial Yr CCYY          
FMLAPERS  FORM      1      2        42    Number of Periods 0 = 12, 1 = 13   
FMLABNK   DIM       12     12       44    Bank Control                       
FMLACRD   DIM       12     12       56    Creditors Control                  
FMLADIS   DIM       12     12       68    Discount Control                   
FMLADEB   DIM       12     12       80    Debtors Control                    
FMLAPAY   DIM       12     12       92    Payments in Suspense               
FMLAIFT   DIM       12     12       104   Inter Fund Transfer Account        
FMLAAGST  DIM       12     12       116   Accrual GST                        
FMLAPER   DIM       2      2        128   Current Enquiry Period             
FMLAPTY   DIM       1      1        130   Enquiry Projection Type (0=none)   
FMLAABP   DIM       1      1        131   Enquiry Anal by Perd (0=$,1=$+c)   
FMLABNK2  DIM       12     12       132   Bank Control Account 2             
FMLAPAYG  DIM       12     12       144   Pay As You Go Control Account      
FMLASPAR  DIM       14     14       156   Spare Variable                     
.
.End of Record                      170  
.
