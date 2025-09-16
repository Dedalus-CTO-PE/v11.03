. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMFFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Cost Model Allocation Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMFA1   IFILE    SQL, FIXED=99, KEY="U1-2,3-10,11-14,15-16,17-24,25-28"      
CCSCMFA2   IFILE    SQL, FIXED=99, KEY="U1-2,17-24,11-14,15-16,3-10,25-28"      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMFHCD   DIM       2      2        1     Hospital Code                      
CCMFFDPT  DIM       8      8        3     Allocated From Department          
CCMFYEAR  DIM       4      4        11    Year                               
CCMFPER   DIM       2      2        15    Period                             
CCMFTDPT  DIM       8      8        17    Allocated to Department            
CCMFCTY   DIM       4      4        25    Cost Type                          
CCMFATY   DIM       4      4        29    Allocation Type                    
CCMFTWG   FORM      12.6   10       33    Total Weighting                    
CCMFWGT   FORM      12.6   10       43    Weighting                          
CCMFTOT   FORM      12.2   8        53    Total Cost                         
CCMFAMT   FORM      12.2   8        61    Amount Allocated                   
CCMFSPA   DIM       30     30       69                                       
.
.End of Record                      99   
.
CCMFIDX1  INIT    " 99 UC1-2,3-10,11-14,15-16,17-24,25-28" 
CCMFIDX2  INIT    " UC1-2,17-24,11-14,15-16,3-10,25-28"      
