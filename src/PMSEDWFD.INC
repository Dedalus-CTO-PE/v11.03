. V10.14.01 17/07/2019 JP C-0878412 Added Alias Deleted                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSEDWFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   EDW PMI Alterations                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsedwaf.dat
. *
. * Index Values  :   KEY27   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEDWA1   IFILE    SQL, FIXED=638, KEY="U512-519,520-527,1-8,9-11"
PMSEDWA2   IFILE    SQL, FIXED=638, KEY="U1-8,9-11,512-519,520-527"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEWURNO  DIM       8      8        1     UR Number                          
PMEWTYPE  DIM       3      3        9     Type of Alteration                 
.                                         1=Gender                             
.                                         2=Date of Birth                      
.                                         3=Country of Birth                   
.                                         4=Deceased flg                       
.                                         5=Indigenous status                  
.                                         6=Marital Status                     
.                                         7=Medicare Number                    
.                                         8=Preferred Language                 
.                                         9=Religious Group                    
.                                         10=Occupation                        
.                                         11=Interpreter Required              
.                                         12=Postal Address Added              
.                                         13=Postal Address Updated            
.                                         14=Contact Added                     
.                                         15=Contact Updated                   
.                                         16=UPI Alternate Id                  
.                                         17=Patient Name                      
.                                         18=Concession Card Added             
.                                         19=Concession Card Updated           
.                                         20=GP Updated                        
.                                         21=Practice Updated                  
.                                         22=Address Restriction Updated       
.                                         23=Old UR Details Kept on Merge      
.                                         24=UnMerged                          
.                                         25=Health Fund Added                 
.                                         26=Health Fund updated               
.                                         27=Alias Deleted                     
.                                         28=Alias Added                       
PMEWOLDV  DIM       250    250      12    Old value                          
PMEWNEWV  DIM       250    250      262   New value                          
PMEWCDAT  DIM       8      8        512   Date Created CCYYMMDD              
PMEWCTIM  DIM       8      8        520   Time Created HH:MM:SS              
PMEWCUID  DIM       10     10       528   Created by websecaf                
PMEWSPAR  DIM       100    100      538   Spare                              
.
.End of Record                      638  
.
