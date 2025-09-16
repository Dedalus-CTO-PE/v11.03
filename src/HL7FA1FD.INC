. V11.03.01 15/11/2022  C- Fixed Index 2
. V11.02.01 23/08/2022 SUN C-0923308 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   HL7FA1FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR AllergyI Inbound Holding Table
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fa1af.dat
. *
. * Index Values  :   KEY78   KEY82                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FA1A1   IFILE    SQL, FIXED=3489, KEY="U1-64,65-74,75-78"
HL7FA1A2   IFILE    SQL, FIXED=3489, KEY="U75-78,1-64,65-74"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLA1RSID  DIM       64     64       1     Allergy Intolerance Logical Id     
HLA1VRID  DIM       10     10       65    Allergy Intolerance Version Id     
HLA1CNT1  DIM       4      4        75    Allergy Intolerance Ver Id Counter 
HLA1TSYS  DIM       255    255      79    Tag System 1                       
HLA1TVER  DIM       200    200      334   Tag Version 1                      
HLA1TCOD  DIM       50     50       534   Tag Code 1                         
HLA1TDIS  DIM       200    200      584   Tag Display 1                      
HLA1TUSL  DIM       10     10       784   Tag User Sel 1                     
HLA1TSY2  DIM       255    255      794   Tag System 2                       
HLA1TVE2  DIM       200    200      1049  Tag Version 2                      
HLA1TCO2  DIM       50     50       1249  Tag Code 2                         
HLA1TDI2  DIM       200    200      1299  Tag Display 2                      
HLA1TUS2  DIM       10     10       1499  Tag User Sel 2                     
HLA1CLST  DIM       200    200      1509  Clinical Status text               
HLA1CURI  DIM       255    255      1709  Clinical Status URI                
HLA1CVER  DIM       200    200      1964  Clinical Status version            
HLA1CCOD  DIM       50     50       2164  Clinical Status code               
HLA1CDIS  DIM       200    200      2214  Clinical Status display            
HLA1CUSL  DIM       10     10       2414  Clinical Status user selected      
HLA1VLST  DIM       200    200      2424  Verification Status text           
HLA1VURI  DIM       255    255      2624  Verification Status URI            
HLA1VVER  DIM       200    200      2879  Verification Status version        
HLA1VCOD  DIM       50     50       3079  Verification Status code           
HLA1VDIS  DIM       200    200      3129  Verification Status display        
HLA1VUSL  DIM       10     10       3329  Verification Status user selected  
HLA1TYPE  DIM       50     50       3339  Allergy Intolerance type           
HLA1SPAR  DIM       100    100      3389  Spare Variable                     
.
.End of Record                      3489 
.
