. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEGFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Patient Service Resource Usage   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscegaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEGA1   IFILE    SQL, FIXED=83, KEY="U1-10,11-12,13-20,21-28"                
CCSCEGA2   IFILE    SQL, FIXED=83, KEY="U11-12,13-20,21-28,1-10"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEGLV1   DIM       10     10       1     Casemix Extract Level 1            
CCEGHCD   DIM       2      2        11    Hospital                           
CCEGDPT   DIM       8      8        13    Department                         
CCEGPCD   DIM       8      8        21    Patient Service                    
CCEGQTY   FORM      12.2   8        29    Total Number of Patient Services   
CCEGFTC   FORM      12.2   8        37    Cost (1) Total Cost                
CCEGTTC   FORM      12.2   8        45    Cost (2) Total Cost                
CCEGSPA   DIM       30     30       53    Spare                              
.
.End of Record                      83   
.
CCEGIDX   INIT       " 83 UC1-10,11-12,13-20,21-28 UC11-12,13-20,21-28,1-10"
