. V6.01.001 30/03/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   CASTEFFD.INC
. *
. * Function      :   File Def'n Include for Casemix Analysis System            
. *                   Type of Episode File               
. *
. * File Type     :   SQL
. *
. * File Name     :   castefaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CASTEFA1   IFILE    SQL, FIXED=89, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CATETOE   DIM       3      3        1     Type of Episode                    
CATEDES   DIM       35     35       4     Description                        
CATESPA   DIM       50     50       39                                       
.
.End of Record                      89   
.
