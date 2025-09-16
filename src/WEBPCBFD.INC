. V11.01.01 20/05/2021 PVL C-0906538 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCBFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PCIW Batch Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   webpcbaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCBA1   IFILE    SQL, FIXED=233, KEY="U1-8"
WEBPCBA2   IFILE    SQL, FIXED=233, KEY="U21-28,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPBBTHN  DIM       8      8        1     Batch No                           
WBPBBHTL  FORM      12.2   8        9     Batch Total                        
WBPBTRIB  FORM      6      4        17    Total records in batch             
WBPBDTBC  DIM       8      8        21    Date batch created (ccyymmdd)      
WBPBTMBC  DIM       8      8        29    Time batch created (hh:mm:ss)      
WBPBOPER  DIM       10     10       37    Web User Id                        
WBPBEFNM  DIM       18     18       47    Extract Filename                   
WBPBLOCN  DIM       8      8        65    Location Id                        
WBPBSNID  DIM       60     60       73    Sender Id (email)                  
WBPBSPAR  DIM       100    100      133   Spare variable                     
.
.End of Record                      233  
.
