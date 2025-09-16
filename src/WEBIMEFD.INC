. V11.00.01 15/12/2020 PVL C-0898361 Added WBIEMECN. Fixed indexes.             
. V11.00.01 09/12/2020 PVL C-0898361 Created Table. IMCW RTVW Medicare Ass Med E
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMEFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW Medicare Ass MedEv
. *
. * File Type     :   SQL
. *
. * File Name     :   webimeaf.dat
. *
. * Index Values  :   KEY34   KEY58   KEY70                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMEA1   IFILE    SQL, FIXED=373, KEY="U1-3,4-23,24-29,30-32,33-34"
WEBIMEA2   IFILE    SQL, FIXED=373, KEY="U213-236,1-3,4-23,24-29,30-32,33-34"
WEBIMEA3   IFILE    SQL, FIXED=373, KEY="U237-272,1-3,4-23,24-29,30-32,33-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIEFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIEARID  DIM       20     20       4     Account Reference ID (Invoice)     
WBIECLID  DIM       6      6        24    Claim ID                           
WBIERPTC  DIM       3      3        30    Report counter (right just.)       
WBIEMECN  DIM       2      2        33    Medical Event counter (right just.)
WBIEMEID  DIM       2      2        35    Medicare Assessment MedicalEvent ID
WBIECFCD  DIM       1      1        37    Card Flag Code                     
WBIECPSC  DIM       4      4        38    Current Patient Status Code        
WBIECPST  DIM       80     80       42    Current Patient Status Text        
WBIECPMN  DIM       10     10       122   Current Patient Member Number      
WBIECPRN  DIM       1      1        132   Current Patient Member Ref Number  
WBIECPFN  DIM       40     40       133   Current Patient Family Name        
WBIECPGN  DIM       40     40       173   Current Patient Given Name         
WBIETRID  DIM       24     24       213   Transaction ID                     
WBIEMSID  DIM       36     36       237   Message ID                         
WBIESPAR  DIM       100    100      273   Spare Variable                     
.
.End of Record                      373  
.
