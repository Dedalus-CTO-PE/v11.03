. V11.01.01 21/07/2021 PVL C-0909175 Created BBSW History Audit FD              
. *----------------------------------------------------------------------
. * Include Name  :   WEBBBAFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Audit History     
. *
. * File Type     :   SQL
. *
. * File Name     :   webbbaaf.dat
. *
. * Index Values  :   KEY27   KEY27   KEY35   KEY51   KEY63                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBBAA1   IFILE    SQL, FIXED=262, KEY="U1-8,9-16,17-24,35-36,175-175"
WEBBBAA2   IFILE    SQL, FIXED=262, KEY="U9-16,17-24,35-36,1-8,175-175"
WEBBBAA3   IFILE    SQL, FIXED=262, KEY="U1-8,25-32,9-16,17-24,35-36,175-175"
WEBBBAA4   IFILE    SQL, FIXED=262, KEY="U47-70,1-8,9-16,17-24,35-36,175-175"
WEBBBAA5   IFILE    SQL, FIXED=262, KEY="U176-211,1-8,9-16,17-24,35-36,175-175"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBAINVN  DIM       8      8        1     Invoice Number                     
WBBADATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
WBBATIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
WBBABATN  DIM       8      8        25    Batch Number                       
WBBASTAT  FORM      2      2        33    Status (see webbbsaf.wbbsflag)     
WBBATYPE  DIM       2      2        35    Type                               
.                                         Type                                 
.                                         0 = Not Applicable                   
.                                         1 = Report Request                   
.                                         2 = Report Request Response          
.                                         3 = Viewed                           
.                                         4 = Data Error Response              
.                                         5 = Transmission Error Response      
WBBAOPER  DIM       10     10       37    Web User Id (websecaf)             
WBBATRID  DIM       24     24       47    Transaction Id                     
WBBAEROR  DIM       4      4        71    Hub Error Code                     
WBBAEROT  DIM       100    100      75    Hub Error Explanaton Text          
WBBAMODL  DIM       1      1        175   webPAS Module                      
.                                         webPAS Module                        
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
.                                         3 = Outpatient                       
WBBAMSID  DIM       36     36       176   Message ID                         
WBBASPAR  DIM       50     50       212   Spare Variable                     
.
.End of Record                      262  
.
