. 6.06 .001 23/04/1999 kcn Created FD                                        
. V6.06.002 23/04/1999 PD  Added Spare                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSPCTFD.INC
. *
. * Function      :   File Def'n Include for WEB 
. *                   Observation Correspondance Storage Location Table
. *
. * File Type     :   SQL
. *
. * File Name     :   obspctaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSPCTA1   IFILE    SQL, FIXED=213, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBPTSLID  DIM       4      4        1     Storage Location ID                
OBPTSDIR  DIM       80     80       5     Storage Directory                  
OBPTURLP  DIM       80     80       85    URL Prefix                         
OBPTROLY  FORM      1      2        165   Read Only 0=No, 1=Yes              
OBPTCRDT  DIM       8      8        167   Date Created                       
OBPTCLDT  DIM       8      8        175   Date Closed                        
OBPTSPAR  DIM       30     30       183   Spare                              
.
.End of Record                      213  
.
