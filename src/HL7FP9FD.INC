. V11.02.01 16/09/2022 PVL C-0923308 FHIR Patient Inbound Address Hold Table    
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP9FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Address Hold T
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp9af.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP9A1   IFILE    SQL, FIXED=2563, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP9RSID  DIM       64     64       1     Patient Logical Id                 
HLP9VRID  DIM       10     10       65    Patient Meta Version Id
HLP9CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP9CNT2  DIM       4      4        79    Patient Address Counter            
HLP9AUSE  DIM       50     50       83    Address Use                        
HLP9ATYP  DIM       50     50       133   Address Type                       
HLP9ATXT  DIM       200    200      183   Address Text                       
HLP9ALN1  DIM       200    200      383   Address Line 1                     
HLP9ALN2  DIM       200    200      583   Address Line 2                     
HLP9ALN3  DIM       200    200      783   Address Line 3                     
HLP9ALN4  DIM       200    200      983   Address Line 4                     
HLP9ALN5  DIM       200    200      1183  Address Line 5                     
HLP9ACTY  DIM       200    200      1383  Address City                       
HLP9ADST  DIM       200    200      1583  Address District                   
HLP9ASTA  DIM       200    200      1783  Address State                      
HLP9APOC  DIM       200    200      1983  Address Postal Code                
HLP9ACOU  DIM       200    200      2183  Address Country                    
HLP9ASTR  DIM       40     40       2383  Address Period Start               
HLP9AEND  DIM       40     40       2423  Address Period End                 
HLP9SPAR  DIM       100    100      2463  Spare Variable                     
.
.End of Record                      2563 
.
