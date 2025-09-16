. V11.02.01 13/09/2022 PVL C-0923308 Created FD. FHIR Patient Inbound Contact Ho
. *----------------------------------------------------------------------
. * Include Name  :   HL7P6BFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Contact Hold B
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7p6baf.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7P6BA1   IFILE    SQL, FIXED=2468, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HL6BRSID  DIM       64     64       1     Patient Logical Id                 
HL6BVRID  DIM       10     10       65    Patient Meta Version Id            
HL6BCNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HL6BCNT2  DIM       4      4        79    Patient Contact Counter            
HL6BCGEN  DIM       50     50       83    Patient Cont Gender                
HL6BOREF  DIM       200    200      133   Patient Cont Org Ref               
HL6BOTYP  DIM       255    255      333   Patient Cont Org Type              
HL6BODSP  DIM       200    200      588   Patient Cont Org Dis               
HL6BOIUS  DIM       50     50       788   Patient Cont Org Id Use            
HL6BOISY  DIM       255    255      838   Patient Cont Org Id System         
HL6BOIVA  DIM       200    200      1093  Patient Cont Org Id Value          
HL6BOITT  DIM       200    200      1293  Patient Cont Org Id Type Text      
HL6BOITS  DIM       255    255      1493  Patient Cont Org Id Type Cod Sys   
HL6BOITV  DIM       200    200      1748  Patient Cont Org Id Type Cod Ver   
HL6BOITC  DIM       50     50       1948  Patient Cont Org Id Type Cod Cod   
HL6BOITD  DIM       200    200      1998  Patient Cont Org Id Type Cod Dis   
HL6BOITU  DIM       10     10       2198  Patient Cont Org Id Type Cod Usl   
HL6BOIST  DIM       40     40       2208  Patient Cont Org Id Per St         
HL6BOIEN  DIM       40     40       2248  Patient Cont Org Id Per En         
HL6BCSTR  DIM       40     40       2288  Patient Cont Per Start             
HL6BCEND  DIM       40     40       2328  Patient Cont Per End               
HL6BSPAR  DIM       100    100      2368  Spare Variable                     
.
.End of Record                      2468 
.
