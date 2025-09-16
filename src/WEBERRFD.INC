. V9.00.001 21/09/2001 bga New Web Error Logging Table                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBERRFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Web Server Error Logging           
. *
. * File Type     :   SQL
. *
. * File Name     :   weberraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBERRA1   IFILE    SQL, FIXED=177, KEY="U1-8,9-16,17-24"                       
WEBERRA2   IFILE    SQL, FIXED=177, KEY="U9-16,17-24,1-8"                       
WEBERRA3   IFILE    SQL, FIXED=177, KEY="U25-34,9-16,17-24,1-8"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBERPID   DIM       8      8        1     Program ID                         
WBERDAT   DIM       8      8        9     Error Date                         
WBERTIM   DIM       8      8        17    Error Time                         
WBERUID   DIM       10     10       25    User ID                            
WBERREP   DIM       2      2        35    Report No                          
WBERTMP   DIM       3      3        37    Template                           
WBERURN   DIM       8      8        40    U/R                                
WBERVIS   DIM       8      8        48    Visit No                           
WBERCNT   DIM       3      3        56    Server Error Count                 
WBERERR   DIM       40     40       59    Program Error                      
WBERSPA   DIM       78     78       99    Spare                              
.
.End of Record                      177  
.
