. V10.11.01 21/09/2017 SA C-0843369 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSUHLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Unique HERO Location               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsuhlaf.dat
. *
. * Index Values  :   KEY7    KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUHLA1   IFILE    SQL, FIXED=58, KEY="U1-1,2-4,5-7"
PMSUHLA2   IFILE    SQL, FIXED=58, KEY="U8-27,1-1,2-4,5-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMULTYPE  DIM       1      1        1     Type of HERO Location              
.                                         1 = Ward                             
.                                         2 = ED Location                      
PMULWDCD  DIM       3      3        2     Ward/Location Code                 
PMULBDCD  DIM       3      3        5     Bed/Site Code                      
PMULUHID  DIM       20     20       8     Unique HERO Location ID            
PMULSPAR  DIM       30     30       28    Spare Variable                     
.
.End of Record                      58   
.
