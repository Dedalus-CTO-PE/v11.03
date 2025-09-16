. V9.03.001 10/10/2003 DS  Increased comment line to 100                     
. *----------------------------------------------------------------------
. * Include Name  :   OBSMTXFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Patient Medical Notes Free Text    
. *
. * File Type     :   SQL
. *
. * File Name     :   obsmtxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSMTXA1   IFILE    SQL, FIXED=148, KEY="U1-8,9-14,15-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBMTURNO  DIM       8      8        1     U/R Number                         
OBMTNOTE  DIM       6      6        9     Note Number                        
OBMTUNIQ  DIM       3      3        15    Line Number                        
OBMTCMNT  DIM       100    100      18    Comment Line                       
OBMTSPAR  DIM       30     30       118   Spare Variable                     
.
.End of Record                      148  
.
