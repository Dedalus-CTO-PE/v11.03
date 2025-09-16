. V11.00.02 23/09/2020 PVL C-0895969 Added Index 2                              
. V11.00.01 31/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBSEDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Services Details  
. *
. * File Type     :   SQL
. *
. * File Name     :   websedaf.dat
. *
. * Index Values  :   KEY44   KEY68   KEY80                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSEDA1   IFILE    SQL, FIXED=285, KEY="U1-20,21-23,24-34,35-37,38-41,42-44"
WEBSEDA2   IFILE    SQL, FIXED=285, KEY="U125-148,1-20,21-23,24-34,35-37,38-41,42-44"
WEBSEDA3   IFILE    SQL, FIXED=285, KEY="U149-184,1-20,21-23,24-34,35-37,38-41,42-44"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSDARID  DIM       20     20       1     Account Reference ID               
WBSDRPTC  DIM       3      3        21    Report counter (right just.)       
WBSDSCOD  DIM       11     11       24    Service Code                       
WBSDSRVC  DIM       3      3        35    Service counter (right justified)  
WBSDSFEC  DIM       4      4        38    Service Fund Explanation Code      
WBSDSEXC  DIM       3      3        42    Service explanation code counter (r
WBSDSFET  DIM       80     80       45    Service Fund Explanation Text      
WBSDTRID  DIM       24     24       125   Transaction ID                     
WBSDMSID  DIM       36     36       149   Message ID                         
WBSDSPAR  DIM       100    100      185   Spare Variable                     
.
.End of Record                      285  
.
