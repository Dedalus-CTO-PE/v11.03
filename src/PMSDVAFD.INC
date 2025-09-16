. V10.00.001 24/03/2010 EC  Added PMDVACAT CAR 218544                         
. V9.11.001 06/01/2009 EC  Created FD CAR 183976                                
. V9.11.002 06/01/2009                                                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSDVAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Eclipse Cat A DVA Accommodation    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdvaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDVAA1   IFILE    SQL, FIXED=65, KEY="U1-2,3-5"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDVACAT  DIM       2      2        1     Accommodation Category (A or BT)   
PMDVACOD  DIM       3      3        3     Accommodation Code                 
PMDVSERV  DIM       9      9        6     Accommodation Service Code         
PMDVSPAR  DIM       50     50       15    Spare                              
.
.End of Record                      65   
.
