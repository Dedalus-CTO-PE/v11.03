. *----------------------------------------------------------------------
. * Include Name  :   HICBCNFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   Batch Counter Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   hicbcnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICBCNA1   IFILE    SQL, FIXED=130, KEY="U1-8,9-18,19-28,29-33"                 
HICBCNA2   IFILE    SQL, FIXED=130, KEY="U29-33,1-8,9-18,19-28"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCBCPMCI  DIM       8      8        1     MCI (3 Alpha 5 Numeric)            
HCBCPYEE  DIM       10     10       9     Payee Provider Number              
HCBCPSRV  DIM       10     10       19    Service Provider Number            
HCBCBTCH  DIM       5      5        29    Batch Number (1 Alpha 4 Numeric)   
HCBCBCNT  FORM      3      3        34    Batch Counter                      
HCBCSTAT  DIM       1      1        37    Batch Number Status                
.                                         0 = Current Batch Number
.                                         1 = Batch Number Complete
HCBCCDAT  DIM       8      8        38    Date Record Created (ccyymmdd)     
HCBCCTIM  DIM       8      8        46    Time Record Created (hh:mm:ss)     
HCBCCUID  DIM       10     10       54    WEB User ID Created (websecaf)     
HCBCUDAT  DIM       8      8        64    Date Record Updated (ccyymmdd)     
HCBCUTIM  DIM       8      8        72    Time Record Updated (hh:mm:ss)     
HCBCUUID  DIM       10     10       80    WEB User ID Updated (websecaf)     
HCBCSPAR  DIM       40     40       90    Spare Variable                     
.
.End of Record                      130  
.
