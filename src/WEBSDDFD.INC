. V11.01.01 07/07/2021 PVL C-0908734 Created WebServices SDDW FD                
. *----------------------------------------------------------------------
. * Include Name  :   WEBSDDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices SDDW Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   websddaf.dat
. *
. * Index Values  :   KEY30   KEY17   KEY24   KEY24   KEY35   KEY40   KEY53  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSDDA1   IFILE    SQL, FIXED=706, KEY="U1-3,4-5,6-6,7-14,15-22,23-30"
WEBSDDA2   IFILE    SQL, FIXED=706, KEY="U15-22,23-30,6-6"
WEBSDDA3   IFILE    SQL, FIXED=706, KEY="U23-30,7-14,15-22"
WEBSDDA4   IFILE    SQL, FIXED=706, KEY="U7-14,15-22,23-30"
WEBSDDA5   IFILE    SQL, FIXED=706, KEY="U1-3,31-38,7-14,15-22,23-30"
WEBSDDA6   IFILE    SQL, FIXED=706, KEY="U39-62,15-22,23-30"
WEBSDDA7   IFILE    SQL, FIXED=706, KEY="U63-98,15-22,23-30,6-6"
WEBSDDA8   IFILE    SQL, FIXED=706, KEY="U4-5,1-3,6-6,7-14,15-22,23-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSWHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
DWBSWFLG  DIM       2      2        4     Eclipse Status Flag                
.                                         0 = Waiting                          
.                                         1 = Request Sent                     
.                                         2 = Response Processed               
WBSWMODL  DIM       1      1        6     webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
WBSWUNIQ  DIM       8      8        7     Unique Identifier                  
WBSWINVN  DIM       8      8        15    Invoice Number                     
WBSWBATN  DIM       8      8        23    Batch Number                       
WBSWURNO  DIM       8      8        31    U/R Number                         
WBSWTRID  DIM       24     24       39    Claim Transaction Id               
WBSWMSID  DIM       36     36       63    Message ID                         
WBSWEROR  DIM       4      4        99    Error Code Returned                
WBSWTEXT  DIM       500    500      103   Error Reason Text                  
WBSWRESC  DIM       3      3        603   Reason Code CAT rn                 
WBSWSPAR  DIM       100    100      606   Spare Variable                     
.
.End of Record                      706  
.
. Redefine FORM fields from key
. -----------------------------
WBSWFLAG  FORM      2
