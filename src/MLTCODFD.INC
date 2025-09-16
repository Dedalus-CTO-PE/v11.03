. V9.05.001 07/03/2006 EC  Created FD CAR 78533                              
. *----------------------------------------------------------------------
. * Include Name  :   MLTCODFD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital                     
. *                   Category Codes                     
. *
. * File Type     :   SQL
. *
. * File Name     :   mltcodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTCODA1   IFILE    SQL, FIXED=59, KEY="U1-3,4-5,6-8"                           
MLTCODA2   IFILE    SQL, FIXED=59, KEY="U4-5,6-8,1-3"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MLCOHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
MLCOTCOD  DIM       2      2        4     Type of Code to Table              
MLCOACOD  DIM       3      3        6     Actual Code                        
MLCOSPAR  DIM       50     50       9     Spare                              
.
.End of Record                      59   
.
