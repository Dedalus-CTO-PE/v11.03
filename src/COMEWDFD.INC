. V10.13.02 11/12/2018 JP C-0867207 Added source modified date/time             
. V10.13.01 27/10/2018 JP C-0865756 Added source created date and time          
. V10.12.04 30/04/2018 EC C-0848318 Added ISP objects                           
. V10.12.03 07/03/2018 JP C-0848131 Added admitted patient objects              
. V10.12.02 15/02/2018 EC C-0848319 Added ED Objects                            
. V10.12.01 23/01/2018 JP C-0846167 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   COMEWDFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   EDW Extract detail                 
. *
. * File Type     :   SQL
. *
. * File Name     :   comewdaf.dat
. *
. * Index Values  :   KEY104  KEY112                                         
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMEWDA1   IFILE    SQL, FIXED=1106, KEY="U1-3,4-11,12-14,15-104"
COMEWDA2   IFILE    SQL, FIXED=1106, KEY="U1-3,12-14,15-104,1005-1012,4-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMEWDSTR  DIM       3      3        1     Data Stream                        
.                                         1=Client                             
.                                         3=Individual Service Provider        
.                                         5=Non-Admitted Service               
.                                         6=Service Scheduling                 
.                                         17=Admitted Patient                  
.                                         18=Emergency Department              
CMEWCNTN  DIM       8      8        4     Container Number                   
CMEWOBJT  DIM       3      3        12    Object Type                        
.                                         01=Client                            
.                                         02=Client Address                    
.                                         03=Client Relationship               
.                                         04=Client Insurance                  
.                                         05=Client External Id                
.                                         06=Client Name                       
.                                         07=Client Ongoing Condition          
.                                         08=Client Static Demographics        
.                                         09=Client identifier                 
.                                         10=Client Profile                    
.                                         32=Individual Provider               
.                                         33=Ind. Provider Discipline Specialty
.                                         34=Ind. Provider Specialty Practice  
.                                         37=Ind. Provider Alternate Identifier
.                                         38=Individual Provider Address       
.                                         40=Individual Provider Name          
.                                         41=Individual Provider Attribute     
.                                         42=Ind. Prov. Telecommunication mode 
.                                         43=Individual Provider Organisation  
.                                         54=Service Activity Provider         
.                                         55=Service Event                     
.                                         56=Service Activity                  
.                                         57=Client Service Event              
.                                         58=Service Event 59=Presenting Issue 
.                                         60=Service Event Attribute           
.                                         61=Diagnosis                         
.                                         63=Service Event Provider            
.                                         64=Onward Referral                   
.                                         65=WL Booking                        
.                                         66=WL Booking attribute              
.                                         67=WL Planned service                
.                                         68=WL Booking priority               
.                                         69=WL Booking provider               
.                                         70=WL NRFC                           
.                                         72=Request for service               
.                                         73=WL Planned event                  
.                                         74=Request for Service Provider      
.                                         112=Service Event and Admitted       
.                                         114=Service Event Cancer             
.                                         115=Service Event General Prac       
.                                         130=Service Event Transfer           
.                                         131=Service Event Relationship       
.                                         134=Health Service Ward              
.                                         135=Health Service Bed               
.                                         136=Health Served Bed Attribute      
.                                         137=Service Event Delay              
.                                         141=Service Event Sub Event          
.                                         142=Service Event Location           
.                                         143=Health Service Location          
.                                         145=Service Event And Emergency Dep  
CMEWOKEY  DIM       90     90       15    Key                                
CMEWTEXT  DIM       900    900      105   Object Text                        
CMEWSDAT  DIM       8      8        1005  Start Date CCYYMMDD                
CMEWRTYP  DIM       1      1        1013  Record type                        
.                                         blank                                
.                                         D=Delete                             
.                                         I=Insert                             
.                                         U=Update                             
CMEWSCDT  DIM       8      8        1014  Source Created Date CCYYMMDD       
CMEWSCTM  DIM       8      8        1022  Source Created Time hh:mm:ss       
CMEWMDDT  DIM       8      8        1030  Source Modified Date CCYYMMDD      
CMEWMDTM  DIM       8      8        1038  Source Modified Time hh:mm:ss      
CMEWSPAR  DIM       60     60       1046  Spare                              
.
.End of Record                      1106 
.
