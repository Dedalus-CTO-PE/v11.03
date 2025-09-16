. V10.02.01 01/06/2011 DS C-240723 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSRLDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Doctor Roles                       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrldaf.dat
. *
. * Index Values  :   KEY16                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRLDA1   IFILE    SQL, FIXED=100, KEY="U1-10,11-13,14-16"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRDDOCT  DIM       10     10       1     Doctor Code                        
PMRDHOSP  DIM       3      3        11    Hospital Code (pathspaf)           
PMRDROLE  DIM       3      3        14    Role Code (Cat rm)                 
PMRDACTV  DIM       1      1        17    Active (0=Active/1=Inactive)       
PMRDCUID  DIM       10     10       18    WEB User ID Created (websecaf)     
PMRDCDAT  DIM       8      8        28    Date Record Created (ccyymmdd)     
PMRDCTIM  DIM       8      8        36    Time Record Created (hh:mm:ss)     
PMRDUUID  DIM       10     10       44    WEB User ID Updated (websecaf)     
PMRDUDAT  DIM       8      8        54    Date Record Updated (ccyymmdd)     
PMRDUTIM  DIM       8      8        62    Time Record Updated (hh:mm:ss)     
PMRDSPAR  DIM       30     30       70    Spare Variable                     
.
.End of Record                      100  
.
