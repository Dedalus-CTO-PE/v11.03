. V6.00.001 20/05/1992 Nez Convert file for case tools
. *----------------------------------------------------------------------
. * Include Name  :   FMSBTYFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Budget Type Master
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsbtyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBTYA1   IFILE    SQL, FIXED=60, KEY="U1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBTCODE  DIM       4      4        1     Budget Type                        
FMBTDESC  DIM       35     35       5     Description                        
FMBTYEAR  DIM       4      4        40    Financial Year                     
FMBTSTAT  DIM       1      1        44    Status (Not Used)                  
FMBTSPAR  DIM       15     15       45    Spare                              
.
.End of Record                      60   
.
