. V11.02.01 29/03/2022 JIP C-0910220 Created                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSALVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Alternate Visit Audit              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsalvaf.dat
. *
. * Index Values  :   KEY24   KEY44                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSALVA1   IFILE    SQL, FIXED=458, KEY="U1-8,31-38,39-46"
PMSALVA2   IFILE    SQL, FIXED=458, KEY="U9-28,31-38,39-46,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMVAVISN  DIM       8      8        1     webPAS Visit Number                
PMVAAVIS  DIM       20     20       9     Alternate visit ID                 
PMVATYPE  DIM       2      2        29    Record Type                        
PMVADATE  DIM       8      8        31    Date created CCYYMMDD              
PMVATIME  DIM       8      8        39    Time created hh:mm:ss              
PMVACUID  DIM       10     10       47    User id created                    
PMVAACTN  DIM       1      1        57    Action 1=Added 2=Deleted           
PMVACOMM  DIM       300    300      58    Comments                           
PMVASPAR  DIM       100    100      358   Spare                              
.
.End of Record                      458  
.
