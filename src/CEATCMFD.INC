. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATCMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre Nursing Bed Time Mapping   
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatcmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATCMA1   IFILE    SQL, FIXED=38, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETCNT    DIM       3      3        1     Nurse Type                         
CETCSPC   DIM       3      3        4     Service Provider                   
CETCPSC   DIM       7      7        7     Patient Service Code               
CETCSTM   FORM      2      2        14    Start Time Parameter               
CETCETM   FORM      2      2        16    End Time Parameter                 
CETCSPA   DIM       20     20       18    Spare                              
.
.End of Record                      38   
.
