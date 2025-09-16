. V9.11.001 18/03/2009 EC  Created FD CAR 190945                                
. *----------------------------------------------------------------------
. * Include Name  :   WEBSGPFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Web User Security Groups           
. *
. * File Type     :   SQL
. *
. * File Name     :   websgpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSGPA1   IFILE    SQL, FIXED=46, KEY="U1-10,11-20"                            
WEBSGPA2   IFILE    SQL, FIXED=46, KEY="U11-20,1-10"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSGUSID  DIM       10     10       1     User ID                            
WBSGGRPC  DIM       10     10       11    Group Code                         
WBSGSPAR  DIM       25     25       21    Spare                              
.
.End of Record                      46   
.
