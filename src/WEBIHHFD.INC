. V11.01.02 19/04/2021 PVL C-0902857 Fixed Fund Reference ID length             
. V11.01.01 13/04/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Service Ass Exp   
. *
. * File Type     :   SQL
. *
. * File Name     :   webihhaf.dat
. *
. * Index Values  :   KEY45   KEY69   KEY81                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHHA1   IFILE    SQL, FIXED=290, KEY="U1-3,4-23,24-38,39-41,42-43,44-45"
WEBIHHA2   IFILE    SQL, FIXED=290, KEY="U130-153,1-3,4-23,24-38,39-41,42-43,44-45"
WEBIHHA3   IFILE    SQL, FIXED=290, KEY="U154-189,1-3,4-23,24-38,39-41,42-43,44-45"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIPFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIPARID  DIM       20     20       4     Account Reference ID               
WBIPFRID  DIM       15     15       24    Fund Reference ID                  
WBIPRPTC  DIM       3      3        39    Report counter (right justified)   
WBIPSECN  DIM       2      2        42    Service Counter (right justified)  
WBIPEXCN  DIM       2      2        44    Explanation Counter (right just)   
WBIPEXCD  DIM       4      4        46    Explanation Code                   
WBIPEXTX  DIM       80     80       50    Explanation Text                   
WBIPTRID  DIM       24     24       130   Transaction ID                     
WBIPMSID  DIM       36     36       154   Message ID                         
WBIPSPAR  DIM       100    100      190   Spare Variable                     
.
.End of Record                      290  
.
