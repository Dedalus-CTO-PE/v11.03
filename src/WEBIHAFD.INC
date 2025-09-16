. V11.01.01 18/02/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHAFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Audit Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   webihaaf.dat
. *
. * Index Values  :   KEY26   KEY26   KEY34   KEY50   KEY62                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHAA1   IFILE    SQL, FIXED=311, KEY="U1-8,9-16,17-24,35-36"
WEBIHAA2   IFILE    SQL, FIXED=311, KEY="U9-16,17-24,35-36,1-8"
WEBIHAA3   IFILE    SQL, FIXED=311, KEY="U1-8,25-32,9-16,17-24,35-36"
WEBIHAA4   IFILE    SQL, FIXED=311, KEY="U47-70,1-8,9-16,17-24,35-36"
WEBIHAA5   IFILE    SQL, FIXED=311, KEY="U175-210,1-8,9-16,17-24,35-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIIINVN  DIM       8      8        1     Invoice Number                     
WBIIDATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
WBIITIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
WBIIBATN  DIM       8      8        25    Batch Number                       
WBIISTAT  FORM      2      2        33    Status (see webihcaf.wbicflag)     
WBIITYPE  DIM       2      2        35    Type                               
.                                         0 = Not Applicable                   
.                                         1 = Status Request                   
.                                         2 = Status Request Response          
.                                         3 = Report Request                   
.                                         4 = Report Request Response          
.                                         5 = Viewed                           
.                                         6 = Data Error Response              
.                                         7 = Transmission Error Response      
WBIIOPER  DIM       10     10       37    Web User Id                        
WBIITRID  DIM       24     24       47    Transaction Id                     
WBIIEROR  DIM       4      4        71    Hub Error Code                     
WBIIEROT  DIM       100    100      75    Hub Error Explanaton Text          
WBIIMSID  DIM       36     36       175   Message Id                         
WBIISPAR  DIM       100    100      211   Spare Variable                     
.
.End of Record                      311  
.
