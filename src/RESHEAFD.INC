. V10.11.01 21/09/2017 Steve Armstrong  Added description of "Year-based file"
. V10.07.01 02/11/2015 SA C-303363 Added REHARDE
. V9.05.001 21/12/2005 Steve Armstrong  CAR 89329  Added FILRSHEA
. V9.04.001 19/04/2005 ML - CAR 43973 - Add REHALOC (Location)
. V5.07.012 15/09/1999
. *----------------------------------------------------------------------
. * Include Name  :   RESHEAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Results
. *                   Clinical Results Header Table
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   resheaaf.dat
. *
. * Index Values  :   KEY17   KEY43   KEY57                                  
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESHEAA1  IFILE    SQL, FIXED=418, KEY="U1-8,9-13,14-17"                       
RESHEAA2  IFILE    SQL, FIXED=418, KEY="U112-117,118-137,1-8,9-13,14-17"       
RESHEAA3  IFILE    SQL, FIXED=418, KEY="U19-34,150-161,138-149,1-8,9-13,14-17" 
FILRSHEA  INIT     "reha"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REHARDT   DIM       8      8        1     Result Date                        
REHARTM   DIM       5      5        9     Result Time hh:mm                  
REHARUN   DIM       4      4        14    Result Unique ID                   
REHAFUR   DIM       1      1        18    PID is U/R 0=No 1=Yes              
REHAPID   DIM       16     16       19    Patient Identifier                 
REHAVIS   DIM       8      8        35    Visit Number                       
REHASID   DIM       10     10       43    Sending Application ID             
REHAMDT   DIM       8      8        53    Message Date                       
REHAMTM   DIM       5      5        61    Message Time                       
REHAMID   DIM       20     20       66    Message Control ID                 
REHAPAP   DIM       6      6        86    Placer Application                 
REHAPOR   DIM       20     20       92    Placer Order No                    
REHAFAP   DIM       6      6        112   Filler Application                 
REHAFOR   DIM       20     20       118   Filler Order No                    
REHAUSC   DIM       12     12       138   Universal Service Code  OBR-04
REHAUCS   DIM       12     12       150   Universal Coding System OBR-04
REHANOR   DIM       1      1        162   Normal Result 0=No 1=Yes           
REHACDT   DIM       8      8        163   Collected Date                     
REHACTM   DIM       5      5        171   Collected Time                     
REHACID   DIM       40     40       176   Collected Identifier               
REHAFCI   DIM       1      1        216   Clinical Information 0=No 1=Yes    
REHASDT   DIM       8      8        217   Specimen Received Date             
REHASTM   DIM       5      5        225   Specimen Received Time             
REHAOID   DIM       8      8        230   Ordering Provider ID               
REHAOSN   DIM       25     25       238   Ordering Provider Surname          
REHAOGN   DIM       20     20       263   Ordering Provider Given Name       
REHARRD   DIM       8      8        283   Result Report Date                 
REHARRT   DIM       5      5        291   Result Report Time                 
REHADSS   DIM       10     10       296   Diagnostic Service Sector          
REHARED   DIM       8      8        306   Request Date                       
REHARET   DIM       5      5        314   Request Time                       
REHARST   DIM       2      2        319   Result Status                      
REHAIBY   DIM       30     30       321   Interpreted by Name                
REHAADC   DIM       6      6        351   Attending Doctor                   
REHALAB   DIM       3      3        357   Laboratory Code                    
REHALOC   DIM       25     25       360   Location                           
REHARDE   DIM       3      3        385   Reason for Delete (Cat Rd)         
REHASPA   DIM       30     30       388   Spare                              
.
.End of Record                      418  
.
