. V5.07.000 14/10/1999 nmh Port to 5.07                                      
. V6.06.001 23/04/1999 nmh Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   EMRINVFD.INC
. *
. * Function      :   File Def'n Include for WEB                          
. *                   Emergency Investigation Fields     
. *
. * File Type     :   SQL
. *
. * File Name     :   emrinvaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRINVA1   IFILE    SQL, FIXED=290, KEY="U1-8,9-10,11-13"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMINADMN  DIM       8      8        1     Visit No                           
EMINRTYP  DIM       2      2        9     Record Type                        
EMINRNUM  DIM       3      3        11    Record Number                      
EMINLUDT  DIM       8      8        14    Last Update Date                   
EMINLUTM  DIM       6      6        22    Last Update Time                   
EMINMCOD  DIM       10     10       28    Main Code                          
EMINMDAT  DIM       8      8        38    Main Date                          
EMINMTIM  DIM       6      6        46    Main Time                          
EMINREF1  DIM       50     50       52    Ref 1                              
EMINREF2  DIM       50     50       102   Ref 2                              
EMINCOD1  DIM       3      3        152   Code 1                             
EMINCOD2  DIM       3      3        155   Code 2                             
EMINCOD3  DIM       3      3        158   Code 3                             
EMINCOD4  DIM       3      3        161   Code 4                             
EMINDAT1  DIM       8      8        164   Date 1                             
EMINDAT2  DIM       8      8        172   Date 2                             
EMINTIM1  DIM       5      5        180   Time 1                             
EMINTIM2  DIM       5      5        185   Time 2                             
EMINAMT1  FORM      12.2   8        190   Amount 1                           
EMINAMT2  FORM      12.2   8        198   Amount 2                           
EMINYN01  DIM       1      1        206   Y/N 1                              
EMINYN02  DIM       1      1        207   Y/N 2                              
EMINYN03  DIM       1      1        208   Y/N 3                              
EMINYN04  DIM       1      1        209   Y/N 4                              
EMINSPAR  DIM       80     80       210   Spare                              
.
.End of Record                      290  
.
