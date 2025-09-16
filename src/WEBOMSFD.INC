. V11.01.01 29/11/2021 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOMSFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW-ECM Services Table
. *
. * File Type     :   SQL
. *
. * File Name     :   webomsaf.dat
. *
. * Index Values  :   KEY14   KEY38   KEY50   KEY22                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOMSA1   IFILE    SQL, FIXED=232, KEY="U1-8,9-11,12-14"
WEBOMSA2   IFILE    SQL, FIXED=232, KEY="U52-75,1-8,9-11,12-14"
WEBOMSA3   IFILE    SQL, FIXED=232, KEY="U76-111,1-8,9-11,12-14"
WEBOMSA4   IFILE    SQL, FIXED=232, KEY="U112-119,1-8,9-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOMVISN  DIM       8      8        1     Visit Number                       
WBOMCNTR  DIM       3      3        9     Report Counter (right just.)       
WBOMSCNT  DIM       3      3        12    Service Counter (right just.)      
WBOMRTYP  DIM       1      1        15    Service Record Type                
WBOMITEM  DIM       9      9        16    Theatre/Item Code                  
WBOMQUAN  DIM       3      3        25    Quantity                           
WBOMPDTE  DIM       8      8        28    Date of Procedure                  
WBOMCDTE  DIM       8      8        36    Date Created (ccyymmdd)            
WBOMCTIM  DIM       8      8        44    Time Created (hh:mm:ss)            
WBOMTRID  DIM       24     24       52    Transaction ID                     
WBOMMSID  DIM       36     36       76    Message ID                         
WBOMELEG  DIM       8      8        112   Eligibility Number                 
WBOMACOI  DIM       1      1        120   Aftercare Override Indicator       
WBOMDSOI  DIM       1      1        121   Duplicate Service Override Indic   
WBOMFQNT  DIM       1      1        122   Field Quantity                     
WBOMITMN  DIM       5      5        123   MBS Item Number                    
WBOMNOPT  DIM       2      2        128   Number of Patients Seen            
WBOMRSOI  DIM       1      1        130   Restriction Override Indicator     
WBOMTDOI  DIM       1      1        131   Time Dependent Override Ind        
WBOMSPAR  DIM       100    100      132   Spare Variable                     
.
.End of Record                      232  
.
