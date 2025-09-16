. V5.07.000 14/10/1999 NMH Port to 5.07                                      
. V6.06.001 03/05/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EMRUTYFD.INC
. *
. * Function      :   File Def'n Include for WEB                          
. *                   Emergency Update Types             
. *
. * File Type     :   SQL
. *
. * File Name     :   emrutyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRUTYA1   IFILE    SQL, FIXED=105, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMUTUTY   DIM       5      5        1     Update Type                        
EMUTDES   DIM       35     35       6     Description                        
EMUTSLV   DIM       2      2        41    Security Level                     
EMUTSID   DIM       1      1        43    Security ID Required 0=No 1=Yes    
EMUTPWD   DIM       1      1        44    Password Required 0=No 1=Yes       
EMUTSPA   DIM       60     60       45    Spare                              
.
.End of Record                      105  
.
