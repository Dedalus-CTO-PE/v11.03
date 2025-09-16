. V10.01.01 01/03/2011 EC  Added EMDCLUID and EMDCSPAR CAR 223822             
. V9.02.001 20/09/2001 BS                                                      
. *----------------------------------------------------------------------
. * Include Name  :   EMRDCMFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Free text                          
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdcmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDCMA1   IFILE    SQL, FIXED=519, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDCADMI  DIM       8      8        1     Admissno                           
EMDCTXT1  DIM       50     50       9     Free text 1                        
EMDCTXT2  DIM       50     50       59    Free text 2                        
EMDCTXT3  DIM       50     50       109   Free text 3                        
EMDCTXT4  DIM       50     50       159   Free text 4                        
EMDCTXT5  DIM       50     50       209   Free text 5                        
EMDCTXT6  DIM       50     50       259   Free text 6                        
EMDCTXT7  DIM       50     50       309   Free text 7                        
EMDCTXT8  DIM       50     50       359   Free text 8                        
EMDCTXT9  DIM       50     50       409   Free text 9                        
EMDCLUID  DIM       10     10       459   Locked By Web User Id (websecaf)   
EMDCSPAR  DIM       50     50       469   Spare                              
.
.End of Record                      519  
.
