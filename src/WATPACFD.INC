. v9.00.001 08/06/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   WATPACFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Pre-Admission Comments
. *
. * File Type     :   SQL
. *
. * File Name     :   watpacaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATPACA1   IFILE    SQL, FIXED=120, KEY="U1-8,9-17,18-19,20-21"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTPCURNO  DIM       8      8        1     U/R Number                         
WTPCPCOD  DIM       9      9        9     Procedure Code                     
WTPCPCNT  DIM       2      2        18    Procedure Count                    
WTPCLINE  DIM       2      2        20    Comments Line                      
WTPCCOMM  DIM       70     70       22    Comments Text                      
WTPCSPAR  DIM       28     28       92    Spare Variable                     
.
.End of Record                      120  
.
