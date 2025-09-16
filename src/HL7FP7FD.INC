. V11.02.01 14/09/2022 PVL C-0923308 FHIR Patient Inbound Name Holding Table    
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP7FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Name Hol T    
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp7af.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP7A1   IFILE    SQL, FIXED=2513, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP7RSID  DIM       64     64       1     Patient Logical Id                 
HLP7VRID  DIM       10     10       65    Patient Logical Id                 
HLP7CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP7CNT2  DIM       4      4        79    Patient Contact Counter            
HLP7NUSE  DIM       50     50       83    Use                                
HLP7NTEX  DIM       200    200      133   Name Text                          
HLP7NFAM  DIM       200    200      333   Name Family                        
HLP7NGV1  DIM       200    200      533   Name Given 1                       
HLP7NGV2  DIM       200    200      733   Name Given 2                       
HLP7NGV3  DIM       200    200      933   Name Given 3                       
HLP7NPR1  DIM       200    200      1133  Name Prefix 1                      
HLP7NPR2  DIM       200    200      1333  Name Prefix 2                      
HLP7NPR3  DIM       200    200      1533  Name Prefix 3                      
HLP7NSF1  DIM       200    200      1733  Name Suffix 1                      
HLP7NSF2  DIM       200    200      1933  Name Suffix 2                      
HLP7NSF3  DIM       200    200      2133  Name Suffix 3                      
HLP7PSTR  DIM       40     40       2333  Name Period Start                  
HLP7PEND  DIM       40     40       2373  Name Period End                    
HLP7SPAR  DIM       100    100      2413  Spare Variable                     
.
.End of Record                      2513 
.
