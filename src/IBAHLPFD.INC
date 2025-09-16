. V6.00.001 28/08/0091 SOG Created                                           
. V6.00.002 28/08/0091 SOG Added 2nd Index                                   
. V6.00.003 16/09/0091 BGA Fix index 2                                       
. V6.00.004 16/09/0091 BGA fix text length                                   
. *----------------------------------------------------------------------
. * Include Name  :   IBAHLPFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Help Details                       
. *
. * File Type     :   SQL
. *
. * File Name     :   ibahlpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAHLPA1   IFILE    SQL, FIXED=96, KEY="U1-8,9-11"                              
IBAHLPA2   IFILE    SQL, FIXED=96, KEY="U9-11,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBHPNAME  DIM       8      8        1     Help Screen Name                   
DIBHPLIN  DIM       3      3        9     Line Number                        
IBHPLINK  DIM       8      8        12    Linked Help Screen                 
IBHPTEXT  DIM       76     76       20    Text                               
.
.End of Record                      96   
.
.Redefine Key Variables
.----------------------
IBHPLINE  FORM      3    
