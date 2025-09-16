. V11.02.02 26/08/2022 PVL C-0923308 Added Assigner Fields                      
. V11.02.01 10/08/2022 PVL C- Created FD. FHIR Patient Inbound Link Holding Tab 
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP4FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Link Hold     
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp4af.dat
. *
. * Index Values  :   KEY82   KEY102                                         
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP4A1   IFILE    SQL, FIXED=1958, KEY="U1-64,65-74,75-78,79-82"
HL7FP4A2   IFILE    SQL, FIXED=1958, KEY="U538-557,1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP4RSID  DIM       64     64       1     Patient Logical Id                 
HLP4VRID  DIM       10     10       65    Patient Meta Version Id            
HLP4CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP4CNT2  DIM       4      4        79    Patient Link Counter               
HLP4REFE  DIM       200    200      83    Patient Link Other Reference       
HLP4TYPE  DIM       255    255      283   Patient Link Other Type            
HLP4IDUS  DIM       20     20       538   Patient Link Other Id Use          
HLP4IDSY  DIM       255    255      558   Patient Link Oth Id Type Cod System
HLP4IDVE  DIM       50     50       813   Patient Link Oth Id Type Cod Ver   
HLP4IDCD  DIM       50     50       863   Patient Link Oth Id Type Cod Code  
HLP4IDDI  DIM       200    200      913   Patient Link Oth Id Type Cod Disp  
HLP4IDSL  DIM       10     10       1113  Patient Link Oth Id Type Cod UserSe
HLP4IDTX  DIM       200    200      1123  Patient Link Oth Id Type Cod Text  
HLP4SYST  DIM       255    255      1323  Patient Link Oth Id Type Cod Text  
HLP4IDVA  DIM       200    200      1578  Patient Link Other Id Value        
HLP4PSTA  DIM       40     40       1778  Patient Link Other Id Period Start 
HLP4PEND  DIM       40     40       1818  Patient Link Other Id Period End   
HLP4SPAR  DIM       100    100      1858  Spare Variable                     
.
.End of Record                      1958 
.
