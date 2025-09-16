. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCDTFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Cost Allocation Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCDTA1   IFILE    SQL, FIXED=99, KEY="U1-2,3-10,11-14,15-16,17-24,25-28"      
CCSCDTA2   IFILE    SQL, FIXED=99, KEY="U1-2,11-14,15-16,3-10,17-24,25-28"      
CCSCDTA3   IFILE    SQL, FIXED=99, KEY="U1-2,17-24,11-14,15-16,3-10,25-28"      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCCDHCD   DIM       2      2        1     Hospital Code                      
CCCDFDPT  DIM       8      8        3     Allocated From Department          
CCCDYEAR  DIM       4      4        11    Year                               
CCCDPER   DIM       2      2        15    Period                             
CCCDTDPT  DIM       8      8        17    Allocated to Department            
CCCDCTY   DIM       4      4        25    Cost Type                          
CCCDATY   DIM       4      4        29    Allocation Type                    
CCCDTWG   FORM      12.6   10       33    Total Weighting                    
CCCDWGT   FORM      12.6   10       43    Weighting                          
CCCDTOT   FORM      12.2   8        53    Total Cost                         
CCCDAMT   FORM      12.2   8        61    Amount Allocated                   
CCCDSPA   DIM       30     30       69                                       
.
.End of Record                      99   
.
