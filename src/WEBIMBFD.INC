. V11.00.01 20/10/2020 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMBFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW Batch Header      
. *
. * File Type     :   SQL
. *
. * File Name     :   webimbaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMBA1   IFILE    SQL, FIXED=240, KEY="U1-8"
WEBIMBA2   IFILE    SQL, FIXED=240, KEY="U27-34,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIBBTHN  DIM       8      8        1     Batch No                           
WBIBHFND  DIM       6      6        9     Health Fund                        
WBIBBHTL  FORM      12.2   8        15    Batch Total                        
WBIBTRIB  FORM      6      4        23    Total records in batch             
WBIBDTBC  DIM       8      8        27    Date batch created (ccyymmdd)      
WBIBTMBC  DIM       8      8        35    Time batch created (hh:mm:ss)      
WBIBOPER  DIM       10     10       43    Web User Id                        
DWBIBEET  DIM       1      1        53    WebServices Extract Type           
.                                         0 - Health Fund
.                                         1 - Medicare
WBIBEFNM  DIM       18     18       54    Extract Filename                   
WBIBLOCN  DIM       8      8        72    Location Id                        
WBIBSNID  DIM       60     60       80    Sender Id (email)                  
WBIBSPAR  DIM       100    100      140   Spare variable                     
.
.End of Record                      240  
.
. Redefine FORM fields from key
. -----------------------------
WBIBEETP  FORM      1
