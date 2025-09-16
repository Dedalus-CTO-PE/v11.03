. V11.02.02 14/10/2022 PVL c- Fixed layout
. V11.02.01 09/08/2022 PVL C- webPAS FHIR Inbound Patient Holding Table         
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP1FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Holding T     
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp1af.dat
. *
. * Index Values  :   KEY78   KEY86   KEY108  KEY79                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP1A1   IFILE    SQL, FIXED=3320, KEY="U60-123,124-133,134-137"
HL7FP1A2   IFILE    SQL, FIXED=3320, KEY="U2-9,60-123,124-133,134-137"
HL7FP1A3   IFILE    SQL, FIXED=3320, KEY="U443-472,60-123,124-133,134-137"
HL7FP1A4   IFILE    SQL, FIXED=3320, KEY="U1-1,60-123,124-133,134-137"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP1STAT  DIM       1      1        1     Patient Resource Inbound Status    
.                                         ' ' - Waiting to be Processed        
.                                         '0' - Processing                     
.                                         '1' - Processed                      
.                                         'E' - Processing Error               
HLP1URNO  DIM       8      8        2     Patient UR Number                  
HLP1RTYP  DIM       50     50       10    Patient Resource Type              
HLP1RSID  DIM       64     64       60    Patient Logical Id                 
HLP1VRID  DIM       10     10       124   Patient Meta Version Id            
HLP1CNT1  DIM       4      4        134   Patient Meta Version Id Counter    
HLP1IMRL  DIM       255    255      138   Patient Implicit Rules             
HLP1LANG  DIM       50     50       393   Patient Resource Language          
HLP1LSUP  DIM       30     30       443   Patient Meta Last Updated          
HLP1SRCE  DIM       255    255      473   Patient Meta Source                
HLP1PRF1  DIM       255    255      728   Meta Profile 1                     
HLP1PRF2  DIM       255    255      983   Meta Profile 2                     
HLP1SSYS  DIM       255    255      1238  Security Coding System 1           
HLP1SVER  DIM       200    200      1493  Security Coding Version 1          
HLP1SCOD  DIM       50     50       1693  Security Coding Code 1             
HLP1SDIS  DIM       200    200      1743  Security Coding Display 1          
HLP1SUSL  DIM       10     10       1943  Security Coding User Sel 1         
HLP1SSY2  DIM       255    255      1953  Security Coding System 2           
HLP1SVE2  DIM       200    200      2208  Security Coding Version 2          
HLP1SCO2  DIM       50     50       2408  Security Coding Code 2             
HLP1SDI2  DIM       200    200      2458  Security Coding Display 2          
HLP1SUS2  DIM       10     10       2658  Security Coding User Sel 2         
HLP1PRDS  DIM       500    500      2668  Processing/Error Description       
HLP1CRDT  DIM       8      8        3168  Date Created                       
HLP1CRTM  DIM       8      8        3176  Time Created                       
HLP1CRUI  DIM       10     10       3184  Created By User Id                 
HLP1UPDT  DIM       8      8        3194  Date Updated                       
HLP1UPTM  DIM       8      8        3202  Time Updated                       
HLP1UPUI  DIM       10     10       3210  Updated By User Id                 
HLP1SPAR  DIM       100    100      3220  Spare Variable                     
.
.End of Record                      3320 
.
