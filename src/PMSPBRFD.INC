. V10.03.01 09/08/2013 JT C-283618 New FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSPBRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Payer Breakdown Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspbraf.dat
. *
. * Index Values  :   KEY22   KEY33   KEY23   KEY26                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPBRA1   IFILE    SQL, FIXED=222, KEY="U1-8,9-11,28-35,16-18"                 
PMSPBRA2   IFILE    SQL, FIXED=222, KEY="U1-8,19-27,9-11,28-35,16-18"     
PMSPBRA3   IFILE    SQL, FIXED=222, KEY="U1-8,9-11,28-35,12-12,16-18"           
PMSPBRA4   IFILE    SQL, FIXED=222, KEY="U1-8,16-18,12-12,13-15,9-11,28-35"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPBADMN  DIM       8      8        1     Admission Number                   
PMPBCLTY  DIM       3      3        9     Claim Type (Cat CL)                
PMPBDEFT  DIM       1      1        12    Default 1=Yes,0=No                 
PMPBCNTR  DIM       3      3        13    Counter (order of payers)          
PMPBICNT  DIM       3      3        16    Item Count (0 for Accommodation)   
PMPBITEM  DIM       9      9        19    Item Code                          
PMPBEFDT  DIM       8      8        28    Effective From date (CCYYMMDD)     
PMPBETDT  DIM       8      8        36    Effective to Date (CCYYMMDD)       
PMPBREGM  DIM       10     10       44    Regime Code                        
PMPBMAXB  FORM      12.2   8        54    Maximum Per Billing Period Amount  
PMPBMAXD  FORM      12.2   8        62    Maximum Per Day Amount             
PMPBCUID  DIM       10     10       70    WEB User Id Created (websecaf)     
PMPBCDAT  DIM       8      8        80    Date Record Created (ccyymmdd)     
PMPBCTIM  DIM       8      8        88    Time Record Created (hh:mm:ss)     
PMPBUUID  DIM       10     10       96    WEB User Id Updated (websecaf)     
PMPBUDAT  DIM       8      8        106   Date Record Updated (ccyymmdd)     
PMPBUTIM  DIM       8      8        114   Time Record Updated (hh:mm:ss)     
PMPBSPAR  DIM       100    100      122   Spare                              
.
.End of Record                      222  
.
