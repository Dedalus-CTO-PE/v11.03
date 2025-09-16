. V11.02.01 13/09/2022 PVL C-0923308 Created FD. FHIR Patient Inbound Contact Ho
. *----------------------------------------------------------------------
. * Include Name  :   HL7P6AFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Contact Hold A
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p6aaf.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P6AA1   IFILE    SQL, FIXED=2893, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL6ARSID  DIM       64     64       1     Patient Logical Id                 
HL6AVRID  DIM       10     10       65    Patient Meta Version Id            
HL6ACNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL6ACNT2  DIM       4      4        79    Patient Contact Counter            
HL6ATSYS  DIM       50     50       83    Patient Cont Telecom Sys           
HL6ATVAL  DIM       200    200      133   Patient Cont Telecom Sys           
HL6ATUSE  DIM       50     50       333   Patient Cont Telecom Use           
HL6ATRAN  DIM       50     50       383   Patient Cont Telecom Rank          
HL6ATSTR  DIM       40     40       433   Patient Cont Telecom Per St        
HL6ATEND  DIM       40     40       473   Patient Cont Telecom Per En        
HL6ATSY2  DIM       50     50       513   Patient Cont Telecom Sys 2         
HL6ATVA2  DIM       200    200      563   Patient Cont Telecom Val 2         
HL6ATUS2  DIM       50     50       763   Patient Cont Telecom Use 2         
HL6ATRA2  DIM       50     50       813   Patient Cont Telecom Rank 2        
HL6ATST2  DIM       40     40       863   Patient Cont Telecom Per St 2      
HL6ATEN2  DIM       40     40       903   Patient Cont Telecom Per En 2      
HL6ATSY3  DIM       50     50       943   Patient Cont Telecom Sys 3         
HL6ATVA3  DIM       200    200      993   Patient Cont Telecom Val 3         
HL6ATUS3  DIM       50     50       1193  Patient Cont Telecom Use 3         
HL6ATRA3  DIM       50     50       1243  Patient Cont Telecom Rank 3        
HL6ATST3  DIM       40     40       1293  Patient Cont Telecom Per St 3      
HL6ATEN3  DIM       40     40       1333  Patient Cont Telecom Per En 3      
HL6AAUSE  DIM       50     50       1373  Patient Cont Add Use               
HL6AATYP  DIM       50     50       1423  Patient Cont Add Type              
HL6AATXT  DIM       200    200      1473  Patient Cont Add Text              
HL6AALN1  DIM       200    200      1673  Patient Cont Add Line 1            
HL6AALN2  DIM       200    200      1873  Patient Cont Add Line 2            
HL6AALN3  DIM       200    200      2073  Patient Cont Add Line 3            
HL6AALN4  DIM       200    200      2273  Patient Cont Add Line 4            
HL6AAPOS  DIM       40     40       2473  Patient Cont Add Postal Code       
HL6AACNT  DIM       200    200      2513  Patient Cont Add Country           
HL6AASTR  DIM       40     40       2713  Patient Cont Add Per Str           
HL6AAEND  DIM       40     40       2753  Patient Cont Add Per End           
HL6ASPAR  DIM       100    100      2793  Spare Variable                     
.
.End of Record                      2893 
.
