. V11.02.01 06/09/2022 PVL C-0923308 webPAS FHIR Inbound Patient Holding Table C
. *----------------------------------------------------------------------
. * Include Name  :   HL7P1CFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Holding Tab C 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p1caf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P1CA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL1CRSID  DIM       64     64       1     Patient Logical Id                 
HL1CVRID  DIM       10     10       65    Patient Meta Version Id            
HL1CCNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL1CMAIR  DIM       200    200      79    Managing Org Id Assigner Ref       
HL1CMAIT  DIM       255    255      279   Managing Org Id Assigner Type      
HL1CMAID  DIM       200    200      534   Managing Org Id Assigner Disp      
HL1CMAIU  DIM       50     50       734   Managing Org Id Assigner Id Use    
HL1CMAIS  DIM       255    255      784   Managing Org Id Assigner Id Sys    
HL1CMAIV  DIM       200    200      1039  Managing Org Id Assigner Id Val    
HL1CMITX  DIM       200    200      1239  Managing Org Id Assigner Id Typ Tex
HL1CMISY  DIM       255    255      1439  Managing Org Id Assigner Id Ty C Sy
HL1CMIVE  DIM       200    200      1694  Managing Org Id Assigner Id Ty C Ve
HL1CMICD  DIM       50     50       1894  Managing Org Id Assigner Id Ty C Cd
HL1CMIDI  DIM       200    200      1944  Managing Org Id Assigner Id Ty C Di
HL1CMIUS  DIM       10     10       2144  Managing Org Id Assigner Id Ty C Us
HL1CMIPS  DIM       40     40       2154  Managing Org Id Assigner Id Per Str
HL1CMIPE  DIM       40     40       2194  Managing Org Id Assigner Id Per End
HL1CSPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
