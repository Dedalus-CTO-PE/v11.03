. V6.00.001 25/07/1991 SOG Created                                           
. V6.01.002 28/08/0091 SOG Added 2nd Index to the File                       
. *----------------------------------------------------------------------
. * Include Name  :   IBAUSEFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   User Security                      
. *
. * File Type     :   SQL
. *
. * File Name     :   ibauseaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAUSEA1   IFILE    SQL, FIXED=47, KEY="U1-4,5-7"                               
IBAUSEA2   IFILE    SQL, FIXED=47, KEY="U5-7,1-4"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBUSCODE  DIM       4      4        1     Security Code                      
IBUSSYST  DIM       3      3        5     System                             
IBUSLEVL  DIM       1      1        8     Security Level                     
IBUSMPRO  DIM       8      8        9     Menu Program                       
IBUSSPAR  DIM       30     30       17    Spare                              
.
.End of Record                      47   
.
