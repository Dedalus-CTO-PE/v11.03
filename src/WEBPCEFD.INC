. V11.01.02 16/06/2021 PVL C-0906538 Increased file length to 760 (759 is reserv
. V11.01.01 20/05/2021 PVL C-0906538 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCEFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PCIW Ass Resp Tabl     
. *
. * File Type     :   SQL
. *
. * File Name     :   webpceaf.dat
. *
. * Index Values  :   KEY46   KEY46   KEY58   KEY96                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCEA1   IFILE    SQL, FIXED=760, KEY="U51-72,599-622"
WEBPCEA2   IFILE    SQL, FIXED=760, KEY="U599-622,51-72"
WEBPCEA3   IFILE    SQL, FIXED=760, KEY="U623-658,51-72"
WEBPCEA4   IFILE    SQL, FIXED=760, KEY="U1-50,51-72,599-622"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPESTAT  DIM       50     50       1     Status                             
WBPECLID  DIM       22     22       51    Claim ID                           
WBPECCMN  DIM       10     10       73    Claimant CurrentMem Member Number  
WBPECCMR  DIM       1      1        83    Claimant CurrentMem Ref Number     
WBPEPCMN  DIM       10     10       84    Patient CurrentMem Member Number   
WBPEPCMR  DIM       1      1        94    Patient CurrentMem Ref Number      
WBPEECDE  DIM       4      4        95    Error Code                         
WBPEETXT  DIM       500    500      99    Error Text                         
WBPETRID  DIM       24     24       599   Transaction ID                     
WBPEMSID  DIM       36     36       623   Message ID                         
WBPESPAR  DIM       101    101      659   Spare Variable                     
.
.End of Record                      760  
.
