. V11.00.02 28/10/2020 PVL C-0898361 Update WBIASTAT Comment
. V11.00.01 20/10/2020 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMAFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW Audit Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   webimaaf.dat
. *
. * Index Values  :   KEY26   KEY26   KEY34   KEY50                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMAA1   IFILE    SQL, FIXED=311, KEY="U1-8,9-16,17-24,35-36"
WEBIMAA2   IFILE    SQL, FIXED=311, KEY="U9-16,17-24,35-36,1-8"
WEBIMAA3   IFILE    SQL, FIXED=311, KEY="U1-8,25-32,9-16,17-24,35-36"
WEBIMAA4   IFILE    SQL, FIXED=311, KEY="U47-70,1-8,9-16,17-24,35-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIAINVN  DIM       8      8        1     Invoice Number                     
WBIADATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
WBIATIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
WBIABATN  DIM       8      8        25    Batch Number                       
WBIASTAT  FORM      2      2        33    Status (see webimcaf.wbimflag)     
WBIATYPE  DIM       2      2        35    Type                               
.                                         0 = Not Applicable                   
.                                         1 = Status Request                   
.                                         2 = Status Request Response          
.                                         3 = Report Request                   
.                                         4 = Report Request Response          
.                                         5 = Viewed                           
.                                         6 = Data Error Response              
.                                         7 = Transmission Error Response      
WBIAOPER  DIM       10     10       37    Web User Id (websecaf)             
WBIATRID  DIM       24     24       47    Transaction Id                     
WBIAEROR  DIM       4      4        71    Hub Error Code                     
WBIAEROT  DIM       100    100      75    Hub Error Explanaton Text          
WBIAMSID  DIM       36     36       175   Message Id                         
WBIASPAR  DIM       100    100      211   Spare Variable                     
.
.End of Record                      311  
.
