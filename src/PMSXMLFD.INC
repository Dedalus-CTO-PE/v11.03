. V10.03.01 21/03/2013 JP C-280425 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSXMLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   XML Field Definitions              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsxmlaf.dat
. *
. * Index Values  :   KEY83   KEY91                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSXMLA1   IFILE    SQL, FIXED=292, KEY="U1-3,4-83"                             
PMSXMLA2   IFILE    SQL, FIXED=292, KEY="U1-3,84-91,4-83"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMXMTYPE  DIM       3      3        1     Type 001=eAdmission XML            
PMXMXTAG  DIM       80     80       4     XML Tag                            
PMXMXCGI  DIM       8      8        84    webPAS cgi                         
PMXMSPAR  DIM       200    200      92    Spare                              
.
.End of Record                      292  
.
