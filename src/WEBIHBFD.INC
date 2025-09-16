. V11.01.01 18/02/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHBFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Batch Header      
. *
. * File Type     :   SQL
. *
. * File Name     :   webihbaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHBA1   IFILE    SQL, FIXED=240, KEY="U1-8"
WEBIHBA2   IFILE    SQL, FIXED=240, KEY="U27-34,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIJBTHN  DIM       8      8        1     Batch no                           
WBIJHFND  DIM       6      6        9     Health Fund                        
WBIJBHTL  FORM      12.2   8        15    Batch total                        
WBIJTRIB  FORM      6      4        23    Total records in batch             
WBIJDTBC  DIM       8      8        27    Date batch created (ccyymmdd)      
WBIJTMBC  DIM       8      8        35    Time batch created (hh:mm:ss)      
WBIJOPER  DIM       10     10       43    Web User Id                        
DWBIJEET  DIM       1      1        53    Eclipse extract type               
WBIJEFNM  DIM       18     18       54    Extract Filename                   
WBIJLOCN  DIM       8      8        72    Location Id                        
WBIJSNID  DIM       60     60       80    Sender Id (email)                  
WBIJSPAR  DIM       100    100      140   Spare Variable                     
.
.End of Record                      240  
.
. Redefine FORM fields from key
. -----------------------------
WBIJEETP  FORM      1
