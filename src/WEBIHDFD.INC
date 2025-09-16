. V11.01.02 19/04/2021 PVL C-0902857 Fixed Fund Reference ID length             
. V11.01.01 13/04/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Assessment Report 
. *
. * File Type     :   SQL
. *
. * File Name     :   webihdaf.dat
. *
. * Index Values  :   KEY41   KEY65   KEY77                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHDA1   IFILE    SQL, FIXED=483, KEY="U1-3,4-23,24-38,39-41"
WEBIHDA2   IFILE    SQL, FIXED=483, KEY="U271-294,1-3,4-23,24-38,39-41"
WEBIHDA3   IFILE    SQL, FIXED=483, KEY="U295-330,1-3,4-23,24-38,39-41"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIKFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIKARID  DIM       20     20       4     Account Reference ID               
WBIKFRID  DIM       15     15       24    Fund Reference ID                  
WBIKRPTC  DIM       3      3        39    Report counter (right just.)       
WBIKSTAT  DIM       50     50       42    Status                             
WBIKFSCD  DIM       4      4        92    Fund Status Code                   
WBIKFSTX  DIM       80     80       96    Fund Status Text                   
WBIKCFAC  DIM       1      1        176   Claim Fund Assessment Code         
WBIKCPAM  DIM       9      9        177   CoPayment Amount                   
WBIKEXAM  DIM       9      9        186   Excess Amount                      
WBIKFCID  DIM       8      8        195   Facility ID                        
WBIKTBAM  DIM       9      9        203   Total Benefit Amount               
WBIKTCAM  DIM       9      9        212   Total Charge Amount                
WBIKRSTA  DIM       50     50       221   Report Status                      
WBIKFTID  DIM       24     24       271   Claim Transaction ID               
WBIKMSID  DIM       36     36       295   Message ID                         
WBIKCUID  DIM       10     10       331   Created By User ID                 
WBIKCDAT  DIM       8      8        341   Date Created                       
WBIKCTIM  DIM       8      8        349   Time Created                       
WBIKUUID  DIM       10     10       357   Update By User ID                  
WBIKUDAT  DIM       8      8        367   Date Updated                       
WBIKUTIM  DIM       8      8        375   Time Updated                       
WBIKSPAR  DIM       100    100      383   Spare Variable                     
.
.End of Record                      483  
.
