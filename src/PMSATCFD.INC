. V10.09.01 30/11/2016 SA C-0323730 Added value 006 to PMATTYPE                 
. V10.03.02 03/09/2013 EC C-275205 Primary key changed                          
. V10.03.01 03/09/2013 EC C-275205 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSATCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Admission Request Comments         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsatcaf.dat
. *
. * Index Values  :   KEY19                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSATCA1   IFILE    SQL, FIXED=170, KEY="U1-10,11-13,14-16,17-19"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMATREQN  DIM       10     10       1     Admission Request Number           
PMATTYPE  DIM       3      3        11    Type of Comment                    
.                                         001 = Pre Anaesthetic Review         
.                                         002 = Clinical Review                
.                                         003 = Clinical Details,Other Condit. 
.                                         004 = Adm Request Comments           
.                                         005 - Other Hospital Comments        
.                                         006 - Approval Comments              
PMATCNTR  DIM       3      3        14    Admission Request Review Counter   
.                                         "  1" for admission requests         
.                                         PMAVCNTR for review comments         
PMATLINE  DIM       3      3        17    Line Number                        
PMATDATA  DIM       100    100      20    Comment                            
PMATSPAR  DIM       50     50       120   Spare                              
.
.End of Record                      170  
.
