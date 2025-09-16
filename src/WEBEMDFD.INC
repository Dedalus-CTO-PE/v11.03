. V11.01.01 02/12/2021 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBEMDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW-ECM Medical Events
. *
. * File Type     :   SQL
. *
. * File Name     :   webemdaf.dat
. *
. * Index Values  :   KEY25   KEY49   KEY61                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBEMDA1   IFILE    SQL, FIXED=188, KEY="U1-20,21-23,24-25"
WEBEMDA2   IFILE    SQL, FIXED=188, KEY="U28-51,1-20,21-23,24-25"
WEBEMDA3   IFILE    SQL, FIXED=188, KEY="U52-87,1-20,21-23,24-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEVARID  DIM       20     20       1     Account Reference ID               
WBEVRPTC  DIM       3      3        21    Report counter (right just.)       
WBEVMEVC  DIM       2      2        24    Medical Event counter (right just.)
WBEVMEID  DIM       2      2        26    Medical Event Id                   
WBEVTRID  DIM       24     24       28    Transaction ID                     
WBEVMSID  DIM       36     36       52    Message ID                         
WBEVSPAR  DIM       100    100      88    Spare Variable                     
.
.End of Record                      188  
.
