. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDNOFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Departmental Notes                 
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdnoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDNOA1   IFILE    SQL, FIXED=94, KEY="U1-2,3-10,11-13"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDNHCD   DIM       2      2        1     Hospital                           
CCDNDPT   DIM       8      8        3     Department                         
CCDNLIN   DIM       3      3        11    Line Number                        
CCDNDAT   DIM       70     70       14    Data                               
CCDNSPA   DIM       10     10       84    Spare                              
.
.End of Record                      94   
.
