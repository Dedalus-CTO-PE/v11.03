. V6.00.001 21/03/1995                                                       
. V6.00.002 05/04/1995                                                       
. *----------------------------------------------------------------------
. * Include Name  :   DEBLINFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable
. *                   Debtors Linked Codes               
. *
. * File Type     :   SQL
. *
. * File Name     :   deblinaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBLINA1   IFILE    SQL, FIXED=455, KEY="U1-8"                                  
DEBLINA2   IFILE    SQL, FIXED=455, KEY="U9-43,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBLNDEB   DIM       8      8        1     Debtors Code                       
DBLNNA1   DIM       35     35       9     Name Line 1                        
DBLNNA2   DIM       35     35       44    Name Line 2                        
DBLNAD1   DIM       35     35       79    Address Line 1                     
DBLNAD2   DIM       35     35       114   Address Line 2                     
DBLNAD3   DIM       35     35       149   Address Line 3                     
DBLNAD4   DIM       35     35       184   Address Line 4                     
DBLNPC    DIM       8      8        219   Post Code                          
DBLNPH1   DIM       20     20       227   Phone 1 (BH)                       
DBLNPH2   DIM       20     20       247   Phone 2 (AH)                       
DBLNPH3   DIM       20     20       267   Phone 3 (Fax)                      
DBLNCON   DIM       30     30       287   Contact Name                       
DBLNACT   FORM      1      2        317   Active 0=No 1=Yes                  
DBLNSTA   FORM      1      2        319   Print Statements 0=No 1=Yes        
DBLNTEX   FORM      1      2        321   Tax Exempt 0=No 1=Yes              
DBLNTER   DIM       3      3        323   Terms Code                         
DBLNWRN   DIM       3      3        326   Warning Code (Cat DBWR)            
DBLNLIN   DIM       8      8        329   Linked/Merged Debtors Code         
DBLNPUR   DIM       8      8        337   Patients U/R Number                
DBLNBAD   FORM      1      2        345   Bad Debt 0=No 1=Yes                
DBLNCLM   FORM      12.2   8        347   Credit Limit                       
DBLNUR1   DIM       25     25       355   User Def Ref 1                     
DBLNUR2   DIM       25     25       380   User Def Ref 2                     
DBLNUD1   DIM       8      8        405   User Def Date 1                    
DBLNUD2   DIM       8      8        413   User Def Date 2                    
DBLNUY1   DIM       1      1        421   User Def Y/N 1                     
DBLNUY2   DIM       1      1        422   User Def Y/N 2                     
DBLNUC1   DIM       3      3        423   User Def Code 1                    
DBLNUC2   DIM       3      3        426   User Def Code 2                    
DBLNUC3   DIM       3      3        429   User Def Code 3                    
DBLNUC4   DIM       3      3        432   User Def Code 4                    
DBLNSPA   DIM       20     20       435   Spare                              
.
.End of Record                      455  
.
