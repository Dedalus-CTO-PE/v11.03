. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPCDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Costs by Cost Type 
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspcdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPCDA1   IFILE    SQL, FIXED=89, KEY="U1-2,3-10,11-14,15-16,17-24,25-28"      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPCHCD   DIM       2      2        1     Hospital                           
CCPCDPT   DIM       8      8        3     Department                         
CCPCYEAR  DIM       4      4        11    Year                               
CCPCPER   DIM       2      2        15    Period                             
CCPCPCD   DIM       8      8        17    Patient Service                    
CCPCCTY   DIM       4      4        25    Cost Type                          
CCPCCST   FORM      12.6   10       29    Calculated Cost per Unit           
CCPCBCT   FORM      12.6   10       39    Spare                              
CCPCFBU   FORM      12.6   10       49    Spare                              
CCPCRVI   FORM      12.6   10       59    Relative Value Index               
CCPCSPA   DIM       20     20       69    Spare                              
.
.End of Record                      89   
.
