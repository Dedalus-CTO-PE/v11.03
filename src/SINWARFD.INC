. V6.00.008 23/06/1994     Added SIWANAT - Reduced SIWAUR2 by 2 to make it.  
. *----------------------------------------------------------------------
. * Include Name  :   SINWARFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Warehouse Details                     
. *
. * File Type     :   SQL
. *
. * File Name     :   sinwaraf.dat
. * Audit Name    :   sinaudwa.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDWA   IFILE    SQL, FIXED=197, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIWAAUDD  DIM       8      8        1     Date of Change
SIWAAUDT  DIM       8      8        9     Time of Change
SIWAAUDP  DIM       2      2        17    Port
SIWAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIWAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIWAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINWARA1   IFILE    SQL, FIXED=171, KEY="U1-5"                                  
SINWARA2   IFILE    SQL, FIXED=171, KEY="U6-45,1-5"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIWAWAR   DIM       5      5        1     Warehouse Code                     
SIWADES   DIM       40     40       6     Description                        
SIWATYP   FORM      1      2        46    Issues Inter Dr Type 0Sub 1Com 2Acc
SIWACTY   FORM      1      2        48    Issues Cr 0-A/c,1-Subj,2-Comm      
SIWAPTY   FORM      1      2        50    Stock P/O Debit 0-A/c,1-Sub,2-Comm 
SIWALED   DIM       2      2        52    Ledger                             
SIWAIACC  DIM       12     12       54    Issue Credit Account or Cost Centre
SIWAPACC  DIM       12     12       66    Purchases Debit Acct or Cost Centre
SIWADISS  DIM       5      5        78    Dissection                         
SIWARESP  DIM       4      4        83    Responsibility                     
SIWAUR1   DIM       15     15       87    User Def Ref 1                     
SIWAMUAC  DIM       12     12       102   Mark Up Credit Account             
SIWANAT   FORM      1      2        114   Turn Nato Codes On 1=Yes 0=No      
SIWAUR2   DIM       1      1        116   User Defined Refeence (Spare)      
SIWAUD1   DIM       8      8        117   User Def Date 1                    
SIWAUD2   DIM       8      8        125   User Def Date 2                    
SIWAUC1   DIM       3      3        133   User Def Code 1                    
SIWAUC2   DIM       3      3        136   User Def Code 2                    
SIWAUY1   DIM       1      1        139   User Def Y/N 1                     
SIWAUY2   DIM       1      1        140   User Def Y/N 2                     
SIWAPIC   FORM      1      2        141   Using Picking Slips 0=No           
SIWAPA1   FORM      1      2        143   Spare Parameter 1                  
SIWAPA2   FORM      1      2        145   Spare Parameter 2                  
SIWAPA3   FORM      1      2        147   Spare Parameter 3                  
SIWAPA4   FORM      1      2        149   Spare Parameter 4                  
SIWANPO   DIM       7      7        151   Next Purchase Order Number         
SIWASTA   DIM       12     12       158   Stock Transfer P/L Account         
SIWAPSH   DIM       1      1        170   Print SOH on picking sheet         
.
.End of Record                      171  
.
