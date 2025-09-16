. VF.01.002 25/03/2003 JT  Added index 4-Debtors by U/R number               
. V9.09.001 24/09/2007 SB  Added Dissection Code                             
. *----------------------------------------------------------------------
. * Include Name  :   DEBDBTFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable                
. *                   Debtors Masterfile                 
. *
. * File Type     :   SQL
. *
. * File Name     :   debdbtaf.dat
. * Audit Name    :   debauddb.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
DEBAUDDB   IFILE    SQL, FIXED=480, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBDBAUDD  DIM       8      8        1     Date of Change
DBDBAUDT  DIM       8      8        9     Time of Change
DBDBAUDP  DIM       2      2        17    Port
DBDBAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
DBDBAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
DBDBAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
DEBDBTA1   IFILE    SQL, FIXED=455, KEY="U1-8"                                  
DEBDBTA2   IFILE    SQL, FIXED=455, KEY="U9-43,1-8"                             
DEBDBTA3   IFILE    SQL, FIXED=455, KEY="U355-379,1-8"                          
DEBDBTA4   IFILE    SQL, FIXED=455, KEY="U337-344,1-8"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBDBDEB   DIM       8      8        1     Debtors Code                       
DBDBNA1   DIM       35     35       9     Name Line 1                        
DBDBNA2   DIM       35     35       44    Name Line 2                        
DBDBAD1   DIM       35     35       79    Address Line 1                     
DBDBAD2   DIM       35     35       114   Address Line 2                     
DBDBAD3   DIM       35     35       149   Address Line 3                     
DBDBAD4   DIM       35     35       184   Address Line 4                     
DBDBPC    DIM       8      8        219   Post Code                          
DBDBPH1   DIM       20     20       227   Phone 1 (BH)                       
DBDBPH2   DIM       20     20       247   Phone 2 (AH)                       
DBDBPH3   DIM       20     20       267   Phone 3 (Fax)                      
DBDBCON   DIM       30     30       287   Contact Name                       
DBDBACT   FORM      1      2        317   Active 0=No 1=Yes                  
DBDBSTA   FORM      1      2        319   Print Statements 0=No 1=Yes        
DBDBTEX   FORM      1      2        321   Tax Exempt 0=No 1=Yes              
DBDBTER   DIM       3      3        323   Terms Code                         
DBDBWRN   DIM       3      3        326   Warning Code (Cat DBWR)            
DBDBLIN   DIM       8      8        329   Linked/Merged Debtors Code         
DBDBPUR   DIM       8      8        337   Patients U/R Number                
DBDBBAD   FORM      1      2        345   Bad Debt 0=No 1=Yes                
DBDBCLM   FORM      12.2   8        347   Credit Limit                       
DBDBSORT  DIM       25     25       355   Debtors Sort Key                   
DBDBUR2   DIM       25     25       380   User Def Ref 2                     
DBDBUD1   DIM       8      8        405   User Def Date 1                    
DBDBUD2   DIM       8      8        413   User Def Date 2                    
DBDBUY1   DIM       1      1        421   User Def Y/N 1                     
DBDBUY2   DIM       1      1        422   User Def Y/N 2                     
DBDBUC1   DIM       3      3        423   User Def Code 1                    
DBDBUC2   DIM       3      3        426   User Def Code 2                    
DBDBUC3   DIM       3      3        429   User Def Code 3                    
DBDBUC4   DIM       3      3        432   User Def Code 4                    
DBDBDISS  DIM       5      5        435   Dissection Code                    
DBDBSPA   DIM       15     15       440   Spare                              
.
.End of Record                      455  
.
