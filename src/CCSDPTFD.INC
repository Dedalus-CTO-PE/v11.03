. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDPTFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Department Codes Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdptaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDPTA1   IFILE    SQL, FIXED=87, KEY="U1-2,3-10"                              
CCSDPTA2   IFILE    SQL, FIXED=87, KEY="U1-2,11-45,3-10"                        
CCSDPTA3   IFILE    SQL, FIXED=87, KEY="U1-2,46-46,3-10"                        
CCSDPTA4   IFILE    SQL, FIXED=87, KEY="U1-2,47-51,3-10"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDPHCD   DIM       2      2        1     Hospital Code                      
CCDPDPT   DIM       8      8        3     Department Code                    
CCDPDES   DIM       35     35       11    Description                        
CCDPDTY   DIM       1      1        46    Dept Type 0=Direct 1=Indirect      
CCDPSEQ   DIM       5      5        47    Stepdown Sequence                  
CCDPATY   DIM       4      4        52    Default Allocation Type            
CCDPSPA   DIM       31     31       56                                       
.
.End of Record                      87   
.
