. V5.01.003 11/03/1992 SOG Re-Generated for CLA                              
. *----------------------------------------------------------------------
. * Include Name  :   CLASITFD.INC
. *
. * Function      :   File Def'n Include for Clinical Audits                    
. *                   Clinical Audit Site 
. *
. * File Type     :   SQL
. *
. * File Name     :   clasitaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CLASITA1   IFILE    SQL, FIXED=100, KEY="U1-6"                                  
CLASITA2   IFILE    SQL, FIXED=100, KEY="U7-36,1-6"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CASTSITE  DIM       6      6        1     Site                               
CASTDESC  DIM       30     30       7     Description                        
CASTPASS  DIM       8      8        37    Password                           
CASTFILE  DIM       2      2        45    File Prefix (Screen Id)            
CASTTYPE  DIM       1      1        47    Audit Type 0=Inp 1=Out 2=A&E 3=The 
CASTSCRN  FORM      1      2        48    Number of Screens 1 or 2           
CASTSPAR  DIM       50     50       50    Spare                              
.
.End of Record                      100  
.
