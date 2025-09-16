. V11.01.01 21/05/2021 PVL C-0906538 Created FD.                                
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCFFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PCIW Med Ev Resp Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   webpcfaf.dat
. *
. * Index Values  :   KEY49   KEY49                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCFA1   IFILE    SQL, FIXED=196, KEY="U1-22,23-46,47-49"
WEBPCFA2   IFILE    SQL, FIXED=196, KEY="U23-46,1-22,47-49"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPFCLID  DIM       22     22       1     Claim ID                           
WBPFTRID  DIM       24     24       23    Transaction ID                     
WBPFCNTR  DIM       3      3        47    Medical Event Counter              
WBPFEVDT  DIM       8      8        50    Event Date                         
WBPFMEID  DIM       2      2        58    Medical Event ID                   
WBPFMSID  DIM       36     36       60    Message ID                         
WBPFSPAR  DIM       100    100      96    Spare Variable                     
.
.End of Record                      196  
.
