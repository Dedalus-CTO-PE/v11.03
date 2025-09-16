. V11.02.01 28/09/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FA2FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Allergy Inbound Holding Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fa2af.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FA2A1   IFILE    SQL, FIXED=1670, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLA2RSID  DIM       64     64       1     Allergy Intl Logical Id            
HLA2VRID  DIM       10     10       65    Allergy Intl Version Id            
HLA2CNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLA2CTG1  DIM       50     50       79    Allergy Intolerance category 1     
HLA2CTG2  DIM       50     50       129   Allergy Intolerance category 2     
HLA2CTG3  DIM       50     50       179   Allergy Intolerance category 3     
HLA2CTG4  DIM       50     50       229   Allergy Intolerance category 4     
HLA2CRTY  DIM       30     30       279   Allergy Intolerance criticality    
HLA2CDTX  DIM       200    200      309   Allergy or intolerance code text   
HLA2CDUR  DIM       255    255      509   Allergy or intolerance code URI    
HLA2CDVR  DIM       200    200      764   Allergy or intolerance code version
HLA2CDCD  DIM       50     50       964   Allergy or intolerance code        
HLA2CDDS  DIM       200    200      1014  Allergy or intolerance display     
HLA2CDUS  DIM       10     10       1214  Allergy or intolerance user sel    
HLA2OSDT  DIM       40     40       1224  Allergy Intolerance Onset Datetime 
HLA2OSAG  DIM       40     40       1264  Allergy Intolerance Onset Age      
HLA2OSPS  DIM       40     40       1304  Allergy Intolerance Onset Period St
HLA2OSPE  DIM       40     40       1344  Allergy Intolerance Onset Period Ed
HLA2ORLV  DIM       30     30       1384  Allergy Intolerance Onset Rge lv   
HLA2ORHV  DIM       30     30       1414  Allergy Intolerance Onset Rge hv   
HLA2ORLC  DIM       3      3        1444  Allergy Intolerance Onset Rge lcc  
HLA2ORHC  DIM       3      3        1447  Allergy Intolerance Onset Rge hcc  
HLA2OSTR  DIM       40     40       1450  Allergy Intolerance Onset String   
HLA2RCDT  DIM       40     40       1490  Allergy Intl Recorded Datetime     
HLA2LODT  DIM       40     40       1530  Allergy Intl Last Occur Datetime   
HLA2SPAR  DIM       100    100      1570  Spare Variable                     
.
.End of Record                      1670 
.
