. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSRBDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Split Patient Costs                
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsrbdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSRBDA1   IFILE    SQL, FIXED=84, KEY="U1-2,3-18,19-21"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCRBHCD   DIM       2      2        1     Hospital                           
CCRBEPS   DIM       16     16       3     Episode ID                         
CCRBMID   DIM       3      3        19    Split Model ID                     
CCRBFDR   FORM      12.2   8        22    Fixed Direct Cost                  
CCRBFID   FORM      12.2   8        30    Fixed Indirect Cost                
CCRBVDR   FORM      12.2   8        38    Variable Direct Cost               
CCRBVID   FORM      12.2   8        46    Variable Indirect Cost             
CCRBSPA   DIM       30     30       54    Spare                              
.
.End of Record                      84   
.
