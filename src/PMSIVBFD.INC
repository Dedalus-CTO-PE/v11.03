. V10.03.00 16/10/2013 JT C-283618 New FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSIVBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Independent Services Billing Invoice Link table
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsivbaf.dat
. *
. * Index Values  :   KEY8    KEY26   KEY26                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIVBA1   IFILE    SQL, FIXED=180, KEY="U19-26"                                
PMSIVBA2   IFILE    SQL, FIXED=180, KEY="U1-8,9-18,19-26"                       
PMSIVBA3   IFILE    SQL, FIXED=180, KEY="U9-18,19-26,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIVADMN  DIM       8      8        1     Admission Number                   
PMIVUNIQ  DIM       10     10       9     Unique Identifier                  
PMIVINVN  DIM       8      8        19    Invoice No                         
PMIVSTAT  DIM       1      1        27    Status                             
.                                         0=Raised,1=Credit Noted 
PMIVCUID  DIM       10     10       28    WEB User ID Created (websecaf)     
PMIVCDAT  DIM       8      8        38    Date Record Created (ccyymmdd)     
PMIVCTIM  DIM       8      8        46    Time Record Created (hh:mm:ss)     
PMIVUUID  DIM       10     10       54    WEB User ID Updated (websecaf)     
PMIVUDAT  DIM       8      8        64    Date Record Updated (ccyymmdd)     
PMIVUTIM  DIM       8      8        72    Time Record Updated (hh:mm:ss)     
PMIVSPAR  DIM       100    100      80    Spare                              
.
.End of Record                      180  
.
