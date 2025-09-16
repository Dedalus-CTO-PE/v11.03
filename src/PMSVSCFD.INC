. V10.11.01 02/10/2017 SA C-0816814 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSVSCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Clinical Coding Value Set Codes    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsvscaf.dat
. *
. * Index Values  :   KEY33                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSVSCA1   IFILE    SQL, FIXED=577, KEY="U1-3,4-33"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMVCVSID  DIM       3      3        1     Value Set ID                       
PMVCCODE  DIM       30     30       4     Code                               
PMVCPTRM  DIM       256    256      34    Preferred Term                     
PMVCFNAM  DIM       256    256      290   Fully Specified Name               
PMVCACTV  DIM       1      1        546   Active Flag                        
.                                         0 or Blank = No                      
.                                         1 = Yes                              
PMVCSPAR  DIM       30     30       547   Spare Variable                     
.
.End of Record                      577  
.
