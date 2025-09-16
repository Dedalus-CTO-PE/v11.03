. V11.02.01 13/09/2022 PVL C-0923308 Created FD. FHIR Patient Inbound Link Holdi
. *----------------------------------------------------------------------
. * Include Name  :   HL7P4AFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Link Hold T 2 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p4aaf.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P4AA1   IFILE    SQL, FIXED=2587, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL4ARSID  DIM       64     64       1     Patient Logical Id                 
HL4AVRID  DIM       10     10       65    Patient Meta Version Id            
HL4ACNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL4ACNT2  DIM       4      4        79    Patient Link Counter               
HL4AAREF  DIM       200    200      83    Patient Link Other Id Assigner Refe
HL4AATYP  DIM       255    255      283   Patient Link Other Id Assigner Type
HL4AADIS  DIM       200    200      538   Patient Link Other Id Assigner Disp
HL4AIUSE  DIM       40     40       738   Patient Link Oth Id Ass Id Use     
HL4AISYS  DIM       255    255      778   Patient Link Oth Id Ass Id Sys     
HL4AIVAL  DIM       200    200      1033  Patient Link Oth Id Ass Id Val     
HL4AITXT  DIM       200    200      1233  Patient Link Oth Id Ass Id Ty Txt  
HL4ACSYS  DIM       255    255      1433  Patient Link Oth Id Ass Id Ty Cd Sy
HL4ACVER  DIM       200    200      1688  Patient Link Oth Id Ass Id Ty Cd Ve
HL4ACCOD  DIM       50     50       1888  Patient Link Oth Id Ass Id Ty Cd Ve
HL4ACDIS  DIM       200    200      1938  Patient Link Oth Id Ass Id Ty Cd Di
HL4ACUSS  DIM       19     19       2138  Patient Link Oth Id Ass Id Ty Cd Us
HL4APSTR  DIM       40     40       2157  Patient Link Oth Id Ass Id Per Strt
HL4APREN  DIM       40     40       2197  Patient Link Oth Id Ass Id Per End 
HL4ADISP  DIM       200    200      2237  Patient Link Other Display         
HL4ALNTY  DIM       50     50       2437  Patient Link Other Display         
HL4ASPAR  DIM       100    100      2487  Spare Variable                     
.
.End of Record                      2587 
.
