. V6.00.001 25/07/1991 SOG Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   IBASMAFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   System Master                      
. *
. * File Type     :   SQL
. *
. * File Name     :   ibasmaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBASMAA1   IFILE    SQL, FIXED=118, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBSMNUMB  DIM       3      3        1     System Number                      
IBSMNAME  DIM       20     20       4     English Name                       
IBSMNATV  DIM       20     20       24    Native System Name Default         
IBSMHEAD  DIM       35     35       44    Menu Heading                       
IBSMDMPG  DIM       8      8        79    Default Menu Program               
IBSMAVAL  DIM       1      1        87    Available                          
IBSMSPAR  DIM       30     30       88    Spare                              
.
.End of Record                      118  
.
