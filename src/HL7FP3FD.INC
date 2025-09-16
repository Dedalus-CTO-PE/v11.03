. V11.02.02 24/08/2022 PVL C-0923308 Added Assigner Fields                      
. V11.02.01 10/08/2022 PVL C- Created FD. FHIR Patient Inbound GP Holding Table 
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP3FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound GP Holdin     
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp3af.dat
. *
. * Index Values  :   KEY82   KEY102                                         
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP3A1   IFILE    SQL, FIXED=1958, KEY="U1-64,65-74,75-78,79-82"
HL7FP3A2   IFILE    SQL, FIXED=1958, KEY="U538-557,1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP3RSID  DIM       64     64       1     Patient Logical Id                 
HLP3VRID  DIM       10     10       65    Patient Meta Version Id            
HLP3CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP3CNT2  DIM       4      4        79    Patient Meta GP Counter            
HLP3REFE  DIM       200    200      83    Patient GP Reference               
HLP3TYPE  DIM       255    255      283   Patient GP Type                    
HLP3IDUS  DIM       20     20       538   Patient GP Id Use                  
HLP3IDSY  DIM       255    255      558   Patient GP Id Type Coding System   
HLP3IDVE  DIM       50     50       813   Patient GP Id Type Coding Version  
HLP3IDCD  DIM       50     50       863   Patient GP Id Type Coding Version  
HLP3IDDI  DIM       200    200      913   Patient GP Id Type Coding Version  
HLP3IDSL  DIM       10     10       1113  Patient GP Id Type Coding UserSelec
HLP3IDTX  DIM       200    200      1123  Patient GP Id Type Text            
HLP3SYST  DIM       255    255      1323  Patient GP Id System               
HLP3IDVA  DIM       200    200      1578  Patient GP Id Value                
HLP3PSTA  DIM       40     40       1778  Patient GP Id Period Start DateTime
HLP3PEND  DIM       40     40       1818  Patient GP Id Period End DateTime  
HLP3SPAR  DIM       100    100      1858  Spare Variable                     
.
.End of Record                      1958 
.
