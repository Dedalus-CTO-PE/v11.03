. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINSUBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Product Group Usage                
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsubaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSUBA1   IFILE    SQL, FIXED=78, KEY="U1-5,6-11"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISBSUB   DIM       5      5        1     Product Group                      
SISBDAT   DIM       6      6        6     Date CCYYMM                        
SISBUAM   FORM      12.2   8        12    Usage Amount                       
SISBUBD   FORM      12.2   8        20    Usage Budget                       
SISBPAM   FORM      12.2   8        28    Purchases Actual                   
SISBPBD   FORM      12.2   8        36    Purchases Budget                   
SISBRAM   FORM      12.2   8        44    Receivals Actual                   
SISBRBD   FORM      12.2   8        52    Receivals Budget                   
SISBSPA   DIM       18     18       60    Spare                              
.
.End of Record                      78   
.
