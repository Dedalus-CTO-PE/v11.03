. V10.08.01 16/06/2016 SA C-0294177 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PRIECAFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Eclipse IMC Transaction Audit      
. *
. * File Type     :   SQL
. *
. * File Name     :   priecaaf.dat
. *
. * Index Values  :   KEY26   KEY26   KEY34                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIECAA1   IFILE    SQL, FIXED=206, KEY="U1-8,9-16,17-24,35-36"                 
PRIECAA2   IFILE    SQL, FIXED=206, KEY="U9-16,17-24,35-36,1-8"                 
PRIECAA3   IFILE    SQL, FIXED=206, KEY="U1-8,25-32,9-16,17-24,35-36"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PREAINVN  DIM       8      8        1     Invoice Number                     
PREADATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
PREATIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
PREABATN  DIM       8      8        25    Batch Number                       
PREASTAT  FORM      2      2        33    Status (see priectaf.precflag)     
PREATYPE  DIM       2      2        35    Type                               
.                                         0 = Not Applicable                   
.                                         1 = Status Request                   
.                                         2 = Status Request Response          
.                                         3 = Report Request                   
.                                         4 = Report Request Response          
.                                         5 = Viewed                           
.                                         6 = Data Error Response              
.                                         7 = Transmission Error Response      
PREAOPER  DIM       10     10       37    Web User Id (websecaf)             
PREATRID  DIM       24     24       47    Transaction Id                     
PREAEROR  DIM       4      4        71    Hub Error Code                     
PREAEROT  DIM       100    100      75    Hub Error Explanaton Text          
PREASPAR  DIM       31     31       175   Spare Variable                     
.
.End of Record                      206  
.
