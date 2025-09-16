. VF.01.000 07/09/2000 CH  First Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   DEBFSHFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable                
. *                   Statement Header                   
. *
. * File Type     :   SQL
. *
. * File Name     :   debfshaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBFSHA1   IFILE    SQL, FIXED=65, KEY="U1-10"                                  
DEBFSHA2   IFILE    SQL, FIXED=65, KEY="U11-18,1-10"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBSHSTAT  DIM       10     10       1     Statement No.                      
DBSHDEBC  DIM       8      8        11    Debtor Code                        
DBSHDSTA  DIM       8      8        19    Statement Date                     
DBSHTOTA  FORM      12.2   8        27    Total Amount                       
DBSHSPAR  DIM       30     30       35    Spare                              
.
.End of Record                      65   
.
