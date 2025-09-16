. V11.02.01 06/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FAEFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Encounter Ref
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7faeaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FAEA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLAERSID  DIM       64     64       1     Allergy Intl Logical Id            
HLAEVRID  DIM       10     10       65    Allergy Intl Version Id            
HLAECNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLAEEARE  DIM       200    200      79    Encounter Id Assigner Ref          
HLAEEATY  DIM       255    255      279   Encounter Id Assigner Typ          
HLAEEADI  DIM       200    200      534   Encounter Id Assigner String       
HLAEEIUS  DIM       50     50       734   Encounter Id Ass Id Use            
HLAEEISY  DIM       255    255      784   Encounter Id Ass Id Sys            
HLAEEIVA  DIM       200    200      1039  Encounter Id Ass Id Val            
HLAEEITX  DIM       200    200      1239  Encounter Id Ass Id Ty Txt         
HLAEECSY  DIM       255    255      1439  Encounter Id Ass Id Ty Cd Sy       
HLAEECVE  DIM       200    200      1694  Encounter Id Ass Id Ty Cd Ve       
HLAEECCO  DIM       50     50       1894  Encounter Id Ass Id Ty Cd Cd       
HLAEECDI  DIM       200    200      1944  Encounter Id Ass Id Ty Cd Di       
HLAEECUS  DIM       10     10       2144  Encounter Id Ass Id Ty Cd Us       
HLAEEPST  DIM       40     40       2154  Encounter Id Ass Id Per Start      
HLAEEREN  DIM       40     40       2194  Encounter Id Ass Id Per End        
HLAESPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
