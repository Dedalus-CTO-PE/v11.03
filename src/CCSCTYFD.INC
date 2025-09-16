. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCTYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Cost Type Master
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsctyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCTYA1   IFILE    SQL, FIXED=80, KEY="U1-4"                                   
CCSCTYA2   IFILE    SQL, FIXED=80, KEY="U5-39,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCCTCTY   DIM       4      4        1     Cost Type                          
CCCTDES   DIM       35     35       5     Description                        
CCCTFIX   DIM       1      1        40    Fix 0=No                           
CCCTLAB   DIM       1      1        41    Labor Costs 0=No                   
CCCTIND   DIM       1      1        42    Indirect 0=No                      
CCCTSPA   DIM       37     37       43    Spare                              
.
.End of Record                      80   
.
