. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAMEPFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Casemix Type Mapping Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   ceamepaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAMEPA1   IFILE    SQL, FIXED=53, KEY="U1-3,4-13,14-16,17-23"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEMESTY   DIM       3      3        1     Casemix Type                       
CEMEKEY   DIM       10     10       4     Casemix Code                       
CEMESPC   DIM       3      3        14    Service Provider                   
CEMEPSC   DIM       7      7        17    Patient Service                    
CEMEDOS   FORM      2      2        24    Date of Service                    
CEMETYQ   FORM      2      2        26    Type of Quantity                   
CEMEQTY   FORM      6.2    5        28    Quantity Multiplier                
CEMESPA   DIM       20     20       33    Spare                              
.
.End of Record                      53   
.
