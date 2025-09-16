. V11.00.01 14/12/2020 PVL C-0898361 Added WBIDMAMN to WBIDMAGN                 
. V11.00.01 08/12/2020 PVL C-0898361 Created Table IMCW RTVW Assessment Reports 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW Assessment Report 
. *
. * File Type     :   SQL
. *
. * File Name     :   webimdaf.dat
. *
. * Index Values  :   KEY32   KEY56   KEY68                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMDA1   IFILE    SQL, FIXED=757, KEY="U1-3,4-23,24-29,30-32"
WEBIMDA2   IFILE    SQL, FIXED=757, KEY="U545-568,1-3,4-23,24-29,30-32"
WEBIMDA3   IFILE    SQL, FIXED=757, KEY="U569-604,1-3,4-23,24-29,30-32"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIDFBID  DIM       3      3        1     Fund Brand ID (Participant Code)   
WBIDARID  DIM       20     20       4     Account Reference ID (Invoice)     
WBIDCLID  DIM       6      6        24    Medicare Assessment Claim ID       
WBIDRPTC  DIM       3      3        30    Report counter (right just.)       
WBIDTRST  DIM       50     50       33    Transaction Status                 
WBIDRPST  DIM       50     50       83    IMCW Report Status                 
WBIDMSTC  DIM       4      4        133   Medicare Status Code               
WBIDMSTT  DIM       80     80       137   Medicare Status Text               
WBIDMCMN  DIM       10     10       217   Medicare Member Number             
WBIDMCRN  DIM       1      1        227   Medicare Member Ref Number         
WBIDMCGN  DIM       40     40       228   Medicare Member Given Name         
WBIDHFSC  DIM       4      4        268   Health Fund Status Code            
WBIDHFST  DIM       80     80       272   Health Fund Status Text            
WBIDMAFL  DIM       8      8        352   Medicare Assessment Fund Loc Id    
WBIDMALD  DIM       8      8        360   Medicare Assessment Lodgement Date 
WBIDMAMN  DIM       10     10       368   Medicare Assessment Medicare Number
WBIDMARN  DIM       1      1        378   Medicare Assessment Ref Number     
WBIDMAFN  DIM       40     40       379   Medicare Assessment Family Name    
WBIDMAGN  DIM       40     40       419   Medicare Assessment Given Name     
WBIDHFAC  DIM       1      1        459   Health Fund Assessment Code        
WBIDHFAP  DIM       1      1        460   Health Fund Assessment Auth To Pay 
WBIDHFEC  DIM       4      4        461   Health Fund Assessment Expl Code   
WBIDHFET  DIM       80     80       465   Health Fund Assessment Expl Text   
WBIDTRID  DIM       24     24       545   Transaction ID                     
WBIDMSID  DIM       36     36       569   Message ID                         
WBIDCUID  DIM       10     10       605   Created By User ID                 
WBIDCDAT  DIM       8      8        615   Date Created                       
WBIDCTIM  DIM       8      8        623   Time Created                       
WBIDUUID  DIM       10     10       631   Update By User ID                  
WBIDUDAT  DIM       8      8        641   Date Updated                       
WBIDUTIM  DIM       8      8        649   Time Updated                       
WBIDSPAR  DIM       100    100      657   Spare Variable                     
.
.End of Record                      757  
.
