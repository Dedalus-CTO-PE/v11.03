. V11.02.01 06/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FAIFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Asserter Ref 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7faiaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FAIA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLAIRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLAIVRID  DIM       10     10       65    Allergy Intl Version Id            
HLAICNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLAIAARE  DIM       200    200      79    Asserter Id Assigner Reference     
HLAIAATY  DIM       255    255      279   Asserter Id Assigner Type          
HLAIAADI  DIM       200    200      534   Asserter Id Assigner Disp          
HLAIAAUS  DIM       50     50       734   Asserter Id Ass Id Use             
HLAIAISY  DIM       255    255      784   Asserter Id Ass Id Sys             
HLAIAIVA  DIM       200    200      1039  Asserter Id Ass Id Val             
HLAIAITX  DIM       200    200      1239  Asserter Id Ass Id Ty Txt          
HLAIACSY  DIM       255    255      1439  Asserter Id Ass Id Ty Cd Sy        
HLAIACVE  DIM       200    200      1694  Asserter Id Ass Id Ty Cd Ve        
HLAIACCO  DIM       50     50       1894  Asserter Id Ass Id Ty Cd Cd        
HLAIACDI  DIM       200    200      1944  Asserter Id Ass Id Ty Cd Di        
HLAIACUS  DIM       10     10       2144  Asserter Id Ass Id Ty Cd Us        
HLAIAAST  DIM       40     40       2154  Asserter Id Ass Id Per Start       
HLAIAAEN  DIM       40     40       2194  Asserter Id Ass Id Per End         
HLAISPAR  DIM       100    100      2234  Spare Vairable                     
.
.End of Record                      2334 
.
