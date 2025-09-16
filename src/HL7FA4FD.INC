. V11.02.01 13/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FA4FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR AI Reaction Manifestation     
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fa4af.dat
. *
. * Index Values  :   KEY86   KEY86                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FA4A1   IFILE    SQL, FIXED=1102, KEY="U1-64,65-74,75-78,79-82,83-86"
HL7FA4A2   IFILE    SQL, FIXED=1102, KEY="U83-86,1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLA4RSID  DIM       64     64       1     Allergy Intl Logical Id            
HLA4VRID  DIM       10     10       65    Allergy Intl Version Id            
HLA4CNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLA4CNT2  DIM       4      4        79    Reaction Counter                   
HLA4CNT3  DIM       4      4        83    Reaction Manifestation Counter     
HLA4RMTX  DIM       200    200      87    Reaction Manifestation Text        
HLA4RMSY  DIM       255    255      287   Reaction Manifest Coding System    
HLA4RMVR  DIM       200    200      542   Reaction Manifest Coding Version   
HLA4RMCD  DIM       50     50       742   Reaction Manifest Coding Code      
HLA4RMDP  DIM       200    200      792   Reaction Manifest Coding Display   
HLA4RMUS  DIM       10     10       992   Reaction Manifest Coding UserSelect
HLA4SPAR  DIM       100    100      1002  Spare Variable                     
.
.End of Record                      1102 
.
