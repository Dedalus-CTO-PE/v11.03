. V9.08.001 10/05/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSCMMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Credit Card Commission Account Det.
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscmmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCMMA1   IFILE    SQL, FIXED=98, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCMCRCD  DIM       3      3        1     Credit Card Code (Catg CR)         
PMCMCACC  DIM       14     14       4     Commission Account Details         
PMCMSPAR  DIM       80     80       18    Spare variable                     
.
.End of Record                      98   
.
