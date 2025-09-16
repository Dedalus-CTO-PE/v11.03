. V10.11.01 02/10/2017 SA C-0816814 File Definition created                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSVSTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Clinical Coding Value Set ID       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsvstaf.dat
. *
. * Index Values  :   KEY3                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSVSTA1   IFILE    SQL, FIXED=626, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMVTVSID  DIM       3      3        1     Value Set ID                       
PMVTVSNM  DIM       50     50       4     Value Set Name                     
PMVTVURL  DIM       256    256      54    Value Set URL                      
PMVTFURL  DIM       256    256      310   FIHR Local URL                     
PMVTHDPE  DIM       30     30       566   HDP Equivalent Value               
PMVTSPAR  DIM       30     30       596   Spare Variable                     
.
.End of Record                      626  
.
