. V10.03.01 01/02/2013 JP C-280425 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSEERFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   eAdmission XML Message Error       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmseeraf.dat
. *
. * Index Values  :   KEY20                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEERA1   IFILE    SQL, FIXED=437, KEY="U1-20"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMERUNIQ  DIM       20     20       1     Unique ID                          
PMERDATE  DIM       8      8        21    Date Created CCYYMMDD              
PMERTIME  DIM       8      8        29    Time Created hh:mm:ss              
PMERMESS  DIM       200    200      37    Error Message                      
PMERSPAR  DIM       200    200      237   Spare                              
.
.End of Record                      437  
.
