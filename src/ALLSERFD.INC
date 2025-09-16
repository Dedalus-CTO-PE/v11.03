. V9.08.002 08/06/2007 EC  Added ALSRSPEC and ALSRHOME  CAR 140983           
. V9.08.001 19/04/2007 EC  Added ALSRMHDP                                    
. *----------------------------------------------------------------------
. * Include Name  :   ALLSERFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Service Types for Each Department  
. *
. * File Type     :   SQL
. *
. * File Name     :   allseraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLSERA1   IFILE    SQL, FIXED=136, KEY="U1-3,4-9"                              
ALLSERA2   IFILE    SQL, FIXED=136, KEY="U1-3,10-49,4-9"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALSRDEPT  DIM       3      3        1     Department (alldepaf)              
ALSRSERV  DIM       6      6        4     Service Type                       
ALSRDESC  DIM       40     40       10    Service Description                
ALSRLENG  DIM       2      2        50    Number of Minutes in Unit          
ALSRVACS  DIM       1      1        52    VACS Chargeable Service(0=No,1=Yes)
ALSRACTV  DIM       1      1        53    Active (0=No,1=Yes)                
ALSRCDAT  DIM       8      8        54    Date Record Created (CCYYMMDD)     
ALSRCTIM  DIM       8      8        62    Time Record Created (HH:MM:SS)     
ALSRCUID  DIM       10     10       70    WEB User ID Created (websecaf)     
ALSRUDAT  DIM       8      8        80    Date Record Updated (CCYYMMDD)     
ALSRUTIM  DIM       8      8        88    Time Record Updated (HH:MM:SS)     
ALSRUUID  DIM       10     10       96    WEB User ID Created (websecaf)     
ALSRGROU  DIM       1      1        106   Group Related Service              
ALSRNURA  DIM       1      1        107   Non U/R Related Service            
ALSRMHDP  DIM       4      4        108   HDP Equivalent                     
ALSRSPEC  DIM       3      3        112   Speciality (Cat s)
ALSRHOME  DIM       1      1        115   Home Based Service (0=No,1=Yes)
ALSRSPAR  DIM       20     20       116   Spare Variable                     
.
.End of Record                      136  
.
