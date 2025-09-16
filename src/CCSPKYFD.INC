. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPKYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Key Relationship   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspkyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPKYA1   IFILE    SQL, FIXED=59, KEY="U1-20,21-22,23-30,31-38"                
CCSPKYA2   IFILE    SQL, FIXED=59, KEY="U21-22,23-30,31-38,1-20"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPKFKY   DIM       20     20       1     Feeder Key                         
CCPKHCD   DIM       2      2        21    Hospital                           
CCPKDPT   DIM       8      8        23    Department                         
CCPKPCD   DIM       8      8        31    Patient Service                    
CCPKSPA   DIM       20     20       39                                       
.
.End of Record                      59   
.
