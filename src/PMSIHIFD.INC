. V11.03.01 12/10/2023 PVL C-0935874 Added EDAT ETIME for Clear IHI and added to
.                                    Removed Index 5 (not used and cannot have 
.                                    more than 8 fields)
. V10.04.01 29/01/2014 EC C-291879 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSIHIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   IHI Details                        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsihiaf.dat
. *
. * Index Values  :   KEY46   KEY62   KEY62   KEY62                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIHIA1   IFILE    SQL, FIXED=396, KEY="U1-8,9-28,45-45,46-46,280-287,288-295"
PMSIHIA2   IFILE    SQL, FIXED=396, KEY="U1-8,9-28,29-36,37-44,45-45,46-46,280-287,288-295"
PMSIHIA3   IFILE    SQL, FIXED=396, KEY="U9-28,29-36,37-44,1-8,45-45,46-46,280-287,288-295"
PMSIHIA4   IFILE    SQL, FIXED=396, KEY="U29-36,37-44,9-28,1-8,45-45,46-46,280-287,288-295"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIHURNO  DIM       8      8        1     U/R Number                         
PMIHIHIN  DIM       20     20       9     IHI Number                         
PMIHADAT  DIM       8      8        29    Date of Assignment (CCYYMMDD)      
PMIHATIM  DIM       8      8        37    Time of Assignment (HH:MM:SS)      
PMIHVSTA  DIM       1      1        45    IHI Verification Status            
.                                         1 = IHI Verified                     
.                                         2 = IHI Manual                       
PMIHASTA  DIM       1      1        46    IHI Activation Status              
.                                         1 = Active                           
.                                         2 = Deceased                         
.                                         3 = Retired                          
.                                         4 = Expired                          
.                                         5 = Resolved                         
PMIHSTAT  DIM       1      1        47    Status                             
.                                         0 = Active                           
.                                         1 = Inactive                         
.                                         2 = Merged                           
PMIHOURN  DIM       8      8        48    Old U/R Number                     
PMIHIHIS  DIM       2      2        56    IHI Source                         
.                                         1 = HI Services B2B Channel          
.                                         2 = Electronic Message               
.                                         3 = Manual Entry                     
PMIHHISV  DIM       10     10       58    HI Service Version Number          
PMIHMESI  DIM       127    127      68    HI Service Message ID              
PMIHBATI  DIM       20     20       195   Batch ID                           
PMIHINTB  DIM       3      3        215   Request Initiated By               
PMIHNUID  DIM       10     10       218   HPI-I User                         
PMIHCDAT  DIM       8      8        228   Created Date (CCYYMMDD)            
PMIHCTIM  DIM       8      8        236   Created Time (HH:MM:SS)            
PMIHCUID  DIM       10     10       244   Created By (websecaf)              
PMIHUDAT  DIM       8      8        254   Updated Date (CCYYMMDD)            
PMIHUTIM  DIM       8      8        262   Updated Time (HH:MM:SS)            
PMIHUUID  DIM       10     10       270   Updated By (websecaf)              
PMIHEDAT  DIM       8      8        280   End Date                           
PMIHETIM  DIM       8      8        288   End Time                           
PMIHSPAR  DIM       100    100      296   Spare                              
.
.End of Record                      396  
.
