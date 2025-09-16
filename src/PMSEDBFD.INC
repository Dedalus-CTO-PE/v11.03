. V10.03.01 31/01/2013 JP C-280425 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSEDBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   eAdmission Pending Detail Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsedbaf.dat
. *
. * Index Values  :   KEY28                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEDBA1   IFILE    SQL, FIXED=855, KEY="U1-20,21-28"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDBUNIQ  DIM       20     20       1     Unique ID                          
PMDBPRID  DIM       8      8        21    Property ID                        
PMDBWBID  DIM       8      8        29    webPAS ID (cgi name)               
PMDBNVAL  FORM      14.4   10       37    Numeric Value                      
PMDBDVAL  DIM       8      8        47    Date Value                         
PMDBVALU  DIM       600    600      55    Value                              
PMDBSPAR  DIM       200    200      655   Spare                              
.
.End of Record                      855  
.
