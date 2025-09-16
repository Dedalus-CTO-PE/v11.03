. 9.02 .001 26/02/2002 TT                                                    
. 9.02 .002 04/03/2002 TT  Added new index key                               
. 9.02 .003 05/03/2002 TT  Removed 2nd key                                   
. *----------------------------------------------------------------------
. * Include Name  :   CCIEX7FD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing Interface System  
. *                   Clinical Costing Extract 7         
. *
. * File Type     :   SQL
. *
. * File Name     :   cciex7af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIEX7A1   IFILE    SQL, FIXED=32, KEY="U1-1,2-3,4-11"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CLEXSTAT  DIM       1      1        1     Record Status                      
DCLEXTYP  DIM       2      2        2     Type of Visit                      
DCLEXVIS  DIM       8      8        4     Visit Number                       
CLEXSPAR  DIM       20     20       12    Spare Variable                     
.
.End of Record                      32   
.
.Redefine Key Variables
.----------------------
CLEXTYPE  FORM      2    
CLEXVISN  FORM      8    
