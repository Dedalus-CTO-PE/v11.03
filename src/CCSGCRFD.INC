. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSGCRFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Group Relative Values              
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsgcraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSGCRA1   IFILE    SQL, FIXED=58, KEY="U1-2,3-10,11-14,15-18"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCGCHCD   DIM       2      2        1     Hospital                           
CCGCDPT   DIM       8      8        3     Department                         
CCGCGCD   DIM       4      4        11    Group                              
CCGCCTY   DIM       4      4        15    Cost Type                          
CCGCRVI   FORM      12.6   10       19    Relative Value Index               
CCGCSPA   DIM       29     29       29    Spare                              
.
.End of Record                      58   
.
