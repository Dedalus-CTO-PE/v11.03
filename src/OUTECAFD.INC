. V10.13.01 17/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTECAFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse Bulk Billing Trans Audit   
. *
. * File Type     :   SQL
. *
. * File Name     :   outecaaf.dat
. *
. * Index Values  :   KEY27   KEY27   KEY35                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTECAA1   IFILE    SQL, FIXED=226, KEY="U1-8,9-16,17-24,35-36,175-175"
OUTECAA2   IFILE    SQL, FIXED=226, KEY="U9-16,17-24,35-36,1-8,175-175"
OUTECAA3   IFILE    SQL, FIXED=226, KEY="U1-8,25-32,9-16,17-24,35-36,175-175"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTEAINVN  DIM       8      8        1     Invoice Number                     
OTEADATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
OTEATIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
OTEABATN  DIM       8      8        25    Batch Number                       
OTEASTAT  FORM      2      2        33    Status (see outectaf.otecflag)     
OTEATYPE  DIM       2      2        35    Type                               
.                                         0 = Not Applicable                   
.                                         1 = Report Request                   
.                                         2 = Report Request Response          
.                                         3 = Viewed                           
.                                         4 = Data Error Response              
.                                         5 = Transmission Error Response      
OTEAOPER  DIM       10     10       37    Web User Id (websecaf)             
OTEATRID  DIM       24     24       47    Transaction Id                     
OTEAEROR  DIM       4      4        71    Hub Error Code                     
OTEAEROT  DIM       100    100      75    Hub Error Explanaton Text          
OTEAMODL  DIM       1      1        175   webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
.                                         3 = Outpatient                       
OTEASPAR  DIM       50     50       176   Spare Variable                     
.
.End of Record                      226  
.
