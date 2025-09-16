. V10.01.01 01/03/2011 EC  Created FD CAR 207295                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSVKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Transfer Source Code Key Word Index
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsvkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSVKIA1   IFILE    SQL, FIXED=61, KEY="U1-5,6-35"                              
PMSVKIA2   IFILE    SQL, FIXED=61, KEY="U6-35,1-5"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMVKCODE  DIM       5      5        1     Transfer Destination Code          
PMVKKKWD  DIM       30     30       6     Key Word                           
PMVKSPAR  DIM       25     25       36    Spare                              
.
.End of Record                      61   
.
