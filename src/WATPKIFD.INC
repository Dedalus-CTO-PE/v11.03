. V9.04.001 26/09/2005 EC  Created FD CAR 57956                              
. *----------------------------------------------------------------------
. * Include Name  :   WATPKIFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Procedure Key Words   
. *
. * File Type     :   SQL
. *
. * File Name     :   watpkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATPKIA1   IFILE    SQL, FIXED=110, KEY="U1-9,10-59"                            
WATPKIA2   IFILE    SQL, FIXED=110, KEY="U10-59,1-9"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTPKCODE  DIM       9      9        1     Procedure Code                     
WTPKKKWD  DIM       50     50       10    Key Word                           
WTPKSPAR  DIM       50     50       60    Spare                              
.
.End of Record                      110  
.
