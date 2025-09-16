. V11.03.01 20/03/2023 PVL C-0911166 Creatd FD.
. *----------------------------------------------------------------------
. * Include Name  :   PATONHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   On Hold Transaction History        
. *
. * File Type     :   SQL
. *
. * File Name     :   patonhaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATONHA1   IFILE    SQL, FIXED=238, KEY="U1-8,11-18,19-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTONVISN  DIM       8      8        1     Visit Number                       
PTONVAVL  DIM       2      2        9     System Type                        
.                                         1=Inpatients                         
.                                         (future may include 1=Emergency or   
.                                         2=Outpatients)                       
PTONTDAT  DIM       8      8        11    Transaction Date (CCYYMMDD)        
PTONTTIM  DIM       8      8        19    Transaction Time (hh:mm:ss)        
PTONURID  DIM       10     10       27    User ID Performing Transaction     
PTONREAH  DIM       3      3        37    Reason for Hold (Cat. rh)          
PTONDESC  DIM       80     80       40    Free Text Description for Hold     
PTONHACT  DIM       1      1        120   Action - Valid Values              
.                                         A=Added Hold for Visit               
.                                         C=Added Hold for Claim Code          
.                                         F=Added Hold for Health Fund         
.                                         U=Updated by Health fund/Claim code  
.                                         D=Deleted                            
PTONCLCD  DIM       3      3        121   Claim Code (Cat. CL)               
PTONHLFU  DIM       6      6        124   Health Fund Code                   
PTONHLIN  DIM       8      8        130   Hold Invoice from Date             
PTONSPAR  DIM       100    100      138   Spare Variable                     
.
.End of Record                      238  
.
