. V11.00.01 31/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBEEDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Claim Details     
. *
. * File Type     :   SQL
. *
. * File Name     :   webeedaf.dat
. *
. * Index Values  :   KEY30   KEY54   KEY66                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBEEDA1   IFILE    SQL, FIXED=271, KEY="U1-20,21-23,24-27,28-30"
WEBEEDA2   IFILE    SQL, FIXED=271, KEY="U111-134,1-20,21-23,24-27,28-30"
WEBEEDA3   IFILE    SQL, FIXED=271, KEY="U135-170,1-20,21-23,24-27,28-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEDARID  DIM       20     20       1     Account Reference ID               
WBEDRPTC  DIM       3      3        21    Report counter (right just.)       
WBEDCFEC  DIM       4      4        24    Claim Fund Explanation Code        
WBEDEXPC  DIM       3      3        28    Explanation Code Counter (rj)      
WBEDCFET  DIM       80     80       31    Claim Fund Explanation Text        
WBEDCTID  DIM       24     24       111   Claim Transaction ID               
WBEDMSID  DIM       36     36       135   Message Id                         
WBEDSPAR  DIM       100    100      171   Spare Variable                     
.
.End of Record                      271  
.
