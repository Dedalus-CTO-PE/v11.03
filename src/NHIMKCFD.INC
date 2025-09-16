. *----------------------------------------------------------------------
. * Include Name  :   NHIMKCFD.INC
. *
. * Function      :   File Def'n Include for 
. *                   NHI Medical Warning Code Search                   
. *
. * File Type     :   SQL
. *
. * File Name     :   nhimkcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NHIMKCA1   IFILE    SQL, FIXED=46, KEY="U1-2,3-8,9-23"                        
NHIMKCA2   IFILE    SQL, FIXED=46, KEY="U9-23,1-2,3-8"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHMKKTYP  DIM       2      2        1     System Code                       
NHMKKITM  DIM       6      6        3     Warning Code                          
NHMKKKWD  DIM       15     15       9     Key Word                           
NHMKSPAR  DIM       22     22       24    Spare                              
.
.End of Record                      46   
.
