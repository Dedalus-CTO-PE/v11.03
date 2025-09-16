. V10.11.00 17/11/2017 DS C-0846231 Created New                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSCMBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cancelled CMBS and Misc Items      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscmbaf.dat
. *
. * Index Values  :   KEY14   KEY22                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCMBA1   IFILE    SQL, FIXED=269, KEY="U1-8,9-14"
PMSCMBA2   IFILE    SQL, FIXED=269, KEY="U53-60,1-8,9-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCBVISN  DIM       8      8        1     Visit Number                       
PMCBCNTR  DIM       6      6        9     Record Counter                     
PMCBUNID  DIM       10     10       15    Unique Theatre ID                  
PMCBRTYP  DIM       1      1        25    Record Type                        
.                                         1 - CMBS Item                        
.                                         2 - Miscellaneous Item               
PMCBSTAT  DIM       1      1        26    Status of Record                   
.                                         1 - Invoice Raised,                  
.                                             Manual Intervention Required     
.                                         2 - No Invoice Raised,               
.                                             Item Removed by System           
PMCBITEM  DIM       9      9        27    Item Number                        
PMCBQUAN  DIM       5      5        36    Quantity                           
PMCBREFN  DIM       12     12       41    Reference Number (Filler Order No.)
PMCBRDTE  DIM       8      8        53    Receiver Deletion Date (ccyymmdd)  
.                                         This is the date when the deletion   
.                                         message has been received by HL7RECVR
PMCBTACT  DIM       1      1        61    Theatre Action Taken               
.                                         1 - Theatre Updated                  
PMCBTUID  DIM       10     10       62    Theatre Action webPAS User ID      
PMCBTDTE  DIM       8      8        72    Theatre Action Date (ccyymmdd)     
PMCBTTIM  DIM       8      8        80    Theatre Action Time (hh:mm:ss)     
PMCBCACT  DIM       1      1        88    Coding  Action Taken               
.                                         1 - Coding Updated                   
PMCBCUID  DIM       10     10       89    Coding  Action webPAS User ID      
PMCBCDTE  DIM       8      8        99    Coding  Action Date (ccyymmdd)     
PMCBCTIM  DIM       8      8        107   Coding  Action Time (hh:mm:ss)     
PMCBBACT  DIM       1      1        115   Billing Action Taken               
.                                         1 - Billing Updated                  
PMCBBUID  DIM       10     10       116   Billing Action webPAS User ID      
PMCBBDTE  DIM       8      8        126   Billing Action Date (ccyymmdd)     
PMCBBTIM  DIM       8      8        134   Billing Action Time (hh:mm:ss)     
PMCBRSTA  DIM       1      1        142   Removal Status                     
.                                         0 - New Entry                        
.                                         1 - Record Deleted: When a record has
.                                             been manually removed by a user  
.                                         2 - Record Removed: Triggered when   
.                                             all three checkboxes are selected
.                                             and the entry is flagged as      
.                                             record removed and is removed off
.                                             the list                         
PMCBDUID  DIM       10     10       143   Deletion webPAS User ID            
PMCBDDTE  DIM       8      8        153   Deletion Date (ccyymmdd)           
PMCBDTIM  DIM       8      8        161   Deletion Time (hh:mm:ss)           
PMCBDCOM  DIM       50     50       169   Deletion Comments                  
PMCBSPAR  DIM       50     50       219   Spare Variable                     
.
.End of Record                      269  
.
