. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSTRNFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Transaction Details
. *
. * File Type     :   SQL
. *
. * File Name     :   amstrnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSTRNA1   IFILE    SQL, FIXED=209, KEY="U1-2,3-14,15-19"                       
AMSTRNA2   IFILE    SQL, FIXED=209, KEY="U20-24,1-2,3-14,15-19"                 
AMSTRNA3   IFILE    SQL, FIXED=209, KEY="U25-28,29-30,1-2,3-14,15-19"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMTRREG   DIM       2      2        1     Register                           
AMTRASS   DIM       12     12       3     Asset                              
AMTRUNI   DIM       5      5        15    Unique ID                          
AMTRIRUN  DIM       5      5        20    Interface Run Number               
AMTRYEAR  DIM       4      4        25    Year                               
AMTRPER   DIM       2      2        29    Period                             
AMTRDAT   DIM       8      8        31    Date of Transaction                
AMTRREF   DIM       15     15       39    Reference                          
AMTRCOM   DIM       30     30       54    Comment                            
AMTRAMT   FORM      12.2   8        84    Amount of Transaction              
AMTRDLED  DIM       2      2        92    Dr Ledger                          
AMTRDACC  DIM       12     12       94    Dr Account                         
AMTRCACC  DIM       12     12       106   Cr Account                         
AMTRDIS   DIM       5      5        118   Dissection                         
AMTRRES   DIM       4      4        123   Responsibility                     
AMTRUR1   DIM       30     30       127   User Def Ref 1                     
AMTRUR2   DIM       30     30       157   User Def Ref 2                     
AMTRUY1   DIM       1      1        187   User Def Y/N 1                     
AMTRUY2   DIM       1      1        188   User Def Y/N 2                     
AMTRSPA   DIM       20     20       189   Spare                              
.
.End of Record                      209  
.
