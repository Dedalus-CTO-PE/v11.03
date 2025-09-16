. V6.04.001 05/06/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBSTEFD.INC
. *
. * Function      :   File Def'n Include for Common               
. *                   WEB User Server Security Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   websteaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSTEA1   IFILE    SQL, FIXED=119, KEY="U1-10,11-18"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSTUID   DIM       10     10       1     Web User ID                        
WBSTPRG   DIM       8      8        11    Server Program ID                  
WBSTLEV   FORM      2      2        19    Security Level                     
WBSTUR1   DIM       30     30       21    User Def Ref 1                     
WBSTUR2   DIM       30     30       51    User Def Ref 2                     
WBSTUD1   DIM       8      8        81    User Def Date 1                    
WBSTUD2   DIM       8      8        89    User Def Date 2                    
WBSTUY1   DIM       1      1        97    User Def Y/N 1                     
WBSTUY2   DIM       1      1        98    User Def Y/N 2                     
WBSTSPA   DIM       20     20       99    Spare                              
.
.End of Record                      119  
.
