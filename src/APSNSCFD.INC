. VF.01.001 11/04/2000 SB  Added ABN Number & GST Registered                 
. *----------------------------------------------------------------------
. * Include Name  :   APSNSCFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Non-Specific Creditor Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   apsnscaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSNSCA1   IFILE    SQL, FIXED=173, KEY="U1-5,6-8"                              
APSNSCA2   IFILE    SQL, FIXED=173, KEY="U1-5,9-38,6-8"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APNSBCH   DIM       5      5        1     Batch Number                       
APNSUNI   DIM       3      3        6     Unique Id(Prepend ~~ for Cred Code)
APNSNA1   DIM       30     30       9     Name Line 1                        
APNSNA2   DIM       30     30       39    Name Line 2                        
APNSAD1   DIM       25     25       69    Address Line 1                     
APNSAD2   DIM       25     25       94    Address Line 2                     
APNSAD3   DIM       25     25       119   Address Line 3                     
APNSPC    DIM       6      6        144   Post Code                          
APNSABN   DIM       11     11       150   ABN Number                         
APNSGREG  FORM      1      2        161   GST Registered Y/N 0 = No          
APNSSPA   DIM       10     10       163   Spare                              
.
.End of Record                      173  
.
