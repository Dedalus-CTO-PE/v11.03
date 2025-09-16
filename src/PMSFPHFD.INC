. V10.11.01 14/07/2017 TNG C-0837619 FD Created                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSFPHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund Payee Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfphaf.dat
. *
. * Index Values  :   KEY16                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFPHA1   IFILE    SQL, FIXED=79, KEY="U1-10,11-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFPHCPC  DIM       10     10       1     HCP Code                           
PMFPHFND  DIM       6      6        11    Health Fund Code                   
PMFPFPID  DIM       12     12       17    Fund Payee ID                      
PMFPSPAR  DIM       50     50       29    Spare Variable                     
.
.End of Record                      79   
.
