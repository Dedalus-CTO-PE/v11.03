. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSAWGFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Allocation Weighting               
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsawgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSAWGA1   IFILE    SQL, FIXED=64, KEY="U1-2,3-10,11-14"                        
CCSAWGA2   IFILE    SQL, FIXED=64, KEY="U1-2,11-14,3-10"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCAWHCD   DIM       2      2        1     Hospital Code                      
CCAWDPT   DIM       8      8        3     Department                         
CCAWATY   DIM       4      4        11    Allocation Type                    
CCAWQTY   FORM      12.4   9        15    Weighting                          
CCAWSPA   DIM       40     40       24    Spare                              
.
.End of Record                      64   
.
