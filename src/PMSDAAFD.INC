. V9.03.001 15/06/2004 JH  Created                                           
. V9.03.002 23/07/2004 JH  Added phone number                                
. *----------------------------------------------------------------------
. * Include Name  :   PMSDAAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Default Alternate ID Address       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdaaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDAAA1   IFILE    SQL, FIXED=192, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDATYPE  DIM       3      3        1     Type of ID (Cat AI)                
PMDAADD1  DIM       35     35       4     Default Address Line 1             
PMDAADD2  DIM       35     35       39    Default Address Line 2             
PMDAADD3  DIM       35     35       74    Default Address Line 3             
PMDAADD4  DIM       35     35       109   Default Address Line 4             
PMDAPOST  DIM       8      8        144   Default Post Code                  
PMDAPHON  DIM       20     20       152   Telephone                          
PMDASPAR  DIM       20     20       172   Spare                              
.
.End of Record                      192  
.
