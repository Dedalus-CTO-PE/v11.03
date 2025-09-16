. *----------------------------------------------------------------------
. * Include Name  :   PRIUREFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Private Practice Unreconcil Invoice
. *
. * File Type     :   SQL
. *
. * File Name     :   priureaf.dat
. *
. * Index Values  :   KEY8    KEY24                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIUREA1   IFILE    SQL, FIXED=229, KEY="U1-8"
PRIUREA2   IFILE    SQL, FIXED=229, KEY="U77-84,85-92,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRURINVN  DIM       8      8        1     Invoice Number                     
PRURDEBT  DIM       8      8        9     Debtor Number                      
PRURSCAN  DIM       2      2        17    Scan Flag                          
PRURSTAT  DIM       1      1        19    Status(0=New,1=Processed,2=Deleted)
PRURMPRA  DIM       6      6        20    Medical Practice                   
PRURSDOC  DIM       10     10       26    Service Doctor                     
PRURCLMN  DIM       3      3        36    Claim Code Cat CL                  
PRURHFND  DIM       6      6        39    Health Fund                        
PRURINVT  FORM      12.2   8        45    Invoice Total                      
PRURPAYM  FORM      12.2   8        53    Amount Paid                        
PRURJRNL  FORM      12.2   8        61    Journal Amount                     
PRUROSTD  FORM      12.2   8        69    Total Outstanding                  
PRURCDAT  DIM       8      8        77    Date Record Created (CCYYMMDD)     
PRURCTIM  DIM       8      8        85    Time Record Created (HH:MM:SS)     
PRURCUID  DIM       10     10       93    Web User ID Created (websecaf)     
PRURUDAT  DIM       8      8        103   Date Record Updated (CCYYMMDD)     
PRURUTIM  DIM       8      8        111   Time Record Updated (HH:MM:SS)     
PRURUUID  DIM       10     10       119   Web User ID Updated (websecaf)     
PRURSPAR  DIM       100    100      129   Spare                              
.
.End of Record                      229  
.
