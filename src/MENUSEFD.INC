. V6.00.001 13/05/1993 BGA Load and Make Menu Programs                       
. *----------------------------------------------------------------------
. * Include Name  :   MENUSEFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Menu Generator Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   menuserf.dat
. *
. *----------------------------------------------------------------------
.
MRECLEN   FORM     3
.
.Data File Definition
.--------------------
MENUSER1   IFILE    SQL, FIXED=MRECLEN, KEY="U1-8,9-11,12-13,14-15"        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MEUSMENU  DIM       8      8        1     Menu                               
MEUSK2    DIM       3      3        9     Key Segment 2                      
MEUSK3    DIM       2      2        12    Key Segment 3                      
MEUSK4    DIM       2      2        14    Key Segment 4                      
MEUSD1    DIM       64     64       16    Data Segment 1                     
MEUSD2    DIM       100    100      80    Data Segment 2                     
.
.End of Record                      180  
.
