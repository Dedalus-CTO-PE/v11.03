. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPSDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Summary            
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspsdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPSDA1   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,11-14,15-16,17-24"           
CCSPSDA2   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,17-24,11-14,15-16"           
CCSPSDA3   IFILE    SQL, FIXED=107, KEY="U17-24,11-14,15-16,1-2,3-10"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPSHCD   DIM       2      2        1     Hospital                           
CCPSDPT   DIM       8      8        3     Department                         
CCPSYEAR  DIM       4      4        11    Year                               
CCPSPER   DIM       2      2        15    Period                             
CCPSPCD   DIM       8      8        17    Patient Service                    
CCPSQTY   FORM      10.2   7        25    Quantity Performed                 
CCPSBQT   FORM      10.2   7        32    Spare                              
CCPSCST   FORM      12.6   10       39    Calculated Cost per Unit           
CCPSBCT   FORM      12.6   10       49    Spare                              
CCPSFBU   FORM      12.6   10       59    Spare                              
CCPSSCT   FORM      12.6   10       69    Standard Cost Per Unit             
CCPSCHG   FORM      12.2   8        79    Total Charged                      
CCPSSPA   DIM       20     20       87                                       
.
.End of Record                      107  
.
