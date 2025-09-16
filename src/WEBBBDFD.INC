. V11.01.01 03/08/2021 PVL C-0909175 Created FD. WebServices BBSW Assessment Rep
. *----------------------------------------------------------------------
. * Include Name  :   WEBBBDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Assessment Re     
. *
. * File Type     :   SQL
. *
. * File Name     :   webbbdaf.dat
. *
. * Index Values  :   KEY33   KEY57   KEY69   KEY33                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBBDA1   IFILE    SQL, FIXED=322, KEY="U1-6,7-9,146-169"
WEBBBDA2   IFILE    SQL, FIXED=322, KEY="U86-109,1-6,7-9,146-169"
WEBBBDA3   IFILE    SQL, FIXED=322, KEY="U110-145,1-6,7-9,146-169"
WEBBBDA4   IFILE    SQL, FIXED=322, KEY="U146-169,1-6,7-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBDCLID  DIM       6      6        1     Claim ID                           
WBBDRPTC  DIM       3      3        7     Report counter (right just.)       
WBBDCLBP  DIM       9      9        10    Claim Benefit Paid                 
WBBDCLCA  DIM       9      9        19    Claim Charge Amount                
WBBDSRVP  DIM       8      8        28    Servicing Provider Num             
WBBDSTAT  DIM       50     50       36    Status                             
WBBDTRID  DIM       24     24       86    Claim Transaction ID               
WBBDMSID  DIM       36     36       110   Message ID                         
WBBDRKEY  DIM       24     24       146   Report Retrieval Key               
WBBDCUID  DIM       10     10       170   Created By User ID                 
WBBDCDAT  DIM       8      8        180   Date Created                       
WBBDCTIM  DIM       8      8        188   Time Created                       
WBBDUUID  DIM       10     10       196   Update By User ID                  
WBBDUDAT  DIM       8      8        206   Date Updated                       
WBBDUTIM  DIM       8      8        214   Time Updated                       
WBBDSPAR  DIM       100    100      222   Spare Variable                     
.
.End of Record                      322  
.
