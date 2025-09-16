. V11.01.01 01/03/2021 EC C-0892530 Added type 31 - Clinical Urgency Delete     
. V10.15.01 05/02/2020 JP C-0887253 Added type 30 - Claim Type                  
. V10.14.01 11/04/2019 JP C-0872286 Added type 29                               
. *----------------------------------------------------------------------
. * Include Name  :   WATCHAFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Field Change Audit    
. *
. * File Type     :   SQL
. *
. * File Name     :   watchaaf.dat
. *
. * Index Values  :   KEY35   KEY37                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATCHAA1   IFILE    SQL, FIXED=261, KEY="U1-8,9-17,18-19,20-27,28-35"
WATCHAA2   IFILE    SQL, FIXED=261, KEY="U20-27,28-35,46-47,1-8,9-17,18-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTCHURNO  DIM       8      8        1     U/R Number                         
WTCHPROC  DIM       9      9        9     Procedure Code                     
WTCHPCNT  DIM       2      2        18    Procedure Count                    
WTCHDATE  DIM       8      8        20    Date (CCYYMMDD)                    
WTCHTIME  DIM       8      8        28    Time (HH:MM:SS)                    
WTCHUSID  DIM       10     10       36    Web User Id (websecaf)             
WTCHUPTY  DIM       2      2        46    Update Type                        
.                                         01 - Clinical Registration Date      
.                                         02 - Clinical Urgency                
.                                         03 - Date of Admission               
.                                         04 - Readiness for Care              
.                                         05 - Removal                         
.                                         06 - Reason for Sched Adm Date Change
.                                         07 - Change Removal                  
.                                         08 - Scheduled Admission Date        
.                                         09 - Status Change                   
.                                         10 - Update Suspension               
.                                         11 - Delete Suspension               
.                                         12 - Cancelled Admission             
.                                         13 - Not Used (Return to WL)         
.                                         14 - Delete Suspension Integrity     
.                                         15 - Update Suspension Integrity     
.                                         16 - Cancel Booking                  
.                                         17 - Change Intended Hospital        
.                                         18 - Booking Created                 
.                                         19 - Consultant                      
.                                         20 - Admitted                        
.                                         21 - Post Op Ward                    
.                                         22 - Suspension Added                
.                                         23 - Suspension Updated EDW          
.                                         24 - Suspension Deleted EDW          
.                                         25 - Changed PPP                     
.                                         26 - WL Changed U/R                  
.                                         27 - Changed referral source         
.                                         28 - Changed short notice            
.                                         29 - Changed intended stay           
.                                         30 - Claim Type                      
.                                         31 - Clinical Urgency Delete
WTCHREAS  DIM       3      3        48    Reason for Change (Cat FX)         
.                                         Cat WD for update type 02, 08 & 09   
.                                         Cat WR for update type 05            
.                                         Cat WN for update type 10 & 11       
.                                         Cat PC for update type 12 & 13       
.                                         Cat BC for update type 16            
.                                         Cat WQ for update type 17            
WTCHOVAL  DIM       80     80       51    Original Value                     
WTCHCVAL  DIM       80     80       131   Changed Value                      
WTCHSPAR  DIM       50     50       211   Spare                              
.
.End of Record                      261  
.
