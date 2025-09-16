. V11.01.01 26/05/2021 PVL C-0906538 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCAFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PCIW Transaction A     
. *
. * File Type     :   SQL
. *
. * File Name     :   webpcaaf.dat
. *
. * Index Values  :   KEY27   KEY27   KEY35   KEY51   KEY63                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCAA1   IFILE    SQL, FIXED=312, KEY="U1-8,9-16,17-24,35-36,175-175"
WEBPCAA2   IFILE    SQL, FIXED=312, KEY="U9-16,17-24,35-36,1-8,175-175"
WEBPCAA3   IFILE    SQL, FIXED=312, KEY="U1-8,25-32,9-16,17-24,35-36,175-175"
WEBPCAA4   IFILE    SQL, FIXED=312, KEY="U47-70,1-8,9-16,17-24,35-36,175-175"
WEBPCAA5   IFILE    SQL, FIXED=312, KEY="U176-211,1-8,9-16,17-24,35-36,175-175"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPHINVN  DIM       8      8        1     Invoice Number                     
WBPHDATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
WBPHTIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
WBPHBATN  DIM       8      8        25    Batch Number                       
WBPHSTAT  FORM      2      2        33    Status (see emrectaf.emecflag)     
WBPHTYPE  DIM       2      2        35    Type                               
WBPHOPER  DIM       10     10       37    Web User Id (websecaf)             
WBPHTRID  DIM       24     24       47    Transaction Id                     
WBPHEROR  DIM       4      4        71    Hub Error Code                     
WBPHEROT  DIM       100    100      75    Hub Error Explanaton Text          
WBPHMODL  DIM       1      1        175   webPAS Module                      
WBPHMSID  DIM       36     36       176   Message ID                         
WBPHSPAR  DIM       100    100      212   Spare Variable                     
.
.End of Record                      312  
.
