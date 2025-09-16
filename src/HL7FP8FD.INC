. V11.02.01 15/09/2022 PVL C-0923308 Created FD. FHIR Patient Inbound Telecom Ho
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP8FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Telecom Hold T
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp8af.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP8A1   IFILE    SQL, FIXED=573, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP8RSID  DIM       64     64       1     Patient Logical Id                 
HLP8VRID  DIM       10     10       65    Patient Logical Id                 
HLP8CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP8CNT2  DIM       4      4        79    Patient Contact Counter            
HLP8TSYS  DIM       50     50       83    Telecom System                     
HLP8TVAL  DIM       200    200      133   Telecom Value                      
HLP8TUSE  DIM       50     50       333   Telecom Use                        
HLP8TRNK  DIM       10     10       383   Telecom Rank                       
HLP8TSTR  DIM       40     40       393   Telecom Period Start               
HLP8TEND  DIM       40     40       433   Telecom Period End                 
HLP8SPAR  DIM       100    100      473   Spare Variable                     
.
.End of Record                      573  
.
