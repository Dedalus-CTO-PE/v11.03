. V6.05.001 09/12/1998                                                       
. V6.05.002 17/12/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESTMBFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Template by Service Code    
. *
. * File Type     :   SQL
. *
. * File Name     :   restmbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESTMBA1   IFILE    SQL, FIXED=176, KEY="U1-12,13-24"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RETBUCS   DIM       12     12       1     Coding System                      
RETBCOD   DIM       12     12       13    Code                               
RETBDES   DIM       50     50       25    Description                        
RETBPRG   DIM       8      8        75    Link to Program                    
RETBREP   DIM       2      2        83    Link to Report                     
RETBTEM   DIM       3      3        85    Link to Template                   
RETBCUM   DIM       1      1        88    Enable Cumulative Results          
RETBUR1   DIM       25     25       89    User Def Ref 1                     
RETBUR2   DIM       25     25       114   User Def Ref 2                     
RETBUD1   DIM       8      8        139   User Def Date 1                    
RETBUD2   DIM       8      8        147   User Def Date 2                    
RETBUY1   DIM       1      1        155   User Def Y/N 1                     
RETBUY2   DIM       1      1        156   User Def Y/N 2                     
RETBSPA   DIM       19     19       157                                      
.
.End of Record                      176  
.
