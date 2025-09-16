. V10.12.01 04/04/2018 TNG C-0841644 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSGKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Impairment Group Keywords          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsgkiaf.dat
. *
. * Index Values  :   KEY33   KEY33                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSGKIA1   IFILE    SQL, FIXED=64, KEY="U1-3,4-33"
PMSGKIA2   IFILE    SQL, FIXED=64, KEY="U4-33,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMGKCODE  DIM       3      3        1     Impairment Group Code              
PMGKKKWD  DIM       30     30       4     Impairment Group Keyword           
PMGKSPAR  DIM       30     30       34    Spare Variable                     
.
.End of Record                      64   
.
