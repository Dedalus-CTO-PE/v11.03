. V11.02.01 23/02/2022 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOMHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW ECM Med Event Resp
. *
. * File Type     :   SQL
. *
. * File Name     :   webomhaf.dat
. *
. * Index Values  :   KEY25   KEY49   KEY61                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOMHA1   IFILE    SQL, FIXED=188, KEY="U1-20,21-23,24-25"
WEBOMHA2   IFILE    SQL, FIXED=188, KEY="U28-51,1-20,21-23,24-25"
WEBOMHA3   IFILE    SQL, FIXED=188, KEY="U52-87,1-20,21-23,24-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOHARID  DIM       20     20       1     Account Reference ID               
WBOHRPTC  DIM       3      3        21    Report counter (right just.)       
WBOHMECT  DIM       2      2        24    Medical Event Counter (right just.)
WBOHMEID  DIM       2      2        26    Medical Event ID                   
WBOHCTID  DIM       24     24       28    Claim Transaction ID               
WBOHMSID  DIM       36     36       52    Message ID                         
WBOHSPAR  DIM       100    100      88    Spare Variable                     
.
.End of Record                      188  
.
