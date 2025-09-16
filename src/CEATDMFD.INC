. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATDMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre Doctor Time Mapping        
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatdmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATDMA1   IFILE    SQL, FIXED=38, KEY="U1-3,4-6,7-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETDDTY   DIM       3      3        1     Operation Doctor Type (OP)         
CETDSPC   DIM       3      3        4     Service Provider                   
CETDPSC   DIM       7      7        7     Patient Service                    
CETDSTM   FORM      2      2        14    Start Time                         
CETDETM   FORM      2      2        16    End Time                           
CETDSPA   DIM       20     20       18    Spare                              
.
.End of Record                      38   
.
