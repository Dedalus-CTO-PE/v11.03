. V6.00.001 24/02/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   FMSWCFFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Web Statistical Account Negative Flags        
. *
. * File Type     :   SQL
. *
. * File Name     :   fmswcfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSWCFA1   IFILE    SQL, FIXED=103, KEY="U1-2,3-14"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMWCLEDG  DIM       2      2        1     Ledger                             
FMWCACCT  DIM       12     12       3     Account                            
FMWCUR1   DIM       25     25       15    User Def Ref 1                     
FMWCUR2   DIM       25     25       40    User Def Ref 2                     
FMWCUD1   DIM       8      8        65    User Def Date 1                    
FMWCUD2   DIM       8      8        73    User Def Date 2                    
FMWCUY1   DIM       1      1        81    User Def Y/N 1                     
FMWCUY2   DIM       1      1        82    User Def Y/N 2                     
FMWCSPA   DIM       20     20       83    Spare                              
.
.End of Record                      103  
.
