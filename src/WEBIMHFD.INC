. V11.00.01 15/12/2020 PVL C-0898361 Added WBIHMECN WBIHSVCN. Added indexes.    
. V11.00.01 09/12/2020 PVL C-0898361 Created Table. WebServices IMCW HFAss MedEv
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW HFAss MedEv Serv  
. *
. * File Type     :   SQL
. *
. * File Name     :   webimhaf.dat
. *
. * Index Values  :   KEY38   KEY62   KEY74                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMHA1   IFILE    SQL, FIXED=330, KEY="U1-3,4-23,24-29,30-32,33-34,35-38"
WEBIMHA2   IFILE    SQL, FIXED=330, KEY="U170-193,1-3,4-23,24-29,30-32,33-34,35-38"
WEBIMHA3   IFILE    SQL, FIXED=330, KEY="U194-229,1-3,4-23,24-29,30-32,33-34,35-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIHFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIHARID  DIM       20     20       4     Account Reference ID (Invoice      
WBIHCLID  DIM       6      6        24    Claim ID                           
WBIHRPTC  DIM       3      3        30    Report counter (right just.)       
WBIHMECN  DIM       2      2        33    Medical Event counter (right just.)
WBIHSVCN  DIM       4      4        35    Service counter (right just.)      
WBIHMEID  DIM       2      2        39    HFund Assessment MedicalEvent ID   
WBIHSVID  DIM       4      4        41    HFund Assessment MedEv Serv ID     
WBIHSVAC  DIM       1      1        45    HFund Ass MedEv Serv Ass Code      
WBIHSVBE  DIM       9      9        46    HFund Ass MedEv Serv Benefit       
WBIHSVCA  DIM       9      9        55    HFund Ass MedEv Serv Charge Amount 
WBIHSVDS  DIM       8      8        64    HFund Ass MedEv Serv Date Of Serv  
WBIHSVIT  DIM       5      5        72    HFund Ass MedEv Serv Item Number   
WBIHSVSF  DIM       9      9        77    HFund Ass MedEv Serv Schedule Fee  
WBIHSVEC  DIM       4      4        86    HFund Ass MedEv Serv Exp Code      
WBIHSVET  DIM       80     80       90    HFund Ass MedEv Serv Exp Text      
WBIHTRID  DIM       24     24       170   Transaction ID                     
WBIHMSID  DIM       36     36       194   Message ID                         
WBIHSPAR  DIM       100    100      230   Spare Variable                     
.
.End of Record                      330  
.
