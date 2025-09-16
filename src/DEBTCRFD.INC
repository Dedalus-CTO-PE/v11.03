. VF.01.001 28/02/2000 SB  Added GST Code                                    
. *----------------------------------------------------------------------
. * Include Name  :   DEBTCRFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Temporary Table for Credit Note Input    
. *
. * File Type     :   SQL
. *
. * File Name     :   debtcraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBTCRA1   IFILE    SQL, FIXED=263, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBTCDEB   DIM       8      8        1     Debtor                             
DBTCDLN   DIM       3      3        9     Invoice Line Number                
DBTCITM   DIM       8      8        12    Sales Item Code                    
DBTCSDAT  DIM       8      8        20    Service Date                       
DBTCDREF  DIM       50     50       28    Debtors Reference                  
DBTCOREF  DIM       50     50       78    Our Reference                      
DBTCQTY   FORM      8.2    6        128   Quantity                           
DBTCPRI   FORM      12.4   9        134   Price                              
DBTCTOT   FORM      12.2   8        143   Extended Total                     
DBTCTRT   FORM      4.2    4        151   Tax Rate                           
DBTCTAX   FORM      12.2   8        155   Tax Amount                         
DBTCUR1   DIM       25     25       163   User Def Ref 1                     
DBTCUR2   DIM       25     25       188   User Def Ref 2                     
DBTCUD1   DIM       8      8        213   User Def Date 1                    
DBTCUD2   DIM       8      8        221   User Def Date 2                    
DBTCUY1   DIM       1      1        229   User Def Y/N 1                     
DBTCUY2   DIM       1      1        230   User Def Y/N 2                     
DBTCUC1   DIM       3      3        231   User Def Code 1                    
DBTCUC2   DIM       3      3        234   User Def Code 2                    
DBTCUC3   DIM       3      3        237   User Def Code 3                    
DBTCUC4   DIM       3      3        240   User Def Code 4                    
DBTCGST   DIM       6      6        243   GST Code                           
DBTCSPA   DIM       14     14       249   Spare                              
.
.End of Record                      263  
.
