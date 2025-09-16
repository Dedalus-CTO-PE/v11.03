. V11.02.02 29/08/2022 PVL C-0923308 Added Extension fields                     
. V11.02.01 15/08/2022 PVL C-0923308 Created FD. FHIR Patient Inbound Extension 
. *----------------------------------------------------------------------
. * Include Name  :   HL7FP5FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Patient Inbound Ext Holding T 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fp5af.dat
. *
. * Index Values  :   KEY82                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FP5A1   IFILE    SQL, FIXED=4073, KEY="U1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLP5RSID  DIM       64     64       1     Patient Logical Id                 
HLP5VRID  DIM       10     10       65    Patient Meta Version Id            
HLP5CNT1  DIM       4      4        75    Patient Meta Version Id Counter    
HLP5CNT2  DIM       4      4        79    Patient Ext Counter          
HLP5EURL  DIM       255    255      83    Patient Ext URL              
HLP5VALU  DIM       200    200      338   Patient Ext Value            
HLP5TEXT  DIM       200    200      538   Patient Ext Value Coding Text
HLP5SYST  DIM       255    255      738   Patient Ext Value Coding Sys 
HLP5VERS  DIM       50     50       993   Patient Ext Value Coding Ver 
HLP5CODE  DIM       200    200      1043  Patient Ext Value Coding Code
HLP5DISP  DIM       200    200      1243  Patient Ext Value Coding Disp
HLP5USER  DIM       10     10       1443  Patient Ext Value Coding UsSl
HLP5SDTT  DIM       50     50       1453  Patient Ext Value Per Start  
HLP5EDTT  DIM       50     50       1503  Patient Ext Value Per End    
HLP5AUSE  DIM       40     40       1553  Patient Ext Value Add Use          
HLP5ATYP  DIM       40     40       1593  Patient Ext Value Add Type         
HLP5ATXT  DIM       200    200      1633  Patient Ext Value Add Text         
HLP5ALN1  DIM       200    200      1833  Patient Ext Value Add Line 1       
HLP5ALN2  DIM       200    200      2033  Patient Ext Value Add Line 2       
HLP5ALN3  DIM       200    200      2233  Patient Ext Value Add Line 3       
HLP5ALN4  DIM       200    200      2433  Patoent Ext Value Add Line 4       
HLP5APOS  DIM       40     40       2633  Patient Ext Value Add Postal Code  
HLP5ACOU  DIM       200    200      2673  Patient Ext Value Add Country      
HLP5ASTR  DIM       40     40       2873  Patient Ext Value Add Period Start 
HLP5AEND  DIM       40     40       2913  Patient Ext Value Add Period End   
HLP5DURL  DIM       255    255      2953  Patient Ext Value DAI URL          
HLP5DSYS  DIM       255    255      3208  Patient Ext Value DAI Coding Sys   
HLP5DVER  DIM       50     50       3463  Patient Ext Value DAI Coding Ver   
HLP5DCOD  DIM       50     50       3513  Patient Ext Value DAI Coding Cod   
HLP5DDIS  DIM       200    200      3563  Patient Ext Value DAI Coding Dis   
HLP5DUSE  DIM       10     10       3763  Patient Ext Value DAI Coding UsSl  
HLP5EXID  DIM       200    200      3773  Patient Extension Value Id         
HLP5SPAR  DIM       100    100      3973  Spare Variable                     
.
.End of Record                      4073 
.
