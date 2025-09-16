. V5.06.002 16/12/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESPIDFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Non Hospital Patient Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   respidaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESPIDA1   IFILE    SQL, FIXED=270, KEY="U1-16"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REPIPID   DIM       16     16       1     Patient ID                         
REPISNM   DIM       25     25       17    Surname                            
REPIGNM   DIM       20     20       42    Given Name                         
REPIINT   DIM       1      1        62    Initial                            
REPIDOB   DIM       8      8        63    Date of Birth ccyymmdd             
REPISEX   DIM       1      1        71    Sex                                
REPIAD1   DIM       30     30       72    Address Line 1                     
REPIAD2   DIM       30     30       102   Address Line 2                     
REPIAD3   DIM       30     30       132   Address Line 3                     
REPIAD4   DIM       30     30       162   Address Line 4                     
REPIPC    DIM       8      8        192   Post Code                          
REPIPHH   DIM       20     20       200   Home Phone Number                  
REPIPHB   DIM       20     20       220   Business Phone Number              
REPISPA   DIM       30     30       240   SPare                              
.
.End of Record                      270  
.
