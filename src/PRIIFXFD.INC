. V10.06.01 17/03/2015 JT C-284113 New FD for PP Invoice Comments Free Text     
. *----------------------------------------------------------------------
. * Include Name  :   PRIIFXFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Invoice Comments Free Text         
. *
. * File Type     :   SQL
. *
. * File Name     :   priifxaf.dat
. *
. * Index Values  :   KEY20                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIIFXA1   IFILE    SQL, FIXED=221, KEY="U1-8,9-11,12-17,18-20"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRIFINVN  DIM       8      8        1     Invoice Number                     
PRIFCTYP  DIM       3      3        9     Comment Type                       
.                                         001 - PRI Invoice Comment            
PRIFNOTE  DIM       6      6        12    Note Number                        
PRIFLINE  DIM       3      3        18    Line Number                        
PRIFCMNT  DIM       100    100      21    Comment                            
PRIFSPAR  DIM       100    100      121   Spare Variable                     
.
.End of Record                      221  
.
