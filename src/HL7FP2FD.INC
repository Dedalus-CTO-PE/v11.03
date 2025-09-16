. V11.02.02 23/08/2022 PVL C-0923308 Added new Type and Assigner fields         
. V11.02.01 10/08/2022 PVL C- Created FD. FHIR Patient Inbounde Id Holding Table
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP2FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Id Holding Tab
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp2af.dat
. *
. * Index Values  :   KEY82   KEY102                                         
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP2A1   IFILE    SQL, FIXED=3639, KEY="U1-64,65-74,75-78,79-82"
HL7FP2A2   IFILE    SQL, FIXED=3639, KEY="U83-102,1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP2RSID  DIM       64     64       1     Patient Logical Id                 
HLP2VRID  DIM       10     10       65    Patient Meta Version Id            
HLP2CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP2CNT2  DIM       4      4        79    Patient Id Counter                 
HLP2IDUS  DIM       20     20       83    Patient Id Use                     
HLP2IDSY  DIM       255    255      103   Patient Id Type Coding System      
HLP2IDVE  DIM       50     50       358   Patient Id Type Coding Version     
HLP2IDCD  DIM       50     50       408   Patient Id Type Coding Code        
HLP2IDDI  DIM       200    200      458   Patient Id Type Coding Display     
HLP2IDSL  DIM       1      1        658   Patient Id Type Coding UserSelected
HLP2IDTX  DIM       200    200      659   Patient Id Type Text               
HLP2SYST  DIM       255    255      859   Patient Id System                  
HLP2IDVA  DIM       200    200      1114  Patient Id Value                   
HLP2PSTA  DIM       40     40       1314  Patient Id Period Start DateTime   
HLP2PEND  DIM       40     40       1354  Patient Id Period End DateTime     
HLP2AREF  DIM       200    200      1394  Patient Id Assigner Reference      
HLP2ATYP  DIM       255    255      1594  Patient Id Assigner Type           
HLP2ADIS  DIM       200    200      1849  Patient Id Assigner Display        
HLP2IUSE  DIM       40     40       2049  Patient Id Assigner Id Use         
HLP2ISYS  DIM       255    255      2089  Patient Id Assigner Id System      
HLP2IVAL  DIM       200    200      2344  Patient Id Assigner Id Value       
HLP2ITXT  DIM       200    200      2544  Patient Id Assigner Id Type Text   
HLP2CSYS  DIM       255    255      2744  Patient Id Assigner Id Type Code Sy
HLP2CVER  DIM       200    200      2999  Patient id Assigner Id Type Code Ve
HLP2CCOD  DIM       50     50       3199  Patient Id Assigner Id Type Code Cd
HLP2CDIS  DIM       200    200      3249  Patient Id Assigner Id Type Code Di
HLP2CUSS  DIM       10     10       3449  Patient Id Assigner Id Type Code Us
HLP2PSTR  DIM       40     40       3459  Patient Id Assigner Id Period Start
HLP2PREN  DIM       40     40       3499  Patient Id Assigner Id Period End  
HLP2SPAR  DIM       100    100      3539  Spare Variable                     
.
.End of Record                      3639 
.
