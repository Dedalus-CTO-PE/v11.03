. V6.00.001 25/07/1991 SOG Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   IBAMDPFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Menu Display                       
. *
. * File Type     :   SQL
. *
. * File Name     :   ibamdpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAMDPA1   IFILE    SQL, FIXED=196, KEY="U1-3,4-5"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBMDMENU  DIM       3      3        1     Menu Id                            
IBMDLINE  DIM       2      2        4     Line No                            
IBMDDATA  DIM       80     80       6     Display Data                       
IBMDATTR  DIM       80     80       86    Display Attributes                 
IBMDSPAR  DIM       30     30       166   Spare                              
.
.End of Record                      196  
.
