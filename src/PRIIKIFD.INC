. V9.03.001 10/12/2003 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PRIIKIFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   AMA/MBS Item Key Word Index        
. *
. * File Type     :   SQL
. *
. * File Name     :   priikiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIIKIA1   IFILE    SQL, FIXED=37, KEY="U1-2,3-11,12-26"                        
PRIIKIA2   IFILE    SQL, FIXED=37, KEY="U1-2,12-26,3-11"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRIKTFLG  DIM       2      2        1     Item Type 0=MBS 1=AMA              
PRIKKITM  DIM       9      9        3     AMA/MBS Item Code                  
PRIKKKWD  DIM       15     15       12    Key Word                           
PRIKKSPA  DIM       10     10       27    Spare                              
.
.End of Record                      37   
.
