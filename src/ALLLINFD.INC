. V9.00.001 20/05/2001 SB  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLLINFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Clinical Documentation Link        
. *
. * File Type     :   SQL
. *
. * File Name     :   alllinaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLLINA1   IFILE    SQL, FIXED=74, KEY="U1-8,9-11"                              
ALLLINA2   IFILE    SQL, FIXED=74, KEY="U12-19,1-8,9-11"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALLIVISN  DIM       8      8        1     Referral/Visit Number (allrefaf)   
ALLILINK  DIM       3      3        9     Link Number (Unique ID)            
ALLIURNO  DIM       8      8        12    U/R Number                         
ALLICOID  DIM       4      4        20    Correspondence ID                  
ALLISPAR  DIM       50     50       24    Spare Variable                     
.
.End of Record                      74   
.
