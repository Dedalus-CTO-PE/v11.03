. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINLODFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Departmental Workload Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinlodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINLODA1   IFILE    SQL, FIXED=113, KEY="U1-6"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SILDDATE  DIM       6      6        1     Date CCYYMM                        
SILDIRP   FORM      10     6        7     No. Internal Requisitions Picked   
SILDILP   FORM      10     6        13    No. Imprest Lines Picked           
SILDBOLP  FORM      10     6        19    No. Back Ordered Lines Picked      
SILDSLO   FORM      10     6        25    No. Stock Lines Ordered            
SILDNSLO  FORM      10     6        31    No. Non-Stock Lines Ordered        
SILDSLR   FORM      10     6        37    No. Stock Lines Received           
SILDNSLR  FORM      10     6        43    No. Non-Stock Lines Received       
SILDIRI   FORM      10     6        49    No. Internal Requisitions Input    
SILDSLRT  FORM      10     6        55    No. Stock Lines Returned           
SILDINV   FORM      10     6        61    No. Invoices                       
SILDRQL   FORM      10     6        67    No. Requisition Line Items         
SILDZIS   FORM      10     6        73    No. Req Line Items zero issued     
SILDGEN   DIM       10     10       79    Date Generated                     
SILDTPO   FORM      10     6        89    No. of Purchase Orders Raised      
SILDSPA   DIM       18     18       95    Spare                              
.
.End of Record                      113  
.
