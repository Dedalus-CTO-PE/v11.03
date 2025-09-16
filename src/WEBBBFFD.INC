. V11.01.01 03/08/2021 PVL C-0909175 Created FD. WebServices BBSW Ass Med Evt Se
. *----------------------------------------------------------------------
. * Include Name  :   WEBBBFFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Ass Med Evt S     
. *
. * File Type     :   SQL
. *
. * File Name     :   webbbfaf.dat
. *
. * Index Values  :   KEY37   KEY61   KEY73   KEY37                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBBFA1   IFILE    SQL, FIXED=239, KEY="U1-6,7-9,10-11,12-13,115-138"
WEBBBFA2   IFILE    SQL, FIXED=239, KEY="U55-78,1-6,7-9,10-11,12-13,115-138"
WEBBBFA3   IFILE    SQL, FIXED=239, KEY="U79-114,1-6,7-9,10-11,12-13,115-138"
WEBBBFA4   IFILE    SQL, FIXED=239, KEY="U115-138,1-6,7-9,10-11,12-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBFCLID  DIM       6      6        1     Claim ID                           
WBBFRPTC  DIM       3      3        7     Report counter (right just.)       
WBBFMEVC  DIM       2      2        10    Medical Event counter (right just.)
WBBFSRVC  DIM       2      2        12    Service counter (right just.)      
WBBFASSC  DIM       4      4        14    Assessment Code                    
WBBFBEPD  DIM       9      9        18    Benefit Paid                       
WBBFCHAM  DIM       9      9        27    Charge Amount                      
WBBFSVID  DIM       4      4        36    Service Id                         
WBBFITMN  DIM       5      5        40    Item Number                        
WBBFNOFP  DIM       2      2        45    Number Of Patients                 
WBBFPROV  DIM       8      8        47    Service Provider Number            
WBBFTRID  DIM       24     24       55    Transaction ID                     
WBBFMSID  DIM       36     36       79    Message ID                         
WBBFRKEY  DIM       24     24       115   Report Retrieval Key               
WBBFSPAR  DIM       100    100      139   Spare Variable                     
.
.End of Record                      239  
.
