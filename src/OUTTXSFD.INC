. v9.02.001 31/10/2002 SL  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   OUTTXSFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Extra Template Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   outtxsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTTXSA1   IFILE    SQL, FIXED=79, KEY="U1-6,7-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTTXSITE  DIM       6      6        1     SITE CODE                          
OTTXCTYP  DIM       6      6        7     CLINIC TYPE                        
OTTXBKSR  DIM       8      8        13    BOOKING SERVER NAME                
OTTXBKRN  DIM       2      2        21    BOOKING REPORT NUMBER              
OTTXBKTM  DIM       3      3        23    BOOKING TEMPLATE                   
OTTXATSR  DIM       8      8        26    ATTENDANCE SERVER NAME             
OTTXATRN  DIM       2      2        34    ATTENDANCE REPORT NUMBER           
OTTXATTM  DIM       3      3        36    ATTENDANCE TEMPLATE                
OTTXSPAR  DIM       40     40       39    SPARE VARIABLE                     
.
.End of Record                      79   
.
