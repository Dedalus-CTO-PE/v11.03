. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPDPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Department Patient Service Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspdpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPDPA1   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,11-18"                       
CCSPDPA2   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,19-22,11-18"                 
CCSPDPA3   IFILE    SQL, FIXED=107, KEY="U11-18,1-2,3-10"                       
CCSPDPA4   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,77-79,11-18"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPDHCD   DIM       2      2        1     Hospital Code                      
CCPDDPT   DIM       8      8        3     Department                         
CCPDPCD   DIM       8      8        11    Patient Service Code               
CCPDGCD   DIM       4      4        19    Group Code                         
CCPDDES   DIM       35     35       23    Patient Service Description        
CCPDSTC   FORM      12.4   9        58    Standard Cost                      
CCPDRVI   FORM      12.6   10       67    Default Relative Value             
CCPDSEQ   DIM       3      3        77    Sequence Code                      
CCPDSUS   DIM       1      1        80    Suspended 0=No                     
CCPDSPA   DIM       26     26       81    Spare                              
.
.End of Record                      107  
.
