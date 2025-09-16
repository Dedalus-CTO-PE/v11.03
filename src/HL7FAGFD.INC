. V11.02.01 06/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FAGFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Recorder Ref 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fagaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FAGA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLAGRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLAGVRID  DIM       10     10       65    Allergy Intl Version Id            
HLAGCNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLAGRARE  DIM       200    200      79    Recorder Id Assigner Reference     
HLAGRATY  DIM       255    255      279   Recorder Id Assigner Type          
HLAGRADI  DIM       200    200      534   Recorder Id Assigner Disp          
HLAGRAUS  DIM       50     50       734   Recorder Id Ass Id Use             
HLAGRISY  DIM       255    255      784   Recorder Id Ass Id Sys             
HLAGRIVA  DIM       200    200      1039  Recorder Id Ass Id Val             
HLAGRITX  DIM       200    200      1239  Recorder Id Ass Id Ty Txt          
HLAGRCSY  DIM       255    255      1439  Recorder Id Ass Id Ty Cd Sy        
HLAGRCVE  DIM       200    200      1694  Recorder Id Ass Id Ty Cd Ve        
HLAGRCCO  DIM       50     50       1894  Recorder Id Ass Id Ty Cd Cd        
HLAGRCDI  DIM       200    200      1944  Recorder Id Ass Id Ty Cd Di        
HLAGRCUS  DIM       10     10       2144  Recorder Id Ass Id Ty Cd Us        
HLAGRPST  DIM       40     40       2154  Recorder Id Ass Id Per Start       
HLAGRREN  DIM       40     40       2194  Recorder Id Ass Id Per End         
HLAGSPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
