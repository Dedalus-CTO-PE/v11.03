. v9.03.01 23/12/2003 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSWDVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   WIES Dollar Value File             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmswdvaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSWDVA1   IFILE    SQL, FIXED=96, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMWDDATE  DIM       8      8        1     WIES Dollar Effective Date
PMWDVALU  FORM      8      5        9     WIES Dollar Value                  
PMWDCDTE  DIM       8      8        14    Create Date                        
PMWDCTIM  DIM       8      8        22    Create Time                        
PMWDCUSR  DIM       10     10       30    Create Web User ID                 
PMWDUDTE  DIM       8      8        40    Update Date                        
PMWDUTIM  DIM       8      8        48    Update Time                        
PMWDUUSR  DIM       10     10       56    Update Web User ID                 
PMWDSPAR  DIM       30     30       66    Spare                              
.
.End of Record                      96   
.
