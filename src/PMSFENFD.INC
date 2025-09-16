. 9.10 .001 01/07/2008 EC  Added PMFNBDAT and PMFNPHON CAR 160213            
. 6.09 .002 29/01/2001
. *----------------------------------------------------------------------
. * Include Name  :   PMSFENFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Fees Est Patient Details Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfenaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFENA1   IFILE    SQL, FIXED=161, KEY="U1-12"                                 
PMSFENA2   IFILE    SQL, FIXED=161, KEY="U17-36,1-12"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFNQUOT  DIM       12     12       1     Quote Number                       
PMFNTITL  DIM       4      4        13    Title                              
PMFNSNAM  DIM       20     20       17    Surname                            
PMFNGNAM  DIM       25     25       37    Given Name                         
PMFNADD1  DIM       25     25       62    Address Line 1                     
PMFNADD2  DIM       25     25       87    Address Line 2                     
PMFNSUBR  DIM       15     15       112   Suburb                             
PMFNPOST  DIM       4      4        127   Postcode                           
PMFNBDAT  DIM       8      8        131   Date of Birth (CCYYMMDD)           
PMFNPHON  DIM       20     20       139   Phone Number                       
PMFNSPAR  DIM       2      2        159   Spare                              
.
.End of Record                      161  
.
