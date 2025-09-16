. V6.00.002 15/01/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRFDTFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Function Details                   
. *
. * File Type     :   SQL
. *
. * File Name     :   scrfdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRFDTA1   IFILE    SQL, FIXED=114, KEY="U1-8,9-16,17-21"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCFDFID   DIM       8      8        1     Function Call ID                   
SCFDPID   DIM       8      8        9     Program ID (SP8=Global Function)   
SCFDLIN   DIM       5      5        17    Line Number                        
SCFDCOD   DIM       80     80       22    Code Line                          
SCFDSPA   DIM       12     12       102   Spare                              
.
.End of Record                      114  
.
