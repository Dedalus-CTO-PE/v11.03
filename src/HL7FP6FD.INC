. V11.02.01 30/08/2022 PVL C-0923308 Created FD. FHIR Patient Contact Inbound Ho
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP6FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Contact Hol T 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp6af.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP6A1   IFILE    SQL, FIXED=3143, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP6RSID  DIM       64     64       1     Patient Logical Id                 
HLP6VRID  DIM       10     10       65    Patient Logical Id                 
HLP6CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP6CNT2  DIM       4      4        79    Patient Contact Counter            
HLP6RTXT  DIM       200    200      83    Patient Cont Rel Text              
HLP6RSYS  DIM       255    255      283   Patient Cont Rel Coding Sys        
HLP6RVER  DIM       50     50       538   Patient Cont Rel Coding Sys        
HLP6RCOD  DIM       200    200      588   Patient Cont Rel Coding Code       
HLP6RDSP  DIM       200    200      788   Patient Cont Rel Coding Disp       
HLP6RUSE  DIM       10     10       988   Patient Cont Rel Coding Use Sel    
HLP6RTX2  DIM       200    200      998   Patient Cont Rel Text 2            
HLP6RSY2  DIM       255    255      1198  Patient Cont Rel Coding Sys 2      
HLP6RVE2  DIM       50     50       1453  Patient Cont Rel Coding Ver 2      
HLP6RCO2  DIM       200    200      1503  Patient Cont Rel Coding Ver 2      
HLP6RDS2  DIM       200    200      1703  Patient Cont Rel Coding Ver 2      
HLP6RUS2  DIM       10     10       1903  Patient Cont Rel Coding Use Sel 2  
HLP6NUSE  DIM       50     50       1913  Patient Cont Name Use              
HLP6NTXT  DIM       200    200      1963  Patient Cont Name Text             
HLP6NFAM  DIM       200    200      2163  Patient Cont Name Family           
HLP6NGIV  DIM       200    200      2363  Patient Cont Name Given            
HLP6NPRE  DIM       200    200      2563  Patient Cont Name Prefix           
HLP6NSUF  DIM       200    200      2763  Patient Cont Name Suffix           
HLP6NSTR  DIM       40     40       2963  Patient Cont Name Per Start        
HLP6NEND  DIM       40     40       3003  Patient Cont Name Per End          
HLP6SPAR  DIM       100    100      3043  Spare Variable                     
.
.End of Record                      3143 
.
