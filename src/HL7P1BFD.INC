. V11.02.01 06/09/2022 PVL C-0923308 webPAS FHIR Inbound Patient Holding Table B
. *----------------------------------------------------------------------
. * Include Name  :   HL7P1BFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Holding Tab B 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p1baf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P1BA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL1BRSID  DIM       64     64       1     Patient Logical Id                 
HL1BVRID  DIM       10     10       65    Patient Meta Version Id            
HL1BCNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL1BMORE  DIM       200    200      79    Managing Org Reference             
HL1BMOTY  DIM       255    255      279   Managing Org Type                  
HL1BMODI  DIM       200    200      534   Managing Org String                
HL1BMOUS  DIM       50     50       734   Managing Org Id Use                
HL1BMOSY  DIM       255    255      784   Managing Org Id System             
HL1BMOVA  DIM       200    200      1039  Managing Org Id Value              
HL1BMOTX  DIM       200    200      1239  Managing Org Id Type Text          
HL1BMOTS  DIM       255    255      1439  Managing Org Id Type Coding Sys    
HL1BMOTV  DIM       200    200      1694  Managing Org Id Type Coding Ver    
HL1BMOTC  DIM       50     50       1894  Managing Org Id Type Coding Cod    
HL1BMOTD  DIM       200    200      1944  Managing Org Id Type Coding Dis    
HL1BMOTU  DIM       10     10       2144  Managing Org Id Type Coding Use Sel
HL1BMOPS  DIM       40     40       2154  Managing Org Id Period Start       
HL1BMOPE  DIM       40     40       2194  Managing Org Id Period End         
HL1BSPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
