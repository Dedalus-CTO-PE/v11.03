. V11.02.01 06/09/2022 PVL C-0923308 webPAS FHIR Inbound Patient Holding Table A
. *----------------------------------------------------------------------
. * Include Name  :   HL7P1AFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Holding Tab A 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p1aaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P1AA1   IFILE    SQL, FIXED=2694, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL1ARSID  DIM       64     64       1     Patient Logical Id                 
HL1AVRID  DIM       10     10       65    Patient Meta Version Id            
HL1ACNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL1ATSYS  DIM       255    255      79    Tag System 1                       
HL1ATVER  DIM       200    200      334   Tag Version 1                      
HL1ATCOD  DIM       50     50       534   Tag Code 1                         
HL1ATDIS  DIM       200    200      584   Tag Display 1                      
HL1ATUSL  DIM       10     10       784   Tag User Sel 1                     
HL1ATSY2  DIM       255    255      794   Tag System 2                       
HL1ATVE2  DIM       200    200      1049  Tag Version 2                      
HL1ATCO2  DIM       50     50       1249  Tag Code 2                         
HL1ATDI2  DIM       200    200      1299  Tag Display 2                      
HL1ATUS2  DIM       10     10       1499  Tag User Sel 2                     
HL1AACTV  DIM       10     10       1509  Patient Active                     
HL1AGEND  DIM       50     50       1519  Patient Gender                     
HL1ABDAT  DIM       40     40       1569  Patient Birth Date                 
HL1ADEBO  DIM       10     10       1609  Patient Deceased Boolean           
HL1ADEDT  DIM       40     40       1619  Patient Deceased Date Time         
HL1AMATX  DIM       200    200      1659  Patient Marital Status Text        
HL1AMASY  DIM       255    255      1859  Patient Marital Stat System        
HL1AMAVE  DIM       200    200      2114  Patient Marital Stat Version       
HL1AMACO  DIM       50     50       2314  Patient Marital Stat Code          
HL1AMADI  DIM       200    200      2364  Patient Marital Stat Display       
HL1AMAUS  DIM       10     10       2564  Patient Marital Statis User Sel    
HL1AMBBO  DIM       10     10       2574  Patient Multiple Birth Boolean     
HL1AMBIN  DIM       10     10       2584  Patient Multiple Birth Integer     
HL1ASPAR  DIM       100    100      2594  Spare Variable                     
.
.End of Record                      2694 
.
