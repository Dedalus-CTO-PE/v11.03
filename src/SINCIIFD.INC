. VF.01.001 17/03/2000 SB  Change comment on Unit Cost                       
. *----------------------------------------------------------------------
. * Include Name  :   SINCIIFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Expiry Dates               
. *
. * File Type     :   SQL
. *
. * File Name     :   sinciiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIIA1   IFILE    SQL, FIXED=93, KEY="U1-5,6-12,13-19,20-27"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIIWAR   DIM       5      5        1     Warehouse                          
SIIICAT   DIM       7      7        6     Catalog                            
SIIIPUR   DIM       7      7        13    Purchase Order                     
SIIIDAT   DIM       8      8        20    Expiry Date CCYYMMDD               
SIIIQR    FORM      12.2   8        28    Quantity Received (Issue Units)    
SIIIQI    FORM      12.2   8        36    Quantity Issued                    
SIIIUCT   FORM      12.4   9        44    Unit Cost Issue Units (Incl. GST)  
SIIIBAT   DIM       20     20       53    Batch Reference                    
SIIISPA   DIM       20     20       73                                       
.
.End of Record                      93   
.
