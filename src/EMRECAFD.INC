. V10.13.01 20/08/2018 PV C-0859742 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   EMRECAFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Eclipse Store/Forward Trans Audit  
. *
. * File Type     :   SQL
. *
. * File Name     :   emrecaaf.dat
. *
. * Index Values  :   KEY27   KEY27   KEY35                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRECAA1   IFILE    SQL, FIXED=226, KEY="U1-8,9-16,17-24,35-36,175-175"
EMRECAA2   IFILE    SQL, FIXED=226, KEY="U9-16,17-24,35-36,1-8,175-175"
EMRECAA3   IFILE    SQL, FIXED=226, KEY="U1-8,25-32,9-16,17-24,35-36,175-175"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMEAINVN  DIM       8      8        1     Invoice Number                     
EMEADATE  DIM       8      8        9     Date of Transaction (ccyymmdd)     
EMEATIME  DIM       8      8        17    Time of Transaction (hh:mm:ss)     
EMEABATN  DIM       8      8        25    Batch Number                       
EMEASTAT  FORM      2      2        33    Status (see emrectaf.emecflag)     
EMEATYPE  DIM       2      2        35    Type                               
.                                         0 = Not Applicable                   
.                                         1 = Viewed                           
.                                         2 = Data Error Response              
.                                         3 = Transmission Error Response      
EMEAOPER  DIM       10     10       37    Web User Id (websecaf)             
EMEATRID  DIM       24     24       47    Transaction Id                     
EMEAEROR  DIM       4      4        71    Hub Error Code                     
EMEAEROT  DIM       100    100      75    Hub Error Explanaton Text          
EMEAMODL  DIM       1      1        175   webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
EMEASPAR  DIM       50     50       176   Spare Variable                     
.
.End of Record                      226  
.
