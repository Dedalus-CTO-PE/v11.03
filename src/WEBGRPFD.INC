. V9.11.001 18/03/2009 EC  Created FD CAR 190945                                
. *----------------------------------------------------------------------
. * Include Name  :   WEBGRPFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Web Security Groups                
. *
. * File Type     :   SQL
. *
. * File Name     :   webgrpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBGRPA1   IFILE    SQL, FIXED=209, KEY="U1-10"                                 
WEBGRPA2   IFILE    SQL, FIXED=209, KEY="U11-60,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBGRGRPC  DIM       10     10       1     Group Code                         
WBGRDESC  DIM       50     50       11    Group Description                  
WBGRSURL  DIM       70     70       61    Security URL                       
WBGRACTV  DIM       1      1        131   Active (0=Active 1=Inactive)       
WBGRCDAT  DIM       8      8        132   Date Record Created (CCYYMMDD)     
WBGRCTIM  DIM       8      8        140   Time Record Created (HH:MM:SS)     
WBGRCUID  DIM       10     10       148   Web User Id Created (websecaf)     
WBGRUDAT  DIM       8      8        158   Date Record Updated (CCYYMMDD)     
WBGRUTIM  DIM       8      8        166   Time Record Updated (HH:MM:SS)     
WBGRUUID  DIM       10     10       174   Web User Id Updated (webcecaf)     
WBGRSPAR  DIM       25     25       184   Spare                              
.
.End of Record                      209  
.
