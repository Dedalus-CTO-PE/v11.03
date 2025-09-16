. V11.01.01 03/08/2021 PVL C-0909175 Created FD. WebServices BBSW Ass Med Ev Rep
. *----------------------------------------------------------------------
. * Include Name  :   WEBBBEFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Ass Med Evt Rep   
. *
. * File Type     :   SQL
. *
. * File Name     :   webbbeaf.dat
. *
. * Index Values  :   KEY35   KEY59   KEY71   KEY35                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBBEA1   IFILE    SQL, FIXED=801, KEY="U1-6,7-9,10-11,677-700"
WEBBBEA2   IFILE    SQL, FIXED=801, KEY="U617-640,1-6,7-9,10-11,677-700"
WEBBBEA3   IFILE    SQL, FIXED=801, KEY="U641-676,1-6,7-9,10-11,677-700"
WEBBBEA4   IFILE    SQL, FIXED=801, KEY="U677-700,1-6,7-9,10-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBECLID  DIM       6      6        1     Claim ID                           
WBBERPTC  DIM       3      3        7     Report counter (right just.)       
WBBEMEVC  DIM       2      2        10    Medical Event counter (right just.)
WBBEEVDT  DIM       8      8        12    Event Date                         
WBBEEVID  DIM       2      2        20    Event Id                           
WBBEPTSC  DIM       4      4        22    Patient Status Code                
WBBEPTST  DIM       500    500      26    Patient Status Text                
WBBEPTMN  DIM       10     10       526   Patient Member Number              
WBBEPTMR  DIM       1      1        536   Patient Member Reference           
WBBEPTFN  DIM       40     40       537   Patient Family Name                
WBBEPTGN  DIM       40     40       577   Patient Given Name                 
WBBETRID  DIM       24     24       617   Transaction Id                     
WBBEMSID  DIM       36     36       641   Message Id                         
WBBERKEY  DIM       24     24       677   Report Retrieval Key               
WBBESPAR  DIM       100    100      701   Spare Variable                     
.
.End of Record                      801  
.
