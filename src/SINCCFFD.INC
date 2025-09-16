. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINCCFFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Cost Centre Usage by Product Group 
. *
. * File Type     :   SQL
. *
. * File Name     :   sinccfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCCFA1   IFILE    SQL, FIXED=51, KEY="U1-5,11-16,6-10"                        
SINCCFA2   IFILE    SQL, FIXED=51, KEY="U1-5,6-10,11-16"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICFCST   DIM       5      5        1     Cost Centre                        
SICFSUB   DIM       5      5        6     Product Group                      
SICFDAT   DIM       6      6        11    Date CCYYMM                        
SICFAMT   FORM      12.2   8        17    Amount (Requisitions + Imprest)    
SICFBUD   FORM      12.2   8        25    Budget                             
SICFSPAR  DIM       18     18       33    Spare                              
.
.End of Record                      51   
.
