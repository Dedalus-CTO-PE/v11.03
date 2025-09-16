. V6.00.004 15/10/1992 Nez Added index CC/Date                               
. *----------------------------------------------------------------------
. * Include Name  :   SINREAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Requisition Header Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   sinreaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINREAA1   IFILE    SQL, FIXED=112, KEY="U1-1,2-8"                              
SINREAA2   IFILE    SQL, FIXED=112, KEY="U11-15,1-1,2-8"                        
SINREAA3   IFILE    SQL, FIXED=112, KEY="U16-23,1-1,2-8"                        
SINREAA4   IFILE    SQL, FIXED=112, KEY="U11-15,16-23,1-1,2-8"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIRATYP   DIM       1      1        1     Requisition Type (Cat RT)          
SIRAREQ   DIM       7      7        2     Requisition Number                 
SIRAIND   FORM      1      2        9     Indicator 0=Requisition,1=Return   
SIRACST   DIM       5      5        11    Cost Centre                        
SIRADAT   DIM       8      8        16    Date                               
SIRADEL   DIM       50     50       24    Delivery Details                   
SIRATOT   FORM      12.2   8        74    Total of Requisition               
SIRASPA   DIM       30     30       82    Spare                              
.
.End of Record                      112  
.
