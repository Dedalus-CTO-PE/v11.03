. V9.04.000 01/02/2005 EC Created FD    CAR 56707
. *----------------------------------------------------------------------
. * Include Name  :   OUTDCHFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Default Charges Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   outdchaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTDCHA1   IFILE    SQL, FIXED=111, KEY="U1-3,4-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTDCSLTY  DIM       3      3        1     Slot Type - Category CV            
OTDCREGR  DIM       1      1        4     Registrar (Y/N) 0-No 1-Yes         
OTDCIFLG  DIM       2      2        5     Item Type 0=MBS 1=AMA              
OTDCITMN  DIM       9      9        7     MBS Item Number                    
OTDCSUBN  DIM       3      3        16    MBS Subitem Number                 
OTDCWCRT  DIM       10     10       19    Websec ID created                  
OTDCDCRT  DIM       8      8        29    Date Created                       
OTDCTCRT  DIM       8      8        37    Time Created                       
OTDCWUPD  DIM       10     10       45    WEBSEC ID Updated                  
OTDCDUPD  DIM       8      8        55    Date Updated                       
OTDCTUPD  DIM       8      8        63    Time Updated                       
OTDCSPAR  DIM       40     40       71    Spare variable                     
.
.End of Record                      111  
.
