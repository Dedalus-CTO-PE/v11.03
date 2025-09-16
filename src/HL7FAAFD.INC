. V11.02.01 20/09/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FAAFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Identifier   
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7faaaf.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FAAA1   IFILE    SQL, FIXED=3639, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLAARSID  DIM       64     64       1     Allergy Intl Logical Id            
HLAAVRID  DIM       10     10       65    Allergy Intl Version Id            
HLAACNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLAACNT2  DIM       4      4        79    Algy Intl Id Counter               
HLAAIDUS  DIM       20     20       83    Algy Intl Id Use                   
HLAAIDSY  DIM       255    255      103   Algy Intl Id Type Coding System    
HLAAIDVE  DIM       50     50       358   Algy Intl Id Type Coding Version   
HLAAIDCD  DIM       50     50       408   Algy Intl Id Type Coding Code      
HLAAIDDI  DIM       200    200      458   Algy Intl Id Type Coding Display   
HLAAIDSL  DIM       1      1        658   Algy Intl Id Type Coding UserSelect
HLAAIDTX  DIM       200    200      659   Algy Intl Id Type Text             
HLAASYST  DIM       255    255      859   Algy Intl Id System                
HLAAIDVA  DIM       200    200      1114  Algy Intl Id Value                 
HLAAPSTA  DIM       40     40       1314  Algy Intl Id Period Start DateTime 
HLAAPEND  DIM       40     40       1354  Algy Intl Id Period End DateTime   
HLAAAREF  DIM       200    200      1394  Algy Intl Id Assigner Reference    
HLAAATYP  DIM       255    255      1594  Algy Intl Id Assigner Type         
HLAAADIS  DIM       200    200      1849  Algy Intl Id Assigner Display      
HLAAIUSE  DIM       40     40       2049  Algy Intl Id Assigner Id Use       
HLAAISYS  DIM       255    255      2089  Algy Intl Id Assigner Id System    
HLAAIVAL  DIM       200    200      2344  Algy Intl Id Assigner Id Value     
HLAAITXT  DIM       200    200      2544  Algy Intl Id Assigner Id Type Text 
HLAACSYS  DIM       255    255      2744  Algy Intl Id Assg Id Type Code Sy  
HLAACVER  DIM       200    200      2999  Algy Intl id Assg Id Type Code Ve  
HLAACCOD  DIM       50     50       3199  Algy Intl Id Assg Id Type Code Cd  
HLAACDIS  DIM       200    200      3249  Algy Intl Id Assg Id Type Code Di  
HLAACUSS  DIM       10     10       3449  Algy Intl Id Assg Id Type Code Us  
HLAAPSTR  DIM       40     40       3459  Algy Intl Id Assg Id Period Start  
HLAAPREN  DIM       40     40       3499  Algy Intl Id Assg Id Period End    
HLAASPAR  DIM       100    100      3539  Spare Variable                     
.
.End of Record                      3639 
.
