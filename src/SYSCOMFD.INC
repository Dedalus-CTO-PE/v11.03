. V10.00.01 25/03/2010 ML  Minor change to Comment length                   
. V5.00.001 24/05/1991 DWJ GEnerated                                            
. V5.00.002 24/05/1991 DWJ Generated                                            
. *----------------------------------------------------------------------
. * Include Name  :   SYSCOMFD.INC
. *
. * Function      :   File Def'n Include for System Control                     
. *                   Field Comments File                
. *
. * File Type     :   SQL
. *
. * File Name     :   syscomaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSCOMA1   IFILE    SQL, FIXED=75, KEY="U1-2,3-4,5-8,9-10"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYCMSYS   DIM       2      2        1     System                             
SYCMFIL   DIM       2      2        3     File                               
SYCMFLD   DIM       4      4        5     Field Code                         
DSYCMUNI  DIM       2      2        9     Unique                             
SYCMTEXT  DIM       37     37       11    Text                               
SYCMSPAR  DIM       27     27       48    Spare                              
.
.End of Record                      75   
.
.Redefine Key Variables
.----------------------
SYCMUNIQ  FORM      2    
