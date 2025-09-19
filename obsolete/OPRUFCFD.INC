. V10.15.01 20/11/2019 PVL C-0871644 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   OPRUFCFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   User Favourite Charge Items        
. *
. * File Type     :   SQL
. *
. * File Name     :   oprufcaf.dat
. *
. * Index Values  :   KEY22                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRUFCA1   IFILE    SQL, FIXED=99, KEY="U1-10,11-13,14-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPUFUSER  DIM       10     10       1     Web User ID (websecaf)             
OPUFHOSP  DIM       3      3        11    Hospital ID (pathspaf)             
OPUFCODE  DIM       9      9        14    Charge Code (patmchgf or nzpmchaf) 
OPUFCDTE  DIM       8      8        23    Date Created                       
OPUFCTIM  DIM       8      8        31    Time Created                       
OPUFCUSR  DIM       10     10       39    Web User ID Created                
OPUFSPAR  DIM       50     50       49    Spare                              
.
.End of Record                      99   
.
