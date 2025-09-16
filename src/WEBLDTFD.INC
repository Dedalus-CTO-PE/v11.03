. V6.06.001 18/05/1999 PD  Created FD                                        
. V6.06.002 24/05/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBLDTFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Lookup Details Line                
. *
. * File Type     :   SQL
. *
. * File Name     :   webldtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBLDTA1   IFILE    SQL, FIXED=120, KEY="U1-8,9-11,12-14"                       
WEBLDTA2   IFILE    SQL, FIXED=120, KEY="U1-8,9-11,25-74,12-14"                 
WEBLDTA3   IFILE    SQL, FIXED=120, KEY="U1-8,9-11,15-24,12-14"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBLDLKID  DIM       8      8        1     Lookup ID                          
WBLDPAGE  DIM       3      3        9     Page 000-999                       
WBLDUQID  DIM       3      3        12    Unique ID                          
WBLDCODE  DIM       10     10       15    Code                               
WBLDDESC  DIM       50     50       25    Description                        
WBLDTYPE  DIM       1      1        75    Type 0=Lnk 1=Dtl line 2=CHKbox line
WBLDLKPG  DIM       3      3        76    Link Page                          
WBLDACTV  DIM       1      1        79    Active 0=No 1=Yes                  
WBLDSPAR  DIM       40     40       80    Spare                              
.
.End of Record                      120  
.
