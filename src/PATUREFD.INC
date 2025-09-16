. V9.11.001 30/04/2009 JT  New FD for Unreconciled Invoices                     
. *----------------------------------------------------------------------
. * Include Name  :   PATUREFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Un-reconciled Invoices             
. *
. * File Type     :   SQL
. *
. * File Name     :   patureaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATUREA1   IFILE    SQL, FIXED=220, KEY="U1-8"                                  
PATUREA2   IFILE    SQL, FIXED=220, KEY="U94-101,102-109,1-8"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTURINVN  DIM       8      8        1     Invoice Number                     
PTURVISN  DIM       8      8        9     Visit Number                       
PTURSTAT  DIM       1      1        17    Status - 0=New, 1=Processed        
.                                                  2=Deleted
PTURSYST  DIM       1      1        18    System                             
PTURCLMN  DIM       3      3        19    Claim Code                         
PTURHFND  DIM       6      6        22    Health Fund                        
PTURHTAB  DIM       8      8        28    Health Fund Table                  
PTURINVT  FORM      12.2   8        36    Invoice Total                      
PTURPAYM  FORM      12.2   8        44    Amount Paid                        
PTURJRNL  FORM      12.2   8        52    Journal Amount                     
PTUROSTD  FORM      12.2   8        60    Total Outstanding                  
PTURCDAT  DIM       8      8        68    Date Record Updated (CCYYMMDD)
PTURCTIM  DIM       8      8        76    Time Record Updated (HH:MM:SS)
PTURCUID  DIM       10     10       84    WEB User ID Updated (websecaf)
PTURUDAT  DIM       8      8        94    Date Record Created/Receipt Date/
.                                         Reassign debt date
PTURUTIM  DIM       8      8        102   Time Record Created/Receipt Time
PTURUUID  DIM       10     10       110   WEB User ID Created (websecaf)
PTURSPAR  DIM       100    100      120   Spare                              
.
.End of Record                      220  
.
