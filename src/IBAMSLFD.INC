. V6.00.005 27/09/1991                                                       
. *----------------------------------------------------------------------
. * Include Name  :   IBAMSLFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Menu Selection                     
. *
. * File Type     :   SQL
. *
. * File Name     :   ibamslaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAMSLA1   IFILE    SQL, FIXED=46, KEY="U1-3,4-6"                               
IBAMSLA2   IFILE    SQL, FIXED=46, KEY="U1-3,9-11,4-6"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBMSMENU  DIM       3      3        1     Menu Id                            
IBMSSELC  DIM       3      3        4     Selection                          
IBMSTYPE  FORM      1      2        7     Type  0=IBA System, 1=Unix Execute 
IBMSNUMB  DIM       3      3        9     System Number                      
IBMSCOMD  DIM       30     30       12    Unix Command                       
IBMSDBCD  DIM       4      4        42    Database Code                      
.
.End of Record                      46   
.
