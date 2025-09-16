. V11.00.01 20/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPARFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices GPRW Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   webparaf.dat
. *
. * Index Values  :   KEY3    KEY43                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPARA1   IFILE    SQL, FIXED=172, KEY="U1-3"
WEBPARA2   IFILE    SQL, FIXED=172, KEY="U5-44,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPRCODE  DIM       3      3        1     Participant Code                   
WBPRTYPE  DIM       1      1        4     Participant Type                   
.                                         F = Health Fund                      
.                                         O = Other (eg DVA)                   
WBPRNAME  DIM       40     40       5     Participant Name                   
WBPRCNUM  DIM       19     19       45    Participant Contact Number         
WBPRDUPD  DIM       8      8        64    Date Health Fund Updated (ccyymmdd)
WBPRSPAR  DIM       100    100      72    Spare Variable                     
.
.End of Record                      172  
.
