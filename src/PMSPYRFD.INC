. V10.03.00 16/10/2013 JT C-283618 New FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSPYRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Payer details              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspyraf.dat
. *
. * Index Values  :   KEY19   KEY19                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPYRA1   IFILE    SQL, FIXED=603, KEY="U1-8,9-11,12-19"                       
PMSPYRA2   IFILE    SQL, FIXED=603, KEY="U1-8,12-19,9-11"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPYURNO  DIM       8      8        1     U/R Number                         
PMPYCLTY  DIM       3      3        9     Claim Type (Cat CL)                
PMPYEFDT  DIM       8      8        12    Effective Date (CCYYMMDD)          
PMPYDEFT  DIM       1      1        20    Default 1=Yes,0=No                 
PMPYETDT  DIM       8      8        21    Effective to Date (CCYYMMDD)       
PMPYTITL  DIM       4      4        29    Title                              
PMPYSNAM  DIM       40     40       33    Surname                            
PMPYGNAM  DIM       40     40       73    Given Name                         
PMPYSGNM  DIM       40     40       113   Second Given Name                  
PMPYADD1  DIM       35     35       153   Address Line 1                     
PMPYADD2  DIM       35     35       188   Address Line 2                     
PMPYADD3  DIM       35     35       223   Address Line 3                     
PMPYADD4  DIM       35     35       258   Address Line 4                     
PMPYPOST  DIM       8      8        293   Post Code                          
PMPYRELP  DIM       10     10       301   Relationship                       
PMPYTELP  DIM       20     20       311   Private Telephone                  
PMPYTELB  DIM       20     20       331   Business Telephone                 
PMPYTELM  DIM       20     20       351   Mobile Telephone                   
PMPYEMAI  DIM       80     80       371   Email Address                      
PMPYCUID  DIM       10     10       451   WEB User Id Created (websecaf)     
PMPYCDAT  DIM       8      8        461   Date Record Created (ccyymmdd)     
PMPYCTIM  DIM       8      8        469   Time Record Created (hh:mm:ss)     
PMPYUUID  DIM       10     10       477   WEB User Id Updated (websecaf)     
PMPYUDAT  DIM       8      8        487   Date Record Updated (ccyymmdd)     
PMPYUTIM  DIM       8      8        495   Time Record Updated (hh:mm:ss)     
PMPYSPAR  DIM       100    100      503   Spare                              
.
.End of Record                      603  
.
