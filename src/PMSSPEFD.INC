. V10.06.02 13/04/2015 PV C-303889 Added Created By and Update By fields        
. V10.06.01 18/03/2015 PHA C-303889 Created Table
. *----------------------------------------------------------------------
. * Include Name  :   PMSSPEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HCP Specialities                   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsspeaf.dat
. *
. * Index Values  :   KEY21                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSPEA1   IFILE    SQL, FIXED=182, KEY="U1-10,11-13,14-21"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSEHCPC  DIM       10     10       1     HCP Code                           
PMSESPEC  DIM       3      3        11    Specialty (Category A)             
PMSESDAT  DIM       8      8        14    Start Date                         
PMSEEDAT  DIM       8      8        22    End Date                           
PMSECDAT  DIM       8      8        30    Date Record Created (ccyymmdd)     
PMSECTIM  DIM       8      8        38    Time Record Created (hh:mm:ss)     
PMSECUID  DIM       10     10       46    WEB User ID Created (websecaf)     
PMSEUDAT  DIM       8      8        56    Date Record Updated (ccyymmdd)     
PMSEUTIM  DIM       8      8        64    Time Record Updated (hh:mm:ss)     
PMSEUUID  DIM       10     10       72    WEB User ID Updated (websecaf)     
PMSESPAR  DIM       100    100      82    Spare                              
.
.End of Record                      182  
.
