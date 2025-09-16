. V9.03.001 11/03/2004 EC  Added Process Status  CAR 46515                   
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Casemix Extract Masterfile         
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsceaaf.dat
. *
. * Change History
. *   v9.02.01        27.Jun.2002   Glenn Saunders  (port to v9.02)
. *                   Amend to incorporate Southland specific fields.
. *   V9.02.00         2.May.2002   Glenn Saunders  (port to v9.02)
. *
. *   VF.01.001        5.May.2000   Sandra Barcham
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEAA1   IFILE    SQL, FIXED=183, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEAEID   DIM       4      4        1     Extract ID                         
CCEADES   DIM       35     35       5     Description                        
CCEAHCD   DIM       2      2        40    Hospital                           
CCEAFDD   DIM       8      8        42    From Discharge Date                
CCEATDD   DIM       8      8        50    To Discharge Date                  
CCEAFAD   DIM       8      8        58    From Admission Date                
CCEATAD   DIM       8      8        66    To Admission Date                  
CCEAINC   DIM       1      1        74    Include Incomplete Episodes 0=No   
CCEAVIS   DIM       1      1        75    Visit Type (0=All)                 
CCEADAY   DIM       1      1        76    Include Day Cases 0=No             
CCEAFCM   DIM       4      4        77    From Cost Model (Blank = Actuals)  
CCEAFYR   DIM       4      4        81    From Year                          
CCEATCM   DIM       4      4        85    To Cost Model                      
CCEATYR   DIM       4      4        89    To Year                            
CCEARUA   DIM       1      1        93    Create Resource Usage Analysis     
CCEALV1   DIM       3      3        94    Level 1 Casemix Type               
CCEALV2   DIM       3      3        97    Level 2 Casemix Type               
CCEALV3   DIM       3      3        100   Level 3 Casemix Type               
CCEAUST   DIM       1      1        103   Update Statistics Min,Max&Var 0=No 
CCEAIMOD  DIM       1      1        104   Replace Income with Payment Model X
CCEACMOD  DIM       1      1        105   Replace Cost with Payment Model X  
CCEAITHE  DIM       1      1        106   Replace Inc. with Theatre Time X   
CCEACTHE  DIM       1      1        107   Replace Cost with Theatre Time X   
CCEASCM1  DIM       3      3        108   Split Cost Model 1 (Southland)     
CCEASCM2  DIM       3      3        111   Split Cost Model 2 (Southland)     
CCEASTAT  DIM       1      1        114   Process Status                     
.                                         0 = Processed
.                                         1 = Not Processed
.                                         2 = Process Error
CCEASPA   DIM       68     68       115   Spare                              
.
.End of Record                      183  
.
