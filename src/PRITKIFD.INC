. V9.03.001 30/01/2004 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PRITKIFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Pathology Test Keyword File        
. *
. * File Type     :   SQL
. *
. * File Name     :   pritkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRITKIA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PRITKIA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRTKPTST  DIM       9      9        1     Test Code                          
PRTKPKWD  DIM       15     15       10    Key Word                           
PRTKPSPA  DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
