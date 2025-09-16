. V11.02.01 12/09/2022 PVL C-0923308 webPAS FHIR Inbound Patient GP Holding Tabl
. *----------------------------------------------------------------------
. * Include Name  :   HL7P3AFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound GP Holding T A
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p3aaf.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P3AA1   IFILE    SQL, FIXED=2528, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL3ARSID  DIM       64     64       1     Patient Logical Id                 
HL3AVRID  DIM       10     10       65    Patient Meta Version Id            
HL3ACNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL3ACNT2  DIM       4      4        79    Patient Meta GP Counter            
HL3AAREF  DIM       200    200      83    Patient GP Id Assigner Reference   
HL3AATYP  DIM       255    255      283   Patient GP Id Assigner Type        
HL3AADIS  DIM       200    200      538   Patient GP Id Assigner Display     
HL3AIUSE  DIM       40     40       738   Patient GP Id Assigner Id Use      
HL3AISYS  DIM       255    255      778   Patient GP Id Assigner Id System   
HL3AIVAL  DIM       200    200      1033  Patient GP Id Assigner Id Value    
HL3AITXT  DIM       200    200      1233  Patient GP Id Assigner Id Type Text
HL3ACSYS  DIM       255    255      1433  Patient GP Id Assigner Id Type Code
HL3ACVER  DIM       200    200      1688  Patient GP Id Assigner Id Type Code
HL3ACCOD  DIM       50     50       1888  Patient GP Id Assigner Id Type Code
HL3ACDIS  DIM       200    200      1938  Patient GP Id Assigner Id Type Code
HL3ACUSS  DIM       10     10       2138  Patient GP Id Assigner Id Type Code
HL3APSTR  DIM       40     40       2148  Patient GP Id Assigner Id Period St
HL3APEND  DIM       40     40       2188  Patient GP Id Assigner Id Period En
HL3ADISP  DIM       200    200      2228  Patient GP Display                 
HL3ASPAR  DIM       100    100      2428  Spare Variable                     
.
.End of Record                      2528 
.
