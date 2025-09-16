. V6.00.003 10/10/1991 BGA Changed to Source Code ID                         
. V6.00.004 10/10/1991                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRVERFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Version Control                    
. *
. * File Type     :   SQL
. *
. * File Name     :   scrveraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRVERA1   IFILE    SQL, FIXED=63, KEY="U1-12,13-15"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCVESID   DIM       12     12       1     Source Code File                   
SCVEVER   DIM       3      3        13    Version                            
SCVEWHO   DIM       3      3        16    Who Changed It                     
SCVEDAT   DIM       8      8        19    Date Changed                       
SCVESRF   DIM       8      8        27    Srf Number                         
SCVEQUO   DIM       8      8        35    Quote                              
SCVESPA   DIM       20     20       43                                       
.
.End of Record                      63   
.
