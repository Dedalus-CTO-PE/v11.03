. 5.01 .001 07/01/1992 PE  Generated                                         
. *----------------------------------------------------------------------
. * Include Name  :   CCIPARFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Costing Generation Parameters Table
. *
. * File Type     :   SQL
. *
. * File Name     :   cciparaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIPARA1   IFILE    SQL, FIXED=51, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DCCPATYP  DIM       3      3        1     Type of procedure                  
CCPAAUTO  FORM      1      2        4     Auto Extract for this type ? y/n   
CCPAPCD1  FORM      3      3        6     Variable for procedure code 1      
CCPAPCD2  FORM      3      3        9     Variable for procedure code 2      
CCPAPCD3  FORM      3      3        12    Variable for procedure code 3      
CCPADCD1  FORM      3      3        15    Variable for department code 1     
CCPADCD2  FORM      3      3        18    Variable for department code 2     
CCPASPAR  DIM       30     30       21    Spare                              
.
.End of Record                      51   
.
.Redefine Key Variables
.----------------------
CCPATYPE  FORM      3    
