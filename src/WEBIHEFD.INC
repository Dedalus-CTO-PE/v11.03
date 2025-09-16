. V11.01.02 19/04/2021 PVL C-0902857 Fixed Fund Reference ID length             
. V11.01.01 13/04/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHEFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Claim Assessment  
. *
. * File Type     :   SQL
. *
. * File Name     :   webiheaf.dat
. *
. * Index Values  :   KEY43   KEY67   KEY79                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHEA1   IFILE    SQL, FIXED=262, KEY="U1-3,4-23,24-38,39-41,42-43"
WEBIHEA2   IFILE    SQL, FIXED=262, KEY="U102-125,1-3,4-23,24-38,39-41,42-43"
WEBIHEA3   IFILE    SQL, FIXED=262, KEY="U126-161,1-3,4-23,24-38,39-41,42-43"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBILFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBILARID  DIM       20     20       4     Account Reference ID               
WBILFRID  DIM       15     15       24    Fund Reference ID                  
WBILRPTC  DIM       3      3        39    Report counter (right justified)   
WBILCACN  DIM       2      2        42    Claim Assessment Counter (right ju)
WBILELNM  DIM       50     50       44    Element Name                       
WBILMPID  DIM       8      8        94    Message Part ID                    
WBILTRID  DIM       24     24       102   Transaction ID                     
WBILMSID  DIM       36     36       126   Message ID                         
WBILSPAR  DIM       100    100      162   Spare Variable                     
.
.End of Record                      262  
.
