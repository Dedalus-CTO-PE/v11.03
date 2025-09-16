. V10.11.01 20/10/2017 JP C-0816814 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSUKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Value Set Code keyword             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsukiaf.dat
. *
. * Index Values  :   KEY83   KEY83                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUKIA1   IFILE    SQL, FIXED=134, KEY="U1-3,4-33,34-83"
PMSUKIA2   IFILE    SQL, FIXED=134, KEY="U1-3,34-83,4-33"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUKVSID  DIM       3      3        1     Value set id (pmsvscaf.pmvcvsid)   
PMUKCODE  DIM       30     30       4     Value set code (pmsvscaf.pmvccode) 
PMUKKKWD  DIM       50     50       34    Keyword                            
PMUKSPAR  DIM       50     50       84    Spare                              
.
.End of Record                      134  
.
