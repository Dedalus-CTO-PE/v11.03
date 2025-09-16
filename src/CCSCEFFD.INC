. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEFFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Department Resource Usage       
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscefaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEFA1   IFILE    SQL, FIXED=75, KEY="U1-10,11-12,13-20"                      
CCSCEFA2   IFILE    SQL, FIXED=75, KEY="U11-12,13-20,1-10"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEFLV1   DIM       10     10       1     Casemix Extract Level 1            
CCEFHCD   DIM       2      2        11    Hospital                           
CCEFDPT   DIM       8      8        13    Department                         
CCEFQTY   FORM      12.2   8        21    Total Number of Patient Services   
CCEFFTC   FORM      12.2   8        29    Cost (1) Total Cost                
CCEFTTC   FORM      12.2   8        37    Cost (2) Total Cost                
CCEFSPA   DIM       30     30       45    Spare                              
.
.End of Record                      75   
.
CCEFIDX   INIT      " 75 UC1-10,11-12,13-20 UC11-12,13-20,1-10"
