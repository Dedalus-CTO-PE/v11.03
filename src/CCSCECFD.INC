. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCECFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Episode Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscecaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCECA1   IFILE    SQL, FIXED=100, KEY="U1-2,3-18"                             
CCSCECA2   IFILE    SQL, FIXED=100, KEY="U19-28,29-38,39-48,1-2,3-18"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCECHCD   DIM       2      2        1     Hospital                           
CCECEPS   DIM       16     16       3     Episode                            
CCECLV1   DIM       10     10       19    Level 1                            
CCECLV2   DIM       10     10       29    Level 2                            
CCECLV3   DIM       10     10       39    Level 3                            
CCECFTC   FORM      12.2   8        49    Comp. From Total Cost              
CCECTTC   FORM      12.2   8        57    Comp. To   Total Cost              
CCECLOS   FORM      6      4        65    Length of Stay                     
CCECEXC   DIM       1      1        69    Exclusion Flag 0=No                
CCECSPA   DIM       30     30       70    Spare                              
.
.End of Record                      100  
.
CCECIDX   INIT      " 100 UC1-2,3-18 UC19-28,29-38,39-48,1-2,3-18"
