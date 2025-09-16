. *----------------------------------------------------------------------
. * Include Name  :   PMSLSTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Letter Selection List Index        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmslstaf.dat
. *
. * Modifications :   V9.02.01 30/08/2001 Dean Cramer     
. *                                       Created.
. *                
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLSTA1   IFILE    SQL, FIXED=34, KEY="U1-4,5-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLSSEID  DIM       4      4        1     Selection ID.                      
PMLSADMN  DIM       8      8        5     Admission Number                   
PMLSDLST  DIM       1      1        13    Deleted Status                     
.                                         0 = No
.                                         1 = Yes
PMLSSPAR  DIM       20     20       14    Spare Variable                     
.
.End of Record                      34   
.
