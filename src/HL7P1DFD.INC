. V11.02.01 16/09/2022 PVL C-0923308 FHIR Patient Inbound Communication Hold Tab
. *----------------------------------------------------------------------
. * Include Name  :   HL7P1DFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Comm Hold Tabl
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p1daf.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P1DA1   IFILE    SQL, FIXED=2538, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL1DRSID  DIM       64     64       1     Patient Logical Id                 
HL1DVRID  DIM       10     10       65    Patient Meta Version Id            
HL1DCNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL1DCNT2  DIM       4      4        79    Patient Address Counter            
HL1DCPRF  DIM       10     10       83    Communication Preferred            
HL1DCTXT  DIM       200    200      93    Communication Text                 
HL1DCSYS  DIM       255    255      293   Communication Coding System 1      
HL1DCVER  DIM       200    200      548   Communication Coding Version 1     
HL1DCCOD  DIM       50     50       748   Communication Coding Code 1        
HL1DCDIS  DIM       200    200      798   Communication Coding Display 1     
HL1DCUSL  DIM       10     10       998   Communication Coding User Sel 1    
HL1DCSY2  DIM       255    255      1008  Communication Coding System 2      
HL1DCVE2  DIM       200    200      1263  Communication Coding Version 2     
HL1DCCO2  DIM       50     50       1463  Communication Coding Code 2        
HL1DCDI2  DIM       200    200      1513  Communication Coding Display 2     
HL1DCUS2  DIM       10     10       1713  Communication Coding User Sel 2    
HL1DCSY3  DIM       255    255      1723  Communication Coding System 3      
HL1DCVE3  DIM       200    200      1978  Communication Coding Version 3     
HL1DCCO3  DIM       50     50       2178  Communication Coding Code 3        
HL1DCDI3  DIM       200    200      2228  Communication Coding Display 3     
HL1DCUS3  DIM       10     10       2428  Communication Coding User Sel 3    
HL1DSPAR  DIM       100    100      2438  Spare Variable                     
.
.End of Record                      2538 
.
