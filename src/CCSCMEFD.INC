. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCMEFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Summary Costs      
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscmeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCMEA1   IFILE    SQL, FIXED=72, KEY="U1-2,3-10,11-14,15-16,17-24"            
CCSCMEA2   IFILE    SQL, FIXED=72, KEY="U1-2,3-10,17-24,11-14,15-16"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMEHCD   DIM       2      2        1     Hospital                           
CCMEDPT   DIM       8      8        3     Department                         
CCMEYEAR  DIM       4      4        11    Year                               
CCMEPER   DIM       2      2        15    Period                             
CCMEPCD   DIM       8      8        17    Patient Service                    
CCMEQTY   FORM      10.2   7        25    Quantity                           
CCMECST   FORM      12.6   10       32    Calculated Cost per Unit           
CCMEFLX   FORM      12.6   10       42    Flexi Budget Cost Per Unit         
CCMESPA   DIM       20     20       52    Spare                              
.
.End of Record                      72   
.
CCMEIDX   INIT   " 72 UC1-2,3-10,11-14,15-16,17-24 UC1-2,3-10,17-24,11-14,15-16"
