. V6.00.003 10/10/1991 BGA Changed to Source Code ID                         
. V6.00.004 10/10/1991                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRVCMFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Version Comments                   
. *
. * File Type     :   SQL
. *
. * File Name     :   scrvcmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRVCMA1   IFILE    SQL, FIXED=99, KEY="U1-12,13-15,16-18"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCVCSID   DIM       12     12       1     Source Code File                   
SCVCVER   DIM       3      3        13    Version                            
SCVCLIN   DIM       3      3        16    Line                               
SCVCDAT   DIM       70     70       19    Data                               
SCVCSPA   DIM       10     10       89    Spare                              
.
.End of Record                      99   
.
