. C1.00.001 21/03/1997 BGA Corporate Database Table                          
. C1.00.001 21/03/1997                                                       
. C1.00.001 03/04/1997                                                       
. C1.00.001 03/04/1997                                                       
. *----------------------------------------------------------------------
. * Include Name  :   IBADBSFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Database ID Maintenance            
. *
. * File Type     :   SQL
. *
. * File Name     :   ibadbsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBADBSA1   IFILE    SQL, FIXED=527, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBDBDBS   DIM       3      3        1     Database ID                        
IBDBDES   DIM       35     35       4     Description                        
IBDBDB01  DIM       40     40       39    Path 1 Supply & Inventory          
IBDBDB02  DIM       40     40       79    Path 2                             
IBDBDB03  DIM       40     40       119   Path 3                             
IBDBDB04  DIM       40     40       159   Path 4                             
IBDBDB05  DIM       40     40       199   Path 5                             
IBDBDB06  DIM       40     40       239   Path 6                             
IBDBDB07  DIM       40     40       279   Path 7                             
IBDBDB08  DIM       40     40       319   Path 8                             
IBDBDB09  DIM       40     40       359   Path 9                             
IBDBDB10  DIM       40     40       399   Path 10                            
IBDBUR1   DIM       25     25       439   User Def Ref 1                     
IBDBUR2   DIM       25     25       464   User Def Ref 2                     
IBDBUD1   DIM       8      8        489   User Def Date 1                    
IBDBUD2   DIM       8      8        497   User Def Date 2                    
IBDBUY1   DIM       1      1        505   User Def Y/N 1                     
IBDBUY2   DIM       1      1        506   User Def Y/N 2                     
IBDBSPA   DIM       20     20       507   Spare                              
.
.End of Record                      527  
.
