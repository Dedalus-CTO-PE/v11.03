. V11.01.02 19/04/2021 PVL C-0902857 Fixed Fund Reference ID length             
. V11.01.01 13/04/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHFFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices Claim Ass Explanat     
. *
. * File Type     :   SQL
. *
. * File Name     :   webihfaf.dat
. *
. * Index Values  :   KEY45   KEY69   KEY81                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHFA1   IFILE    SQL, FIXED=290, KEY="U1-3,4-23,24-38,39-41,42-43,44-45"
WEBIHFA2   IFILE    SQL, FIXED=290, KEY="U130-153,1-3,4-23,24-38,39-41,42-43,44-45"
WEBIHFA3   IFILE    SQL, FIXED=290, KEY="U154-189,1-3,4-23,24-38,39-41,42-43,44-45"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBINFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBINARID  DIM       20     20       4     Account Reference ID               
WBINFRID  DIM       15     15       24    Fund Reference ID                  
WBINRPTC  DIM       3      3        39    Report counter (right justified)   
WBINCACN  DIM       2      2        42    Claim Assessment Counter (right ju)
WBINEXCN  DIM       2      2        44    Explanation Counter (right just)   
WBINEXCD  DIM       4      4        46    Explanation Code                   
WBINEXTX  DIM       80     80       50    Explanation Text                   
WBINTRID  DIM       24     24       130   Transaction ID                     
WBINMSID  DIM       36     36       154   Message ID                         
WBINSPAR  DIM       100    100      190   Spare Variable                     
.
.End of Record                      290  
.
