. V6.00.002 01/08/1996 BGA Added Bank Transfer/Clearing House Details        
. V6.00.003 02/08/1996 BGA Added Locking                                     
. V9.03.001 17/02/2004 SB  Changed variable FMCHFORM to FMCHFRMT             
. *----------------------------------------------------------------------
. * Include Name  :   FMSCHQFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   Cheque Account Masterfile          
. *
. * File Type     :   SQL
. *
. * File Name     :   fmschqaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSCHQA1   IFILE    SQL, FIXED=326, KEY="U1-15"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCHCHQ   DIM       15     15       1     Cheque Account                     
FMCHDES   DIM       40     40       16    Description                        
FMCHBAL   FORM      12.2   8        56    Balance                            
FMCHBDT   DIM       8      8        64    Balance Date                       
FMCHFMT   FORM      2      2        72    Bank Transfer Format               
FMCHBSB   DIM       6      6        74    Bank State Branch                  
FMCHACCT  DIM       9      9        80    Account Number                     
FMCHNZAC  DIM       16     16       89    NZ Account Number                  
FMCHDESC  DIM       35     35       105   Description                        
FMCHADD1  DIM       25     25       140   Address Line 1                     
FMCHADD2  DIM       25     25       165   Address Line 2                     
FMCHADD3  DIM       20     20       190   Address Line 3                     
FMCHADD4  DIM       4      4        210   Post Code                          
FMCHFRMT  DIM       1      1        214   Format - Disk, Tape, Direct        
FMCHBNAM  DIM       3      3        215   Bank Name                          
FMCHUSER  DIM       6      6        218   Number of Users Supplying Tape     
FMCHEDSC  DIM       12     12       224   Description of Entries in File     
FMCHDFRM  FORM      1      2        236   Format of Data Records 1-Cemtex    
FMCHUR1   DIM       25     25       238   User Def Ref 1                     
FMCHUR2   DIM       25     25       263   User Def Ref 2                     
FMCHUD1   DIM       8      8        288   User Def Date 1                    
FMCHUD2   DIM       8      8        296   User Def Date 2                    
FMCHUY1   DIM       1      1        304   User Def Y/N 1                     
FMCHUY2   DIM       1      1        305   User Def Y/N 2                     
FMCHSPA   DIM       20     20       306   Spare                              
.
.End of Record                      326  
.
