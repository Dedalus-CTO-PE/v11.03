. V10.15.01 19/02/2020 JP C-0884497 Added type=23 Care Type change deleted      
. V10.14.03 30/08/2019 JP C-0880287 Added ED Inpatient link                     
. V10.14.02 07/08/2019 JP C-0878505 Added type 21 = Cancer deleted              
. V10.14.01 04/03/2019 EC C-0871097 Added type 20                               
. V10.13.06 07/01/2019 JP C-0867688 Added types 14-19                           
. V10.13.05 07/12/2018 EC C-0867229 Added type 13                               
. V10.13.04 24/10/2018 EC C-0865146 Added type 12                               
. V10.13.03 22/10/2018 EC C-0865146 Added Type 11                               
. V10.13.02 17/10/2018 EC C-0962246 Added types 8 to 10                         
. V10.13.01 05/09/2018 EC C-0862246 Added type 6 & 7                            
. V10.12.03 02/05/2018 EC C-0846913 Added type 5 OP update                      
. V10.12.02 20/03/2018 EC C-0848319 Added type 4 ED update                      
. V10.12.01 16/03/2018 JP C-0848131 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSADWFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   EDW Visit Alterations              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsadwaf.dat
. *
. * Index Values  :   KEY27   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSADWA1   IFILE    SQL, FIXED=638, KEY="U512-519,520-527,1-8,9-11"
PMSADWA2   IFILE    SQL, FIXED=638, KEY="U1-8,9-11,512-519,520-527"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAWVISN  DIM       8      8        1     Visit Number                       
PMAWTYPE  DIM       3      3        9     Type of Alteration                 
.                                         1=Admission Criteria                 
.                                         2=Admission Source                   
.                                         3=Discharge Destination              
.                                         4=Emergency Visit Update             
.                                         5=Outpatient Visit Update            
.                                         6=Allied Health Referral Update      
.                                         7=Allied Health Contact Update       
.                                         8=Admission Changed U/R              
.                                         9=ED Changed U/R                     
.                                         10=OP Changed U/R                    
.                                         11=Admission Claim Update            
.                                         12=AH Referral Changed U/R           
.                                         13=Emergency Doctor Delete           
.                                         14=Admission Details Update          
.                                         15=Ambulance ID updated              
.                                         16=Discharge updated                 
.                                         17=Cancer details updated            
.                                         18=Movement deleted                  
.                                         19=Att Doctor on adm updated         
.                                         20=ED Presenting Complaint Update    
.                                         21=Cancer details deleted            
.                                         22=Inpatient ED link changed         
.                                         23=Care type change deleted          
PMAWOLDV  DIM       250    250      12    Old value                          
.                                         Type 8 to 10 Old U/R                 
.                                         Type 13 Old doctor date and time     
PMAWNEWV  DIM       250    250      262   New value                          
.                                         Type 8 to 10 New U/R                 
PMAWCDAT  DIM       8      8        512   Created Date CCYYMMDD              
PMAWCTIM  DIM       8      8        520   Created Time HH:MM:SS              
.                                         00:00:00 for all types except 7 and 2
.                                         1                                    
.                                         Encounter number for type 7          
.                                         21 uses the current time             
PMAWCUID  DIM       10     10       528   Created by websecaf                
PMAWSPAR  DIM       100    100      538   Spare                              
.
.End of Record                      638  
.
