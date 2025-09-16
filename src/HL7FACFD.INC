. V11.02.01 04/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FACFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Patient Ref  
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7facaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FACA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLACRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLACVRID  DIM       10     10       65    Allergy Intl Version Id            
HLACCNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLACPARE  DIM       200    200      79    Patient Id Assigner Reference      
HLACPATY  DIM       255    255      279   Patient Id Assigner Type           
HLACPADI  DIM       200    200      534   Patient Id Assigner Disp           
HLACPAUS  DIM       50     50       734   Patient Id Ass Id Use              
HLACPISY  DIM       255    255      784   Patient Id Ass Id Sys              
HLACPIVA  DIM       200    200      1039  Patient Id Ass Id Val              
HLACPITX  DIM       200    200      1239  Patient Id Ass Id Ty Txt           
HLACPCSY  DIM       255    255      1439  Patient Id Ass Id Ty Cd Sy         
HLACPCVE  DIM       200    200      1694  Patient Id Ass Id Ty Cd Ve         
HLACPCCO  DIM       50     50       1894  Patient Id Ass Id Ty Cd Cd         
HLACPCDI  DIM       200    200      1944  Patient Id Ass Id Ty Cd Di         
HLACPCUS  DIM       10     10       2144  Patient Id Ass Id Ty Cd Us         
HLACPPST  DIM       40     40       2154  Patient Id Ass Id Per Start        
HLACPREN  DIM       40     40       2194  Patient Id Ass Id Per End          
HLACSPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
