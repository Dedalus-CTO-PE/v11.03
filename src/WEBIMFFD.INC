. V11.00.01 15/12/2020 PVL C-0898361 Added WBIFMECN, WBIFSVCN. Fixed indexes.   
. V11.00.01 09/12/2020 PVL C-0898361 Created Table. IMCW RTVW Med Ass Med Ev Ser
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMFFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW MedAss MedEv Serv 
. *
. * File Type     :   SQL
. *
. * File Name     :   webimfaf.dat
. *
. * Index Values  :   KEY38   KEY62   KEY74                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMFA1   IFILE    SQL, FIXED=248, KEY="U1-3,4-23,24-29,30-32,33-34,35-38"
WEBIMFA2   IFILE    SQL, FIXED=248, KEY="U88-111,1-3,4-23,24-29,30-32,33-34,35-38"
WEBIMFA3   IFILE    SQL, FIXED=248, KEY="U112-147,1-3,4-23,24-29,30-32,33-34,35-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIFFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIFARID  DIM       20     20       4     Account Reference ID (Invoice)     
WBIFCLID  DIM       6      6        24    Claim ID                           
WBIFRPTC  DIM       3      3        30    Report counter (right just.)       
WBIFMECN  DIM       2      2        33    Medical Event Counter (right just.)
WBIFSVCN  DIM       4      4        35    Service Counter (right just.)      
WBIFMEID  DIM       2      2        39    Medicare Assessment MedicalEvent ID
WBIFSVID  DIM       4      4        41    Medicare Assessment MedEv Serv ID  
WBIFSVBE  DIM       9      9        45    Medicare Assessment MedEv Serv Bene
WBIFSVCA  DIM       9      9        54    Medicare Assessment MedEv Serv Chrg
WBIFSVDS  DIM       8      8        63    Med Ass MedEv Serv Date of Service 
WBIFSVEC  DIM       3      3        71    Med Ass MedEv Serv Explanation Code
WBIFSVIN  DIM       5      5        74    Med Ass MedEv Serv Item Number     
WBIFSVSF  DIM       9      9        79    Med Ass MedEv Serv Schedule Fee    
WBIFTRID  DIM       24     24       88    Transaction ID                     
WBIFMSID  DIM       36     36       112   Message ID                         
WBIFSPAR  DIM       100    100      148   Spare Variable                     
.
.End of Record                      248  
.
