. V11.03.01 12/10/2023 Sunny 0916075 Added type 24 - 25
. V10.14.02 05/09/2019 EC C-0881147 Added type 23
. V10.14.01 01/03/2019 EC C-0871097 Added type 22
. V10.13.02 16/01/2019 EC C-0868909 Added types 17 - 21                         
. V10.13.01 09/01/2019 EC C-0868909 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSIDWFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   EDW ISP Audit                      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsidwaf.dat
. *
. * Index Values  :   KEY41   KEY41                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIDWA1   IFILE    SQL, FIXED=652, KEY="U526-533,534-541,1-22,23-25"
PMSIDWA2   IFILE    SQL, FIXED=652, KEY="U1-22,23-25,526-533,534-541"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIWCODE  DIM       22     22       1     HCP / Practice / Count             
.                                         HCP Code - DIM 10                    
.                                         HCP Practice Code - DIM 10           
.                                         HCP Practice Count  - DIM 2          
.                                         Blank for Types 19 - 21 (controlf)
PMIWTYPE  DIM       3      3        23    Type of Alteration                 
.                                         01=HCP Name Change                   
.                                         02=HCP Practice Address Change       
.                                         03=HCP Practice Telephone Num. Change
.                                         04=HCP Link Provider Number Change   
.                                         05=HCP Added to Practice             
.                                         06=HCP Inactive from Practice        
.                                         07=HCP Practice Inactive             
.                                         08=Unit Added                        
.                                         09=Unit Deleted                      
.                                         10=HCP Inactive                      
.                                         11=Provider Number Change            
.                                         12=National Registration Num. Change 
.                                         13=HCP Practice Added                
.                                         14=HCP End Date Added                
.                                         15=HCP End Date Removed              
.                                         16=NEHDAT Id Number Change           
.                                         17=HCP Practice Fax Num. Change      
.                                         18=HCP Practice Email Change         
.                                         19=Hospital Address Change           
.                                         20=Hospital Phone Num. Change        
.                                         21=Hospital Fax Num. Change          
.                                         22=HCP Gender Change
.                                         23=HCP Speciality Change
.                                         24=Stafflink ID          
.                                         25=AHPRA ID              
PMIWOLDV  DIM       250    250      26    Old Value                          
PMIWNEWV  DIM       250    250      276   New Value                          
PMIWCDAT  DIM       8      8        526   Created Date CCYYMMDD              
PMIWCTIM  DIM       8      8        534   Created Time HH:MM:SS              
PMIWCUID  DIM       10     10       542   Created by websecaf                
PMIWSPAR  DIM       100    100      552   Spare                              
.
.End of Record                      652  
.
