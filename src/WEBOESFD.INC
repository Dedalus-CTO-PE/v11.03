. V11.00.01 20/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOESFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Services Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   weboesaf.dat
. *
. * Index Values  :   KEY14   KEY38   KEY50   KEY22                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOESA1   IFILE    SQL, FIXED=220, KEY="U1-8,9-11,12-14"
WEBOESA2   IFILE    SQL, FIXED=220, KEY="U52-75,1-8,9-11,12-14"
WEBOESA3   IFILE    SQL, FIXED=220, KEY="U76-111,1-8,9-11,12-14"
WEBOESA4   IFILE    SQL, FIXED=220, KEY="U112-119,1-8,9-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOSVISN  DIM       8      8        1     Visit Number                       
WBOSCNTR  DIM       3      3        9     Report Counter (right just.)       
WBOSSCNT  DIM       3      3        12    Service Counter (right just.)      
WBOSRTYP  DIM       1      1        15    Service Record Type                
WBOSITEM  DIM       9      9        16    Theatre/Item Code                  
WBOSQUAN  DIM       3      3        25    Quantity                           
WBOSPDTE  DIM       8      8        28    Date of Procedure                  
WBOSCDTE  DIM       8      8        36    Date Created (ccyymmdd)            
WBOSCTIM  DIM       8      8        44    Time Created (hh:mm:ss)            
WBOSTRID  DIM       24     24       52    Transaction ID                     
WBOSMSID  DIM       36     36       76    Message ID                         
WBOSELEG  DIM       8      8        112   Eligibility Number                 
WBOSSPAR  DIM       100    100      120   Spare Variable                     
.
.End of Record                      220  
.
