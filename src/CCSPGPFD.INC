. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPGPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Group Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspgpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPGPA1   IFILE    SQL, FIXED=89, KEY="U1-2,3-10,11-14"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPGHCD   DIM       2      2        1     Hospital Code                      
CCPGDPT   DIM       8      8        3     Department Code                    
CCPGGCD   DIM       4      4        11    Group Code                         
CCPGDES   DIM       35     35       15    Group Description                  
CCPGDSC   FORM      12.4   9        50    Standard Cost                      
CCPGSPA   DIM       30     30       59    Spare                              
.
.End of Record                      89   
.
