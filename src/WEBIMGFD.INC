. V11.00.01 15/12/2020 PVL C-0898361 Added WBIGMECN. Fixed indexes.             
. V11.00.01 09/12/2020 PVL C-0898361 Created Table. WebServices IMCW HFund Ass M
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMGFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW HFund Ass MedEv   
. *
. * File Type     :   SQL
. *
. * File Name     :   webimgaf.dat
. *
. * Index Values  :   KEY34   KEY58   KEY70                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMGA1   IFILE    SQL, FIXED=197, KEY="U1-3,4-23,24-29,30-32,33-34"
WEBIMGA2   IFILE    SQL, FIXED=197, KEY="U37-60,1-3,4-23,24-29,30-32,33-34"
WEBIMGA3   IFILE    SQL, FIXED=197, KEY="U61-96,1-3,4-23,24-29,30-32,33-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIGFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIGARID  DIM       20     20       4     Account Reference ID (Invoice)     
WBIGCLID  DIM       6      6        24    Claim ID                           
WBIGRPTC  DIM       3      3        30    Report counter (right just.)       
WBIGMECN  DIM       2      2        33    Medical Event counter (right just.)
WBIGMEID  DIM       2      2        35    HFund Assessment MedicalEvent ID   
WBIGTRID  DIM       24     24       37    Transaction ID                     
WBIGMSID  DIM       36     36       61    Message ID                         
WBIGSPAR  DIM       100    100      97    Spare Variable                     
.
.End of Record                      197  
.
